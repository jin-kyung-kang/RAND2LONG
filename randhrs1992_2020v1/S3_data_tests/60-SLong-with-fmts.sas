

%let data = slong_table;

/*--- Using SAS formats */

/* Create `work.formats` catalog */
proc format lib = WORK cntlin = lib._randfmts_long;
run;


Title "Table: &data.. Selected vars (n=50)";
proc print data = lib.&data(obs=50);
var  RAHHIDPN S_HHIDPN WAVE_NUMBER SUBHH INW HACOHORT STUDYYR S_HECOV3 S_YR;
run;


Title "Table: &data..Number of rows per study year";
proc freq data = lib.&data;
table studyyr;
run;

Title "Table: &data.. PROC FREQ with SAS formats";
Title2 "All missing data categories included";
proc freq data = lib.&data;
tables S_YR / missing; 
run;

Title2 "All missing data combined";
proc freq data = lib.&data;
tables S_YR; 
run;








