/* This is map_file `Rexit_map_file.inc` for `Rexit_table` dataset */
/* Repo name := RAND2LONG-ver1 (version 0.70) */
/* Project name := randhrs1992_2020v1 */
/* Excel map: test3_maps21FEB2024.xlsx */
/* Date stamp: 29FEB24  */


%macro label_statements;
/* Table Rexit: Label statements for 105 variables */
/* Macro invoked by `create_template_longout` macro */
  label HHID  = "HHID: HHold ID / 6-Char <KEY1>";
  label PN  = "Person Number (CHAR) <KEY2>";
  label HHIDPN  = "HHIDPN: HHold ID + Person Number /Num";
  label RAHHIDPN  = "RAHHIDPN: HHold ID + Person Num /9-Char";
  label HACOHORT  = "HACOHORT: Sample cohort";
  label READL5H  = "READL5H: EXIT R Gets Help-sum of ADLs /0-5";
  label READL6H  = "READL6H: EXIT R Gets Help-sum of ADLs /0-6";
  label REALONE  = "REALONE:EXIT R could be left alone";
  label REBATHH  = "REBATHH:EXIT R got help-Bathing, showering";

 /* --Variable REBATHT : # _10 */
  label REBATHT  = "REBATHT:EXIT Time R got help-Bathing, showering";
  label REBEDH  = "REBEDH:EXIT R got help-Get in/out bed";
  label REBEDRID  = "REBEDRID:EXIT Bedridden around time of death";
  label REBEDT  = "REBEDT:EXIT Time R got help-Get in/out bed";
  label RECENDIV  = "RECENDIV:EXIT Census Division, place of death";
  label RECENREG  = "RECENREG:EXIT Census Region, place of death";
  label RECOVR  = "RECOVR:EXIT R covered by R empl plan";
  label RECOVS  = "RECOVS:EXIT R covered by S empl plan";
  label REDOCTIM  = "REDOCTIM:EXIT # Doctor visits";
  label REDOCTOR  = "REDOCTOR:EXIT Doctor visit";

 /* --Variable REDRESSH : # _20 */
  label REDRESSH  = "REDRESSH:EXIT R got help-Dressing";
  label REDRESST  = "REDRESST:EXIT Time R got help-Dressing";
  label REDRUGS  = "REDRUGS:EXIT Regularly take Rx";
  label REEATH  = "REEATH:EXIT R got help-Eating";
  label REEATT  = "REEATT:EXIT Time R got help-Eating";
  label REGOVMDD  = "REGOVMDD:EXIT R had Medicaid at death";
  label REGOVMDS  = "REGOVMDS:EXIT R had Medicaid in last 2 yrs or since PrvIvw";
  label REGOVMR  = "REGOVMR:EXIT R had Gov plan-Medicare";
  label REGOVVA  = "REGOVVA:EXIT R had Gov plan-CHAMPUS/CHAMPVA";
  label REHALUC  = "REHALUC:EXIT R hallucinated";

 /* --Variable REHESRC1 : # _30 */
  label REHESRC1  = "REHESRC1:EXIT Source of R empl plan #1";
  label REHESRC2  = "REHESRC2:EXIT Source of R empl plan #2";
  label REHESRC3  = "REHESRC3:EXIT Source of R empl plan #3";
  label REHIGOV  = "REHIGOV:EXIT R was covered by Gov plan";
  label REHILTC  = "REHILTC:EXIT R had Long Term Care Ins";
  label REHOMCAR  = "REHOMCAR:EXIT Home hlth care";
  label REHOSP  = "REHOSP:EXIT Overnight hospital stay since PrvIvw before death";
  label REHPCNIT  = "REHPCNIT:EXIT Hospice care nights";
  label REHPCSTY  = "REHPCSTY:EXIT Hospice care stay";
  label REHPCTIM  = "REHPCTIM:EXIT Hospice care time";

 /* --Variable REHSPNIT : # _40 */
  label REHSPNIT  = "REHSPNIT:EXIT # Hospital nights since PrvIvw before death";
  label REHSPTIM  = "REHSPTIM:EXIT # Hospital stays since PrvIvw before death";
  label REIADL5H  = "REIADL5H: EXIT R Gets Help-sum of IADLs /0-5";
  label REIWBEG  = "REIWBEG:EXIT Interview Begin Date";
  label REIWEND  = "REIWEND:EXIT Interview End Date";
  label REIWMID  = "REIWMID:EXIT Interview Midpt Date";
  label REIWMIDF  = "REIWMIDF:EXIT Interview Midpt Date Flag";
  label RELOST  = "RELOST:EXIT R lost in familiar environments";
  label RELTCPRM  = "RELTCPRM:EXIT Long Term Care Insurance Plan Monthly Premium";
  label REMEALSH  = "REMEALSH:EXIT R got help-Preparing hot meals";

 /* --Variable REMEALST : # _50 */
  label REMEALST  = "REMEALST:EXIT Time R got help-Preparing hot meals";
  label REMEDSH  = "REMEDSH:EXIT R got help-Take medications";
  label REMEDST  = "REMEDST:EXIT Time R got help-Take medications";
  label REMONEYH  = "REMONEYH:EXIT R got help-Managing money";
  label REMPART  = "REMPART:EXIT R Partnered";
  label REMRPREM  = "REMRPREM:EXIT Medicare/Medicaid HMO Monthly Premium";
  label REMSTAT  = "REMSTAT:EXIT R Marital Status";
  label REMSTATH  = "REMSTATH:EXIT R MarStat-w/o part,filled";
  label RENHMDAY  = "RENHMDAY:EXIT Days in NH from move/PrvIvw before death";
  label RENHMLIV  = "RENHMLIV:EXIT Lived in NH at time of death";

 /* --Variable RENHMMVM : # _60 */
  label RENHMMVM  = "RENHMMVM:EXIT Month moved to NH";
  label RENHMMVY  = "RENHMMVY:EXIT Year moved to NH";
  label RENRSHOM  = "RENRSHOM:EXIT NH stay";
  label RENRSNIT  = "RENRSNIT:EXIT # Nights in NH";
  label RENRSTIM  = "RENRSTIM:EXIT # NH stays";
  label REOOPMD  = "REOOPMD:EXIT Mexp Amt: Out of pkt med exp";
  label REOOPMDF  = "REOOPMDF:EXIT Mexp Flag: Out of pkt med exp";
  label REOOPMDO  = "REOOPMDO:EXIT Mexp Amt: Out of pkt med exp w oth";
  label REOOPMDOF  = "REOOPMDOF:EXIT Mexp Flag: Out of pkt med exp w oth";
  label REPEXITWV1  = "REPEXITWV1:EXIT Wave First Post-Exit Interview was Administered";

 /* --Variable REPEXITWV2 : # _70 */
  label REPEXITWV2  = "REPEXITWV2:EXIT Wave Second Post-Exit Interview was Administered";
  label REPEXITWV3  = "REPEXITWV3:EXIT Wave Third Post-Exit Interview was Administered";
  label REPHONEH  = "REPHONEH:EXIT R got help-Use telephone";
  label REPHONET  = "REPHONET:EXIT Time R got help-Use telephone";
  label REPLDEATH  = "REPLDEATH:EXIT Place of death";
  label REPRMEM  = "REPRMEM:EXIT Rate R memory 1 month prior to death";
  label REPROXYREL  = "REPROXYREL:EXIT Proxy relationship to R";
  label REPROXYSP  = "REPROXYSP:EXIT Proxy is spouse";
  label REPRPCNT  = "REPRPCNT:EXIT Number of Private Insurance Plans";
  label REPRPRM1  = "REPRPRM1:EXIT Private Insurance Plan 1 Monthly Premium";

 /* --Variable REPRPRM2 : # _80 */
  label REPRPRM2  = "REPRPRM2:EXIT Private Insurance Plan 2 Monthly Premium";
  label REPRPRM3  = "REPRPRM3:EXIT Private Insurance Plan 3 Monthly Premium";
  label REPRSRC1  = "REPRSRC1:EXIT Private Insurance Plan 1 Source";
  label REPRSRC2  = "REPRSRC2:EXIT Private Insurance Plan 2 Source";
  label REPRSRC3  = "REPRSRC3:EXIT Private Insurance Plan 3 Source";
  label RESHHIDPN  = "RESHHIDPN:EXIT Spouse identifier";
  label RESHOPH  = "RESHOPH:EXIT R got help-Shop for grocery";
  label RESHOPT  = "RESHOPT:EXIT Time R got help-Shop for grocery";
  label RESPAGEM_B  = "RESPAGEM_B:EXIT S Age (months) at Exit Ivw BegMon";
  label RESPAGEM_E  = "RESPAGEM_E:EXIT S Age (months) at Exit Ivw EndMon";

 /* --Variable RESPAGEM_M : # _90 */
  label RESPAGEM_M  = "RESPAGEM_M:EXIT S Age (months) at Exit Ivw MidMon";
  label RESPAGEY_B  = "RESPAGEY_B:EXIT S Age (years) at Exit Ivw BegMon";
  label RESPAGEY_E  = "RESPAGEY_E:EXIT S Age (years) at Exit Ivw EndMon";
  label RESPAGEY_M  = "RESPAGEY_M:EXIT S Age (years) at Exit Ivw MidMon";
  label RESPCFAC  = "RESPCFAC:EXIT Spec health facilty";
  label RESUPER  = "RESUPER:EXIT R supervised for safety";
  label RET2DEATH  = "RET2DEATH:EXIT Time from start of final illness to death";
  label RETOILTH  = "RETOILTH:EXIT R got help-Using the toilet";
  label RETOILTT  = "RETOILTT:EXIT Time R got help-Using the toilet";
  label RETYLTC  = "RETYLTC:EXIT R Type of Long Term Care Ins";

 /* --Variable REWALKRH : # _100 */
  label REWALKRH  = "REWALKRH:EXIT R got help-Walk across room";
  label REWALKRT  = "REWALKRT:EXIT Time R got help-Walk across room";
  label REWANDER  = "REWANDER:EXIT R ever wander off";
  label REXITWV  = "REXITWV:EXIT Wave Exit Interview was Administered";
  label REXITYR  = "REXITYR:EXIT Interview Year";
  label REXPDEATH  = "REXPDEATH:EXIT Death expected?";
%mend label_statements;


%macro clength_statements;
/*  Table Rexit: Length statements for character and selected numeric vars */
/* Macro invoked by `create_template_longout` macro */
  length HHID $6;                           /* _1 */
  length PN $3;                             /* _2 */
  length RAHHIDPN $9;                       /* _4 */
%mend clength_statements;



%macro format_statements;
/*  Table Rexit: format statements for 59 variables */
/* Macro invoked by `create_template_longout` macro */
  format HACOHORT COHORT.;                  /* _5 */
  format REALONE SUPER.;                    /* _8 */
  format REBATHH HELP.;                     /* _9 */
  format REBEDH HELP.;                      /* _11 */
  format REBEDRID BEDRIDDEN.;               /* _12 */
  format RECENDIV CENDIVX.;                 /* _14 */
  format RECENREG CENREGX.;                 /* _15 */
  format RECOVR HINSX.;                     /* _16 */
  format RECOVS HINSX.;                     /* _17 */
  format REDOCTOR YESXNO.;                  /* _19 */
  format REDRESSH HELP.;                    /* _20 */
  format REDRUGS YESXNO.;                   /* _22 */
  format REEATH HELP.;                      /* _23 */
  format REGOVMDD YESXNO.;                  /* _25 */
  format REGOVMDS YESXNO.;                  /* _26 */
  format REGOVMR YESXNO.;                   /* _27 */
  format REGOVVA YESXNO.;                   /* _28 */
  format REHALUC SUPER.;                    /* _29 */
  format REHESRC1 RHSRCX.;                  /* _30 */
  format REHESRC2 RHSRCX.;                  /* _31 */
  format REHESRC3 RHSRCX.;                  /* _32 */
  format REHIGOV YESXNO.;                   /* _33 */
  format REHILTC HILTC.;                    /* _34 */
  format REHOMCAR HOMCARX.;                 /* _35 */
  format REHOSP YESXNO.;                    /* _36 */
  format REHPCSTY YESXNO.;                  /* _38 */
  format REIWMIDF IWMIDFX.;                 /* _46 */
  format RELOST SUPER.;                     /* _47 */
  format REMEALSH HELP.;                    /* _49 */
  format REMEDSH HELP.;                     /* _51 */
  format REMONEYH HELP.;                    /* _53 */
  format REMPART YNEXITF.;                  /* _54 */
  format REMSTAT MSTATUSX.;                 /* _56 */
  format REMSTATH MSTATHX.;                 /* _57 */
  format RENHMLIV YESXNO.;                  /* _59 */
  format RENRSHOM YESXNO.;                  /* _62 */
  format REOOPMDF MDIMPX.;                  /* _66 */
  format REOOPMDOF MDIMPX.;                 /* _68 */
  format REPEXITWV1 MISS.;                  /* _69 */
  format REPEXITWV2 MISS.;                  /* _70 */
  format REPEXITWV3 MISS.;                  /* _71 */
  format REPHONEH HELP.;                    /* _72 */
  format REPLDEATH PLDEATHF.;               /* _74 */
  format REPRMEM MEMRY.;                    /* _75 */
  format REPROXYREL PROXYREL.;              /* _76 */
  format REPROXYSP YNEXITF.;                /* _77 */
  format REPRSRC1 SRC.;                     /* _82 */
  format REPRSRC2 SRC.;                     /* _83 */
  format REPRSRC3 SRC.;                     /* _84 */
  format RESHOPH HELP.;                     /* _86 */
  format RESPCFAC HOMCARX.;                 /* _94 */
  format RESUPER SUPER.;                    /* _95 */
  format RET2DEATH T2DEATHF.;               /* _96 */
  format RETOILTH HELP.;                    /* _97 */
  format RETYLTC TYL.;                      /* _99 */
  format REWALKRH HELP.;                    /* _100 */
  format REWANDER SUPER.;                   /* _102 */
  format REXITWV MISS.;                     /* _103 */
  format REXPDEATH EXPDEATHF.;              /* _105 */
%mend format_statements;



%macro readvar1_list;
/* List of variables to be read from input dataset */
  HHID                                      /* 1 */
  PN                                        /* 2 */
  HHIDPN                                    /* 3 */
  RAHHIDPN                                  /* 4 */
  HACOHORT                                  /* 5 */
  READL5H                                   /* 6 */
  READL6H                                   /* 7 */
  REALONE                                   /* 8 */
  REBATHH                                   /* 9 */
  REBATHT                                   /* 10 */
  REBEDH                                    /* 11 */
  REBEDRID                                  /* 12 */
  REBEDT                                    /* 13 */
  RECENDIV                                  /* 14 */
  RECENREG                                  /* 15 */
  RECOVR                                    /* 16 */
  RECOVS                                    /* 17 */
  REDOCTIM                                  /* 18 */
  REDOCTOR                                  /* 19 */
  REDRESSH                                  /* 20 */
  REDRESST                                  /* 21 */
  REDRUGS                                   /* 22 */
  REEATH                                    /* 23 */
  REEATT                                    /* 24 */
  REGOVMDD                                  /* 25 */
  REGOVMDS                                  /* 26 */
  REGOVMR                                   /* 27 */
  REGOVVA                                   /* 28 */
  REHALUC                                   /* 29 */
  REHESRC1                                  /* 30 */
  REHESRC2                                  /* 31 */
  REHESRC3                                  /* 32 */
  REHIGOV                                   /* 33 */
  REHILTC                                   /* 34 */
  REHOMCAR                                  /* 35 */
  REHOSP                                    /* 36 */
  REHPCNIT                                  /* 37 */
  REHPCSTY                                  /* 38 */
  REHPCTIM                                  /* 39 */
  REHSPNIT                                  /* 40 */
  REHSPTIM                                  /* 41 */
  REIADL5H                                  /* 42 */
  REIWBEG                                   /* 43 */
  REIWEND                                   /* 44 */
  REIWMID                                   /* 45 */
  REIWMIDF                                  /* 46 */
  RELOST                                    /* 47 */
  RELTCPRM                                  /* 48 */
  REMEALSH                                  /* 49 */
  REMEALST                                  /* 50 */
  REMEDSH                                   /* 51 */
  REMEDST                                   /* 52 */
  REMONEYH                                  /* 53 */
  REMPART                                   /* 54 */
  REMRPREM                                  /* 55 */
  REMSTAT                                   /* 56 */
  REMSTATH                                  /* 57 */
  RENHMDAY                                  /* 58 */
  RENHMLIV                                  /* 59 */
  RENHMMVM                                  /* 60 */
  RENHMMVY                                  /* 61 */
  RENRSHOM                                  /* 62 */
  RENRSNIT                                  /* 63 */
  RENRSTIM                                  /* 64 */
  REOOPMD                                   /* 65 */
  REOOPMDF                                  /* 66 */
  REOOPMDO                                  /* 67 */
  REOOPMDOF                                 /* 68 */
  REPEXITWV1                                /* 69 */
  REPEXITWV2                                /* 70 */
  REPEXITWV3                                /* 71 */
  REPHONEH                                  /* 72 */
  REPHONET                                  /* 73 */
  REPLDEATH                                 /* 74 */
  REPRMEM                                   /* 75 */
  REPROXYREL                                /* 76 */
  REPROXYSP                                 /* 77 */
  REPRPCNT                                  /* 78 */
  REPRPRM1                                  /* 79 */
  REPRPRM2                                  /* 80 */
  REPRPRM3                                  /* 81 */
  REPRSRC1                                  /* 82 */
  REPRSRC2                                  /* 83 */
  REPRSRC3                                  /* 84 */
  RESHHIDPN                                 /* 85 */
  RESHOPH                                   /* 86 */
  RESHOPT                                   /* 87 */
  RESPAGEM_B                                /* 88 */
  RESPAGEM_E                                /* 89 */
  RESPAGEM_M                                /* 90 */
  RESPAGEY_B                                /* 91 */
  RESPAGEY_E                                /* 92 */
  RESPAGEY_M                                /* 93 */
  RESPCFAC                                  /* 94 */
  RESUPER                                   /* 95 */
  RET2DEATH                                 /* 96 */
  RETOILTH                                  /* 97 */
  RETOILTT                                  /* 98 */
  RETYLTC                                   /* 99 */
  REWALKRH                                  /* 100 */
  REWALKRT                                  /* 101 */
  REWANDER                                  /* 102 */
  REXITWV                                   /* 103 */
  REXITYR                                   /* 104 */
  REXPDEATH                                 /* 105 */
%mend readvar1_list;

%macro keep_varlist;
/* Table Rexit: List of 105 variables to keep */
  HHID
  PN
  HHIDPN
  RAHHIDPN
  HACOHORT
  READL5H
  READL6H
  REALONE
  REBATHH
  REBATHT
  REBEDH
  REBEDRID
  REBEDT
  RECENDIV
  RECENREG
  RECOVR
  RECOVS
  REDOCTIM
  REDOCTOR
  REDRESSH
  REDRESST
  REDRUGS
  REEATH
  REEATT
  REGOVMDD
  REGOVMDS
  REGOVMR
  REGOVVA
  REHALUC
  REHESRC1
  REHESRC2
  REHESRC3
  REHIGOV
  REHILTC
  REHOMCAR
  REHOSP
  REHPCNIT
  REHPCSTY
  REHPCTIM
  REHSPNIT
  REHSPTIM
  REIADL5H
  REIWBEG
  REIWEND
  REIWMID
  REIWMIDF
  RELOST
  RELTCPRM
  REMEALSH
  REMEALST
  REMEDSH
  REMEDST
  REMONEYH
  REMPART
  REMRPREM
  REMSTAT
  REMSTATH
  RENHMDAY
  RENHMLIV
  RENHMMVM
  RENHMMVY
  RENRSHOM
  RENRSNIT
  RENRSTIM
  REOOPMD
  REOOPMDF
  REOOPMDO
  REOOPMDOF
  REPEXITWV1
  REPEXITWV2
  REPEXITWV3
  REPHONEH
  REPHONET
  REPLDEATH
  REPRMEM
  REPROXYREL
  REPROXYSP
  REPRPCNT
  REPRPRM1
  REPRPRM2
  REPRPRM3
  REPRSRC1
  REPRSRC2
  REPRSRC3
  RESHHIDPN
  RESHOPH
  RESHOPT
  RESPAGEM_B
  RESPAGEM_E
  RESPAGEM_M
  RESPAGEY_B
  RESPAGEY_E
  RESPAGEY_M
  RESPCFAC
  RESUPER
  RET2DEATH
  RETOILTH
  RETOILTT
  RETYLTC
  REWALKRH
  REWALKRT
  REWANDER
  REXITWV
  REXITYR
  REXPDEATH
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
/*  Table Rexit: Macro creates and appends `_outtable` data */;
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
  /* READL5H variable already included  */
  /* READL6H variable already included  */
  /* REALONE variable already included  */
  /* REBATHH variable already included  */
  /* REBATHT variable already included  */
  /* REBEDH variable already included  */
  /* REBEDRID variable already included  */
  /* REBEDT variable already included  */
  /* RECENDIV variable already included  */
  /* RECENREG variable already included  */
  /* RECOVR variable already included  */
  /* RECOVS variable already included  */
  /* REDOCTIM variable already included  */
  /* REDOCTOR variable already included  */
  /* REDRESSH variable already included  */
  /* REDRESST variable already included  */
  /* REDRUGS variable already included  */
  /* REEATH variable already included  */
  /* REEATT variable already included  */
  /* REGOVMDD variable already included  */
  /* REGOVMDS variable already included  */
  /* REGOVMR variable already included  */
  /* REGOVVA variable already included  */
  /* REHALUC variable already included  */
  /* REHESRC1 variable already included  */
  /* REHESRC2 variable already included  */
  /* REHESRC3 variable already included  */
  /* REHIGOV variable already included  */
  /* REHILTC variable already included  */
  /* REHOMCAR variable already included  */
  /* REHOSP variable already included  */
  /* REHPCNIT variable already included  */
  /* REHPCSTY variable already included  */
  /* REHPCTIM variable already included  */
  /* REHSPNIT variable already included  */
  /* REHSPTIM variable already included  */
  /* REIADL5H variable already included  */
  /* REIWBEG variable already included  */
  /* REIWEND variable already included  */
  /* REIWMID variable already included  */
  /* REIWMIDF variable already included  */
  /* RELOST variable already included  */
  /* RELTCPRM variable already included  */
  /* REMEALSH variable already included  */
  /* REMEALST variable already included  */
  /* REMEDSH variable already included  */
  /* REMEDST variable already included  */
  /* REMONEYH variable already included  */
  /* REMPART variable already included  */
  /* REMRPREM variable already included  */
  /* REMSTAT variable already included  */
  /* REMSTATH variable already included  */
  /* RENHMDAY variable already included  */
  /* RENHMLIV variable already included  */
  /* RENHMMVM variable already included  */
  /* RENHMMVY variable already included  */
  /* RENRSHOM variable already included  */
  /* RENRSNIT variable already included  */
  /* RENRSTIM variable already included  */
  /* REOOPMD variable already included  */
  /* REOOPMDF variable already included  */
  /* REOOPMDO variable already included  */
  /* REOOPMDOF variable already included  */
  /* REPEXITWV1 variable already included  */
  /* REPEXITWV2 variable already included  */
  /* REPEXITWV3 variable already included  */
  /* REPHONEH variable already included  */
  /* REPHONET variable already included  */
  /* REPLDEATH variable already included  */
  /* REPRMEM variable already included  */
  /* REPROXYREL variable already included  */
  /* REPROXYSP variable already included  */
  /* REPRPCNT variable already included  */
  /* REPRPRM1 variable already included  */
  /* REPRPRM2 variable already included  */
  /* REPRPRM3 variable already included  */
  /* REPRSRC1 variable already included  */
  /* REPRSRC2 variable already included  */
  /* REPRSRC3 variable already included  */
  /* RESHHIDPN variable already included  */
  /* RESHOPH variable already included  */
  /* RESHOPT variable already included  */
  /* RESPAGEM_B variable already included  */
  /* RESPAGEM_E variable already included  */
  /* RESPAGEM_M variable already included  */
  /* RESPAGEY_B variable already included  */
  /* RESPAGEY_E variable already included  */
  /* RESPAGEY_M variable already included  */
  /* RESPCFAC variable already included  */
  /* RESUPER variable already included  */
  /* RET2DEATH variable already included  */
  /* RETOILTH variable already included  */
  /* RETOILTT variable already included  */
  /* RETYLTC variable already included  */
  /* REWALKRH variable already included  */
  /* REWALKRT variable already included  */
  /* REWANDER variable already included  */
  /* REXITWV variable already included  */
  /* REXITYR variable already included  */
  /* REXPDEATH variable already included  */
%mend initvars;

%macro readvar2_list;
/* List of variables to be read from input dataset */
%mend readvar2_list;

/* Macro `process_data for `Rexit` */
%macro process_data /*    */ ;
%put ---Table Rexit /*  put  */ ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
/* --- RAND variable:HHIDPN  included */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
/* --- RAND variable:HACOHORT  included */ ;
/* --- RAND variable:READL5H  included */ ;
/* --- RAND variable:READL6H  included */ ;
/* --- RAND variable:REALONE  included */ ;
/* --- RAND variable:REBATHH  included */ ;
/* --- RAND variable:REBATHT  included */ ;
/* --- RAND variable:REBEDH  included */ ;
/* --- RAND variable:REBEDRID  included */ ;
/* --- RAND variable:REBEDT  included */ ;
/* --- RAND variable:RECENDIV  included */ ;
/* --- RAND variable:RECENREG  included */ ;
/* --- RAND variable:RECOVR  included */ ;
/* --- RAND variable:RECOVS  included */ ;
/* --- RAND variable:REDOCTIM  included */ ;
/* --- RAND variable:REDOCTOR  included */ ;
/* --- RAND variable:REDRESSH  included */ ;
/* --- RAND variable:REDRESST  included */ ;
/* --- RAND variable:REDRUGS  included */ ;
/* --- RAND variable:REEATH  included */ ;
/* --- RAND variable:REEATT  included */ ;
/* --- RAND variable:REGOVMDD  included */ ;
/* --- RAND variable:REGOVMDS  included */ ;
/* --- RAND variable:REGOVMR  included */ ;
/* --- RAND variable:REGOVVA  included */ ;
/* --- RAND variable:REHALUC  included */ ;
/* --- RAND variable:REHESRC1  included */ ;
/* --- RAND variable:REHESRC2  included */ ;
/* --- RAND variable:REHESRC3  included */ ;
/* --- RAND variable:REHIGOV  included */ ;
/* --- RAND variable:REHILTC  included */ ;
/* --- RAND variable:REHOMCAR  included */ ;
/* --- RAND variable:REHOSP  included */ ;
/* --- RAND variable:REHPCNIT  included */ ;
/* --- RAND variable:REHPCSTY  included */ ;
/* --- RAND variable:REHPCTIM  included */ ;
/* --- RAND variable:REHSPNIT  included */ ;
/* --- RAND variable:REHSPTIM  included */ ;
/* --- RAND variable:REIADL5H  included */ ;
/* --- RAND variable:REIWBEG  included */ ;
/* --- RAND variable:REIWEND  included */ ;
/* --- RAND variable:REIWMID  included */ ;
/* --- RAND variable:REIWMIDF  included */ ;
/* --- RAND variable:RELOST  included */ ;
/* --- RAND variable:RELTCPRM  included */ ;
/* --- RAND variable:REMEALSH  included */ ;
/* --- RAND variable:REMEALST  included */ ;
/* --- RAND variable:REMEDSH  included */ ;
/* --- RAND variable:REMEDST  included */ ;
/* --- RAND variable:REMONEYH  included */ ;
/* --- RAND variable:REMPART  included */ ;
/* --- RAND variable:REMRPREM  included */ ;
/* --- RAND variable:REMSTAT  included */ ;
/* --- RAND variable:REMSTATH  included */ ;
/* --- RAND variable:RENHMDAY  included */ ;
/* --- RAND variable:RENHMLIV  included */ ;
/* --- RAND variable:RENHMMVM  included */ ;
/* --- RAND variable:RENHMMVY  included */ ;
/* --- RAND variable:RENRSHOM  included */ ;
/* --- RAND variable:RENRSNIT  included */ ;
/* --- RAND variable:RENRSTIM  included */ ;
/* --- RAND variable:REOOPMD  included */ ;
/* --- RAND variable:REOOPMDF  included */ ;
/* --- RAND variable:REOOPMDO  included */ ;
/* --- RAND variable:REOOPMDOF  included */ ;
/* --- RAND variable:REPEXITWV1  included */ ;
/* --- RAND variable:REPEXITWV2  included */ ;
/* --- RAND variable:REPEXITWV3  included */ ;
/* --- RAND variable:REPHONEH  included */ ;
/* --- RAND variable:REPHONET  included */ ;
/* --- RAND variable:REPLDEATH  included */ ;
/* --- RAND variable:REPRMEM  included */ ;
/* --- RAND variable:REPROXYREL  included */ ;
/* --- RAND variable:REPROXYSP  included */ ;
/* --- RAND variable:REPRPCNT  included */ ;
/* --- RAND variable:REPRPRM1  included */ ;
/* --- RAND variable:REPRPRM2  included */ ;
/* --- RAND variable:REPRPRM3  included */ ;
/* --- RAND variable:REPRSRC1  included */ ;
/* --- RAND variable:REPRSRC2  included */ ;
/* --- RAND variable:REPRSRC3  included */ ;
/* --- RAND variable:RESHHIDPN  included */ ;
/* --- RAND variable:RESHOPH  included */ ;
/* --- RAND variable:RESHOPT  included */ ;
/* --- RAND variable:RESPAGEM_B  included */ ;
/* --- RAND variable:RESPAGEM_E  included */ ;
/* --- RAND variable:RESPAGEM_M  included */ ;
/* --- RAND variable:RESPAGEY_B  included */ ;
/* --- RAND variable:RESPAGEY_E  included */ ;
/* --- RAND variable:RESPAGEY_M  included */ ;
/* --- RAND variable:RESPCFAC  included */ ;
/* --- RAND variable:RESUPER  included */ ;
/* --- RAND variable:RET2DEATH  included */ ;
/* --- RAND variable:RETOILTH  included */ ;
/* --- RAND variable:RETOILTT  included */ ;
/* --- RAND variable:RETYLTC  included */ ;
/* --- RAND variable:REWALKRH  included */ ;
/* --- RAND variable:REWALKRT  included */ ;
/* --- RAND variable:REWANDER  included */ ;
/* --- RAND variable:REXITWV  included */ ;
/* --- RAND variable:REXITYR  included */ ;
/* --- RAND variable:REXPDEATH  included */ ;
%mend process_data /*    */ ;
