/* This is map_file `RSSI_map_file.inc` for `RSSI_table` dataset */
/* Repo name := RAND2LONG (version 0.852) */
/* Project name := randhrs1992_2020v1 */
/* Excel map: _1992_2020v1_maps22MAR2024.xlsx */
/* Date stamp: 03APR24  */


%macro label_statements;
/* Table RSSI: Label statements for 20 variables */
/* Macro invoked by `create_template_longout` macro */
  label HHID  = "HHID: HHold ID / 6-Char <KEY1>";
  label PN  = "Person Number (3-CHAR) <KEY2>";
  label HHIDPN  = "HHIDPN: HHold ID + Person Number /Num";
  label RAHHIDPN  = "RAHHIDPN: HHold ID + Person Num /9-Char";
  label RSSI_episode  = "Respondent SSI/SSDI episode number <KEY3>";
  label RADNEPI  = "RADNEPI: TOTAL NUMBER OF DISABLILITY EPISODES";
  label RADAPPD_E  = "RADAPPD_E: DATE APPLIED SSI/SSDI EPISODE";
  label RADAPPM_E  = "RADAPPM_E: MONTH APPLIED SSI/SSDI EPISODE";
  label RADAPPY_E  = "RADAPPY_E: YEAR APPLIED SSI/SSDI EPISODE";

 /* --Variable RADENDD_E : # _10 */
  label RADENDD_E  = "RADENDD_E: DATE ENDED SSI/SSDI";
  label RADENDM_E  = "RADENDM_E: MONTH ENDED SSI/SSDI";
  label RADENDY_E  = "RADENDY_E: YEAR ENDED SSI/SSDI";
  label RADREAD_E  = "RADREAD_E: DATE REAPPLIED/APPEALED SSI/SSDI";
  label RADREAM_E  = "RADREAM_E: MONTH REAPPLIED/APPEALED SSI/SSDI";
  label RADREAY_E  = "RADREAY_E: YEAR REAPPLIED/APPEALED SSI/SSDI";
  label RADRECD_E  = "RADRECD_E: DATE RECEIVED SSI/SSDI";
  label RADRECM_E  = "RADRECM_E: MONTH RECEIVED SSI/SSDI";
  label RADRECY_E  = "RADRECY_E: YEAR RECEIVED SSI/SSDI";
  label RADSTAT_E  = "RADSTAT_E: EPISODE STATUS";

 /* --Variable RADTYPE_E : # _20 */
  label RADTYPE_E  = "RADTYPE_E: SSDI=1,SSI=2,DK OR BOTH=3";
%mend label_statements;


%macro clength_statements;
/*  Table RSSI: Length statements for character and selected numeric vars */
/* Macro invoked by `create_template_longout` macro */
  length HHID $6;                           /* _1 */
  length PN $3;                             /* _2 */
  length RAHHIDPN $9;                       /* _4 */
%mend clength_statements;



%macro format_statements;
/*  Table RSSI: format statements for 3 variables */
/* Macro invoked by `create_template_longout` macro */
  format RADNEPI UNMAR.;                    /* _6 */
  format RADSTAT_E RADSTATF.;               /* _19 */
  format RADTYPE_E RFDTYPE.;                /* _20 */
%mend format_statements;



%macro readvar1_list;
/* List of variables to be read from input dataset */
  HHID                                      /* 1 */
  PN                                        /* 2 */
  HHIDPN                                    /* 3 */
  RAHHIDPN                                  /* 4 */
  RADNEPI                                   /* 6 */
%mend readvar1_list;

%macro keep_varlist;
/* Table RSSI: List of 20 variables to keep */
  HHID
  PN
  HHIDPN
  RAHHIDPN
  RSSI_episode
  RADNEPI
  RADAPPD_E
  RADAPPM_E
  RADAPPY_E
  RADENDD_E
  RADENDM_E
  RADENDY_E
  RADREAD_E
  RADREAM_E
  RADREAY_E
  RADRECD_E
  RADRECM_E
  RADRECY_E
  RADSTAT_E
  RADTYPE_E
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
/*  Table RSSI: Macro creates and appends `_outtable` data */;
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
  RSSI_episode = ._;
  /* RADNEPI variable already included  */
  RADAPPD_E = ._;
  RADAPPM_E = ._;
  RADAPPY_E = ._;
  RADENDD_E = ._;
  RADENDM_E = ._;
  RADENDY_E = ._;
  RADREAD_E = ._;
  RADREAM_E = ._;
  RADREAY_E = ._;
  RADRECD_E = ._;
  RADRECM_E = ._;
  RADRECY_E = ._;
  RADSTAT_E = ._;
  RADTYPE_E = ._;
%mend initvars;

%macro readvar2_list;
/* List of variables to be read from input dataset */
/*-- RSSI_episode   --*/
/*-- RADAPPD_E   --*/
RADAPPD1
RADAPPD2
RADAPPD3
RADAPPD4
RADAPPD5
RADAPPD6
RADAPPD7
RADAPPD8
RADAPPD9
RADAPPD10
RADAPPD11
/*-- RADAPPM_E   --*/
RADAPPM1
RADAPPM2
RADAPPM3
RADAPPM4
RADAPPM5
RADAPPM6
RADAPPM7
RADAPPM8
RADAPPM9
RADAPPM10
RADAPPM11
/*-- RADAPPY_E   --*/
RADAPPY1
RADAPPY2
RADAPPY3
RADAPPY4
RADAPPY5
RADAPPY6
RADAPPY7
RADAPPY8
RADAPPY9
RADAPPY10
RADAPPY11
/*-- RADENDD_E   --*/
RADENDD1
RADENDD2
RADENDD3
RADENDD4
RADENDD5
RADENDD6
RADENDD7
RADENDD8
RADENDD9
RADENDD10
RADENDD11
/*-- RADENDM_E   --*/
RADENDM1
RADENDM2
RADENDM3
RADENDM4
RADENDM5
RADENDM6
RADENDM7
RADENDM8
RADENDM9
RADENDM10
RADENDM11
/*-- RADENDY_E   --*/
RADENDY1
RADENDY2
RADENDY3
RADENDY4
RADENDY5
RADENDY6
RADENDY7
RADENDY8
RADENDY9
RADENDY10
RADENDY11
/*-- RADREAD_E   --*/
RADREAD1
RADREAD2
RADREAD3
RADREAD4
RADREAD5
RADREAD6
RADREAD7
RADREAD8
RADREAD9
RADREAD10
RADREAD11
/*-- RADREAM_E   --*/
RADREAM1
RADREAM2
RADREAM3
RADREAM4
RADREAM5
RADREAM6
RADREAM7
RADREAM8
RADREAM9
RADREAM10
RADREAM11
/*-- RADREAY_E   --*/
RADREAY1
RADREAY2
RADREAY3
RADREAY4
RADREAY5
RADREAY6
RADREAY7
RADREAY8
RADREAY9
RADREAY10
RADREAY11
/*-- RADRECD_E   --*/
RADRECD1
RADRECD2
RADRECD3
RADRECD4
RADRECD5
RADRECD6
RADRECD7
RADRECD8
RADRECD9
RADRECD10
RADRECD11
/*-- RADRECM_E   --*/
RADRECM1
RADRECM2
RADRECM3
RADRECM4
RADRECM5
RADRECM6
RADRECM7
RADRECM8
RADRECM9
RADRECM10
RADRECM11
/*-- RADRECY_E   --*/
RADRECY1
RADRECY2
RADRECY3
RADRECY4
RADRECY5
RADRECY6
RADRECY7
RADRECY8
RADRECY9
RADRECY10
RADRECY11
/*-- RADSTAT_E   --*/
RADSTAT1
RADSTAT2
RADSTAT3
RADSTAT4
RADSTAT5
RADSTAT6
RADSTAT7
RADSTAT8
RADSTAT9
RADSTAT10
RADSTAT11
/*-- RADTYPE_E   --*/
RADTYPE1
RADTYPE2
RADTYPE3
RADTYPE4
RADTYPE5
RADTYPE6
RADTYPE7
RADTYPE8
RADTYPE9
RADTYPE10
RADTYPE11
%mend readvar2_list;

/* Macro `process_data for `RSSI` */
%macro process_data /*  ---- Macro `process_data` definition for RSSI table STARTS  */ ;
%put ---- RSSI table /*  -- put  */ ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
/* --- RAND variable:HHIDPN  included */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
RSSI_episode=1 ;
/* --- RAND variable:RADNEPI  included */ ;
RADAPPD_E=RADAPPD1 ;
RADAPPM_E=RADAPPM1 ;
RADAPPY_E=RADAPPY1 ;
RADENDD_E=RADENDD1 ;
RADENDM_E=RADENDM1 ;
RADENDY_E=RADENDY1 ;
RADREAD_E=RADREAD1 ;
RADREAM_E=RADREAM1 ;
RADREAY_E=RADREAY1 ;
RADRECD_E=RADRECD1 ;
RADRECM_E=RADRECM1 ;
RADRECY_E=RADRECY1 ;
RADSTAT_E=RADSTAT1 ;
RADTYPE_E=RADTYPE1 ;
if RADAPPD_E ne . then output ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
/* --- RAND variable:HHIDPN  included */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
RSSI_episode=2 ;
/* --- RAND variable:RADNEPI  included */ ;
RADAPPD_E=RADAPPD2 ;
RADAPPM_E=RADAPPM2 ;
RADAPPY_E=RADAPPY2 ;
RADENDD_E=RADENDD2 ;
RADENDM_E=RADENDM2 ;
RADENDY_E=RADENDY2 ;
RADREAD_E=RADREAD2 ;
RADREAM_E=RADREAM2 ;
RADREAY_E=RADREAY2 ;
RADRECD_E=RADRECD2 ;
RADRECM_E=RADRECM2 ;
RADRECY_E=RADRECY2 ;
RADSTAT_E=RADSTAT2 ;
RADTYPE_E=RADTYPE2 ;
if RADAPPD_E ne . then output ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
/* --- RAND variable:HHIDPN  included */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
RSSI_episode=3 ;
/* --- RAND variable:RADNEPI  included */ ;
RADAPPD_E=RADAPPD3 ;
RADAPPM_E=RADAPPM3 ;
RADAPPY_E=RADAPPY3 ;
RADENDD_E=RADENDD3 ;
RADENDM_E=RADENDM3 ;
RADENDY_E=RADENDY3 ;
RADREAD_E=RADREAD3 ;
RADREAM_E=RADREAM3 ;
RADREAY_E=RADREAY3 ;
RADRECD_E=RADRECD3 ;
RADRECM_E=RADRECM3 ;
RADRECY_E=RADRECY3 ;
RADSTAT_E=RADSTAT3 ;
RADTYPE_E=RADTYPE3 ;
if RADAPPD_E ne . then output ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
/* --- RAND variable:HHIDPN  included */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
RSSI_episode=4 ;
/* --- RAND variable:RADNEPI  included */ ;
RADAPPD_E=RADAPPD4 ;
RADAPPM_E=RADAPPM4 ;
RADAPPY_E=RADAPPY4 ;
RADENDD_E=RADENDD4 ;
RADENDM_E=RADENDM4 ;
RADENDY_E=RADENDY4 ;
RADREAD_E=RADREAD4 ;
RADREAM_E=RADREAM4 ;
RADREAY_E=RADREAY4 ;
RADRECD_E=RADRECD4 ;
RADRECM_E=RADRECM4 ;
RADRECY_E=RADRECY4 ;
RADSTAT_E=RADSTAT4 ;
RADTYPE_E=RADTYPE4 ;
if RADAPPD_E ne . then output ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
/* --- RAND variable:HHIDPN  included */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
RSSI_episode=5 ;
/* --- RAND variable:RADNEPI  included */ ;
RADAPPD_E=RADAPPD5 ;
RADAPPM_E=RADAPPM5 ;
RADAPPY_E=RADAPPY5 ;
RADENDD_E=RADENDD5 ;
RADENDM_E=RADENDM5 ;
RADENDY_E=RADENDY5 ;
RADREAD_E=RADREAD5 ;
RADREAM_E=RADREAM5 ;
RADREAY_E=RADREAY5 ;
RADRECD_E=RADRECD5 ;
RADRECM_E=RADRECM5 ;
RADRECY_E=RADRECY5 ;
RADSTAT_E=RADSTAT5 ;
RADTYPE_E=RADTYPE5 ;
if RADAPPD_E ne . then output ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
/* --- RAND variable:HHIDPN  included */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
RSSI_episode=6 ;
/* --- RAND variable:RADNEPI  included */ ;
RADAPPD_E=RADAPPD6 ;
RADAPPM_E=RADAPPM6 ;
RADAPPY_E=RADAPPY6 ;
RADENDD_E=RADENDD6 ;
RADENDM_E=RADENDM6 ;
RADENDY_E=RADENDY6 ;
RADREAD_E=RADREAD6 ;
RADREAM_E=RADREAM6 ;
RADREAY_E=RADREAY6 ;
RADRECD_E=RADRECD6 ;
RADRECM_E=RADRECM6 ;
RADRECY_E=RADRECY6 ;
RADSTAT_E=RADSTAT6 ;
RADTYPE_E=RADTYPE6 ;
if RADAPPD_E ne . then output ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
/* --- RAND variable:HHIDPN  included */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
RSSI_episode=7 ;
/* --- RAND variable:RADNEPI  included */ ;
RADAPPD_E=RADAPPD7 ;
RADAPPM_E=RADAPPM7 ;
RADAPPY_E=RADAPPY7 ;
RADENDD_E=RADENDD7 ;
RADENDM_E=RADENDM7 ;
RADENDY_E=RADENDY7 ;
RADREAD_E=RADREAD7 ;
RADREAM_E=RADREAM7 ;
RADREAY_E=RADREAY7 ;
RADRECD_E=RADRECD7 ;
RADRECM_E=RADRECM7 ;
RADRECY_E=RADRECY7 ;
RADSTAT_E=RADSTAT7 ;
RADTYPE_E=RADTYPE7 ;
if RADAPPD_E ne . then output ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
/* --- RAND variable:HHIDPN  included */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
RSSI_episode=8 ;
/* --- RAND variable:RADNEPI  included */ ;
RADAPPD_E=RADAPPD8 ;
RADAPPM_E=RADAPPM8 ;
RADAPPY_E=RADAPPY8 ;
RADENDD_E=RADENDD8 ;
RADENDM_E=RADENDM8 ;
RADENDY_E=RADENDY8 ;
RADREAD_E=RADREAD8 ;
RADREAM_E=RADREAM8 ;
RADREAY_E=RADREAY8 ;
RADRECD_E=RADRECD8 ;
RADRECM_E=RADRECM8 ;
RADRECY_E=RADRECY8 ;
RADSTAT_E=RADSTAT8 ;
RADTYPE_E=RADTYPE8 ;
if RADAPPD_E ne . then output ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
/* --- RAND variable:HHIDPN  included */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
RSSI_episode=9 ;
/* --- RAND variable:RADNEPI  included */ ;
RADAPPD_E=RADAPPD9 ;
RADAPPM_E=RADAPPM9 ;
RADAPPY_E=RADAPPY9 ;
RADENDD_E=RADENDD9 ;
RADENDM_E=RADENDM9 ;
RADENDY_E=RADENDY9 ;
RADREAD_E=RADREAD9 ;
RADREAM_E=RADREAM9 ;
RADREAY_E=RADREAY9 ;
RADRECD_E=RADRECD9 ;
RADRECM_E=RADRECM9 ;
RADRECY_E=RADRECY9 ;
RADSTAT_E=RADSTAT9 ;
RADTYPE_E=RADTYPE9 ;
if RADAPPD_E ne . then output ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
/* --- RAND variable:HHIDPN  included */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
RSSI_episode=10 ;
/* --- RAND variable:RADNEPI  included */ ;
RADAPPD_E=RADAPPD10 ;
RADAPPM_E=RADAPPM10 ;
RADAPPY_E=RADAPPY10 ;
RADENDD_E=RADENDD10 ;
RADENDM_E=RADENDM10 ;
RADENDY_E=RADENDY10 ;
RADREAD_E=RADREAD10 ;
RADREAM_E=RADREAM10 ;
RADREAY_E=RADREAY10 ;
RADRECD_E=RADRECD10 ;
RADRECM_E=RADRECM10 ;
RADRECY_E=RADRECY10 ;
RADSTAT_E=RADSTAT10 ;
RADTYPE_E=RADTYPE10 ;
if RADAPPD_E ne . then output ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
/* --- RAND variable:HHIDPN  included */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
RSSI_episode=11 ;
/* --- RAND variable:RADNEPI  included */ ;
RADAPPD_E=RADAPPD11 ;
RADAPPM_E=RADAPPM11 ;
RADAPPY_E=RADAPPY11 ;
RADENDD_E=RADENDD11 ;
RADENDM_E=RADENDM11 ;
RADENDY_E=RADENDY11 ;
RADREAD_E=RADREAD11 ;
RADREAM_E=RADREAM11 ;
RADREAY_E=RADREAY11 ;
RADRECD_E=RADRECD11 ;
RADRECM_E=RADRECM11 ;
RADRECY_E=RADRECY11 ;
RADSTAT_E=RADSTAT11 ;
RADTYPE_E=RADTYPE11 ;
if RADAPPD_E ne . then output ;
%mend process_data /*  ---- Macro `Rwide_map` for RSSI table ENDS  */ ;
