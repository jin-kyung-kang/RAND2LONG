%macro import_xlsx_map (table);
/* Auxiliary macro vars */
%let rssi_max  = 11;   /* Maximum number of SSI episodes */
%let hrswv_max =15;    /* Number of waves */

%put ===>  Macro `import_xlsx_map` STARTS for table &table;
%let tmp = &xlsx_path\&xlsx_name..xlsx;
%put tmp := &tmp;
%let mapx = &table._map;
%put mapx :=&mapx;
ods html exclude all;
proc import 
    out=_temp_ 
    datafile="&tmp" 
    dbms=xlsx
    replace;
    sheet = "&mapx";   
    getnames=YES;
run;
quit;

%put --- Macro `import_xlsx_map` for table &table  (STEP 1);
%let varexist =%varexist(WORK._TEMP_, wave_summary);
%put varexist := &varexist;

data _temp_;
  set _temp_;
  %if %varexist(_temp_, wave_summary) %then drop wave_summary;;
  %if %varexist(_temp_, wave_pattern) %then drop wave_pattern;;
run;


/*=== Increase length of selected variables ==== */
/* - clength variable */
proc sql noprint;
alter table _temp_
  modify clength char(5) format = $5.,
         /* wave_pattern char(40) format = $40., */
         /* wave_summary char(40) format = $40., */
         dispatch char(100) format = $100.
         ;       
quit;

/*=== RSSI table ====*/
%if %upcase(&table) = RSSI %then %do;
%let idx = %eval(&rssi_max -1); 
proc sql noprint;
alter table _temp_
  modify
 %do i=1 %to &idx;   /* Ex. 11-1=10 */
    RSSI_E&i char(40) format = $40.,
 %end;
    RSSI_E&rssi_max char(40) format = $40.; /* Ex. RSSI_E11  */
quit;
%end;


/*=== Long tables only ====*/
%let tableup =%upcase(&table); 
%if (&tableup = RLONG or &tableup = HLONG or &tableup = SLONG)  %then %do;
%put --- IF RLONG or HLONG or SLONG : STEP 3A;
%let idx = %eval(&hrswv_max -1);
proc sql noprint;
alter table _temp_
  modify
 %do i=1 %to &idx;  /* Ex. 15-1=14 */
    hrs_wave&i char(40) format = $40.,
 %end;
    hrs_wave&hrswv_max char(40) format = $40.;
quit;
%end;

/*=== WIDE tables only ====*/
%let tableup =%upcase(&table); 
%if (&tableup = RWIDE or &tableup = REXIT)  %then %do;
%put --- IF RWIDE or REXIT : STEP 3A;

proc sql noprint;
alter table _temp_
  modify
    base char(200) format = $200.;
quit;
%end;


%put --- Macro `import_xlsx_map` for table &table  (sanitation);

data _temp_;
  set _temp_;
  file print;
  if _n_= 1 then put "===> Table &table is sanitized";
run;

%sanitize_temp_(label);
%sanitize_temp_(label, x=`);

%sanitize_temp_(clength);
%sanitize_temp_(dispatch);
%sanitize_temp_(clength, x=`);
%sanitize_temp_(dispatch, x=`);

data _libmap0.&mapx.0 (label = "Map &mapx.0 (initial version) created from &xlsx_name..xlsx on &sysdate");
 set _temp_;
 if dispatch = "=" then dispatch = "=?"; 
run;


ods html exclude none;
%traceit_print(&mapx.0, libname= _libmap0);
ods html exclude all;

%put --- Macro `import_xlsx_map` EXIT (table =&table);
%put; 

%mend import_xlsx_map;

