/* This is map_file `HLong_map_file.inc` for `HLong_table` dataset */
/* Repo name := RAND2LONG (version 0.852) */
/* Project name := randhrs1992_2020v1 */
/* Excel map: _1992_2020v1_maps22MAR2024.xlsx */
/* Date stamp: 03APR24  */


%macro label_statements;
/* Table HLong: Label statements for 96 variables */
/* Macro invoked by `create_template_longout` macro */
  label HHID  = "HHold ID / 6-Char <KEY1>";
  label PN  = "Person Number (3-CHAR) <KEY2>";
  label HHIDPN  = "HHIDPN: HHold ID + Person Number /Num";
  label RAHHIDPN  = "HHold ID + Person Number /9-Char";
  label HACOHORT  = "Sample cohort";
  label WAVE_NUMBER  = "HRS wave number <KEY3>";
  label WAVE_NAME  = "Wave label/12-Char";
  label STUDYYR  = "Study year /Num";
  label CYEAR  = "Study year /10-Char";

 /* --Variable H_HHID : # _10 */
  label H_HHID  = "HHold ID + SubHHold /Num";
  label H_HHIDC  = "HHold ID + SubHHold /7-Char <KEY3>";
  label SUBHH  = "HRS subHHold/1-Char";
  label INW  = "1 if respondent/Num";
  label H_PICKHH  = "Select subHH level file <KEY4>";
  label H_ABOND  = "Assets:Bonds--Cross-wave";
  label H_ABSNS  = "Assets:Business--Cross-wave";
  label H_ACD  = "Assets:CDs,SvBonds,T-bills--Cross-wave";
  label H_ACHCK  = "Assets:Checking,Savings Acct--Cross-wave";
  label H_ADEBT  = "Assets:Debts [not yet asked]--Cross-wave";

 /* --Variable H_AFBOND : # _20 */
  label H_AFBOND  = "Assets Flag:Bonds--Cross-wave";
  label H_AFBSNS  = "Assets Flag:Business--Cross-wave";
  label H_AFCD  = "Assets Flag:CDs,SvBonds,T-bills--Cross-wave";
  label H_AFCHCK  = "Assets Flag:Checking,Savings--Cross-wave";
  label H_AFDEBT  = "Assets Flag:Debts--Cross-wave";
  label H_AFHMLN  = "Asst Flag:Total Oth Hm Loans--Cross-wave";
  label H_AFHOUB  = "Assets Flag:2nd Home--Cross-wave";
  label H_AFHOUS  = "Assets Flag:Primary Residence--Cross-wave";
  label H_AFIRA  = "Asst Flag:IRA [total]--Cross-wave";
  label H_AFMORT  = "Asst Flag:Total Mortgage--Cross-wave";

 /* --Variable H_AFMRTB : # _30 */
  label H_AFMRTB  = "Assets Flag:2nd Home Mtg--Cross-wave";
  label H_AFNETHB  = "Assets Flag:Net Value of 2nd Home--Cross-wave";
  label H_AFOTHR  = "Assets Flag:Other svngs,assets--Cross-wave";
  label H_AFRLES  = "Assets Flag:Other Real estate--Cross-wave";
  label H_AFSTCK  = "Assets Flag:Stocks--Cross-wave";
  label H_AFTRAN  = "Assets Flag:Transportation--Cross-wave";
  label H_AHMLN  = "Assets:Total Othr Home Loans--Cross-wave";
  label H_AHOUB  = "Assets:2nd Home--Cross-wave";
  label H_AHOUS  = "Assets:Primary Residence--Cross-wave";
  label H_AIRA  = "Assets:IRA [total]--Cross-wave";

 /* --Variable H_AMORT : # _40 */
  label H_AMORT  = "Assets:Total Mortgage--Cross-wave";
  label H_AMRTB  = "Assets:2nd Home Mtg--Cross-wave";
  label H_ANETHB  = "Net Value of 2nd Home--Cross-wave";
  label H_ANYFAM  = "Whether any FamR in HH";
  label H_ANYFIN  = "Whether any FinR in HH";
  label H_AOTHR  = "Assets:Other svngs, assets--Cross-wave";
  label H_ARLES  = "Assets:Other Real estate--Cross-wave";
  label H_ASTCK  = "Assets:Stocks--Cross-wave";
  label H_ATOTB  = "Total of all Assets--Cross-wave";
  label H_ATOTF  = "Non-Housing Financial Wealth--Cross-wave";

 /* --Variable H_ATOTH : # _50 */
  label H_ATOTH  = "Net Value of House /prim res--Cross-wave";
  label H_ATOTN  = "Total Non-Housing Assets--Cross-wave";
  label H_ATOTW  = "Total Wealth less IRA--Cross-wave";
  label H_ATRAN  = "Assets:Transportation--Cross-wave";
  label H_CHILD  = "Number of living children R/P";
  label H_CPL  = "Whether couple HHold";
  label H_HHRES  = "Number of people in HH";
  label H_HHRESP  = "# core respondents in HH";
  label H_ICAP  = "Income:Household Capital Income";
  label H_IFCAP  = "ImpFlag:Household Capital Inc";

 /* --Variable H_IFIRAW : # _60 */
  label H_IFIRAW  = "ImpFlag:IRA Withd-Total (prev 2 yrs/since last
int)";
  label H_IFIRAWY1  = "ImpFlag:IRA Withd-Total (LCY)";
  label H_IFOTHR  = "ImpFlag:Other Household Inc";
  label H_IFSSI  = "ImpFlag-SSI Inc";
  label H_IFTOT  = "ImpFlag:Total Household Inc";
  label H_IFTOT2  = "ImpFlag:Imputed Total Household";
  label H_IIRAW  = "Income:IRA Withd-Total (prev 2 yrs/since last
int)";
  label H_IIRAWY1  = "Income:IRA Withd-Total (LCY)";
  label H_INPOV  = "Whether in Poverty-no inst";
  label H_INPOVA  = "Whether in Poverty-w/inst";

 /* --Variable H_INPOVAD : # _70 */
  label H_INPOVAD  = "Whether in Poverty-w/inst (part d)";
  label H_INPOVD  = "Whether in Poverty-no inst (part d)";
  label H_INPOVR  = "Ratio HH Inc:PovThr-no inst";
  label H_INPOVRD  = "Ratio HH Inc:PovThr-no inst (part d)";
  label H_INPVRA  = "Ratio HH Inc:PovThr-w/inst";
  label H_INPVRAD  = "Ratio HH Inc:PovThr-w/inst (part d)";
  label H_IOTHR  = "Income:Other Household";
  label H_ISSI  = "IncPart-SSI Inc";
  label H_ITOT  = "Income:Total HHold / R+Sp only";
  label H_ITOT2  = "Income:Imputed Total Household";

 /* --Variable H_NHMLIV : # _80 */
  label H_NHMLIV  = "HHold nursing hm status";
  label H_OHRSHH  = "HRS core HHID + SubHHold /Num";
  label H_OOPMA  = "Mexp Amt:HH Out of pkt med exp for all,prv 12 mos";
  label H_OOPMAF  = "Mexp Flag:HH Out of pkt imputed for all";
  label H_OOPMD  = "Mexp Amt:HH Out of pkt med exp, prv 12 mos";
  label H_OOPMDF  = "Mexp Flag:HH Out of pkt imputed";
  label H_POVFAM  = "FamType for PovThresh-no inst";
  label H_POVHHI  = "HH Inc to chk Poverty-no inst";
  label H_POVHHID  = "HH Inc to chk Poverty-no inst (part d)";
  label H_POVTHR  = "Poverty Threshold-no inst";

 /* --Variable H_PVFAMA : # _90 */
  label H_PVFAMA  = "FamType for PovThresh-w/inst";
  label H_PVHHIA  = "HH inc to chk Poverty-w/inst";
  label H_PVHHIAD  = "HH inc to chk Poverty-w/inst (part d)";
  label H_PVTHRA  = "Poverty Threshold-w/inst";
  label H_SSWRER  = "Total household SS wealth, all claiming at 62";
  label H_SSWRNR  = "Total household SS wealth, all claiming at NRA";
  label H_SSWRXA  = "Total household SS wealth, all claiming at 70";
%mend label_statements;


%macro clength_statements;
/*  Table HLong: Length statements for character and selected numeric vars */
/* Macro invoked by `create_template_longout` macro */
  length HHID $6;                           /* _1 */
  length PN $3;                             /* _2 */
  length RAHHIDPN $9;                       /* _4 */
  length WAVE_NAME $12;                     /* _7 */
  length CYEAR $10;                         /* _9 */
  length H_HHIDC $7;                        /* _11 */
  length SUBHH $1;                          /* _12 */
%mend clength_statements;



%macro format_statements;
/*  Table HLong: format statements for 36 variables */
/* Macro invoked by `create_template_longout` macro */
  format H_PICKHH PICKHH.;                  /* _14 */
  format H_AFBOND ASSTIMPF.;                /* _20 */
  format H_AFBSNS ASSTIMPF.;                /* _21 */
  format H_AFCD ASSTIMPF.;                  /* _22 */
  format H_AFCHCK ASSTIMPF.;                /* _23 */
  format H_AFDEBT ASSTIMPF.;                /* _24 */
  format H_AFHMLN ASSTSUMF.;                /* _25 */
  format H_AFHOUB ASSTIMPF.;                /* _26 */
  format H_AFHOUS ASSTIMPF.;                /* _27 */
  format H_AFIRA ASSTSUMF.;                 /* _28 */
  format H_AFMORT ASSTSUMF.;                /* _29 */
  format H_AFMRTB ASSTIMPF.;                /* _30 */
  format H_AFNETHB NETHBF.;                 /* _31 */
  format H_AFOTHR ASSTIMPF.;                /* _32 */
  format H_AFRLES ASSTIMPF.;                /* _33 */
  format H_AFSTCK ASSTIMPF.;                /* _34 */
  format H_AFTRAN ASSTIMPF.;                /* _35 */
  format H_ANYFAM YESNO.;                   /* _43 */
  format H_ANYFIN YESNO.;                   /* _44 */
  format H_CPL CPL.;                        /* _55 */
  format H_IFCAP INCSUMF.;                  /* _59 */
  format H_IFIRAW INCSUMF.;                 /* _60 */
  format H_IFIRAWY1 INCSUMF.;               /* _61 */
  format H_IFOTHR INCSUMF.;                 /* _62 */
  format H_IFSSI INCIMPF.;                  /* _63 */
  format H_IFTOT INCSUMF.;                  /* _64 */
  format H_IFTOT2 INCSUMF.;                 /* _65 */
  format H_INPOV INPOV.;                    /* _68 */
  format H_INPOVA INPOV.;                   /* _69 */
  format H_INPOVAD INPOV.;                  /* _70 */
  format H_INPOVD INPOV.;                   /* _71 */
  format H_NHMLIV HNHMLIV.;                 /* _80 */
  format H_OOPMAF MDIMPH.;                  /* _83 */
  format H_OOPMDF MDIMPH.;                  /* _85 */
  format H_POVFAM POVFAM.;                  /* _86 */
  format H_PVFAMA POVFAM.;                  /* _90 */
%mend format_statements;



%macro readvar1_list;
/* List of variables to be read from input dataset */
  HHID                                      /* 1 */
  PN                                        /* 2 */
  HHIDPN                                    /* 3 */
  RAHHIDPN                                  /* 4 */
  HACOHORT                                  /* 5 */
%mend readvar1_list;

%macro keep_varlist;
/* Table HLong: List of 96 variables to keep */
  HHID
  PN
  HHIDPN
  RAHHIDPN
  HACOHORT
  WAVE_NUMBER
  WAVE_NAME
  STUDYYR
  CYEAR
  H_HHID
  H_HHIDC
  SUBHH
  INW
  H_PICKHH
  H_ABOND
  H_ABSNS
  H_ACD
  H_ACHCK
  H_ADEBT
  H_AFBOND
  H_AFBSNS
  H_AFCD
  H_AFCHCK
  H_AFDEBT
  H_AFHMLN
  H_AFHOUB
  H_AFHOUS
  H_AFIRA
  H_AFMORT
  H_AFMRTB
  H_AFNETHB
  H_AFOTHR
  H_AFRLES
  H_AFSTCK
  H_AFTRAN
  H_AHMLN
  H_AHOUB
  H_AHOUS
  H_AIRA
  H_AMORT
  H_AMRTB
  H_ANETHB
  H_ANYFAM
  H_ANYFIN
  H_AOTHR
  H_ARLES
  H_ASTCK
  H_ATOTB
  H_ATOTF
  H_ATOTH
  H_ATOTN
  H_ATOTW
  H_ATRAN
  H_CHILD
  H_CPL
  H_HHRES
  H_HHRESP
  H_ICAP
  H_IFCAP
  H_IFIRAW
  H_IFIRAWY1
  H_IFOTHR
  H_IFSSI
  H_IFTOT
  H_IFTOT2
  H_IIRAW
  H_IIRAWY1
  H_INPOV
  H_INPOVA
  H_INPOVAD
  H_INPOVD
  H_INPOVR
  H_INPOVRD
  H_INPVRA
  H_INPVRAD
  H_IOTHR
  H_ISSI
  H_ITOT
  H_ITOT2
  H_NHMLIV
  H_OHRSHH
  H_OOPMA
  H_OOPMAF
  H_OOPMD
  H_OOPMDF
  H_POVFAM
  H_POVHHI
  H_POVHHID
  H_POVTHR
  H_PVFAMA
  H_PVHHIA
  H_PVHHIAD
  H_PVTHRA
  H_SSWRER
  H_SSWRNR
  H_SSWRXA
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
/*  Table HLong: Macro creates and appends `_outtable` data */;
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
  WAVE_NUMBER = ._;
  WAVE_NAME = '*';
  STUDYYR = ._;
  CYEAR = '*';
  H_HHID = ._;
  H_HHIDC = '*';
  SUBHH = '*';
  INW = ._;
  H_PICKHH = ._;
  H_ABOND = ._;
  H_ABSNS = ._;
  H_ACD = ._;
  H_ACHCK = ._;
  H_ADEBT = ._;
  H_AFBOND = ._;
  H_AFBSNS = ._;
  H_AFCD = ._;
  H_AFCHCK = ._;
  H_AFDEBT = ._;
  H_AFHMLN = ._;
  H_AFHOUB = ._;
  H_AFHOUS = ._;
  H_AFIRA = ._;
  H_AFMORT = ._;
  H_AFMRTB = ._;
  H_AFNETHB = ._;
  H_AFOTHR = ._;
  H_AFRLES = ._;
  H_AFSTCK = ._;
  H_AFTRAN = ._;
  H_AHMLN = ._;
  H_AHOUB = ._;
  H_AHOUS = ._;
  H_AIRA = ._;
  H_AMORT = ._;
  H_AMRTB = ._;
  H_ANETHB = ._;
  H_ANYFAM = ._;
  H_ANYFIN = ._;
  H_AOTHR = ._;
  H_ARLES = ._;
  H_ASTCK = ._;
  H_ATOTB = ._;
  H_ATOTF = ._;
  H_ATOTH = ._;
  H_ATOTN = ._;
  H_ATOTW = ._;
  H_ATRAN = ._;
  H_CHILD = ._;
  H_CPL = ._;
  H_HHRES = ._;
  H_HHRESP = ._;
  H_ICAP = ._;
  H_IFCAP = ._;
  H_IFIRAW = ._;
  H_IFIRAWY1 = ._;
  H_IFOTHR = ._;
  H_IFSSI = ._;
  H_IFTOT = ._;
  H_IFTOT2 = ._;
  H_IIRAW = ._;
  H_IIRAWY1 = ._;
  H_INPOV = ._;
  H_INPOVA = ._;
  H_INPOVAD = ._;
  H_INPOVD = ._;
  H_INPOVR = ._;
  H_INPOVRD = ._;
  H_INPVRA = ._;
  H_INPVRAD = ._;
  H_IOTHR = ._;
  H_ISSI = ._;
  H_ITOT = ._;
  H_ITOT2 = ._;
  H_NHMLIV = ._;
  H_OHRSHH = ._;
  H_OOPMA = ._;
  H_OOPMAF = ._;
  H_OOPMD = ._;
  H_OOPMDF = ._;
  H_POVFAM = ._;
  H_POVHHI = ._;
  H_POVHHID = ._;
  H_POVTHR = ._;
  H_PVFAMA = ._;
  H_PVHHIA = ._;
  H_PVHHIAD = ._;
  H_PVTHRA = ._;
  H_SSWRER = ._;
  H_SSWRNR = ._;
  H_SSWRXA = ._;
%mend initvars;

%macro readvar2_list;
/* List of variables to be read from input dataset */
/*-- WAVE_NUMBER   --*/
/*-- WAVE_NAME   --*/
/*-- STUDYYR   --*/
/*-- CYEAR   --*/
/*-- H_HHID   --*/
H1HHID
H2HHID
H3HHID
H4HHID
H5HHID
H6HHID
H7HHID
H8HHID
H9HHID
H10HHID
H11HHID
H12HHID
H13HHID
H14HHID
H15HHID
/*-- H_HHIDC   --*/
H1HHIDC
H2HHIDC
H3HHIDC
H4HHIDC
H5HHIDC
H6HHIDC
H7HHIDC
H8HHIDC
H9HHIDC
H10HHIDC
H11HHIDC
H12HHIDC
H13HHIDC
H14HHIDC
H15HHIDC
/*-- SUBHH   --*/
/*-- INW   --*/
INW1
INW2
INW3
INW4
INW5
INW6
INW7
INW8
INW9
INW10
INW11
INW12
INW13
INW14
INW15
/*-- H_PICKHH   --*/
H1PICKHH
H2PICKHH
H3PICKHH
H4PICKHH
H5PICKHH
H6PICKHH
H7PICKHH
H8PICKHH
H9PICKHH
H10PICKHH
H11PICKHH
H12PICKHH
H13PICKHH
H14PICKHH
H15PICKHH
/*-- H_ABOND   --*/
H1ABOND
H2ABOND
H3ABOND
H4ABOND
H5ABOND
H6ABOND
H7ABOND
H8ABOND
H9ABOND
H10ABOND
H11ABOND
H12ABOND
H13ABOND
H14ABOND
H15ABOND
/*-- H_ABSNS   --*/
H1ABSNS
H2ABSNS
H3ABSNS
H4ABSNS
H5ABSNS
H6ABSNS
H7ABSNS
H8ABSNS
H9ABSNS
H10ABSNS
H11ABSNS
H12ABSNS
H13ABSNS
H14ABSNS
H15ABSNS
/*-- H_ACD   --*/
H1ACD
H2ACD
H3ACD
H4ACD
H5ACD
H6ACD
H7ACD
H8ACD
H9ACD
H10ACD
H11ACD
H12ACD
H13ACD
H14ACD
H15ACD
/*-- H_ACHCK   --*/
H1ACHCK
H2ACHCK
H3ACHCK
H4ACHCK
H5ACHCK
H6ACHCK
H7ACHCK
H8ACHCK
H9ACHCK
H10ACHCK
H11ACHCK
H12ACHCK
H13ACHCK
H14ACHCK
H15ACHCK
/*-- H_ADEBT   --*/
H1ADEBT
H2ADEBT
H3ADEBT
H4ADEBT
H5ADEBT
H6ADEBT
H7ADEBT
H8ADEBT
H9ADEBT
H10ADEBT
H11ADEBT
H12ADEBT
H13ADEBT
H14ADEBT
H15ADEBT
/*-- H_AFBOND   --*/
H1AFBOND
H2AFBOND
H3AFBOND
H4AFBOND
H5AFBOND
H6AFBOND
H7AFBOND
H8AFBOND
H9AFBOND
H10AFBOND
H11AFBOND
H12AFBOND
H13AFBOND
H14AFBOND
H15AFBOND
/*-- H_AFBSNS   --*/
H1AFBSNS
H2AFBSNS
H3AFBSNS
H4AFBSNS
H5AFBSNS
H6AFBSNS
H7AFBSNS
H8AFBSNS
H9AFBSNS
H10AFBSNS
H11AFBSNS
H12AFBSNS
H13AFBSNS
H14AFBSNS
H15AFBSNS
/*-- H_AFCD   --*/
H1AFCD
H2AFCD
H3AFCD
H4AFCD
H5AFCD
H6AFCD
H7AFCD
H8AFCD
H9AFCD
H10AFCD
H11AFCD
H12AFCD
H13AFCD
H14AFCD
H15AFCD
/*-- H_AFCHCK   --*/
H1AFCHCK
H2AFCHCK
H3AFCHCK
H4AFCHCK
H5AFCHCK
H6AFCHCK
H7AFCHCK
H8AFCHCK
H9AFCHCK
H10AFCHCK
H11AFCHCK
H12AFCHCK
H13AFCHCK
H14AFCHCK
H15AFCHCK
/*-- H_AFDEBT   --*/
H1AFDEBT
H2AFDEBT
H3AFDEBT
H4AFDEBT
H5AFDEBT
H6AFDEBT
H7AFDEBT
H8AFDEBT
H9AFDEBT
H10AFDEBT
H11AFDEBT
H12AFDEBT
H13AFDEBT
H14AFDEBT
H15AFDEBT
/*-- H_AFHMLN   --*/
H1AFHMLN
H2AFHMLN
H3AFHMLN
H4AFHMLN
H5AFHMLN
H6AFHMLN
H7AFHMLN
H8AFHMLN
H9AFHMLN
H10AFHMLN
H11AFHMLN
H12AFHMLN
H13AFHMLN
H14AFHMLN
H15AFHMLN
/*-- H_AFHOUB   --*/
H1AFHOUB
H2AFHOUB
H4AFHOUB
H5AFHOUB
H6AFHOUB
H7AFHOUB
H8AFHOUB
H9AFHOUB
H10AFHOUB
H11AFHOUB
H12AFHOUB
H13AFHOUB
H14AFHOUB
H15AFHOUB
/*-- H_AFHOUS   --*/
H1AFHOUS
H2AFHOUS
H3AFHOUS
H4AFHOUS
H5AFHOUS
H6AFHOUS
H7AFHOUS
H8AFHOUS
H9AFHOUS
H10AFHOUS
H11AFHOUS
H12AFHOUS
H13AFHOUS
H14AFHOUS
H15AFHOUS
/*-- H_AFIRA   --*/
H1AFIRA
H2AFIRA
H3AFIRA
H4AFIRA
H5AFIRA
H6AFIRA
H7AFIRA
H8AFIRA
H9AFIRA
H10AFIRA
H11AFIRA
H12AFIRA
H13AFIRA
H14AFIRA
H15AFIRA
/*-- H_AFMORT   --*/
H1AFMORT
H2AFMORT
H3AFMORT
H4AFMORT
H5AFMORT
H6AFMORT
H7AFMORT
H8AFMORT
H9AFMORT
H10AFMORT
H11AFMORT
H12AFMORT
H13AFMORT
H14AFMORT
H15AFMORT
/*-- H_AFMRTB   --*/
H1AFMRTB
H2AFMRTB
H4AFMRTB
H5AFMRTB
H6AFMRTB
H7AFMRTB
H8AFMRTB
H9AFMRTB
H10AFMRTB
H11AFMRTB
H12AFMRTB
H13AFMRTB
H14AFMRTB
H15AFMRTB
/*-- H_AFNETHB   --*/
H2AFNETHB
H3AFNETHB
/*-- H_AFOTHR   --*/
H1AFOTHR
H2AFOTHR
H3AFOTHR
H4AFOTHR
H5AFOTHR
H6AFOTHR
H7AFOTHR
H8AFOTHR
H9AFOTHR
H10AFOTHR
H11AFOTHR
H12AFOTHR
H13AFOTHR
H14AFOTHR
H15AFOTHR
/*-- H_AFRLES   --*/
H1AFRLES
H2AFRLES
H3AFRLES
H4AFRLES
H5AFRLES
H6AFRLES
H7AFRLES
H8AFRLES
H9AFRLES
H10AFRLES
H11AFRLES
H12AFRLES
H13AFRLES
H14AFRLES
H15AFRLES
/*-- H_AFSTCK   --*/
H1AFSTCK
H2AFSTCK
H3AFSTCK
H4AFSTCK
H5AFSTCK
H6AFSTCK
H7AFSTCK
H8AFSTCK
H9AFSTCK
H10AFSTCK
H11AFSTCK
H12AFSTCK
H13AFSTCK
H14AFSTCK
H15AFSTCK
/*-- H_AFTRAN   --*/
H1AFTRAN
H2AFTRAN
H3AFTRAN
H4AFTRAN
H5AFTRAN
H6AFTRAN
H7AFTRAN
H8AFTRAN
H9AFTRAN
H10AFTRAN
H11AFTRAN
H12AFTRAN
H13AFTRAN
H14AFTRAN
H15AFTRAN
/*-- H_AHMLN   --*/
H1AHMLN
H2AHMLN
H3AHMLN
H4AHMLN
H5AHMLN
H6AHMLN
H7AHMLN
H8AHMLN
H9AHMLN
H10AHMLN
H11AHMLN
H12AHMLN
H13AHMLN
H14AHMLN
H15AHMLN
/*-- H_AHOUB   --*/
H1AHOUB
H2AHOUB
H3AHOUB
H4AHOUB
H5AHOUB
H6AHOUB
H7AHOUB
H8AHOUB
H9AHOUB
H10AHOUB
H11AHOUB
H12AHOUB
H13AHOUB
H14AHOUB
H15AHOUB
/*-- H_AHOUS   --*/
H1AHOUS
H2AHOUS
H3AHOUS
H4AHOUS
H5AHOUS
H6AHOUS
H7AHOUS
H8AHOUS
H9AHOUS
H10AHOUS
H11AHOUS
H12AHOUS
H13AHOUS
H14AHOUS
H15AHOUS
/*-- H_AIRA   --*/
H1AIRA
H2AIRA
H3AIRA
H4AIRA
H5AIRA
H6AIRA
H7AIRA
H8AIRA
H9AIRA
H10AIRA
H11AIRA
H12AIRA
H13AIRA
H14AIRA
H15AIRA
/*-- H_AMORT   --*/
H1AMORT
H2AMORT
H3AMORT
H4AMORT
H5AMORT
H6AMORT
H7AMORT
H8AMORT
H9AMORT
H10AMORT
H11AMORT
H12AMORT
H13AMORT
H14AMORT
H15AMORT
/*-- H_AMRTB   --*/
H1AMRTB
H2AMRTB
H3AMRTB
H4AMRTB
H5AMRTB
H6AMRTB
H7AMRTB
H8AMRTB
H9AMRTB
H10AMRTB
H11AMRTB
H12AMRTB
H13AMRTB
H14AMRTB
H15AMRTB
/*-- H_ANETHB   --*/
H1ANETHB
H2ANETHB
H3ANETHB
H4ANETHB
H5ANETHB
H6ANETHB
H7ANETHB
H8ANETHB
H9ANETHB
H10ANETHB
H11ANETHB
H12ANETHB
H13ANETHB
H14ANETHB
H15ANETHB
/*-- H_ANYFAM   --*/
H1ANYFAM
H2ANYFAM
H3ANYFAM
H4ANYFAM
H5ANYFAM
H6ANYFAM
H7ANYFAM
H8ANYFAM
H9ANYFAM
H10ANYFAM
H11ANYFAM
H12ANYFAM
H13ANYFAM
H14ANYFAM
H15ANYFAM
/*-- H_ANYFIN   --*/
H1ANYFIN
H2ANYFIN
H3ANYFIN
H4ANYFIN
H5ANYFIN
H6ANYFIN
H7ANYFIN
H8ANYFIN
H9ANYFIN
H10ANYFIN
H11ANYFIN
H12ANYFIN
H13ANYFIN
H14ANYFIN
H15ANYFIN
/*-- H_AOTHR   --*/
H1AOTHR
H2AOTHR
H3AOTHR
H4AOTHR
H5AOTHR
H6AOTHR
H7AOTHR
H8AOTHR
H9AOTHR
H10AOTHR
H11AOTHR
H12AOTHR
H13AOTHR
H14AOTHR
H15AOTHR
/*-- H_ARLES   --*/
H1ARLES
H2ARLES
H3ARLES
H4ARLES
H5ARLES
H6ARLES
H7ARLES
H8ARLES
H9ARLES
H10ARLES
H11ARLES
H12ARLES
H13ARLES
H14ARLES
H15ARLES
/*-- H_ASTCK   --*/
H1ASTCK
H2ASTCK
H3ASTCK
H4ASTCK
H5ASTCK
H6ASTCK
H7ASTCK
H8ASTCK
H9ASTCK
H10ASTCK
H11ASTCK
H12ASTCK
H13ASTCK
H14ASTCK
H15ASTCK
/*-- H_ATOTB   --*/
H1ATOTB
H2ATOTB
H3ATOTB
H4ATOTB
H5ATOTB
H6ATOTB
H7ATOTB
H8ATOTB
H9ATOTB
H10ATOTB
H11ATOTB
H12ATOTB
H13ATOTB
H14ATOTB
H15ATOTB
/*-- H_ATOTF   --*/
H1ATOTF
H2ATOTF
H3ATOTF
H4ATOTF
H5ATOTF
H6ATOTF
H7ATOTF
H8ATOTF
H9ATOTF
H10ATOTF
H11ATOTF
H12ATOTF
H13ATOTF
H14ATOTF
H15ATOTF
/*-- H_ATOTH   --*/
H1ATOTH
H2ATOTH
H3ATOTH
H4ATOTH
H5ATOTH
H6ATOTH
H7ATOTH
H8ATOTH
H9ATOTH
H10ATOTH
H11ATOTH
H12ATOTH
H13ATOTH
H14ATOTH
H15ATOTH
/*-- H_ATOTN   --*/
H1ATOTN
H2ATOTN
H3ATOTN
H4ATOTN
H5ATOTN
H6ATOTN
H7ATOTN
H8ATOTN
H9ATOTN
H10ATOTN
H11ATOTN
H12ATOTN
H13ATOTN
H14ATOTN
H15ATOTN
/*-- H_ATOTW   --*/
H1ATOTW
H2ATOTW
H3ATOTW
H4ATOTW
H5ATOTW
H6ATOTW
H7ATOTW
H8ATOTW
H9ATOTW
H10ATOTW
H11ATOTW
H12ATOTW
H13ATOTW
H14ATOTW
H15ATOTW
/*-- H_ATRAN   --*/
H1ATRAN
H2ATRAN
H3ATRAN
H4ATRAN
H5ATRAN
H6ATRAN
H7ATRAN
H8ATRAN
H9ATRAN
H10ATRAN
H11ATRAN
H12ATRAN
H13ATRAN
H14ATRAN
H15ATRAN
/*-- H_CHILD   --*/
H1CHILD
H2CHILD
H3CHILD
H4CHILD
H5CHILD
H6CHILD
H7CHILD
H8CHILD
H9CHILD
H10CHILD
H11CHILD
H12CHILD
H13CHILD
H14CHILD
H15CHILD
/*-- H_CPL   --*/
H1CPL
H2CPL
H3CPL
H4CPL
H5CPL
H6CPL
H7CPL
H8CPL
H9CPL
H10CPL
H11CPL
H12CPL
H13CPL
H14CPL
H15CPL
/*-- H_HHRES   --*/
H1HHRES
H2HHRES
H3HHRES
H4HHRES
H5HHRES
H6HHRES
H7HHRES
H8HHRES
H9HHRES
H10HHRES
H11HHRES
H12HHRES
H13HHRES
H14HHRES
H15HHRES
/*-- H_HHRESP   --*/
H1HHRESP
H2HHRESP
H3HHRESP
H4HHRESP
H5HHRESP
H6HHRESP
H7HHRESP
H8HHRESP
H9HHRESP
H10HHRESP
H11HHRESP
H12HHRESP
H13HHRESP
H14HHRESP
H15HHRESP
/*-- H_ICAP   --*/
H1ICAP
H2ICAP
H3ICAP
H4ICAP
H5ICAP
H6ICAP
H7ICAP
H8ICAP
H9ICAP
H10ICAP
H11ICAP
H12ICAP
H13ICAP
H14ICAP
H15ICAP
/*-- H_IFCAP   --*/
H1IFCAP
H2IFCAP
H3IFCAP
H4IFCAP
H5IFCAP
H6IFCAP
H7IFCAP
H8IFCAP
H9IFCAP
H10IFCAP
H11IFCAP
H12IFCAP
H13IFCAP
H14IFCAP
H15IFCAP
/*-- H_IFIRAW   --*/
H5IFIRAW
H6IFIRAW
H7IFIRAW
H8IFIRAW
H9IFIRAW
H10IFIRAW
H11IFIRAW
H12IFIRAW
H13IFIRAW
H14IFIRAW
H15IFIRAW
/*-- H_IFIRAWY1   --*/
H2IFIRAWY1
/*-- H_IFOTHR   --*/
H1IFOTHR
H2IFOTHR
H3IFOTHR
H4IFOTHR
H5IFOTHR
H6IFOTHR
H7IFOTHR
H8IFOTHR
H9IFOTHR
H10IFOTHR
H11IFOTHR
H12IFOTHR
H13IFOTHR
H14IFOTHR
H15IFOTHR
/*-- H_IFSSI   --*/
H2IFSSI
H3IFSSI
H4IFSSI
H5IFSSI
H6IFSSI
H7IFSSI
H8IFSSI
H9IFSSI
H10IFSSI
H11IFSSI
H12IFSSI
H13IFSSI
H14IFSSI
H15IFSSI
/*-- H_IFTOT   --*/
H1IFTOT
H2IFTOT
H3IFTOT
H4IFTOT
H5IFTOT
H6IFTOT
H7IFTOT
H8IFTOT
H9IFTOT
H10IFTOT
H11IFTOT
H12IFTOT
H13IFTOT
H14IFTOT
H15IFTOT
/*-- H_IFTOT2   --*/
H2IFTOT2
/*-- H_IIRAW   --*/
H5IIRAW
H6IIRAW
H7IIRAW
H8IIRAW
H9IIRAW
H10IIRAW
H11IIRAW
H12IIRAW
H13IIRAW
H14IIRAW
H15IIRAW
/*-- H_IIRAWY1   --*/
H2IIRAWY1
H5IIRAWY1
H6IIRAWY1
H7IIRAWY1
H8IIRAWY1
H9IIRAWY1
H10IIRAWY1
H11IIRAWY1
H12IIRAWY1
H13IIRAWY1
H14IIRAWY1
H15IIRAWY1
/*-- H_INPOV   --*/
H1INPOV
H2INPOV
H3INPOV
H4INPOV
H5INPOV
H6INPOV
H7INPOV
H8INPOV
H9INPOV
H10INPOV
H11INPOV
H12INPOV
H13INPOV
H14INPOV
H15INPOV
/*-- H_INPOVA   --*/
H1INPOVA
H2INPOVA
H3INPOVA
H4INPOVA
H5INPOVA
H6INPOVA
H7INPOVA
H8INPOVA
H9INPOVA
H10INPOVA
H11INPOVA
H12INPOVA
H13INPOVA
H14INPOVA
H15INPOVA
/*-- H_INPOVAD   --*/
H9INPOVAD
H10INPOVAD
/*-- H_INPOVD   --*/
H9INPOVD
H10INPOVD
/*-- H_INPOVR   --*/
H1INPOVR
H2INPOVR
H3INPOVR
H4INPOVR
H5INPOVR
H6INPOVR
H7INPOVR
H8INPOVR
H9INPOVR
H10INPOVR
H11INPOVR
H12INPOVR
H13INPOVR
H14INPOVR
H15INPOVR
/*-- H_INPOVRD   --*/
H9INPOVRD
H10INPOVRD
/*-- H_INPVRA   --*/
H1INPVRA
H2INPVRA
H3INPVRA
H4INPVRA
H5INPVRA
H6INPVRA
H7INPVRA
H8INPVRA
H9INPVRA
H10INPVRA
H11INPVRA
H12INPVRA
H13INPVRA
H14INPVRA
H15INPVRA
/*-- H_INPVRAD   --*/
H9INPVRAD
H10INPVRAD
/*-- H_IOTHR   --*/
H1IOTHR
H2IOTHR
H3IOTHR
H4IOTHR
H5IOTHR
H6IOTHR
H7IOTHR
H8IOTHR
H9IOTHR
H10IOTHR
H11IOTHR
H12IOTHR
H13IOTHR
H14IOTHR
H15IOTHR
/*-- H_ISSI   --*/
H2ISSI
H3ISSI
H4ISSI
H5ISSI
H6ISSI
H7ISSI
H8ISSI
H9ISSI
H10ISSI
H11ISSI
H12ISSI
H13ISSI
H14ISSI
H15ISSI
/*-- H_ITOT   --*/
H1ITOT
H2ITOT
H3ITOT
H4ITOT
H5ITOT
H6ITOT
H7ITOT
H8ITOT
H9ITOT
H10ITOT
H11ITOT
H12ITOT
H13ITOT
H14ITOT
H15ITOT
/*-- H_ITOT2   --*/
H2ITOT2
/*-- H_NHMLIV   --*/
H1NHMLIV
H2NHMLIV
H3NHMLIV
H4NHMLIV
H5NHMLIV
H6NHMLIV
H7NHMLIV
H8NHMLIV
H9NHMLIV
H10NHMLIV
H11NHMLIV
H12NHMLIV
H13NHMLIV
H14NHMLIV
H15NHMLIV
/*-- H_OHRSHH   --*/
H1OHRSHH
/*-- H_OOPMA   --*/
H2OOPMA
/*-- H_OOPMAF   --*/
H2OOPMAF
/*-- H_OOPMD   --*/
H2OOPMD
/*-- H_OOPMDF   --*/
H2OOPMDF
/*-- H_POVFAM   --*/
H1POVFAM
H2POVFAM
H3POVFAM
H4POVFAM
H5POVFAM
H6POVFAM
H7POVFAM
H8POVFAM
H9POVFAM
H10POVFAM
H11POVFAM
H12POVFAM
H13POVFAM
H14POVFAM
H15POVFAM
/*-- H_POVHHI   --*/
H1POVHHI
H2POVHHI
H3POVHHI
H4POVHHI
H5POVHHI
H6POVHHI
H7POVHHI
H8POVHHI
H9POVHHI
H10POVHHI
H11POVHHI
H12POVHHI
H13POVHHI
H14POVHHI
H15POVHHI
/*-- H_POVHHID   --*/
H9POVHHID
H10POVHHID
/*-- H_POVTHR   --*/
H1POVTHR
H2POVTHR
H3POVTHR
H4POVTHR
H5POVTHR
H6POVTHR
H7POVTHR
H8POVTHR
H9POVTHR
H10POVTHR
H11POVTHR
H12POVTHR
H13POVTHR
H14POVTHR
H15POVTHR
/*-- H_PVFAMA   --*/
H1PVFAMA
H2PVFAMA
H3PVFAMA
H4PVFAMA
H5PVFAMA
H6PVFAMA
H7PVFAMA
H8PVFAMA
H9PVFAMA
H10PVFAMA
H11PVFAMA
H12PVFAMA
H13PVFAMA
H14PVFAMA
H15PVFAMA
/*-- H_PVHHIA   --*/
H1PVHHIA
H2PVHHIA
H3PVHHIA
H4PVHHIA
H5PVHHIA
H6PVHHIA
H7PVHHIA
H8PVHHIA
H9PVHHIA
H10PVHHIA
H11PVHHIA
H12PVHHIA
H13PVHHIA
H14PVHHIA
H15PVHHIA
/*-- H_PVHHIAD   --*/
H9PVHHIAD
H10PVHHIAD
/*-- H_PVTHRA   --*/
H1PVTHRA
H2PVTHRA
H3PVTHRA
H4PVTHRA
H5PVTHRA
H6PVTHRA
H7PVTHRA
H8PVTHRA
H9PVTHRA
H10PVTHRA
H11PVTHRA
H12PVTHRA
H13PVTHRA
H14PVTHRA
H15PVTHRA
/*-- H_SSWRER   --*/
H1SSWRER
H4SSWRER
H7SSWRER
H10SSWRER
H13SSWRER
/*-- H_SSWRNR   --*/
H1SSWRNR
H4SSWRNR
H7SSWRNR
H10SSWRNR
H13SSWRNR
/*-- H_SSWRXA   --*/
H1SSWRXA
H4SSWRXA
H7SSWRXA
H10SSWRXA
H13SSWRXA
%mend readvar2_list;

/* Macro `process_data for `HLong` */
%macro process_data /*  ---- Macro `process_data`  for HLong table STARTS  */ ;
%put Init vars for Hlong table ;
%initvars ;
%put Hlong table ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
/* --- RAND variable:HHIDPN  included */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
/* --- RAND variable:HACOHORT  included */ ;
WAVE_NUMBER=1 ;
WAVE_NAME=  'hrs_wave'||strip(put(wave_number,3.))     /* --- Derived variable  */ ;
STUDYYR= hrs_studyyr(wave_number,
hacohort)     /* --- Derived variable  */ ;
CYEAR='yr1992' ;
H_HHID=H1HHID ;
H_HHIDC=H1HHIDC ;
SUBHH= substr(H_HHIDC,7)     /* --- Derived variable  */ ;
INW=INW1 ;
H_PICKHH=H1PICKHH ;
H_ABOND=H1ABOND ;
H_ABSNS=H1ABSNS ;
H_ACD=H1ACD ;
H_ACHCK=H1ACHCK ;
H_ADEBT=H1ADEBT ;
H_AFBOND=H1AFBOND ;
H_AFBSNS=H1AFBSNS ;
H_AFCD=H1AFCD ;
H_AFCHCK=H1AFCHCK ;
H_AFDEBT=H1AFDEBT ;
H_AFHMLN=H1AFHMLN ;
H_AFHOUB=H1AFHOUB ;
H_AFHOUS=H1AFHOUS ;
H_AFIRA=H1AFIRA ;
H_AFMORT=H1AFMORT ;
H_AFMRTB=H1AFMRTB ;
/* Empty map cell for: H_AFNETHB  variable wave =  1*/ ;
H_AFOTHR=H1AFOTHR ;
H_AFRLES=H1AFRLES ;
H_AFSTCK=H1AFSTCK ;
H_AFTRAN=H1AFTRAN ;
H_AHMLN=H1AHMLN ;
H_AHOUB=H1AHOUB ;
H_AHOUS=H1AHOUS ;
H_AIRA=H1AIRA ;
H_AMORT=H1AMORT ;
H_AMRTB=H1AMRTB ;
H_ANETHB=H1ANETHB ;
H_ANYFAM=H1ANYFAM ;
H_ANYFIN=H1ANYFIN ;
H_AOTHR=H1AOTHR ;
H_ARLES=H1ARLES ;
H_ASTCK=H1ASTCK ;
H_ATOTB=H1ATOTB ;
H_ATOTF=H1ATOTF ;
H_ATOTH=H1ATOTH ;
H_ATOTN=H1ATOTN ;
H_ATOTW=H1ATOTW ;
H_ATRAN=H1ATRAN ;
H_CHILD=H1CHILD ;
H_CPL=H1CPL ;
H_HHRES=H1HHRES ;
H_HHRESP=H1HHRESP ;
H_ICAP=H1ICAP ;
H_IFCAP=H1IFCAP ;
/* Empty map cell for: H_IFIRAW   variable wave =  1*/ ;
/* Empty map cell for: H_IFIRAWY1 variable wave =  1*/ ;
H_IFOTHR=H1IFOTHR ;
/* Empty map cell for: H_IFSSI    variable wave =  1*/ ;
H_IFTOT=H1IFTOT ;
/* Empty map cell for: H_IFTOT2   variable wave =  1*/ ;
/* Empty map cell for: H_IIRAW    variable wave =  1*/ ;
/* Empty map cell for: H_IIRAWY1  variable wave =  1*/ ;
H_INPOV=H1INPOV ;
H_INPOVA=H1INPOVA ;
/* Empty map cell for: H_INPOVAD  variable wave =  1*/ ;
/* Empty map cell for: H_INPOVD   variable wave =  1*/ ;
H_INPOVR=H1INPOVR ;
/* Empty map cell for: H_INPOVRD  variable wave =  1*/ ;
H_INPVRA=H1INPVRA ;
/* Empty map cell for: H_INPVRAD  variable wave =  1*/ ;
H_IOTHR=H1IOTHR ;
/* Empty map cell for: H_ISSI     variable wave =  1*/ ;
H_ITOT=H1ITOT ;
/* Empty map cell for: H_ITOT2    variable wave =  1*/ ;
H_NHMLIV=H1NHMLIV ;
H_OHRSHH=H1OHRSHH ;
/* Empty map cell for: H_OOPMA    variable wave =  1*/ ;
/* Empty map cell for: H_OOPMAF   variable wave =  1*/ ;
/* Empty map cell for: H_OOPMD    variable wave =  1*/ ;
/* Empty map cell for: H_OOPMDF   variable wave =  1*/ ;
H_POVFAM=H1POVFAM ;
H_POVHHI=H1POVHHI ;
/* Empty map cell for: H_POVHHID  variable wave =  1*/ ;
H_POVTHR=H1POVTHR ;
H_PVFAMA=H1PVFAMA ;
H_PVHHIA=H1PVHHIA ;
/* Empty map cell for: H_PVHHIAD  variable wave =  1*/ ;
H_PVTHRA=H1PVTHRA ;
H_SSWRER=H1SSWRER ;
H_SSWRNR=H1SSWRNR ;
H_SSWRXA=H1SSWRXA ;
if inw=1 then output ;
%put Init vars for Hlong table ;
%initvars ;
%put Hlong table ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
/* --- RAND variable:HHIDPN  included */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
/* --- RAND variable:HACOHORT  included */ ;
WAVE_NUMBER=2 ;
WAVE_NAME=  'hrs_wave'||strip(put(wave_number,3.))     /* --- Derived variable  */ ;
STUDYYR= hrs_studyyr(wave_number,
hacohort)     /* --- Derived variable  */ ;
CYEAR='yr1993_94' ;
H_HHID=H2HHID ;
H_HHIDC=H2HHIDC ;
SUBHH= substr(H_HHIDC,7)     /* --- Derived variable  */ ;
INW=INW2 ;
H_PICKHH=H2PICKHH ;
H_ABOND=H2ABOND ;
H_ABSNS=H2ABSNS ;
H_ACD=H2ACD ;
H_ACHCK=H2ACHCK ;
H_ADEBT=H2ADEBT ;
H_AFBOND=H2AFBOND ;
H_AFBSNS=H2AFBSNS ;
H_AFCD=H2AFCD ;
H_AFCHCK=H2AFCHCK ;
H_AFDEBT=H2AFDEBT ;
H_AFHMLN=H2AFHMLN ;
H_AFHOUB=H2AFHOUB ;
H_AFHOUS=H2AFHOUS ;
H_AFIRA=H2AFIRA ;
H_AFMORT=H2AFMORT ;
H_AFMRTB=H2AFMRTB ;
H_AFNETHB=H2AFNETHB ;
H_AFOTHR=H2AFOTHR ;
H_AFRLES=H2AFRLES ;
H_AFSTCK=H2AFSTCK ;
H_AFTRAN=H2AFTRAN ;
H_AHMLN=H2AHMLN ;
H_AHOUB=H2AHOUB ;
H_AHOUS=H2AHOUS ;
H_AIRA=H2AIRA ;
H_AMORT=H2AMORT ;
H_AMRTB=H2AMRTB ;
H_ANETHB=H2ANETHB ;
H_ANYFAM=H2ANYFAM ;
H_ANYFIN=H2ANYFIN ;
H_AOTHR=H2AOTHR ;
H_ARLES=H2ARLES ;
H_ASTCK=H2ASTCK ;
H_ATOTB=H2ATOTB ;
H_ATOTF=H2ATOTF ;
H_ATOTH=H2ATOTH ;
H_ATOTN=H2ATOTN ;
H_ATOTW=H2ATOTW ;
H_ATRAN=H2ATRAN ;
H_CHILD=H2CHILD ;
H_CPL=H2CPL ;
H_HHRES=H2HHRES ;
H_HHRESP=H2HHRESP ;
H_ICAP=H2ICAP ;
H_IFCAP=H2IFCAP ;
/* Empty map cell for: H_IFIRAW   variable wave =  2*/ ;
H_IFIRAWY1=H2IFIRAWY1 ;
H_IFOTHR=H2IFOTHR ;
H_IFSSI=H2IFSSI ;
H_IFTOT=H2IFTOT ;
H_IFTOT2=H2IFTOT2 ;
/* Empty map cell for: H_IIRAW    variable wave =  2*/ ;
H_IIRAWY1=H2IIRAWY1 ;
H_INPOV=H2INPOV ;
H_INPOVA=H2INPOVA ;
/* Empty map cell for: H_INPOVAD  variable wave =  2*/ ;
/* Empty map cell for: H_INPOVD   variable wave =  2*/ ;
H_INPOVR=H2INPOVR ;
/* Empty map cell for: H_INPOVRD  variable wave =  2*/ ;
H_INPVRA=H2INPVRA ;
/* Empty map cell for: H_INPVRAD  variable wave =  2*/ ;
H_IOTHR=H2IOTHR ;
H_ISSI=H2ISSI ;
H_ITOT=H2ITOT ;
H_ITOT2=H2ITOT2 ;
H_NHMLIV=H2NHMLIV ;
/* Empty map cell for: H_OHRSHH   variable wave =  2*/ ;
H_OOPMA=H2OOPMA ;
H_OOPMAF=H2OOPMAF ;
H_OOPMD=H2OOPMD ;
H_OOPMDF=H2OOPMDF ;
H_POVFAM=H2POVFAM ;
H_POVHHI=H2POVHHI ;
/* Empty map cell for: H_POVHHID  variable wave =  2*/ ;
H_POVTHR=H2POVTHR ;
H_PVFAMA=H2PVFAMA ;
H_PVHHIA=H2PVHHIA ;
/* Empty map cell for: H_PVHHIAD  variable wave =  2*/ ;
H_PVTHRA=H2PVTHRA ;
/* Empty map cell for: H_SSWRER   variable wave =  2*/ ;
/* Empty map cell for: H_SSWRNR   variable wave =  2*/ ;
/* Empty map cell for: H_SSWRXA   variable wave =  2*/ ;
if inw=1 then output ;
%put Init vars for Hlong table ;
%initvars ;
%put Hlong table ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
/* --- RAND variable:HHIDPN  included */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
/* --- RAND variable:HACOHORT  included */ ;
WAVE_NUMBER=3 ;
WAVE_NAME=  'hrs_wave'||strip(put(wave_number,3.))     /* --- Derived variable  */ ;
STUDYYR= hrs_studyyr(wave_number,
hacohort)     /* --- Derived variable  */ ;
CYEAR='yr1995_96' ;
H_HHID=H3HHID ;
H_HHIDC=H3HHIDC ;
SUBHH= substr(H_HHIDC,7)     /* --- Derived variable  */ ;
INW=INW3 ;
H_PICKHH=H3PICKHH ;
H_ABOND=H3ABOND ;
H_ABSNS=H3ABSNS ;
H_ACD=H3ACD ;
H_ACHCK=H3ACHCK ;
H_ADEBT=H3ADEBT ;
H_AFBOND=H3AFBOND ;
H_AFBSNS=H3AFBSNS ;
H_AFCD=H3AFCD ;
H_AFCHCK=H3AFCHCK ;
H_AFDEBT=H3AFDEBT ;
H_AFHMLN=H3AFHMLN ;
/* Empty map cell for: H_AFHOUB   variable wave =  3*/ ;
H_AFHOUS=H3AFHOUS ;
H_AFIRA=H3AFIRA ;
H_AFMORT=H3AFMORT ;
/* Empty map cell for: H_AFMRTB   variable wave =  3*/ ;
H_AFNETHB=H3AFNETHB ;
H_AFOTHR=H3AFOTHR ;
H_AFRLES=H3AFRLES ;
H_AFSTCK=H3AFSTCK ;
H_AFTRAN=H3AFTRAN ;
H_AHMLN=H3AHMLN ;
H_AHOUB=H3AHOUB ;
H_AHOUS=H3AHOUS ;
H_AIRA=H3AIRA ;
H_AMORT=H3AMORT ;
H_AMRTB=H3AMRTB ;
H_ANETHB=H3ANETHB ;
H_ANYFAM=H3ANYFAM ;
H_ANYFIN=H3ANYFIN ;
H_AOTHR=H3AOTHR ;
H_ARLES=H3ARLES ;
H_ASTCK=H3ASTCK ;
H_ATOTB=H3ATOTB ;
H_ATOTF=H3ATOTF ;
H_ATOTH=H3ATOTH ;
H_ATOTN=H3ATOTN ;
H_ATOTW=H3ATOTW ;
H_ATRAN=H3ATRAN ;
H_CHILD=H3CHILD ;
H_CPL=H3CPL ;
H_HHRES=H3HHRES ;
H_HHRESP=H3HHRESP ;
H_ICAP=H3ICAP ;
H_IFCAP=H3IFCAP ;
/* Empty map cell for: H_IFIRAW   variable wave =  3*/ ;
/* Empty map cell for: H_IFIRAWY1 variable wave =  3*/ ;
H_IFOTHR=H3IFOTHR ;
H_IFSSI=H3IFSSI ;
H_IFTOT=H3IFTOT ;
/* Empty map cell for: H_IFTOT2   variable wave =  3*/ ;
/* Empty map cell for: H_IIRAW    variable wave =  3*/ ;
/* Empty map cell for: H_IIRAWY1  variable wave =  3*/ ;
H_INPOV=H3INPOV ;
H_INPOVA=H3INPOVA ;
/* Empty map cell for: H_INPOVAD  variable wave =  3*/ ;
/* Empty map cell for: H_INPOVD   variable wave =  3*/ ;
H_INPOVR=H3INPOVR ;
/* Empty map cell for: H_INPOVRD  variable wave =  3*/ ;
H_INPVRA=H3INPVRA ;
/* Empty map cell for: H_INPVRAD  variable wave =  3*/ ;
H_IOTHR=H3IOTHR ;
H_ISSI=H3ISSI ;
H_ITOT=H3ITOT ;
/* Empty map cell for: H_ITOT2    variable wave =  3*/ ;
H_NHMLIV=H3NHMLIV ;
/* Empty map cell for: H_OHRSHH   variable wave =  3*/ ;
/* Empty map cell for: H_OOPMA    variable wave =  3*/ ;
/* Empty map cell for: H_OOPMAF   variable wave =  3*/ ;
/* Empty map cell for: H_OOPMD    variable wave =  3*/ ;
/* Empty map cell for: H_OOPMDF   variable wave =  3*/ ;
H_POVFAM=H3POVFAM ;
H_POVHHI=H3POVHHI ;
/* Empty map cell for: H_POVHHID  variable wave =  3*/ ;
H_POVTHR=H3POVTHR ;
H_PVFAMA=H3PVFAMA ;
H_PVHHIA=H3PVHHIA ;
/* Empty map cell for: H_PVHHIAD  variable wave =  3*/ ;
H_PVTHRA=H3PVTHRA ;
/* Empty map cell for: H_SSWRER   variable wave =  3*/ ;
/* Empty map cell for: H_SSWRNR   variable wave =  3*/ ;
/* Empty map cell for: H_SSWRXA   variable wave =  3*/ ;
if inw=1 then output ;
%put Init vars for Hlong table ;
%initvars ;
%put Hlong table ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
/* --- RAND variable:HHIDPN  included */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
/* --- RAND variable:HACOHORT  included */ ;
WAVE_NUMBER=4 ;
WAVE_NAME=  'hrs_wave'||strip(put(wave_number,3.))     /* --- Derived variable  */ ;
STUDYYR= hrs_studyyr(wave_number,
hacohort)     /* --- Derived variable  */ ;
CYEAR='yr1998' ;
H_HHID=H4HHID ;
H_HHIDC=H4HHIDC ;
SUBHH= substr(H_HHIDC,7)     /* --- Derived variable  */ ;
INW=INW4 ;
H_PICKHH=H4PICKHH ;
H_ABOND=H4ABOND ;
H_ABSNS=H4ABSNS ;
H_ACD=H4ACD ;
H_ACHCK=H4ACHCK ;
H_ADEBT=H4ADEBT ;
H_AFBOND=H4AFBOND ;
H_AFBSNS=H4AFBSNS ;
H_AFCD=H4AFCD ;
H_AFCHCK=H4AFCHCK ;
H_AFDEBT=H4AFDEBT ;
H_AFHMLN=H4AFHMLN ;
H_AFHOUB=H4AFHOUB ;
H_AFHOUS=H4AFHOUS ;
H_AFIRA=H4AFIRA ;
H_AFMORT=H4AFMORT ;
H_AFMRTB=H4AFMRTB ;
/* Empty map cell for: H_AFNETHB  variable wave =  4*/ ;
H_AFOTHR=H4AFOTHR ;
H_AFRLES=H4AFRLES ;
H_AFSTCK=H4AFSTCK ;
H_AFTRAN=H4AFTRAN ;
H_AHMLN=H4AHMLN ;
H_AHOUB=H4AHOUB ;
H_AHOUS=H4AHOUS ;
H_AIRA=H4AIRA ;
H_AMORT=H4AMORT ;
H_AMRTB=H4AMRTB ;
H_ANETHB=H4ANETHB ;
H_ANYFAM=H4ANYFAM ;
H_ANYFIN=H4ANYFIN ;
H_AOTHR=H4AOTHR ;
H_ARLES=H4ARLES ;
H_ASTCK=H4ASTCK ;
H_ATOTB=H4ATOTB ;
H_ATOTF=H4ATOTF ;
H_ATOTH=H4ATOTH ;
H_ATOTN=H4ATOTN ;
H_ATOTW=H4ATOTW ;
H_ATRAN=H4ATRAN ;
H_CHILD=H4CHILD ;
H_CPL=H4CPL ;
H_HHRES=H4HHRES ;
H_HHRESP=H4HHRESP ;
H_ICAP=H4ICAP ;
H_IFCAP=H4IFCAP ;
/* Empty map cell for: H_IFIRAW   variable wave =  4*/ ;
/* Empty map cell for: H_IFIRAWY1 variable wave =  4*/ ;
H_IFOTHR=H4IFOTHR ;
H_IFSSI=H4IFSSI ;
H_IFTOT=H4IFTOT ;
/* Empty map cell for: H_IFTOT2   variable wave =  4*/ ;
/* Empty map cell for: H_IIRAW    variable wave =  4*/ ;
/* Empty map cell for: H_IIRAWY1  variable wave =  4*/ ;
H_INPOV=H4INPOV ;
H_INPOVA=H4INPOVA ;
/* Empty map cell for: H_INPOVAD  variable wave =  4*/ ;
/* Empty map cell for: H_INPOVD   variable wave =  4*/ ;
H_INPOVR=H4INPOVR ;
/* Empty map cell for: H_INPOVRD  variable wave =  4*/ ;
H_INPVRA=H4INPVRA ;
/* Empty map cell for: H_INPVRAD  variable wave =  4*/ ;
H_IOTHR=H4IOTHR ;
H_ISSI=H4ISSI ;
H_ITOT=H4ITOT ;
/* Empty map cell for: H_ITOT2    variable wave =  4*/ ;
H_NHMLIV=H4NHMLIV ;
/* Empty map cell for: H_OHRSHH   variable wave =  4*/ ;
/* Empty map cell for: H_OOPMA    variable wave =  4*/ ;
/* Empty map cell for: H_OOPMAF   variable wave =  4*/ ;
/* Empty map cell for: H_OOPMD    variable wave =  4*/ ;
/* Empty map cell for: H_OOPMDF   variable wave =  4*/ ;
H_POVFAM=H4POVFAM ;
H_POVHHI=H4POVHHI ;
/* Empty map cell for: H_POVHHID  variable wave =  4*/ ;
H_POVTHR=H4POVTHR ;
H_PVFAMA=H4PVFAMA ;
H_PVHHIA=H4PVHHIA ;
/* Empty map cell for: H_PVHHIAD  variable wave =  4*/ ;
H_PVTHRA=H4PVTHRA ;
H_SSWRER=H4SSWRER ;
H_SSWRNR=H4SSWRNR ;
H_SSWRXA=H4SSWRXA ;
if inw=1 then output ;
%put Init vars for Hlong table ;
%initvars ;
%put Hlong table ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
/* --- RAND variable:HHIDPN  included */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
/* --- RAND variable:HACOHORT  included */ ;
WAVE_NUMBER=5 ;
WAVE_NAME=  'hrs_wave'||strip(put(wave_number,3.))     /* --- Derived variable  */ ;
STUDYYR= hrs_studyyr(wave_number,
hacohort)     /* --- Derived variable  */ ;
CYEAR='yr2000' ;
H_HHID=H5HHID ;
H_HHIDC=H5HHIDC ;
SUBHH= substr(H_HHIDC,7)     /* --- Derived variable  */ ;
INW=INW5 ;
H_PICKHH=H5PICKHH ;
H_ABOND=H5ABOND ;
H_ABSNS=H5ABSNS ;
H_ACD=H5ACD ;
H_ACHCK=H5ACHCK ;
H_ADEBT=H5ADEBT ;
H_AFBOND=H5AFBOND ;
H_AFBSNS=H5AFBSNS ;
H_AFCD=H5AFCD ;
H_AFCHCK=H5AFCHCK ;
H_AFDEBT=H5AFDEBT ;
H_AFHMLN=H5AFHMLN ;
H_AFHOUB=H5AFHOUB ;
H_AFHOUS=H5AFHOUS ;
H_AFIRA=H5AFIRA ;
H_AFMORT=H5AFMORT ;
H_AFMRTB=H5AFMRTB ;
/* Empty map cell for: H_AFNETHB  variable wave =  5*/ ;
H_AFOTHR=H5AFOTHR ;
H_AFRLES=H5AFRLES ;
H_AFSTCK=H5AFSTCK ;
H_AFTRAN=H5AFTRAN ;
H_AHMLN=H5AHMLN ;
H_AHOUB=H5AHOUB ;
H_AHOUS=H5AHOUS ;
H_AIRA=H5AIRA ;
H_AMORT=H5AMORT ;
H_AMRTB=H5AMRTB ;
H_ANETHB=H5ANETHB ;
H_ANYFAM=H5ANYFAM ;
H_ANYFIN=H5ANYFIN ;
H_AOTHR=H5AOTHR ;
H_ARLES=H5ARLES ;
H_ASTCK=H5ASTCK ;
H_ATOTB=H5ATOTB ;
H_ATOTF=H5ATOTF ;
H_ATOTH=H5ATOTH ;
H_ATOTN=H5ATOTN ;
H_ATOTW=H5ATOTW ;
H_ATRAN=H5ATRAN ;
H_CHILD=H5CHILD ;
H_CPL=H5CPL ;
H_HHRES=H5HHRES ;
H_HHRESP=H5HHRESP ;
H_ICAP=H5ICAP ;
H_IFCAP=H5IFCAP ;
H_IFIRAW=H5IFIRAW ;
/* Empty map cell for: H_IFIRAWY1 variable wave =  5*/ ;
H_IFOTHR=H5IFOTHR ;
H_IFSSI=H5IFSSI ;
H_IFTOT=H5IFTOT ;
/* Empty map cell for: H_IFTOT2   variable wave =  5*/ ;
H_IIRAW=H5IIRAW ;
H_IIRAWY1=H5IIRAWY1 ;
H_INPOV=H5INPOV ;
H_INPOVA=H5INPOVA ;
/* Empty map cell for: H_INPOVAD  variable wave =  5*/ ;
/* Empty map cell for: H_INPOVD   variable wave =  5*/ ;
H_INPOVR=H5INPOVR ;
/* Empty map cell for: H_INPOVRD  variable wave =  5*/ ;
H_INPVRA=H5INPVRA ;
/* Empty map cell for: H_INPVRAD  variable wave =  5*/ ;
H_IOTHR=H5IOTHR ;
H_ISSI=H5ISSI ;
H_ITOT=H5ITOT ;
/* Empty map cell for: H_ITOT2    variable wave =  5*/ ;
H_NHMLIV=H5NHMLIV ;
/* Empty map cell for: H_OHRSHH   variable wave =  5*/ ;
/* Empty map cell for: H_OOPMA    variable wave =  5*/ ;
/* Empty map cell for: H_OOPMAF   variable wave =  5*/ ;
/* Empty map cell for: H_OOPMD    variable wave =  5*/ ;
/* Empty map cell for: H_OOPMDF   variable wave =  5*/ ;
H_POVFAM=H5POVFAM ;
H_POVHHI=H5POVHHI ;
/* Empty map cell for: H_POVHHID  variable wave =  5*/ ;
H_POVTHR=H5POVTHR ;
H_PVFAMA=H5PVFAMA ;
H_PVHHIA=H5PVHHIA ;
/* Empty map cell for: H_PVHHIAD  variable wave =  5*/ ;
H_PVTHRA=H5PVTHRA ;
/* Empty map cell for: H_SSWRER   variable wave =  5*/ ;
/* Empty map cell for: H_SSWRNR   variable wave =  5*/ ;
/* Empty map cell for: H_SSWRXA   variable wave =  5*/ ;
if inw=1 then output ;
%put Init vars for Hlong table ;
%initvars ;
%put Hlong table ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
/* --- RAND variable:HHIDPN  included */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
/* --- RAND variable:HACOHORT  included */ ;
WAVE_NUMBER=6 ;
WAVE_NAME=  'hrs_wave'||strip(put(wave_number,3.))     /* --- Derived variable  */ ;
STUDYYR= hrs_studyyr(wave_number,
hacohort)     /* --- Derived variable  */ ;
CYEAR='yr2002' ;
H_HHID=H6HHID ;
H_HHIDC=H6HHIDC ;
SUBHH= substr(H_HHIDC,7)     /* --- Derived variable  */ ;
INW=INW6 ;
H_PICKHH=H6PICKHH ;
H_ABOND=H6ABOND ;
H_ABSNS=H6ABSNS ;
H_ACD=H6ACD ;
H_ACHCK=H6ACHCK ;
H_ADEBT=H6ADEBT ;
H_AFBOND=H6AFBOND ;
H_AFBSNS=H6AFBSNS ;
H_AFCD=H6AFCD ;
H_AFCHCK=H6AFCHCK ;
H_AFDEBT=H6AFDEBT ;
H_AFHMLN=H6AFHMLN ;
H_AFHOUB=H6AFHOUB ;
H_AFHOUS=H6AFHOUS ;
H_AFIRA=H6AFIRA ;
H_AFMORT=H6AFMORT ;
H_AFMRTB=H6AFMRTB ;
/* Empty map cell for: H_AFNETHB  variable wave =  6*/ ;
H_AFOTHR=H6AFOTHR ;
H_AFRLES=H6AFRLES ;
H_AFSTCK=H6AFSTCK ;
H_AFTRAN=H6AFTRAN ;
H_AHMLN=H6AHMLN ;
H_AHOUB=H6AHOUB ;
H_AHOUS=H6AHOUS ;
H_AIRA=H6AIRA ;
H_AMORT=H6AMORT ;
H_AMRTB=H6AMRTB ;
H_ANETHB=H6ANETHB ;
H_ANYFAM=H6ANYFAM ;
H_ANYFIN=H6ANYFIN ;
H_AOTHR=H6AOTHR ;
H_ARLES=H6ARLES ;
H_ASTCK=H6ASTCK ;
H_ATOTB=H6ATOTB ;
H_ATOTF=H6ATOTF ;
H_ATOTH=H6ATOTH ;
H_ATOTN=H6ATOTN ;
H_ATOTW=H6ATOTW ;
H_ATRAN=H6ATRAN ;
H_CHILD=H6CHILD ;
H_CPL=H6CPL ;
H_HHRES=H6HHRES ;
H_HHRESP=H6HHRESP ;
H_ICAP=H6ICAP ;
H_IFCAP=H6IFCAP ;
H_IFIRAW=H6IFIRAW ;
/* Empty map cell for: H_IFIRAWY1 variable wave =  6*/ ;
H_IFOTHR=H6IFOTHR ;
H_IFSSI=H6IFSSI ;
H_IFTOT=H6IFTOT ;
/* Empty map cell for: H_IFTOT2   variable wave =  6*/ ;
H_IIRAW=H6IIRAW ;
H_IIRAWY1=H6IIRAWY1 ;
H_INPOV=H6INPOV ;
H_INPOVA=H6INPOVA ;
/* Empty map cell for: H_INPOVAD  variable wave =  6*/ ;
/* Empty map cell for: H_INPOVD   variable wave =  6*/ ;
H_INPOVR=H6INPOVR ;
/* Empty map cell for: H_INPOVRD  variable wave =  6*/ ;
H_INPVRA=H6INPVRA ;
/* Empty map cell for: H_INPVRAD  variable wave =  6*/ ;
H_IOTHR=H6IOTHR ;
H_ISSI=H6ISSI ;
H_ITOT=H6ITOT ;
/* Empty map cell for: H_ITOT2    variable wave =  6*/ ;
H_NHMLIV=H6NHMLIV ;
/* Empty map cell for: H_OHRSHH   variable wave =  6*/ ;
/* Empty map cell for: H_OOPMA    variable wave =  6*/ ;
/* Empty map cell for: H_OOPMAF   variable wave =  6*/ ;
/* Empty map cell for: H_OOPMD    variable wave =  6*/ ;
/* Empty map cell for: H_OOPMDF   variable wave =  6*/ ;
H_POVFAM=H6POVFAM ;
H_POVHHI=H6POVHHI ;
/* Empty map cell for: H_POVHHID  variable wave =  6*/ ;
H_POVTHR=H6POVTHR ;
H_PVFAMA=H6PVFAMA ;
H_PVHHIA=H6PVHHIA ;
/* Empty map cell for: H_PVHHIAD  variable wave =  6*/ ;
H_PVTHRA=H6PVTHRA ;
/* Empty map cell for: H_SSWRER   variable wave =  6*/ ;
/* Empty map cell for: H_SSWRNR   variable wave =  6*/ ;
/* Empty map cell for: H_SSWRXA   variable wave =  6*/ ;
if inw=1 then output ;
%put Init vars for Hlong table ;
%initvars ;
%put Hlong table ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
/* --- RAND variable:HHIDPN  included */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
/* --- RAND variable:HACOHORT  included */ ;
WAVE_NUMBER=7 ;
WAVE_NAME=  'hrs_wave'||strip(put(wave_number,3.))     /* --- Derived variable  */ ;
STUDYYR= hrs_studyyr(wave_number,
hacohort)     /* --- Derived variable  */ ;
CYEAR='yr2004' ;
H_HHID=H7HHID ;
H_HHIDC=H7HHIDC ;
SUBHH= substr(H_HHIDC,7)     /* --- Derived variable  */ ;
INW=INW7 ;
H_PICKHH=H7PICKHH ;
H_ABOND=H7ABOND ;
H_ABSNS=H7ABSNS ;
H_ACD=H7ACD ;
H_ACHCK=H7ACHCK ;
H_ADEBT=H7ADEBT ;
H_AFBOND=H7AFBOND ;
H_AFBSNS=H7AFBSNS ;
H_AFCD=H7AFCD ;
H_AFCHCK=H7AFCHCK ;
H_AFDEBT=H7AFDEBT ;
H_AFHMLN=H7AFHMLN ;
H_AFHOUB=H7AFHOUB ;
H_AFHOUS=H7AFHOUS ;
H_AFIRA=H7AFIRA ;
H_AFMORT=H7AFMORT ;
H_AFMRTB=H7AFMRTB ;
/* Empty map cell for: H_AFNETHB  variable wave =  7*/ ;
H_AFOTHR=H7AFOTHR ;
H_AFRLES=H7AFRLES ;
H_AFSTCK=H7AFSTCK ;
H_AFTRAN=H7AFTRAN ;
H_AHMLN=H7AHMLN ;
H_AHOUB=H7AHOUB ;
H_AHOUS=H7AHOUS ;
H_AIRA=H7AIRA ;
H_AMORT=H7AMORT ;
H_AMRTB=H7AMRTB ;
H_ANETHB=H7ANETHB ;
H_ANYFAM=H7ANYFAM ;
H_ANYFIN=H7ANYFIN ;
H_AOTHR=H7AOTHR ;
H_ARLES=H7ARLES ;
H_ASTCK=H7ASTCK ;
H_ATOTB=H7ATOTB ;
H_ATOTF=H7ATOTF ;
H_ATOTH=H7ATOTH ;
H_ATOTN=H7ATOTN ;
H_ATOTW=H7ATOTW ;
H_ATRAN=H7ATRAN ;
H_CHILD=H7CHILD ;
H_CPL=H7CPL ;
H_HHRES=H7HHRES ;
H_HHRESP=H7HHRESP ;
H_ICAP=H7ICAP ;
H_IFCAP=H7IFCAP ;
H_IFIRAW=H7IFIRAW ;
/* Empty map cell for: H_IFIRAWY1 variable wave =  7*/ ;
H_IFOTHR=H7IFOTHR ;
H_IFSSI=H7IFSSI ;
H_IFTOT=H7IFTOT ;
/* Empty map cell for: H_IFTOT2   variable wave =  7*/ ;
H_IIRAW=H7IIRAW ;
H_IIRAWY1=H7IIRAWY1 ;
H_INPOV=H7INPOV ;
H_INPOVA=H7INPOVA ;
/* Empty map cell for: H_INPOVAD  variable wave =  7*/ ;
/* Empty map cell for: H_INPOVD   variable wave =  7*/ ;
H_INPOVR=H7INPOVR ;
/* Empty map cell for: H_INPOVRD  variable wave =  7*/ ;
H_INPVRA=H7INPVRA ;
/* Empty map cell for: H_INPVRAD  variable wave =  7*/ ;
H_IOTHR=H7IOTHR ;
H_ISSI=H7ISSI ;
H_ITOT=H7ITOT ;
/* Empty map cell for: H_ITOT2    variable wave =  7*/ ;
H_NHMLIV=H7NHMLIV ;
/* Empty map cell for: H_OHRSHH   variable wave =  7*/ ;
/* Empty map cell for: H_OOPMA    variable wave =  7*/ ;
/* Empty map cell for: H_OOPMAF   variable wave =  7*/ ;
/* Empty map cell for: H_OOPMD    variable wave =  7*/ ;
/* Empty map cell for: H_OOPMDF   variable wave =  7*/ ;
H_POVFAM=H7POVFAM ;
H_POVHHI=H7POVHHI ;
/* Empty map cell for: H_POVHHID  variable wave =  7*/ ;
H_POVTHR=H7POVTHR ;
H_PVFAMA=H7PVFAMA ;
H_PVHHIA=H7PVHHIA ;
/* Empty map cell for: H_PVHHIAD  variable wave =  7*/ ;
H_PVTHRA=H7PVTHRA ;
H_SSWRER=H7SSWRER ;
H_SSWRNR=H7SSWRNR ;
H_SSWRXA=H7SSWRXA ;
if inw=1 then output ;
%put Init vars for Hlong table ;
%initvars ;
%put Hlong table ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
/* --- RAND variable:HHIDPN  included */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
/* --- RAND variable:HACOHORT  included */ ;
WAVE_NUMBER=8 ;
WAVE_NAME=  'hrs_wave'||strip(put(wave_number,3.))     /* --- Derived variable  */ ;
STUDYYR= hrs_studyyr(wave_number,
hacohort)     /* --- Derived variable  */ ;
CYEAR='yr2006' ;
H_HHID=H8HHID ;
H_HHIDC=H8HHIDC ;
SUBHH= substr(H_HHIDC,7)     /* --- Derived variable  */ ;
INW=INW8 ;
H_PICKHH=H8PICKHH ;
H_ABOND=H8ABOND ;
H_ABSNS=H8ABSNS ;
H_ACD=H8ACD ;
H_ACHCK=H8ACHCK ;
H_ADEBT=H8ADEBT ;
H_AFBOND=H8AFBOND ;
H_AFBSNS=H8AFBSNS ;
H_AFCD=H8AFCD ;
H_AFCHCK=H8AFCHCK ;
H_AFDEBT=H8AFDEBT ;
H_AFHMLN=H8AFHMLN ;
H_AFHOUB=H8AFHOUB ;
H_AFHOUS=H8AFHOUS ;
H_AFIRA=H8AFIRA ;
H_AFMORT=H8AFMORT ;
H_AFMRTB=H8AFMRTB ;
/* Empty map cell for: H_AFNETHB  variable wave =  8*/ ;
H_AFOTHR=H8AFOTHR ;
H_AFRLES=H8AFRLES ;
H_AFSTCK=H8AFSTCK ;
H_AFTRAN=H8AFTRAN ;
H_AHMLN=H8AHMLN ;
H_AHOUB=H8AHOUB ;
H_AHOUS=H8AHOUS ;
H_AIRA=H8AIRA ;
H_AMORT=H8AMORT ;
H_AMRTB=H8AMRTB ;
H_ANETHB=H8ANETHB ;
H_ANYFAM=H8ANYFAM ;
H_ANYFIN=H8ANYFIN ;
H_AOTHR=H8AOTHR ;
H_ARLES=H8ARLES ;
H_ASTCK=H8ASTCK ;
H_ATOTB=H8ATOTB ;
H_ATOTF=H8ATOTF ;
H_ATOTH=H8ATOTH ;
H_ATOTN=H8ATOTN ;
H_ATOTW=H8ATOTW ;
H_ATRAN=H8ATRAN ;
H_CHILD=H8CHILD ;
H_CPL=H8CPL ;
H_HHRES=H8HHRES ;
H_HHRESP=H8HHRESP ;
H_ICAP=H8ICAP ;
H_IFCAP=H8IFCAP ;
H_IFIRAW=H8IFIRAW ;
/* Empty map cell for: H_IFIRAWY1 variable wave =  8*/ ;
H_IFOTHR=H8IFOTHR ;
H_IFSSI=H8IFSSI ;
H_IFTOT=H8IFTOT ;
/* Empty map cell for: H_IFTOT2   variable wave =  8*/ ;
H_IIRAW=H8IIRAW ;
H_IIRAWY1=H8IIRAWY1 ;
H_INPOV=H8INPOV ;
H_INPOVA=H8INPOVA ;
/* Empty map cell for: H_INPOVAD  variable wave =  8*/ ;
/* Empty map cell for: H_INPOVD   variable wave =  8*/ ;
H_INPOVR=H8INPOVR ;
/* Empty map cell for: H_INPOVRD  variable wave =  8*/ ;
H_INPVRA=H8INPVRA ;
/* Empty map cell for: H_INPVRAD  variable wave =  8*/ ;
H_IOTHR=H8IOTHR ;
H_ISSI=H8ISSI ;
H_ITOT=H8ITOT ;
/* Empty map cell for: H_ITOT2    variable wave =  8*/ ;
H_NHMLIV=H8NHMLIV ;
/* Empty map cell for: H_OHRSHH   variable wave =  8*/ ;
/* Empty map cell for: H_OOPMA    variable wave =  8*/ ;
/* Empty map cell for: H_OOPMAF   variable wave =  8*/ ;
/* Empty map cell for: H_OOPMD    variable wave =  8*/ ;
/* Empty map cell for: H_OOPMDF   variable wave =  8*/ ;
H_POVFAM=H8POVFAM ;
H_POVHHI=H8POVHHI ;
/* Empty map cell for: H_POVHHID  variable wave =  8*/ ;
H_POVTHR=H8POVTHR ;
H_PVFAMA=H8PVFAMA ;
H_PVHHIA=H8PVHHIA ;
/* Empty map cell for: H_PVHHIAD  variable wave =  8*/ ;
H_PVTHRA=H8PVTHRA ;
/* Empty map cell for: H_SSWRER   variable wave =  8*/ ;
/* Empty map cell for: H_SSWRNR   variable wave =  8*/ ;
/* Empty map cell for: H_SSWRXA   variable wave =  8*/ ;
if inw=1 then output ;
%put Init vars for Hlong table ;
%initvars ;
%put Hlong table ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
/* --- RAND variable:HHIDPN  included */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
/* --- RAND variable:HACOHORT  included */ ;
WAVE_NUMBER=9 ;
WAVE_NAME=  'hrs_wave'||strip(put(wave_number,3.))     /* --- Derived variable  */ ;
STUDYYR= hrs_studyyr(wave_number,
hacohort)     /* --- Derived variable  */ ;
CYEAR='yr2008' ;
H_HHID=H9HHID ;
H_HHIDC=H9HHIDC ;
SUBHH= substr(H_HHIDC,7)     /* --- Derived variable  */ ;
INW=INW9 ;
H_PICKHH=H9PICKHH ;
H_ABOND=H9ABOND ;
H_ABSNS=H9ABSNS ;
H_ACD=H9ACD ;
H_ACHCK=H9ACHCK ;
H_ADEBT=H9ADEBT ;
H_AFBOND=H9AFBOND ;
H_AFBSNS=H9AFBSNS ;
H_AFCD=H9AFCD ;
H_AFCHCK=H9AFCHCK ;
H_AFDEBT=H9AFDEBT ;
H_AFHMLN=H9AFHMLN ;
H_AFHOUB=H9AFHOUB ;
H_AFHOUS=H9AFHOUS ;
H_AFIRA=H9AFIRA ;
H_AFMORT=H9AFMORT ;
H_AFMRTB=H9AFMRTB ;
/* Empty map cell for: H_AFNETHB  variable wave =  9*/ ;
H_AFOTHR=H9AFOTHR ;
H_AFRLES=H9AFRLES ;
H_AFSTCK=H9AFSTCK ;
H_AFTRAN=H9AFTRAN ;
H_AHMLN=H9AHMLN ;
H_AHOUB=H9AHOUB ;
H_AHOUS=H9AHOUS ;
H_AIRA=H9AIRA ;
H_AMORT=H9AMORT ;
H_AMRTB=H9AMRTB ;
H_ANETHB=H9ANETHB ;
H_ANYFAM=H9ANYFAM ;
H_ANYFIN=H9ANYFIN ;
H_AOTHR=H9AOTHR ;
H_ARLES=H9ARLES ;
H_ASTCK=H9ASTCK ;
H_ATOTB=H9ATOTB ;
H_ATOTF=H9ATOTF ;
H_ATOTH=H9ATOTH ;
H_ATOTN=H9ATOTN ;
H_ATOTW=H9ATOTW ;
H_ATRAN=H9ATRAN ;
H_CHILD=H9CHILD ;
H_CPL=H9CPL ;
H_HHRES=H9HHRES ;
H_HHRESP=H9HHRESP ;
H_ICAP=H9ICAP ;
H_IFCAP=H9IFCAP ;
H_IFIRAW=H9IFIRAW ;
/* Empty map cell for: H_IFIRAWY1 variable wave =  9*/ ;
H_IFOTHR=H9IFOTHR ;
H_IFSSI=H9IFSSI ;
H_IFTOT=H9IFTOT ;
/* Empty map cell for: H_IFTOT2   variable wave =  9*/ ;
H_IIRAW=H9IIRAW ;
H_IIRAWY1=H9IIRAWY1 ;
H_INPOV=H9INPOV ;
H_INPOVA=H9INPOVA ;
H_INPOVAD=H9INPOVAD ;
H_INPOVD=H9INPOVD ;
H_INPOVR=H9INPOVR ;
H_INPOVRD=H9INPOVRD ;
H_INPVRA=H9INPVRA ;
H_INPVRAD=H9INPVRAD ;
H_IOTHR=H9IOTHR ;
H_ISSI=H9ISSI ;
H_ITOT=H9ITOT ;
/* Empty map cell for: H_ITOT2    variable wave =  9*/ ;
H_NHMLIV=H9NHMLIV ;
/* Empty map cell for: H_OHRSHH   variable wave =  9*/ ;
/* Empty map cell for: H_OOPMA    variable wave =  9*/ ;
/* Empty map cell for: H_OOPMAF   variable wave =  9*/ ;
/* Empty map cell for: H_OOPMD    variable wave =  9*/ ;
/* Empty map cell for: H_OOPMDF   variable wave =  9*/ ;
H_POVFAM=H9POVFAM ;
H_POVHHI=H9POVHHI ;
H_POVHHID=H9POVHHID ;
H_POVTHR=H9POVTHR ;
H_PVFAMA=H9PVFAMA ;
H_PVHHIA=H9PVHHIA ;
H_PVHHIAD=H9PVHHIAD ;
H_PVTHRA=H9PVTHRA ;
/* Empty map cell for: H_SSWRER   variable wave =  9*/ ;
/* Empty map cell for: H_SSWRNR   variable wave =  9*/ ;
/* Empty map cell for: H_SSWRXA   variable wave =  9*/ ;
if inw=1 then output ;
%put Init vars for Hlong table ;
%initvars ;
%put Hlong table ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
/* --- RAND variable:HHIDPN  included */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
/* --- RAND variable:HACOHORT  included */ ;
WAVE_NUMBER=10 ;
WAVE_NAME=  'hrs_wave'||strip(put(wave_number,3.))     /* --- Derived variable  */ ;
STUDYYR= hrs_studyyr(wave_number,
hacohort)     /* --- Derived variable  */ ;
CYEAR='yr2010' ;
H_HHID=H10HHID ;
H_HHIDC=H10HHIDC ;
SUBHH= substr(H_HHIDC,7)     /* --- Derived variable  */ ;
INW=INW10 ;
H_PICKHH=H10PICKHH ;
H_ABOND=H10ABOND ;
H_ABSNS=H10ABSNS ;
H_ACD=H10ACD ;
H_ACHCK=H10ACHCK ;
H_ADEBT=H10ADEBT ;
H_AFBOND=H10AFBOND ;
H_AFBSNS=H10AFBSNS ;
H_AFCD=H10AFCD ;
H_AFCHCK=H10AFCHCK ;
H_AFDEBT=H10AFDEBT ;
H_AFHMLN=H10AFHMLN ;
H_AFHOUB=H10AFHOUB ;
H_AFHOUS=H10AFHOUS ;
H_AFIRA=H10AFIRA ;
H_AFMORT=H10AFMORT ;
H_AFMRTB=H10AFMRTB ;
/* Empty map cell for: H_AFNETHB  variable wave = 10*/ ;
H_AFOTHR=H10AFOTHR ;
H_AFRLES=H10AFRLES ;
H_AFSTCK=H10AFSTCK ;
H_AFTRAN=H10AFTRAN ;
H_AHMLN=H10AHMLN ;
H_AHOUB=H10AHOUB ;
H_AHOUS=H10AHOUS ;
H_AIRA=H10AIRA ;
H_AMORT=H10AMORT ;
H_AMRTB=H10AMRTB ;
H_ANETHB=H10ANETHB ;
H_ANYFAM=H10ANYFAM ;
H_ANYFIN=H10ANYFIN ;
H_AOTHR=H10AOTHR ;
H_ARLES=H10ARLES ;
H_ASTCK=H10ASTCK ;
H_ATOTB=H10ATOTB ;
H_ATOTF=H10ATOTF ;
H_ATOTH=H10ATOTH ;
H_ATOTN=H10ATOTN ;
H_ATOTW=H10ATOTW ;
H_ATRAN=H10ATRAN ;
H_CHILD=H10CHILD ;
H_CPL=H10CPL ;
H_HHRES=H10HHRES ;
H_HHRESP=H10HHRESP ;
H_ICAP=H10ICAP ;
H_IFCAP=H10IFCAP ;
H_IFIRAW=H10IFIRAW ;
/* Empty map cell for: H_IFIRAWY1 variable wave = 10*/ ;
H_IFOTHR=H10IFOTHR ;
H_IFSSI=H10IFSSI ;
H_IFTOT=H10IFTOT ;
/* Empty map cell for: H_IFTOT2   variable wave = 10*/ ;
H_IIRAW=H10IIRAW ;
H_IIRAWY1=H10IIRAWY1 ;
H_INPOV=H10INPOV ;
H_INPOVA=H10INPOVA ;
H_INPOVAD=H10INPOVAD ;
H_INPOVD=H10INPOVD ;
H_INPOVR=H10INPOVR ;
H_INPOVRD=H10INPOVRD ;
H_INPVRA=H10INPVRA ;
H_INPVRAD=H10INPVRAD ;
H_IOTHR=H10IOTHR ;
H_ISSI=H10ISSI ;
H_ITOT=H10ITOT ;
/* Empty map cell for: H_ITOT2    variable wave = 10*/ ;
H_NHMLIV=H10NHMLIV ;
/* Empty map cell for: H_OHRSHH   variable wave = 10*/ ;
/* Empty map cell for: H_OOPMA    variable wave = 10*/ ;
/* Empty map cell for: H_OOPMAF   variable wave = 10*/ ;
/* Empty map cell for: H_OOPMD    variable wave = 10*/ ;
/* Empty map cell for: H_OOPMDF   variable wave = 10*/ ;
H_POVFAM=H10POVFAM ;
H_POVHHI=H10POVHHI ;
H_POVHHID=H10POVHHID ;
H_POVTHR=H10POVTHR ;
H_PVFAMA=H10PVFAMA ;
H_PVHHIA=H10PVHHIA ;
H_PVHHIAD=H10PVHHIAD ;
H_PVTHRA=H10PVTHRA ;
H_SSWRER=H10SSWRER ;
H_SSWRNR=H10SSWRNR ;
H_SSWRXA=H10SSWRXA ;
if inw=1 then output ;
%put Init vars for Hlong table ;
%initvars ;
%put Hlong table ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
/* --- RAND variable:HHIDPN  included */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
/* --- RAND variable:HACOHORT  included */ ;
WAVE_NUMBER=11 ;
WAVE_NAME=  'hrs_wave'||strip(put(wave_number,3.))     /* --- Derived variable  */ ;
STUDYYR= hrs_studyyr(wave_number,
hacohort)     /* --- Derived variable  */ ;
CYEAR='yr2012' ;
H_HHID=H11HHID ;
H_HHIDC=H11HHIDC ;
SUBHH= substr(H_HHIDC,7)     /* --- Derived variable  */ ;
INW=INW11 ;
H_PICKHH=H11PICKHH ;
H_ABOND=H11ABOND ;
H_ABSNS=H11ABSNS ;
H_ACD=H11ACD ;
H_ACHCK=H11ACHCK ;
H_ADEBT=H11ADEBT ;
H_AFBOND=H11AFBOND ;
H_AFBSNS=H11AFBSNS ;
H_AFCD=H11AFCD ;
H_AFCHCK=H11AFCHCK ;
H_AFDEBT=H11AFDEBT ;
H_AFHMLN=H11AFHMLN ;
H_AFHOUB=H11AFHOUB ;
H_AFHOUS=H11AFHOUS ;
H_AFIRA=H11AFIRA ;
H_AFMORT=H11AFMORT ;
H_AFMRTB=H11AFMRTB ;
/* Empty map cell for: H_AFNETHB  variable wave = 11*/ ;
H_AFOTHR=H11AFOTHR ;
H_AFRLES=H11AFRLES ;
H_AFSTCK=H11AFSTCK ;
H_AFTRAN=H11AFTRAN ;
H_AHMLN=H11AHMLN ;
H_AHOUB=H11AHOUB ;
H_AHOUS=H11AHOUS ;
H_AIRA=H11AIRA ;
H_AMORT=H11AMORT ;
H_AMRTB=H11AMRTB ;
H_ANETHB=H11ANETHB ;
H_ANYFAM=H11ANYFAM ;
H_ANYFIN=H11ANYFIN ;
H_AOTHR=H11AOTHR ;
H_ARLES=H11ARLES ;
H_ASTCK=H11ASTCK ;
H_ATOTB=H11ATOTB ;
H_ATOTF=H11ATOTF ;
H_ATOTH=H11ATOTH ;
H_ATOTN=H11ATOTN ;
H_ATOTW=H11ATOTW ;
H_ATRAN=H11ATRAN ;
H_CHILD=H11CHILD ;
H_CPL=H11CPL ;
H_HHRES=H11HHRES ;
H_HHRESP=H11HHRESP ;
H_ICAP=H11ICAP ;
H_IFCAP=H11IFCAP ;
H_IFIRAW=H11IFIRAW ;
/* Empty map cell for: H_IFIRAWY1 variable wave = 11*/ ;
H_IFOTHR=H11IFOTHR ;
H_IFSSI=H11IFSSI ;
H_IFTOT=H11IFTOT ;
/* Empty map cell for: H_IFTOT2   variable wave = 11*/ ;
H_IIRAW=H11IIRAW ;
H_IIRAWY1=H11IIRAWY1 ;
H_INPOV=H11INPOV ;
H_INPOVA=H11INPOVA ;
/* Empty map cell for: H_INPOVAD  variable wave = 11*/ ;
/* Empty map cell for: H_INPOVD   variable wave = 11*/ ;
H_INPOVR=H11INPOVR ;
/* Empty map cell for: H_INPOVRD  variable wave = 11*/ ;
H_INPVRA=H11INPVRA ;
/* Empty map cell for: H_INPVRAD  variable wave = 11*/ ;
H_IOTHR=H11IOTHR ;
H_ISSI=H11ISSI ;
H_ITOT=H11ITOT ;
/* Empty map cell for: H_ITOT2    variable wave = 11*/ ;
H_NHMLIV=H11NHMLIV ;
/* Empty map cell for: H_OHRSHH   variable wave = 11*/ ;
/* Empty map cell for: H_OOPMA    variable wave = 11*/ ;
/* Empty map cell for: H_OOPMAF   variable wave = 11*/ ;
/* Empty map cell for: H_OOPMD    variable wave = 11*/ ;
/* Empty map cell for: H_OOPMDF   variable wave = 11*/ ;
H_POVFAM=H11POVFAM ;
H_POVHHI=H11POVHHI ;
/* Empty map cell for: H_POVHHID  variable wave = 11*/ ;
H_POVTHR=H11POVTHR ;
H_PVFAMA=H11PVFAMA ;
H_PVHHIA=H11PVHHIA ;
/* Empty map cell for: H_PVHHIAD  variable wave = 11*/ ;
H_PVTHRA=H11PVTHRA ;
/* Empty map cell for: H_SSWRER   variable wave = 11*/ ;
/* Empty map cell for: H_SSWRNR   variable wave = 11*/ ;
/* Empty map cell for: H_SSWRXA   variable wave = 11*/ ;
if inw=1 then output ;
%put Init vars for Hlong table ;
%initvars ;
%put Hlong table ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
/* --- RAND variable:HHIDPN  included */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
/* --- RAND variable:HACOHORT  included */ ;
WAVE_NUMBER=12 ;
WAVE_NAME=  'hrs_wave'||strip(put(wave_number,3.))     /* --- Derived variable  */ ;
STUDYYR= hrs_studyyr(wave_number,
hacohort)     /* --- Derived variable  */ ;
CYEAR='yr2014' ;
H_HHID=H12HHID ;
H_HHIDC=H12HHIDC ;
SUBHH= substr(H_HHIDC,7)     /* --- Derived variable  */ ;
INW=INW12 ;
H_PICKHH=H12PICKHH ;
H_ABOND=H12ABOND ;
H_ABSNS=H12ABSNS ;
H_ACD=H12ACD ;
H_ACHCK=H12ACHCK ;
H_ADEBT=H12ADEBT ;
H_AFBOND=H12AFBOND ;
H_AFBSNS=H12AFBSNS ;
H_AFCD=H12AFCD ;
H_AFCHCK=H12AFCHCK ;
H_AFDEBT=H12AFDEBT ;
H_AFHMLN=H12AFHMLN ;
H_AFHOUB=H12AFHOUB ;
H_AFHOUS=H12AFHOUS ;
H_AFIRA=H12AFIRA ;
H_AFMORT=H12AFMORT ;
H_AFMRTB=H12AFMRTB ;
/* Empty map cell for: H_AFNETHB  variable wave = 12*/ ;
H_AFOTHR=H12AFOTHR ;
H_AFRLES=H12AFRLES ;
H_AFSTCK=H12AFSTCK ;
H_AFTRAN=H12AFTRAN ;
H_AHMLN=H12AHMLN ;
H_AHOUB=H12AHOUB ;
H_AHOUS=H12AHOUS ;
H_AIRA=H12AIRA ;
H_AMORT=H12AMORT ;
H_AMRTB=H12AMRTB ;
H_ANETHB=H12ANETHB ;
H_ANYFAM=H12ANYFAM ;
H_ANYFIN=H12ANYFIN ;
H_AOTHR=H12AOTHR ;
H_ARLES=H12ARLES ;
H_ASTCK=H12ASTCK ;
H_ATOTB=H12ATOTB ;
H_ATOTF=H12ATOTF ;
H_ATOTH=H12ATOTH ;
H_ATOTN=H12ATOTN ;
H_ATOTW=H12ATOTW ;
H_ATRAN=H12ATRAN ;
H_CHILD=H12CHILD ;
H_CPL=H12CPL ;
H_HHRES=H12HHRES ;
H_HHRESP=H12HHRESP ;
H_ICAP=H12ICAP ;
H_IFCAP=H12IFCAP ;
H_IFIRAW=H12IFIRAW ;
/* Empty map cell for: H_IFIRAWY1 variable wave = 12*/ ;
H_IFOTHR=H12IFOTHR ;
H_IFSSI=H12IFSSI ;
H_IFTOT=H12IFTOT ;
/* Empty map cell for: H_IFTOT2   variable wave = 12*/ ;
H_IIRAW=H12IIRAW ;
H_IIRAWY1=H12IIRAWY1 ;
H_INPOV=H12INPOV ;
H_INPOVA=H12INPOVA ;
/* Empty map cell for: H_INPOVAD  variable wave = 12*/ ;
/* Empty map cell for: H_INPOVD   variable wave = 12*/ ;
H_INPOVR=H12INPOVR ;
/* Empty map cell for: H_INPOVRD  variable wave = 12*/ ;
H_INPVRA=H12INPVRA ;
/* Empty map cell for: H_INPVRAD  variable wave = 12*/ ;
H_IOTHR=H12IOTHR ;
H_ISSI=H12ISSI ;
H_ITOT=H12ITOT ;
/* Empty map cell for: H_ITOT2    variable wave = 12*/ ;
H_NHMLIV=H12NHMLIV ;
/* Empty map cell for: H_OHRSHH   variable wave = 12*/ ;
/* Empty map cell for: H_OOPMA    variable wave = 12*/ ;
/* Empty map cell for: H_OOPMAF   variable wave = 12*/ ;
/* Empty map cell for: H_OOPMD    variable wave = 12*/ ;
/* Empty map cell for: H_OOPMDF   variable wave = 12*/ ;
H_POVFAM=H12POVFAM ;
H_POVHHI=H12POVHHI ;
/* Empty map cell for: H_POVHHID  variable wave = 12*/ ;
H_POVTHR=H12POVTHR ;
H_PVFAMA=H12PVFAMA ;
H_PVHHIA=H12PVHHIA ;
/* Empty map cell for: H_PVHHIAD  variable wave = 12*/ ;
H_PVTHRA=H12PVTHRA ;
/* Empty map cell for: H_SSWRER   variable wave = 12*/ ;
/* Empty map cell for: H_SSWRNR   variable wave = 12*/ ;
/* Empty map cell for: H_SSWRXA   variable wave = 12*/ ;
if inw=1 then output ;
%put Init vars for Hlong table ;
%initvars ;
%put Hlong table ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
/* --- RAND variable:HHIDPN  included */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
/* --- RAND variable:HACOHORT  included */ ;
WAVE_NUMBER=13 ;
WAVE_NAME=  'hrs_wave'||strip(put(wave_number,3.))     /* --- Derived variable  */ ;
STUDYYR= hrs_studyyr(wave_number,
hacohort)     /* --- Derived variable  */ ;
CYEAR='yr2016' ;
H_HHID=H13HHID ;
H_HHIDC=H13HHIDC ;
SUBHH= substr(H_HHIDC,7)     /* --- Derived variable  */ ;
INW=INW13 ;
H_PICKHH=H13PICKHH ;
H_ABOND=H13ABOND ;
H_ABSNS=H13ABSNS ;
H_ACD=H13ACD ;
H_ACHCK=H13ACHCK ;
H_ADEBT=H13ADEBT ;
H_AFBOND=H13AFBOND ;
H_AFBSNS=H13AFBSNS ;
H_AFCD=H13AFCD ;
H_AFCHCK=H13AFCHCK ;
H_AFDEBT=H13AFDEBT ;
H_AFHMLN=H13AFHMLN ;
H_AFHOUB=H13AFHOUB ;
H_AFHOUS=H13AFHOUS ;
H_AFIRA=H13AFIRA ;
H_AFMORT=H13AFMORT ;
H_AFMRTB=H13AFMRTB ;
/* Empty map cell for: H_AFNETHB  variable wave = 13*/ ;
H_AFOTHR=H13AFOTHR ;
H_AFRLES=H13AFRLES ;
H_AFSTCK=H13AFSTCK ;
H_AFTRAN=H13AFTRAN ;
H_AHMLN=H13AHMLN ;
H_AHOUB=H13AHOUB ;
H_AHOUS=H13AHOUS ;
H_AIRA=H13AIRA ;
H_AMORT=H13AMORT ;
H_AMRTB=H13AMRTB ;
H_ANETHB=H13ANETHB ;
H_ANYFAM=H13ANYFAM ;
H_ANYFIN=H13ANYFIN ;
H_AOTHR=H13AOTHR ;
H_ARLES=H13ARLES ;
H_ASTCK=H13ASTCK ;
H_ATOTB=H13ATOTB ;
H_ATOTF=H13ATOTF ;
H_ATOTH=H13ATOTH ;
H_ATOTN=H13ATOTN ;
H_ATOTW=H13ATOTW ;
H_ATRAN=H13ATRAN ;
H_CHILD=H13CHILD ;
H_CPL=H13CPL ;
H_HHRES=H13HHRES ;
H_HHRESP=H13HHRESP ;
H_ICAP=H13ICAP ;
H_IFCAP=H13IFCAP ;
H_IFIRAW=H13IFIRAW ;
/* Empty map cell for: H_IFIRAWY1 variable wave = 13*/ ;
H_IFOTHR=H13IFOTHR ;
H_IFSSI=H13IFSSI ;
H_IFTOT=H13IFTOT ;
/* Empty map cell for: H_IFTOT2   variable wave = 13*/ ;
H_IIRAW=H13IIRAW ;
H_IIRAWY1=H13IIRAWY1 ;
H_INPOV=H13INPOV ;
H_INPOVA=H13INPOVA ;
/* Empty map cell for: H_INPOVAD  variable wave = 13*/ ;
/* Empty map cell for: H_INPOVD   variable wave = 13*/ ;
H_INPOVR=H13INPOVR ;
/* Empty map cell for: H_INPOVRD  variable wave = 13*/ ;
H_INPVRA=H13INPVRA ;
/* Empty map cell for: H_INPVRAD  variable wave = 13*/ ;
H_IOTHR=H13IOTHR ;
H_ISSI=H13ISSI ;
H_ITOT=H13ITOT ;
/* Empty map cell for: H_ITOT2    variable wave = 13*/ ;
H_NHMLIV=H13NHMLIV ;
/* Empty map cell for: H_OHRSHH   variable wave = 13*/ ;
/* Empty map cell for: H_OOPMA    variable wave = 13*/ ;
/* Empty map cell for: H_OOPMAF   variable wave = 13*/ ;
/* Empty map cell for: H_OOPMD    variable wave = 13*/ ;
/* Empty map cell for: H_OOPMDF   variable wave = 13*/ ;
H_POVFAM=H13POVFAM ;
H_POVHHI=H13POVHHI ;
/* Empty map cell for: H_POVHHID  variable wave = 13*/ ;
H_POVTHR=H13POVTHR ;
H_PVFAMA=H13PVFAMA ;
H_PVHHIA=H13PVHHIA ;
/* Empty map cell for: H_PVHHIAD  variable wave = 13*/ ;
H_PVTHRA=H13PVTHRA ;
H_SSWRER=H13SSWRER ;
H_SSWRNR=H13SSWRNR ;
H_SSWRXA=H13SSWRXA ;
if inw=1 then output ;
%put Init vars for Hlong table ;
%initvars ;
%put Hlong table ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
/* --- RAND variable:HHIDPN  included */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
/* --- RAND variable:HACOHORT  included */ ;
WAVE_NUMBER=14 ;
WAVE_NAME=  'hrs_wave'||strip(put(wave_number,3.))     /* --- Derived variable  */ ;
STUDYYR= hrs_studyyr(wave_number,
hacohort)     /* --- Derived variable  */ ;
CYEAR='yr2018' ;
H_HHID=H14HHID ;
H_HHIDC=H14HHIDC ;
SUBHH= substr(H_HHIDC,7)     /* --- Derived variable  */ ;
INW=INW14 ;
H_PICKHH=H14PICKHH ;
H_ABOND=H14ABOND ;
H_ABSNS=H14ABSNS ;
H_ACD=H14ACD ;
H_ACHCK=H14ACHCK ;
H_ADEBT=H14ADEBT ;
H_AFBOND=H14AFBOND ;
H_AFBSNS=H14AFBSNS ;
H_AFCD=H14AFCD ;
H_AFCHCK=H14AFCHCK ;
H_AFDEBT=H14AFDEBT ;
H_AFHMLN=H14AFHMLN ;
H_AFHOUB=H14AFHOUB ;
H_AFHOUS=H14AFHOUS ;
H_AFIRA=H14AFIRA ;
H_AFMORT=H14AFMORT ;
H_AFMRTB=H14AFMRTB ;
/* Empty map cell for: H_AFNETHB  variable wave = 14*/ ;
H_AFOTHR=H14AFOTHR ;
H_AFRLES=H14AFRLES ;
H_AFSTCK=H14AFSTCK ;
H_AFTRAN=H14AFTRAN ;
H_AHMLN=H14AHMLN ;
H_AHOUB=H14AHOUB ;
H_AHOUS=H14AHOUS ;
H_AIRA=H14AIRA ;
H_AMORT=H14AMORT ;
H_AMRTB=H14AMRTB ;
H_ANETHB=H14ANETHB ;
H_ANYFAM=H14ANYFAM ;
H_ANYFIN=H14ANYFIN ;
H_AOTHR=H14AOTHR ;
H_ARLES=H14ARLES ;
H_ASTCK=H14ASTCK ;
H_ATOTB=H14ATOTB ;
H_ATOTF=H14ATOTF ;
H_ATOTH=H14ATOTH ;
H_ATOTN=H14ATOTN ;
H_ATOTW=H14ATOTW ;
H_ATRAN=H14ATRAN ;
H_CHILD=H14CHILD ;
H_CPL=H14CPL ;
H_HHRES=H14HHRES ;
H_HHRESP=H14HHRESP ;
H_ICAP=H14ICAP ;
H_IFCAP=H14IFCAP ;
H_IFIRAW=H14IFIRAW ;
/* Empty map cell for: H_IFIRAWY1 variable wave = 14*/ ;
H_IFOTHR=H14IFOTHR ;
H_IFSSI=H14IFSSI ;
H_IFTOT=H14IFTOT ;
/* Empty map cell for: H_IFTOT2   variable wave = 14*/ ;
H_IIRAW=H14IIRAW ;
H_IIRAWY1=H14IIRAWY1 ;
H_INPOV=H14INPOV ;
H_INPOVA=H14INPOVA ;
/* Empty map cell for: H_INPOVAD  variable wave = 14*/ ;
/* Empty map cell for: H_INPOVD   variable wave = 14*/ ;
H_INPOVR=H14INPOVR ;
/* Empty map cell for: H_INPOVRD  variable wave = 14*/ ;
H_INPVRA=H14INPVRA ;
/* Empty map cell for: H_INPVRAD  variable wave = 14*/ ;
H_IOTHR=H14IOTHR ;
H_ISSI=H14ISSI ;
H_ITOT=H14ITOT ;
/* Empty map cell for: H_ITOT2    variable wave = 14*/ ;
H_NHMLIV=H14NHMLIV ;
/* Empty map cell for: H_OHRSHH   variable wave = 14*/ ;
/* Empty map cell for: H_OOPMA    variable wave = 14*/ ;
/* Empty map cell for: H_OOPMAF   variable wave = 14*/ ;
/* Empty map cell for: H_OOPMD    variable wave = 14*/ ;
/* Empty map cell for: H_OOPMDF   variable wave = 14*/ ;
H_POVFAM=H14POVFAM ;
H_POVHHI=H14POVHHI ;
/* Empty map cell for: H_POVHHID  variable wave = 14*/ ;
H_POVTHR=H14POVTHR ;
H_PVFAMA=H14PVFAMA ;
H_PVHHIA=H14PVHHIA ;
/* Empty map cell for: H_PVHHIAD  variable wave = 14*/ ;
H_PVTHRA=H14PVTHRA ;
/* Empty map cell for: H_SSWRER   variable wave = 14*/ ;
/* Empty map cell for: H_SSWRNR   variable wave = 14*/ ;
/* Empty map cell for: H_SSWRXA   variable wave = 14*/ ;
if inw=1 then output ;
%put Init vars for Hlong table ;
%initvars ;
%put Hlong table ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
/* --- RAND variable:HHIDPN  included */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
/* --- RAND variable:HACOHORT  included */ ;
WAVE_NUMBER=15 ;
WAVE_NAME=  'hrs_wave'||strip(put(wave_number,3.))     /* --- Derived variable  */ ;
STUDYYR= hrs_studyyr(wave_number,
hacohort)     /* --- Derived variable  */ ;
CYEAR='yr2020' ;
H_HHID=H15HHID ;
H_HHIDC=H15HHIDC ;
SUBHH= substr(H_HHIDC,7)     /* --- Derived variable  */ ;
INW=INW15 ;
H_PICKHH=H15PICKHH ;
H_ABOND=H15ABOND ;
H_ABSNS=H15ABSNS ;
H_ACD=H15ACD ;
H_ACHCK=H15ACHCK ;
H_ADEBT=H15ADEBT ;
H_AFBOND=H15AFBOND ;
H_AFBSNS=H15AFBSNS ;
H_AFCD=H15AFCD ;
H_AFCHCK=H15AFCHCK ;
H_AFDEBT=H15AFDEBT ;
H_AFHMLN=H15AFHMLN ;
H_AFHOUB=H15AFHOUB ;
H_AFHOUS=H15AFHOUS ;
H_AFIRA=H15AFIRA ;
H_AFMORT=H15AFMORT ;
H_AFMRTB=H15AFMRTB ;
/* Empty map cell for: H_AFNETHB  variable wave = 15*/ ;
H_AFOTHR=H15AFOTHR ;
H_AFRLES=H15AFRLES ;
H_AFSTCK=H15AFSTCK ;
H_AFTRAN=H15AFTRAN ;
H_AHMLN=H15AHMLN ;
H_AHOUB=H15AHOUB ;
H_AHOUS=H15AHOUS ;
H_AIRA=H15AIRA ;
H_AMORT=H15AMORT ;
H_AMRTB=H15AMRTB ;
H_ANETHB=H15ANETHB ;
H_ANYFAM=H15ANYFAM ;
H_ANYFIN=H15ANYFIN ;
H_AOTHR=H15AOTHR ;
H_ARLES=H15ARLES ;
H_ASTCK=H15ASTCK ;
H_ATOTB=H15ATOTB ;
H_ATOTF=H15ATOTF ;
H_ATOTH=H15ATOTH ;
H_ATOTN=H15ATOTN ;
H_ATOTW=H15ATOTW ;
H_ATRAN=H15ATRAN ;
H_CHILD=H15CHILD ;
H_CPL=H15CPL ;
H_HHRES=H15HHRES ;
H_HHRESP=H15HHRESP ;
H_ICAP=H15ICAP ;
H_IFCAP=H15IFCAP ;
H_IFIRAW=H15IFIRAW ;
/* Empty map cell for: H_IFIRAWY1 variable wave = 15*/ ;
H_IFOTHR=H15IFOTHR ;
H_IFSSI=H15IFSSI ;
H_IFTOT=H15IFTOT ;
/* Empty map cell for: H_IFTOT2   variable wave = 15*/ ;
H_IIRAW=H15IIRAW ;
H_IIRAWY1=H15IIRAWY1 ;
H_INPOV=H15INPOV ;
H_INPOVA=H15INPOVA ;
/* Empty map cell for: H_INPOVAD  variable wave = 15*/ ;
/* Empty map cell for: H_INPOVD   variable wave = 15*/ ;
H_INPOVR=H15INPOVR ;
/* Empty map cell for: H_INPOVRD  variable wave = 15*/ ;
H_INPVRA=H15INPVRA ;
/* Empty map cell for: H_INPVRAD  variable wave = 15*/ ;
H_IOTHR=H15IOTHR ;
H_ISSI=H15ISSI ;
H_ITOT=H15ITOT ;
/* Empty map cell for: H_ITOT2    variable wave = 15*/ ;
H_NHMLIV=H15NHMLIV ;
/* Empty map cell for: H_OHRSHH   variable wave = 15*/ ;
/* Empty map cell for: H_OOPMA    variable wave = 15*/ ;
/* Empty map cell for: H_OOPMAF   variable wave = 15*/ ;
/* Empty map cell for: H_OOPMD    variable wave = 15*/ ;
/* Empty map cell for: H_OOPMDF   variable wave = 15*/ ;
H_POVFAM=H15POVFAM ;
H_POVHHI=H15POVHHI ;
/* Empty map cell for: H_POVHHID  variable wave = 15*/ ;
H_POVTHR=H15POVTHR ;
H_PVFAMA=H15PVFAMA ;
H_PVHHIA=H15PVHHIA ;
/* Empty map cell for: H_PVHHIAD  variable wave = 15*/ ;
H_PVTHRA=H15PVTHRA ;
/* Empty map cell for: H_SSWRER   variable wave = 15*/ ;
/* Empty map cell for: H_SSWRNR   variable wave = 15*/ ;
/* Empty map cell for: H_SSWRXA   variable wave = 15*/ ;
if inw=1 then output ;
%mend process_data /*  ---- Macro `process_data` definition for HLong table ENDS  */ ;
