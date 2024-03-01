

%let data = slong_table;

/* --- Code works without using SAS formats */
options nofmterr nocenter;
Title "Table &data.. PROC CONTENTS";
proc contents data=lib.&data out= contents(keep= memname varnum name type format label nobs) noprint;
run;

proc sort data=contents;
by varnum;
run;

Title2 "Table &data.. Contents Part 1/2";
proc print data=contents;
var varnum name label;
run;

Title2 "Table &data.. Contents Part 2/2";
proc print data=contents;
var varnum name type format nobs;;
run;

Title "Table: &data.. Selected hhids";
proc print data = lib.&data;
var  HHID PN SUBHH WAVE_NUMBER INW HACOHORT S_HHIDPN STUDYYR S_HECOV3 S_YR;
where hhid in  ('010533','500121', '208867');
run;


Title "Table: &data.. Number of rows (respondents) per wave/study year";
proc freq data = lib.&data;
table wave_number /nopercent norow nocol;
table studyyr;
table wave_number*S_YR /missing nopercent norow nocol;
run;

Title "Table: &data.. PROC FREQ without SAS formats";
Title2 "All missing data categories listed";
proc freq data = lib.&data;
tables S_YR / missing; 
tables S_GENDER/missing;
tables S_NHMLIV/missing; 

run;

Title2 "Table: &data.. All missing values combined";
proc freq data = lib.&data;
tables S_YR S_GENDER S_NHMLIV; 

run;
