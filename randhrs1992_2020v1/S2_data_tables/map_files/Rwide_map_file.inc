/* This is map_file `Rwide_map_file.inc` for `Rwide_table` dataset */
/* Repo name := RAND2LONG-ver1 (version 0.70) */
/* Project name := randhrs1992_2020v1 */
/* Excel map: test3_maps21FEB2024.xlsx */
/* Date stamp: 29FEB24  */


%macro label_statements;
/* Table Rwide: Label statements for 60 variables */
/* Macro invoked by `create_template_longout` macro */
  label HHID  = "HHID: HHold ID / 6-Char <KEY1>";
  label PN  = "Person Number (3-CHAR) <KEY2>";
  label HHIDPN  = "HHIDPN: HHold ID + Person Number /Num";
  label RAHHIDPN  = "RAHHIDPN: HHold ID + Person Num /9-Char";
  label HACOHORT  = "HACOHORT: Sample cohort";
  label RAWTSAMP  = "RAWTSAMP: Sampling Weight";
  label RAAHDSMP  = "RAAHDSMP: AHEAD Sample-Age Elig/Ahd93 Resp";
  label RAALZHEEF  = "RAALZHEEF: Flag 1st wv special missing Alzheimers";
  label RAARTHREF  = "RAARTHREF: Flag 1st wv special missing arthritis";

 /* --Variable RABDATE : # _10 */
  label RABDATE  = "RABDATE: R birth date";
  label RABFLAG  = "RABFLAG: R flag birthdate missings";
  label RABMONTH  = "RABMONTH: R birth month";
  label RABPLACE  = "RABPLACE: R Place of Birth (Cens Region)";
  label RABPLACF  = "RABPLACF: Flag diff RABPLACE/USBORN(trk)";
  label RABYEAR  = "RABYEAR: R birth year";
  label RACANCREF  = "RACANCREF: Flag 1st wv special missing cancer";
  label RACOHBYR  = "RACOHBYR: Cohort based on birth yr";
  label RADAGE_M  = "RADAGE_M: Age at Death in Months";
  label RADAGE_Y  = "RADAGE_Y: Age at Death in Years";

 /* --Variable RADDATE : # _20 */
  label RADDATE  = "RADDATE: R death date";
  label RADEMENEF  = "RADEMENEF: Flag 1st wv special missing dementia";
  label RADIABEF  = "RADIABEF : Flag 1st wv special missing diabetes";
  label RADMONTH  = "RADMONTH: R death month";
  label RADSRC  = "RADSRC: R death date source";
  label RADTIMTDTH  = "RADTIMTDTH: Number of Months from last Core interview to Death Date";
  label RADYEAR  = "RADYEAR: R death year";
  label RAEDEGRM  = "RAEDEGRM: R Highest Degree-masked";
  label RAEDUC  = "RAEDUC: R education (categ)";
  label RAEDYRS  = "RAEDYRS: R Years of Education";

 /* --Variable RAEHSAMP : # _30 */
  label RAEHSAMP  = "RAEHSAMP: Stratum Half-Sample Code";
  label RAESTRAT  = "RAESTRAT: Std Error Stratum";
  label RAEVBRN  = "RAEVBRN: Number of Children Ever Born";
  label RAEVBRNF  = "RAEVBRNF: Flag when R responds in 1993 and 1995";
  label RAFEDUC  = "RAFEDUC: R Father's Years Education";
  label RAGENDER  = "RAGENDER: R Gender";
  label RAHEARTEF  = "RAHEARTEF: Flag 1st wv special missing heart problems";
  label RAHIBPEF  = "RAHIBPEF : Flag 1st wv special missing high blood pressure";
  label RAHISPAN  = "RAHISPAN: R Hispanic";
  label RAHRSAMP  = "RAHRSAMP: HRS Sample-Age Elig/Hrs92 Resp";

 /* --Variable RALUNGEF : # _40 */
  label RALUNGEF  = "RALUNGEF : Flag 1st wv special missing lung disease";
  label RAMEDUC  = "RAMEDUC: R Mother's Years Education";
  label RAMEMRYEF  = "RAMEMRYEF: Flag 1st wv special missing memory problem";
  label RAOAHDID  = "RAOAHDID: Overlap/AltID case-Ahead core HHIDPN";
  label RAOHRSID  = "RAOHRSID: Overlap/AltID case-HRS core HHIDPN/Num";
  label RAOVRAYR  = "RAOVRAYR: Overlap-Original ID end yr";
  label RAOVRLAP  = "RAOVRLAP: Overlap/AltID case";
  label RAPSYCHEF  = "RAPSYCHEF: Flag 1st wv special missing psych problems";
  label RARACEM  = "RARACEM: R Race-masked";
  label RARELIG  = "RARELIG: R Religion";

 /* --Variable RASLEEPEF : # _50 */
  label RASLEEPEF  = "RASLEEPEF: Flag 1st wv special missing sleep disorder";
  label RASPCT  = "RASPCT: # of spouses with ID";
  label RASPID1  = "RASPID1: HHIDPN of 1st spouse";
  label RASPID2  = "RASPID2: HHIDPN of 2nd spouse";
  label RASPID3  = "RASPID3: HHIDPN of 3rd spouse";
  label RASPID4  = "RASPID4: HHIDPN of 4th spouse";
  label RASSAGEB  = "RASSAGEB: Age R Start Rec. SocSec";
  label RASSAGEM  = "RASSAGEM: Age/months R Start Rec. SocSec";
  label RASSRECV  = "RASSRECV: R Receives SocSec";
  label RASTROKEF  = "RASTROKEF: Flag 1st wv special missing stroke";

 /* --Variable RAVETRN : # _60 */
  label RAVETRN  = "RAVETRN: R Veteran Status";
%mend label_statements;


%macro clength_statements;
/*  Table Rwide: Length statements for character and selected numeric vars */
/* Macro invoked by `create_template_longout` macro */
  length HHID $6;                           /* _1 */
  length PN $3;                             /* _2 */
  length RAHHIDPN $9;                       /* _4 */
%mend clength_statements;



%macro format_statements;
/*  Table Rwide: format statements for 21 variables */
/* Macro invoked by `create_template_longout` macro */
  format HACOHORT COHORT.;                  /* _5 */
  format RAAHDSMP AHDSMP.;                  /* _7 */
  format RABFLAG RABFLAG.;                  /* _11 */
  format RABPLACE CENDIV.;                  /* _13 */
  format RABPLACF BPLACF.;                  /* _14 */
  format RACOHBYR COHBYR.;                  /* _17 */
  format RADSRC DDSRC.;                     /* _24 */
  format RAEDEGRM EDEGRM.;                  /* _27 */
  format RAEDUC EDUC.;                      /* _28 */
  format RAEDYRS EDYRS.;                    /* _29 */
  format RAEVBRNF EVRBORNF.;                /* _33 */
  format RAFEDUC MFEDYRS.;                  /* _34 */
  format RAGENDER GENDER.;                  /* _35 */
  format RAHISPAN HISPANIC.;                /* _38 */
  format RAHRSAMP HRSAMP.;                  /* _39 */
  format RAMEDUC MFEDYRS.;                  /* _41 */
  format RAOVRLAP OVRLAP.;                  /* _46 */
  format RARACEM RACEM.;                    /* _48 */
  format RARELIG RELIG.;                    /* _49 */
  format RASSRECV YESNO.;                   /* _58 */
  format RAVETRN YESNO.;                    /* _60 */
%mend format_statements;



%macro readvar1_list;
/* List of variables to be read from input dataset */
  HHID                                      /* 1 */
  PN                                        /* 2 */
  HHIDPN                                    /* 3 */
  RAHHIDPN                                  /* 4 */
  HACOHORT                                  /* 5 */
  RAWTSAMP                                  /* 6 */
  RAAHDSMP                                  /* 7 */
  RAALZHEEF                                 /* 8 */
  RAARTHREF                                 /* 9 */
  RABDATE                                   /* 10 */
  RABFLAG                                   /* 11 */
  RABMONTH                                  /* 12 */
  RABPLACE                                  /* 13 */
  RABPLACF                                  /* 14 */
  RABYEAR                                   /* 15 */
  RACANCREF                                 /* 16 */
  RACOHBYR                                  /* 17 */
  RADAGE_M                                  /* 18 */
  RADAGE_Y                                  /* 19 */
  RADDATE                                   /* 20 */
  RADEMENEF                                 /* 21 */
  RADIABEF                                  /* 22 */
  RADMONTH                                  /* 23 */
  RADSRC                                    /* 24 */
  RADTIMTDTH                                /* 25 */
  RADYEAR                                   /* 26 */
  RAEDEGRM                                  /* 27 */
  RAEDUC                                    /* 28 */
  RAEDYRS                                   /* 29 */
  RAEHSAMP                                  /* 30 */
  RAESTRAT                                  /* 31 */
  RAEVBRN                                   /* 32 */
  RAEVBRNF                                  /* 33 */
  RAFEDUC                                   /* 34 */
  RAGENDER                                  /* 35 */
  RAHEARTEF                                 /* 36 */
  RAHIBPEF                                  /* 37 */
  RAHISPAN                                  /* 38 */
  RAHRSAMP                                  /* 39 */
  RALUNGEF                                  /* 40 */
  RAMEDUC                                   /* 41 */
  RAMEMRYEF                                 /* 42 */
  RAOAHDID                                  /* 43 */
  RAOHRSID                                  /* 44 */
  RAOVRAYR                                  /* 45 */
  RAOVRLAP                                  /* 46 */
  RAPSYCHEF                                 /* 47 */
  RARACEM                                   /* 48 */
  RARELIG                                   /* 49 */
  RASLEEPEF                                 /* 50 */
  RASPCT                                    /* 51 */
  RASPID1                                   /* 52 */
  RASPID2                                   /* 53 */
  RASPID3                                   /* 54 */
  RASPID4                                   /* 55 */
  RASSAGEB                                  /* 56 */
  RASSAGEM                                  /* 57 */
  RASSRECV                                  /* 58 */
  RASTROKEF                                 /* 59 */
  RAVETRN                                   /* 60 */
%mend readvar1_list;

%macro keep_varlist;
/* Table Rwide: List of 60 variables to keep */
  HHID
  PN
  HHIDPN
  RAHHIDPN
  HACOHORT
  RAWTSAMP
  RAAHDSMP
  RAALZHEEF
  RAARTHREF
  RABDATE
  RABFLAG
  RABMONTH
  RABPLACE
  RABPLACF
  RABYEAR
  RACANCREF
  RACOHBYR
  RADAGE_M
  RADAGE_Y
  RADDATE
  RADEMENEF
  RADIABEF
  RADMONTH
  RADSRC
  RADTIMTDTH
  RADYEAR
  RAEDEGRM
  RAEDUC
  RAEDYRS
  RAEHSAMP
  RAESTRAT
  RAEVBRN
  RAEVBRNF
  RAFEDUC
  RAGENDER
  RAHEARTEF
  RAHIBPEF
  RAHISPAN
  RAHRSAMP
  RALUNGEF
  RAMEDUC
  RAMEMRYEF
  RAOAHDID
  RAOHRSID
  RAOVRAYR
  RAOVRLAP
  RAPSYCHEF
  RARACEM
  RARELIG
  RASLEEPEF
  RASPCT
  RASPID1
  RASPID2
  RASPID3
  RASPID4
  RASSAGEB
  RASSAGEM
  RASSRECV
  RASTROKEF
  RAVETRN
%mend keep_varlist;

%macro create_template_longout;
/*  Table &table: Macro creates  `_template_longout` dataset*/;
data _template_longout;
  missing A B C D E F G H I J;
  missing K L M N O P Q R S T;
  missing U V X Y Z;
  missing _; /* _ reserved for variables not defined (blank cells) in map_info */
  %label_statements;
  %clength_statements;
  %format_statements;
  call missing(of _all_);
  stop;
run;
%mend create_template_longout;

%macro append_outtable(datain);
/*  Table Rwide: Macro creates and appends `_outtable` data */;
/*  Depends on table type through `process_data` macro */
 data _outtable;
  if 0 then set _template_longout;
   set &datain(keep = %readvar1_list %readvar2_list);
   %process_data;
   keep %keep_varlist;
 run;


 proc append base = _base_longout
             data= _outtable;
 run;
%mend append_outtable;

%macro initvars;
/*  Initialize output variables, unless they are included in the input dataset */
  /* HHID variable already included  */
  /* PN variable already included  */
  /* HHIDPN variable already included  */
  /* RAHHIDPN variable already included  */
  /* HACOHORT variable already included  */
  /* RAWTSAMP variable already included  */
  /* RAAHDSMP variable already included  */
  /* RAALZHEEF variable already included  */
  /* RAARTHREF variable already included  */
  /* RABDATE variable already included  */
  /* RABFLAG variable already included  */
  /* RABMONTH variable already included  */
  /* RABPLACE variable already included  */
  /* RABPLACF variable already included  */
  /* RABYEAR variable already included  */
  /* RACANCREF variable already included  */
  /* RACOHBYR variable already included  */
  /* RADAGE_M variable already included  */
  /* RADAGE_Y variable already included  */
  /* RADDATE variable already included  */
  /* RADEMENEF variable already included  */
  /* RADIABEF variable already included  */
  /* RADMONTH variable already included  */
  /* RADSRC variable already included  */
  /* RADTIMTDTH variable already included  */
  /* RADYEAR variable already included  */
  /* RAEDEGRM variable already included  */
  /* RAEDUC variable already included  */
  /* RAEDYRS variable already included  */
  /* RAEHSAMP variable already included  */
  /* RAESTRAT variable already included  */
  /* RAEVBRN variable already included  */
  /* RAEVBRNF variable already included  */
  /* RAFEDUC variable already included  */
  /* RAGENDER variable already included  */
  /* RAHEARTEF variable already included  */
  /* RAHIBPEF variable already included  */
  /* RAHISPAN variable already included  */
  /* RAHRSAMP variable already included  */
  /* RALUNGEF variable already included  */
  /* RAMEDUC variable already included  */
  /* RAMEMRYEF variable already included  */
  /* RAOAHDID variable already included  */
  /* RAOHRSID variable already included  */
  /* RAOVRAYR variable already included  */
  /* RAOVRLAP variable already included  */
  /* RAPSYCHEF variable already included  */
  /* RARACEM variable already included  */
  /* RARELIG variable already included  */
  /* RASLEEPEF variable already included  */
  /* RASPCT variable already included  */
  /* RASPID1 variable already included  */
  /* RASPID2 variable already included  */
  /* RASPID3 variable already included  */
  /* RASPID4 variable already included  */
  /* RASSAGEB variable already included  */
  /* RASSAGEM variable already included  */
  /* RASSRECV variable already included  */
  /* RASTROKEF variable already included  */
  /* RAVETRN variable already included  */
%mend initvars;

%macro readvar2_list;
/* List of variables to be read from input dataset */
%mend readvar2_list;

/* Macro `process_data for `Rwide` */
%macro process_data /*  : ---- Macro `process_data` definition for Rwide table STARTS  */ ;
%put --- Rwide table /*    */ ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
/* --- RAND variable:HHIDPN  included */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
/* --- RAND variable:HACOHORT  included */ ;
/* --- RAND variable:RAWTSAMP  included */ ;
/* --- RAND variable:RAAHDSMP  included */ ;
/* --- RAND variable:RAALZHEEF  included */ ;
/* --- RAND variable:RAARTHREF  included */ ;
/* --- RAND variable:RABDATE  included */ ;
/* --- RAND variable:RABFLAG  included */ ;
/* --- RAND variable:RABMONTH  included */ ;
/* --- RAND variable:RABPLACE  included */ ;
/* --- RAND variable:RABPLACF  included */ ;
/* --- RAND variable:RABYEAR  included */ ;
/* --- RAND variable:RACANCREF  included */ ;
/* --- RAND variable:RACOHBYR  included */ ;
/* --- RAND variable:RADAGE_M  included */ ;
/* --- RAND variable:RADAGE_Y  included */ ;
/* --- RAND variable:RADDATE  included */ ;
/* --- RAND variable:RADEMENEF  included */ ;
/* --- RAND variable:RADIABEF  included */ ;
/* --- RAND variable:RADMONTH  included */ ;
/* --- RAND variable:RADSRC  included */ ;
/* --- RAND variable:RADTIMTDTH  included */ ;
/* --- RAND variable:RADYEAR  included */ ;
/* --- RAND variable:RAEDEGRM  included */ ;
/* --- RAND variable:RAEDUC  included */ ;
/* --- RAND variable:RAEDYRS  included */ ;
/* --- RAND variable:RAEHSAMP  included */ ;
/* --- RAND variable:RAESTRAT  included */ ;
/* --- RAND variable:RAEVBRN  included */ ;
/* --- RAND variable:RAEVBRNF  included */ ;
/* --- RAND variable:RAFEDUC  included */ ;
/* --- RAND variable:RAGENDER  included */ ;
/* --- RAND variable:RAHEARTEF  included */ ;
/* --- RAND variable:RAHIBPEF  included */ ;
/* --- RAND variable:RAHISPAN  included */ ;
/* --- RAND variable:RAHRSAMP  included */ ;
/* --- RAND variable:RALUNGEF  included */ ;
/* --- RAND variable:RAMEDUC  included */ ;
/* --- RAND variable:RAMEMRYEF  included */ ;
/* --- RAND variable:RAOAHDID  included */ ;
/* --- RAND variable:RAOHRSID  included */ ;
/* --- RAND variable:RAOVRAYR  included */ ;
/* --- RAND variable:RAOVRLAP  included */ ;
/* --- RAND variable:RAPSYCHEF  included */ ;
/* --- RAND variable:RARACEM  included */ ;
/* --- RAND variable:RARELIG  included */ ;
/* --- RAND variable:RASLEEPEF  included */ ;
/* --- RAND variable:RASPCT  included */ ;
/* --- RAND variable:RASPID1  included */ ;
/* --- RAND variable:RASPID2  included */ ;
/* --- RAND variable:RASPID3  included */ ;
/* --- RAND variable:RASPID4  included */ ;
/* --- RAND variable:RASSAGEB  included */ ;
/* --- RAND variable:RASSAGEM  included */ ;
/* --- RAND variable:RASSRECV  included */ ;
/* --- RAND variable:RASTROKEF  included */ ;
/* --- RAND variable:RAVETRN  included */ ;
%mend process_data /*  -:--- Macro `process_data` definition for Rwide table ENDS  */ ;
