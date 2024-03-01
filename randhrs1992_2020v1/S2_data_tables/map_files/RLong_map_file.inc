/* This is map_file `RLong_map_file.inc` for `RLong_table` dataset */
/* Repo name := RAND2LONG-ver1 (version 0.70) */
/* Project name := randhrs1992_2020v1 */
/* Excel map: test3_maps21FEB2024.xlsx */
/* Date stamp: 29FEB24  */


%macro label_statements;
/* Table RLong: Label statements for 758 variables */
/* Macro invoked by `create_template_longout` macro */
  label HHID  = "HHold ID / 6-Char <KEY1>";
  label PN  = "Person Number (3-CHAR) <KEY2>";
  label WAVE_NUMBER  = "HRS wave number <KEY3>";
  label H_HHIDC  = "HHold ID + SubHHold /7-Char <KEY3>";
  label SUBHH  = "HRS subHHold/1-Char";
  label RAHHIDPN  = "HHold ID + Person Number /9-Char";
  label INW  = "1 if respondent/Num";
  label WAVE_NAME  = "Wave label/12-Char";
  label CYEAR  = "Study year /10-Char";

 /* --Variable HACOHORT : # _10 */
  label HACOHORT  = "Sample cohort";
  label studyyr  = "Study year /Num";
  label H_HHID  = "HHold ID + SubHHold /Num";
  label S_HHIDPN  = "Spouse HHIDPN";
  label R_ACGTOT  = "AHD TOTAL COGNITION SUMMARY SCORE";
  label R_ADL5A  = "Any Diff-sum of ADLs /0-5";
  label R_ADL5H  = "R Gets Help-sum of ADLs /0-5";
  label R_ADL6A  = "Any Diff-sum of ADLs /0-6";
  label R_ADL6H  = "R Gets Help-sum of ADLs /0-6";
  label R_ADLR10  = "DELAYED WORD RECALL-AHD93";

 /* --Variable R_ADLW : # _20 */
  label R_ADLW  = "Any Diff-sum of ADLs /0-5";
  label R_AGEM_B  = "R Age (months) at Ivw BegMon";
  label R_AGEM_E  = "R Age (months) at Ivw EndMon";
  label R_AGEM_M  = "R Age (months) at Ivw MidMon";
  label R_AGEY_B  = "R Age (years) at Ivw BegMon";
  label R_AGEY_E  = "R Age (years) at Ivw EndMon";
  label R_AGEY_M  = "R Age (years) at Ivw MidMon";
  label R_AIMR10  = "IMMEDIATE WORD RECALL-AHD93";
  label R_ALONE  = "R can be left alone";
  label R_ALZHE  = "R reports Alzheimer this wv";

 /* --Variable R_ALZHEE : # _30 */
  label R_ALZHEE  = "R ever reported Alzheimer";
  label R_ALZHEF  = "Flag chg prev report of Alzheimer";
  label R_ALZHEQ  = "Q-wording of Alzheimer this wv";
  label R_ALZHES  = "R had Alzheimer onset snce last IW";
  label R_AMSTOT  = "AHD MENTAL STATUS SUMMARY SCORE";
  label R_ANS3PQ  = "R answered the first three probability questions";
  label R1_ARMS  = "R Diff-Reach/extnd arms up";
  label R2_ARMS  = "R Diff-Reach/extnd arms up";
  label R_ARMS  = "R Diff-Reach/extnd arms up";
  label R_ARMSA  = "R Any Diff-Rch/xtnd arms up";

 /* --Variable R_ARMSW : # _40 */
  label R_ARMSW  = "R Any Diff-Reach/xtnd arms up";
  label R_ARTHR  = "R reports arthritis this wv";
  label R_ARTHRE  = "R ever had arthritis";
  label R_ARTHRF  = "Flag dispute chg arthritis";
  label R_ARTHRQ  = "Q-wording arthritis this wv";
  label R_ARTHRS  = "R had arthritis snce last IW";
  label R_ATR20  = "AHD WORD TOTAL RECALL SUMMARY SCORE";
  label R_BACK  = "R had back problems";
  label R_BALFUL  = "R full tandem bal test time";
  label R_BALFULC  = "R full tandem bal test-Comp mvmt";

 /* --Variable R_BALFULT : # _50 */
  label R_BALFULT  = "R full tandem bal test-Cmpltd";
  label R_BALSBS  = "R side-by-side bal test time";
  label R_BALSBSC  = "R side-by-side bal test-Comp mvmt";
  label R_BALSEMI  = "R semi tandem bal test time";
  label R_BALSEMIC  = "R semi tandem bal test-Comp mvmts";
  label R1_BATH  = "R Diff-Bathing or showerng";
  label R2_BATH  = "R Diff-Bathing or showerng";
  label R_BATH  = "R Diff-Bathing or showerng";
  label R_BATHA  = "R Any Diff-Bathing, shower";
  label R2_BATHH  = "R Gets Help-Bathing, showerng";

 /* --Variable R_BATHH : # _60 */
  label R_BATHH  = "R Gets Help-Bathing, showerng";
  label R_BATHW  = "R Any Diff-Bathing, shower";
  label R1_BED  = "R Diff-Get in/out of bed";
  label R2_BED  = "R Diff-Get in/out of bed";
  label R_BED  = "R Diff-Get in/out of bed";
  label R_BEDA  = "R Any Diff-Get in/out bed";
  label R_BEDE  = "R Use Eqp-Get in/out of bed";
  label R2_BEDH  = "R Gets Help-Get in/out of bed";
  label R_BEDH  = "R Gets Help-Get in/out of bed";
  label R_BEDW  = "R Any Diff-Get in/out of bed";

 /* --Variable R_BEQ100 : # _70 */
  label R_BEQ100  = "R Prob leave bequest 100K+";
  label R_BEQ10K  = "R Prob leave bequest 10K+";
  label R_BEQ500  = "R Prob leave bequest 500K+";
  label R_BEQANY  = "R Prob leave bequest any";
  label R_BEQLRG  = "R Prob leave sizable bequest";
  label R_BMI  = "Self-reported body mass index=kg/m2";
  label R_BPDIA  = "R diastolic blood pressure";
  label R_BPPOS  = "R position during BP measures";
  label R_BPPULS  = "R pulse";
  label R_BPSYS  = "R systolic blood pressure";

 /* --Variable R_BREAST : # _80 */
  label R_BREAST  = "Prev Breast Check";
  label R_BWC20  = "BACKWARDS COUNT FROM 20";
  label R_BWC86  = "BACKWARDS COUNT FROM 86";
  label R_CACT  = "CACTUS";
  label R1_CALC  = "R Diff-Use a calculator";
  label R2_CALC  = "R Diff-Use a calculator";
  label R_CALCA  = "R Any Diff-Use a calculator";
  label R_CALCW  = "R Any Diff-Use a calculator";
  label R_CANCR  = "R reports cancer this wv";
  label R_CANCRE  = "R ever had cancer";

 /* --Variable R_CANCRF : # _90 */
  label R_CANCRF  = "Flag dispute chg cancer";
  label R_CANCRQ  = "Q-wording cancer this wv";
  label R_CANCRS  = "R had cancer since last IW";
  label R_CENDIV  = "Census Division";
  label R_CENREG  = "Census Region";
  label R_CESD  = "CESD score";
  label R_CESDM  = "missings in CESD score";
  label R1_CHAIR  = "R Diff-Get up fr chair";
  label R2_CHAIR  = "R Diff-Get up fr chair";
  label R_CHAIR  = "R Diff-Get up fr chair";

 /* --Variable R_CHAIRA : # _100 */
  label R_CHAIRA  = "R Any Diff-Get up fr chair";
  label R_CHAIRW  = "R Any Diff-Get up fr chair";
  label R_CHOLST  = "Prev Cholesterol";
  label R_CLAIMED  = "R already claiming SS benefits";
  label R1_CLIM1  = "R Diff-Climb one flt stair";
  label R2_CLIM1  = "R Diff-Climb one flt stair";
  label R_CLIM1  = "R Diff-Climb one flt stair";
  label R_CLIM1A  = "R Any Diff-Clmb 1 flt stair";
  label R_CLIM1W  = "R Any Diff-Climb 1 flt stair";
  label R1_CLIMS  = "R Diff-Climb sev flt stair";

 /* --Variable R2_CLIMS : # _110 */
  label R2_CLIMS  = "R Diff-Climb sev flt stair";
  label R_CLIMS  = "R Diff-Climb sev flt stair";
  label R_CLIMSA  = "R Any Diff-Clmb sev flt str";
  label R_CLIMSW  = "R Any Diff-Climb sev flt str";
  label R_COGTOT  = "TOTAL COGNITION SUMMARY SCORE(W14: FTF/TEL*)";
  label R_COMP  = "R Diff-Use a computer";
  label R_COMPW  = "R Any Diff-Use a computer";
  label R_CONDE  = "Sum of conditions ever had";
  label R_CONDEF  = "# chg from dispute/sum ever";
  label R_CONDS  = "Sum of conditns since lastIW";

 /* --Variable R_CONDSF : # _120 */
  label R_CONDSF  = "# chg from dispute/sum since";
  label R_CONDSP  = "Flag Prv IVW not Wv-1/since";
  label R_COVR  = "R covered by R empl plan";
  label R_COVRT  = "R plan covers retirees";
  label R_COVS  = "R covered by S empl plan";
  label R_DADAGE  = "Father age current/at death";
  label R_DADLIV  = "Father alive";
  label R_DCBAL1  = "Current balance of DC plan #1";
  label R_DCBAL2  = "Current balance of DC plan #2";
  label R_DCBAL3  = "Current balance of DC plan #3";

 /* --Variable R_DCBAL4 : # _130 */
  label R_DCBAL4  = "Current balance of DC plan #4";
  label R_DCBENE1  = "Employer contribution to DC plan #1";
  label R_DCBENE2  = "Employer contribution to DC plan #2";
  label R_DCBENE3  = "Employer contribution to DC plan #3";
  label R_DCBENE4  = "Employer contribution to DC plan #4";
  label R_DCCONT1  = "Employee contribution to DC plan #1";
  label R_DCCONT2  = "Employee contribution to DC plan #2";
  label R_DCCONT3  = "Employee contribution to DC plan #3";
  label R_DCCONT4  = "Employee contribution to DC plan #4";
  label R_DCMODE1  = "Employer contribution:$ or % #1";

 /* --Variable R_DCMODE2 : # _140 */
  label R_DCMODE2  = "Employer contribution:$ or % #2";
  label R_DCMODE3  = "Employer contribution:$ or % #3";
  label R_DCMODE4  = "Employer contribution:$ or % #4";
  label R_DCPCT1  = "Employer % contribution #1";
  label R_DCPCT2  = "Employer % contribution #2";
  label R_DCPCT3  = "Employer % contribution #3";
  label R_DCPCT4  = "Employer % contribution #4";
  label R_DEMEN  = "R reports dementia this wv";
  label R_DEMENE  = "R ever reported dementia";
  label R_DEMENF  = "Flag chg prev report of dementia";

 /* --Variable R_DEMENQ : # _150 */
  label R_DEMENQ  = "Q-wording of dementia this wv";
  label R_DEMENS  = "R had dementia onset snce last IW";
  label R_DENTST  = "Dental visit prv 2 yrs (W2:  prv 1-,2-yr(A,H)*)";
  label R_DEPRES  = "CESD:Felt depressed";
  label R_DEPREX  = "CESD:Felt depressed-raw";
  label R_DIAB  = "R reports diabetes this wv";
  label R_DIABE  = "R ever had diabetes";
  label R_DIABF  = "Flag dispute chg diabetes";
  label R_DIABQ  = "Q-wording diabetes this wv";
  label R_DIABS  = "R had diabetes since last IW";

 /* --Variable R1_DIME : # _160 */
  label R1_DIME  = "R Diff-Pick up a dime";
  label R2_DIME  = "R Diff-Pick up a dime";
  label R_DIME  = "R Diff-Pick up a dime";
  label R_DIMEA  = "R Any Diff-Pick up a dime";
  label R_DIMEW  = "R Any Diff-Pick up a dime";
  label R_DLRC  = "DELAYED WORD RECALL(W14: FTF/TEL*)";
  label R_DLRC20  = "DELAYED WORD RECALL";
  label R_DOCTIM  = "# Doctor vists prv 2 yrs (W1: prv 12 mos*)";
  label R_DOCTOR  = "Doctor visit prv 2 yrs (W1: prv 12 mos*)";
  label R1_DRESS  = "R Diff-Dressing";

 /* --Variable R2_DRESS : # _170 */
  label R2_DRESS  = "R Diff-Dressing";
  label R_DRESS  = "R Diff-Dressing";
  label R_DRESSA  = "R Any Diff-Dressing";
  label R2_DRESSH  = "R Gets Help-Dressing";
  label R_DRESSH  = "R Gets Help-Dressing";
  label R_DRESSW  = "R Any Diff-Dressing";
  label R_DRINK  = "R ever drinks any alcohol";
  label R_DRINKD  = "R # days/week drinks";
  label R_DRINKN  = "R # drinks/day when drinks";
  label R_DRINKR  = "R range of # drinks/day";

 /* --Variable R_DRUGS : # _180 */
  label R_DRUGS  = "Reg take Rx prv 2 yrs (W2: prv 1-yr(A)*)";
  label R_DSIAMT  = "AMT RECEIVED LAST MONTH SSI";
  label R_DSSAMT  = "AMT RECEIVED LAST MONTH SSDI";
  label R_DSTAT  = "'POSITION 1=DK, 2=SSDI, 3=SSI'";
  label R_DW  = "Cognition Date naming-Day of week";
  label R_DY  = "Cognition Date naming-Day of month";
  label R1_EAT  = "R Diff-Eating";
  label R2_EAT  = "R Diff-Eating";
  label R_EAT  = "R Diff-Eating";
  label R_EATA  = "R Any Diff-Eating";

 /* --Variable R2_EATH : # _190 */
  label R2_EATH  = "R Gets Help-Eating";
  label R_EATH  = "R Gets Help-Eating";
  label R_EATW  = "R Any Diff-Eating";
  label R_EFFORT  = "CESD:Everything an effort";
  label R_EFFORX  = "CESD:Everything an effort-raw";
  label R_ENLIFE  = "CESD:Enjoyed life";
  label R_ENLIFX  = "CESD:Enjoyed life -raw";
  label R_FAMR  = "Whether Family Resp";
  label R_FBWC20  = "IMPFLAG:BACKWARDS COUNT FROM 20";
  label R_FBWC86  = "IMPFLAG:BACKWARDS COUNT FROM 86";

 /* --Variable R_FCACT : # _200 */
  label R_FCACT  = "IMPFLAG:CACTUS";
  label R_FDLRC  = "IMPFLAG:DELAYED WORD RECALL";
  label R_FDW  = "IMPFLAG:DATE:DAY OF WEEK";
  label R_FDY  = "IMPFLAG:DATE:DAY";
  label R_FIMRC  = "IMPFLAG:IMMEDIATE WORD RECALL";
  label R_FINEA  = "Dime/Eat/Dress /0-3";
  label R_FINPLN  = "R Financial planning horizon";
  label R_FINR  = "Whether Financial Resp";
  label R_FLAG  = "AHEAD OR 94/96 HRS";
  label R_FLONE  = "CESD:Felt lonely";

 /* --Variable R_FLONEX : # _210 */
  label R_FLONEX  = "CESD:Felt lonely-raw";
  label R_FLUSHT  = "Prev Flu Shot";
  label R_FMO  = "IMPFLAG:DATE:MONTH";
  label R_FPRES  = "IMPFLAG:PRESIDENT";
  label R_FPSTME  = "IMPFLAG:MEMORY COMPARED TO PAST";
  label R_FSAD  = "CESD:Felt sad";
  label R_FSADX  = "CESD:Felt sad-raw";
  label R_FSCIS  = "IMPFLAG:SCISSORS";
  label R_FSER7  = "IMPFLAG:SERIAL 7s";
  label R_FSIZE  = "Size of firm or business";

 /* --Variable R_FSIZEF : # _220 */
  label R_FSIZEF  = "Value carried forward from previous wave";
  label R_FSLFME  = "IMPFLAG:SELF RATED MEMORY";
  label R_FVOCAB  = "IMPFLAG:VOCAB SUM SCORE";
  label R_FVP  = "IMPFLAG:VICE PRESIDENT";
  label R_FYR  = "IMPFLAG:DATE:YEAR";
  label R_GOING  = "CESD:Could not get going";
  label R_GOINGX  = "CESD:Could not get going -raw";
  label R_GOVMD  = "R has Gov plan-Medicaid";
  label R_GOVMR  = "R has Gov plan-Medicare";
  label R_GOVOT  = "R has Gov plan-Other";

 /* --Variable R_GOVVA : # _230 */
  label R_GOVVA  = "R has Gov plan-Champus/VA";
  label R_GROSSA  = "Walk1/R,Clim1,Bed,Bath/0-5";
  label R_GRP  = "R hand grip strength max msrmnt";
  label R_GRPDOM  = "R dominant hand";
  label R_GRPL  = "R hand grip strength-Left hand";
  label R_GRPPOS  = "R pos during grip strength tests";
  label R_GRPR  = "R hand grip strength-Right hand";
  label R_HALUC  = "R hallucinates";
  label R_HDLR20  = "DELAYED WORD RECALL-HRS94";
  label R_HEART  = "R reports heart prob this wv";

 /* --Variable R_HEARTE : # _240 */
  label R_HEARTE  = "R ever had heart problems";
  label R_HEARTF  = "Flag dispute chg heart prob";
  label R_HEARTQ  = "Q-wording heart prob this wv";
  label R_HEARTS  = "R had heart prob snce lastIW";
  label R_HECOV1  = "Who is covered in R empl plan #1";
  label R_HECOV2  = "Who is covered in R empl plan #2";
  label R_HECOV3  = "Who is covered in R empl plan #3";
  label R_HEIGHT  = "Self-reported height in meters";
  label R_HENUM  = "Number of health insurance plans";
  label R_HERET  = "R covered in retirement /summary";

 /* --Variable R_HERTR1 : # _250 */
  label R_HERTR1  = "R coverage by R in retirement #1";
  label R_HERTR2  = "R coverage by R in retirement #2";
  label R_HERTR3  = "R coverage by R in retirement #3";
  label R_HERTS1  = "Sp coverage by R in retirement #1";
  label R_HERTS2  = "Sp coverage by R in retirement #2";
  label R_HERTS3  = "Sp coverage by R in retirement #3";
  label R_HESRC1  = "Source of R empl plan #1";
  label R_HESRC2  = "Source of R empl plan #2";
  label R_HESRC3  = "Source of R empl plan #3";
  label R_HIBP  = "R reports high BP this wv";

 /* --Variable R_HIBPE : # _260 */
  label R_HIBPE  = "R ever had high blood pressure";
  label R_HIBPF  = "Flag dispute chg hi BP";
  label R_HIBPQ  = "Q-wording high BP this wv";
  label R_HIBPS  = "R had hi BP since last IW";
  label R_HIGOV  = "R is covered by Gov plan";
  label R_HILTC  = "R has Long Term Care Ins";
  label R_HIMR20  = "IMMEDIATE WORD RECALL-HRS94";
  label R_HIOTHP  = "R has Other Ins";
  label R_HLPDYSF  = "Days family helpers helped last month";
  label R_HLPDYSNF  = "Days non-family helpers helped last month";

 /* --Variable R_HLPDYSP : # _270 */
  label R_HLPDYSP  = "Days paid helpers helped last month";
  label R_HLPDYST  = "Total days got help last month";
  label R_HLPDYSU  = "Days unpaid helpers helped last month";
  label R_HLPHRSF  = "Hours family helpers helped last month";
  label R_HLPHRSNF  = "Hours non-family helpers helped last month";
  label R_HLPHRSP  = "Hours paid helpers helped last month";
  label R_HLPHRST  = "Total hours got help last month";
  label R_HLPHRSU  = "Hours unpaid helpers helped last month";
  label R_HLPPDFA  = "Amount family helpers were paid to help last month";
  label R_HLPPDFN  = "Number of family helpers paid to help";

 /* --Variable R_HLPPDNFA : # _280 */
  label R_HLPPDNFA  = "Amount non-family helpers were paid to help last month";
  label R_HLPPDNFN  = "Number of non-family helpers paid to help";
  label R_HLPPDTA  = "Total amount helpers were paid last month";
  label R_HLPPDTN  = "Total number of helpers paid to help";
  label R_HLPRFN  = "Number of family helpers who helped last month";
  label R_HLPRNFN  = "Number of non-family helpers who helped last month";
  label R_HLPRPN  = "Number of paid helpers who helped last month";
  label R_HLPRTN  = "Total number of helpers who helped last month";
  label R_HLPRUN  = "Number of unpaid helpers who helped last month";
  label R_HLTC3  = "Self-report of health change";

 /* --Variable R_HLTC5 : # _290 */
  label R_HLTC5  = "Self-report of health change, 5-cat";
  label R_HLTC5F  = "Flag self-report of hlth chg, 5-cat";
  label R_HLTHLM  = "Hlth problems limit work";
  label R_HOMCAR  = "Home hlth care prv 2 yrs (W1: prv 12 mos*)";
  label R_HOSP  = "Hospital stay prv 2 yrs (W1: prv 12 mos*)";
  label R_HSPNIT  = "# Nights in hosp prv 2 yrs (W1: prv 12 mos*)";
  label R_HSPTIM  = "# Hospital stays prv 2 yrs (W1: prv 12 mos*)";
  label R_HSWRKF  = "R Freq heavy housework";
  label R_HTR40  = "HRS WORD TOTAL RECALL SUMMARY SCORE";
  label R_IADL5A  = "Any Diff-sum of IADLs /0-5";

 /* --Variable R_IADL5H : # _300 */
  label R_IADL5H  = "R Gets Help-sum of IADLs /0-5";
  label R_IANN  = "Income:R Annuity";
  label R_IEARN  = "Income:R Earnings";
  label R_IFANN  = "ImpFlag:R Annuity";
  label R_IFEARN  = "ImpFlag:R Earnings";
  label R_IFGXFR  = "ImpFlag:R Other Gov Transfer";
  label R_IFIRAW  = "ImpFlag:IRA Withd-Total (prev 2 yrs/since last int)";
  label R_IFIRAWY1  = "ImpFlag:IRA Withd-Total (LCY)";
  label R_IFPEN  = "ImpFlag:R Pension";
  label R_IFPENA  = "ImpFlag:R Pension + Annuity";

 /* --Variable R_IFSDI : # _310 */
  label R_IFSDI  = "ImpFlag-SocSec DI";
  label R_IFSRET  = "ImpFlag:R SocSec Retirement";
  label R_IFSSDI  = "ImpFlag:R SSI + SS Disability";
  label R_IFSSI  = "ImpFlag-SSI Inc";
  label R_IFUNEM  = "ImpFlag-Unemployment";
  label R_IFUNWC  = "ImpFlag:R Unemp + Workers Comp";
  label R_IFWCMP  = "ImpFlag-Workers Comp";
  label R_IGXFR  = "Income:R Other Gov Transfer";
  label R_IIRAW  = "Income:IRA Withd-Total (prev 2 yrs/since last int)";
  label R_IIRAWY1  = "Income:IRA Withd-Total (LCY)";

 /* --Variable R_IMRC : # _320 */
  label R_IMRC  = "IMMEDIATE WORD RECALL(W14: FTF/TEL*)";
  label R_IMRC20  = "IMMEDIATE WORD RECALL";
  label R_INHER  = "R Prob inheritance nxt 10 yr";
  label R_INHPE  = "Any employee of institution ever helped";
  label R_INHPFN  = "Number of family helpers ever helped";
  label R_INHPNFN  = "Number of non-family helpers ever helped";
  label R_INHPPN  = "Number of paid helpers ever helped";
  label R_INHPTN  = "Total number of helpers ever helped";
  label R_INHPUN  = "Number of unpaid helpers ever helped";
  label R_INLBRF  = "=1 if R is in the labor force";

 /* --Variable R_IPEN : # _330 */
  label R_IPEN  = "Income:R Pension";
  label R_IPENA  = "Income:R Pension + Annuity";
  label R_ISDI  = "IncPart-SocSec DI";
  label R_ISRET  = "Income:R SocSec Retirement";
  label R_ISSDI  = "Income:R SSI + SS Disability";
  label R_ISSI  = "IncPart-SSI Inc";
  label R_IUNEM  = "IncPart-Unemployment";
  label R_IUNWC  = "Income:R Unemp + Workers Comp";
  label R_IWBEG  = "Interview Begin Date";
  label R_IWBEGF  = "Interview Beg Date Flag";

 /* --Variable R_IWCMP : # _340 */
  label R_IWCMP  = "IncPart-Workers Comp";
  label R_IWEND  = "Interview End Date";
  label R_IWENDF  = "Interview End Date Flag";
  label R_IWENDM  = "Interview End Month";
  label R_IWENDY  = "Interview End Year";
  label R_IWMID  = "Interview Midpoint Date";
  label R_IWMIDF  = "Interview Midpt Date Flag";
  label R_IWSTAT  = "R Interview Status";
  label R_JCIND  = "Current Job Industry/1980 Census";
  label R_JCINDB  = "Cur Job Industry/2002 Census";

 /* --Variable R_JCINDC : # _350 */
  label R_JCINDC  = "Cur Job Industry/2007 Census";
  label R_JCOCC  = "Current Job Occup/1980 Census";
  label R_JCOCCA  = "Cur Job Occup/Ahead coding";
  label R_JCOCCB  = "Cur Job Occup/2000 Census";
  label R_JCOCCC  = "Cur Job Occup/2010 Census";
  label R_JCPEN  = "Has pension current job";
  label R_JCPENF  = "Further info on JCPEN";
  label R_JCTEN  = "Current Job Tenure";
  label R_JHOUR2  = "Hours worked/week 2nd job";
  label R_JHOURS  = "Hours worked/week main job";

 /* --Variable R_JJOBS : # _360 */
  label R_JJOBS  = "Status of R Job History";
  label R_JLASTM  = "Month Last Worked/not workng";
  label R_JLASTY  = "Year Last Worked/not working";
  label R_JLIFT  = "Cur job req lift heavy loads";
  label R_JLIND  = "Longest Job Industry/1980 Census";
  label R_JLINDB  = "Long Job Industry/2002 Census";
  label R_JLINDC  = "Long Job Industry/2007 Census";
  label R_JLMIS  = "Longest Job # Jobs date=miss";
  label R_JLOCC  = "Longest Job Occ/1980 Census";
  label R_JLOCCA  = "Long Job Occup/Ahead coding";

 /* --Variable R_JLOCCB : # _370 */
  label R_JLOCCB  = "Long Job Occup/2000 Census";
  label R_JLOCCC  = "Long Job Occup/2010 Census";
  label R_JLTEN  = "Longest Job Tenure";
  label R_JLTENF  = "Long Job Tenure/fill in flag";
  label R_JMISS  = "# Jobs with missing dates";
  label R_JNJOB  = "# Jobs Reported";
  label R_JNJOB5  = "# 5+ year-jobs reported";
  label R1_JOG  = "R Diff-Jog one mile";
  label R2_JOG  = "R Diff-Jog one mile";
  label R_JOG  = "R Diff-Jog one mile";

 /* --Variable R_JOGA : # _380 */
  label R_JOGA  = "R Any Diff-Jog one mile";
  label R_JOGW  = "R Any Diff-Jog one mile";
  label R_JPHYS  = "Cur job req lots phys effort";
  label R_JSIGHT  = "Cur job req good eyesight";
  label R_JSTOOP  = "Cur job req stoop/kneel/crouch";
  label R_JSTRES  = "Cur job involves much stress";
  label R_JWEEK2  = "Weeks worked/year 2nd job";
  label R_JWEEKS  = "Weeks worked/year main job";
  label R_JYEARM  = "R Years Worked/missing flag";
  label R_JYEARS  = "R Years Worked/self-rpt+jobh";

 /* --Variable R_LBAGR : # _390 */
  label R_LBAGR  = "Big 5 Agreeableness";
  label R_LBASSISTPRB  = "Reg help ailing friend/fam";
  label R_LBCOMP  = "Completed LB Psychosocial Survey";
  label R_LBCON10  = "Big 5 Conscientiousness 10 Sub-items";
  label R_LBCON5  = "Big 5 Conscientiousness 5 Sub-items";
  label R_LBELIG  = "Eligible for LB Psychosocial Survey";
  label R_LBEXT  = "Big 5 Extroversion";
  label R_LBFAMDRUGPRB  = "Ongoing drug/alcohol probs fam mbr";
  label R_LBFAMHLTHPRB  = "Ongoing phy/emot problems in sp/chld";
  label R_LBFINPRB  = "Ongoing financial strain";

 /* --Variable R_LBHLTHPRB : # _400 */
  label R_LBHLTHPRB  = "Self ongoing health problems";
  label R_LBHOUSEPRB  = "Ongoing housing preoblems";
  label R_LBLONELY11  = "Loneliness 11-item scale";
  label R_LBLONELY3  = "Loneliness 3-item scale";
  label R_LBNEGAFFECT  = "Negative affect 12-question scale";
  label R_LBNEGAFFECT6  = "Negative affect 6-question scales";
  label R_LBNEUR  = "Big 5 Neuroticism";
  label R_LBONCHRSTR  = "Ongoing Chronic Stress Scale";
  label R_LBOPEN  = "Big 5 Openness to experience";
  label R_LBPOSAFFECT  = "Positive affect 13-question scale";

 /* --Variable R_LBPOSAFFECT6 : # _410 */
  label R_LBPOSAFFECT6  = "Positive affect 6-question scales";
  label R_LBRF  = "R Labor Force Status";
  label R_LBRFH  = "Labor Force Status, No Week Restriction";
  label R_LBRFY  = "Labor Force Status Year Round Flag";
  label R_LBRLTNSHPRB  = "Ongoing problems close relationship";
  label R_LBSATCITY  = "Sat w/City town live";
  label R_LBSATFAM  = "Sat w/Family life";
  label R_LBSATFIN  = "Sat w/Present fin situation";
  label R_LBSATHLTH  = "Sat w/Health";
  label R_LBSATHOME  = "Sat w/Condition of home";

 /* --Variable R_LBSATINC : # _420 */
  label R_LBSATINC  = "Sat w/Total household income";
  label R_LBSATLEISURE  = "Sat w/Daily leisure acts";
  label R_LBSATLIFE  = "Sat w/Life as a whole LB";
  label R_LBSATWLF  = "Life satisfaction scale";
  label R_LBWGTR  = "R weight for LB Psychosocial Survey";
  label R_LBWORKPRB  = "Ongoing difficulties at work";
  label R_LGMUSA  = "Any Diff-sum of Large Muscle measures /0-4";
  label R_LGMUSW  = "Any Diff-sum of Large Muscle measures /0-4";
  label R_LHTACT  = "R Wtr light phys activ 3+/wk";
  label R_LIFEIN  = "R has Life Insurance";

 /* --Variable R1_LIFT : # _430 */
  label R1_LIFT  = "R Diff-Lift/carry 10lbs";
  label R2_LIFT  = "R Diff-Lift/carry 10lbs";
  label R_LIFT  = "R Diff-Lift/carry 10lbs";
  label R_LIFTA  = "R Any Diff-Lift/carry 10lbs";
  label R_LIFTW  = "R Any Diff-Lift/carry 10lbs";
  label R_LIV10  = "R Probability to live 80-100";
  label R_LIV10A  = "Age used in live 80-100/85 Q";
  label R_LIV10P  = "LfTab prob live 80-100/R curage";
  label R_LIV10R  = "Rprob live 80-100 / LfTab prob";
  label R_LIV75  = "R Probability to live 75+";

 /* --Variable R_LIV75C : # _440 */
  label R_LIV75C  = "Chg live 75+:R/LfTab ratio";
  label R_LIV75F  = "Flag LIV75C, # prv iw";
  label R_LIV75P  = "LfTab prob live 75+/R curage";
  label R_LIV75R  = "Rprob live 75+ / LfTab prob";
  label R_LIV85  = "R Probability to live 85+";
  label R_LIV85C  = "Chg live 85+:R/LfTab ratio";
  label R_LIV85F  = "Flag LIV85C, # prv iw";
  label R_LIV85P  = "LfTab prob live 85+/R curage";
  label R_LIV85R  = "Rprob live 85+ / LfTab prob";
  label R_LIV8XC  = "Chg live 80-100:R/LfTab ratio";

 /* --Variable R_LIV8XF : # _450 */
  label R_LIV8XF  = "Flag LIV8XC, # prv iw";
  label R_LIVBRO  = "Number of living brothers";
  label R_LIVPAR  = "Number of living parents";
  label R_LIVSIB  = "Number of living siblings";
  label R_LIVSIS  = "Number of living sisters";
  label R_LOST  = "R lost in familiar environments";
  label R_LTACTF  = "R Freq light phys activities";
  label R_LTACTN  = "R # times/per light phys act";
  label R_LTACTP  = "R Period light phys activ";
  label R_LTACTX  = "R Freq light phys activ {finer scale}";

 /* --Variable R_LTCPRM : # _460 */
  label R_LTCPRM  = "Long Term Care Insurance Plan Monthly Premium";
  label R_LUNG  = "R reports lung disease this wv";
  label R_LUNGE  = "R ever had lung disease";
  label R_LUNGF  = "Flag dispute chg lung disease";
  label R_LUNGQ  = "Q-wording lung disease this wv";
  label R_LUNGS  = "R had lung dis since last IW";
  label R_MAMMOG  = "Prev Mammogram";
  label R1_MAP  = "R Diff-Use a map";
  label R2_MAP  = "R Diff-Use a map";
  label R_MAP  = "R Diff-Use a map";

 /* --Variable R_MAPA : # _470 */
  label R_MAPA  = "R Any Diff-Use a map";
  label R_MAPW  = "R Any Diff-Use a map";
  label R_MCURLN  = "R length of current marriage";
  label R_MCWV  = "R Diff-Use a microwave";
  label R_MCWVW  = "R Any Diff-Use a microwave";
  label R_MDACTX  = "R Freq moderate phys activ {finer scale}";
  label R_MDIV  = "R # times divorced";
  label R_MEALS  = "R Diff-Preparing hot meals";
  label R_MEALSA  = "R Any Diff-Prepare hot meal";
  label R_MEALSH  = "R Gets Help-Preparing hot meals";

 /* --Variable R_MEALSR : # _480 */
  label R_MEALSR  = "R Diff-Preparing hot meals";
  label R2_MEDS  = "R Diff-Take medications";
  label R_MEDS  = "R Diff-Take medications";
  label R_MEDSA  = "R Any Diff-Take medications";
  label R_MEDSH  = "R Gets Help-Take medications";
  label R_MEDSR  = "R Diff-Take medications";
  label R_MEMRY  = "R reports memory prob this wv";
  label R_MEMRYE  = "R ever had memory problem";
  label R_MEMRYF  = "Flag chg prev memory prob";
  label R_MEMRYQ  = "Q-wording memory prob this wv";

 /* --Variable R_MEMRYS : # _490 */
  label R_MEMRYS  = "R had memory prob snce last IW";
  label R_MEND  = "R # times unknown end marriage";
  label R_MLEN  = "R length of longest marriage";
  label R_MLENM  = "R # marriage lengths missng";
  label R_MNEV  = "R never married";
  label R_MO  = "Cognition Date naming-Month";
  label R_MOBILA  = "Any Diff-sum of Mobility measures /0-5";
  label R_MOBILW  = "Any Diff-sum of Mobility measures /0-5";
  label R_MOMAGE  = "Mother age current/at death";
  label R_MOMLIV  = "Mother alive";

 /* --Variable R2_MONEY : # _500 */
  label R2_MONEY  = "R Diff-Managing money";
  label R_MONEY  = "R Diff-Managing money";
  label R_MONEYA  = "R Any Diff-Managing money";
  label R_MONEYH  = "R Gets Help-Managing money";
  label R_MONEYR  = "R Diff-Managing money";
  label R_MPART  = "R partnered";
  label R_MRCT  = "R # marriages";
  label R_MRPREM  = "Medicare/Medicaid HMO Monthly Premium";
  label R_MSTAT  = "R Marital Status";
  label R_MSTATF  = "R MStatH-Flag diff w/marhist";

 /* --Variable R_MSTATH : # _510 */
  label R_MSTATH  = "R MarStat-w/o part,filled";
  label R_MSTOT  = "TOTAL MENTAL STATUS SUMMARY SCORE(W14: FTF/TEL*)";
  label R_MWID  = "R # times widowed";
  label R_NHMDAY  = "Days in NH from Move/PrvIvw";
  label R_NHMLIV  = "Live in Nurs home at Iview";
  label R_NHMMVM  = "Month moved to Nurs home";
  label R_NHMMVY  = "Year moved to Nurs home";
  label R_NOTICS  = "NOT ASKED TICS ITEMS";
  label R_NOVOC  = "NOT ASKED VOCABULARY";
  label R_NRSHOM  = "Nurs home stay prv 2 yrs (W1: prv 12 mos*)";

 /* --Variable R_NRSNIT : # _520 */
  label R_NRSNIT  = "# Nights in nurs home prv 2 yrs (W1: prv 12 mos*)";
  label R_NRSTIM  = "# Nurs home stays prv 2 yrs (W1: prv 12 mos*)";
  label R_NSSCRE  = "R Calculated number series score";
  label R_NSSCSE  = "R Calculated number series score-SE";
  label R_OOPMD  = "Mexp Amt:Out of pkt med exp prv 2 yrs (W2: prv 12 mos*)";
  label R_OOPMDF  = "Mexp Flag:Out of pkt imputed";
  label R_OOPMDO  = "Mexp Amt:Out of pkt med exp w oth, prv 2 yrs";
  label R_OOPMDOF  = "Mexp Flag:Out of pkt w oth imputed";
  label R_OUTPT  = "Outpatient surgry prv 2 yrs (W2:  prv 1-,2-yr(A,H)*)";
  label R_PAPSM  = "Prev Pap Smear";

 /* --Variable R_PARTD : # _530 */
  label R_PARTD  = "R Medicare Part D status";
  label R_PENCT  = "# pensions current job";
  label R_PENIC1  = "Pen #1 Continue after death";
  label R_PENIC2  = "Pen #2 Continue after death";
  label R_PENINC  = "R current receiving pension income";
  label R_PENI_N  = "# pensions R receives income";
  label R_PEXIT  = "Exit or Post-Exit Interview Administered this wave";
  label R2_PHONE  = "R Diff-Use telephone";
  label R_PHONE  = "R Diff-Use telephone";
  label R_PHONEA  = "R Any Diff-Use telephone";

 /* --Variable R_PHONEH : # _540 */
  label R_PHONEH  = "R Gets Help-Use telephone";
  label R_PHONER  = "R Diff-Use telephone";
  label R_PMBMI  = "R phys msr body mass index=kg/m2";
  label R_PMHGHT  = "R phys msr height in meters";
  label R_PMHGHTS  = "R phys msr height-Wore shoes";
  label R_PMWAIST  = "R phys msr waist";
  label R_PMWAISTC  = "R phys msr waist-Bulky clothes";
  label R_PMWGHT  = "R phys msr weight in kilograms";
  label R_PMWGHTF  = "R phys msr weight-Floor type";
  label R_PMWGHTS  = "R phys msr weight-Wore shoes";

 /* --Variable R_PNHM5Y : # _550 */
  label R_PNHM5Y  = "R Prob moving to NHM in 5 yrs";
  label R_PRCHMEM  = "Rate R change in memory";
  label R_PRES  = "PRESIDENT";
  label R_PRMEM  = "Rate R memory";
  label R_PROST  = "Prev Prostate";
  label R_PROXY  = "Whether Proxy Interview";
  label R_PRPCNT  = "Number of Private Insurance Plans";
  label R_PRPRM1  = "Private Insurance Plan 1 Monthly Premium";
  label R_PRPRM2  = "Private Insurance Plan 2 Monthly Premium";
  label R_PRPRM3  = "Private Insurance Plan 3 Monthly Premium";

 /* --Variable R_PRSRC1 : # _560 */
  label R_PRSRC1  = "Private Insurance Plan 1 Source";
  label R_PRSRC2  = "Private Insurance Plan 2 Source";
  label R_PRSRC3  = "Private Insurance Plan 3 Source";
  label R_PSTMEM  = "MEMORY COMPARED TO PAST";
  label R_PSYCH  = "R reports psych prob this wv";
  label R_PSYCHE  = "R ever had psych problems";
  label R_PSYCHF  = "Flag dispute chg psych probs";
  label R_PSYCHQ  = "Q-wording psych prob this wv";
  label R_PSYCHS  = "R had psych prob snce lastIW";
  label R_PTYP1  = "Current pension type #1";

 /* --Variable R_PTYP2 : # _570 */
  label R_PTYP2  = "Current pension type #2";
  label R_PTYP3  = "Current pension type #3";
  label R_PTYP4  = "Current pension type #4";
  label R_PTYPD1  = "Current pension type in detail #1";
  label R_PTYPD2  = "Current pension type in detail #2";
  label R_PTYPD3  = "Current pension type in detail #3";
  label R_PTYPD4  = "Current pension type in detail #4";
  label R_PTYPF1  = "Does pension type match detail? #1";
  label R_PTYPF2  = "Does pension type match detail? #2";
  label R_PTYPF3  = "Does pension type match detail? #3";

 /* --Variable R_PTYPF4 : # _580 */
  label R_PTYPF4  = "Does pension type match detail? #4";
  label R_PUFF  = "R breathing test";
  label R_PUFFPOS  = "R pos during breathing tests";
  label R1_PUSH  = "R Diff-Push/pull large obj";
  label R2_PUSH  = "R Diff-Push/pull large obj";
  label R_PUSH  = "R Diff-Push/pull large obj";
  label R_PUSHA  = "R Any Diff-Push/pull lg obj";
  label R_PUSHW  = "R Any Diff-Push/pull lg obj";
  label R_RETDTWV  = "Wave retirement date reported";
  label R_RETEMP  = "R GIVES RETIRED IN EMPSTAT";

 /* --Variable R_RETINC : # _590 */
  label R_RETINC  = "R Worry-enough retiremnt inc";
  label R_RETLIV  = "R Expect-retiremt living std";
  label R_RETMON  = "Month Retired if say retired";
  label R_RETSAT  = "Ret Satisfying";
  label R_RETWLT  = "R Expect-tot retirement wlth";
  label R_RETWRK  = "R Plan-paid work aft retired";
  label R_RETWSP  = "R Expect-SP retire same time";
  label R_RETYR  = "Year Retired if say retired";
  label R_RISK  = "R Income Risk Aversion";
  label R_RISK6  = "R Income Risk Avers/6-categ";

 /* --Variable R_RPLNYA : # _600 */
  label R_RPLNYA  = "When R thinks will stop work";
  label R_RPLNYR  = "When R plans to stop work";
  label R_RXPREM  = "Prescription Drug Insurance Monthly Premium";
  label R_RYRCMP  = "Ret Yrs Compared to Before";
  label R_SADLF  = "R Skip ADLs Flag";
  label R_SAMEJOB  = "Same Job title as last Wave";
  label R_SAMEMP  = "Same Employer as Last Wave";
  label R_SAYRET  = "R considers self retired";
  label R_SCIS  = "SCISSORS";
  label R_SDIAPL  = "Appealed SSDI decision since last wave";

 /* --Variable R_SDIAPLM : # _610 */
  label R_SDIAPLM  = "Month appealed SSDI since last wave";
  label R_SDIAPLY  = "Year appealed SSDI since last wave";
  label R_SDIAPP  = "Applied for SSDI since last wave";
  label R_SDIAPPM  = "Month applied for SSDI since last wave";
  label R_SDIAPPY  = "Year applied for SSDI since last wave";
  label R_SDIDEN  = "Denied SSDI since last wave";
  label R_SDIREC  = "Started receiving SSDI since last wave";
  label R_SDIRECM  = "Month started receiving SSDI since last wave";
  label R_SDIRECY  = "Year started receiving SSDI since last wave";
  label R_SDISTP  = "Stopped receiving SSDI since last wave";

 /* --Variable R_SDISTPM : # _620 */
  label R_SDISTPM  = "Month stopped receiving SSDI since last wave";
  label R_SDISTPY  = "Year stopped receiving SSDI since last wave";
  label R_SER7  = "SERIAL 7S";
  label R_SHLT  = "Self-report of health";
  label R_SHLTC  = "Change in self-reported hlth";
  label R_SHLTCF  = "Flag chg self-reported hlth";
  label R_SHOP  = "R Diff-Shop for groceries";
  label R_SHOPA  = "R Any Diff-Shop for grocery";
  label R_SHOPH  = "R Gets Help-Shop for groceries";
  label R_SHOPR  = "R Diff-Shop for groceries";

 /* --Variable R1_SIT : # _630 */
  label R1_SIT  = "R Diff-Sit for 2 hours";
  label R2_SIT  = "R Diff-Sit for 2 hours";
  label R_SIT  = "R Diff-Sit for 2 hours";
  label R_SITA  = "R Any Diff-Sit for 2 hours";
  label R_SITW  = "R Any Diff-Sit for 2 hours";
  label R_SLEEP  = "R reports sleep disorder this wv";
  label R_SLEEPE  = "R ever had sleep disorder";
  label R_SLEEPQ  = "Q-wording sleep disorder this wv";
  label R_SLEEPR  = "CESD:Sleep was restless";
  label R_SLEEPS  = "R had sleep disorder snce last IW";

 /* --Variable R_SLEEPX : # _640 */
  label R_SLEEPX  = "CESD:Sleep was restless-raw";
  label R_SLFEMP  = "Whether Self-Employed";
  label R_SLFMEM  = "SELF RATED MEMORY";
  label R_SMOKEN  = "R smokes now";
  label R_SMOKEV  = "R smoke ever";
  label R_SPCFAC  = "Spec hlth facilty prv 2 yrs (W2:  prv 1-,2-yr(A,H)*)";
  label R_SSAPL  = "Appealed SSDI/SSI decision since last wave";
  label R_SSAPLM  = "Month appealed SSDI/SSI since last wave";
  label R_SSAPLY  = "Year appealed SSDI/SSI since last wave";
  label R_SSAPP  = "Applied for SSDI/SSI since last wave";

 /* --Variable R_SSAPPM : # _650 */
  label R_SSAPPM  = "Month applied for SSDI/SSI since last wave";
  label R_SSAPPY  = "Year applied for SSDI/SSI since last wave";
  label R_SSDEN  = "Denied SSDI/SSI since last wave";
  label R_SSDI  = "R IS RECEIVING SSDI";
  label R_SSIAPL  = "Appealed SSI decision since last wave";
  label R_SSIAPLM  = "Month appealed SSI since last wave";
  label R_SSIAPLY  = "Year appealed SSI since last wave";
  label R_SSIAPP  = "Applied for SSI since last wave";
  label R_SSIAPPM  = "Month applied for SSI since last wave";
  label R_SSIAPPY  = "Year applied for SSI since last wave";

 /* --Variable R_SSIDEN : # _660 */
  label R_SSIDEN  = "Denied SSI since last wave";
  label R_SSIREC  = "Started receiving SSI since last wave";
  label R_SSIRECM  = "Month started receiving SSI since last wave";
  label R_SSIRECY  = "Year started receiving SSI since last wave";
  label R_SSISTP  = "Stopped receiving SSI since last wave";
  label R_SSISTPM  = "Month stopped receiving SSI since last wave";
  label R_SSISTPY  = "Year stopped receiving SSI since last wave";
  label R_SSREC  = "Started receiving SSDI/SSI since last wave";
  label R_SSRECM  = "Month started receiving SSDI/SSI since last wave";
  label R_SSRECY  = "Year started receiving SSDI/SSI since last wave";

 /* --Variable R_SSSTP : # _670 */
  label R_SSSTP  = "Stopped receiving SSDI/SSI since last wave";
  label R_SSSTPM  = "Month stopped receiving SSDI/SSI since last wave";
  label R_SSSTPY  = "Year stopped receiving SSDI/SSI since last wave";
  label R_SSWRER  = "R SS wealth based on own earnings, claiming at 62";
  label R_SSWRNR  = "R SS wealth based on own earnings, claiming at NRA";
  label R_SSWRXA  = "R SS wealth based on own earnings, claiming at 70";
  label R_SSWSER  = "R SSW from spouse/survival benefits, claim at 62";
  label R_SSWSNR  = "R SSW from spouse/survival benefits, claim at NRA";
  label R_SSWSXA  = "R SSW from spouse/survival benefits, claim at 70";
  label R_STATUS  = "STATUS:IMPUTATION ELIGIBILITY STATUS";

 /* --Variable R1_STOOP : # _680 */
  label R1_STOOP  = "R Diff-Stoop/Kneel/Crouch";
  label R2_STOOP  = "R Diff-Stoop/Kneel/Crouch";
  label R_STOOP  = "R Diff-Stoop/Kneel/Crouch";
  label R_STOOPA  = "R Any Diff-Stoop/Kneel/Crch";
  label R_STOOPW  = "R Any Diff-Stoop/Kneel/Crouch";
  label R_STROK  = "R reports stroke this wv";
  label R_STROKE  = "R ever had stroke";
  label R_STROKF  = "Flag dispute chg stroke";
  label R_STROKQ  = "Q-wording stroke this wv";
  label R_STROKS  = "R had stroke since last IW";

 /* --Variable R_TIMWLK : # _690 */
  label R_TIMWLK  = "R timed walk test time";
  label R_TIMWLKA  = "R timed walk test-Walk aid used";
  label R_TLIPRM  = "Term Life Insurance Monthly Premium";
  label R2_TOILT  = "R Diff-Using the toilet";
  label R_TOILT  = "R Diff-Using the toilet";
  label R_TOILTA  = "R Any Diff-Using the toilet";
  label R2_TOILTH  = "R Gets Help-Using the toilet";
  label R_TOILTH  = "R Gets Help-Using the toilet";
  label R_TOTMBF  = "Tot Med Exp Bkt, ImpFlag";
  label R_TOTMBI  = "Imputed Tot Med Exp Bkt";

 /* --Variable R_TOTMD : # _700 */
  label R_TOTMD  = "Total med expenses, prv 2 yrs";
  label R_TOTMDF  = "Total med imputed";
  label R_TR20  = "TOTAL WORD RECALL SUMMARY SCORE(W14: FTF/TEL*)";
  label R_TR40  = "TOTAL WORD RECALL SUMMARY SCORE";
  label R_TYLTC  = "R Type of Long Term Care Ins";
  label R_ULCER  = "Rs had ulcers";
  label R_UNEMP  = "=1 if R is unemployed";
  label R_UNION  = "R is covered by a union";
  label R_UNIONF  = "Carried forward value from prev wave";
  label R_VGACTF  = "R Freq vigorous phys activ";

 /* --Variable R_VGACTN : # _710 */
  label R_VGACTN  = "R # times/per vigor phys act";
  label R_VGACTP  = "R Period vigor phys activ";
  label R_VGACTX  = "R Freq vigorous phys activ {finer scale}";
  label R_VIGACT  = "R Wtr vigorus phys act 3+/wk";
  label R_VOCAB  = "VOCAB SUM SCORE";
  label R_VP  = "VICE PRESIDENT";
  label R1_WALK1  = "R Diff-Walk one block";
  label R2_WALK1  = "R Diff-Walk one block";
  label R_WALK1  = "R Diff-Walk one block";
  label R_WALK1A  = "R Any Diff-Walk one block";

 /* --Variable R_WALK1W : # _720 */
  label R_WALK1W  = "R Any Diff-Walk one block";
  label R1_WALKR  = "R Diff-Walk across room";
  label R2_WALKR  = "R Diff-Walk across room";
  label R_WALKR  = "R Diff-Walk across room";
  label R_WALKRA  = "R Any Diff-Walk across room";
  label R_WALKRE  = "R Eqp-Walk across room";
  label R2_WALKRH  = "R Gets Help-Walk across room";
  label R_WALKRH  = "R Gets Help-Walk across room";
  label R_WALKRW  = "R Any Diff-Walk across room";
  label R1_WALKS  = "R Diff-Walk sev blocks";

 /* --Variable R2_WALKS : # _730 */
  label R2_WALKS  = "R Diff-Walk sev blocks";
  label R_WALKS  = "R Diff-Walk sev blocks";
  label R_WALKSA  = "R Any Diff-Walk sev blocks";
  label R_WALKSW  = "R Any Diff-Walk sev blocks";
  label R_WANDER  = "R ever wander off";
  label R_WEIGHT  = "Self-reported weight in kilograms";
  label R_WGFHR  = "Impute Flag Wage Rate-Hrly";
  label R_WGFWK  = "Impute Flag Wage Rate-Wkly";
  label R_WGIHR  = "Imputed Wage Rate-Hrly";
  label R_WGIWK  = "Imputed Wage Rate-Wkly";

 /* --Variable R_WHAPPX : # _740 */
  label R_WHAPPX  = "CESD:Was happy-raw";
  label R_WHAPPY  = "CESD:Was happy";
  label R_WLIPRM  = "Whole Life Insurance Monthly Premium";
  label R_WORK  = "R working for pay";
  label R_WORK2  = "Works at 2nd job";
  label R_WORK62  = "R Prob working FT after 62";
  label R_WORK62F  = "Logical Skip Flag:P62";
  label R_WORK65  = "R Prob working FT after 65";
  label R_WORK65F  = "Logical Skip Flag:P65";
  label R_WORK70  = "R Prob working FT after 70";

 /* --Variable R_WORK70A : # _750 */
  label R_WORK70A  = "R Prob working at all after 70";
  label R_WORK70AF  = "Logical Skip Flag:P70A";
  label R_WORK70F  = "Logical Skip Flag:P70";
  label R_WORKLM  = "R Prob health limiting work";
  label R_WTCRNH  = "Combined Respondent weight and NursHm Resident weight";
  label R_WTHH  = "Household Analysis Weight";
  label R_WTRESP  = "Person-Level Analysis Weight";
  label R_WTR_NH  = "NursHm Resident Analysis Weight";
  label R_YR  = "Cognition Date naming-Year";
%mend label_statements;


%macro clength_statements;
/*  Table RLong: Length statements for character and selected numeric vars */
/* Macro invoked by `create_template_longout` macro */
  length HHID $6;                           /* _1 */
  length PN $3;                             /* _2 */
  length H_HHIDC $7;                        /* _4 */
  length SUBHH $1;                          /* _5 */
  length RAHHIDPN $9;                       /* _6 */
  length WAVE_NAME $12;                     /* _8 */
  length CYEAR $10;                         /* _9 */
%mend clength_statements;



%macro format_statements;
/*  Table RLong: format statements for 492 variables */
/* Macro invoked by `create_template_longout` macro */
  format R_ALONE PRLOST.;                   /* _28 */
  format R_ALZHE RAWCOND.;                  /* _29 */
  format R_ALZHEE YESNO.;                   /* _30 */
  format R_ALZHEF MEMRYF.;                  /* _31 */
  format R_ALZHEQ CONDQ.;                   /* _32 */
  format R_ALZHES YESNOP.;                  /* _33 */
  format R_ANS3PQ YESNO.;                   /* _35 */
  format R1_ARMS ADL_1C.;                   /* _36 */
  format R2_ARMS ADL_2C.;                   /* _37 */
  format R_ARMS ADLA.;                      /* _38 */
  format R_ARMSA ADLA.;                     /* _39 */
  format R_ARMSW ADLA.;                     /* _40 */
  format R_ARTHR RAWCOND.;                  /* _41 */
  format R_ARTHRE YESNO.;                   /* _42 */
  format R_ARTHRF EVERF.;                   /* _43 */
  format R_ARTHRQ CONDQ.;                   /* _44 */
  format R_ARTHRS YESNOP.;                  /* _45 */
  format R_BACK PREVENT.;                   /* _47 */
  format R_BALFULC PHYSMEASBIN.;            /* _49 */
  format R_BALFULT PHYSMEASBIN.;            /* _50 */
  format R_BALSBSC PHYSMEASBIN.;            /* _52 */
  format R_BALSEMIC PHYSMEASBIN.;           /* _54 */
  format R1_BATH ADL_1C.;                   /* _55 */
  format R2_BATH ADL_2C.;                   /* _56 */
  format R_BATH ADLA.;                      /* _57 */
  format R_BATHA ADLA.;                     /* _58 */
  format R2_BATHH ADL_2H.;                  /* _59 */
  format R_BATHH ADL_7H.;                   /* _60 */
  format R_BATHW ADLA.;                     /* _61 */
  format R1_BED ADL_1C.;                    /* _62 */
  format R2_BED ADL_2C.;                    /* _63 */
  format R_BED ADLA.;                       /* _64 */
  format R_BEDA ADLA.;                      /* _65 */
  format R_BEDE EQVPMT.;                    /* _66 */
  format R2_BEDH ADL_2H.;                   /* _67 */
  format R_BEDH ADL_7H.;                    /* _68 */
  format R_BEDW ADLA.;                      /* _69 */
  format R_BEQLRG BEQLRG.;                  /* _74 */
  format R_BPPOS POSITION.;                 /* _77 */
  format R_BREAST PREVENT.;                 /* _80 */
  format R_BWC20 COGCNT.;                   /* _81 */
  format R_BWC86 COGCNT.;                   /* _82 */
  format R_CACT COGCORR.;                   /* _83 */
  format R1_CALC ADL_1C.;                   /* _84 */
  format R2_CALC ADL_2C.;                   /* _85 */
  format R_CALCA ADLA.;                     /* _86 */
  format R_CALCW ADLA.;                     /* _87 */
  format R_CANCR RAWCOND.;                  /* _88 */
  format R_CANCRE YESNO.;                   /* _89 */
  format R_CANCRF EVERF.;                   /* _90 */
  format R_CANCRQ CONDQ.;                   /* _91 */
  format R_CANCRS YESNOP.;                  /* _92 */
  format R_CENDIV CENDIV.;                  /* _93 */
  format R_CENREG CENREG.;                  /* _94 */
  format R1_CHAIR ADL_1C.;                  /* _97 */
  format R2_CHAIR ADL_2C.;                  /* _98 */
  format R_CHAIR ADLA.;                     /* _99 */
  format R_CHAIRA ADLA.;                    /* _100 */
  format R_CHAIRW ADLA.;                    /* _101 */
  format R_CHOLST PREVENT.;                 /* _102 */
  format R_CLAIMED YESNO.;                  /* _103 */
  format R1_CLIM1 ADL_1C.;                  /* _104 */
  format R2_CLIM1 ADL_2C.;                  /* _105 */
  format R_CLIM1 ADLA.;                     /* _106 */
  format R_CLIM1A ADLA.;                    /* _107 */
  format R_CLIM1W ADLA.;                    /* _108 */
  format R1_CLIMS ADL_1C.;                  /* _109 */
  format R2_CLIMS ADL_2C.;                  /* _110 */
  format R_CLIMS ADLA.;                     /* _111 */
  format R_CLIMSA ADLA.;                    /* _112 */
  format R_CLIMSW ADLA.;                    /* _113 */
  format R_COMP ADL_1C.;                    /* _115 */
  format R_COMPW ADLA.;                     /* _116 */
  format R_CONDSP PRVIWF.;                  /* _121 */
  format R_COVR HINS.;                      /* _122 */
  format R_COVRT HINS.;                     /* _123 */
  format R_COVS HINS.;                      /* _124 */
  format R_DADLIV YNFAM.;                   /* _126 */
  format R_DCMODE1 DCF.;                    /* _139 */
  format R_DCMODE2 DCF.;                    /* _140 */
  format R_DCMODE3 DCF.;                    /* _141 */
  format R_DCMODE4 DCF.;                    /* _142 */
  format R_DEMEN RAWCOND.;                  /* _147 */
  format R_DEMENE YESNO.;                   /* _148 */
  format R_DEMENF MEMRYF.;                  /* _149 */
  format R_DEMENQ CONDQ.;                   /* _150 */
  format R_DEMENS YESNOP.;                  /* _151 */
  format R_DENTST YESNO.;                   /* _152 */
  format R_DEPRES YESNO.;                   /* _153 */
  format R_DEPREX R1CESD.;                  /* _154 */
  format R_DIAB RAWCOND.;                   /* _155 */
  format R_DIABE YESNO.;                    /* _156 */
  format R_DIABF EVERF.;                    /* _157 */
  format R_DIABQ CONDQ.;                    /* _158 */
  format R_DIABS YESNOP.;                   /* _159 */
  format R1_DIME ADL_1C.;                   /* _160 */
  format R2_DIME ADL_2C.;                   /* _161 */
  format R_DIME ADLA.;                      /* _162 */
  format R_DIMEA ADLA.;                     /* _163 */
  format R_DIMEW ADLA.;                     /* _164 */
  format R_DOCTOR YESNO.;                   /* _168 */
  format R1_DRESS ADL_1C.;                  /* _169 */
  format R2_DRESS ADL_2C.;                  /* _170 */
  format R_DRESS ADLA.;                     /* _171 */
  format R_DRESSA ADLA.;                    /* _172 */
  format R2_DRESSH ADL_2H.;                 /* _173 */
  format R_DRESSH ADL_7H.;                  /* _174 */
  format R_DRESSW ADLA.;                    /* _175 */
  format R_DRINK YESNO.;                    /* _176 */
  format R_DRINKD DRINKX.;                  /* _177 */
  format R_DRINKN DRINKX.;                  /* _178 */
  format R_DRINKR DRINKR.;                  /* _179 */
  format R_DRUGS YESNO.;                    /* _180 */
  format R_DSTAT RFDSTAT.;                  /* _183 */
  format R_DW COGCORR.;                     /* _184 */
  format R_DY COGCORR.;                     /* _185 */
  format R1_EAT ADL_1C.;                    /* _186 */
  format R2_EAT ADL_2C.;                    /* _187 */
  format R_EAT ADLA.;                       /* _188 */
  format R_EATA ADLA.;                      /* _189 */
  format R2_EATH ADL_2H.;                   /* _190 */
  format R_EATH ADL_7H.;                    /* _191 */
  format R_EATW ADLA.;                      /* _192 */
  format R_EFFORT YESNO.;                   /* _193 */
  format R_EFFORX R1CESD.;                  /* _194 */
  format R_ENLIFE YESNO.;                   /* _195 */
  format R_ENLIFX R1CESD.;                  /* _196 */
  format R_FAMR YESNO.;                     /* _197 */
  format R_FBWC20 COGIMP.;                  /* _198 */
  format R_FBWC86 COGIMP.;                  /* _199 */
  format R_FCACT COGIMP.;                   /* _200 */
  format R_FDLRC COGIMP.;                   /* _201 */
  format R_FDW COGIMP.;                     /* _202 */
  format R_FDY COGIMP.;                     /* _203 */
  format R_FIMRC COGIMP.;                   /* _204 */
  format R_FINPLN FINPLN.;                  /* _206 */
  format R_FINR YESNO.;                     /* _207 */
  format R_FLAG WFLAG.;                     /* _208 */
  format R_FLONE YESNO.;                    /* _209 */
  format R_FLONEX R1CESD.;                  /* _210 */
  format R_FLUSHT PREVENT.;                 /* _211 */
  format R_FMO COGIMP.;                     /* _212 */
  format R_FPRES COGIMP.;                   /* _213 */
  format R_FPSTME COGIMP.;                  /* _214 */
  format R_FSAD YESNO.;                     /* _215 */
  format R_FSADX R1CESD.;                   /* _216 */
  format R_FSCIS COGIMP.;                   /* _217 */
  format R_FSER7 COGIMP.;                   /* _218 */
  format R_FSIZEF FORWARD.;                 /* _220 */
  format R_FSLFME COGIMP.;                  /* _221 */
  format R_FVOCAB COGIMP.;                  /* _222 */
  format R_FVP COGIMP.;                     /* _223 */
  format R_FYR COGIMP.;                     /* _224 */
  format R_GOING YESNO.;                    /* _225 */
  format R_GOINGX R1CESD.;                  /* _226 */
  format R_GOVMD YESNO.;                    /* _227 */
  format R_GOVMR YESNO.;                    /* _228 */
  format R_GOVOT YESNO.;                    /* _229 */
  format R_GOVVA YESNO.;                    /* _230 */
  format R_GRPDOM GRPDOM.;                  /* _233 */
  format R_GRPPOS POSITION.;                /* _235 */
  format R_HALUC PRLOST.;                   /* _237 */
  format R_HEART RAWCOND.;                  /* _239 */
  format R_HEARTE YESNO.;                   /* _240 */
  format R_HEARTF EVERF.;                   /* _241 */
  format R_HEARTQ CONDQ.;                   /* _242 */
  format R_HEARTS YESNOP.;                  /* _243 */
  format R_HECOV1 RHCOV.;                   /* _244 */
  format R_HECOV2 RHCOV.;                   /* _245 */
  format R_HECOV3 RHCOV.;                   /* _246 */
  format R_HERET COVRT.;                    /* _249 */
  format R_HERTR1 COVRT.;                   /* _250 */
  format R_HERTR2 COVRT.;                   /* _251 */
  format R_HERTR3 COVRT.;                   /* _252 */
  format R_HERTS1 COVRT.;                   /* _253 */
  format R_HERTS2 COVRT.;                   /* _254 */
  format R_HERTS3 COVRT.;                   /* _255 */
  format R_HESRC1 RHSRC.;                   /* _256 */
  format R_HESRC2 RHSRC.;                   /* _257 */
  format R_HESRC3 RHSRC.;                   /* _258 */
  format R_HIBP RAWCOND.;                   /* _259 */
  format R_HIBPE YESNO.;                    /* _260 */
  format R_HIBPF EVERF.;                    /* _261 */
  format R_HIBPQ CONDQ.;                    /* _262 */
  format R_HIBPS YESNOP.;                   /* _263 */
  format R_HIGOV YESNO.;                    /* _264 */
  format R_HILTC YESNO.;                    /* _265 */
  format R_HIOTHP HINS.;                    /* _267 */
  format R_HLTC3 HLTC3_.;                   /* _289 */
  format R_HLTC5 HLTC.;                     /* _290 */
  format R_HLTC5F HLTCF.;                   /* _291 */
  format R_HLTHLM YESNOW.;                  /* _292 */
  format R_HOMCAR HOMCAR.;                  /* _293 */
  format R_HOSP YESNO.;                     /* _294 */
  format R_HSWRKF ACTF.;                    /* _297 */
  format R_IFANN INCSUMF.;                  /* _303 */
  format R_IFEARN INCSUMF.;                 /* _304 */
  format R_IFGXFR INCSUMF.;                 /* _305 */
  format R_IFIRAW INCSUMF.;                 /* _306 */
  format R_IFIRAWY1 INCSUMF.;               /* _307 */
  format R_IFPEN INCSUMF.;                  /* _308 */
  format R_IFPENA INCSUMF.;                 /* _309 */
  format R_IFSDI INCIMPF.;                  /* _310 */
  format R_IFSRET INCSUMF.;                 /* _311 */
  format R_IFSSDI INCSUMF.;                 /* _312 */
  format R_IFSSI INCIMPF.;                  /* _313 */
  format R_IFUNEM INCIMPF.;                 /* _314 */
  format R_IFUNWC INCSUMF.;                 /* _315 */
  format R_IFWCMP INCIMPF.;                 /* _316 */
  format R_INHPE YESNO.;                    /* _323 */
  format R_INLBRF UNEMP.;                   /* _329 */
  format R_IWBEGF IWDTF.;                   /* _339 */
  format R_IWENDF IWDTF.;                   /* _342 */
  format R_IWMIDF IWMIDF.;                  /* _346 */
  format R_IWSTAT IWSTAT.;                  /* _347 */
  format R_JCIND INDUS.;                    /* _348 */
  format R_JCINDB INDUSB.;                  /* _349 */
  format R_JCINDC INDUSC.;                  /* _350 */
  format R_JCOCC OCCUP.;                    /* _351 */
  format R_JCOCCA OCCUPA.;                  /* _352 */
  format R_JCOCCB OCCUPB.;                  /* _353 */
  format R_JCOCCC OCCUPC.;                  /* _354 */
  format R_JCPEN JCPEN.;                    /* _355 */
  format R_JCPENF JCPENF.;                  /* _356 */
  format R_JJOBS JJOBS.;                    /* _360 */
  format R_JLIFT JOBREQ.;                   /* _363 */
  format R_JLIND INDUS.;                    /* _364 */
  format R_JLINDB INDUSB.;                  /* _365 */
  format R_JLINDC INDUSC.;                  /* _366 */
  format R_JLOCC OCCUP.;                    /* _368 */
  format R_JLOCCA OCCUPA.;                  /* _369 */
  format R_JLOCCB OCCUPB.;                  /* _370 */
  format R_JLOCCC OCCUPC.;                  /* _371 */
  format R_JLTENF JLTENF.;                  /* _373 */
  format R1_JOG ADL_1C.;                    /* _377 */
  format R2_JOG ADL_2C.;                    /* _378 */
  format R_JOG ADLA.;                       /* _379 */
  format R_JOGA ADLA.;                      /* _380 */
  format R_JOGW ADLA.;                      /* _381 */
  format R_JPHYS JOBREQ.;                   /* _382 */
  format R_JSIGHT JOBREQ.;                  /* _383 */
  format R_JSTOOP JOBREQ.;                  /* _384 */
  format R_JSTRES STRESS.;                  /* _385 */
  format R_JYEARM JYEARM.;                  /* _388 */
  format R_LBASSISTPRB LBOCS.;              /* _391 */
  format R_LBCOMP LBCOMP.;                  /* _392 */
  format R_LBELIG LBELIG.;                  /* _395 */
  format R_LBFAMDRUGPRB LBOCS.;             /* _397 */
  format R_LBFAMHLTHPRB LBOCS.;             /* _398 */
  format R_LBFINPRB LBOCS.;                 /* _399 */
  format R_LBHLTHPRB LBOCS.;                /* _400 */
  format R_LBHOUSEPRB LBOCS.;               /* _401 */
  format R_LBRF LBRF.;                      /* _411 */
  format R_LBRFH LBRF.;                     /* _412 */
  format R_LBRFY LBRFY.;                    /* _413 */
  format R_LBRLTNSHPRB LBOCS.;              /* _414 */
  format R_LBSATCITY LBLFSAT5F.;            /* _415 */
  format R_LBSATFAM LBLFSAT5F.;             /* _416 */
  format R_LBSATFIN LBLFSAT5F.;             /* _417 */
  format R_LBSATHLTH LBLFSAT5F.;            /* _418 */
  format R_LBSATHOME LBLFSAT5F.;            /* _419 */
  format R_LBSATINC LBLFSAT5F.;             /* _420 */
  format R_LBSATLEISURE LBLFSAT5F.;         /* _421 */
  format R_LBSATLIFE LBLFSAT5F.;            /* _422 */
  format R_LBWORKPRB LBOCS.;                /* _425 */
  format R_LHTACT YESNO.;                   /* _428 */
  format R_LIFEIN YESNO.;                   /* _429 */
  format R1_LIFT ADL_1C.;                   /* _430 */
  format R2_LIFT ADL_2C.;                   /* _431 */
  format R_LIFT ADLA.;                      /* _432 */
  format R_LIFTA ADLA.;                     /* _433 */
  format R_LIFTW ADLA.;                     /* _434 */
  format R_LIV75F PRVIWF.;                  /* _441 */
  format R_LIV85F PRVIWF.;                  /* _446 */
  format R_LIV8XF PRVIWF.;                  /* _450 */
  format R_LOST PRLOST.;                    /* _455 */
  format R_LTACTF ACTF.;                    /* _456 */
  format R_LTACTP ACTP.;                    /* _458 */
  format R_LTACTX ACTX.;                    /* _459 */
  format R_LUNG RAWCOND.;                   /* _461 */
  format R_LUNGE YESNO.;                    /* _462 */
  format R_LUNGF EVERF.;                    /* _463 */
  format R_LUNGQ CONDQ.;                    /* _464 */
  format R_LUNGS YESNOP.;                   /* _465 */
  format R_MAMMOG PREVENT.;                 /* _466 */
  format R1_MAP ADL_1C.;                    /* _467 */
  format R2_MAP ADL_2C.;                    /* _468 */
  format R_MAP ADLA.;                       /* _469 */
  format R_MAPA ADLA.;                      /* _470 */
  format R_MAPW ADLA.;                      /* _471 */
  format R_MCWV ADL_1C.;                    /* _473 */
  format R_MCWVW ADLA.;                     /* _474 */
  format R_MDACTX ACTX.;                    /* _475 */
  format R_MDIV NMAR.;                      /* _476 */
  format R_MEALS ADLA.;                     /* _477 */
  format R_MEALSA ADLA.;                    /* _478 */
  format R_MEALSH ADL_7H.;                  /* _479 */
  format R_MEALSR ADL_2I.;                  /* _480 */
  format R2_MEDS ADL_2C.;                   /* _481 */
  format R_MEDS ADLA.;                      /* _482 */
  format R_MEDSA ADLA.;                     /* _483 */
  format R_MEDSH ADL_7H.;                   /* _484 */
  format R_MEDSR ADL_2I.;                   /* _485 */
  format R_MEMRY RAWCOND.;                  /* _486 */
  format R_MEMRYE YESNO.;                   /* _487 */
  format R_MEMRYF MEMRYF.;                  /* _488 */
  format R_MEMRYQ CONDQ.;                   /* _489 */
  format R_MEMRYS YESNOP.;                  /* _490 */
  format R_MEND NMAR.;                      /* _491 */
  format R_MNEV MNEV.;                      /* _494 */
  format R_MO COGCORR.;                     /* _495 */
  format R_MOMLIV YNFAM.;                   /* _499 */
  format R2_MONEY ADL_2C.;                  /* _500 */
  format R_MONEY ADLA.;                     /* _501 */
  format R_MONEYA ADLA.;                    /* _502 */
  format R_MONEYH ADL_7H.;                  /* _503 */
  format R_MONEYR ADL_2I.;                  /* _504 */
  format R_MPART YESNO.;                    /* _505 */
  format R_MRCT NMAR.;                      /* _506 */
  format R_MSTAT MSTATUS.;                  /* _508 */
  format R_MSTATF MSTATF.;                  /* _509 */
  format R_MSTATH MSTATH.;                  /* _510 */
  format R_MWID NMAR.;                      /* _512 */
  format R_NHMLIV YESNO.;                   /* _514 */
  format R_NOTICS COGNA.;                   /* _517 */
  format R_NOVOC COGNA.;                    /* _518 */
  format R_NRSHOM YESNO.;                   /* _519 */
  format R_OOPMDF MDIMPH.;                  /* _525 */
  format R_OOPMDOF MDIMP.;                  /* _527 */
  format R_OUTPT YESNO.;                    /* _528 */
  format R_PAPSM PREVENT.;                  /* _529 */
  format R_PARTD PARTD.;                    /* _530 */
  format R_PENCT PENNF.;                    /* _531 */
  format R_PENIC1 PENCF.;                   /* _532 */
  format R_PENIC2 PENCF.;                   /* _533 */
  format R_PENINC PENYESNO.;                /* _534 */
  format R_PENI_N PENI_N.;                  /* _535 */
  format R_PEXIT PEXIT.;                    /* _536 */
  format R2_PHONE ADL_2C.;                  /* _537 */
  format R_PHONE ADLA.;                     /* _538 */
  format R_PHONEA ADLA.;                    /* _539 */
  format R_PHONEH ADL_7H.;                  /* _540 */
  format R_PHONER ADL_2I.;                  /* _541 */
  format R_PMHGHTS PHYSMEASBIN.;            /* _544 */
  format R_PMWAISTC PHYSMEASBIN.;           /* _546 */
  format R_PMWGHTF FLOORT.;                 /* _548 */
  format R_PMWGHTS PHYSMEASBIN.;            /* _549 */
  format R_PRCHMEM PRCHMEMRY.;              /* _551 */
  format R_PRES COGCORR.;                   /* _552 */
  format R_PRMEM PRMEMRY.;                  /* _553 */
  format R_PROST PREVENT.;                  /* _554 */
  format R_PROXY PROXY.;                    /* _555 */
  format R_PRSRC1 PRSRC.;                   /* _560 */
  format R_PRSRC2 PRSRC.;                   /* _561 */
  format R_PRSRC3 PRSRC.;                   /* _562 */
  format R_PSTMEM COGMEMP.;                 /* _563 */
  format R_PSYCH RAWCOND.;                  /* _564 */
  format R_PSYCHE YESNO.;                   /* _565 */
  format R_PSYCHF EVERF.;                   /* _566 */
  format R_PSYCHQ CONDQ.;                   /* _567 */
  format R_PSYCHS YESNOP.;                  /* _568 */
  format R_PTYP1 PENTYP.;                   /* _569 */
  format R_PTYP2 PENTYP.;                   /* _570 */
  format R_PTYP3 PENTYP.;                   /* _571 */
  format R_PTYP4 PENTYP.;                   /* _572 */
  format R_PTYPD1 PENTYPD.;                 /* _573 */
  format R_PTYPD2 PENTYPD.;                 /* _574 */
  format R_PTYPD3 PENTYPD.;                 /* _575 */
  format R_PTYPD4 PENTYPD.;                 /* _576 */
  format R_PTYPF1 PENYESNO.;                /* _577 */
  format R_PTYPF2 PENYESNO.;                /* _578 */
  format R_PTYPF3 PENYESNO.;                /* _579 */
  format R_PTYPF4 PENYESNO.;                /* _580 */
  format R_PUFFPOS POSITION.;               /* _582 */
  format R1_PUSH ADL_1C.;                   /* _583 */
  format R2_PUSH ADL_2C.;                   /* _584 */
  format R_PUSH ADLA.;                      /* _585 */
  format R_PUSHA ADLA.;                     /* _586 */
  format R_PUSHW ADLA.;                     /* _587 */
  format R_RETEMP RETEMP.;                  /* _589 */
  format R_RETINC RETINC.;                  /* _590 */
  format R_RETLIV RETLIV.;                  /* _591 */
  format R_RETSAT RETSAT.;                  /* _593 */
  format R_RETWRK RETWRK.;                  /* _595 */
  format R_RETWSP RETWSP.;                  /* _596 */
  format R_RISK RISK.;                      /* _598 */
  format R_RISK6 RISKA.;                    /* _599 */
  format R_RYRCMP RYRCMP.;                  /* _603 */
  format R_SADLF SADLF.;                    /* _604 */
  format R_SAMEJOB SAMEJOB.;                /* _605 */
  format R_SAMEMP SAMEMP.;                  /* _606 */
  format R_SAYRET SAYRET.;                  /* _607 */
  format R_SCIS COGCORR.;                   /* _608 */
  format R_SDIAPL DISABW.;                  /* _609 */
  format R_SDIAPP DISABW.;                  /* _612 */
  format R_SDIDEN DISABW.;                  /* _615 */
  format R_SDIREC DISABW.;                  /* _616 */
  format R_SDISTP DISABW.;                  /* _619 */
  format R_SHLT SHLT.;                      /* _623 */
  format R_SHLTCF PRVIWF.;                  /* _625 */
  format R_SHOP ADLA.;                      /* _626 */
  format R_SHOPA ADLA.;                     /* _627 */
  format R_SHOPH ADL_7H.;                   /* _628 */
  format R_SHOPR ADL_2I.;                   /* _629 */
  format R1_SIT ADL_1C.;                    /* _630 */
  format R2_SIT ADL_2C.;                    /* _631 */
  format R_SIT ADLA.;                       /* _632 */
  format R_SITA ADLA.;                      /* _633 */
  format R_SITW ADLA.;                      /* _634 */
  format R_SLEEP RAWCOND.;                  /* _635 */
  format R_SLEEPE YESNO.;                   /* _636 */
  format R_SLEEPQ SLEEPQ.;                  /* _637 */
  format R_SLEEPR YESNO.;                   /* _638 */
  format R_SLEEPS YESNOP.;                  /* _639 */
  format R_SLEEPX R1CESD.;                  /* _640 */
  format R_SLFEMP SLFEMP.;                  /* _641 */
  format R_SLFMEM COGMEMS.;                 /* _642 */
  format R_SMOKEN YESNOS.;                  /* _643 */
  format R_SMOKEV SMOKEV.;                  /* _644 */
  format R_SPCFAC HOMCAR.;                  /* _645 */
  format R_SSAPL DISABW.;                   /* _646 */
  format R_SSAPP DISABW.;                   /* _649 */
  format R_SSDEN DISABW.;                   /* _652 */
  format R_SSDI YESNO.;                     /* _653 */
  format R_SSIAPL DISABW.;                  /* _654 */
  format R_SSIAPP DISABW.;                  /* _657 */
  format R_SSIDEN DISABW.;                  /* _660 */
  format R_SSIREC DISABW.;                  /* _661 */
  format R_SSISTP DISABW.;                  /* _664 */
  format R_SSREC DISABW.;                   /* _667 */
  format R_SSSTP DISABW.;                   /* _670 */
  format R_STATUS COGSTAT.;                 /* _679 */
  format R1_STOOP ADL_1C.;                  /* _680 */
  format R2_STOOP ADL_2C.;                  /* _681 */
  format R_STOOP ADLA.;                     /* _682 */
  format R_STOOPA ADLA.;                    /* _683 */
  format R_STOOPW ADLA.;                    /* _684 */
  format R_STROK RAWCOND.;                  /* _685 */
  format R_STROKE YESNO.;                   /* _686 */
  format R_STROKF EVERF.;                   /* _687 */
  format R_STROKQ CONDQ.;                   /* _688 */
  format R_STROKS YESNOP.;                  /* _689 */
  format R_TIMWLKA TIMWLKA.;                /* _691 */
  format R2_TOILT ADL_2C.;                  /* _693 */
  format R_TOILT ADLA.;                     /* _694 */
  format R_TOILTA ADLA.;                    /* _695 */
  format R2_TOILTH ADL_2H.;                 /* _696 */
  format R_TOILTH ADL_7H.;                  /* _697 */
  format R_TOTMBF MDIMP.;                   /* _698 */
  format R_TOTMBI TOTMBR.;                  /* _699 */
  format R_TOTMDF MEDIMPF.;                 /* _701 */
  format R_TYLTC TYLTC.;                    /* _704 */
  format R_ULCER YESNO.;                    /* _705 */
  format R_UNEMP UNEMP.;                    /* _706 */
  format R_UNION UNION.;                    /* _707 */
  format R_UNIONF FORWARD.;                 /* _708 */
  format R_VGACTF ACTF.;                    /* _709 */
  format R_VGACTP ACTP.;                    /* _711 */
  format R_VGACTX ACTX.;                    /* _712 */
  format R_VIGACT YESNO.;                   /* _713 */
  format R_VOCAB COGMISS.;                  /* _714 */
  format R_VP COGCORR.;                     /* _715 */
  format R1_WALK1 ADL_1C.;                  /* _716 */
  format R2_WALK1 ADL_2C.;                  /* _717 */
  format R_WALK1 ADLA.;                     /* _718 */
  format R_WALK1A ADLA.;                    /* _719 */
  format R_WALK1W ADLA.;                    /* _720 */
  format R1_WALKR ADL_1C.;                  /* _721 */
  format R2_WALKR ADL_2C.;                  /* _722 */
  format R_WALKR ADLA.;                     /* _723 */
  format R_WALKRA ADLA.;                    /* _724 */
  format R_WALKRE EQVPMT.;                  /* _725 */
  format R2_WALKRH ADL_2H.;                 /* _726 */
  format R_WALKRH ADL_7H.;                  /* _727 */
  format R_WALKRW ADLA.;                    /* _728 */
  format R1_WALKS ADL_1C.;                  /* _729 */
  format R2_WALKS ADL_2C.;                  /* _730 */
  format R_WALKS ADLA.;                     /* _731 */
  format R_WALKSA ADLA.;                    /* _732 */
  format R_WALKSW ADLA.;                    /* _733 */
  format R_WANDER PRLOST.;                  /* _734 */
  format R_WGFHR WGF.;                      /* _736 */
  format R_WGFWK WGF.;                      /* _737 */
  format R_WHAPPX R1CESD.;                  /* _740 */
  format R_WHAPPY YESNO.;                   /* _741 */
  format R_WORK WORK.;                      /* _743 */
  format R_WORK2 WORK.;                     /* _744 */
  format R_WORK62F WORKFLAGS.;              /* _746 */
  format R_WORK65F WORKFLAGS.;              /* _748 */
  format R_WORK70AF WORKFLAGS.;             /* _751 */
  format R_WORK70F WORKFLAGS.;              /* _752 */
  format R_YR COGCORR.;                     /* _758 */
%mend format_statements;



%macro readvar1_list;
/* List of variables to be read from input dataset */
  HHID                                      /* 1 */
  PN                                        /* 2 */
  RAHHIDPN                                  /* 6 */
  HACOHORT                                  /* 10 */
%mend readvar1_list;

%macro keep_varlist;
/* Table RLong: List of 758 variables to keep */
  HHID
  PN
  WAVE_NUMBER
  H_HHIDC
  SUBHH
  RAHHIDPN
  INW
  WAVE_NAME
  CYEAR
  HACOHORT
  studyyr
  H_HHID
  S_HHIDPN
  R_ACGTOT
  R_ADL5A
  R_ADL5H
  R_ADL6A
  R_ADL6H
  R_ADLR10
  R_ADLW
  R_AGEM_B
  R_AGEM_E
  R_AGEM_M
  R_AGEY_B
  R_AGEY_E
  R_AGEY_M
  R_AIMR10
  R_ALONE
  R_ALZHE
  R_ALZHEE
  R_ALZHEF
  R_ALZHEQ
  R_ALZHES
  R_AMSTOT
  R_ANS3PQ
  R1_ARMS
  R2_ARMS
  R_ARMS
  R_ARMSA
  R_ARMSW
  R_ARTHR
  R_ARTHRE
  R_ARTHRF
  R_ARTHRQ
  R_ARTHRS
  R_ATR20
  R_BACK
  R_BALFUL
  R_BALFULC
  R_BALFULT
  R_BALSBS
  R_BALSBSC
  R_BALSEMI
  R_BALSEMIC
  R1_BATH
  R2_BATH
  R_BATH
  R_BATHA
  R2_BATHH
  R_BATHH
  R_BATHW
  R1_BED
  R2_BED
  R_BED
  R_BEDA
  R_BEDE
  R2_BEDH
  R_BEDH
  R_BEDW
  R_BEQ100
  R_BEQ10K
  R_BEQ500
  R_BEQANY
  R_BEQLRG
  R_BMI
  R_BPDIA
  R_BPPOS
  R_BPPULS
  R_BPSYS
  R_BREAST
  R_BWC20
  R_BWC86
  R_CACT
  R1_CALC
  R2_CALC
  R_CALCA
  R_CALCW
  R_CANCR
  R_CANCRE
  R_CANCRF
  R_CANCRQ
  R_CANCRS
  R_CENDIV
  R_CENREG
  R_CESD
  R_CESDM
  R1_CHAIR
  R2_CHAIR
  R_CHAIR
  R_CHAIRA
  R_CHAIRW
  R_CHOLST
  R_CLAIMED
  R1_CLIM1
  R2_CLIM1
  R_CLIM1
  R_CLIM1A
  R_CLIM1W
  R1_CLIMS
  R2_CLIMS
  R_CLIMS
  R_CLIMSA
  R_CLIMSW
  R_COGTOT
  R_COMP
  R_COMPW
  R_CONDE
  R_CONDEF
  R_CONDS
  R_CONDSF
  R_CONDSP
  R_COVR
  R_COVRT
  R_COVS
  R_DADAGE
  R_DADLIV
  R_DCBAL1
  R_DCBAL2
  R_DCBAL3
  R_DCBAL4
  R_DCBENE1
  R_DCBENE2
  R_DCBENE3
  R_DCBENE4
  R_DCCONT1
  R_DCCONT2
  R_DCCONT3
  R_DCCONT4
  R_DCMODE1
  R_DCMODE2
  R_DCMODE3
  R_DCMODE4
  R_DCPCT1
  R_DCPCT2
  R_DCPCT3
  R_DCPCT4
  R_DEMEN
  R_DEMENE
  R_DEMENF
  R_DEMENQ
  R_DEMENS
  R_DENTST
  R_DEPRES
  R_DEPREX
  R_DIAB
  R_DIABE
  R_DIABF
  R_DIABQ
  R_DIABS
  R1_DIME
  R2_DIME
  R_DIME
  R_DIMEA
  R_DIMEW
  R_DLRC
  R_DLRC20
  R_DOCTIM
  R_DOCTOR
  R1_DRESS
  R2_DRESS
  R_DRESS
  R_DRESSA
  R2_DRESSH
  R_DRESSH
  R_DRESSW
  R_DRINK
  R_DRINKD
  R_DRINKN
  R_DRINKR
  R_DRUGS
  R_DSIAMT
  R_DSSAMT
  R_DSTAT
  R_DW
  R_DY
  R1_EAT
  R2_EAT
  R_EAT
  R_EATA
  R2_EATH
  R_EATH
  R_EATW
  R_EFFORT
  R_EFFORX
  R_ENLIFE
  R_ENLIFX
  R_FAMR
  R_FBWC20
  R_FBWC86
  R_FCACT
  R_FDLRC
  R_FDW
  R_FDY
  R_FIMRC
  R_FINEA
  R_FINPLN
  R_FINR
  R_FLAG
  R_FLONE
  R_FLONEX
  R_FLUSHT
  R_FMO
  R_FPRES
  R_FPSTME
  R_FSAD
  R_FSADX
  R_FSCIS
  R_FSER7
  R_FSIZE
  R_FSIZEF
  R_FSLFME
  R_FVOCAB
  R_FVP
  R_FYR
  R_GOING
  R_GOINGX
  R_GOVMD
  R_GOVMR
  R_GOVOT
  R_GOVVA
  R_GROSSA
  R_GRP
  R_GRPDOM
  R_GRPL
  R_GRPPOS
  R_GRPR
  R_HALUC
  R_HDLR20
  R_HEART
  R_HEARTE
  R_HEARTF
  R_HEARTQ
  R_HEARTS
  R_HECOV1
  R_HECOV2
  R_HECOV3
  R_HEIGHT
  R_HENUM
  R_HERET
  R_HERTR1
  R_HERTR2
  R_HERTR3
  R_HERTS1
  R_HERTS2
  R_HERTS3
  R_HESRC1
  R_HESRC2
  R_HESRC3
  R_HIBP
  R_HIBPE
  R_HIBPF
  R_HIBPQ
  R_HIBPS
  R_HIGOV
  R_HILTC
  R_HIMR20
  R_HIOTHP
  R_HLPDYSF
  R_HLPDYSNF
  R_HLPDYSP
  R_HLPDYST
  R_HLPDYSU
  R_HLPHRSF
  R_HLPHRSNF
  R_HLPHRSP
  R_HLPHRST
  R_HLPHRSU
  R_HLPPDFA
  R_HLPPDFN
  R_HLPPDNFA
  R_HLPPDNFN
  R_HLPPDTA
  R_HLPPDTN
  R_HLPRFN
  R_HLPRNFN
  R_HLPRPN
  R_HLPRTN
  R_HLPRUN
  R_HLTC3
  R_HLTC5
  R_HLTC5F
  R_HLTHLM
  R_HOMCAR
  R_HOSP
  R_HSPNIT
  R_HSPTIM
  R_HSWRKF
  R_HTR40
  R_IADL5A
  R_IADL5H
  R_IANN
  R_IEARN
  R_IFANN
  R_IFEARN
  R_IFGXFR
  R_IFIRAW
  R_IFIRAWY1
  R_IFPEN
  R_IFPENA
  R_IFSDI
  R_IFSRET
  R_IFSSDI
  R_IFSSI
  R_IFUNEM
  R_IFUNWC
  R_IFWCMP
  R_IGXFR
  R_IIRAW
  R_IIRAWY1
  R_IMRC
  R_IMRC20
  R_INHER
  R_INHPE
  R_INHPFN
  R_INHPNFN
  R_INHPPN
  R_INHPTN
  R_INHPUN
  R_INLBRF
  R_IPEN
  R_IPENA
  R_ISDI
  R_ISRET
  R_ISSDI
  R_ISSI
  R_IUNEM
  R_IUNWC
  R_IWBEG
  R_IWBEGF
  R_IWCMP
  R_IWEND
  R_IWENDF
  R_IWENDM
  R_IWENDY
  R_IWMID
  R_IWMIDF
  R_IWSTAT
  R_JCIND
  R_JCINDB
  R_JCINDC
  R_JCOCC
  R_JCOCCA
  R_JCOCCB
  R_JCOCCC
  R_JCPEN
  R_JCPENF
  R_JCTEN
  R_JHOUR2
  R_JHOURS
  R_JJOBS
  R_JLASTM
  R_JLASTY
  R_JLIFT
  R_JLIND
  R_JLINDB
  R_JLINDC
  R_JLMIS
  R_JLOCC
  R_JLOCCA
  R_JLOCCB
  R_JLOCCC
  R_JLTEN
  R_JLTENF
  R_JMISS
  R_JNJOB
  R_JNJOB5
  R1_JOG
  R2_JOG
  R_JOG
  R_JOGA
  R_JOGW
  R_JPHYS
  R_JSIGHT
  R_JSTOOP
  R_JSTRES
  R_JWEEK2
  R_JWEEKS
  R_JYEARM
  R_JYEARS
  R_LBAGR
  R_LBASSISTPRB
  R_LBCOMP
  R_LBCON10
  R_LBCON5
  R_LBELIG
  R_LBEXT
  R_LBFAMDRUGPRB
  R_LBFAMHLTHPRB
  R_LBFINPRB
  R_LBHLTHPRB
  R_LBHOUSEPRB
  R_LBLONELY11
  R_LBLONELY3
  R_LBNEGAFFECT
  R_LBNEGAFFECT6
  R_LBNEUR
  R_LBONCHRSTR
  R_LBOPEN
  R_LBPOSAFFECT
  R_LBPOSAFFECT6
  R_LBRF
  R_LBRFH
  R_LBRFY
  R_LBRLTNSHPRB
  R_LBSATCITY
  R_LBSATFAM
  R_LBSATFIN
  R_LBSATHLTH
  R_LBSATHOME
  R_LBSATINC
  R_LBSATLEISURE
  R_LBSATLIFE
  R_LBSATWLF
  R_LBWGTR
  R_LBWORKPRB
  R_LGMUSA
  R_LGMUSW
  R_LHTACT
  R_LIFEIN
  R1_LIFT
  R2_LIFT
  R_LIFT
  R_LIFTA
  R_LIFTW
  R_LIV10
  R_LIV10A
  R_LIV10P
  R_LIV10R
  R_LIV75
  R_LIV75C
  R_LIV75F
  R_LIV75P
  R_LIV75R
  R_LIV85
  R_LIV85C
  R_LIV85F
  R_LIV85P
  R_LIV85R
  R_LIV8XC
  R_LIV8XF
  R_LIVBRO
  R_LIVPAR
  R_LIVSIB
  R_LIVSIS
  R_LOST
  R_LTACTF
  R_LTACTN
  R_LTACTP
  R_LTACTX
  R_LTCPRM
  R_LUNG
  R_LUNGE
  R_LUNGF
  R_LUNGQ
  R_LUNGS
  R_MAMMOG
  R1_MAP
  R2_MAP
  R_MAP
  R_MAPA
  R_MAPW
  R_MCURLN
  R_MCWV
  R_MCWVW
  R_MDACTX
  R_MDIV
  R_MEALS
  R_MEALSA
  R_MEALSH
  R_MEALSR
  R2_MEDS
  R_MEDS
  R_MEDSA
  R_MEDSH
  R_MEDSR
  R_MEMRY
  R_MEMRYE
  R_MEMRYF
  R_MEMRYQ
  R_MEMRYS
  R_MEND
  R_MLEN
  R_MLENM
  R_MNEV
  R_MO
  R_MOBILA
  R_MOBILW
  R_MOMAGE
  R_MOMLIV
  R2_MONEY
  R_MONEY
  R_MONEYA
  R_MONEYH
  R_MONEYR
  R_MPART
  R_MRCT
  R_MRPREM
  R_MSTAT
  R_MSTATF
  R_MSTATH
  R_MSTOT
  R_MWID
  R_NHMDAY
  R_NHMLIV
  R_NHMMVM
  R_NHMMVY
  R_NOTICS
  R_NOVOC
  R_NRSHOM
  R_NRSNIT
  R_NRSTIM
  R_NSSCRE
  R_NSSCSE
  R_OOPMD
  R_OOPMDF
  R_OOPMDO
  R_OOPMDOF
  R_OUTPT
  R_PAPSM
  R_PARTD
  R_PENCT
  R_PENIC1
  R_PENIC2
  R_PENINC
  R_PENI_N
  R_PEXIT
  R2_PHONE
  R_PHONE
  R_PHONEA
  R_PHONEH
  R_PHONER
  R_PMBMI
  R_PMHGHT
  R_PMHGHTS
  R_PMWAIST
  R_PMWAISTC
  R_PMWGHT
  R_PMWGHTF
  R_PMWGHTS
  R_PNHM5Y
  R_PRCHMEM
  R_PRES
  R_PRMEM
  R_PROST
  R_PROXY
  R_PRPCNT
  R_PRPRM1
  R_PRPRM2
  R_PRPRM3
  R_PRSRC1
  R_PRSRC2
  R_PRSRC3
  R_PSTMEM
  R_PSYCH
  R_PSYCHE
  R_PSYCHF
  R_PSYCHQ
  R_PSYCHS
  R_PTYP1
  R_PTYP2
  R_PTYP3
  R_PTYP4
  R_PTYPD1
  R_PTYPD2
  R_PTYPD3
  R_PTYPD4
  R_PTYPF1
  R_PTYPF2
  R_PTYPF3
  R_PTYPF4
  R_PUFF
  R_PUFFPOS
  R1_PUSH
  R2_PUSH
  R_PUSH
  R_PUSHA
  R_PUSHW
  R_RETDTWV
  R_RETEMP
  R_RETINC
  R_RETLIV
  R_RETMON
  R_RETSAT
  R_RETWLT
  R_RETWRK
  R_RETWSP
  R_RETYR
  R_RISK
  R_RISK6
  R_RPLNYA
  R_RPLNYR
  R_RXPREM
  R_RYRCMP
  R_SADLF
  R_SAMEJOB
  R_SAMEMP
  R_SAYRET
  R_SCIS
  R_SDIAPL
  R_SDIAPLM
  R_SDIAPLY
  R_SDIAPP
  R_SDIAPPM
  R_SDIAPPY
  R_SDIDEN
  R_SDIREC
  R_SDIRECM
  R_SDIRECY
  R_SDISTP
  R_SDISTPM
  R_SDISTPY
  R_SER7
  R_SHLT
  R_SHLTC
  R_SHLTCF
  R_SHOP
  R_SHOPA
  R_SHOPH
  R_SHOPR
  R1_SIT
  R2_SIT
  R_SIT
  R_SITA
  R_SITW
  R_SLEEP
  R_SLEEPE
  R_SLEEPQ
  R_SLEEPR
  R_SLEEPS
  R_SLEEPX
  R_SLFEMP
  R_SLFMEM
  R_SMOKEN
  R_SMOKEV
  R_SPCFAC
  R_SSAPL
  R_SSAPLM
  R_SSAPLY
  R_SSAPP
  R_SSAPPM
  R_SSAPPY
  R_SSDEN
  R_SSDI
  R_SSIAPL
  R_SSIAPLM
  R_SSIAPLY
  R_SSIAPP
  R_SSIAPPM
  R_SSIAPPY
  R_SSIDEN
  R_SSIREC
  R_SSIRECM
  R_SSIRECY
  R_SSISTP
  R_SSISTPM
  R_SSISTPY
  R_SSREC
  R_SSRECM
  R_SSRECY
  R_SSSTP
  R_SSSTPM
  R_SSSTPY
  R_SSWRER
  R_SSWRNR
  R_SSWRXA
  R_SSWSER
  R_SSWSNR
  R_SSWSXA
  R_STATUS
  R1_STOOP
  R2_STOOP
  R_STOOP
  R_STOOPA
  R_STOOPW
  R_STROK
  R_STROKE
  R_STROKF
  R_STROKQ
  R_STROKS
  R_TIMWLK
  R_TIMWLKA
  R_TLIPRM
  R2_TOILT
  R_TOILT
  R_TOILTA
  R2_TOILTH
  R_TOILTH
  R_TOTMBF
  R_TOTMBI
  R_TOTMD
  R_TOTMDF
  R_TR20
  R_TR40
  R_TYLTC
  R_ULCER
  R_UNEMP
  R_UNION
  R_UNIONF
  R_VGACTF
  R_VGACTN
  R_VGACTP
  R_VGACTX
  R_VIGACT
  R_VOCAB
  R_VP
  R1_WALK1
  R2_WALK1
  R_WALK1
  R_WALK1A
  R_WALK1W
  R1_WALKR
  R2_WALKR
  R_WALKR
  R_WALKRA
  R_WALKRE
  R2_WALKRH
  R_WALKRH
  R_WALKRW
  R1_WALKS
  R2_WALKS
  R_WALKS
  R_WALKSA
  R_WALKSW
  R_WANDER
  R_WEIGHT
  R_WGFHR
  R_WGFWK
  R_WGIHR
  R_WGIWK
  R_WHAPPX
  R_WHAPPY
  R_WLIPRM
  R_WORK
  R_WORK2
  R_WORK62
  R_WORK62F
  R_WORK65
  R_WORK65F
  R_WORK70
  R_WORK70A
  R_WORK70AF
  R_WORK70F
  R_WORKLM
  R_WTCRNH
  R_WTHH
  R_WTRESP
  R_WTR_NH
  R_YR
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
/*  Table RLong: Macro creates and appends `_outtable` data */;
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
  WAVE_NUMBER = ._;
  H_HHIDC = '*';
  SUBHH = '*';
  /* RAHHIDPN variable already included  */
  INW = ._;
  WAVE_NAME = '*';
  CYEAR = '*';
  /* HACOHORT variable already included  */
  studyyr = ._;
  H_HHID = ._;
  S_HHIDPN = ._;
  R_ACGTOT = ._;
  R_ADL5A = ._;
  R_ADL5H = ._;
  R_ADL6A = ._;
  R_ADL6H = ._;
  R_ADLR10 = ._;
  R_ADLW = ._;
  R_AGEM_B = ._;
  R_AGEM_E = ._;
  R_AGEM_M = ._;
  R_AGEY_B = ._;
  R_AGEY_E = ._;
  R_AGEY_M = ._;
  R_AIMR10 = ._;
  R_ALONE = ._;
  R_ALZHE = ._;
  R_ALZHEE = ._;
  R_ALZHEF = ._;
  R_ALZHEQ = ._;
  R_ALZHES = ._;
  R_AMSTOT = ._;
  R_ANS3PQ = ._;
  R1_ARMS = ._;
  R2_ARMS = ._;
  R_ARMS = ._;
  R_ARMSA = ._;
  R_ARMSW = ._;
  R_ARTHR = ._;
  R_ARTHRE = ._;
  R_ARTHRF = ._;
  R_ARTHRQ = ._;
  R_ARTHRS = ._;
  R_ATR20 = ._;
  R_BACK = ._;
  R_BALFUL = ._;
  R_BALFULC = ._;
  R_BALFULT = ._;
  R_BALSBS = ._;
  R_BALSBSC = ._;
  R_BALSEMI = ._;
  R_BALSEMIC = ._;
  R1_BATH = ._;
  R2_BATH = ._;
  R_BATH = ._;
  R_BATHA = ._;
  R2_BATHH = ._;
  R_BATHH = ._;
  R_BATHW = ._;
  R1_BED = ._;
  R2_BED = ._;
  R_BED = ._;
  R_BEDA = ._;
  R_BEDE = ._;
  R2_BEDH = ._;
  R_BEDH = ._;
  R_BEDW = ._;
  R_BEQ100 = ._;
  R_BEQ10K = ._;
  R_BEQ500 = ._;
  R_BEQANY = ._;
  R_BEQLRG = ._;
  R_BMI = ._;
  R_BPDIA = ._;
  R_BPPOS = ._;
  R_BPPULS = ._;
  R_BPSYS = ._;
  R_BREAST = ._;
  R_BWC20 = ._;
  R_BWC86 = ._;
  R_CACT = ._;
  R1_CALC = ._;
  R2_CALC = ._;
  R_CALCA = ._;
  R_CALCW = ._;
  R_CANCR = ._;
  R_CANCRE = ._;
  R_CANCRF = ._;
  R_CANCRQ = ._;
  R_CANCRS = ._;
  R_CENDIV = ._;
  R_CENREG = ._;
  R_CESD = ._;
  R_CESDM = ._;
  R1_CHAIR = ._;
  R2_CHAIR = ._;
  R_CHAIR = ._;
  R_CHAIRA = ._;
  R_CHAIRW = ._;
  R_CHOLST = ._;
  R_CLAIMED = ._;
  R1_CLIM1 = ._;
  R2_CLIM1 = ._;
  R_CLIM1 = ._;
  R_CLIM1A = ._;
  R_CLIM1W = ._;
  R1_CLIMS = ._;
  R2_CLIMS = ._;
  R_CLIMS = ._;
  R_CLIMSA = ._;
  R_CLIMSW = ._;
  R_COGTOT = ._;
  R_COMP = ._;
  R_COMPW = ._;
  R_CONDE = ._;
  R_CONDEF = ._;
  R_CONDS = ._;
  R_CONDSF = ._;
  R_CONDSP = ._;
  R_COVR = ._;
  R_COVRT = ._;
  R_COVS = ._;
  R_DADAGE = ._;
  R_DADLIV = ._;
  R_DCBAL1 = ._;
  R_DCBAL2 = ._;
  R_DCBAL3 = ._;
  R_DCBAL4 = ._;
  R_DCBENE1 = ._;
  R_DCBENE2 = ._;
  R_DCBENE3 = ._;
  R_DCBENE4 = ._;
  R_DCCONT1 = ._;
  R_DCCONT2 = ._;
  R_DCCONT3 = ._;
  R_DCCONT4 = ._;
  R_DCMODE1 = ._;
  R_DCMODE2 = ._;
  R_DCMODE3 = ._;
  R_DCMODE4 = ._;
  R_DCPCT1 = ._;
  R_DCPCT2 = ._;
  R_DCPCT3 = ._;
  R_DCPCT4 = ._;
  R_DEMEN = ._;
  R_DEMENE = ._;
  R_DEMENF = ._;
  R_DEMENQ = ._;
  R_DEMENS = ._;
  R_DENTST = ._;
  R_DEPRES = ._;
  R_DEPREX = ._;
  R_DIAB = ._;
  R_DIABE = ._;
  R_DIABF = ._;
  R_DIABQ = ._;
  R_DIABS = ._;
  R1_DIME = ._;
  R2_DIME = ._;
  R_DIME = ._;
  R_DIMEA = ._;
  R_DIMEW = ._;
  R_DLRC = ._;
  R_DLRC20 = ._;
  R_DOCTIM = ._;
  R_DOCTOR = ._;
  R1_DRESS = ._;
  R2_DRESS = ._;
  R_DRESS = ._;
  R_DRESSA = ._;
  R2_DRESSH = ._;
  R_DRESSH = ._;
  R_DRESSW = ._;
  R_DRINK = ._;
  R_DRINKD = ._;
  R_DRINKN = ._;
  R_DRINKR = ._;
  R_DRUGS = ._;
  R_DSIAMT = ._;
  R_DSSAMT = ._;
  R_DSTAT = ._;
  R_DW = ._;
  R_DY = ._;
  R1_EAT = ._;
  R2_EAT = ._;
  R_EAT = ._;
  R_EATA = ._;
  R2_EATH = ._;
  R_EATH = ._;
  R_EATW = ._;
  R_EFFORT = ._;
  R_EFFORX = ._;
  R_ENLIFE = ._;
  R_ENLIFX = ._;
  R_FAMR = ._;
  R_FBWC20 = ._;
  R_FBWC86 = ._;
  R_FCACT = ._;
  R_FDLRC = ._;
  R_FDW = ._;
  R_FDY = ._;
  R_FIMRC = ._;
  R_FINEA = ._;
  R_FINPLN = ._;
  R_FINR = ._;
  R_FLAG = ._;
  R_FLONE = ._;
  R_FLONEX = ._;
  R_FLUSHT = ._;
  R_FMO = ._;
  R_FPRES = ._;
  R_FPSTME = ._;
  R_FSAD = ._;
  R_FSADX = ._;
  R_FSCIS = ._;
  R_FSER7 = ._;
  R_FSIZE = ._;
  R_FSIZEF = ._;
  R_FSLFME = ._;
  R_FVOCAB = ._;
  R_FVP = ._;
  R_FYR = ._;
  R_GOING = ._;
  R_GOINGX = ._;
  R_GOVMD = ._;
  R_GOVMR = ._;
  R_GOVOT = ._;
  R_GOVVA = ._;
  R_GROSSA = ._;
  R_GRP = ._;
  R_GRPDOM = ._;
  R_GRPL = ._;
  R_GRPPOS = ._;
  R_GRPR = ._;
  R_HALUC = ._;
  R_HDLR20 = ._;
  R_HEART = ._;
  R_HEARTE = ._;
  R_HEARTF = ._;
  R_HEARTQ = ._;
  R_HEARTS = ._;
  R_HECOV1 = ._;
  R_HECOV2 = ._;
  R_HECOV3 = ._;
  R_HEIGHT = ._;
  R_HENUM = ._;
  R_HERET = ._;
  R_HERTR1 = ._;
  R_HERTR2 = ._;
  R_HERTR3 = ._;
  R_HERTS1 = ._;
  R_HERTS2 = ._;
  R_HERTS3 = ._;
  R_HESRC1 = ._;
  R_HESRC2 = ._;
  R_HESRC3 = ._;
  R_HIBP = ._;
  R_HIBPE = ._;
  R_HIBPF = ._;
  R_HIBPQ = ._;
  R_HIBPS = ._;
  R_HIGOV = ._;
  R_HILTC = ._;
  R_HIMR20 = ._;
  R_HIOTHP = ._;
  R_HLPDYSF = ._;
  R_HLPDYSNF = ._;
  R_HLPDYSP = ._;
  R_HLPDYST = ._;
  R_HLPDYSU = ._;
  R_HLPHRSF = ._;
  R_HLPHRSNF = ._;
  R_HLPHRSP = ._;
  R_HLPHRST = ._;
  R_HLPHRSU = ._;
  R_HLPPDFA = ._;
  R_HLPPDFN = ._;
  R_HLPPDNFA = ._;
  R_HLPPDNFN = ._;
  R_HLPPDTA = ._;
  R_HLPPDTN = ._;
  R_HLPRFN = ._;
  R_HLPRNFN = ._;
  R_HLPRPN = ._;
  R_HLPRTN = ._;
  R_HLPRUN = ._;
  R_HLTC3 = ._;
  R_HLTC5 = ._;
  R_HLTC5F = ._;
  R_HLTHLM = ._;
  R_HOMCAR = ._;
  R_HOSP = ._;
  R_HSPNIT = ._;
  R_HSPTIM = ._;
  R_HSWRKF = ._;
  R_HTR40 = ._;
  R_IADL5A = ._;
  R_IADL5H = ._;
  R_IANN = ._;
  R_IEARN = ._;
  R_IFANN = ._;
  R_IFEARN = ._;
  R_IFGXFR = ._;
  R_IFIRAW = ._;
  R_IFIRAWY1 = ._;
  R_IFPEN = ._;
  R_IFPENA = ._;
  R_IFSDI = ._;
  R_IFSRET = ._;
  R_IFSSDI = ._;
  R_IFSSI = ._;
  R_IFUNEM = ._;
  R_IFUNWC = ._;
  R_IFWCMP = ._;
  R_IGXFR = ._;
  R_IIRAW = ._;
  R_IIRAWY1 = ._;
  R_IMRC = ._;
  R_IMRC20 = ._;
  R_INHER = ._;
  R_INHPE = ._;
  R_INHPFN = ._;
  R_INHPNFN = ._;
  R_INHPPN = ._;
  R_INHPTN = ._;
  R_INHPUN = ._;
  R_INLBRF = ._;
  R_IPEN = ._;
  R_IPENA = ._;
  R_ISDI = ._;
  R_ISRET = ._;
  R_ISSDI = ._;
  R_ISSI = ._;
  R_IUNEM = ._;
  R_IUNWC = ._;
  R_IWBEG = ._;
  R_IWBEGF = ._;
  R_IWCMP = ._;
  R_IWEND = ._;
  R_IWENDF = ._;
  R_IWENDM = ._;
  R_IWENDY = ._;
  R_IWMID = ._;
  R_IWMIDF = ._;
  R_IWSTAT = ._;
  R_JCIND = ._;
  R_JCINDB = ._;
  R_JCINDC = ._;
  R_JCOCC = ._;
  R_JCOCCA = ._;
  R_JCOCCB = ._;
  R_JCOCCC = ._;
  R_JCPEN = ._;
  R_JCPENF = ._;
  R_JCTEN = ._;
  R_JHOUR2 = ._;
  R_JHOURS = ._;
  R_JJOBS = ._;
  R_JLASTM = ._;
  R_JLASTY = ._;
  R_JLIFT = ._;
  R_JLIND = ._;
  R_JLINDB = ._;
  R_JLINDC = ._;
  R_JLMIS = ._;
  R_JLOCC = ._;
  R_JLOCCA = ._;
  R_JLOCCB = ._;
  R_JLOCCC = ._;
  R_JLTEN = ._;
  R_JLTENF = ._;
  R_JMISS = ._;
  R_JNJOB = ._;
  R_JNJOB5 = ._;
  R1_JOG = ._;
  R2_JOG = ._;
  R_JOG = ._;
  R_JOGA = ._;
  R_JOGW = ._;
  R_JPHYS = ._;
  R_JSIGHT = ._;
  R_JSTOOP = ._;
  R_JSTRES = ._;
  R_JWEEK2 = ._;
  R_JWEEKS = ._;
  R_JYEARM = ._;
  R_JYEARS = ._;
  R_LBAGR = ._;
  R_LBASSISTPRB = ._;
  R_LBCOMP = ._;
  R_LBCON10 = ._;
  R_LBCON5 = ._;
  R_LBELIG = ._;
  R_LBEXT = ._;
  R_LBFAMDRUGPRB = ._;
  R_LBFAMHLTHPRB = ._;
  R_LBFINPRB = ._;
  R_LBHLTHPRB = ._;
  R_LBHOUSEPRB = ._;
  R_LBLONELY11 = ._;
  R_LBLONELY3 = ._;
  R_LBNEGAFFECT = ._;
  R_LBNEGAFFECT6 = ._;
  R_LBNEUR = ._;
  R_LBONCHRSTR = ._;
  R_LBOPEN = ._;
  R_LBPOSAFFECT = ._;
  R_LBPOSAFFECT6 = ._;
  R_LBRF = ._;
  R_LBRFH = ._;
  R_LBRFY = ._;
  R_LBRLTNSHPRB = ._;
  R_LBSATCITY = ._;
  R_LBSATFAM = ._;
  R_LBSATFIN = ._;
  R_LBSATHLTH = ._;
  R_LBSATHOME = ._;
  R_LBSATINC = ._;
  R_LBSATLEISURE = ._;
  R_LBSATLIFE = ._;
  R_LBSATWLF = ._;
  R_LBWGTR = ._;
  R_LBWORKPRB = ._;
  R_LGMUSA = ._;
  R_LGMUSW = ._;
  R_LHTACT = ._;
  R_LIFEIN = ._;
  R1_LIFT = ._;
  R2_LIFT = ._;
  R_LIFT = ._;
  R_LIFTA = ._;
  R_LIFTW = ._;
  R_LIV10 = ._;
  R_LIV10A = ._;
  R_LIV10P = ._;
  R_LIV10R = ._;
  R_LIV75 = ._;
  R_LIV75C = ._;
  R_LIV75F = ._;
  R_LIV75P = ._;
  R_LIV75R = ._;
  R_LIV85 = ._;
  R_LIV85C = ._;
  R_LIV85F = ._;
  R_LIV85P = ._;
  R_LIV85R = ._;
  R_LIV8XC = ._;
  R_LIV8XF = ._;
  R_LIVBRO = ._;
  R_LIVPAR = ._;
  R_LIVSIB = ._;
  R_LIVSIS = ._;
  R_LOST = ._;
  R_LTACTF = ._;
  R_LTACTN = ._;
  R_LTACTP = ._;
  R_LTACTX = ._;
  R_LTCPRM = ._;
  R_LUNG = ._;
  R_LUNGE = ._;
  R_LUNGF = ._;
  R_LUNGQ = ._;
  R_LUNGS = ._;
  R_MAMMOG = ._;
  R1_MAP = ._;
  R2_MAP = ._;
  R_MAP = ._;
  R_MAPA = ._;
  R_MAPW = ._;
  R_MCURLN = ._;
  R_MCWV = ._;
  R_MCWVW = ._;
  R_MDACTX = ._;
  R_MDIV = ._;
  R_MEALS = ._;
  R_MEALSA = ._;
  R_MEALSH = ._;
  R_MEALSR = ._;
  R2_MEDS = ._;
  R_MEDS = ._;
  R_MEDSA = ._;
  R_MEDSH = ._;
  R_MEDSR = ._;
  R_MEMRY = ._;
  R_MEMRYE = ._;
  R_MEMRYF = ._;
  R_MEMRYQ = ._;
  R_MEMRYS = ._;
  R_MEND = ._;
  R_MLEN = ._;
  R_MLENM = ._;
  R_MNEV = ._;
  R_MO = ._;
  R_MOBILA = ._;
  R_MOBILW = ._;
  R_MOMAGE = ._;
  R_MOMLIV = ._;
  R2_MONEY = ._;
  R_MONEY = ._;
  R_MONEYA = ._;
  R_MONEYH = ._;
  R_MONEYR = ._;
  R_MPART = ._;
  R_MRCT = ._;
  R_MRPREM = ._;
  R_MSTAT = ._;
  R_MSTATF = ._;
  R_MSTATH = ._;
  R_MSTOT = ._;
  R_MWID = ._;
  R_NHMDAY = ._;
  R_NHMLIV = ._;
  R_NHMMVM = ._;
  R_NHMMVY = ._;
  R_NOTICS = ._;
  R_NOVOC = ._;
  R_NRSHOM = ._;
  R_NRSNIT = ._;
  R_NRSTIM = ._;
  R_NSSCRE = ._;
  R_NSSCSE = ._;
  R_OOPMD = ._;
  R_OOPMDF = ._;
  R_OOPMDO = ._;
  R_OOPMDOF = ._;
  R_OUTPT = ._;
  R_PAPSM = ._;
  R_PARTD = ._;
  R_PENCT = ._;
  R_PENIC1 = ._;
  R_PENIC2 = ._;
  R_PENINC = ._;
  R_PENI_N = ._;
  R_PEXIT = ._;
  R2_PHONE = ._;
  R_PHONE = ._;
  R_PHONEA = ._;
  R_PHONEH = ._;
  R_PHONER = ._;
  R_PMBMI = ._;
  R_PMHGHT = ._;
  R_PMHGHTS = ._;
  R_PMWAIST = ._;
  R_PMWAISTC = ._;
  R_PMWGHT = ._;
  R_PMWGHTF = ._;
  R_PMWGHTS = ._;
  R_PNHM5Y = ._;
  R_PRCHMEM = ._;
  R_PRES = ._;
  R_PRMEM = ._;
  R_PROST = ._;
  R_PROXY = ._;
  R_PRPCNT = ._;
  R_PRPRM1 = ._;
  R_PRPRM2 = ._;
  R_PRPRM3 = ._;
  R_PRSRC1 = ._;
  R_PRSRC2 = ._;
  R_PRSRC3 = ._;
  R_PSTMEM = ._;
  R_PSYCH = ._;
  R_PSYCHE = ._;
  R_PSYCHF = ._;
  R_PSYCHQ = ._;
  R_PSYCHS = ._;
  R_PTYP1 = ._;
  R_PTYP2 = ._;
  R_PTYP3 = ._;
  R_PTYP4 = ._;
  R_PTYPD1 = ._;
  R_PTYPD2 = ._;
  R_PTYPD3 = ._;
  R_PTYPD4 = ._;
  R_PTYPF1 = ._;
  R_PTYPF2 = ._;
  R_PTYPF3 = ._;
  R_PTYPF4 = ._;
  R_PUFF = ._;
  R_PUFFPOS = ._;
  R1_PUSH = ._;
  R2_PUSH = ._;
  R_PUSH = ._;
  R_PUSHA = ._;
  R_PUSHW = ._;
  R_RETDTWV = ._;
  R_RETEMP = ._;
  R_RETINC = ._;
  R_RETLIV = ._;
  R_RETMON = ._;
  R_RETSAT = ._;
  R_RETWLT = ._;
  R_RETWRK = ._;
  R_RETWSP = ._;
  R_RETYR = ._;
  R_RISK = ._;
  R_RISK6 = ._;
  R_RPLNYA = ._;
  R_RPLNYR = ._;
  R_RXPREM = ._;
  R_RYRCMP = ._;
  R_SADLF = ._;
  R_SAMEJOB = ._;
  R_SAMEMP = ._;
  R_SAYRET = ._;
  R_SCIS = ._;
  R_SDIAPL = ._;
  R_SDIAPLM = ._;
  R_SDIAPLY = ._;
  R_SDIAPP = ._;
  R_SDIAPPM = ._;
  R_SDIAPPY = ._;
  R_SDIDEN = ._;
  R_SDIREC = ._;
  R_SDIRECM = ._;
  R_SDIRECY = ._;
  R_SDISTP = ._;
  R_SDISTPM = ._;
  R_SDISTPY = ._;
  R_SER7 = ._;
  R_SHLT = ._;
  R_SHLTC = ._;
  R_SHLTCF = ._;
  R_SHOP = ._;
  R_SHOPA = ._;
  R_SHOPH = ._;
  R_SHOPR = ._;
  R1_SIT = ._;
  R2_SIT = ._;
  R_SIT = ._;
  R_SITA = ._;
  R_SITW = ._;
  R_SLEEP = ._;
  R_SLEEPE = ._;
  R_SLEEPQ = ._;
  R_SLEEPR = ._;
  R_SLEEPS = ._;
  R_SLEEPX = ._;
  R_SLFEMP = ._;
  R_SLFMEM = ._;
  R_SMOKEN = ._;
  R_SMOKEV = ._;
  R_SPCFAC = ._;
  R_SSAPL = ._;
  R_SSAPLM = ._;
  R_SSAPLY = ._;
  R_SSAPP = ._;
  R_SSAPPM = ._;
  R_SSAPPY = ._;
  R_SSDEN = ._;
  R_SSDI = ._;
  R_SSIAPL = ._;
  R_SSIAPLM = ._;
  R_SSIAPLY = ._;
  R_SSIAPP = ._;
  R_SSIAPPM = ._;
  R_SSIAPPY = ._;
  R_SSIDEN = ._;
  R_SSIREC = ._;
  R_SSIRECM = ._;
  R_SSIRECY = ._;
  R_SSISTP = ._;
  R_SSISTPM = ._;
  R_SSISTPY = ._;
  R_SSREC = ._;
  R_SSRECM = ._;
  R_SSRECY = ._;
  R_SSSTP = ._;
  R_SSSTPM = ._;
  R_SSSTPY = ._;
  R_SSWRER = ._;
  R_SSWRNR = ._;
  R_SSWRXA = ._;
  R_SSWSER = ._;
  R_SSWSNR = ._;
  R_SSWSXA = ._;
  R_STATUS = ._;
  R1_STOOP = ._;
  R2_STOOP = ._;
  R_STOOP = ._;
  R_STOOPA = ._;
  R_STOOPW = ._;
  R_STROK = ._;
  R_STROKE = ._;
  R_STROKF = ._;
  R_STROKQ = ._;
  R_STROKS = ._;
  R_TIMWLK = ._;
  R_TIMWLKA = ._;
  R_TLIPRM = ._;
  R2_TOILT = ._;
  R_TOILT = ._;
  R_TOILTA = ._;
  R2_TOILTH = ._;
  R_TOILTH = ._;
  R_TOTMBF = ._;
  R_TOTMBI = ._;
  R_TOTMD = ._;
  R_TOTMDF = ._;
  R_TR20 = ._;
  R_TR40 = ._;
  R_TYLTC = ._;
  R_ULCER = ._;
  R_UNEMP = ._;
  R_UNION = ._;
  R_UNIONF = ._;
  R_VGACTF = ._;
  R_VGACTN = ._;
  R_VGACTP = ._;
  R_VGACTX = ._;
  R_VIGACT = ._;
  R_VOCAB = ._;
  R_VP = ._;
  R1_WALK1 = ._;
  R2_WALK1 = ._;
  R_WALK1 = ._;
  R_WALK1A = ._;
  R_WALK1W = ._;
  R1_WALKR = ._;
  R2_WALKR = ._;
  R_WALKR = ._;
  R_WALKRA = ._;
  R_WALKRE = ._;
  R2_WALKRH = ._;
  R_WALKRH = ._;
  R_WALKRW = ._;
  R1_WALKS = ._;
  R2_WALKS = ._;
  R_WALKS = ._;
  R_WALKSA = ._;
  R_WALKSW = ._;
  R_WANDER = ._;
  R_WEIGHT = ._;
  R_WGFHR = ._;
  R_WGFWK = ._;
  R_WGIHR = ._;
  R_WGIWK = ._;
  R_WHAPPX = ._;
  R_WHAPPY = ._;
  R_WLIPRM = ._;
  R_WORK = ._;
  R_WORK2 = ._;
  R_WORK62 = ._;
  R_WORK62F = ._;
  R_WORK65 = ._;
  R_WORK65F = ._;
  R_WORK70 = ._;
  R_WORK70A = ._;
  R_WORK70AF = ._;
  R_WORK70F = ._;
  R_WORKLM = ._;
  R_WTCRNH = ._;
  R_WTHH = ._;
  R_WTRESP = ._;
  R_WTR_NH = ._;
  R_YR = ._;
%mend initvars;

%macro readvar2_list;
/* List of variables to be read from input dataset */
/*-- WAVE_NUMBER   --*/
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
/*-- WAVE_NAME   --*/
/*-- CYEAR   --*/
/*-- studyyr   --*/
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
/*-- S_HHIDPN   --*/
S1HHIDPN
S2HHIDPN
S3HHIDPN
S4HHIDPN
S5HHIDPN
S6HHIDPN
S7HHIDPN
S8HHIDPN
S9HHIDPN
S10HHIDPN
S11HHIDPN
S12HHIDPN
S13HHIDPN
S14HHIDPN
S15HHIDPN
/*-- R_ACGTOT   --*/
R2ACGTOT
/*-- R_ADL5A   --*/
R2ADL5A
R3ADL5A
R4ADL5A
R5ADL5A
R6ADL5A
R7ADL5A
R8ADL5A
R9ADL5A
R10ADL5A
R11ADL5A
R12ADL5A
R13ADL5A
R14ADL5A
R15ADL5A
/*-- R_ADL5H   --*/
R2ADL5H
R3ADL5H
R4ADL5H
R5ADL5H
R6ADL5H
R7ADL5H
R8ADL5H
R9ADL5H
R10ADL5H
R11ADL5H
R12ADL5H
R13ADL5H
R14ADL5H
R15ADL5H
/*-- R_ADL6A   --*/
R2ADL6A
R3ADL6A
R4ADL6A
R5ADL6A
R6ADL6A
R7ADL6A
R8ADL6A
R9ADL6A
R10ADL6A
R11ADL6A
R12ADL6A
R13ADL6A
R14ADL6A
R15ADL6A
/*-- R_ADL6H   --*/
R2ADL6H
R3ADL6H
R4ADL6H
R5ADL6H
R6ADL6H
R7ADL6H
R8ADL6H
R9ADL6H
R10ADL6H
R11ADL6H
R12ADL6H
R13ADL6H
R14ADL6H
R15ADL6H
/*-- R_ADLR10   --*/
R2ADLR10
/*-- R_ADLW   --*/
R1ADLW
/*-- R_AGEM_B   --*/
R1AGEM_B
R2AGEM_B
R3AGEM_B
R4AGEM_B
R5AGEM_B
R6AGEM_B
R7AGEM_B
R8AGEM_B
R9AGEM_B
R10AGEM_B
R11AGEM_B
R12AGEM_B
R13AGEM_B
R14AGEM_B
R15AGEM_B
/*-- R_AGEM_E   --*/
R1AGEM_E
R2AGEM_E
R3AGEM_E
R4AGEM_E
R5AGEM_E
R6AGEM_E
R7AGEM_E
R8AGEM_E
R9AGEM_E
R10AGEM_E
R11AGEM_E
R12AGEM_E
R13AGEM_E
R14AGEM_E
R15AGEM_E
/*-- R_AGEM_M   --*/
R1AGEM_M
R2AGEM_M
R3AGEM_M
R4AGEM_M
R5AGEM_M
R6AGEM_M
R7AGEM_M
R8AGEM_M
R9AGEM_M
R10AGEM_M
R11AGEM_M
R12AGEM_M
R13AGEM_M
R14AGEM_M
R15AGEM_M
/*-- R_AGEY_B   --*/
R1AGEY_B
R2AGEY_B
R3AGEY_B
R4AGEY_B
R5AGEY_B
R6AGEY_B
R7AGEY_B
R8AGEY_B
R9AGEY_B
R10AGEY_B
R11AGEY_B
R12AGEY_B
R13AGEY_B
R14AGEY_B
R15AGEY_B
/*-- R_AGEY_E   --*/
R1AGEY_E
R2AGEY_E
R3AGEY_E
R4AGEY_E
R5AGEY_E
R6AGEY_E
R7AGEY_E
R8AGEY_E
R9AGEY_E
R10AGEY_E
R11AGEY_E
R12AGEY_E
R13AGEY_E
R14AGEY_E
R15AGEY_E
/*-- R_AGEY_M   --*/
R1AGEY_M
R2AGEY_M
R3AGEY_M
R4AGEY_M
R5AGEY_M
R6AGEY_M
R7AGEY_M
R8AGEY_M
R9AGEY_M
R10AGEY_M
R11AGEY_M
R12AGEY_M
R13AGEY_M
R14AGEY_M
R15AGEY_M
/*-- R_AIMR10   --*/
R2AIMR10
/*-- R_ALONE   --*/
R2ALONE
R3ALONE
R4ALONE
R5ALONE
R6ALONE
R7ALONE
R8ALONE
R9ALONE
R10ALONE
R11ALONE
R12ALONE
R13ALONE
R14ALONE
R15ALONE
/*-- R_ALZHE   --*/
R10ALZHE
R11ALZHE
R12ALZHE
R13ALZHE
R14ALZHE
R15ALZHE
/*-- R_ALZHEE   --*/
R10ALZHEE
R11ALZHEE
R12ALZHEE
R13ALZHEE
R14ALZHEE
R15ALZHEE
/*-- R_ALZHEF   --*/
R11ALZHEF
R12ALZHEF
R13ALZHEF
R14ALZHEF
R15ALZHEF
/*-- R_ALZHEQ   --*/
R10ALZHEQ
R11ALZHEQ
R12ALZHEQ
R13ALZHEQ
R14ALZHEQ
R15ALZHEQ
/*-- R_ALZHES   --*/
R11ALZHES
R12ALZHES
R13ALZHES
R14ALZHES
R15ALZHES
/*-- R_AMSTOT   --*/
R2AMSTOT
/*-- R_ANS3PQ   --*/
R3ANS3PQ
R4ANS3PQ
R5ANS3PQ
R6ANS3PQ
R7ANS3PQ
R8ANS3PQ
R9ANS3PQ
R10ANS3PQ
R11ANS3PQ
R12ANS3PQ
R13ANS3PQ
R14ANS3PQ
R15ANS3PQ
/*-- R1_ARMS   --*/
R1ARMS
/*-- R2_ARMS   --*/
R2ARMS
/*-- R_ARMS   --*/
R3ARMS
R4ARMS
R5ARMS
R6ARMS
R7ARMS
R8ARMS
R9ARMS
R10ARMS
R11ARMS
R12ARMS
R13ARMS
R14ARMS
R15ARMS
/*-- R_ARMSA   --*/
R2ARMSA
R3ARMSA
R4ARMSA
R5ARMSA
R6ARMSA
R7ARMSA
R8ARMSA
R9ARMSA
R10ARMSA
R11ARMSA
R12ARMSA
R13ARMSA
R14ARMSA
R15ARMSA
/*-- R_ARMSW   --*/
R1ARMSW
/*-- R_ARTHR   --*/
R1ARTHR
R2ARTHR
R3ARTHR
R4ARTHR
R5ARTHR
R6ARTHR
R7ARTHR
R8ARTHR
R9ARTHR
R10ARTHR
R11ARTHR
R12ARTHR
R13ARTHR
R14ARTHR
R15ARTHR
/*-- R_ARTHRE   --*/
R1ARTHRE
R2ARTHRE
R3ARTHRE
R4ARTHRE
R5ARTHRE
R6ARTHRE
R7ARTHRE
R8ARTHRE
R9ARTHRE
R10ARTHRE
R11ARTHRE
R12ARTHRE
R13ARTHRE
R14ARTHRE
R15ARTHRE
/*-- R_ARTHRF   --*/
R1ARTHRF
R2ARTHRF
R3ARTHRF
R4ARTHRF
R5ARTHRF
R6ARTHRF
R7ARTHRF
R8ARTHRF
R9ARTHRF
R10ARTHRF
R11ARTHRF
R12ARTHRF
R13ARTHRF
R14ARTHRF
R15ARTHRF
/*-- R_ARTHRQ   --*/
R1ARTHRQ
R2ARTHRQ
R3ARTHRQ
R4ARTHRQ
R5ARTHRQ
R6ARTHRQ
R7ARTHRQ
R8ARTHRQ
R9ARTHRQ
R10ARTHRQ
R11ARTHRQ
R12ARTHRQ
R13ARTHRQ
R14ARTHRQ
R15ARTHRQ
/*-- R_ARTHRS   --*/
R2ARTHRS
R3ARTHRS
R4ARTHRS
R5ARTHRS
R6ARTHRS
R7ARTHRS
R8ARTHRS
R9ARTHRS
R10ARTHRS
R11ARTHRS
R12ARTHRS
R13ARTHRS
R14ARTHRS
R15ARTHRS
/*-- R_ATR20   --*/
R2ATR20
/*-- R_BACK   --*/
R1BACK
R2BACK
R3BACK
R4BACK
R5BACK
R6BACK
R7BACK
R8BACK
R9BACK
R10BACK
R11BACK
R12BACK
R13BACK
R14BACK
R15BACK
/*-- R_BALFUL   --*/
R8BALFUL
R9BALFUL
R10BALFUL
R11BALFUL
R12BALFUL
R13BALFUL
R14BALFUL
/*-- R_BALFULC   --*/
R8BALFULC
R9BALFULC
R10BALFULC
R11BALFULC
R12BALFULC
R13BALFULC
R14BALFULC
/*-- R_BALFULT   --*/
R8BALFULT
R9BALFULT
R10BALFULT
R11BALFULT
R12BALFULT
R13BALFULT
R14BALFULT
/*-- R_BALSBS   --*/
R8BALSBS
R9BALSBS
R10BALSBS
R11BALSBS
R12BALSBS
R13BALSBS
R14BALSBS
/*-- R_BALSBSC   --*/
R8BALSBSC
R9BALSBSC
R10BALSBSC
R11BALSBSC
R12BALSBSC
R13BALSBSC
R14BALSBSC
/*-- R_BALSEMI   --*/
R8BALSEMI
R9BALSEMI
R10BALSEMI
R11BALSEMI
R12BALSEMI
R13BALSEMI
R14BALSEMI
/*-- R_BALSEMIC   --*/
R8BALSEMIC
R9BALSEMIC
R10BALSEMIC
R11BALSEMIC
R12BALSEMIC
R13BALSEMIC
R14BALSEMIC
/*-- R1_BATH   --*/
R1BATH
/*-- R2_BATH   --*/
R2BATH
/*-- R_BATH   --*/
R3BATH
R4BATH
R5BATH
R6BATH
R7BATH
R8BATH
R9BATH
R10BATH
R11BATH
R12BATH
R13BATH
R14BATH
R15BATH
/*-- R_BATHA   --*/
R2BATHA
R3BATHA
R4BATHA
R5BATHA
R6BATHA
R7BATHA
R8BATHA
R9BATHA
R10BATHA
R11BATHA
R12BATHA
R13BATHA
R14BATHA
R15BATHA
/*-- R2_BATHH   --*/
R2BATHH
/*-- R_BATHH   --*/
R3BATHH
R4BATHH
R5BATHH
R6BATHH
R7BATHH
R8BATHH
R9BATHH
R10BATHH
R11BATHH
R12BATHH
R13BATHH
R14BATHH
R15BATHH
/*-- R_BATHW   --*/
R1BATHW
/*-- R1_BED   --*/
R1BED
/*-- R2_BED   --*/
R2BED
/*-- R_BED   --*/
R3BED
R4BED
R5BED
R6BED
R7BED
R8BED
R9BED
R10BED
R11BED
R12BED
R13BED
R14BED
R15BED
/*-- R_BEDA   --*/
R2BEDA
R3BEDA
R4BEDA
R5BEDA
R6BEDA
R7BEDA
R8BEDA
R9BEDA
R10BEDA
R11BEDA
R12BEDA
R13BEDA
R14BEDA
R15BEDA
/*-- R_BEDE   --*/
R2BEDE
R3BEDE
R4BEDE
R5BEDE
R6BEDE
R7BEDE
R8BEDE
R9BEDE
R10BEDE
R11BEDE
R12BEDE
R13BEDE
R14BEDE
R15BEDE
/*-- R2_BEDH   --*/
R2BEDH
/*-- R_BEDH   --*/
R3BEDH
R4BEDH
R5BEDH
R6BEDH
R7BEDH
R8BEDH
R9BEDH
R10BEDH
R11BEDH
R12BEDH
R13BEDH
R14BEDH
R15BEDH
/*-- R_BEDW   --*/
R1BEDW
/*-- R_BEQ100   --*/
R2BEQ100
R3BEQ100
R4BEQ100
R5BEQ100
R6BEQ100
R7BEQ100
R8BEQ100
R9BEQ100
R10BEQ100
R11BEQ100
R12BEQ100
R13BEQ100
R14BEQ100
R15BEQ100
/*-- R_BEQ10K   --*/
R2BEQ10K
R3BEQ10K
R4BEQ10K
R5BEQ10K
R6BEQ10K
R7BEQ10K
R8BEQ10K
R9BEQ10K
R10BEQ10K
R11BEQ10K
R12BEQ10K
R13BEQ10K
R14BEQ10K
R15BEQ10K
/*-- R_BEQ500   --*/
R6BEQ500
R7BEQ500
R8BEQ500
R9BEQ500
R10BEQ500
R11BEQ500
R12BEQ500
R13BEQ500
R14BEQ500
R15BEQ500
/*-- R_BEQANY   --*/
R2BEQANY
R3BEQANY
R4BEQANY
R5BEQANY
R6BEQANY
R7BEQANY
R8BEQANY
R9BEQANY
R10BEQANY
R11BEQANY
R12BEQANY
R13BEQANY
R14BEQANY
R15BEQANY
/*-- R_BEQLRG   --*/
R1BEQLRG
/*-- R_BMI   --*/
R1BMI
R2BMI
R3BMI
R4BMI
R5BMI
R6BMI
R7BMI
R8BMI
R9BMI
R10BMI
R11BMI
R12BMI
R13BMI
R14BMI
R15BMI
/*-- R_BPDIA   --*/
R8BPDIA
R9BPDIA
R10BPDIA
R11BPDIA
R12BPDIA
R13BPDIA
R14BPDIA
/*-- R_BPPOS   --*/
R8BPPOS
R9BPPOS
R10BPPOS
R11BPPOS
R12BPPOS
R13BPPOS
R14BPPOS
/*-- R_BPPULS   --*/
R8BPPULS
R9BPPULS
R10BPPULS
R11BPPULS
R12BPPULS
R13BPPULS
R14BPPULS
/*-- R_BPSYS   --*/
R8BPSYS
R9BPSYS
R10BPSYS
R11BPSYS
R12BPSYS
R13BPSYS
R14BPSYS
/*-- R_BREAST   --*/
R3BREAST
R4BREAST
R5BREAST
R6BREAST
R7BREAST
R8BREAST
R9BREAST
R10BREAST
/*-- R_BWC20   --*/
R2BWC20
R3BWC20
R4BWC20
R5BWC20
R6BWC20
R7BWC20
R8BWC20
R9BWC20
R10BWC20
R11BWC20
R12BWC20
R13BWC20
/*-- R_BWC86   --*/
R3BWC86
R4BWC86
R5BWC86
R6BWC86
/*-- R_CACT   --*/
R2CACT
R3CACT
R4CACT
R5CACT
R6CACT
R7CACT
R8CACT
R9CACT
R10CACT
R11CACT
R12CACT
R13CACT
/*-- R1_CALC   --*/
R1CALC
/*-- R2_CALC   --*/
R2CALC
/*-- R_CALCA   --*/
R2CALCA
/*-- R_CALCW   --*/
R1CALCW
/*-- R_CANCR   --*/
R1CANCR
R2CANCR
R3CANCR
R4CANCR
R5CANCR
R6CANCR
R7CANCR
R8CANCR
R9CANCR
R10CANCR
R11CANCR
R12CANCR
R13CANCR
R14CANCR
R15CANCR
/*-- R_CANCRE   --*/
R1CANCRE
R2CANCRE
R3CANCRE
R4CANCRE
R5CANCRE
R6CANCRE
R7CANCRE
R8CANCRE
R9CANCRE
R10CANCRE
R11CANCRE
R12CANCRE
R13CANCRE
R14CANCRE
R15CANCRE
/*-- R_CANCRF   --*/
R1CANCRF
R2CANCRF
R3CANCRF
R4CANCRF
R5CANCRF
R6CANCRF
R7CANCRF
R8CANCRF
R9CANCRF
R10CANCRF
R11CANCRF
R12CANCRF
R13CANCRF
R14CANCRF
R15CANCRF
/*-- R_CANCRQ   --*/
R1CANCRQ
R2CANCRQ
R3CANCRQ
R4CANCRQ
R5CANCRQ
R6CANCRQ
R7CANCRQ
R8CANCRQ
R9CANCRQ
R10CANCRQ
R11CANCRQ
R12CANCRQ
R13CANCRQ
R14CANCRQ
R15CANCRQ
/*-- R_CANCRS   --*/
R2CANCRS
R3CANCRS
R4CANCRS
R5CANCRS
R6CANCRS
R7CANCRS
R8CANCRS
R9CANCRS
R10CANCRS
R11CANCRS
R12CANCRS
R13CANCRS
R14CANCRS
R15CANCRS
/*-- R_CENDIV   --*/
R1CENDIV
R2CENDIV
R3CENDIV
R4CENDIV
R5CENDIV
R6CENDIV
R7CENDIV
R8CENDIV
R9CENDIV
R10CENDIV
R11CENDIV
R12CENDIV
R13CENDIV
R14CENDIV
R15CENDIV
/*-- R_CENREG   --*/
R1CENREG
R2CENREG
R3CENREG
R4CENREG
R5CENREG
R6CENREG
R7CENREG
R8CENREG
R9CENREG
R10CENREG
R11CENREG
R12CENREG
R13CENREG
R14CENREG
R15CENREG
/*-- R_CESD   --*/
R2CESD
R3CESD
R4CESD
R5CESD
R6CESD
R7CESD
R8CESD
R9CESD
R10CESD
R11CESD
R12CESD
R13CESD
R14CESD
R15CESD
/*-- R_CESDM   --*/
R1CESDM
R2CESDM
R3CESDM
R4CESDM
R5CESDM
R6CESDM
R7CESDM
R8CESDM
R9CESDM
R10CESDM
R11CESDM
R12CESDM
R13CESDM
R14CESDM
R15CESDM
/*-- R1_CHAIR   --*/
R1CHAIR
/*-- R2_CHAIR   --*/
R2CHAIR
/*-- R_CHAIR   --*/
R3CHAIR
R4CHAIR
R5CHAIR
R6CHAIR
R7CHAIR
R8CHAIR
R9CHAIR
R10CHAIR
R11CHAIR
R12CHAIR
R13CHAIR
R14CHAIR
R15CHAIR
/*-- R_CHAIRA   --*/
R2CHAIRA
R3CHAIRA
R4CHAIRA
R5CHAIRA
R6CHAIRA
R7CHAIRA
R8CHAIRA
R9CHAIRA
R10CHAIRA
R11CHAIRA
R12CHAIRA
R13CHAIRA
R14CHAIRA
R15CHAIRA
/*-- R_CHAIRW   --*/
R1CHAIRW
/*-- R_CHOLST   --*/
R3CHOLST
R4CHOLST
R5CHOLST
R6CHOLST
R7CHOLST
R8CHOLST
R9CHOLST
R10CHOLST
R11CHOLST
R12CHOLST
R13CHOLST
R14CHOLST
R15CHOLST
/*-- R_CLAIMED   --*/
R1CLAIMED
R4CLAIMED
R7CLAIMED
R10CLAIMED
R13CLAIMED
/*-- R1_CLIM1   --*/
R1CLIM1
/*-- R2_CLIM1   --*/
R2CLIM1
/*-- R_CLIM1   --*/
R3CLIM1
R4CLIM1
R5CLIM1
R6CLIM1
R7CLIM1
R8CLIM1
R9CLIM1
R10CLIM1
R11CLIM1
R12CLIM1
R13CLIM1
R14CLIM1
R15CLIM1
/*-- R_CLIM1A   --*/
R2CLIM1A
R3CLIM1A
R4CLIM1A
R5CLIM1A
R6CLIM1A
R7CLIM1A
R8CLIM1A
R9CLIM1A
R10CLIM1A
R11CLIM1A
R12CLIM1A
R13CLIM1A
R14CLIM1A
R15CLIM1A
/*-- R_CLIM1W   --*/
R1CLIM1W
/*-- R1_CLIMS   --*/
R1CLIMS
/*-- R2_CLIMS   --*/
R2CLIMS
/*-- R_CLIMS   --*/
R3CLIMS
R4CLIMS
R5CLIMS
R6CLIMS
R7CLIMS
R8CLIMS
R9CLIMS
R10CLIMS
R11CLIMS
R12CLIMS
R13CLIMS
R14CLIMS
R15CLIMS
/*-- R_CLIMSA   --*/
R2CLIMSA
R3CLIMSA
R4CLIMSA
R5CLIMSA
R6CLIMSA
R7CLIMSA
R8CLIMSA
R9CLIMSA
R10CLIMSA
R11CLIMSA
R12CLIMSA
R13CLIMSA
R14CLIMSA
R15CLIMSA
/*-- R_CLIMSW   --*/
R1CLIMSW
/*-- R_COGTOT   --*/
R3COGTOT
R4COGTOT
R5COGTOT
R6COGTOT
R7COGTOT
R8COGTOT
R9COGTOT
R10COGTOT
R11COGTOT
R12COGTOT
R13COGTOT
/*-- R_COMP   --*/
R1COMP
/*-- R_COMPW   --*/
R1COMPW
/*-- R_CONDE   --*/
R1CONDE
R2CONDE
R3CONDE
R4CONDE
R5CONDE
R6CONDE
R7CONDE
R8CONDE
R9CONDE
R10CONDE
R11CONDE
R12CONDE
R13CONDE
R14CONDE
R15CONDE
/*-- R_CONDEF   --*/
R1CONDEF
R2CONDEF
R3CONDEF
R4CONDEF
R5CONDEF
R6CONDEF
R7CONDEF
R8CONDEF
R9CONDEF
R10CONDEF
R11CONDEF
R12CONDEF
R13CONDEF
R14CONDEF
R15CONDEF
/*-- R_CONDS   --*/
R2CONDS
R3CONDS
R4CONDS
R5CONDS
R6CONDS
R7CONDS
R8CONDS
R9CONDS
R10CONDS
R11CONDS
R12CONDS
R13CONDS
R14CONDS
R15CONDS
/*-- R_CONDSF   --*/
R2CONDSF
R3CONDSF
R4CONDSF
R5CONDSF
R6CONDSF
R7CONDSF
R8CONDSF
R9CONDSF
R10CONDSF
R11CONDSF
R12CONDSF
R13CONDSF
R14CONDSF
R15CONDSF
/*-- R_CONDSP   --*/
R2CONDSP
R3CONDSP
R4CONDSP
R5CONDSP
R6CONDSP
R7CONDSP
R8CONDSP
R9CONDSP
R10CONDSP
R11CONDSP
R12CONDSP
R13CONDSP
R14CONDSP
R15CONDSP
/*-- R_COVR   --*/
R1COVR
R2COVR
R3COVR
R4COVR
R5COVR
R6COVR
R7COVR
R8COVR
R9COVR
R10COVR
R11COVR
R12COVR
R13COVR
R14COVR
R15COVR
/*-- R_COVRT   --*/
R1COVRT
R2COVRT
R3COVRT
R4COVRT
R5COVRT
R6COVRT
R7COVRT
R8COVRT
R9COVRT
R10COVRT
R11COVRT
R12COVRT
R13COVRT
R14COVRT
R15COVRT
/*-- R_COVS   --*/
R1COVS
R2COVS
R3COVS
R4COVS
R5COVS
R6COVS
R7COVS
R8COVS
R9COVS
R10COVS
R11COVS
R12COVS
R13COVS
R14COVS
R15COVS
/*-- R_DADAGE   --*/
R1DADAGE
R2DADAGE
R3DADAGE
R4DADAGE
R5DADAGE
R6DADAGE
R7DADAGE
R8DADAGE
R9DADAGE
R10DADAGE
R11DADAGE
R12DADAGE
R13DADAGE
R14DADAGE
R15DADAGE
/*-- R_DADLIV   --*/
R1DADLIV
R2DADLIV
R3DADLIV
R4DADLIV
R5DADLIV
R6DADLIV
R7DADLIV
R8DADLIV
R9DADLIV
R10DADLIV
R11DADLIV
R12DADLIV
R13DADLIV
R14DADLIV
R15DADLIV
/*-- R_DCBAL1   --*/
R1DCBAL1
R2DCBAL1
R3DCBAL1
R4DCBAL1
R5DCBAL1
R6DCBAL1
R7DCBAL1
R8DCBAL1
R9DCBAL1
R10DCBAL1
R11DCBAL1
R12DCBAL1
R13DCBAL1
R14DCBAL1
R15DCBAL1
/*-- R_DCBAL2   --*/
R1DCBAL2
R2DCBAL2
R3DCBAL2
R4DCBAL2
R5DCBAL2
R6DCBAL2
R7DCBAL2
R8DCBAL2
R9DCBAL2
R10DCBAL2
R11DCBAL2
R12DCBAL2
R13DCBAL2
R14DCBAL2
R15DCBAL2
/*-- R_DCBAL3   --*/
R1DCBAL3
R2DCBAL3
R3DCBAL3
R4DCBAL3
R5DCBAL3
R6DCBAL3
R7DCBAL3
R8DCBAL3
R9DCBAL3
R10DCBAL3
R11DCBAL3
R12DCBAL3
R13DCBAL3
R14DCBAL3
R15DCBAL3
/*-- R_DCBAL4   --*/
R5DCBAL4
R6DCBAL4
R7DCBAL4
R8DCBAL4
R9DCBAL4
R10DCBAL4
R11DCBAL4
R12DCBAL4
R13DCBAL4
R14DCBAL4
R15DCBAL4
/*-- R_DCBENE1   --*/
R1DCBENE1
R2DCBENE1
R3DCBENE1
R4DCBENE1
R5DCBENE1
R6DCBENE1
R7DCBENE1
R8DCBENE1
R9DCBENE1
R10DCBENE1
R11DCBENE1
R12DCBENE1
R13DCBENE1
R14DCBENE1
R15DCBENE1
/*-- R_DCBENE2   --*/
R1DCBENE2
R2DCBENE2
R3DCBENE2
R4DCBENE2
R5DCBENE2
R6DCBENE2
R7DCBENE2
R8DCBENE2
R9DCBENE2
R10DCBENE2
R11DCBENE2
R12DCBENE2
R13DCBENE2
R14DCBENE2
R15DCBENE2
/*-- R_DCBENE3   --*/
R1DCBENE3
R2DCBENE3
R3DCBENE3
R4DCBENE3
R5DCBENE3
R6DCBENE3
R7DCBENE3
R8DCBENE3
R9DCBENE3
R10DCBENE3
R11DCBENE3
R12DCBENE3
R13DCBENE3
R14DCBENE3
R15DCBENE3
/*-- R_DCBENE4   --*/
R5DCBENE4
R6DCBENE4
R7DCBENE4
R8DCBENE4
R9DCBENE4
R10DCBENE4
R11DCBENE4
R12DCBENE4
R13DCBENE4
R14DCBENE4
R15DCBENE4
/*-- R_DCCONT1   --*/
R1DCCONT1
R2DCCONT1
R3DCCONT1
R4DCCONT1
R5DCCONT1
R6DCCONT1
R7DCCONT1
R8DCCONT1
R9DCCONT1
R10DCCONT1
R11DCCONT1
R12DCCONT1
R13DCCONT1
R14DCCONT1
R15DCCONT1
/*-- R_DCCONT2   --*/
R1DCCONT2
R2DCCONT2
R3DCCONT2
R4DCCONT2
R5DCCONT2
R6DCCONT2
R7DCCONT2
R8DCCONT2
R9DCCONT2
R10DCCONT2
R11DCCONT2
R12DCCONT2
R13DCCONT2
R14DCCONT2
R15DCCONT2
/*-- R_DCCONT3   --*/
R1DCCONT3
R2DCCONT3
R3DCCONT3
R4DCCONT3
R5DCCONT3
R6DCCONT3
R7DCCONT3
R8DCCONT3
R9DCCONT3
R10DCCONT3
R11DCCONT3
R12DCCONT3
R13DCCONT3
R14DCCONT3
R15DCCONT3
/*-- R_DCCONT4   --*/
R5DCCONT4
R6DCCONT4
R7DCCONT4
R8DCCONT4
R9DCCONT4
R10DCCONT4
R11DCCONT4
R12DCCONT4
R13DCCONT4
R14DCCONT4
R15DCCONT4
/*-- R_DCMODE1   --*/
R1DCMODE1
R2DCMODE1
R3DCMODE1
R4DCMODE1
R5DCMODE1
R6DCMODE1
R7DCMODE1
R8DCMODE1
R9DCMODE1
R10DCMODE1
R11DCMODE1
R12DCMODE1
R13DCMODE1
R14DCMODE1
R15DCMODE1
/*-- R_DCMODE2   --*/
R1DCMODE2
R2DCMODE2
R3DCMODE2
R4DCMODE2
R5DCMODE2
R6DCMODE2
R7DCMODE2
R8DCMODE2
R9DCMODE2
R10DCMODE2
R11DCMODE2
R12DCMODE2
R13DCMODE2
R14DCMODE2
R15DCMODE2
/*-- R_DCMODE3   --*/
R1DCMODE3
R2DCMODE3
R3DCMODE3
R4DCMODE3
R5DCMODE3
R6DCMODE3
R7DCMODE3
R8DCMODE3
R9DCMODE3
R10DCMODE3
R11DCMODE3
R12DCMODE3
R13DCMODE3
R14DCMODE3
R15DCMODE3
/*-- R_DCMODE4   --*/
R5DCMODE4
R6DCMODE4
R7DCMODE4
R8DCMODE4
R9DCMODE4
R10DCMODE4
R11DCMODE4
R12DCMODE4
R13DCMODE4
R14DCMODE4
R15DCMODE4
/*-- R_DCPCT1   --*/
R1DCPCT1
R2DCPCT1
R3DCPCT1
R4DCPCT1
R5DCPCT1
R6DCPCT1
R7DCPCT1
R8DCPCT1
R9DCPCT1
R10DCPCT1
R11DCPCT1
R12DCPCT1
R13DCPCT1
R14DCPCT1
R15DCPCT1
/*-- R_DCPCT2   --*/
R1DCPCT2
R2DCPCT2
R3DCPCT2
R4DCPCT2
R5DCPCT2
R6DCPCT2
R7DCPCT2
R8DCPCT2
R9DCPCT2
R10DCPCT2
R11DCPCT2
R12DCPCT2
R13DCPCT2
R14DCPCT2
R15DCPCT2
/*-- R_DCPCT3   --*/
R1DCPCT3
R2DCPCT3
R3DCPCT3
R4DCPCT3
R5DCPCT3
R6DCPCT3
R7DCPCT3
R8DCPCT3
R9DCPCT3
R10DCPCT3
R11DCPCT3
R12DCPCT3
R13DCPCT3
R14DCPCT3
R15DCPCT3
/*-- R_DCPCT4   --*/
R5DCPCT4
R6DCPCT4
R7DCPCT4
R8DCPCT4
R9DCPCT4
R10DCPCT4
R11DCPCT4
R12DCPCT4
R13DCPCT4
R14DCPCT4
R15DCPCT4
/*-- R_DEMEN   --*/
R10DEMEN
R11DEMEN
R12DEMEN
R13DEMEN
R14DEMEN
R15DEMEN
/*-- R_DEMENE   --*/
R10DEMENE
R11DEMENE
R12DEMENE
R13DEMENE
R14DEMENE
R15DEMENE
/*-- R_DEMENF   --*/
R11DEMENF
R12DEMENF
R13DEMENF
R14DEMENF
R15DEMENF
/*-- R_DEMENQ   --*/
R10DEMENQ
R11DEMENQ
R12DEMENQ
R13DEMENQ
R14DEMENQ
R15DEMENQ
/*-- R_DEMENS   --*/
R11DEMENS
R12DEMENS
R13DEMENS
R14DEMENS
R15DEMENS
/*-- R_DENTST   --*/
R2DENTST
R3DENTST
R4DENTST
R5DENTST
R6DENTST
R7DENTST
R8DENTST
R9DENTST
R10DENTST
R11DENTST
R12DENTST
R13DENTST
R14DENTST
R15DENTST
/*-- R_DEPRES   --*/
R2DEPRES
R3DEPRES
R4DEPRES
R5DEPRES
R6DEPRES
R7DEPRES
R8DEPRES
R9DEPRES
R10DEPRES
R11DEPRES
R12DEPRES
R13DEPRES
R14DEPRES
R15DEPRES
/*-- R_DEPREX   --*/
R1DEPREX
/*-- R_DIAB   --*/
R1DIAB
R2DIAB
R3DIAB
R4DIAB
R5DIAB
R6DIAB
R7DIAB
R8DIAB
R9DIAB
R10DIAB
R11DIAB
R12DIAB
R13DIAB
R14DIAB
R15DIAB
/*-- R_DIABE   --*/
R1DIABE
R2DIABE
R3DIABE
R4DIABE
R5DIABE
R6DIABE
R7DIABE
R8DIABE
R9DIABE
R10DIABE
R11DIABE
R12DIABE
R13DIABE
R14DIABE
R15DIABE
/*-- R_DIABF   --*/
R1DIABF
R2DIABF
R3DIABF
R4DIABF
R5DIABF
R6DIABF
R7DIABF
R8DIABF
R9DIABF
R10DIABF
R11DIABF
R12DIABF
R13DIABF
R14DIABF
R15DIABF
/*-- R_DIABQ   --*/
R1DIABQ
R2DIABQ
R3DIABQ
R4DIABQ
R5DIABQ
R6DIABQ
R7DIABQ
R8DIABQ
R9DIABQ
R10DIABQ
R11DIABQ
R12DIABQ
R13DIABQ
R14DIABQ
R15DIABQ
/*-- R_DIABS   --*/
R2DIABS
R3DIABS
R4DIABS
R5DIABS
R6DIABS
R7DIABS
R8DIABS
R9DIABS
R10DIABS
R11DIABS
R12DIABS
R13DIABS
R14DIABS
R15DIABS
/*-- R1_DIME   --*/
R1DIME
/*-- R2_DIME   --*/
R2DIME
/*-- R_DIME   --*/
R3DIME
R4DIME
R5DIME
R6DIME
R7DIME
R8DIME
R9DIME
R10DIME
R11DIME
R12DIME
R13DIME
R14DIME
R15DIME
/*-- R_DIMEA   --*/
R2DIMEA
R3DIMEA
R4DIMEA
R5DIMEA
R6DIMEA
R7DIMEA
R8DIMEA
R9DIMEA
R10DIMEA
R11DIMEA
R12DIMEA
R13DIMEA
R14DIMEA
R15DIMEA
/*-- R_DIMEW   --*/
R1DIMEW
/*-- R_DLRC   --*/
R3DLRC
R4DLRC
R5DLRC
R6DLRC
R7DLRC
R8DLRC
R9DLRC
R10DLRC
R11DLRC
R12DLRC
R13DLRC
/*-- R_DLRC20   --*/
R1DLRC20
/*-- R_DOCTIM   --*/
R1DOCTIM
R2DOCTIM
R3DOCTIM
R4DOCTIM
R5DOCTIM
R6DOCTIM
R7DOCTIM
R8DOCTIM
R9DOCTIM
R10DOCTIM
R11DOCTIM
R12DOCTIM
R13DOCTIM
R14DOCTIM
R15DOCTIM
/*-- R_DOCTOR   --*/
R1DOCTOR
R2DOCTOR
R3DOCTOR
R4DOCTOR
R5DOCTOR
R6DOCTOR
R7DOCTOR
R8DOCTOR
R9DOCTOR
R10DOCTOR
R11DOCTOR
R12DOCTOR
R13DOCTOR
R14DOCTOR
R15DOCTOR
/*-- R1_DRESS   --*/
R1DRESS
/*-- R2_DRESS   --*/
R2DRESS
/*-- R_DRESS   --*/
R3DRESS
R4DRESS
R5DRESS
R6DRESS
R7DRESS
R8DRESS
R9DRESS
R10DRESS
R11DRESS
R12DRESS
R13DRESS
R14DRESS
R15DRESS
/*-- R_DRESSA   --*/
R2DRESSA
R3DRESSA
R4DRESSA
R5DRESSA
R6DRESSA
R7DRESSA
R8DRESSA
R9DRESSA
R10DRESSA
R11DRESSA
R12DRESSA
R13DRESSA
R14DRESSA
R15DRESSA
/*-- R2_DRESSH   --*/
R2DRESSH
/*-- R_DRESSH   --*/
R3DRESSH
R4DRESSH
R5DRESSH
R6DRESSH
R7DRESSH
R8DRESSH
R9DRESSH
R10DRESSH
R11DRESSH
R12DRESSH
R13DRESSH
R14DRESSH
R15DRESSH
/*-- R_DRESSW   --*/
R1DRESSW
/*-- R_DRINK   --*/
R1DRINK
R2DRINK
R3DRINK
R4DRINK
R5DRINK
R6DRINK
R7DRINK
R8DRINK
R9DRINK
R10DRINK
R11DRINK
R12DRINK
R13DRINK
R14DRINK
R15DRINK
/*-- R_DRINKD   --*/
R3DRINKD
R4DRINKD
R5DRINKD
R6DRINKD
R7DRINKD
R8DRINKD
R9DRINKD
R10DRINKD
R11DRINKD
R12DRINKD
R13DRINKD
R14DRINKD
R15DRINKD
/*-- R_DRINKN   --*/
R3DRINKN
R4DRINKN
R5DRINKN
R6DRINKN
R7DRINKN
R8DRINKN
R9DRINKN
R10DRINKN
R11DRINKN
R12DRINKN
R13DRINKN
R14DRINKN
R15DRINKN
/*-- R_DRINKR   --*/
R1DRINKR
R2DRINKR
/*-- R_DRUGS   --*/
R2DRUGS
R3DRUGS
R4DRUGS
R5DRUGS
R6DRUGS
R7DRUGS
R8DRUGS
R9DRUGS
R10DRUGS
R11DRUGS
R12DRUGS
R13DRUGS
R14DRUGS
R15DRUGS
/*-- R_DSIAMT   --*/
R5DSIAMT
R6DSIAMT
R7DSIAMT
R8DSIAMT
R9DSIAMT
R10DSIAMT
R11DSIAMT
R12DSIAMT
R13DSIAMT
R14DSIAMT
R15DSIAMT
/*-- R_DSSAMT   --*/
R5DSSAMT
R6DSSAMT
R7DSSAMT
R8DSSAMT
R9DSSAMT
R10DSSAMT
R11DSSAMT
R12DSSAMT
R13DSSAMT
R14DSSAMT
R15DSSAMT
/*-- R_DSTAT   --*/
R1DSTAT
R2DSTAT
R3DSTAT
R4DSTAT
R5DSTAT
R6DSTAT
R7DSTAT
R8DSTAT
R9DSTAT
R10DSTAT
R11DSTAT
R12DSTAT
R13DSTAT
R14DSTAT
R15DSTAT
/*-- R_DW   --*/
R2DW
R3DW
R4DW
R5DW
R6DW
R7DW
R8DW
R9DW
R10DW
R11DW
R12DW
R13DW
/*-- R_DY   --*/
R2DY
R3DY
R4DY
R5DY
R6DY
R7DY
R8DY
R9DY
R10DY
R11DY
R12DY
R13DY
/*-- R1_EAT   --*/
R1EAT
/*-- R2_EAT   --*/
R2EAT
/*-- R_EAT   --*/
R3EAT
R4EAT
R5EAT
R6EAT
R7EAT
R8EAT
R9EAT
R10EAT
R11EAT
R12EAT
R13EAT
R14EAT
R15EAT
/*-- R_EATA   --*/
R2EATA
R3EATA
R4EATA
R5EATA
R6EATA
R7EATA
R8EATA
R9EATA
R10EATA
R11EATA
R12EATA
R13EATA
R14EATA
R15EATA
/*-- R2_EATH   --*/
R2EATH
/*-- R_EATH   --*/
R3EATH
R4EATH
R5EATH
R6EATH
R7EATH
R8EATH
R9EATH
R10EATH
R11EATH
R12EATH
R13EATH
R14EATH
R15EATH
/*-- R_EATW   --*/
R1EATW
/*-- R_EFFORT   --*/
R2EFFORT
R3EFFORT
R4EFFORT
R5EFFORT
R6EFFORT
R7EFFORT
R8EFFORT
R9EFFORT
R10EFFORT
R11EFFORT
R12EFFORT
R13EFFORT
R14EFFORT
R15EFFORT
/*-- R_EFFORX   --*/
R1EFFORX
/*-- R_ENLIFE   --*/
R2ENLIFE
R3ENLIFE
R4ENLIFE
R5ENLIFE
R6ENLIFE
R7ENLIFE
R8ENLIFE
R9ENLIFE
R10ENLIFE
R11ENLIFE
R12ENLIFE
R13ENLIFE
R14ENLIFE
R15ENLIFE
/*-- R_ENLIFX   --*/
R1ENLIFX
/*-- R_FAMR   --*/
R1FAMR
R2FAMR
R3FAMR
R4FAMR
R5FAMR
R6FAMR
R7FAMR
R8FAMR
R9FAMR
R10FAMR
R11FAMR
R12FAMR
R13FAMR
R14FAMR
R15FAMR
/*-- R_FBWC20   --*/
R2FBWC20
R3FBWC20
R4FBWC20
R5FBWC20
R6FBWC20
R7FBWC20
R8FBWC20
R9FBWC20
R10FBWC20
R11FBWC20
R12FBWC20
R13FBWC20
/*-- R_FBWC86   --*/
R3FBWC86
R4FBWC86
R5FBWC86
R6FBWC86
/*-- R_FCACT   --*/
R2FCACT
R3FCACT
R4FCACT
R5FCACT
R6FCACT
R7FCACT
R8FCACT
R9FCACT
R10FCACT
R11FCACT
R12FCACT
R13FCACT
/*-- R_FDLRC   --*/
R1FDLRC
R2FDLRC
R3FDLRC
R4FDLRC
R5FDLRC
R6FDLRC
R7FDLRC
R8FDLRC
R9FDLRC
R10FDLRC
R11FDLRC
R12FDLRC
R13FDLRC
/*-- R_FDW   --*/
R2FDW
R3FDW
R4FDW
R5FDW
R6FDW
R7FDW
R8FDW
R9FDW
R10FDW
R11FDW
R12FDW
R13FDW
/*-- R_FDY   --*/
R2FDY
R3FDY
R4FDY
R5FDY
R6FDY
R7FDY
R8FDY
R9FDY
R10FDY
R11FDY
R12FDY
R13FDY
/*-- R_FIMRC   --*/
R1FIMRC
R2FIMRC
R3FIMRC
R4FIMRC
R5FIMRC
R6FIMRC
R7FIMRC
R8FIMRC
R9FIMRC
R10FIMRC
R11FIMRC
R12FIMRC
R13FIMRC
/*-- R_FINEA   --*/
R2FINEA
R3FINEA
R4FINEA
R5FINEA
R6FINEA
R7FINEA
R8FINEA
R9FINEA
R10FINEA
R11FINEA
R12FINEA
R13FINEA
R14FINEA
R15FINEA
/*-- R_FINPLN   --*/
R1FINPLN
R4FINPLN
R5FINPLN
R6FINPLN
R7FINPLN
R8FINPLN
R11FINPLN
R12FINPLN
R13FINPLN
R14FINPLN
R15FINPLN
/*-- R_FINR   --*/
R1FINR
R2FINR
R3FINR
R4FINR
R5FINR
R6FINR
R7FINR
R8FINR
R9FINR
R10FINR
R11FINR
R12FINR
R13FINR
R14FINR
R15FINR
/*-- R_FLAG   --*/
R2FLAG
R3FLAG
/*-- R_FLONE   --*/
R2FLONE
R3FLONE
R4FLONE
R5FLONE
R6FLONE
R7FLONE
R8FLONE
R9FLONE
R10FLONE
R11FLONE
R12FLONE
R13FLONE
R14FLONE
R15FLONE
/*-- R_FLONEX   --*/
R1FLONEX
/*-- R_FLUSHT   --*/
R3FLUSHT
R4FLUSHT
R5FLUSHT
R6FLUSHT
R7FLUSHT
R8FLUSHT
R9FLUSHT
R10FLUSHT
R11FLUSHT
R12FLUSHT
R13FLUSHT
R14FLUSHT
R15FLUSHT
/*-- R_FMO   --*/
R2FMO
R3FMO
R4FMO
R5FMO
R6FMO
R7FMO
R8FMO
R9FMO
R10FMO
R11FMO
R12FMO
R13FMO
/*-- R_FPRES   --*/
R2FPRES
R3FPRES
R4FPRES
R5FPRES
R6FPRES
R7FPRES
R8FPRES
R9FPRES
R10FPRES
R11FPRES
R12FPRES
R13FPRES
/*-- R_FPSTME   --*/
R1FPSTME
R2FPSTME
R3FPSTME
R4FPSTME
R5FPSTME
R6FPSTME
R7FPSTME
R8FPSTME
R9FPSTME
R10FPSTME
R11FPSTME
R12FPSTME
R13FPSTME
/*-- R_FSAD   --*/
R2FSAD
R3FSAD
R4FSAD
R5FSAD
R6FSAD
R7FSAD
R8FSAD
R9FSAD
R10FSAD
R11FSAD
R12FSAD
R13FSAD
R14FSAD
R15FSAD
/*-- R_FSADX   --*/
R1FSADX
/*-- R_FSCIS   --*/
R2FSCIS
R3FSCIS
R4FSCIS
R5FSCIS
R6FSCIS
R7FSCIS
R8FSCIS
R9FSCIS
R10FSCIS
R11FSCIS
R12FSCIS
R13FSCIS
/*-- R_FSER7   --*/
R2FSER7
R3FSER7
R4FSER7
R5FSER7
R6FSER7
R7FSER7
R8FSER7
R9FSER7
R10FSER7
R11FSER7
R12FSER7
R13FSER7
/*-- R_FSIZE   --*/
R1FSIZE
R2FSIZE
R3FSIZE
R4FSIZE
R5FSIZE
R6FSIZE
R7FSIZE
R8FSIZE
R9FSIZE
R10FSIZE
R11FSIZE
R12FSIZE
R13FSIZE
R14FSIZE
R15FSIZE
/*-- R_FSIZEF   --*/
R2FSIZEF
R3FSIZEF
R4FSIZEF
R5FSIZEF
R6FSIZEF
R7FSIZEF
R8FSIZEF
R9FSIZEF
R10FSIZEF
R11FSIZEF
R12FSIZEF
R13FSIZEF
R14FSIZEF
R15FSIZEF
/*-- R_FSLFME   --*/
R1FSLFME
R2FSLFME
R3FSLFME
R4FSLFME
R5FSLFME
R6FSLFME
R7FSLFME
R8FSLFME
R9FSLFME
R10FSLFME
R11FSLFME
R12FSLFME
R13FSLFME
/*-- R_FVOCAB   --*/
R3FVOCAB
R4FVOCAB
R5FVOCAB
R6FVOCAB
R7FVOCAB
R8FVOCAB
R9FVOCAB
R10FVOCAB
R11FVOCAB
R12FVOCAB
R13FVOCAB
/*-- R_FVP   --*/
R2FVP
R3FVP
R4FVP
R5FVP
R6FVP
R7FVP
R8FVP
R9FVP
R10FVP
R11FVP
R12FVP
R13FVP
/*-- R_FYR   --*/
R2FYR
R3FYR
R4FYR
R5FYR
R6FYR
R7FYR
R8FYR
R9FYR
R10FYR
R11FYR
R12FYR
R13FYR
/*-- R_GOING   --*/
R2GOING
R3GOING
R4GOING
R5GOING
R6GOING
R7GOING
R8GOING
R9GOING
R10GOING
R11GOING
R12GOING
R13GOING
R14GOING
R15GOING
/*-- R_GOINGX   --*/
R1GOINGX
/*-- R_GOVMD   --*/
R1GOVMD
R2GOVMD
R3GOVMD
R4GOVMD
R5GOVMD
R6GOVMD
R7GOVMD
R8GOVMD
R9GOVMD
R10GOVMD
R11GOVMD
R12GOVMD
R13GOVMD
R14GOVMD
R15GOVMD
/*-- R_GOVMR   --*/
R1GOVMR
R2GOVMR
R3GOVMR
R4GOVMR
R5GOVMR
R6GOVMR
R7GOVMR
R8GOVMR
R9GOVMR
R10GOVMR
R11GOVMR
R12GOVMR
R13GOVMR
R14GOVMR
R15GOVMR
/*-- R_GOVOT   --*/
R1GOVOT
R2GOVOT
R3GOVOT
/*-- R_GOVVA   --*/
R1GOVVA
R2GOVVA
R3GOVVA
R4GOVVA
R5GOVVA
R6GOVVA
R7GOVVA
R8GOVVA
R9GOVVA
R10GOVVA
R11GOVVA
R12GOVVA
R13GOVVA
R14GOVVA
R15GOVVA
/*-- R_GROSSA   --*/
R2GROSSA
R3GROSSA
R4GROSSA
R5GROSSA
R6GROSSA
R7GROSSA
R8GROSSA
R9GROSSA
R10GROSSA
R11GROSSA
R12GROSSA
R13GROSSA
R14GROSSA
R15GROSSA
/*-- R_GRP   --*/
R8GRP
R9GRP
R10GRP
R11GRP
R12GRP
R13GRP
R14GRP
/*-- R_GRPDOM   --*/
R8GRPDOM
R9GRPDOM
R10GRPDOM
R11GRPDOM
R12GRPDOM
R13GRPDOM
R14GRPDOM
/*-- R_GRPL   --*/
R8GRPL
R9GRPL
R10GRPL
R11GRPL
R12GRPL
R13GRPL
R14GRPL
/*-- R_GRPPOS   --*/
R8GRPPOS
R9GRPPOS
R10GRPPOS
R11GRPPOS
R12GRPPOS
R13GRPPOS
R14GRPPOS
/*-- R_GRPR   --*/
R8GRPR
R9GRPR
R10GRPR
R11GRPR
R12GRPR
R13GRPR
R14GRPR
/*-- R_HALUC   --*/
R2HALUC
R3HALUC
R4HALUC
R5HALUC
R6HALUC
R7HALUC
R8HALUC
R9HALUC
R10HALUC
R11HALUC
R12HALUC
R13HALUC
R14HALUC
R15HALUC
/*-- R_HDLR20   --*/
R2HDLR20
/*-- R_HEART   --*/
R1HEART
R2HEART
R3HEART
R4HEART
R5HEART
R6HEART
R7HEART
R8HEART
R9HEART
R10HEART
R11HEART
R12HEART
R13HEART
R14HEART
R15HEART
/*-- R_HEARTE   --*/
R1HEARTE
R2HEARTE
R3HEARTE
R4HEARTE
R5HEARTE
R6HEARTE
R7HEARTE
R8HEARTE
R9HEARTE
R10HEARTE
R11HEARTE
R12HEARTE
R13HEARTE
R14HEARTE
R15HEARTE
/*-- R_HEARTF   --*/
R1HEARTF
R2HEARTF
R3HEARTF
R4HEARTF
R5HEARTF
R6HEARTF
R7HEARTF
R8HEARTF
R9HEARTF
R10HEARTF
R11HEARTF
R12HEARTF
R13HEARTF
R14HEARTF
R15HEARTF
/*-- R_HEARTQ   --*/
R1HEARTQ
R2HEARTQ
R3HEARTQ
R4HEARTQ
R5HEARTQ
R6HEARTQ
R7HEARTQ
R8HEARTQ
R9HEARTQ
R10HEARTQ
R11HEARTQ
R12HEARTQ
R13HEARTQ
R14HEARTQ
R15HEARTQ
/*-- R_HEARTS   --*/
R2HEARTS
R3HEARTS
R4HEARTS
R5HEARTS
R6HEARTS
R7HEARTS
R8HEARTS
R9HEARTS
R10HEARTS
R11HEARTS
R12HEARTS
R13HEARTS
R14HEARTS
R15HEARTS
/*-- R_HECOV1   --*/
R1HECOV1
R2HECOV1
R3HECOV1
R4HECOV1
R5HECOV1
R6HECOV1
R7HECOV1
R8HECOV1
R9HECOV1
R10HECOV1
R11HECOV1
R12HECOV1
R13HECOV1
R14HECOV1
R15HECOV1
/*-- R_HECOV2   --*/
R1HECOV2
R2HECOV2
R3HECOV2
R6HECOV2
R7HECOV2
R8HECOV2
R9HECOV2
R10HECOV2
R11HECOV2
R12HECOV2
R13HECOV2
R14HECOV2
R15HECOV2
/*-- R_HECOV3   --*/
R6HECOV3
R7HECOV3
R8HECOV3
R9HECOV3
R10HECOV3
R11HECOV3
R12HECOV3
R13HECOV3
R14HECOV3
R15HECOV3
/*-- R_HEIGHT   --*/
R1HEIGHT
R2HEIGHT
R3HEIGHT
R4HEIGHT
R5HEIGHT
R6HEIGHT
R7HEIGHT
R8HEIGHT
R9HEIGHT
R10HEIGHT
R11HEIGHT
R12HEIGHT
R13HEIGHT
R14HEIGHT
R15HEIGHT
/*-- R_HENUM   --*/
R1HENUM
R2HENUM
R3HENUM
R4HENUM
R5HENUM
R6HENUM
R7HENUM
R8HENUM
R9HENUM
R10HENUM
R11HENUM
R12HENUM
R13HENUM
R14HENUM
R15HENUM
/*-- R_HERET   --*/
R1HERET
R2HERET
R3HERET
R4HERET
R5HERET
R6HERET
R7HERET
R8HERET
R9HERET
R10HERET
R11HERET
R12HERET
R13HERET
R14HERET
R15HERET
/*-- R_HERTR1   --*/
R1HERTR1
R2HERTR1
R3HERTR1
R4HERTR1
R5HERTR1
R6HERTR1
R7HERTR1
R8HERTR1
R9HERTR1
R10HERTR1
R11HERTR1
R12HERTR1
R13HERTR1
R14HERTR1
R15HERTR1
/*-- R_HERTR2   --*/
R1HERTR2
R2HERTR2
R3HERTR2
R6HERTR2
R7HERTR2
R8HERTR2
R9HERTR2
R10HERTR2
R11HERTR2
R12HERTR2
R13HERTR2
R14HERTR2
R15HERTR2
/*-- R_HERTR3   --*/
R6HERTR3
R7HERTR3
R8HERTR3
R9HERTR3
R10HERTR3
R11HERTR3
R12HERTR3
R13HERTR3
R14HERTR3
R15HERTR3
/*-- R_HERTS1   --*/
R1HERTS1
R2HERTS1
R5HERTS1
R6HERTS1
R7HERTS1
R8HERTS1
R9HERTS1
R10HERTS1
R11HERTS1
R12HERTS1
R13HERTS1
R14HERTS1
R15HERTS1
/*-- R_HERTS2   --*/
R1HERTS2
R2HERTS2
R6HERTS2
R7HERTS2
R8HERTS2
R9HERTS2
R10HERTS2
R11HERTS2
R12HERTS2
R13HERTS2
R14HERTS2
R15HERTS2
/*-- R_HERTS3   --*/
R6HERTS3
R7HERTS3
R8HERTS3
R9HERTS3
R10HERTS3
R11HERTS3
R12HERTS3
R13HERTS3
R14HERTS3
R15HERTS3
/*-- R_HESRC1   --*/
R1HESRC1
R2HESRC1
R3HESRC1
R4HESRC1
R5HESRC1
R6HESRC1
R7HESRC1
R8HESRC1
R9HESRC1
R10HESRC1
R11HESRC1
R12HESRC1
R13HESRC1
R14HESRC1
R15HESRC1
/*-- R_HESRC2   --*/
R1HESRC2
R2HESRC2
R3HESRC2
R6HESRC2
R7HESRC2
R8HESRC2
R9HESRC2
R10HESRC2
R11HESRC2
R12HESRC2
R13HESRC2
R14HESRC2
R15HESRC2
/*-- R_HESRC3   --*/
R6HESRC3
R7HESRC3
R8HESRC3
R9HESRC3
R10HESRC3
R11HESRC3
R12HESRC3
R13HESRC3
R14HESRC3
R15HESRC3
/*-- R_HIBP   --*/
R1HIBP
R2HIBP
R3HIBP
R4HIBP
R5HIBP
R6HIBP
R7HIBP
R8HIBP
R9HIBP
R10HIBP
R11HIBP
R12HIBP
R13HIBP
R14HIBP
R15HIBP
/*-- R_HIBPE   --*/
R1HIBPE
R2HIBPE
R3HIBPE
R4HIBPE
R5HIBPE
R6HIBPE
R7HIBPE
R8HIBPE
R9HIBPE
R10HIBPE
R11HIBPE
R12HIBPE
R13HIBPE
R14HIBPE
R15HIBPE
/*-- R_HIBPF   --*/
R1HIBPF
R2HIBPF
R3HIBPF
R4HIBPF
R5HIBPF
R6HIBPF
R7HIBPF
R8HIBPF
R9HIBPF
R10HIBPF
R11HIBPF
R12HIBPF
R13HIBPF
R14HIBPF
R15HIBPF
/*-- R_HIBPQ   --*/
R1HIBPQ
R2HIBPQ
R3HIBPQ
R4HIBPQ
R5HIBPQ
R6HIBPQ
R7HIBPQ
R8HIBPQ
R9HIBPQ
R10HIBPQ
R11HIBPQ
R12HIBPQ
R13HIBPQ
R14HIBPQ
R15HIBPQ
/*-- R_HIBPS   --*/
R2HIBPS
R3HIBPS
R4HIBPS
R5HIBPS
R6HIBPS
R7HIBPS
R8HIBPS
R9HIBPS
R10HIBPS
R11HIBPS
R12HIBPS
R13HIBPS
R14HIBPS
R15HIBPS
/*-- R_HIGOV   --*/
R1HIGOV
R2HIGOV
R3HIGOV
R4HIGOV
R5HIGOV
R6HIGOV
R7HIGOV
R8HIGOV
R9HIGOV
R10HIGOV
R11HIGOV
R12HIGOV
R13HIGOV
R14HIGOV
R15HIGOV
/*-- R_HILTC   --*/
R1HILTC
R2HILTC
R3HILTC
R4HILTC
R5HILTC
R6HILTC
R7HILTC
R8HILTC
R9HILTC
R10HILTC
R11HILTC
R12HILTC
R13HILTC
R14HILTC
R15HILTC
/*-- R_HIMR20   --*/
R2HIMR20
/*-- R_HIOTHP   --*/
R1HIOTHP
R2HIOTHP
R3HIOTHP
R4HIOTHP
R5HIOTHP
R6HIOTHP
R7HIOTHP
R8HIOTHP
R9HIOTHP
R10HIOTHP
R11HIOTHP
R12HIOTHP
R13HIOTHP
R14HIOTHP
R15HIOTHP
/*-- R_HLPDYSF   --*/
R3HLPDYSF
R4HLPDYSF
R5HLPDYSF
R6HLPDYSF
R7HLPDYSF
R8HLPDYSF
R9HLPDYSF
R10HLPDYSF
R11HLPDYSF
R12HLPDYSF
R13HLPDYSF
R14HLPDYSF
R15HLPDYSF
/*-- R_HLPDYSNF   --*/
R3HLPDYSNF
R4HLPDYSNF
R5HLPDYSNF
R6HLPDYSNF
R7HLPDYSNF
R8HLPDYSNF
R9HLPDYSNF
R10HLPDYSNF
R11HLPDYSNF
R12HLPDYSNF
R13HLPDYSNF
R14HLPDYSNF
R15HLPDYSNF
/*-- R_HLPDYSP   --*/
R3HLPDYSP
R4HLPDYSP
R5HLPDYSP
R6HLPDYSP
R7HLPDYSP
R8HLPDYSP
R9HLPDYSP
R10HLPDYSP
R11HLPDYSP
R12HLPDYSP
R13HLPDYSP
R14HLPDYSP
R15HLPDYSP
/*-- R_HLPDYST   --*/
R3HLPDYST
R4HLPDYST
R5HLPDYST
R6HLPDYST
R7HLPDYST
R8HLPDYST
R9HLPDYST
R10HLPDYST
R11HLPDYST
R12HLPDYST
R13HLPDYST
R14HLPDYST
R15HLPDYST
/*-- R_HLPDYSU   --*/
R3HLPDYSU
R4HLPDYSU
R5HLPDYSU
R6HLPDYSU
R7HLPDYSU
R8HLPDYSU
R9HLPDYSU
R10HLPDYSU
R11HLPDYSU
R12HLPDYSU
R13HLPDYSU
R14HLPDYSU
R15HLPDYSU
/*-- R_HLPHRSF   --*/
R3HLPHRSF
R4HLPHRSF
R5HLPHRSF
R6HLPHRSF
R7HLPHRSF
R8HLPHRSF
R9HLPHRSF
R10HLPHRSF
R11HLPHRSF
R12HLPHRSF
R13HLPHRSF
R14HLPHRSF
R15HLPHRSF
/*-- R_HLPHRSNF   --*/
R3HLPHRSNF
R4HLPHRSNF
R5HLPHRSNF
R6HLPHRSNF
R7HLPHRSNF
R8HLPHRSNF
R9HLPHRSNF
R10HLPHRSNF
R11HLPHRSNF
R12HLPHRSNF
R13HLPHRSNF
R14HLPHRSNF
R15HLPHRSNF
/*-- R_HLPHRSP   --*/
R3HLPHRSP
R4HLPHRSP
R5HLPHRSP
R6HLPHRSP
R7HLPHRSP
R8HLPHRSP
R9HLPHRSP
R10HLPHRSP
R11HLPHRSP
R12HLPHRSP
R13HLPHRSP
R14HLPHRSP
R15HLPHRSP
/*-- R_HLPHRST   --*/
R3HLPHRST
R4HLPHRST
R5HLPHRST
R6HLPHRST
R7HLPHRST
R8HLPHRST
R9HLPHRST
R10HLPHRST
R11HLPHRST
R12HLPHRST
R13HLPHRST
R14HLPHRST
R15HLPHRST
/*-- R_HLPHRSU   --*/
R3HLPHRSU
R4HLPHRSU
R5HLPHRSU
R6HLPHRSU
R7HLPHRSU
R8HLPHRSU
R9HLPHRSU
R10HLPHRSU
R11HLPHRSU
R12HLPHRSU
R13HLPHRSU
R14HLPHRSU
R15HLPHRSU
/*-- R_HLPPDFA   --*/
R3HLPPDFA
R4HLPPDFA
R5HLPPDFA
R6HLPPDFA
R7HLPPDFA
R8HLPPDFA
R9HLPPDFA
R10HLPPDFA
R11HLPPDFA
R12HLPPDFA
R13HLPPDFA
R14HLPPDFA
R15HLPPDFA
/*-- R_HLPPDFN   --*/
R3HLPPDFN
R4HLPPDFN
R5HLPPDFN
R6HLPPDFN
R7HLPPDFN
R8HLPPDFN
R9HLPPDFN
R10HLPPDFN
R11HLPPDFN
R12HLPPDFN
R13HLPPDFN
R14HLPPDFN
R15HLPPDFN
/*-- R_HLPPDNFA   --*/
R3HLPPDNFA
R4HLPPDNFA
R5HLPPDNFA
R6HLPPDNFA
R7HLPPDNFA
R8HLPPDNFA
R9HLPPDNFA
R10HLPPDNFA
R11HLPPDNFA
R12HLPPDNFA
R13HLPPDNFA
R14HLPPDNFA
R15HLPPDNFA
/*-- R_HLPPDNFN   --*/
R3HLPPDNFN
R4HLPPDNFN
R5HLPPDNFN
R6HLPPDNFN
R7HLPPDNFN
R8HLPPDNFN
R9HLPPDNFN
R10HLPPDNFN
R11HLPPDNFN
R12HLPPDNFN
R13HLPPDNFN
R14HLPPDNFN
R15HLPPDNFN
/*-- R_HLPPDTA   --*/
R3HLPPDTA
R4HLPPDTA
R5HLPPDTA
R6HLPPDTA
R7HLPPDTA
R8HLPPDTA
R9HLPPDTA
R10HLPPDTA
R11HLPPDTA
R12HLPPDTA
R13HLPPDTA
R14HLPPDTA
R15HLPPDTA
/*-- R_HLPPDTN   --*/
R3HLPPDTN
R4HLPPDTN
R5HLPPDTN
R6HLPPDTN
R7HLPPDTN
R8HLPPDTN
R9HLPPDTN
R10HLPPDTN
R11HLPPDTN
R12HLPPDTN
R13HLPPDTN
R14HLPPDTN
R15HLPPDTN
/*-- R_HLPRFN   --*/
R3HLPRFN
R4HLPRFN
R5HLPRFN
R6HLPRFN
R7HLPRFN
R8HLPRFN
R9HLPRFN
R10HLPRFN
R11HLPRFN
R12HLPRFN
R13HLPRFN
R14HLPRFN
R15HLPRFN
/*-- R_HLPRNFN   --*/
R3HLPRNFN
R4HLPRNFN
R5HLPRNFN
R6HLPRNFN
R7HLPRNFN
R8HLPRNFN
R9HLPRNFN
R10HLPRNFN
R11HLPRNFN
R12HLPRNFN
R13HLPRNFN
R14HLPRNFN
R15HLPRNFN
/*-- R_HLPRPN   --*/
R3HLPRPN
R4HLPRPN
R5HLPRPN
R6HLPRPN
R7HLPRPN
R8HLPRPN
R9HLPRPN
R10HLPRPN
R11HLPRPN
R12HLPRPN
R13HLPRPN
R14HLPRPN
R15HLPRPN
/*-- R_HLPRTN   --*/
R3HLPRTN
R4HLPRTN
R5HLPRTN
R6HLPRTN
R7HLPRTN
R8HLPRTN
R9HLPRTN
R10HLPRTN
R11HLPRTN
R12HLPRTN
R13HLPRTN
R14HLPRTN
R15HLPRTN
/*-- R_HLPRUN   --*/
R3HLPRUN
R4HLPRUN
R5HLPRUN
R6HLPRUN
R7HLPRUN
R8HLPRUN
R9HLPRUN
R10HLPRUN
R11HLPRUN
R12HLPRUN
R13HLPRUN
R14HLPRUN
R15HLPRUN
/*-- R_HLTC3   --*/
R1HLTC3
R2HLTC3
R3HLTC3
R4HLTC3
R5HLTC3
R6HLTC3
R7HLTC3
R8HLTC3
R9HLTC3
R10HLTC3
R11HLTC3
R12HLTC3
R13HLTC3
R14HLTC3
R15HLTC3
/*-- R_HLTC5   --*/
R1HLTC5
R2HLTC5
R3HLTC5
R4HLTC5
R5HLTC5
R6HLTC5
/*-- R_HLTC5F   --*/
R3HLTC5F
R4HLTC5F
R5HLTC5F
R6HLTC5F
/*-- R_HLTHLM   --*/
R1HLTHLM
R2HLTHLM
R3HLTHLM
R4HLTHLM
R5HLTHLM
R6HLTHLM
R7HLTHLM
R8HLTHLM
R9HLTHLM
R10HLTHLM
R11HLTHLM
R12HLTHLM
R13HLTHLM
R14HLTHLM
R15HLTHLM
/*-- R_HOMCAR   --*/
R1HOMCAR
R2HOMCAR
R3HOMCAR
R4HOMCAR
R5HOMCAR
R6HOMCAR
R7HOMCAR
R8HOMCAR
R9HOMCAR
R10HOMCAR
R11HOMCAR
R12HOMCAR
R13HOMCAR
R14HOMCAR
R15HOMCAR
/*-- R_HOSP   --*/
R1HOSP
R2HOSP
R3HOSP
R4HOSP
R5HOSP
R6HOSP
R7HOSP
R8HOSP
R9HOSP
R10HOSP
R11HOSP
R12HOSP
R13HOSP
R14HOSP
R15HOSP
/*-- R_HSPNIT   --*/
R1HSPNIT
R2HSPNIT
R3HSPNIT
R4HSPNIT
R5HSPNIT
R6HSPNIT
R7HSPNIT
R8HSPNIT
R9HSPNIT
R10HSPNIT
R11HSPNIT
R12HSPNIT
R13HSPNIT
R14HSPNIT
R15HSPNIT
/*-- R_HSPTIM   --*/
R1HSPTIM
R2HSPTIM
R3HSPTIM
R4HSPTIM
R5HSPTIM
R6HSPTIM
R7HSPTIM
R8HSPTIM
R9HSPTIM
R10HSPTIM
R11HSPTIM
R12HSPTIM
R13HSPTIM
R14HSPTIM
R15HSPTIM
/*-- R_HSWRKF   --*/
R1HSWRKF
/*-- R_HTR40   --*/
R2HTR40
/*-- R_IADL5A   --*/
R2IADL5A
R3IADL5A
R4IADL5A
R5IADL5A
R6IADL5A
R7IADL5A
R8IADL5A
R9IADL5A
R10IADL5A
R11IADL5A
R12IADL5A
R13IADL5A
R14IADL5A
R15IADL5A
/*-- R_IADL5H   --*/
R3IADL5H
R4IADL5H
R5IADL5H
R6IADL5H
R7IADL5H
R8IADL5H
R9IADL5H
R10IADL5H
R11IADL5H
R12IADL5H
R13IADL5H
R14IADL5H
R15IADL5H
/*-- R_IANN   --*/
R1IANN
R2IANN
R3IANN
R4IANN
R5IANN
R6IANN
R7IANN
R8IANN
R9IANN
R10IANN
R11IANN
R12IANN
R13IANN
R14IANN
R15IANN
/*-- R_IEARN   --*/
R1IEARN
R2IEARN
R3IEARN
R4IEARN
R5IEARN
R6IEARN
R7IEARN
R8IEARN
R9IEARN
R10IEARN
R11IEARN
R12IEARN
R13IEARN
R14IEARN
R15IEARN
/*-- R_IFANN   --*/
R1IFANN
R2IFANN
R3IFANN
R4IFANN
R5IFANN
R6IFANN
R7IFANN
R8IFANN
R9IFANN
R10IFANN
R11IFANN
R12IFANN
R13IFANN
R14IFANN
R15IFANN
/*-- R_IFEARN   --*/
R1IFEARN
R2IFEARN
R3IFEARN
R4IFEARN
R5IFEARN
R6IFEARN
R7IFEARN
R8IFEARN
R9IFEARN
R10IFEARN
R11IFEARN
R12IFEARN
R13IFEARN
R14IFEARN
R15IFEARN
/*-- R_IFGXFR   --*/
R1IFGXFR
R2IFGXFR
R3IFGXFR
R4IFGXFR
R5IFGXFR
R6IFGXFR
R7IFGXFR
R8IFGXFR
R9IFGXFR
R10IFGXFR
R11IFGXFR
R12IFGXFR
R13IFGXFR
R14IFGXFR
R15IFGXFR
/*-- R_IFIRAW   --*/
R5IFIRAW
R6IFIRAW
R7IFIRAW
R8IFIRAW
R9IFIRAW
R10IFIRAW
R11IFIRAW
R12IFIRAW
R13IFIRAW
R14IFIRAW
R15IFIRAW
/*-- R_IFIRAWY1   --*/
R2IFIRAWY1
/*-- R_IFPEN   --*/
R1IFPEN
R2IFPEN
R3IFPEN
R4IFPEN
R5IFPEN
R6IFPEN
R7IFPEN
R8IFPEN
R9IFPEN
R10IFPEN
R11IFPEN
R12IFPEN
R13IFPEN
R14IFPEN
R15IFPEN
/*-- R_IFPENA   --*/
R1IFPENA
R2IFPENA
R3IFPENA
R4IFPENA
R5IFPENA
R6IFPENA
R7IFPENA
R8IFPENA
R9IFPENA
R10IFPENA
R11IFPENA
R12IFPENA
R13IFPENA
R14IFPENA
R15IFPENA
/*-- R_IFSDI   --*/
R1IFSDI
R2IFSDI
R3IFSDI
R4IFSDI
R5IFSDI
R6IFSDI
R7IFSDI
R8IFSDI
R9IFSDI
R10IFSDI
R11IFSDI
R12IFSDI
R13IFSDI
R14IFSDI
R15IFSDI
/*-- R_IFSRET   --*/
R1IFSRET
R2IFSRET
R3IFSRET
R4IFSRET
R5IFSRET
R6IFSRET
R7IFSRET
R8IFSRET
R9IFSRET
R10IFSRET
R11IFSRET
R12IFSRET
R13IFSRET
R14IFSRET
R15IFSRET
/*-- R_IFSSDI   --*/
R1IFSSDI
R2IFSSDI
R3IFSSDI
R4IFSSDI
R5IFSSDI
R6IFSSDI
R7IFSSDI
R8IFSSDI
R9IFSSDI
R10IFSSDI
R11IFSSDI
R12IFSSDI
R13IFSSDI
R14IFSSDI
R15IFSSDI
/*-- R_IFSSI   --*/
R1IFSSI
R2IFSSI
/*-- R_IFUNEM   --*/
R1IFUNEM
R2IFUNEM
R3IFUNEM
R4IFUNEM
R5IFUNEM
R6IFUNEM
R7IFUNEM
R8IFUNEM
R9IFUNEM
R10IFUNEM
R11IFUNEM
R12IFUNEM
R13IFUNEM
R14IFUNEM
R15IFUNEM
/*-- R_IFUNWC   --*/
R1IFUNWC
R2IFUNWC
R3IFUNWC
R4IFUNWC
R5IFUNWC
R6IFUNWC
R7IFUNWC
R8IFUNWC
R9IFUNWC
R10IFUNWC
R11IFUNWC
R12IFUNWC
R13IFUNWC
R14IFUNWC
R15IFUNWC
/*-- R_IFWCMP   --*/
R1IFWCMP
R2IFWCMP
R3IFWCMP
R4IFWCMP
R5IFWCMP
R6IFWCMP
R7IFWCMP
R8IFWCMP
R9IFWCMP
R10IFWCMP
R11IFWCMP
R12IFWCMP
R13IFWCMP
R14IFWCMP
R15IFWCMP
/*-- R_IGXFR   --*/
R1IGXFR
R2IGXFR
R3IGXFR
R4IGXFR
R5IGXFR
R6IGXFR
R7IGXFR
R8IGXFR
R9IGXFR
R10IGXFR
R11IGXFR
R12IGXFR
R13IGXFR
R14IGXFR
R15IGXFR
/*-- R_IIRAW   --*/
R5IIRAW
R6IIRAW
R7IIRAW
R8IIRAW
R9IIRAW
R10IIRAW
R11IIRAW
R12IIRAW
R13IIRAW
R14IIRAW
R15IIRAW
/*-- R_IIRAWY1   --*/
R2IIRAWY1
R5IIRAWY1
R6IIRAWY1
R7IIRAWY1
R8IIRAWY1
R9IIRAWY1
R10IIRAWY1
R11IIRAWY1
R12IIRAWY1
R13IIRAWY1
R14IIRAWY1
R15IIRAWY1
/*-- R_IMRC   --*/
R3IMRC
R4IMRC
R5IMRC
R6IMRC
R7IMRC
R8IMRC
R9IMRC
R10IMRC
R11IMRC
R12IMRC
R13IMRC
/*-- R_IMRC20   --*/
R1IMRC20
/*-- R_INHER   --*/
R2INHER
R3INHER
R4INHER
R5INHER
R6INHER
R7INHER
R8INHER
/*-- R_INHPE   --*/
R3INHPE
R4INHPE
R5INHPE
R6INHPE
R7INHPE
R8INHPE
R9INHPE
R10INHPE
R11INHPE
R12INHPE
R13INHPE
R14INHPE
R15INHPE
/*-- R_INHPFN   --*/
R3INHPFN
R4INHPFN
R5INHPFN
R6INHPFN
R7INHPFN
R8INHPFN
R9INHPFN
R10INHPFN
R11INHPFN
R12INHPFN
R13INHPFN
R14INHPFN
R15INHPFN
/*-- R_INHPNFN   --*/
R3INHPNFN
R4INHPNFN
R5INHPNFN
R6INHPNFN
R7INHPNFN
R8INHPNFN
R9INHPNFN
R10INHPNFN
R11INHPNFN
R12INHPNFN
R13INHPNFN
R14INHPNFN
R15INHPNFN
/*-- R_INHPPN   --*/
R3INHPPN
R4INHPPN
R5INHPPN
R6INHPPN
R7INHPPN
R8INHPPN
R9INHPPN
R10INHPPN
R11INHPPN
R12INHPPN
R13INHPPN
R14INHPPN
R15INHPPN
/*-- R_INHPTN   --*/
R3INHPTN
R4INHPTN
R5INHPTN
R6INHPTN
R7INHPTN
R8INHPTN
R9INHPTN
R10INHPTN
R11INHPTN
R12INHPTN
R13INHPTN
R14INHPTN
R15INHPTN
/*-- R_INHPUN   --*/
R3INHPUN
R4INHPUN
R5INHPUN
R6INHPUN
R7INHPUN
R8INHPUN
R9INHPUN
R10INHPUN
R11INHPUN
R12INHPUN
R13INHPUN
R14INHPUN
R15INHPUN
/*-- R_INLBRF   --*/
R1INLBRF
R2INLBRF
R3INLBRF
R4INLBRF
R5INLBRF
R6INLBRF
R7INLBRF
R8INLBRF
R9INLBRF
R10INLBRF
R11INLBRF
R12INLBRF
R13INLBRF
R14INLBRF
R15INLBRF
/*-- R_IPEN   --*/
R1IPEN
R2IPEN
R3IPEN
R4IPEN
R5IPEN
R6IPEN
R7IPEN
R8IPEN
R9IPEN
R10IPEN
R11IPEN
R12IPEN
R13IPEN
R14IPEN
R15IPEN
/*-- R_IPENA   --*/
R1IPENA
R2IPENA
R3IPENA
R4IPENA
R5IPENA
R6IPENA
R7IPENA
R8IPENA
R9IPENA
R10IPENA
R11IPENA
R12IPENA
R13IPENA
R14IPENA
R15IPENA
/*-- R_ISDI   --*/
R1ISDI
R2ISDI
R3ISDI
R4ISDI
R5ISDI
R6ISDI
R7ISDI
R8ISDI
R9ISDI
R10ISDI
R11ISDI
R12ISDI
R13ISDI
R14ISDI
R15ISDI
/*-- R_ISRET   --*/
R1ISRET
R2ISRET
R3ISRET
R4ISRET
R5ISRET
R6ISRET
R7ISRET
R8ISRET
R9ISRET
R10ISRET
R11ISRET
R12ISRET
R13ISRET
R14ISRET
R15ISRET
/*-- R_ISSDI   --*/
R1ISSDI
R2ISSDI
R3ISSDI
R4ISSDI
R5ISSDI
R6ISSDI
R7ISSDI
R8ISSDI
R9ISSDI
R10ISSDI
R11ISSDI
R12ISSDI
R13ISSDI
R14ISSDI
R15ISSDI
/*-- R_ISSI   --*/
R1ISSI
R2ISSI
R3ISSI
R4ISSI
R5ISSI
R6ISSI
R7ISSI
R8ISSI
R9ISSI
R10ISSI
R11ISSI
R12ISSI
R13ISSI
R14ISSI
R15ISSI
/*-- R_IUNEM   --*/
R1IUNEM
R2IUNEM
R3IUNEM
R4IUNEM
R5IUNEM
R6IUNEM
R7IUNEM
R8IUNEM
R9IUNEM
R10IUNEM
R11IUNEM
R12IUNEM
R13IUNEM
R14IUNEM
R15IUNEM
/*-- R_IUNWC   --*/
R1IUNWC
R2IUNWC
R3IUNWC
R4IUNWC
R5IUNWC
R6IUNWC
R7IUNWC
R8IUNWC
R9IUNWC
R10IUNWC
R11IUNWC
R12IUNWC
R13IUNWC
R14IUNWC
R15IUNWC
/*-- R_IWBEG   --*/
R1IWBEG
R2IWBEG
R3IWBEG
R4IWBEG
R5IWBEG
R6IWBEG
R7IWBEG
R8IWBEG
R9IWBEG
R10IWBEG
R11IWBEG
R12IWBEG
R13IWBEG
R14IWBEG
R15IWBEG
/*-- R_IWBEGF   --*/
R1IWBEGF
R2IWBEGF
/*-- R_IWCMP   --*/
R1IWCMP
R2IWCMP
R3IWCMP
R4IWCMP
R5IWCMP
R6IWCMP
R7IWCMP
R8IWCMP
R9IWCMP
R10IWCMP
R11IWCMP
R12IWCMP
R13IWCMP
R14IWCMP
R15IWCMP
/*-- R_IWEND   --*/
R1IWEND
R2IWEND
R3IWEND
R4IWEND
R5IWEND
R6IWEND
R7IWEND
R8IWEND
R9IWEND
R10IWEND
R11IWEND
R12IWEND
R13IWEND
R14IWEND
R15IWEND
/*-- R_IWENDF   --*/
R1IWENDF
R2IWENDF
R3IWENDF
/*-- R_IWENDM   --*/
R1IWENDM
R2IWENDM
R3IWENDM
R4IWENDM
R5IWENDM
R6IWENDM
R7IWENDM
R8IWENDM
R9IWENDM
R10IWENDM
R11IWENDM
R12IWENDM
R13IWENDM
R14IWENDM
R15IWENDM
/*-- R_IWENDY   --*/
R1IWENDY
R2IWENDY
R3IWENDY
R4IWENDY
R5IWENDY
R6IWENDY
R7IWENDY
R8IWENDY
R9IWENDY
R10IWENDY
R11IWENDY
R12IWENDY
R13IWENDY
R14IWENDY
R15IWENDY
/*-- R_IWMID   --*/
R1IWMID
R2IWMID
R3IWMID
R4IWMID
R5IWMID
R6IWMID
R7IWMID
R8IWMID
R9IWMID
R10IWMID
R11IWMID
R12IWMID
R13IWMID
R14IWMID
R15IWMID
/*-- R_IWMIDF   --*/
R1IWMIDF
R2IWMIDF
R3IWMIDF
R4IWMIDF
R5IWMIDF
R6IWMIDF
R7IWMIDF
R8IWMIDF
R9IWMIDF
R10IWMIDF
R11IWMIDF
R12IWMIDF
R13IWMIDF
R14IWMIDF
R15IWMIDF
/*-- R_IWSTAT   --*/
R1IWSTAT
R2IWSTAT
R3IWSTAT
R4IWSTAT
R5IWSTAT
R6IWSTAT
R7IWSTAT
R8IWSTAT
R9IWSTAT
R10IWSTAT
R11IWSTAT
R12IWSTAT
R13IWSTAT
R14IWSTAT
R15IWSTAT
/*-- R_JCIND   --*/
R1JCIND
R2JCIND
R3JCIND
R4JCIND
R5JCIND
R6JCIND
R7JCIND
R8JCIND
R9JCIND
R10JCIND
R11JCIND
R12JCIND
R13JCIND
R14JCIND
R15JCIND
/*-- R_JCINDB   --*/
R7JCINDB
R8JCINDB
R9JCINDB
R10JCINDB
R11JCINDB
R12JCINDB
R13JCINDB
R14JCINDB
R15JCINDB
/*-- R_JCINDC   --*/
R10JCINDC
R11JCINDC
R12JCINDC
R13JCINDC
R14JCINDC
R15JCINDC
/*-- R_JCOCC   --*/
R1JCOCC
R2JCOCC
R3JCOCC
R4JCOCC
R5JCOCC
R6JCOCC
R7JCOCC
R8JCOCC
R9JCOCC
R10JCOCC
R11JCOCC
R12JCOCC
R13JCOCC
R14JCOCC
R15JCOCC
/*-- R_JCOCCA   --*/
R2JCOCCA
R3JCOCCA
R4JCOCCA
R5JCOCCA
R6JCOCCA
R7JCOCCA
R8JCOCCA
R9JCOCCA
R10JCOCCA
R11JCOCCA
R12JCOCCA
R13JCOCCA
R14JCOCCA
R15JCOCCA
/*-- R_JCOCCB   --*/
R7JCOCCB
R8JCOCCB
R9JCOCCB
R10JCOCCB
R11JCOCCB
R12JCOCCB
R13JCOCCB
R14JCOCCB
R15JCOCCB
/*-- R_JCOCCC   --*/
R10JCOCCC
R11JCOCCC
R12JCOCCC
R13JCOCCC
R14JCOCCC
R15JCOCCC
/*-- R_JCPEN   --*/
R1JCPEN
R2JCPEN
R3JCPEN
R4JCPEN
R5JCPEN
R6JCPEN
R7JCPEN
R8JCPEN
R9JCPEN
R10JCPEN
R11JCPEN
R12JCPEN
R13JCPEN
R14JCPEN
R15JCPEN
/*-- R_JCPENF   --*/
R1JCPENF
R2JCPENF
R3JCPENF
R4JCPENF
R5JCPENF
R6JCPENF
R7JCPENF
R8JCPENF
/*-- R_JCTEN   --*/
R1JCTEN
R2JCTEN
R3JCTEN
R4JCTEN
R5JCTEN
R6JCTEN
R7JCTEN
R8JCTEN
R9JCTEN
R10JCTEN
R11JCTEN
R12JCTEN
R13JCTEN
R14JCTEN
R15JCTEN
/*-- R_JHOUR2   --*/
R1JHOUR2
R2JHOUR2
R3JHOUR2
R4JHOUR2
R5JHOUR2
R6JHOUR2
R7JHOUR2
R8JHOUR2
R9JHOUR2
R10JHOUR2
R11JHOUR2
R12JHOUR2
R13JHOUR2
R14JHOUR2
R15JHOUR2
/*-- R_JHOURS   --*/
R1JHOURS
R2JHOURS
R3JHOURS
R4JHOURS
R5JHOURS
R6JHOURS
R7JHOURS
R8JHOURS
R9JHOURS
R10JHOURS
R11JHOURS
R12JHOURS
R13JHOURS
R14JHOURS
R15JHOURS
/*-- R_JJOBS   --*/
R1JJOBS
R2JJOBS
R3JJOBS
R4JJOBS
R5JJOBS
R6JJOBS
R7JJOBS
R8JJOBS
R9JJOBS
R10JJOBS
R11JJOBS
R12JJOBS
R13JJOBS
R14JJOBS
R15JJOBS
/*-- R_JLASTM   --*/
R1JLASTM
R2JLASTM
R3JLASTM
R4JLASTM
R5JLASTM
R6JLASTM
R7JLASTM
R8JLASTM
R9JLASTM
R10JLASTM
R11JLASTM
R12JLASTM
R13JLASTM
R14JLASTM
R15JLASTM
/*-- R_JLASTY   --*/
R1JLASTY
R2JLASTY
R3JLASTY
R4JLASTY
R5JLASTY
R6JLASTY
R7JLASTY
R8JLASTY
R9JLASTY
R10JLASTY
R11JLASTY
R12JLASTY
R13JLASTY
R14JLASTY
R15JLASTY
/*-- R_JLIFT   --*/
R1JLIFT
R2JLIFT
R3JLIFT
R4JLIFT
R5JLIFT
R6JLIFT
R7JLIFT
R8JLIFT
R9JLIFT
R10JLIFT
R11JLIFT
R12JLIFT
R13JLIFT
R14JLIFT
R15JLIFT
/*-- R_JLIND   --*/
R1JLIND
R2JLIND
R3JLIND
R4JLIND
R5JLIND
R6JLIND
R7JLIND
R8JLIND
R9JLIND
R10JLIND
R11JLIND
R12JLIND
R13JLIND
R14JLIND
R15JLIND
/*-- R_JLINDB   --*/
R7JLINDB
R8JLINDB
R9JLINDB
R10JLINDB
R11JLINDB
R12JLINDB
R13JLINDB
R14JLINDB
R15JLINDB
/*-- R_JLINDC   --*/
R10JLINDC
R11JLINDC
R12JLINDC
R13JLINDC
R14JLINDC
R15JLINDC
/*-- R_JLMIS   --*/
R1JLMIS
R2JLMIS
R3JLMIS
R4JLMIS
R5JLMIS
R6JLMIS
R7JLMIS
R8JLMIS
R9JLMIS
R10JLMIS
R11JLMIS
R12JLMIS
R13JLMIS
R14JLMIS
R15JLMIS
/*-- R_JLOCC   --*/
R1JLOCC
R2JLOCC
R3JLOCC
R4JLOCC
R5JLOCC
R6JLOCC
R7JLOCC
R8JLOCC
R9JLOCC
R10JLOCC
R11JLOCC
R12JLOCC
R13JLOCC
R14JLOCC
R15JLOCC
/*-- R_JLOCCA   --*/
R1JLOCCA
R2JLOCCA
R3JLOCCA
R4JLOCCA
R5JLOCCA
R6JLOCCA
R7JLOCCA
R8JLOCCA
R9JLOCCA
R10JLOCCA
R11JLOCCA
R12JLOCCA
R13JLOCCA
R14JLOCCA
R15JLOCCA
/*-- R_JLOCCB   --*/
R7JLOCCB
R8JLOCCB
R9JLOCCB
R10JLOCCB
R11JLOCCB
R12JLOCCB
R13JLOCCB
R14JLOCCB
R15JLOCCB
/*-- R_JLOCCC   --*/
R10JLOCCC
R11JLOCCC
R12JLOCCC
R13JLOCCC
R14JLOCCC
R15JLOCCC
/*-- R_JLTEN   --*/
R1JLTEN
R2JLTEN
R3JLTEN
R4JLTEN
R5JLTEN
R6JLTEN
R7JLTEN
R8JLTEN
R9JLTEN
R10JLTEN
R11JLTEN
R12JLTEN
R13JLTEN
R14JLTEN
R15JLTEN
/*-- R_JLTENF   --*/
R1JLTENF
R2JLTENF
R3JLTENF
R4JLTENF
R5JLTENF
R6JLTENF
R7JLTENF
R8JLTENF
R9JLTENF
R10JLTENF
R11JLTENF
R12JLTENF
R13JLTENF
R14JLTENF
R15JLTENF
/*-- R_JMISS   --*/
R1JMISS
R2JMISS
R3JMISS
R4JMISS
R5JMISS
R6JMISS
R7JMISS
R8JMISS
R9JMISS
R10JMISS
R11JMISS
R12JMISS
R13JMISS
R14JMISS
R15JMISS
/*-- R_JNJOB   --*/
R1JNJOB
R2JNJOB
R3JNJOB
R4JNJOB
R5JNJOB
R6JNJOB
R7JNJOB
R8JNJOB
R9JNJOB
R10JNJOB
R11JNJOB
R12JNJOB
R13JNJOB
R14JNJOB
R15JNJOB
/*-- R_JNJOB5   --*/
R1JNJOB5
R2JNJOB5
R3JNJOB5
R4JNJOB5
R5JNJOB5
R6JNJOB5
R7JNJOB5
R8JNJOB5
R9JNJOB5
R10JNJOB5
R11JNJOB5
R12JNJOB5
R13JNJOB5
R14JNJOB5
R15JNJOB5
/*-- R1_JOG   --*/
R1JOG
/*-- R2_JOG   --*/
R2JOG
/*-- R_JOG   --*/
R3JOG
R4JOG
R5JOG
R6JOG
R7JOG
R8JOG
R9JOG
R10JOG
R11JOG
R12JOG
R13JOG
R14JOG
R15JOG
/*-- R_JOGA   --*/
R2JOGA
R3JOGA
R4JOGA
R5JOGA
R6JOGA
R7JOGA
R8JOGA
R9JOGA
R10JOGA
R11JOGA
R12JOGA
R13JOGA
R14JOGA
R15JOGA
/*-- R_JOGW   --*/
R1JOGW
/*-- R_JPHYS   --*/
R1JPHYS
R2JPHYS
R3JPHYS
R4JPHYS
R5JPHYS
R6JPHYS
R7JPHYS
R8JPHYS
R9JPHYS
R10JPHYS
R11JPHYS
R12JPHYS
R13JPHYS
R14JPHYS
R15JPHYS
/*-- R_JSIGHT   --*/
R1JSIGHT
R2JSIGHT
R3JSIGHT
R4JSIGHT
R5JSIGHT
R6JSIGHT
R7JSIGHT
R8JSIGHT
R9JSIGHT
R10JSIGHT
R11JSIGHT
R12JSIGHT
R13JSIGHT
R14JSIGHT
R15JSIGHT
/*-- R_JSTOOP   --*/
R1JSTOOP
R2JSTOOP
R3JSTOOP
R4JSTOOP
R5JSTOOP
R6JSTOOP
R7JSTOOP
R8JSTOOP
R9JSTOOP
R10JSTOOP
R11JSTOOP
R12JSTOOP
R13JSTOOP
R14JSTOOP
R15JSTOOP
/*-- R_JSTRES   --*/
R1JSTRES
R2JSTRES
R3JSTRES
R4JSTRES
R5JSTRES
R6JSTRES
R7JSTRES
R8JSTRES
R9JSTRES
R10JSTRES
R11JSTRES
R12JSTRES
R13JSTRES
R14JSTRES
R15JSTRES
/*-- R_JWEEK2   --*/
R1JWEEK2
R2JWEEK2
R3JWEEK2
R4JWEEK2
R5JWEEK2
R6JWEEK2
R7JWEEK2
R8JWEEK2
R9JWEEK2
R10JWEEK2
R11JWEEK2
R12JWEEK2
R13JWEEK2
R14JWEEK2
R15JWEEK2
/*-- R_JWEEKS   --*/
R1JWEEKS
R2JWEEKS
R3JWEEKS
R4JWEEKS
R5JWEEKS
R6JWEEKS
R7JWEEKS
R8JWEEKS
R9JWEEKS
R10JWEEKS
R11JWEEKS
R12JWEEKS
R13JWEEKS
R14JWEEKS
R15JWEEKS
/*-- R_JYEARM   --*/
R1JYEARM
R2JYEARM
R3JYEARM
R4JYEARM
R5JYEARM
R6JYEARM
R7JYEARM
R8JYEARM
R9JYEARM
R10JYEARM
R11JYEARM
R12JYEARM
R13JYEARM
R14JYEARM
R15JYEARM
/*-- R_JYEARS   --*/
R1JYEARS
R2JYEARS
R3JYEARS
R4JYEARS
R5JYEARS
R6JYEARS
R7JYEARS
R8JYEARS
R9JYEARS
R10JYEARS
R11JYEARS
R12JYEARS
R13JYEARS
R14JYEARS
R15JYEARS
/*-- R_LBAGR   --*/
R8LBAGR
R9LBAGR
R10LBAGR
R11LBAGR
R12LBAGR
R13LBAGR
R14LBAGR
R15LBAGR
/*-- R_LBASSISTPRB   --*/
R8LBASSISTPRB
R10LBASSISTPRB
R11LBASSISTPRB
R12LBASSISTPRB
R13LBASSISTPRB
R14LBASSISTPRB
R15LBASSISTPRB
/*-- R_LBCOMP   --*/
R8LBCOMP
R9LBCOMP
R10LBCOMP
R11LBCOMP
R12LBCOMP
R13LBCOMP
R14LBCOMP
R15LBCOMP
/*-- R_LBCON10   --*/
R10LBCON10
R11LBCON10
R12LBCON10
R13LBCON10
R14LBCON10
R15LBCON10
/*-- R_LBCON5   --*/
R8LBCON5
R9LBCON5
R10LBCON5
R11LBCON5
R12LBCON5
R13LBCON5
R14LBCON5
R15LBCON5
/*-- R_LBELIG   --*/
R8LBELIG
R9LBELIG
R10LBELIG
R11LBELIG
R12LBELIG
R13LBELIG
R14LBELIG
R15LBELIG
/*-- R_LBEXT   --*/
R8LBEXT
R9LBEXT
R10LBEXT
R11LBEXT
R12LBEXT
R13LBEXT
R14LBEXT
R15LBEXT
/*-- R_LBFAMDRUGPRB   --*/
R8LBFAMDRUGPRB
R10LBFAMDRUGPRB
R11LBFAMDRUGPRB
R12LBFAMDRUGPRB
R13LBFAMDRUGPRB
R14LBFAMDRUGPRB
R15LBFAMDRUGPRB
/*-- R_LBFAMHLTHPRB   --*/
R8LBFAMHLTHPRB
R10LBFAMHLTHPRB
R11LBFAMHLTHPRB
R12LBFAMHLTHPRB
R13LBFAMHLTHPRB
R14LBFAMHLTHPRB
R15LBFAMHLTHPRB
/*-- R_LBFINPRB   --*/
R8LBFINPRB
R10LBFINPRB
R11LBFINPRB
R12LBFINPRB
R13LBFINPRB
R14LBFINPRB
R15LBFINPRB
/*-- R_LBHLTHPRB   --*/
R8LBHLTHPRB
R10LBHLTHPRB
R11LBHLTHPRB
R12LBHLTHPRB
R13LBHLTHPRB
R14LBHLTHPRB
R15LBHLTHPRB
/*-- R_LBHOUSEPRB   --*/
R8LBHOUSEPRB
R10LBHOUSEPRB
R11LBHOUSEPRB
R12LBHOUSEPRB
R13LBHOUSEPRB
R14LBHOUSEPRB
R15LBHOUSEPRB
/*-- R_LBLONELY11   --*/
R9LBLONELY11
R10LBLONELY11
R11LBLONELY11
R12LBLONELY11
R13LBLONELY11
R14LBLONELY11
R15LBLONELY11
/*-- R_LBLONELY3   --*/
R8LBLONELY3
R9LBLONELY3
R10LBLONELY3
R11LBLONELY3
R12LBLONELY3
R13LBLONELY3
R14LBLONELY3
R15LBLONELY3
/*-- R_LBNEGAFFECT   --*/
R9LBNEGAFFECT
R10LBNEGAFFECT
R11LBNEGAFFECT
R12LBNEGAFFECT
R13LBNEGAFFECT
R14LBNEGAFFECT
R15LBNEGAFFECT
/*-- R_LBNEGAFFECT6   --*/
R8LBNEGAFFECT6
/*-- R_LBNEUR   --*/
R8LBNEUR
R9LBNEUR
R10LBNEUR
R11LBNEUR
R12LBNEUR
R13LBNEUR
R14LBNEUR
R15LBNEUR
/*-- R_LBONCHRSTR   --*/
R8LBONCHRSTR
R10LBONCHRSTR
R11LBONCHRSTR
R12LBONCHRSTR
R13LBONCHRSTR
R14LBONCHRSTR
R15LBONCHRSTR
/*-- R_LBOPEN   --*/
R8LBOPEN
R9LBOPEN
R10LBOPEN
R11LBOPEN
R12LBOPEN
R13LBOPEN
R14LBOPEN
R15LBOPEN
/*-- R_LBPOSAFFECT   --*/
R9LBPOSAFFECT
R10LBPOSAFFECT
R11LBPOSAFFECT
R12LBPOSAFFECT
R13LBPOSAFFECT
R14LBPOSAFFECT
R15LBPOSAFFECT
/*-- R_LBPOSAFFECT6   --*/
R8LBPOSAFFECT6
/*-- R_LBRF   --*/
R1LBRF
R2LBRF
R3LBRF
R4LBRF
R5LBRF
R6LBRF
R7LBRF
R8LBRF
R9LBRF
R10LBRF
R11LBRF
R12LBRF
R13LBRF
R14LBRF
R15LBRF
/*-- R_LBRFH   --*/
R1LBRFH
R2LBRFH
R3LBRFH
R4LBRFH
R5LBRFH
R6LBRFH
R7LBRFH
R8LBRFH
R9LBRFH
R10LBRFH
R11LBRFH
R12LBRFH
R13LBRFH
R14LBRFH
R15LBRFH
/*-- R_LBRFY   --*/
R1LBRFY
R2LBRFY
R3LBRFY
R4LBRFY
R5LBRFY
R6LBRFY
R7LBRFY
R8LBRFY
R9LBRFY
R10LBRFY
R11LBRFY
R12LBRFY
R13LBRFY
R14LBRFY
R15LBRFY
/*-- R_LBRLTNSHPRB   --*/
R8LBRLTNSHPRB
R10LBRLTNSHPRB
R11LBRLTNSHPRB
R12LBRLTNSHPRB
R13LBRLTNSHPRB
R14LBRLTNSHPRB
R15LBRLTNSHPRB
/*-- R_LBSATCITY   --*/
R9LBSATCITY
R10LBSATCITY
R11LBSATCITY
R12LBSATCITY
R13LBSATCITY
R14LBSATCITY
R15LBSATCITY
/*-- R_LBSATFAM   --*/
R9LBSATFAM
R10LBSATFAM
R11LBSATFAM
R12LBSATFAM
R13LBSATFAM
R14LBSATFAM
R15LBSATFAM
/*-- R_LBSATFIN   --*/
R8LBSATFIN
R9LBSATFIN
R10LBSATFIN
R11LBSATFIN
R12LBSATFIN
R13LBSATFIN
R14LBSATFIN
R15LBSATFIN
/*-- R_LBSATHLTH   --*/
R9LBSATHLTH
R10LBSATHLTH
R11LBSATHLTH
R12LBSATHLTH
R13LBSATHLTH
R14LBSATHLTH
R15LBSATHLTH
/*-- R_LBSATHOME   --*/
R9LBSATHOME
R10LBSATHOME
R11LBSATHOME
R12LBSATHOME
R13LBSATHOME
R14LBSATHOME
R15LBSATHOME
/*-- R_LBSATINC   --*/
R10LBSATINC
R11LBSATINC
R12LBSATINC
R13LBSATINC
R14LBSATINC
R15LBSATINC
/*-- R_LBSATLEISURE   --*/
R9LBSATLEISURE
R10LBSATLEISURE
R11LBSATLEISURE
R12LBSATLEISURE
R13LBSATLEISURE
R14LBSATLEISURE
R15LBSATLEISURE
/*-- R_LBSATLIFE   --*/
R9LBSATLIFE
R10LBSATLIFE
R11LBSATLIFE
/*-- R_LBSATWLF   --*/
R8LBSATWLF
R9LBSATWLF
R10LBSATWLF
R11LBSATWLF
R12LBSATWLF
R13LBSATWLF
R14LBSATWLF
R15LBSATWLF
/*-- R_LBWGTR   --*/
R8LBWGTR
R9LBWGTR
R10LBWGTR
R11LBWGTR
R12LBWGTR
R13LBWGTR
R14LBWGTR
/*-- R_LBWORKPRB   --*/
R8LBWORKPRB
R10LBWORKPRB
R11LBWORKPRB
R12LBWORKPRB
R13LBWORKPRB
R14LBWORKPRB
R15LBWORKPRB
/*-- R_LGMUSA   --*/
R2LGMUSA
R3LGMUSA
R4LGMUSA
R5LGMUSA
R6LGMUSA
R7LGMUSA
R8LGMUSA
R9LGMUSA
R10LGMUSA
R11LGMUSA
R12LGMUSA
R13LGMUSA
R14LGMUSA
R15LGMUSA
/*-- R_LGMUSW   --*/
R1LGMUSW
/*-- R_LHTACT   --*/
R1LHTACT
R2LHTACT
/*-- R_LIFEIN   --*/
R1LIFEIN
R2LIFEIN
R3LIFEIN
R4LIFEIN
R5LIFEIN
R6LIFEIN
R7LIFEIN
R8LIFEIN
R9LIFEIN
R10LIFEIN
R11LIFEIN
R12LIFEIN
R13LIFEIN
R14LIFEIN
R15LIFEIN
/*-- R1_LIFT   --*/
R1LIFT
/*-- R2_LIFT   --*/
R2LIFT
/*-- R_LIFT   --*/
R3LIFT
R4LIFT
R5LIFT
R6LIFT
R7LIFT
R8LIFT
R9LIFT
R10LIFT
R11LIFT
R12LIFT
R13LIFT
R14LIFT
R15LIFT
/*-- R_LIFTA   --*/
R2LIFTA
R3LIFTA
R4LIFTA
R5LIFTA
R6LIFTA
R7LIFTA
R8LIFTA
R9LIFTA
R10LIFTA
R11LIFTA
R12LIFTA
R13LIFTA
R14LIFTA
R15LIFTA
/*-- R_LIFTW   --*/
R1LIFTW
/*-- R_LIV10   --*/
R2LIV10
R3LIV10
R5LIV10
R6LIV10
R7LIV10
R8LIV10
R9LIV10
R10LIV10
R11LIV10
R12LIV10
R13LIV10
R14LIV10
R15LIV10
/*-- R_LIV10A   --*/
R2LIV10A
R3LIV10A
R5LIV10A
R6LIV10A
R7LIV10A
R8LIV10A
R9LIV10A
R10LIV10A
R11LIV10A
R12LIV10A
R13LIV10A
R14LIV10A
R15LIV10A
/*-- R_LIV10P   --*/
R2LIV10P
R3LIV10P
R5LIV10P
R6LIV10P
R7LIV10P
R8LIV10P
R9LIV10P
R10LIV10P
R11LIV10P
R12LIV10P
R13LIV10P
R14LIV10P
R15LIV10P
/*-- R_LIV10R   --*/
R2LIV10R
R3LIV10R
R5LIV10R
R6LIV10R
R7LIV10R
R8LIV10R
R9LIV10R
R10LIV10R
R11LIV10R
R12LIV10R
R13LIV10R
R14LIV10R
R15LIV10R
/*-- R_LIV75   --*/
R1LIV75
R2LIV75
R3LIV75
R4LIV75
R5LIV75
R6LIV75
R7LIV75
R8LIV75
R9LIV75
R10LIV75
R11LIV75
R12LIV75
R13LIV75
R14LIV75
R15LIV75
/*-- R_LIV75C   --*/
R2LIV75C
R3LIV75C
R4LIV75C
R5LIV75C
R6LIV75C
R7LIV75C
R8LIV75C
R9LIV75C
R10LIV75C
R11LIV75C
R12LIV75C
R13LIV75C
R14LIV75C
R15LIV75C
/*-- R_LIV75F   --*/
R2LIV75F
R3LIV75F
R4LIV75F
R5LIV75F
R6LIV75F
R7LIV75F
R8LIV75F
R9LIV75F
R10LIV75F
R11LIV75F
R12LIV75F
R13LIV75F
R14LIV75F
R15LIV75F
/*-- R_LIV75P   --*/
R1LIV75P
R2LIV75P
R3LIV75P
R4LIV75P
R5LIV75P
R6LIV75P
R7LIV75P
R8LIV75P
R9LIV75P
R10LIV75P
R11LIV75P
R12LIV75P
R13LIV75P
R14LIV75P
R15LIV75P
/*-- R_LIV75R   --*/
R1LIV75R
R2LIV75R
R3LIV75R
R4LIV75R
R5LIV75R
R6LIV75R
R7LIV75R
R8LIV75R
R9LIV75R
R10LIV75R
R11LIV75R
R12LIV75R
R13LIV75R
R14LIV75R
R15LIV75R
/*-- R_LIV85   --*/
R1LIV85
R2LIV85
R3LIV85
R4LIV85
/*-- R_LIV85C   --*/
R2LIV85C
R3LIV85C
R4LIV85C
/*-- R_LIV85F   --*/
R2LIV85F
R3LIV85F
R4LIV85F
/*-- R_LIV85P   --*/
R1LIV85P
R2LIV85P
R3LIV85P
R4LIV85P
/*-- R_LIV85R   --*/
R1LIV85R
R2LIV85R
R3LIV85R
R4LIV85R
/*-- R_LIV8XC   --*/
R2LIV8XC
R3LIV8XC
R4LIV8XC
R5LIV8XC
R6LIV8XC
R7LIV8XC
R8LIV8XC
R9LIV8XC
R10LIV8XC
R11LIV8XC
R12LIV8XC
R13LIV8XC
R14LIV8XC
R15LIV8XC
/*-- R_LIV8XF   --*/
R2LIV8XF
R3LIV8XF
R4LIV8XF
R5LIV8XF
R6LIV8XF
R7LIV8XF
R8LIV8XF
R9LIV8XF
R10LIV8XF
R11LIV8XF
R12LIV8XF
R13LIV8XF
R14LIV8XF
R15LIV8XF
/*-- R_LIVBRO   --*/
R1LIVBRO
R2LIVBRO
R3LIVBRO
R4LIVBRO
R5LIVBRO
R6LIVBRO
R7LIVBRO
R8LIVBRO
R9LIVBRO
R10LIVBRO
R11LIVBRO
R12LIVBRO
R13LIVBRO
R14LIVBRO
R15LIVBRO
/*-- R_LIVPAR   --*/
R1LIVPAR
R2LIVPAR
R3LIVPAR
R4LIVPAR
R5LIVPAR
R6LIVPAR
R7LIVPAR
R8LIVPAR
R9LIVPAR
R10LIVPAR
R11LIVPAR
R12LIVPAR
R13LIVPAR
R14LIVPAR
R15LIVPAR
/*-- R_LIVSIB   --*/
R1LIVSIB
R2LIVSIB
R3LIVSIB
R4LIVSIB
R5LIVSIB
R6LIVSIB
R7LIVSIB
R8LIVSIB
R9LIVSIB
R10LIVSIB
R11LIVSIB
R12LIVSIB
R13LIVSIB
R14LIVSIB
R15LIVSIB
/*-- R_LIVSIS   --*/
R1LIVSIS
R2LIVSIS
R3LIVSIS
R4LIVSIS
R5LIVSIS
R6LIVSIS
R7LIVSIS
R8LIVSIS
R9LIVSIS
R10LIVSIS
R11LIVSIS
R12LIVSIS
R13LIVSIS
R14LIVSIS
R15LIVSIS
/*-- R_LOST   --*/
R2LOST
R3LOST
R4LOST
R5LOST
R6LOST
R7LOST
R8LOST
R9LOST
R10LOST
R11LOST
R12LOST
R13LOST
R14LOST
R15LOST
/*-- R_LTACTF   --*/
R1LTACTF
/*-- R_LTACTN   --*/
R2LTACTN
/*-- R_LTACTP   --*/
R2LTACTP
/*-- R_LTACTX   --*/
R7LTACTX
R8LTACTX
R9LTACTX
R10LTACTX
R11LTACTX
R12LTACTX
R13LTACTX
R14LTACTX
R15LTACTX
/*-- R_LTCPRM   --*/
R1LTCPRM
R2LTCPRM
R3LTCPRM
R4LTCPRM
R5LTCPRM
R6LTCPRM
R7LTCPRM
R8LTCPRM
R9LTCPRM
R10LTCPRM
R11LTCPRM
R12LTCPRM
R13LTCPRM
R14LTCPRM
R15LTCPRM
/*-- R_LUNG   --*/
R1LUNG
R2LUNG
R3LUNG
R4LUNG
R5LUNG
R6LUNG
R7LUNG
R8LUNG
R9LUNG
R10LUNG
R11LUNG
R12LUNG
R13LUNG
R14LUNG
R15LUNG
/*-- R_LUNGE   --*/
R1LUNGE
R2LUNGE
R3LUNGE
R4LUNGE
R5LUNGE
R6LUNGE
R7LUNGE
R8LUNGE
R9LUNGE
R10LUNGE
R11LUNGE
R12LUNGE
R13LUNGE
R14LUNGE
R15LUNGE
/*-- R_LUNGF   --*/
R1LUNGF
R2LUNGF
R3LUNGF
R4LUNGF
R5LUNGF
R6LUNGF
R7LUNGF
R8LUNGF
R9LUNGF
R10LUNGF
R11LUNGF
R12LUNGF
R13LUNGF
R14LUNGF
R15LUNGF
/*-- R_LUNGQ   --*/
R1LUNGQ
R2LUNGQ
R3LUNGQ
R4LUNGQ
R5LUNGQ
R6LUNGQ
R7LUNGQ
R8LUNGQ
R9LUNGQ
R10LUNGQ
R11LUNGQ
R12LUNGQ
R13LUNGQ
R14LUNGQ
R15LUNGQ
/*-- R_LUNGS   --*/
R2LUNGS
R3LUNGS
R4LUNGS
R5LUNGS
R6LUNGS
R7LUNGS
R8LUNGS
R9LUNGS
R10LUNGS
R11LUNGS
R12LUNGS
R13LUNGS
R14LUNGS
R15LUNGS
/*-- R_MAMMOG   --*/
R3MAMMOG
R4MAMMOG
R5MAMMOG
R6MAMMOG
R7MAMMOG
R8MAMMOG
R9MAMMOG
R10MAMMOG
R11MAMMOG
R12MAMMOG
R13MAMMOG
R14MAMMOG
R15MAMMOG
/*-- R1_MAP   --*/
R1MAP
/*-- R2_MAP   --*/
R2MAP
/*-- R_MAP   --*/
R3MAP
R4MAP
R5MAP
R6MAP
R7MAP
R8MAP
R9MAP
R10MAP
R11MAP
R12MAP
R13MAP
R14MAP
R15MAP
/*-- R_MAPA   --*/
R2MAPA
R3MAPA
R4MAPA
R5MAPA
R6MAPA
R7MAPA
R8MAPA
R9MAPA
R10MAPA
R11MAPA
R12MAPA
R13MAPA
R14MAPA
R15MAPA
/*-- R_MAPW   --*/
R1MAPW
/*-- R_MCURLN   --*/
R1MCURLN
R2MCURLN
R3MCURLN
R4MCURLN
R5MCURLN
R6MCURLN
R7MCURLN
R8MCURLN
R9MCURLN
R10MCURLN
R11MCURLN
R12MCURLN
R13MCURLN
R14MCURLN
R15MCURLN
/*-- R_MCWV   --*/
R1MCWV
/*-- R_MCWVW   --*/
R1MCWVW
/*-- R_MDACTX   --*/
R7MDACTX
R8MDACTX
R9MDACTX
R10MDACTX
R11MDACTX
R12MDACTX
R13MDACTX
R14MDACTX
R15MDACTX
/*-- R_MDIV   --*/
R1MDIV
R2MDIV
R3MDIV
R4MDIV
R5MDIV
R6MDIV
R7MDIV
R8MDIV
R9MDIV
R10MDIV
R11MDIV
R12MDIV
R13MDIV
R14MDIV
R15MDIV
/*-- R_MEALS   --*/
R3MEALS
R4MEALS
R5MEALS
R6MEALS
R7MEALS
R8MEALS
R9MEALS
R10MEALS
R11MEALS
R12MEALS
R13MEALS
R14MEALS
R15MEALS
/*-- R_MEALSA   --*/
R2MEALSA
R3MEALSA
R4MEALSA
R5MEALSA
R6MEALSA
R7MEALSA
R8MEALSA
R9MEALSA
R10MEALSA
R11MEALSA
R12MEALSA
R13MEALSA
R14MEALSA
R15MEALSA
/*-- R_MEALSH   --*/
R3MEALSH
R4MEALSH
R5MEALSH
R6MEALSH
R7MEALSH
R8MEALSH
R9MEALSH
R10MEALSH
R11MEALSH
R12MEALSH
R13MEALSH
R14MEALSH
R15MEALSH
/*-- R_MEALSR   --*/
R2MEALSR
/*-- R2_MEDS   --*/
R2MEDS
/*-- R_MEDS   --*/
R3MEDS
R4MEDS
R5MEDS
R6MEDS
R7MEDS
R8MEDS
R9MEDS
R10MEDS
R11MEDS
R12MEDS
R13MEDS
R14MEDS
R15MEDS
/*-- R_MEDSA   --*/
R2MEDSA
R3MEDSA
R4MEDSA
R5MEDSA
R6MEDSA
R7MEDSA
R8MEDSA
R9MEDSA
R10MEDSA
R11MEDSA
R12MEDSA
R13MEDSA
R14MEDSA
R15MEDSA
/*-- R_MEDSH   --*/
R3MEDSH
R4MEDSH
R5MEDSH
R6MEDSH
R7MEDSH
R8MEDSH
R9MEDSH
R10MEDSH
R11MEDSH
R12MEDSH
R13MEDSH
R14MEDSH
R15MEDSH
/*-- R_MEDSR   --*/
R2MEDSR
/*-- R_MEMRY   --*/
R4MEMRY
R5MEMRY
R6MEMRY
R7MEMRY
R8MEMRY
R9MEMRY
/*-- R_MEMRYE   --*/
R4MEMRYE
R5MEMRYE
R6MEMRYE
R7MEMRYE
R8MEMRYE
R9MEMRYE
/*-- R_MEMRYF   --*/
R5MEMRYF
R6MEMRYF
R7MEMRYF
R8MEMRYF
R9MEMRYF
/*-- R_MEMRYQ   --*/
R4MEMRYQ
R5MEMRYQ
R6MEMRYQ
R7MEMRYQ
R8MEMRYQ
R9MEMRYQ
/*-- R_MEMRYS   --*/
R5MEMRYS
R6MEMRYS
R7MEMRYS
R8MEMRYS
R9MEMRYS
/*-- R_MEND   --*/
R1MEND
R2MEND
R3MEND
R4MEND
R5MEND
R6MEND
R7MEND
R8MEND
R9MEND
R10MEND
R11MEND
R12MEND
R13MEND
R14MEND
R15MEND
/*-- R_MLEN   --*/
R1MLEN
R2MLEN
R3MLEN
R4MLEN
R5MLEN
R6MLEN
R7MLEN
R8MLEN
R9MLEN
R10MLEN
R11MLEN
R12MLEN
R13MLEN
R14MLEN
R15MLEN
/*-- R_MLENM   --*/
R1MLENM
R2MLENM
R3MLENM
R4MLENM
R5MLENM
R6MLENM
R7MLENM
R8MLENM
R9MLENM
R10MLENM
R11MLENM
R12MLENM
R13MLENM
R14MLENM
R15MLENM
/*-- R_MNEV   --*/
R1MNEV
R2MNEV
R3MNEV
R4MNEV
R5MNEV
R6MNEV
R7MNEV
R8MNEV
R9MNEV
R10MNEV
R11MNEV
R12MNEV
R13MNEV
R14MNEV
R15MNEV
/*-- R_MO   --*/
R2MO
R3MO
R4MO
R5MO
R6MO
R7MO
R8MO
R9MO
R10MO
R11MO
R12MO
R13MO
/*-- R_MOBILA   --*/
R2MOBILA
R3MOBILA
R4MOBILA
R5MOBILA
R6MOBILA
R7MOBILA
R8MOBILA
R9MOBILA
R10MOBILA
R11MOBILA
R12MOBILA
R13MOBILA
R14MOBILA
R15MOBILA
/*-- R_MOBILW   --*/
R1MOBILW
/*-- R_MOMAGE   --*/
R1MOMAGE
R2MOMAGE
R3MOMAGE
R4MOMAGE
R5MOMAGE
R6MOMAGE
R7MOMAGE
R8MOMAGE
R9MOMAGE
R10MOMAGE
R11MOMAGE
R12MOMAGE
R13MOMAGE
R14MOMAGE
R15MOMAGE
/*-- R_MOMLIV   --*/
R1MOMLIV
R2MOMLIV
R3MOMLIV
R4MOMLIV
R5MOMLIV
R6MOMLIV
R7MOMLIV
R8MOMLIV
R9MOMLIV
R10MOMLIV
R11MOMLIV
R12MOMLIV
R13MOMLIV
R14MOMLIV
R15MOMLIV
/*-- R2_MONEY   --*/
R2MONEY
/*-- R_MONEY   --*/
R3MONEY
R4MONEY
R5MONEY
R6MONEY
R7MONEY
R8MONEY
R9MONEY
R10MONEY
R11MONEY
R12MONEY
R13MONEY
R14MONEY
R15MONEY
/*-- R_MONEYA   --*/
R2MONEYA
R3MONEYA
R4MONEYA
R5MONEYA
R6MONEYA
R7MONEYA
R8MONEYA
R9MONEYA
R10MONEYA
R11MONEYA
R12MONEYA
R13MONEYA
R14MONEYA
R15MONEYA
/*-- R_MONEYH   --*/
R3MONEYH
R4MONEYH
R5MONEYH
R6MONEYH
R7MONEYH
R8MONEYH
R9MONEYH
R10MONEYH
R11MONEYH
R12MONEYH
R13MONEYH
R14MONEYH
R15MONEYH
/*-- R_MONEYR   --*/
R2MONEYR
/*-- R_MPART   --*/
R1MPART
R2MPART
R3MPART
R4MPART
R5MPART
R6MPART
R7MPART
R8MPART
R9MPART
R10MPART
R11MPART
R12MPART
R13MPART
R14MPART
R15MPART
/*-- R_MRCT   --*/
R1MRCT
R2MRCT
R3MRCT
R4MRCT
R5MRCT
R6MRCT
R7MRCT
R8MRCT
R9MRCT
R10MRCT
R11MRCT
R12MRCT
R13MRCT
R14MRCT
R15MRCT
/*-- R_MRPREM   --*/
R3MRPREM
R4MRPREM
R5MRPREM
R6MRPREM
R7MRPREM
R8MRPREM
R9MRPREM
R10MRPREM
R11MRPREM
R12MRPREM
R13MRPREM
R14MRPREM
R15MRPREM
/*-- R_MSTAT   --*/
R1MSTAT
R2MSTAT
R3MSTAT
R4MSTAT
R5MSTAT
R6MSTAT
R7MSTAT
R8MSTAT
R9MSTAT
R10MSTAT
R11MSTAT
R12MSTAT
R13MSTAT
R14MSTAT
R15MSTAT
/*-- R_MSTATF   --*/
R1MSTATF
R2MSTATF
R3MSTATF
R4MSTATF
R5MSTATF
R6MSTATF
R7MSTATF
R8MSTATF
R9MSTATF
R10MSTATF
R11MSTATF
R12MSTATF
R13MSTATF
R14MSTATF
R15MSTATF
/*-- R_MSTATH   --*/
R1MSTATH
R2MSTATH
R3MSTATH
R4MSTATH
R5MSTATH
R6MSTATH
R7MSTATH
R8MSTATH
R9MSTATH
R10MSTATH
R11MSTATH
R12MSTATH
R13MSTATH
R14MSTATH
R15MSTATH
/*-- R_MSTOT   --*/
R3MSTOT
R4MSTOT
R5MSTOT
R6MSTOT
R7MSTOT
R8MSTOT
R9MSTOT
R10MSTOT
R11MSTOT
R12MSTOT
R13MSTOT
/*-- R_MWID   --*/
R1MWID
R2MWID
R3MWID
R4MWID
R5MWID
R6MWID
R7MWID
R8MWID
R9MWID
R10MWID
R11MWID
R12MWID
R13MWID
R14MWID
R15MWID
/*-- R_NHMDAY   --*/
R3NHMDAY
R4NHMDAY
R5NHMDAY
R6NHMDAY
R7NHMDAY
R8NHMDAY
R9NHMDAY
R10NHMDAY
R11NHMDAY
R12NHMDAY
R13NHMDAY
R14NHMDAY
R15NHMDAY
/*-- R_NHMLIV   --*/
R3NHMLIV
R4NHMLIV
R5NHMLIV
R6NHMLIV
R7NHMLIV
R8NHMLIV
R9NHMLIV
R10NHMLIV
R11NHMLIV
R12NHMLIV
R13NHMLIV
R14NHMLIV
R15NHMLIV
/*-- R_NHMMVM   --*/
R3NHMMVM
R4NHMMVM
R5NHMMVM
R6NHMMVM
R7NHMMVM
R8NHMMVM
R9NHMMVM
R10NHMMVM
R11NHMMVM
R12NHMMVM
R13NHMMVM
R14NHMMVM
R15NHMMVM
/*-- R_NHMMVY   --*/
R3NHMMVY
R4NHMMVY
R5NHMMVY
R6NHMMVY
R7NHMMVY
R8NHMMVY
R9NHMMVY
R10NHMMVY
R11NHMMVY
R12NHMMVY
R13NHMMVY
R14NHMMVY
R15NHMMVY
/*-- R_NOTICS   --*/
R4NOTICS
R5NOTICS
R6NOTICS
R7NOTICS
R8NOTICS
R9NOTICS
R10NOTICS
R11NOTICS
R12NOTICS
R13NOTICS
/*-- R_NOVOC   --*/
R7NOVOC
R8NOVOC
R9NOVOC
R10NOVOC
R11NOVOC
R12NOVOC
R13NOVOC
/*-- R_NRSHOM   --*/
R1NRSHOM
R2NRSHOM
R3NRSHOM
R4NRSHOM
R5NRSHOM
R6NRSHOM
R7NRSHOM
R8NRSHOM
R9NRSHOM
R10NRSHOM
R11NRSHOM
R12NRSHOM
R13NRSHOM
R14NRSHOM
R15NRSHOM
/*-- R_NRSNIT   --*/
R1NRSNIT
R2NRSNIT
R3NRSNIT
R4NRSNIT
R5NRSNIT
R6NRSNIT
R7NRSNIT
R8NRSNIT
R9NRSNIT
R10NRSNIT
R11NRSNIT
R12NRSNIT
R13NRSNIT
R14NRSNIT
R15NRSNIT
/*-- R_NRSTIM   --*/
R1NRSTIM
R2NRSTIM
R3NRSTIM
R4NRSTIM
R5NRSTIM
R6NRSTIM
R7NRSTIM
R8NRSTIM
R9NRSTIM
R10NRSTIM
R11NRSTIM
R12NRSTIM
R13NRSTIM
R14NRSTIM
R15NRSTIM
/*-- R_NSSCRE   --*/
R10NSSCRE
R11NSSCRE
R13NSSCRE
/*-- R_NSSCSE   --*/
R10NSSCSE
R11NSSCSE
R13NSSCSE
/*-- R_OOPMD   --*/
R2OOPMD
R3OOPMD
R4OOPMD
R5OOPMD
R6OOPMD
R7OOPMD
R8OOPMD
R9OOPMD
R10OOPMD
R11OOPMD
R12OOPMD
R13OOPMD
R14OOPMD
R15OOPMD
/*-- R_OOPMDF   --*/
R2OOPMDF
R3OOPMDF
R4OOPMDF
R5OOPMDF
R6OOPMDF
R7OOPMDF
R8OOPMDF
R9OOPMDF
R10OOPMDF
R11OOPMDF
R12OOPMDF
R13OOPMDF
R14OOPMDF
R15OOPMDF
/*-- R_OOPMDO   --*/
R10OOPMDO
R11OOPMDO
R12OOPMDO
R13OOPMDO
R14OOPMDO
R15OOPMDO
/*-- R_OOPMDOF   --*/
R10OOPMDOF
R11OOPMDOF
R12OOPMDOF
R13OOPMDOF
R14OOPMDOF
R15OOPMDOF
/*-- R_OUTPT   --*/
R2OUTPT
R3OUTPT
R4OUTPT
R5OUTPT
R6OUTPT
R7OUTPT
R8OUTPT
R9OUTPT
R10OUTPT
R11OUTPT
R12OUTPT
R13OUTPT
R14OUTPT
R15OUTPT
/*-- R_PAPSM   --*/
R3PAPSM
R4PAPSM
R5PAPSM
R6PAPSM
R7PAPSM
R8PAPSM
R9PAPSM
R10PAPSM
R11PAPSM
R12PAPSM
R13PAPSM
R14PAPSM
R15PAPSM
/*-- R_PARTD   --*/
R8PARTD
/*-- R_PENCT   --*/
R1PENCT
R2PENCT
R3PENCT
R4PENCT
R5PENCT
R6PENCT
R7PENCT
R8PENCT
R9PENCT
R10PENCT
R11PENCT
R12PENCT
R13PENCT
R14PENCT
R15PENCT
/*-- R_PENIC1   --*/
R2PENIC1
R3PENIC1
R4PENIC1
R5PENIC1
R6PENIC1
R7PENIC1
R8PENIC1
R9PENIC1
R10PENIC1
R11PENIC1
R12PENIC1
R13PENIC1
R14PENIC1
R15PENIC1
/*-- R_PENIC2   --*/
R2PENIC2
R3PENIC2
R4PENIC2
R5PENIC2
R6PENIC2
R7PENIC2
R8PENIC2
R9PENIC2
R10PENIC2
R11PENIC2
R12PENIC2
R13PENIC2
R14PENIC2
R15PENIC2
/*-- R_PENINC   --*/
R2PENINC
R3PENINC
R4PENINC
R5PENINC
R6PENINC
R7PENINC
R8PENINC
R9PENINC
R10PENINC
R11PENINC
R12PENINC
R13PENINC
R14PENINC
R15PENINC
/*-- R_PENI_N   --*/
R2PENI_N
R3PENI_N
R4PENI_N
R5PENI_N
R6PENI_N
R7PENI_N
R8PENI_N
R9PENI_N
R10PENI_N
R11PENI_N
R12PENI_N
R13PENI_N
R14PENI_N
R15PENI_N
/*-- R_PEXIT   --*/
R2PEXIT
R3PEXIT
R4PEXIT
R5PEXIT
R6PEXIT
R7PEXIT
R8PEXIT
R9PEXIT
R10PEXIT
R11PEXIT
R12PEXIT
R13PEXIT
R14PEXIT
R15PEXIT
/*-- R2_PHONE   --*/
R2PHONE
/*-- R_PHONE   --*/
R3PHONE
R4PHONE
R5PHONE
R6PHONE
R7PHONE
R8PHONE
R9PHONE
R10PHONE
R11PHONE
R12PHONE
R13PHONE
R14PHONE
R15PHONE
/*-- R_PHONEA   --*/
R2PHONEA
R3PHONEA
R4PHONEA
R5PHONEA
R6PHONEA
R7PHONEA
R8PHONEA
R9PHONEA
R10PHONEA
R11PHONEA
R12PHONEA
R13PHONEA
R14PHONEA
R15PHONEA
/*-- R_PHONEH   --*/
R3PHONEH
R4PHONEH
R5PHONEH
R6PHONEH
R7PHONEH
R8PHONEH
R9PHONEH
R10PHONEH
R11PHONEH
R12PHONEH
R13PHONEH
R14PHONEH
R15PHONEH
/*-- R_PHONER   --*/
R2PHONER
/*-- R_PMBMI   --*/
R8PMBMI
R9PMBMI
R10PMBMI
R11PMBMI
R12PMBMI
R13PMBMI
R14PMBMI
/*-- R_PMHGHT   --*/
R8PMHGHT
R9PMHGHT
R10PMHGHT
R11PMHGHT
R12PMHGHT
R13PMHGHT
R14PMHGHT
/*-- R_PMHGHTS   --*/
R8PMHGHTS
R9PMHGHTS
R10PMHGHTS
R11PMHGHTS
R12PMHGHTS
R13PMHGHTS
R14PMHGHTS
/*-- R_PMWAIST   --*/
R8PMWAIST
R9PMWAIST
R10PMWAIST
R11PMWAIST
R12PMWAIST
R13PMWAIST
R14PMWAIST
/*-- R_PMWAISTC   --*/
R8PMWAISTC
R9PMWAISTC
R10PMWAISTC
R11PMWAISTC
R12PMWAISTC
R13PMWAISTC
R14PMWAISTC
/*-- R_PMWGHT   --*/
R8PMWGHT
R9PMWGHT
R10PMWGHT
R11PMWGHT
R12PMWGHT
R13PMWGHT
R14PMWGHT
/*-- R_PMWGHTF   --*/
R8PMWGHTF
R9PMWGHTF
R10PMWGHTF
R11PMWGHTF
R12PMWGHTF
R13PMWGHTF
R14PMWGHTF
/*-- R_PMWGHTS   --*/
R8PMWGHTS
R9PMWGHTS
R10PMWGHTS
R11PMWGHTS
R12PMWGHTS
R13PMWGHTS
R14PMWGHTS
/*-- R_PNHM5Y   --*/
R4PNHM5Y
R5PNHM5Y
R6PNHM5Y
R7PNHM5Y
R8PNHM5Y
R9PNHM5Y
R10PNHM5Y
R11PNHM5Y
R12PNHM5Y
R13PNHM5Y
R14PNHM5Y
R15PNHM5Y
/*-- R_PRCHMEM   --*/
R4PRCHMEM
R5PRCHMEM
R6PRCHMEM
R7PRCHMEM
R8PRCHMEM
R9PRCHMEM
R10PRCHMEM
R11PRCHMEM
R12PRCHMEM
R13PRCHMEM
R14PRCHMEM
R15PRCHMEM
/*-- R_PRES   --*/
R2PRES
R3PRES
R4PRES
R5PRES
R6PRES
R7PRES
R8PRES
R9PRES
R10PRES
R11PRES
R12PRES
R13PRES
/*-- R_PRMEM   --*/
R2PRMEM
R3PRMEM
R4PRMEM
R5PRMEM
R6PRMEM
R7PRMEM
R8PRMEM
R9PRMEM
R10PRMEM
R11PRMEM
R12PRMEM
R13PRMEM
R14PRMEM
R15PRMEM
/*-- R_PROST   --*/
R3PROST
R4PROST
R5PROST
R6PROST
R7PROST
R8PROST
R9PROST
R10PROST
R11PROST
R12PROST
R13PROST
R14PROST
R15PROST
/*-- R_PROXY   --*/
R1PROXY
R2PROXY
R3PROXY
R4PROXY
R5PROXY
R6PROXY
R7PROXY
R8PROXY
R9PROXY
R10PROXY
R11PROXY
R12PROXY
R13PROXY
R14PROXY
R15PROXY
/*-- R_PRPCNT   --*/
R1PRPCNT
R2PRPCNT
R3PRPCNT
R4PRPCNT
R5PRPCNT
R6PRPCNT
R7PRPCNT
R8PRPCNT
R9PRPCNT
R10PRPCNT
R11PRPCNT
R12PRPCNT
R13PRPCNT
R14PRPCNT
R15PRPCNT
/*-- R_PRPRM1   --*/
R1PRPRM1
R2PRPRM1
R3PRPRM1
R4PRPRM1
R5PRPRM1
R6PRPRM1
R7PRPRM1
R8PRPRM1
R9PRPRM1
R10PRPRM1
R11PRPRM1
R12PRPRM1
R13PRPRM1
R14PRPRM1
R15PRPRM1
/*-- R_PRPRM2   --*/
R2PRPRM2
R3PRPRM2
R4PRPRM2
R5PRPRM2
R6PRPRM2
R7PRPRM2
R8PRPRM2
R9PRPRM2
R10PRPRM2
R11PRPRM2
R12PRPRM2
R13PRPRM2
R14PRPRM2
R15PRPRM2
/*-- R_PRPRM3   --*/
R2PRPRM3
R3PRPRM3
R6PRPRM3
R7PRPRM3
R8PRPRM3
R9PRPRM3
R10PRPRM3
R11PRPRM3
R12PRPRM3
R13PRPRM3
R14PRPRM3
R15PRPRM3
/*-- R_PRSRC1   --*/
R1PRSRC1
R2PRSRC1
R3PRSRC1
R4PRSRC1
R5PRSRC1
R6PRSRC1
R7PRSRC1
R8PRSRC1
R9PRSRC1
R10PRSRC1
R11PRSRC1
R12PRSRC1
R13PRSRC1
R14PRSRC1
R15PRSRC1
/*-- R_PRSRC2   --*/
R2PRSRC2
R3PRSRC2
R4PRSRC2
R5PRSRC2
R6PRSRC2
R7PRSRC2
R8PRSRC2
R9PRSRC2
R10PRSRC2
R11PRSRC2
R12PRSRC2
R13PRSRC2
R14PRSRC2
R15PRSRC2
/*-- R_PRSRC3   --*/
R2PRSRC3
R3PRSRC3
R6PRSRC3
R7PRSRC3
R8PRSRC3
R9PRSRC3
R10PRSRC3
R11PRSRC3
R12PRSRC3
R13PRSRC3
R14PRSRC3
R15PRSRC3
/*-- R_PSTMEM   --*/
R1PSTMEM
R2PSTMEM
R3PSTMEM
R4PSTMEM
R5PSTMEM
R6PSTMEM
R7PSTMEM
R8PSTMEM
R9PSTMEM
R10PSTMEM
R11PSTMEM
R12PSTMEM
R13PSTMEM
/*-- R_PSYCH   --*/
R1PSYCH
R2PSYCH
R3PSYCH
R4PSYCH
R5PSYCH
R6PSYCH
R7PSYCH
R8PSYCH
R9PSYCH
R10PSYCH
R11PSYCH
R12PSYCH
R13PSYCH
R14PSYCH
R15PSYCH
/*-- R_PSYCHE   --*/
R1PSYCHE
R2PSYCHE
R3PSYCHE
R4PSYCHE
R5PSYCHE
R6PSYCHE
R7PSYCHE
R8PSYCHE
R9PSYCHE
R10PSYCHE
R11PSYCHE
R12PSYCHE
R13PSYCHE
R14PSYCHE
R15PSYCHE
/*-- R_PSYCHF   --*/
R1PSYCHF
R2PSYCHF
R3PSYCHF
R4PSYCHF
R5PSYCHF
R6PSYCHF
R7PSYCHF
R8PSYCHF
R9PSYCHF
R10PSYCHF
R11PSYCHF
R12PSYCHF
R13PSYCHF
R14PSYCHF
R15PSYCHF
/*-- R_PSYCHQ   --*/
R1PSYCHQ
R2PSYCHQ
R3PSYCHQ
R4PSYCHQ
R5PSYCHQ
R6PSYCHQ
R7PSYCHQ
R8PSYCHQ
R9PSYCHQ
R10PSYCHQ
R11PSYCHQ
R12PSYCHQ
R13PSYCHQ
R14PSYCHQ
R15PSYCHQ
/*-- R_PSYCHS   --*/
R2PSYCHS
R3PSYCHS
R4PSYCHS
R5PSYCHS
R6PSYCHS
R7PSYCHS
R8PSYCHS
R9PSYCHS
R10PSYCHS
R11PSYCHS
R12PSYCHS
R13PSYCHS
R14PSYCHS
R15PSYCHS
/*-- R_PTYP1   --*/
R1PTYP1
R2PTYP1
R3PTYP1
R4PTYP1
R5PTYP1
R6PTYP1
R7PTYP1
R8PTYP1
R9PTYP1
R10PTYP1
R11PTYP1
R12PTYP1
R13PTYP1
R14PTYP1
R15PTYP1
/*-- R_PTYP2   --*/
R1PTYP2
R2PTYP2
R3PTYP2
R4PTYP2
R5PTYP2
R6PTYP2
R7PTYP2
R8PTYP2
R9PTYP2
R10PTYP2
R11PTYP2
R12PTYP2
R13PTYP2
R14PTYP2
R15PTYP2
/*-- R_PTYP3   --*/
R1PTYP3
R2PTYP3
R3PTYP3
R4PTYP3
R5PTYP3
R6PTYP3
R7PTYP3
R8PTYP3
R9PTYP3
R10PTYP3
R11PTYP3
R12PTYP3
R13PTYP3
R14PTYP3
R15PTYP3
/*-- R_PTYP4   --*/
R5PTYP4
R6PTYP4
R7PTYP4
R8PTYP4
R9PTYP4
R10PTYP4
R11PTYP4
R12PTYP4
R13PTYP4
R14PTYP4
R15PTYP4
/*-- R_PTYPD1   --*/
R9PTYPD1
R10PTYPD1
R11PTYPD1
R12PTYPD1
R13PTYPD1
R14PTYPD1
R15PTYPD1
/*-- R_PTYPD2   --*/
R9PTYPD2
R10PTYPD2
R11PTYPD2
R12PTYPD2
R13PTYPD2
R14PTYPD2
R15PTYPD2
/*-- R_PTYPD3   --*/
R9PTYPD3
R10PTYPD3
R11PTYPD3
R12PTYPD3
R13PTYPD3
R14PTYPD3
R15PTYPD3
/*-- R_PTYPD4   --*/
R9PTYPD4
R10PTYPD4
R11PTYPD4
R12PTYPD4
R13PTYPD4
R14PTYPD4
R15PTYPD4
/*-- R_PTYPF1   --*/
R9PTYPF1
R10PTYPF1
R11PTYPF1
R12PTYPF1
R13PTYPF1
R14PTYPF1
R15PTYPF1
/*-- R_PTYPF2   --*/
R9PTYPF2
R10PTYPF2
R11PTYPF2
R12PTYPF2
R13PTYPF2
R14PTYPF2
R15PTYPF2
/*-- R_PTYPF3   --*/
R9PTYPF3
R10PTYPF3
R11PTYPF3
R12PTYPF3
R13PTYPF3
R14PTYPF3
R15PTYPF3
/*-- R_PTYPF4   --*/
R9PTYPF4
R10PTYPF4
R11PTYPF4
R12PTYPF4
R13PTYPF4
R14PTYPF4
R15PTYPF4
/*-- R_PUFF   --*/
R8PUFF
R9PUFF
R10PUFF
R11PUFF
R12PUFF
R13PUFF
R14PUFF
/*-- R_PUFFPOS   --*/
R8PUFFPOS
R9PUFFPOS
R10PUFFPOS
R11PUFFPOS
R12PUFFPOS
R13PUFFPOS
R14PUFFPOS
/*-- R1_PUSH   --*/
R1PUSH
/*-- R2_PUSH   --*/
R2PUSH
/*-- R_PUSH   --*/
R3PUSH
R4PUSH
R5PUSH
R6PUSH
R7PUSH
R8PUSH
R9PUSH
R10PUSH
R11PUSH
R12PUSH
R13PUSH
R14PUSH
R15PUSH
/*-- R_PUSHA   --*/
R2PUSHA
R3PUSHA
R4PUSHA
R5PUSHA
R6PUSHA
R7PUSHA
R8PUSHA
R9PUSHA
R10PUSHA
R11PUSHA
R12PUSHA
R13PUSHA
R14PUSHA
R15PUSHA
/*-- R_PUSHW   --*/
R1PUSHW
/*-- R_RETDTWV   --*/
R1RETDTWV
R2RETDTWV
R3RETDTWV
R4RETDTWV
R5RETDTWV
R6RETDTWV
R7RETDTWV
R8RETDTWV
R9RETDTWV
R10RETDTWV
R11RETDTWV
R12RETDTWV
R13RETDTWV
R14RETDTWV
R15RETDTWV
/*-- R_RETEMP   --*/
R1RETEMP
R2RETEMP
R3RETEMP
R4RETEMP
R5RETEMP
R6RETEMP
R7RETEMP
R8RETEMP
R9RETEMP
R10RETEMP
R11RETEMP
R12RETEMP
R13RETEMP
R14RETEMP
R15RETEMP
/*-- R_RETINC   --*/
R1RETINC
/*-- R_RETLIV   --*/
R1RETLIV
/*-- R_RETMON   --*/
R1RETMON
R2RETMON
R3RETMON
R4RETMON
R5RETMON
R6RETMON
R7RETMON
R8RETMON
R9RETMON
R10RETMON
R11RETMON
R12RETMON
R13RETMON
R14RETMON
R15RETMON
/*-- R_RETSAT   --*/
R1RETSAT
R2RETSAT
R3RETSAT
R4RETSAT
R5RETSAT
R6RETSAT
R7RETSAT
R8RETSAT
R9RETSAT
R10RETSAT
R11RETSAT
R12RETSAT
R13RETSAT
R14RETSAT
R15RETSAT
/*-- R_RETWLT   --*/
R1RETWLT
/*-- R_RETWRK   --*/
R1RETWRK
/*-- R_RETWSP   --*/
R1RETWSP
/*-- R_RETYR   --*/
R1RETYR
R2RETYR
R3RETYR
R4RETYR
R5RETYR
R6RETYR
R7RETYR
R8RETYR
R9RETYR
R10RETYR
R11RETYR
R12RETYR
R13RETYR
R14RETYR
R15RETYR
/*-- R_RISK   --*/
R1RISK
R4RISK
R5RISK
R6RISK
R7RISK
R8RISK
/*-- R_RISK6   --*/
R4RISK6
R5RISK6
R6RISK6
R7RISK6
R8RISK6
/*-- R_RPLNYA   --*/
R1RPLNYA
R3RPLNYA
R4RPLNYA
R5RPLNYA
R6RPLNYA
R7RPLNYA
R8RPLNYA
R9RPLNYA
R10RPLNYA
R11RPLNYA
R12RPLNYA
R13RPLNYA
R14RPLNYA
R15RPLNYA
/*-- R_RPLNYR   --*/
R1RPLNYR
R2RPLNYR
R3RPLNYR
R4RPLNYR
R5RPLNYR
R6RPLNYR
R7RPLNYR
R8RPLNYR
R9RPLNYR
R10RPLNYR
R11RPLNYR
R12RPLNYR
R13RPLNYR
R14RPLNYR
R15RPLNYR
/*-- R_RXPREM   --*/
R8RXPREM
R9RXPREM
R10RXPREM
R11RXPREM
R12RXPREM
R13RXPREM
R14RXPREM
R15RXPREM
/*-- R_RYRCMP   --*/
R1RYRCMP
R2RYRCMP
R3RYRCMP
R4RYRCMP
R5RYRCMP
R6RYRCMP
R7RYRCMP
R8RYRCMP
R9RYRCMP
R10RYRCMP
R11RYRCMP
R12RYRCMP
R13RYRCMP
R14RYRCMP
R15RYRCMP
/*-- R_SADLF   --*/
R3SADLF
R4SADLF
R5SADLF
R6SADLF
R7SADLF
R8SADLF
R9SADLF
R10SADLF
R11SADLF
R12SADLF
R13SADLF
R14SADLF
R15SADLF
/*-- R_SAMEJOB   --*/
R2SAMEJOB
R3SAMEJOB
R4SAMEJOB
R5SAMEJOB
R6SAMEJOB
R7SAMEJOB
R8SAMEJOB
R9SAMEJOB
R10SAMEJOB
R11SAMEJOB
R12SAMEJOB
R13SAMEJOB
R14SAMEJOB
R15SAMEJOB
/*-- R_SAMEMP   --*/
R2SAMEMP
R3SAMEMP
R4SAMEMP
R5SAMEMP
R6SAMEMP
R7SAMEMP
R8SAMEMP
R9SAMEMP
R10SAMEMP
R11SAMEMP
R12SAMEMP
R13SAMEMP
R14SAMEMP
R15SAMEMP
/*-- R_SAYRET   --*/
R1SAYRET
R2SAYRET
R3SAYRET
R4SAYRET
R5SAYRET
R6SAYRET
R7SAYRET
R8SAYRET
R9SAYRET
R10SAYRET
R11SAYRET
R12SAYRET
R13SAYRET
R14SAYRET
R15SAYRET
/*-- R_SCIS   --*/
R2SCIS
R3SCIS
R4SCIS
R5SCIS
R6SCIS
R7SCIS
R8SCIS
R9SCIS
R10SCIS
R11SCIS
R12SCIS
R13SCIS
/*-- R_SDIAPL   --*/
R5SDIAPL
R6SDIAPL
R7SDIAPL
R8SDIAPL
R9SDIAPL
R10SDIAPL
R11SDIAPL
R12SDIAPL
R13SDIAPL
R14SDIAPL
R15SDIAPL
/*-- R_SDIAPLM   --*/
R5SDIAPLM
R6SDIAPLM
R7SDIAPLM
R8SDIAPLM
R9SDIAPLM
R10SDIAPLM
R11SDIAPLM
R12SDIAPLM
R13SDIAPLM
R14SDIAPLM
R15SDIAPLM
/*-- R_SDIAPLY   --*/
R5SDIAPLY
R6SDIAPLY
R7SDIAPLY
R8SDIAPLY
R9SDIAPLY
R10SDIAPLY
R11SDIAPLY
R12SDIAPLY
R13SDIAPLY
R14SDIAPLY
R15SDIAPLY
/*-- R_SDIAPP   --*/
R5SDIAPP
R6SDIAPP
R7SDIAPP
R8SDIAPP
R9SDIAPP
R10SDIAPP
R11SDIAPP
R12SDIAPP
R13SDIAPP
R14SDIAPP
R15SDIAPP
/*-- R_SDIAPPM   --*/
R5SDIAPPM
R6SDIAPPM
R7SDIAPPM
R8SDIAPPM
R9SDIAPPM
R10SDIAPPM
R11SDIAPPM
R12SDIAPPM
R13SDIAPPM
R14SDIAPPM
R15SDIAPPM
/*-- R_SDIAPPY   --*/
R5SDIAPPY
R6SDIAPPY
R7SDIAPPY
R8SDIAPPY
R9SDIAPPY
R10SDIAPPY
R11SDIAPPY
R12SDIAPPY
R13SDIAPPY
R14SDIAPPY
R15SDIAPPY
/*-- R_SDIDEN   --*/
R5SDIDEN
R6SDIDEN
R7SDIDEN
R8SDIDEN
R9SDIDEN
R10SDIDEN
R11SDIDEN
R12SDIDEN
R13SDIDEN
R14SDIDEN
R15SDIDEN
/*-- R_SDIREC   --*/
R5SDIREC
R6SDIREC
R7SDIREC
R8SDIREC
R9SDIREC
R10SDIREC
R11SDIREC
R12SDIREC
R13SDIREC
R14SDIREC
R15SDIREC
/*-- R_SDIRECM   --*/
R5SDIRECM
R6SDIRECM
R7SDIRECM
R8SDIRECM
R9SDIRECM
R10SDIRECM
R11SDIRECM
R12SDIRECM
R13SDIRECM
R14SDIRECM
R15SDIRECM
/*-- R_SDIRECY   --*/
R5SDIRECY
R6SDIRECY
R7SDIRECY
R8SDIRECY
R9SDIRECY
R10SDIRECY
R11SDIRECY
R12SDIRECY
R13SDIRECY
R14SDIRECY
R15SDIRECY
/*-- R_SDISTP   --*/
R5SDISTP
R6SDISTP
R7SDISTP
R8SDISTP
R9SDISTP
R10SDISTP
R11SDISTP
R12SDISTP
R13SDISTP
R14SDISTP
R15SDISTP
/*-- R_SDISTPM   --*/
R5SDISTPM
R6SDISTPM
R7SDISTPM
R8SDISTPM
R9SDISTPM
R10SDISTPM
R11SDISTPM
R12SDISTPM
R13SDISTPM
R14SDISTPM
R15SDISTPM
/*-- R_SDISTPY   --*/
R5SDISTPY
R6SDISTPY
R7SDISTPY
R8SDISTPY
R9SDISTPY
R10SDISTPY
R11SDISTPY
R12SDISTPY
R13SDISTPY
R14SDISTPY
R15SDISTPY
/*-- R_SER7   --*/
R2SER7
R3SER7
R4SER7
R5SER7
R6SER7
R7SER7
R8SER7
R9SER7
R10SER7
R11SER7
R12SER7
R13SER7
/*-- R_SHLT   --*/
R1SHLT
R2SHLT
R3SHLT
R4SHLT
R5SHLT
R6SHLT
R7SHLT
R8SHLT
R9SHLT
R10SHLT
R11SHLT
R12SHLT
R13SHLT
R14SHLT
R15SHLT
/*-- R_SHLTC   --*/
R2SHLTC
R3SHLTC
R4SHLTC
R5SHLTC
R6SHLTC
R7SHLTC
R8SHLTC
R9SHLTC
R10SHLTC
R11SHLTC
R12SHLTC
R13SHLTC
R14SHLTC
R15SHLTC
/*-- R_SHLTCF   --*/
R2SHLTCF
R3SHLTCF
R4SHLTCF
R5SHLTCF
R6SHLTCF
R7SHLTCF
R8SHLTCF
R9SHLTCF
R10SHLTCF
R11SHLTCF
R12SHLTCF
R13SHLTCF
R14SHLTCF
R15SHLTCF
/*-- R_SHOP   --*/
R3SHOP
R4SHOP
R5SHOP
R6SHOP
R7SHOP
R8SHOP
R9SHOP
R10SHOP
R11SHOP
R12SHOP
R13SHOP
R14SHOP
R15SHOP
/*-- R_SHOPA   --*/
R2SHOPA
R3SHOPA
R4SHOPA
R5SHOPA
R6SHOPA
R7SHOPA
R8SHOPA
R9SHOPA
R10SHOPA
R11SHOPA
R12SHOPA
R13SHOPA
R14SHOPA
R15SHOPA
/*-- R_SHOPH   --*/
R3SHOPH
R4SHOPH
R5SHOPH
R6SHOPH
R7SHOPH
R8SHOPH
R9SHOPH
R10SHOPH
R11SHOPH
R12SHOPH
R13SHOPH
R14SHOPH
R15SHOPH
/*-- R_SHOPR   --*/
R2SHOPR
/*-- R1_SIT   --*/
R1SIT
/*-- R2_SIT   --*/
R2SIT
/*-- R_SIT   --*/
R3SIT
R4SIT
R5SIT
R6SIT
R7SIT
R8SIT
R9SIT
R10SIT
R11SIT
R12SIT
R13SIT
R14SIT
R15SIT
/*-- R_SITA   --*/
R2SITA
R3SITA
R4SITA
R5SITA
R6SITA
R7SITA
R8SITA
R9SITA
R10SITA
R11SITA
R12SITA
R13SITA
R14SITA
R15SITA
/*-- R_SITW   --*/
R1SITW
/*-- R_SLEEP   --*/
R13SLEEP
R14SLEEP
R15SLEEP
/*-- R_SLEEPE   --*/
R13SLEEPE
R14SLEEPE
R15SLEEPE
/*-- R_SLEEPQ   --*/
R13SLEEPQ
R14SLEEPQ
R15SLEEPQ
/*-- R_SLEEPR   --*/
R2SLEEPR
R3SLEEPR
R4SLEEPR
R5SLEEPR
R6SLEEPR
R7SLEEPR
R8SLEEPR
R9SLEEPR
R10SLEEPR
R11SLEEPR
R12SLEEPR
R13SLEEPR
R14SLEEPR
R15SLEEPR
/*-- R_SLEEPS   --*/
R14SLEEPS
R15SLEEPS
/*-- R_SLEEPX   --*/
R1SLEEPX
/*-- R_SLFEMP   --*/
R1SLFEMP
R2SLFEMP
R3SLFEMP
R4SLFEMP
R5SLFEMP
R6SLFEMP
R7SLFEMP
R8SLFEMP
R9SLFEMP
R10SLFEMP
R11SLFEMP
R12SLFEMP
R13SLFEMP
R14SLFEMP
R15SLFEMP
/*-- R_SLFMEM   --*/
R1SLFMEM
R2SLFMEM
R3SLFMEM
R4SLFMEM
R5SLFMEM
R6SLFMEM
R7SLFMEM
R8SLFMEM
R9SLFMEM
R10SLFMEM
R11SLFMEM
R12SLFMEM
R13SLFMEM
/*-- R_SMOKEN   --*/
R1SMOKEN
R2SMOKEN
R3SMOKEN
R4SMOKEN
R5SMOKEN
R6SMOKEN
R7SMOKEN
R8SMOKEN
R9SMOKEN
R10SMOKEN
R11SMOKEN
R12SMOKEN
R13SMOKEN
R14SMOKEN
R15SMOKEN
/*-- R_SMOKEV   --*/
R1SMOKEV
R2SMOKEV
R3SMOKEV
R4SMOKEV
R5SMOKEV
R6SMOKEV
R7SMOKEV
R8SMOKEV
R9SMOKEV
R10SMOKEV
R11SMOKEV
R12SMOKEV
R13SMOKEV
R14SMOKEV
R15SMOKEV
/*-- R_SPCFAC   --*/
R2SPCFAC
R3SPCFAC
R4SPCFAC
R5SPCFAC
R6SPCFAC
R7SPCFAC
R8SPCFAC
R9SPCFAC
R10SPCFAC
R11SPCFAC
R12SPCFAC
R13SPCFAC
R14SPCFAC
R15SPCFAC
/*-- R_SSAPL   --*/
R2SSAPL
R3SSAPL
R4SSAPL
/*-- R_SSAPLM   --*/
R2SSAPLM
R3SSAPLM
R4SSAPLM
/*-- R_SSAPLY   --*/
R2SSAPLY
R3SSAPLY
R4SSAPLY
/*-- R_SSAPP   --*/
R2SSAPP
R3SSAPP
R4SSAPP
/*-- R_SSAPPM   --*/
R2SSAPPM
R3SSAPPM
R4SSAPPM
/*-- R_SSAPPY   --*/
R2SSAPPY
R3SSAPPY
R4SSAPPY
/*-- R_SSDEN   --*/
R2SSDEN
R3SSDEN
R4SSDEN
/*-- R_SSDI   --*/
R1SSDI
R2SSDI
R3SSDI
R4SSDI
R5SSDI
R6SSDI
R7SSDI
R8SSDI
R9SSDI
R10SSDI
R11SSDI
R12SSDI
R13SSDI
R14SSDI
R15SSDI
/*-- R_SSIAPL   --*/
R5SSIAPL
R6SSIAPL
R7SSIAPL
R8SSIAPL
R9SSIAPL
R10SSIAPL
R11SSIAPL
R12SSIAPL
R13SSIAPL
R14SSIAPL
R15SSIAPL
/*-- R_SSIAPLM   --*/
R5SSIAPLM
R6SSIAPLM
R7SSIAPLM
R8SSIAPLM
R9SSIAPLM
R10SSIAPLM
R11SSIAPLM
R12SSIAPLM
R13SSIAPLM
R14SSIAPLM
R15SSIAPLM
/*-- R_SSIAPLY   --*/
R5SSIAPLY
R6SSIAPLY
R7SSIAPLY
R8SSIAPLY
R9SSIAPLY
R10SSIAPLY
R11SSIAPLY
R12SSIAPLY
R13SSIAPLY
R14SSIAPLY
R15SSIAPLY
/*-- R_SSIAPP   --*/
R5SSIAPP
R6SSIAPP
R7SSIAPP
R8SSIAPP
R9SSIAPP
R10SSIAPP
R11SSIAPP
R12SSIAPP
R13SSIAPP
R14SSIAPP
R15SSIAPP
/*-- R_SSIAPPM   --*/
R5SSIAPPM
R6SSIAPPM
R7SSIAPPM
R8SSIAPPM
R9SSIAPPM
R10SSIAPPM
R11SSIAPPM
R12SSIAPPM
R13SSIAPPM
R14SSIAPPM
R15SSIAPPM
/*-- R_SSIAPPY   --*/
R5SSIAPPY
R6SSIAPPY
R7SSIAPPY
R8SSIAPPY
R9SSIAPPY
R10SSIAPPY
R11SSIAPPY
R12SSIAPPY
R13SSIAPPY
R14SSIAPPY
R15SSIAPPY
/*-- R_SSIDEN   --*/
R5SSIDEN
R6SSIDEN
R7SSIDEN
R8SSIDEN
R9SSIDEN
R10SSIDEN
R11SSIDEN
R12SSIDEN
R13SSIDEN
R14SSIDEN
R15SSIDEN
/*-- R_SSIREC   --*/
R5SSIREC
R6SSIREC
R7SSIREC
R8SSIREC
R9SSIREC
R10SSIREC
R11SSIREC
R12SSIREC
R13SSIREC
R14SSIREC
R15SSIREC
/*-- R_SSIRECM   --*/
R5SSIRECM
R6SSIRECM
R7SSIRECM
R8SSIRECM
R9SSIRECM
R10SSIRECM
R11SSIRECM
R12SSIRECM
R13SSIRECM
R14SSIRECM
R15SSIRECM
/*-- R_SSIRECY   --*/
R5SSIRECY
R6SSIRECY
R7SSIRECY
R8SSIRECY
R9SSIRECY
R10SSIRECY
R11SSIRECY
R12SSIRECY
R13SSIRECY
R14SSIRECY
R15SSIRECY
/*-- R_SSISTP   --*/
R5SSISTP
R6SSISTP
R7SSISTP
R8SSISTP
R9SSISTP
R10SSISTP
R11SSISTP
R12SSISTP
R13SSISTP
R14SSISTP
R15SSISTP
/*-- R_SSISTPM   --*/
R5SSISTPM
R6SSISTPM
R7SSISTPM
R8SSISTPM
R9SSISTPM
R10SSISTPM
R11SSISTPM
R12SSISTPM
R13SSISTPM
R14SSISTPM
R15SSISTPM
/*-- R_SSISTPY   --*/
R5SSISTPY
R6SSISTPY
R7SSISTPY
R8SSISTPY
R9SSISTPY
R10SSISTPY
R11SSISTPY
R12SSISTPY
R13SSISTPY
R14SSISTPY
R15SSISTPY
/*-- R_SSREC   --*/
R2SSREC
R3SSREC
R4SSREC
/*-- R_SSRECM   --*/
R2SSRECM
R3SSRECM
R4SSRECM
/*-- R_SSRECY   --*/
R2SSRECY
R3SSRECY
R4SSRECY
/*-- R_SSSTP   --*/
R2SSSTP
R3SSSTP
R4SSSTP
/*-- R_SSSTPM   --*/
R2SSSTPM
R3SSSTPM
R4SSSTPM
/*-- R_SSSTPY   --*/
R2SSSTPY
R3SSSTPY
R4SSSTPY
/*-- R_SSWRER   --*/
R1SSWRER
R4SSWRER
R7SSWRER
R10SSWRER
R13SSWRER
/*-- R_SSWRNR   --*/
R1SSWRNR
R4SSWRNR
R7SSWRNR
R10SSWRNR
R13SSWRNR
/*-- R_SSWRXA   --*/
R1SSWRXA
R4SSWRXA
R7SSWRXA
R10SSWRXA
R13SSWRXA
/*-- R_SSWSER   --*/
R10SSWSER
R13SSWSER
/*-- R_SSWSNR   --*/
R10SSWSNR
R13SSWSNR
/*-- R_SSWSXA   --*/
R10SSWSXA
R13SSWSXA
/*-- R_STATUS   --*/
R1STATUS
R2STATUS
R3STATUS
R4STATUS
R5STATUS
R6STATUS
R7STATUS
R8STATUS
R9STATUS
R10STATUS
R11STATUS
R12STATUS
R13STATUS
/*-- R1_STOOP   --*/
R1STOOP
/*-- R2_STOOP   --*/
R2STOOP
/*-- R_STOOP   --*/
R3STOOP
R4STOOP
R5STOOP
R6STOOP
R7STOOP
R8STOOP
R9STOOP
R10STOOP
R11STOOP
R12STOOP
R13STOOP
R14STOOP
R15STOOP
/*-- R_STOOPA   --*/
R2STOOPA
R3STOOPA
R4STOOPA
R5STOOPA
R6STOOPA
R7STOOPA
R8STOOPA
R9STOOPA
R10STOOPA
R11STOOPA
R12STOOPA
R13STOOPA
R14STOOPA
R15STOOPA
/*-- R_STOOPW   --*/
R1STOOPW
/*-- R_STROK   --*/
R1STROK
R2STROK
R3STROK
R4STROK
R5STROK
R6STROK
R7STROK
R8STROK
R9STROK
R10STROK
R11STROK
R12STROK
R13STROK
R14STROK
R15STROK
/*-- R_STROKE   --*/
R1STROKE
R2STROKE
R3STROKE
R4STROKE
R5STROKE
R6STROKE
R7STROKE
R8STROKE
R9STROKE
R10STROKE
R11STROKE
R12STROKE
R13STROKE
R14STROKE
R15STROKE
/*-- R_STROKF   --*/
R1STROKF
R2STROKF
R3STROKF
R4STROKF
R5STROKF
R6STROKF
R7STROKF
R8STROKF
R9STROKF
R10STROKF
R11STROKF
R12STROKF
R13STROKF
R14STROKF
R15STROKF
/*-- R_STROKQ   --*/
R1STROKQ
R2STROKQ
R3STROKQ
R4STROKQ
R5STROKQ
R6STROKQ
R7STROKQ
R8STROKQ
R9STROKQ
R10STROKQ
R11STROKQ
R12STROKQ
R13STROKQ
R14STROKQ
R15STROKQ
/*-- R_STROKS   --*/
R2STROKS
R3STROKS
R4STROKS
R5STROKS
R6STROKS
R7STROKS
R8STROKS
R9STROKS
R10STROKS
R11STROKS
R12STROKS
R13STROKS
R14STROKS
R15STROKS
/*-- R_TIMWLK   --*/
R8TIMWLK
R9TIMWLK
R10TIMWLK
R11TIMWLK
R12TIMWLK
R13TIMWLK
R14TIMWLK
/*-- R_TIMWLKA   --*/
R8TIMWLKA
R9TIMWLKA
R10TIMWLKA
R11TIMWLKA
R12TIMWLKA
R13TIMWLKA
R14TIMWLKA
/*-- R_TLIPRM   --*/
R1TLIPRM
R2TLIPRM
R3TLIPRM
/*-- R2_TOILT   --*/
R2TOILT
/*-- R_TOILT   --*/
R3TOILT
R4TOILT
R5TOILT
R6TOILT
R7TOILT
R8TOILT
R9TOILT
R10TOILT
R11TOILT
R12TOILT
R13TOILT
R14TOILT
R15TOILT
/*-- R_TOILTA   --*/
R2TOILTA
R3TOILTA
R4TOILTA
R5TOILTA
R6TOILTA
R7TOILTA
R8TOILTA
R9TOILTA
R10TOILTA
R11TOILTA
R12TOILTA
R13TOILTA
R14TOILTA
R15TOILTA
/*-- R2_TOILTH   --*/
R2TOILTH
/*-- R_TOILTH   --*/
R3TOILTH
R4TOILTH
R5TOILTH
R6TOILTH
R7TOILTH
R8TOILTH
R9TOILTH
R10TOILTH
R11TOILTH
R12TOILTH
R13TOILTH
R14TOILTH
R15TOILTH
/*-- R_TOTMBF   --*/
R3TOTMBF
R4TOTMBF
R5TOTMBF
R6TOTMBF
/*-- R_TOTMBI   --*/
R3TOTMBI
R4TOTMBI
R5TOTMBI
R6TOTMBI
/*-- R_TOTMD   --*/
R3TOTMD
/*-- R_TOTMDF   --*/
R3TOTMDF
/*-- R_TR20   --*/
R3TR20
R4TR20
R5TR20
R6TR20
R7TR20
R8TR20
R9TR20
R10TR20
R11TR20
R12TR20
R13TR20
/*-- R_TR40   --*/
R1TR40
/*-- R_TYLTC   --*/
R2TYLTC
R3TYLTC
R4TYLTC
R5TYLTC
R6TYLTC
R7TYLTC
R8TYLTC
R9TYLTC
R10TYLTC
R11TYLTC
R12TYLTC
R13TYLTC
R14TYLTC
R15TYLTC
/*-- R_ULCER   --*/
R1ULCER
R2ULCER
/*-- R_UNEMP   --*/
R1UNEMP
R2UNEMP
R3UNEMP
R4UNEMP
R5UNEMP
R6UNEMP
R7UNEMP
R8UNEMP
R9UNEMP
R10UNEMP
R11UNEMP
R12UNEMP
R13UNEMP
R14UNEMP
R15UNEMP
/*-- R_UNION   --*/
R1UNION
R2UNION
R3UNION
R4UNION
R5UNION
R6UNION
R7UNION
R8UNION
R9UNION
R10UNION
R11UNION
R12UNION
R13UNION
R14UNION
R15UNION
/*-- R_UNIONF   --*/
R2UNIONF
R3UNIONF
R4UNIONF
R5UNIONF
R6UNIONF
R7UNIONF
R8UNIONF
R9UNIONF
R10UNIONF
R11UNIONF
R12UNIONF
R13UNIONF
R14UNIONF
R15UNIONF
/*-- R_VGACTF   --*/
R1VGACTF
/*-- R_VGACTN   --*/
R2VGACTN
/*-- R_VGACTP   --*/
R2VGACTP
/*-- R_VGACTX   --*/
R7VGACTX
R8VGACTX
R9VGACTX
R10VGACTX
R11VGACTX
R12VGACTX
R13VGACTX
R14VGACTX
R15VGACTX
/*-- R_VIGACT   --*/
R1VIGACT
R2VIGACT
R3VIGACT
R4VIGACT
R5VIGACT
R6VIGACT
/*-- R_VOCAB   --*/
R3VOCAB
R4VOCAB
R5VOCAB
R6VOCAB
R7VOCAB
R8VOCAB
R9VOCAB
R10VOCAB
R11VOCAB
R12VOCAB
R13VOCAB
/*-- R_VP   --*/
R2VP
R3VP
R4VP
R5VP
R6VP
R7VP
R8VP
R9VP
R10VP
R11VP
R12VP
R13VP
/*-- R1_WALK1   --*/
R1WALK1
/*-- R2_WALK1   --*/
R2WALK1
/*-- R_WALK1   --*/
R3WALK1
R4WALK1
R5WALK1
R6WALK1
R7WALK1
R8WALK1
R9WALK1
R10WALK1
R11WALK1
R12WALK1
R13WALK1
R14WALK1
R15WALK1
/*-- R_WALK1A   --*/
R2WALK1A
R3WALK1A
R4WALK1A
R5WALK1A
R6WALK1A
R7WALK1A
R8WALK1A
R9WALK1A
R10WALK1A
R11WALK1A
R12WALK1A
R13WALK1A
R14WALK1A
R15WALK1A
/*-- R_WALK1W   --*/
R1WALK1W
/*-- R1_WALKR   --*/
R1WALKR
/*-- R2_WALKR   --*/
R2WALKR
/*-- R_WALKR   --*/
R3WALKR
R4WALKR
R5WALKR
R6WALKR
R7WALKR
R8WALKR
R9WALKR
R10WALKR
R11WALKR
R12WALKR
R13WALKR
R14WALKR
R15WALKR
/*-- R_WALKRA   --*/
R2WALKRA
R3WALKRA
R4WALKRA
R5WALKRA
R6WALKRA
R7WALKRA
R8WALKRA
R9WALKRA
R10WALKRA
R11WALKRA
R12WALKRA
R13WALKRA
R14WALKRA
R15WALKRA
/*-- R_WALKRE   --*/
R2WALKRE
R3WALKRE
R4WALKRE
R5WALKRE
R6WALKRE
R7WALKRE
R8WALKRE
R9WALKRE
R10WALKRE
R11WALKRE
R12WALKRE
R13WALKRE
R14WALKRE
R15WALKRE
/*-- R2_WALKRH   --*/
R2WALKRH
/*-- R_WALKRH   --*/
R3WALKRH
R4WALKRH
R5WALKRH
R6WALKRH
R7WALKRH
R8WALKRH
R9WALKRH
R10WALKRH
R11WALKRH
R12WALKRH
R13WALKRH
R14WALKRH
R15WALKRH
/*-- R_WALKRW   --*/
R1WALKRW
/*-- R1_WALKS   --*/
R1WALKS
/*-- R2_WALKS   --*/
R2WALKS
/*-- R_WALKS   --*/
R3WALKS
R4WALKS
R5WALKS
R6WALKS
R7WALKS
R8WALKS
R9WALKS
R10WALKS
R11WALKS
R12WALKS
R13WALKS
R14WALKS
R15WALKS
/*-- R_WALKSA   --*/
R2WALKSA
R3WALKSA
R4WALKSA
R5WALKSA
R6WALKSA
R7WALKSA
R8WALKSA
R9WALKSA
R10WALKSA
R11WALKSA
R12WALKSA
R13WALKSA
R14WALKSA
R15WALKSA
/*-- R_WALKSW   --*/
R1WALKSW
/*-- R_WANDER   --*/
R2WANDER
R3WANDER
R4WANDER
R5WANDER
R6WANDER
R7WANDER
R8WANDER
R9WANDER
R10WANDER
R11WANDER
R12WANDER
R13WANDER
R14WANDER
R15WANDER
/*-- R_WEIGHT   --*/
R1WEIGHT
R2WEIGHT
R3WEIGHT
R4WEIGHT
R5WEIGHT
R6WEIGHT
R7WEIGHT
R8WEIGHT
R9WEIGHT
R10WEIGHT
R11WEIGHT
R12WEIGHT
R13WEIGHT
R14WEIGHT
R15WEIGHT
/*-- R_WGFHR   --*/
R1WGFHR
R2WGFHR
R3WGFHR
R4WGFHR
R5WGFHR
R6WGFHR
R7WGFHR
R8WGFHR
R9WGFHR
R10WGFHR
R11WGFHR
R12WGFHR
R13WGFHR
R14WGFHR
R15WGFHR
/*-- R_WGFWK   --*/
R1WGFWK
R2WGFWK
R3WGFWK
R4WGFWK
R5WGFWK
R6WGFWK
R7WGFWK
R8WGFWK
R9WGFWK
R10WGFWK
R11WGFWK
R12WGFWK
R13WGFWK
R14WGFWK
R15WGFWK
/*-- R_WGIHR   --*/
R1WGIHR
R2WGIHR
R3WGIHR
R4WGIHR
R5WGIHR
R6WGIHR
R7WGIHR
R8WGIHR
R9WGIHR
R10WGIHR
R11WGIHR
R12WGIHR
R13WGIHR
R14WGIHR
R15WGIHR
/*-- R_WGIWK   --*/
R1WGIWK
R2WGIWK
R3WGIWK
R4WGIWK
R5WGIWK
R6WGIWK
R7WGIWK
R8WGIWK
R9WGIWK
R10WGIWK
R11WGIWK
R12WGIWK
R13WGIWK
R14WGIWK
R15WGIWK
/*-- R_WHAPPX   --*/
R1WHAPPX
/*-- R_WHAPPY   --*/
R2WHAPPY
R3WHAPPY
R4WHAPPY
R5WHAPPY
R6WHAPPY
R7WHAPPY
R8WHAPPY
R9WHAPPY
R10WHAPPY
R11WHAPPY
R12WHAPPY
R13WHAPPY
R14WHAPPY
R15WHAPPY
/*-- R_WLIPRM   --*/
R1WLIPRM
R2WLIPRM
R3WLIPRM
R5WLIPRM
R6WLIPRM
R7WLIPRM
R8WLIPRM
R9WLIPRM
R10WLIPRM
R11WLIPRM
R12WLIPRM
R13WLIPRM
R14WLIPRM
R15WLIPRM
/*-- R_WORK   --*/
R1WORK
R2WORK
R3WORK
R4WORK
R5WORK
R6WORK
R7WORK
R8WORK
R9WORK
R10WORK
R11WORK
R12WORK
R13WORK
R14WORK
R15WORK
/*-- R_WORK2   --*/
R1WORK2
R2WORK2
R3WORK2
R4WORK2
R5WORK2
R6WORK2
R7WORK2
R8WORK2
R9WORK2
R10WORK2
R11WORK2
R12WORK2
R13WORK2
R14WORK2
R15WORK2
/*-- R_WORK62   --*/
R1WORK62
R2WORK62
R3WORK62
R4WORK62
R5WORK62
R6WORK62
R7WORK62
R8WORK62
R9WORK62
R10WORK62
R11WORK62
R12WORK62
R13WORK62
R14WORK62
R15WORK62
/*-- R_WORK62F   --*/
R2WORK62F
R3WORK62F
R4WORK62F
R5WORK62F
R6WORK62F
R7WORK62F
R8WORK62F
R9WORK62F
R10WORK62F
R11WORK62F
R12WORK62F
R13WORK62F
R14WORK62F
R15WORK62F
/*-- R_WORK65   --*/
R1WORK65
R2WORK65
R3WORK65
R4WORK65
R5WORK65
R6WORK65
R7WORK65
R8WORK65
R9WORK65
R10WORK65
R11WORK65
R12WORK65
R13WORK65
R14WORK65
R15WORK65
/*-- R_WORK65F   --*/
R2WORK65F
R3WORK65F
R4WORK65F
R5WORK65F
R6WORK65F
R7WORK65F
R8WORK65F
R9WORK65F
R10WORK65F
R11WORK65F
R12WORK65F
R13WORK65F
R14WORK65F
R15WORK65F
/*-- R_WORK70   --*/
R11WORK70
R12WORK70
R13WORK70
R14WORK70
R15WORK70
/*-- R_WORK70A   --*/
R11WORK70A
R12WORK70A
R13WORK70A
R14WORK70A
R15WORK70A
/*-- R_WORK70AF   --*/
R11WORK70AF
R12WORK70AF
R13WORK70AF
R14WORK70AF
R15WORK70AF
/*-- R_WORK70F   --*/
R11WORK70F
R12WORK70F
R13WORK70F
R14WORK70F
R15WORK70F
/*-- R_WORKLM   --*/
R1WORKLM
R2WORKLM
R3WORKLM
R4WORKLM
R5WORKLM
R6WORKLM
/*-- R_WTCRNH   --*/
R1WTCRNH
R2WTCRNH
R3WTCRNH
R4WTCRNH
R5WTCRNH
R6WTCRNH
R7WTCRNH
R8WTCRNH
R9WTCRNH
R10WTCRNH
R11WTCRNH
R12WTCRNH
R13WTCRNH
R14WTCRNH
/*-- R_WTHH   --*/
R1WTHH
R2WTHH
R3WTHH
R4WTHH
R5WTHH
R6WTHH
R7WTHH
R8WTHH
R9WTHH
R10WTHH
R11WTHH
R12WTHH
R13WTHH
R14WTHH
/*-- R_WTRESP   --*/
R1WTRESP
R2WTRESP
R3WTRESP
R4WTRESP
R5WTRESP
R6WTRESP
R7WTRESP
R8WTRESP
R9WTRESP
R10WTRESP
R11WTRESP
R12WTRESP
R13WTRESP
R14WTRESP
/*-- R_WTR_NH   --*/
R5WTR_NH
R6WTR_NH
R7WTR_NH
R8WTR_NH
R9WTR_NH
R10WTR_NH
R11WTR_NH
R12WTR_NH
R13WTR_NH
R14WTR_NH
/*-- R_YR   --*/
R2YR
R3YR
R4YR
R5YR
R6YR
R7YR
R8YR
R9YR
R10YR
R11YR
R12YR
R13YR
%mend readvar2_list;

/* Macro `process_data for `RLong` */
%macro process_data /*  -- Macro statement  */ ;
%put --- Rlong table ;
%initvars ;
%put ---- Rlong table ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
WAVE_NUMBER=1 ;
H_HHIDC=H1HHIDC ;
SUBHH= substr(H_HHIDC,7)     /* --- Derived variable  */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
INW=INW1 ;
WAVE_NAME=  'hrs_wave'||strip(put(wave_number,3.))     /* --- Derived variable  */ ;
CYEAR='yr1992' ;
/* --- RAND variable:HACOHORT  included */ ;
studyyr= hrs_studyyr(wave_number,
hacohort)     /* --- Derived variable  */ ;
H_HHID=H1HHID ;
S_HHIDPN=S1HHIDPN ;
/* Empty map cell for: R_ACGTOT      variable wave =  1*/ ;
/* Empty map cell for: R_ADL5A       variable wave =  1*/ ;
/* Empty map cell for: R_ADL5H       variable wave =  1*/ ;
/* Empty map cell for: R_ADL6A       variable wave =  1*/ ;
/* Empty map cell for: R_ADL6H       variable wave =  1*/ ;
/* Empty map cell for: R_ADLR10      variable wave =  1*/ ;
R_ADLW=R1ADLW ;
R_AGEM_B=R1AGEM_B ;
R_AGEM_E=R1AGEM_E ;
R_AGEM_M=R1AGEM_M ;
R_AGEY_B=R1AGEY_B ;
R_AGEY_E=R1AGEY_E ;
R_AGEY_M=R1AGEY_M ;
/* Empty map cell for: R_AIMR10      variable wave =  1*/ ;
/* Empty map cell for: R_ALONE       variable wave =  1*/ ;
/* Empty map cell for: R_ALZHE       variable wave =  1*/ ;
/* Empty map cell for: R_ALZHEE      variable wave =  1*/ ;
/* Empty map cell for: R_ALZHEF      variable wave =  1*/ ;
/* Empty map cell for: R_ALZHEQ      variable wave =  1*/ ;
/* Empty map cell for: R_ALZHES      variable wave =  1*/ ;
/* Empty map cell for: R_AMSTOT      variable wave =  1*/ ;
/* Empty map cell for: R_ANS3PQ      variable wave =  1*/ ;
R1_ARMS=R1ARMS ;
/* Empty map cell for: R2_ARMS       variable wave =  1*/ ;
/* Empty map cell for: R_ARMS        variable wave =  1*/ ;
/* Empty map cell for: R_ARMSA       variable wave =  1*/ ;
R_ARMSW=R1ARMSW ;
R_ARTHR=R1ARTHR ;
R_ARTHRE=R1ARTHRE ;
R_ARTHRF=R1ARTHRF ;
R_ARTHRQ=R1ARTHRQ ;
/* Empty map cell for: R_ARTHRS      variable wave =  1*/ ;
/* Empty map cell for: R_ATR20       variable wave =  1*/ ;
R_BACK=R1BACK ;
/* Empty map cell for: R_BALFUL      variable wave =  1*/ ;
/* Empty map cell for: R_BALFULC     variable wave =  1*/ ;
/* Empty map cell for: R_BALFULT     variable wave =  1*/ ;
/* Empty map cell for: R_BALSBS      variable wave =  1*/ ;
/* Empty map cell for: R_BALSBSC     variable wave =  1*/ ;
/* Empty map cell for: R_BALSEMI     variable wave =  1*/ ;
/* Empty map cell for: R_BALSEMIC    variable wave =  1*/ ;
R1_BATH=R1BATH ;
/* Empty map cell for: R2_BATH       variable wave =  1*/ ;
/* Empty map cell for: R_BATH        variable wave =  1*/ ;
/* Empty map cell for: R_BATHA       variable wave =  1*/ ;
/* Empty map cell for: R2_BATHH      variable wave =  1*/ ;
/* Empty map cell for: R_BATHH       variable wave =  1*/ ;
R_BATHW=R1BATHW ;
R1_BED=R1BED ;
/* Empty map cell for: R2_BED        variable wave =  1*/ ;
/* Empty map cell for: R_BED         variable wave =  1*/ ;
/* Empty map cell for: R_BEDA        variable wave =  1*/ ;
/* Empty map cell for: R_BEDE        variable wave =  1*/ ;
/* Empty map cell for: R2_BEDH       variable wave =  1*/ ;
/* Empty map cell for: R_BEDH        variable wave =  1*/ ;
R_BEDW=R1BEDW ;
/* Empty map cell for: R_BEQ100      variable wave =  1*/ ;
/* Empty map cell for: R_BEQ10K      variable wave =  1*/ ;
/* Empty map cell for: R_BEQ500      variable wave =  1*/ ;
/* Empty map cell for: R_BEQANY      variable wave =  1*/ ;
R_BEQLRG=R1BEQLRG ;
R_BMI=R1BMI ;
/* Empty map cell for: R_BPDIA       variable wave =  1*/ ;
/* Empty map cell for: R_BPPOS       variable wave =  1*/ ;
/* Empty map cell for: R_BPPULS      variable wave =  1*/ ;
/* Empty map cell for: R_BPSYS       variable wave =  1*/ ;
/* Empty map cell for: R_BREAST      variable wave =  1*/ ;
/* Empty map cell for: R_BWC20       variable wave =  1*/ ;
/* Empty map cell for: R_BWC86       variable wave =  1*/ ;
/* Empty map cell for: R_CACT        variable wave =  1*/ ;
R1_CALC=R1CALC ;
/* Empty map cell for: R2_CALC       variable wave =  1*/ ;
/* Empty map cell for: R_CALCA       variable wave =  1*/ ;
R_CALCW=R1CALCW ;
R_CANCR=R1CANCR ;
R_CANCRE=R1CANCRE ;
R_CANCRF=R1CANCRF ;
R_CANCRQ=R1CANCRQ ;
/* Empty map cell for: R_CANCRS      variable wave =  1*/ ;
R_CENDIV=R1CENDIV ;
R_CENREG=R1CENREG ;
/* Empty map cell for: R_CESD        variable wave =  1*/ ;
R_CESDM=R1CESDM ;
R1_CHAIR=R1CHAIR ;
/* Empty map cell for: R2_CHAIR      variable wave =  1*/ ;
/* Empty map cell for: R_CHAIR       variable wave =  1*/ ;
/* Empty map cell for: R_CHAIRA      variable wave =  1*/ ;
R_CHAIRW=R1CHAIRW ;
/* Empty map cell for: R_CHOLST      variable wave =  1*/ ;
R_CLAIMED=R1CLAIMED ;
R1_CLIM1=R1CLIM1 ;
/* Empty map cell for: R2_CLIM1      variable wave =  1*/ ;
/* Empty map cell for: R_CLIM1       variable wave =  1*/ ;
/* Empty map cell for: R_CLIM1A      variable wave =  1*/ ;
R_CLIM1W=R1CLIM1W ;
R1_CLIMS=R1CLIMS ;
/* Empty map cell for: R2_CLIMS      variable wave =  1*/ ;
/* Empty map cell for: R_CLIMS       variable wave =  1*/ ;
/* Empty map cell for: R_CLIMSA      variable wave =  1*/ ;
R_CLIMSW=R1CLIMSW ;
/* Empty map cell for: R_COGTOT      variable wave =  1*/ ;
R_COMP=R1COMP ;
R_COMPW=R1COMPW ;
R_CONDE=R1CONDE ;
R_CONDEF=R1CONDEF ;
/* Empty map cell for: R_CONDS       variable wave =  1*/ ;
/* Empty map cell for: R_CONDSF      variable wave =  1*/ ;
/* Empty map cell for: R_CONDSP      variable wave =  1*/ ;
R_COVR=R1COVR ;
R_COVRT=R1COVRT ;
R_COVS=R1COVS ;
R_DADAGE=R1DADAGE ;
R_DADLIV=R1DADLIV ;
R_DCBAL1=R1DCBAL1 ;
R_DCBAL2=R1DCBAL2 ;
R_DCBAL3=R1DCBAL3 ;
/* Empty map cell for: R_DCBAL4      variable wave =  1*/ ;
R_DCBENE1=R1DCBENE1 ;
R_DCBENE2=R1DCBENE2 ;
R_DCBENE3=R1DCBENE3 ;
/* Empty map cell for: R_DCBENE4     variable wave =  1*/ ;
R_DCCONT1=R1DCCONT1 ;
R_DCCONT2=R1DCCONT2 ;
R_DCCONT3=R1DCCONT3 ;
/* Empty map cell for: R_DCCONT4     variable wave =  1*/ ;
R_DCMODE1=R1DCMODE1 ;
R_DCMODE2=R1DCMODE2 ;
R_DCMODE3=R1DCMODE3 ;
/* Empty map cell for: R_DCMODE4     variable wave =  1*/ ;
R_DCPCT1=R1DCPCT1 ;
R_DCPCT2=R1DCPCT2 ;
R_DCPCT3=R1DCPCT3 ;
/* Empty map cell for: R_DCPCT4      variable wave =  1*/ ;
/* Empty map cell for: R_DEMEN       variable wave =  1*/ ;
/* Empty map cell for: R_DEMENE      variable wave =  1*/ ;
/* Empty map cell for: R_DEMENF      variable wave =  1*/ ;
/* Empty map cell for: R_DEMENQ      variable wave =  1*/ ;
/* Empty map cell for: R_DEMENS      variable wave =  1*/ ;
/* Empty map cell for: R_DENTST      variable wave =  1*/ ;
/* Empty map cell for: R_DEPRES      variable wave =  1*/ ;
R_DEPREX=R1DEPREX ;
R_DIAB=R1DIAB ;
R_DIABE=R1DIABE ;
R_DIABF=R1DIABF ;
R_DIABQ=R1DIABQ ;
/* Empty map cell for: R_DIABS       variable wave =  1*/ ;
R1_DIME=R1DIME ;
/* Empty map cell for: R2_DIME       variable wave =  1*/ ;
/* Empty map cell for: R_DIME        variable wave =  1*/ ;
/* Empty map cell for: R_DIMEA       variable wave =  1*/ ;
R_DIMEW=R1DIMEW ;
/* Empty map cell for: R_DLRC        variable wave =  1*/ ;
R_DLRC20=R1DLRC20 ;
R_DOCTIM=R1DOCTIM ;
R_DOCTOR=R1DOCTOR ;
R1_DRESS=R1DRESS ;
/* Empty map cell for: R2_DRESS      variable wave =  1*/ ;
/* Empty map cell for: R_DRESS       variable wave =  1*/ ;
/* Empty map cell for: R_DRESSA      variable wave =  1*/ ;
/* Empty map cell for: R2_DRESSH     variable wave =  1*/ ;
/* Empty map cell for: R_DRESSH      variable wave =  1*/ ;
R_DRESSW=R1DRESSW ;
R_DRINK=R1DRINK ;
/* Empty map cell for: R_DRINKD      variable wave =  1*/ ;
/* Empty map cell for: R_DRINKN      variable wave =  1*/ ;
R_DRINKR=R1DRINKR ;
/* Empty map cell for: R_DRUGS       variable wave =  1*/ ;
/* Empty map cell for: R_DSIAMT      variable wave =  1*/ ;
/* Empty map cell for: R_DSSAMT      variable wave =  1*/ ;
R_DSTAT=R1DSTAT ;
/* Empty map cell for: R_DW          variable wave =  1*/ ;
/* Empty map cell for: R_DY          variable wave =  1*/ ;
R1_EAT=R1EAT ;
/* Empty map cell for: R2_EAT        variable wave =  1*/ ;
/* Empty map cell for: R_EAT         variable wave =  1*/ ;
/* Empty map cell for: R_EATA        variable wave =  1*/ ;
/* Empty map cell for: R2_EATH       variable wave =  1*/ ;
/* Empty map cell for: R_EATH        variable wave =  1*/ ;
R_EATW=R1EATW ;
/* Empty map cell for: R_EFFORT      variable wave =  1*/ ;
R_EFFORX=R1EFFORX ;
/* Empty map cell for: R_ENLIFE      variable wave =  1*/ ;
R_ENLIFX=R1ENLIFX ;
R_FAMR=R1FAMR ;
/* Empty map cell for: R_FBWC20      variable wave =  1*/ ;
/* Empty map cell for: R_FBWC86      variable wave =  1*/ ;
/* Empty map cell for: R_FCACT       variable wave =  1*/ ;
R_FDLRC=R1FDLRC ;
/* Empty map cell for: R_FDW         variable wave =  1*/ ;
/* Empty map cell for: R_FDY         variable wave =  1*/ ;
R_FIMRC=R1FIMRC ;
/* Empty map cell for: R_FINEA       variable wave =  1*/ ;
R_FINPLN=R1FINPLN ;
R_FINR=R1FINR ;
/* Empty map cell for: R_FLAG        variable wave =  1*/ ;
/* Empty map cell for: R_FLONE       variable wave =  1*/ ;
R_FLONEX=R1FLONEX ;
/* Empty map cell for: R_FLUSHT      variable wave =  1*/ ;
/* Empty map cell for: R_FMO         variable wave =  1*/ ;
/* Empty map cell for: R_FPRES       variable wave =  1*/ ;
R_FPSTME=R1FPSTME ;
/* Empty map cell for: R_FSAD        variable wave =  1*/ ;
R_FSADX=R1FSADX ;
/* Empty map cell for: R_FSCIS       variable wave =  1*/ ;
/* Empty map cell for: R_FSER7       variable wave =  1*/ ;
R_FSIZE=R1FSIZE ;
/* Empty map cell for: R_FSIZEF      variable wave =  1*/ ;
R_FSLFME=R1FSLFME ;
/* Empty map cell for: R_FVOCAB      variable wave =  1*/ ;
/* Empty map cell for: R_FVP         variable wave =  1*/ ;
/* Empty map cell for: R_FYR         variable wave =  1*/ ;
/* Empty map cell for: R_GOING       variable wave =  1*/ ;
R_GOINGX=R1GOINGX ;
R_GOVMD=R1GOVMD ;
R_GOVMR=R1GOVMR ;
R_GOVOT=R1GOVOT ;
R_GOVVA=R1GOVVA ;
/* Empty map cell for: R_GROSSA      variable wave =  1*/ ;
/* Empty map cell for: R_GRP         variable wave =  1*/ ;
/* Empty map cell for: R_GRPDOM      variable wave =  1*/ ;
/* Empty map cell for: R_GRPL        variable wave =  1*/ ;
/* Empty map cell for: R_GRPPOS      variable wave =  1*/ ;
/* Empty map cell for: R_GRPR        variable wave =  1*/ ;
/* Empty map cell for: R_HALUC       variable wave =  1*/ ;
/* Empty map cell for: R_HDLR20      variable wave =  1*/ ;
R_HEART=R1HEART ;
R_HEARTE=R1HEARTE ;
R_HEARTF=R1HEARTF ;
R_HEARTQ=R1HEARTQ ;
/* Empty map cell for: R_HEARTS      variable wave =  1*/ ;
R_HECOV1=R1HECOV1 ;
R_HECOV2=R1HECOV2 ;
/* Empty map cell for: R_HECOV3      variable wave =  1*/ ;
R_HEIGHT=R1HEIGHT ;
R_HENUM=R1HENUM ;
R_HERET=R1HERET ;
R_HERTR1=R1HERTR1 ;
R_HERTR2=R1HERTR2 ;
/* Empty map cell for: R_HERTR3      variable wave =  1*/ ;
R_HERTS1=R1HERTS1 ;
R_HERTS2=R1HERTS2 ;
/* Empty map cell for: R_HERTS3      variable wave =  1*/ ;
R_HESRC1=R1HESRC1 ;
R_HESRC2=R1HESRC2 ;
/* Empty map cell for: R_HESRC3      variable wave =  1*/ ;
R_HIBP=R1HIBP ;
R_HIBPE=R1HIBPE ;
R_HIBPF=R1HIBPF ;
R_HIBPQ=R1HIBPQ ;
/* Empty map cell for: R_HIBPS       variable wave =  1*/ ;
R_HIGOV=R1HIGOV ;
R_HILTC=R1HILTC ;
/* Empty map cell for: R_HIMR20      variable wave =  1*/ ;
R_HIOTHP=R1HIOTHP ;
/* Empty map cell for: R_HLPDYSF     variable wave =  1*/ ;
/* Empty map cell for: R_HLPDYSNF    variable wave =  1*/ ;
/* Empty map cell for: R_HLPDYSP     variable wave =  1*/ ;
/* Empty map cell for: R_HLPDYST     variable wave =  1*/ ;
/* Empty map cell for: R_HLPDYSU     variable wave =  1*/ ;
/* Empty map cell for: R_HLPHRSF     variable wave =  1*/ ;
/* Empty map cell for: R_HLPHRSNF    variable wave =  1*/ ;
/* Empty map cell for: R_HLPHRSP     variable wave =  1*/ ;
/* Empty map cell for: R_HLPHRST     variable wave =  1*/ ;
/* Empty map cell for: R_HLPHRSU     variable wave =  1*/ ;
/* Empty map cell for: R_HLPPDFA     variable wave =  1*/ ;
/* Empty map cell for: R_HLPPDFN     variable wave =  1*/ ;
/* Empty map cell for: R_HLPPDNFA    variable wave =  1*/ ;
/* Empty map cell for: R_HLPPDNFN    variable wave =  1*/ ;
/* Empty map cell for: R_HLPPDTA     variable wave =  1*/ ;
/* Empty map cell for: R_HLPPDTN     variable wave =  1*/ ;
/* Empty map cell for: R_HLPRFN      variable wave =  1*/ ;
/* Empty map cell for: R_HLPRNFN     variable wave =  1*/ ;
/* Empty map cell for: R_HLPRPN      variable wave =  1*/ ;
/* Empty map cell for: R_HLPRTN      variable wave =  1*/ ;
/* Empty map cell for: R_HLPRUN      variable wave =  1*/ ;
R_HLTC3=R1HLTC3 ;
R_HLTC5=R1HLTC5 ;
/* Empty map cell for: R_HLTC5F      variable wave =  1*/ ;
R_HLTHLM=R1HLTHLM ;
R_HOMCAR=R1HOMCAR ;
R_HOSP=R1HOSP ;
R_HSPNIT=R1HSPNIT ;
R_HSPTIM=R1HSPTIM ;
R_HSWRKF=R1HSWRKF ;
/* Empty map cell for: R_HTR40       variable wave =  1*/ ;
/* Empty map cell for: R_IADL5A      variable wave =  1*/ ;
/* Empty map cell for: R_IADL5H      variable wave =  1*/ ;
R_IANN=R1IANN ;
R_IEARN=R1IEARN ;
R_IFANN=R1IFANN ;
R_IFEARN=R1IFEARN ;
R_IFGXFR=R1IFGXFR ;
/* Empty map cell for: R_IFIRAW      variable wave =  1*/ ;
/* Empty map cell for: R_IFIRAWY1    variable wave =  1*/ ;
R_IFPEN=R1IFPEN ;
R_IFPENA=R1IFPENA ;
R_IFSDI=R1IFSDI ;
R_IFSRET=R1IFSRET ;
R_IFSSDI=R1IFSSDI ;
R_IFSSI=R1IFSSI ;
R_IFUNEM=R1IFUNEM ;
R_IFUNWC=R1IFUNWC ;
R_IFWCMP=R1IFWCMP ;
R_IGXFR=R1IGXFR ;
/* Empty map cell for: R_IIRAW       variable wave =  1*/ ;
/* Empty map cell for: R_IIRAWY1     variable wave =  1*/ ;
/* Empty map cell for: R_IMRC        variable wave =  1*/ ;
R_IMRC20=R1IMRC20 ;
/* Empty map cell for: R_INHER       variable wave =  1*/ ;
/* Empty map cell for: R_INHPE       variable wave =  1*/ ;
/* Empty map cell for: R_INHPFN      variable wave =  1*/ ;
/* Empty map cell for: R_INHPNFN     variable wave =  1*/ ;
/* Empty map cell for: R_INHPPN      variable wave =  1*/ ;
/* Empty map cell for: R_INHPTN      variable wave =  1*/ ;
/* Empty map cell for: R_INHPUN      variable wave =  1*/ ;
R_INLBRF=R1INLBRF ;
R_IPEN=R1IPEN ;
R_IPENA=R1IPENA ;
R_ISDI=R1ISDI ;
R_ISRET=R1ISRET ;
R_ISSDI=R1ISSDI ;
R_ISSI=R1ISSI ;
R_IUNEM=R1IUNEM ;
R_IUNWC=R1IUNWC ;
R_IWBEG=R1IWBEG ;
R_IWBEGF=R1IWBEGF ;
R_IWCMP=R1IWCMP ;
R_IWEND=R1IWEND ;
R_IWENDF=R1IWENDF ;
R_IWENDM=R1IWENDM ;
R_IWENDY=R1IWENDY ;
R_IWMID=R1IWMID ;
R_IWMIDF=R1IWMIDF ;
R_IWSTAT=R1IWSTAT ;
R_JCIND=R1JCIND ;
/* Empty map cell for: R_JCINDB      variable wave =  1*/ ;
/* Empty map cell for: R_JCINDC      variable wave =  1*/ ;
R_JCOCC=R1JCOCC ;
/* Empty map cell for: R_JCOCCA      variable wave =  1*/ ;
/* Empty map cell for: R_JCOCCB      variable wave =  1*/ ;
/* Empty map cell for: R_JCOCCC      variable wave =  1*/ ;
R_JCPEN=R1JCPEN ;
R_JCPENF=R1JCPENF ;
R_JCTEN=R1JCTEN ;
R_JHOUR2=R1JHOUR2 ;
R_JHOURS=R1JHOURS ;
R_JJOBS=R1JJOBS ;
R_JLASTM=R1JLASTM ;
R_JLASTY=R1JLASTY ;
R_JLIFT=R1JLIFT ;
R_JLIND=R1JLIND ;
/* Empty map cell for: R_JLINDB      variable wave =  1*/ ;
/* Empty map cell for: R_JLINDC      variable wave =  1*/ ;
R_JLMIS=R1JLMIS ;
R_JLOCC=R1JLOCC ;
R_JLOCCA=R1JLOCCA ;
/* Empty map cell for: R_JLOCCB      variable wave =  1*/ ;
/* Empty map cell for: R_JLOCCC      variable wave =  1*/ ;
R_JLTEN=R1JLTEN ;
R_JLTENF=R1JLTENF ;
R_JMISS=R1JMISS ;
R_JNJOB=R1JNJOB ;
R_JNJOB5=R1JNJOB5 ;
R1_JOG=R1JOG ;
/* Empty map cell for: R2_JOG        variable wave =  1*/ ;
/* Empty map cell for: R_JOG         variable wave =  1*/ ;
/* Empty map cell for: R_JOGA        variable wave =  1*/ ;
R_JOGW=R1JOGW ;
R_JPHYS=R1JPHYS ;
R_JSIGHT=R1JSIGHT ;
R_JSTOOP=R1JSTOOP ;
R_JSTRES=R1JSTRES ;
R_JWEEK2=R1JWEEK2 ;
R_JWEEKS=R1JWEEKS ;
R_JYEARM=R1JYEARM ;
R_JYEARS=R1JYEARS ;
/* Empty map cell for: R_LBAGR       variable wave =  1*/ ;
/* Empty map cell for: R_LBASSISTPRB variable wave =  1*/ ;
/* Empty map cell for: R_LBCOMP      variable wave =  1*/ ;
/* Empty map cell for: R_LBCON10     variable wave =  1*/ ;
/* Empty map cell for: R_LBCON5      variable wave =  1*/ ;
/* Empty map cell for: R_LBELIG      variable wave =  1*/ ;
/* Empty map cell for: R_LBEXT       variable wave =  1*/ ;
/* Empty map cell for: R_LBFAMDRUGPRBvariable wave =  1*/ ;
/* Empty map cell for: R_LBFAMHLTHPRBvariable wave =  1*/ ;
/* Empty map cell for: R_LBFINPRB    variable wave =  1*/ ;
/* Empty map cell for: R_LBHLTHPRB   variable wave =  1*/ ;
/* Empty map cell for: R_LBHOUSEPRB  variable wave =  1*/ ;
/* Empty map cell for: R_LBLONELY11  variable wave =  1*/ ;
/* Empty map cell for: R_LBLONELY3   variable wave =  1*/ ;
/* Empty map cell for: R_LBNEGAFFECT variable wave =  1*/ ;
/* Empty map cell for: R_LBNEGAFFECT6variable wave =  1*/ ;
/* Empty map cell for: R_LBNEUR      variable wave =  1*/ ;
/* Empty map cell for: R_LBONCHRSTR  variable wave =  1*/ ;
/* Empty map cell for: R_LBOPEN      variable wave =  1*/ ;
/* Empty map cell for: R_LBPOSAFFECT variable wave =  1*/ ;
/* Empty map cell for: R_LBPOSAFFECT6variable wave =  1*/ ;
R_LBRF=R1LBRF ;
R_LBRFH=R1LBRFH ;
R_LBRFY=R1LBRFY ;
/* Empty map cell for: R_LBRLTNSHPRB variable wave =  1*/ ;
/* Empty map cell for: R_LBSATCITY   variable wave =  1*/ ;
/* Empty map cell for: R_LBSATFAM    variable wave =  1*/ ;
/* Empty map cell for: R_LBSATFIN    variable wave =  1*/ ;
/* Empty map cell for: R_LBSATHLTH   variable wave =  1*/ ;
/* Empty map cell for: R_LBSATHOME   variable wave =  1*/ ;
/* Empty map cell for: R_LBSATINC    variable wave =  1*/ ;
/* Empty map cell for: R_LBSATLEISUREvariable wave =  1*/ ;
/* Empty map cell for: R_LBSATLIFE   variable wave =  1*/ ;
/* Empty map cell for: R_LBSATWLF    variable wave =  1*/ ;
/* Empty map cell for: R_LBWGTR      variable wave =  1*/ ;
/* Empty map cell for: R_LBWORKPRB   variable wave =  1*/ ;
/* Empty map cell for: R_LGMUSA      variable wave =  1*/ ;
R_LGMUSW=R1LGMUSW ;
R_LHTACT=R1LHTACT ;
R_LIFEIN=R1LIFEIN ;
R1_LIFT=R1LIFT ;
/* Empty map cell for: R2_LIFT       variable wave =  1*/ ;
/* Empty map cell for: R_LIFT        variable wave =  1*/ ;
/* Empty map cell for: R_LIFTA       variable wave =  1*/ ;
R_LIFTW=R1LIFTW ;
/* Empty map cell for: R_LIV10       variable wave =  1*/ ;
/* Empty map cell for: R_LIV10A      variable wave =  1*/ ;
/* Empty map cell for: R_LIV10P      variable wave =  1*/ ;
/* Empty map cell for: R_LIV10R      variable wave =  1*/ ;
R_LIV75=R1LIV75 ;
/* Empty map cell for: R_LIV75C      variable wave =  1*/ ;
/* Empty map cell for: R_LIV75F      variable wave =  1*/ ;
R_LIV75P=R1LIV75P ;
R_LIV75R=R1LIV75R ;
R_LIV85=R1LIV85 ;
/* Empty map cell for: R_LIV85C      variable wave =  1*/ ;
/* Empty map cell for: R_LIV85F      variable wave =  1*/ ;
R_LIV85P=R1LIV85P ;
R_LIV85R=R1LIV85R ;
/* Empty map cell for: R_LIV8XC      variable wave =  1*/ ;
/* Empty map cell for: R_LIV8XF      variable wave =  1*/ ;
R_LIVBRO=R1LIVBRO ;
R_LIVPAR=R1LIVPAR ;
R_LIVSIB=R1LIVSIB ;
R_LIVSIS=R1LIVSIS ;
/* Empty map cell for: R_LOST        variable wave =  1*/ ;
R_LTACTF=R1LTACTF ;
/* Empty map cell for: R_LTACTN      variable wave =  1*/ ;
/* Empty map cell for: R_LTACTP      variable wave =  1*/ ;
/* Empty map cell for: R_LTACTX      variable wave =  1*/ ;
R_LTCPRM=R1LTCPRM ;
R_LUNG=R1LUNG ;
R_LUNGE=R1LUNGE ;
R_LUNGF=R1LUNGF ;
R_LUNGQ=R1LUNGQ ;
/* Empty map cell for: R_LUNGS       variable wave =  1*/ ;
/* Empty map cell for: R_MAMMOG      variable wave =  1*/ ;
R1_MAP=R1MAP ;
/* Empty map cell for: R2_MAP        variable wave =  1*/ ;
/* Empty map cell for: R_MAP         variable wave =  1*/ ;
/* Empty map cell for: R_MAPA        variable wave =  1*/ ;
R_MAPW=R1MAPW ;
R_MCURLN=R1MCURLN ;
R_MCWV=R1MCWV ;
R_MCWVW=R1MCWVW ;
/* Empty map cell for: R_MDACTX      variable wave =  1*/ ;
R_MDIV=R1MDIV ;
/* Empty map cell for: R_MEALS       variable wave =  1*/ ;
/* Empty map cell for: R_MEALSA      variable wave =  1*/ ;
/* Empty map cell for: R_MEALSH      variable wave =  1*/ ;
/* Empty map cell for: R_MEALSR      variable wave =  1*/ ;
/* Empty map cell for: R2_MEDS       variable wave =  1*/ ;
/* Empty map cell for: R_MEDS        variable wave =  1*/ ;
/* Empty map cell for: R_MEDSA       variable wave =  1*/ ;
/* Empty map cell for: R_MEDSH       variable wave =  1*/ ;
/* Empty map cell for: R_MEDSR       variable wave =  1*/ ;
/* Empty map cell for: R_MEMRY       variable wave =  1*/ ;
/* Empty map cell for: R_MEMRYE      variable wave =  1*/ ;
/* Empty map cell for: R_MEMRYF      variable wave =  1*/ ;
/* Empty map cell for: R_MEMRYQ      variable wave =  1*/ ;
/* Empty map cell for: R_MEMRYS      variable wave =  1*/ ;
R_MEND=R1MEND ;
R_MLEN=R1MLEN ;
R_MLENM=R1MLENM ;
R_MNEV=R1MNEV ;
/* Empty map cell for: R_MO          variable wave =  1*/ ;
/* Empty map cell for: R_MOBILA      variable wave =  1*/ ;
R_MOBILW=R1MOBILW ;
R_MOMAGE=R1MOMAGE ;
R_MOMLIV=R1MOMLIV ;
/* Empty map cell for: R2_MONEY      variable wave =  1*/ ;
/* Empty map cell for: R_MONEY       variable wave =  1*/ ;
/* Empty map cell for: R_MONEYA      variable wave =  1*/ ;
/* Empty map cell for: R_MONEYH      variable wave =  1*/ ;
/* Empty map cell for: R_MONEYR      variable wave =  1*/ ;
R_MPART=R1MPART ;
R_MRCT=R1MRCT ;
/* Empty map cell for: R_MRPREM      variable wave =  1*/ ;
R_MSTAT=R1MSTAT ;
R_MSTATF=R1MSTATF ;
R_MSTATH=R1MSTATH ;
/* Empty map cell for: R_MSTOT       variable wave =  1*/ ;
R_MWID=R1MWID ;
/* Empty map cell for: R_NHMDAY      variable wave =  1*/ ;
/* Empty map cell for: R_NHMLIV      variable wave =  1*/ ;
/* Empty map cell for: R_NHMMVM      variable wave =  1*/ ;
/* Empty map cell for: R_NHMMVY      variable wave =  1*/ ;
/* Empty map cell for: R_NOTICS      variable wave =  1*/ ;
/* Empty map cell for: R_NOVOC       variable wave =  1*/ ;
R_NRSHOM=R1NRSHOM ;
R_NRSNIT=R1NRSNIT ;
R_NRSTIM=R1NRSTIM ;
/* Empty map cell for: R_NSSCRE      variable wave =  1*/ ;
/* Empty map cell for: R_NSSCSE      variable wave =  1*/ ;
/* Empty map cell for: R_OOPMD       variable wave =  1*/ ;
/* Empty map cell for: R_OOPMDF      variable wave =  1*/ ;
/* Empty map cell for: R_OOPMDO      variable wave =  1*/ ;
/* Empty map cell for: R_OOPMDOF     variable wave =  1*/ ;
/* Empty map cell for: R_OUTPT       variable wave =  1*/ ;
/* Empty map cell for: R_PAPSM       variable wave =  1*/ ;
/* Empty map cell for: R_PARTD       variable wave =  1*/ ;
R_PENCT=R1PENCT ;
/* Empty map cell for: R_PENIC1      variable wave =  1*/ ;
/* Empty map cell for: R_PENIC2      variable wave =  1*/ ;
/* Empty map cell for: R_PENINC      variable wave =  1*/ ;
/* Empty map cell for: R_PENI_N      variable wave =  1*/ ;
/* Empty map cell for: R_PEXIT       variable wave =  1*/ ;
/* Empty map cell for: R2_PHONE      variable wave =  1*/ ;
/* Empty map cell for: R_PHONE       variable wave =  1*/ ;
/* Empty map cell for: R_PHONEA      variable wave =  1*/ ;
/* Empty map cell for: R_PHONEH      variable wave =  1*/ ;
/* Empty map cell for: R_PHONER      variable wave =  1*/ ;
/* Empty map cell for: R_PMBMI       variable wave =  1*/ ;
/* Empty map cell for: R_PMHGHT      variable wave =  1*/ ;
/* Empty map cell for: R_PMHGHTS     variable wave =  1*/ ;
/* Empty map cell for: R_PMWAIST     variable wave =  1*/ ;
/* Empty map cell for: R_PMWAISTC    variable wave =  1*/ ;
/* Empty map cell for: R_PMWGHT      variable wave =  1*/ ;
/* Empty map cell for: R_PMWGHTF     variable wave =  1*/ ;
/* Empty map cell for: R_PMWGHTS     variable wave =  1*/ ;
/* Empty map cell for: R_PNHM5Y      variable wave =  1*/ ;
/* Empty map cell for: R_PRCHMEM     variable wave =  1*/ ;
/* Empty map cell for: R_PRES        variable wave =  1*/ ;
/* Empty map cell for: R_PRMEM       variable wave =  1*/ ;
/* Empty map cell for: R_PROST       variable wave =  1*/ ;
R_PROXY=R1PROXY ;
R_PRPCNT=R1PRPCNT ;
R_PRPRM1=R1PRPRM1 ;
/* Empty map cell for: R_PRPRM2      variable wave =  1*/ ;
/* Empty map cell for: R_PRPRM3      variable wave =  1*/ ;
R_PRSRC1=R1PRSRC1 ;
/* Empty map cell for: R_PRSRC2      variable wave =  1*/ ;
/* Empty map cell for: R_PRSRC3      variable wave =  1*/ ;
R_PSTMEM=R1PSTMEM ;
R_PSYCH=R1PSYCH ;
R_PSYCHE=R1PSYCHE ;
R_PSYCHF=R1PSYCHF ;
R_PSYCHQ=R1PSYCHQ ;
/* Empty map cell for: R_PSYCHS      variable wave =  1*/ ;
R_PTYP1=R1PTYP1 ;
R_PTYP2=R1PTYP2 ;
R_PTYP3=R1PTYP3 ;
/* Empty map cell for: R_PTYP4       variable wave =  1*/ ;
/* Empty map cell for: R_PTYPD1      variable wave =  1*/ ;
/* Empty map cell for: R_PTYPD2      variable wave =  1*/ ;
/* Empty map cell for: R_PTYPD3      variable wave =  1*/ ;
/* Empty map cell for: R_PTYPD4      variable wave =  1*/ ;
/* Empty map cell for: R_PTYPF1      variable wave =  1*/ ;
/* Empty map cell for: R_PTYPF2      variable wave =  1*/ ;
/* Empty map cell for: R_PTYPF3      variable wave =  1*/ ;
/* Empty map cell for: R_PTYPF4      variable wave =  1*/ ;
/* Empty map cell for: R_PUFF        variable wave =  1*/ ;
/* Empty map cell for: R_PUFFPOS     variable wave =  1*/ ;
R1_PUSH=R1PUSH ;
/* Empty map cell for: R2_PUSH       variable wave =  1*/ ;
/* Empty map cell for: R_PUSH        variable wave =  1*/ ;
/* Empty map cell for: R_PUSHA       variable wave =  1*/ ;
R_PUSHW=R1PUSHW ;
R_RETDTWV=R1RETDTWV ;
R_RETEMP=R1RETEMP ;
R_RETINC=R1RETINC ;
R_RETLIV=R1RETLIV ;
R_RETMON=R1RETMON ;
R_RETSAT=R1RETSAT ;
R_RETWLT=R1RETWLT ;
R_RETWRK=R1RETWRK ;
R_RETWSP=R1RETWSP ;
R_RETYR=R1RETYR ;
R_RISK=R1RISK ;
/* Empty map cell for: R_RISK6       variable wave =  1*/ ;
R_RPLNYA=R1RPLNYA ;
R_RPLNYR=R1RPLNYR ;
/* Empty map cell for: R_RXPREM      variable wave =  1*/ ;
R_RYRCMP=R1RYRCMP ;
/* Empty map cell for: R_SADLF       variable wave =  1*/ ;
/* Empty map cell for: R_SAMEJOB     variable wave =  1*/ ;
/* Empty map cell for: R_SAMEMP      variable wave =  1*/ ;
R_SAYRET=R1SAYRET ;
/* Empty map cell for: R_SCIS        variable wave =  1*/ ;
/* Empty map cell for: R_SDIAPL      variable wave =  1*/ ;
/* Empty map cell for: R_SDIAPLM     variable wave =  1*/ ;
/* Empty map cell for: R_SDIAPLY     variable wave =  1*/ ;
/* Empty map cell for: R_SDIAPP      variable wave =  1*/ ;
/* Empty map cell for: R_SDIAPPM     variable wave =  1*/ ;
/* Empty map cell for: R_SDIAPPY     variable wave =  1*/ ;
/* Empty map cell for: R_SDIDEN      variable wave =  1*/ ;
/* Empty map cell for: R_SDIREC      variable wave =  1*/ ;
/* Empty map cell for: R_SDIRECM     variable wave =  1*/ ;
/* Empty map cell for: R_SDIRECY     variable wave =  1*/ ;
/* Empty map cell for: R_SDISTP      variable wave =  1*/ ;
/* Empty map cell for: R_SDISTPM     variable wave =  1*/ ;
/* Empty map cell for: R_SDISTPY     variable wave =  1*/ ;
/* Empty map cell for: R_SER7        variable wave =  1*/ ;
R_SHLT=R1SHLT ;
/* Empty map cell for: R_SHLTC       variable wave =  1*/ ;
/* Empty map cell for: R_SHLTCF      variable wave =  1*/ ;
/* Empty map cell for: R_SHOP        variable wave =  1*/ ;
/* Empty map cell for: R_SHOPA       variable wave =  1*/ ;
/* Empty map cell for: R_SHOPH       variable wave =  1*/ ;
/* Empty map cell for: R_SHOPR       variable wave =  1*/ ;
R1_SIT=R1SIT ;
/* Empty map cell for: R2_SIT        variable wave =  1*/ ;
/* Empty map cell for: R_SIT         variable wave =  1*/ ;
/* Empty map cell for: R_SITA        variable wave =  1*/ ;
R_SITW=R1SITW ;
/* Empty map cell for: R_SLEEP       variable wave =  1*/ ;
/* Empty map cell for: R_SLEEPE      variable wave =  1*/ ;
/* Empty map cell for: R_SLEEPQ      variable wave =  1*/ ;
/* Empty map cell for: R_SLEEPR      variable wave =  1*/ ;
/* Empty map cell for: R_SLEEPS      variable wave =  1*/ ;
R_SLEEPX=R1SLEEPX ;
R_SLFEMP=R1SLFEMP ;
R_SLFMEM=R1SLFMEM ;
R_SMOKEN=R1SMOKEN ;
R_SMOKEV=R1SMOKEV ;
/* Empty map cell for: R_SPCFAC      variable wave =  1*/ ;
/* Empty map cell for: R_SSAPL       variable wave =  1*/ ;
/* Empty map cell for: R_SSAPLM      variable wave =  1*/ ;
/* Empty map cell for: R_SSAPLY      variable wave =  1*/ ;
/* Empty map cell for: R_SSAPP       variable wave =  1*/ ;
/* Empty map cell for: R_SSAPPM      variable wave =  1*/ ;
/* Empty map cell for: R_SSAPPY      variable wave =  1*/ ;
/* Empty map cell for: R_SSDEN       variable wave =  1*/ ;
R_SSDI=R1SSDI ;
/* Empty map cell for: R_SSIAPL      variable wave =  1*/ ;
/* Empty map cell for: R_SSIAPLM     variable wave =  1*/ ;
/* Empty map cell for: R_SSIAPLY     variable wave =  1*/ ;
/* Empty map cell for: R_SSIAPP      variable wave =  1*/ ;
/* Empty map cell for: R_SSIAPPM     variable wave =  1*/ ;
/* Empty map cell for: R_SSIAPPY     variable wave =  1*/ ;
/* Empty map cell for: R_SSIDEN      variable wave =  1*/ ;
/* Empty map cell for: R_SSIREC      variable wave =  1*/ ;
/* Empty map cell for: R_SSIRECM     variable wave =  1*/ ;
/* Empty map cell for: R_SSIRECY     variable wave =  1*/ ;
/* Empty map cell for: R_SSISTP      variable wave =  1*/ ;
/* Empty map cell for: R_SSISTPM     variable wave =  1*/ ;
/* Empty map cell for: R_SSISTPY     variable wave =  1*/ ;
/* Empty map cell for: R_SSREC       variable wave =  1*/ ;
/* Empty map cell for: R_SSRECM      variable wave =  1*/ ;
/* Empty map cell for: R_SSRECY      variable wave =  1*/ ;
/* Empty map cell for: R_SSSTP       variable wave =  1*/ ;
/* Empty map cell for: R_SSSTPM      variable wave =  1*/ ;
/* Empty map cell for: R_SSSTPY      variable wave =  1*/ ;
R_SSWRER=R1SSWRER ;
R_SSWRNR=R1SSWRNR ;
R_SSWRXA=R1SSWRXA ;
/* Empty map cell for: R_SSWSER      variable wave =  1*/ ;
/* Empty map cell for: R_SSWSNR      variable wave =  1*/ ;
/* Empty map cell for: R_SSWSXA      variable wave =  1*/ ;
R_STATUS=R1STATUS ;
R1_STOOP=R1STOOP ;
/* Empty map cell for: R2_STOOP      variable wave =  1*/ ;
/* Empty map cell for: R_STOOP       variable wave =  1*/ ;
/* Empty map cell for: R_STOOPA      variable wave =  1*/ ;
R_STOOPW=R1STOOPW ;
R_STROK=R1STROK ;
R_STROKE=R1STROKE ;
R_STROKF=R1STROKF ;
R_STROKQ=R1STROKQ ;
/* Empty map cell for: R_STROKS      variable wave =  1*/ ;
/* Empty map cell for: R_TIMWLK      variable wave =  1*/ ;
/* Empty map cell for: R_TIMWLKA     variable wave =  1*/ ;
R_TLIPRM=R1TLIPRM ;
/* Empty map cell for: R2_TOILT      variable wave =  1*/ ;
/* Empty map cell for: R_TOILT       variable wave =  1*/ ;
/* Empty map cell for: R_TOILTA      variable wave =  1*/ ;
/* Empty map cell for: R2_TOILTH     variable wave =  1*/ ;
/* Empty map cell for: R_TOILTH      variable wave =  1*/ ;
/* Empty map cell for: R_TOTMBF      variable wave =  1*/ ;
/* Empty map cell for: R_TOTMBI      variable wave =  1*/ ;
/* Empty map cell for: R_TOTMD       variable wave =  1*/ ;
/* Empty map cell for: R_TOTMDF      variable wave =  1*/ ;
/* Empty map cell for: R_TR20        variable wave =  1*/ ;
R_TR40=R1TR40 ;
/* Empty map cell for: R_TYLTC       variable wave =  1*/ ;
R_ULCER=R1ULCER ;
R_UNEMP=R1UNEMP ;
R_UNION=R1UNION ;
/* Empty map cell for: R_UNIONF      variable wave =  1*/ ;
R_VGACTF=R1VGACTF ;
/* Empty map cell for: R_VGACTN      variable wave =  1*/ ;
/* Empty map cell for: R_VGACTP      variable wave =  1*/ ;
/* Empty map cell for: R_VGACTX      variable wave =  1*/ ;
R_VIGACT=R1VIGACT ;
/* Empty map cell for: R_VOCAB       variable wave =  1*/ ;
/* Empty map cell for: R_VP          variable wave =  1*/ ;
R1_WALK1=R1WALK1 ;
/* Empty map cell for: R2_WALK1      variable wave =  1*/ ;
/* Empty map cell for: R_WALK1       variable wave =  1*/ ;
/* Empty map cell for: R_WALK1A      variable wave =  1*/ ;
R_WALK1W=R1WALK1W ;
R1_WALKR=R1WALKR ;
/* Empty map cell for: R2_WALKR      variable wave =  1*/ ;
/* Empty map cell for: R_WALKR       variable wave =  1*/ ;
/* Empty map cell for: R_WALKRA      variable wave =  1*/ ;
/* Empty map cell for: R_WALKRE      variable wave =  1*/ ;
/* Empty map cell for: R2_WALKRH     variable wave =  1*/ ;
/* Empty map cell for: R_WALKRH      variable wave =  1*/ ;
R_WALKRW=R1WALKRW ;
R1_WALKS=R1WALKS ;
/* Empty map cell for: R2_WALKS      variable wave =  1*/ ;
/* Empty map cell for: R_WALKS       variable wave =  1*/ ;
/* Empty map cell for: R_WALKSA      variable wave =  1*/ ;
R_WALKSW=R1WALKSW ;
/* Empty map cell for: R_WANDER      variable wave =  1*/ ;
R_WEIGHT=R1WEIGHT ;
R_WGFHR=R1WGFHR ;
R_WGFWK=R1WGFWK ;
R_WGIHR=R1WGIHR ;
R_WGIWK=R1WGIWK ;
R_WHAPPX=R1WHAPPX ;
/* Empty map cell for: R_WHAPPY      variable wave =  1*/ ;
R_WLIPRM=R1WLIPRM ;
R_WORK=R1WORK ;
R_WORK2=R1WORK2 ;
R_WORK62=R1WORK62 ;
/* Empty map cell for: R_WORK62F     variable wave =  1*/ ;
R_WORK65=R1WORK65 ;
/* Empty map cell for: R_WORK65F     variable wave =  1*/ ;
/* Empty map cell for: R_WORK70      variable wave =  1*/ ;
/* Empty map cell for: R_WORK70A     variable wave =  1*/ ;
/* Empty map cell for: R_WORK70AF    variable wave =  1*/ ;
/* Empty map cell for: R_WORK70F     variable wave =  1*/ ;
R_WORKLM=R1WORKLM ;
R_WTCRNH=R1WTCRNH ;
R_WTHH=R1WTHH ;
R_WTRESP=R1WTRESP ;
/* Empty map cell for: R_WTR_NH      variable wave =  1*/ ;
/* Empty map cell for: R_YR          variable wave =  1*/ ;
if inw=1 then output ;
%put --- Rlong table ;
%initvars ;
%put ---- Rlong table ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
WAVE_NUMBER=2 ;
H_HHIDC=H2HHIDC ;
SUBHH= substr(H_HHIDC,7)     /* --- Derived variable  */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
INW=INW2 ;
WAVE_NAME=  'hrs_wave'||strip(put(wave_number,3.))     /* --- Derived variable  */ ;
CYEAR='yr1993_94' ;
/* --- RAND variable:HACOHORT  included */ ;
studyyr= hrs_studyyr(wave_number,
hacohort)     /* --- Derived variable  */ ;
H_HHID=H2HHID ;
S_HHIDPN=S2HHIDPN ;
R_ACGTOT=R2ACGTOT ;
R_ADL5A=R2ADL5A ;
R_ADL5H=R2ADL5H ;
R_ADL6A=R2ADL6A ;
R_ADL6H=R2ADL6H ;
R_ADLR10=R2ADLR10 ;
/* Empty map cell for: R_ADLW        variable wave =  2*/ ;
R_AGEM_B=R2AGEM_B ;
R_AGEM_E=R2AGEM_E ;
R_AGEM_M=R2AGEM_M ;
R_AGEY_B=R2AGEY_B ;
R_AGEY_E=R2AGEY_E ;
R_AGEY_M=R2AGEY_M ;
R_AIMR10=R2AIMR10 ;
R_ALONE=R2ALONE ;
/* Empty map cell for: R_ALZHE       variable wave =  2*/ ;
/* Empty map cell for: R_ALZHEE      variable wave =  2*/ ;
/* Empty map cell for: R_ALZHEF      variable wave =  2*/ ;
/* Empty map cell for: R_ALZHEQ      variable wave =  2*/ ;
/* Empty map cell for: R_ALZHES      variable wave =  2*/ ;
R_AMSTOT=R2AMSTOT ;
/* Empty map cell for: R_ANS3PQ      variable wave =  2*/ ;
/* Empty map cell for: R1_ARMS       variable wave =  2*/ ;
R2_ARMS=R2ARMS ;
/* Empty map cell for: R_ARMS        variable wave =  2*/ ;
R_ARMSA=R2ARMSA ;
/* Empty map cell for: R_ARMSW       variable wave =  2*/ ;
R_ARTHR=R2ARTHR ;
R_ARTHRE=R2ARTHRE ;
R_ARTHRF=R2ARTHRF ;
R_ARTHRQ=R2ARTHRQ ;
R_ARTHRS=R2ARTHRS ;
R_ATR20=R2ATR20 ;
R_BACK=R2BACK ;
/* Empty map cell for: R_BALFUL      variable wave =  2*/ ;
/* Empty map cell for: R_BALFULC     variable wave =  2*/ ;
/* Empty map cell for: R_BALFULT     variable wave =  2*/ ;
/* Empty map cell for: R_BALSBS      variable wave =  2*/ ;
/* Empty map cell for: R_BALSBSC     variable wave =  2*/ ;
/* Empty map cell for: R_BALSEMI     variable wave =  2*/ ;
/* Empty map cell for: R_BALSEMIC    variable wave =  2*/ ;
/* Empty map cell for: R1_BATH       variable wave =  2*/ ;
R2_BATH=R2BATH ;
/* Empty map cell for: R_BATH        variable wave =  2*/ ;
R_BATHA=R2BATHA ;
R2_BATHH=R2BATHH ;
/* Empty map cell for: R_BATHH       variable wave =  2*/ ;
/* Empty map cell for: R_BATHW       variable wave =  2*/ ;
/* Empty map cell for: R1_BED        variable wave =  2*/ ;
R2_BED=R2BED ;
/* Empty map cell for: R_BED         variable wave =  2*/ ;
R_BEDA=R2BEDA ;
R_BEDE=R2BEDE ;
R2_BEDH=R2BEDH ;
/* Empty map cell for: R_BEDH        variable wave =  2*/ ;
/* Empty map cell for: R_BEDW        variable wave =  2*/ ;
R_BEQ100=R2BEQ100 ;
R_BEQ10K=R2BEQ10K ;
/* Empty map cell for: R_BEQ500      variable wave =  2*/ ;
R_BEQANY=R2BEQANY ;
/* Empty map cell for: R_BEQLRG      variable wave =  2*/ ;
R_BMI=R2BMI ;
/* Empty map cell for: R_BPDIA       variable wave =  2*/ ;
/* Empty map cell for: R_BPPOS       variable wave =  2*/ ;
/* Empty map cell for: R_BPPULS      variable wave =  2*/ ;
/* Empty map cell for: R_BPSYS       variable wave =  2*/ ;
/* Empty map cell for: R_BREAST      variable wave =  2*/ ;
R_BWC20=R2BWC20 ;
/* Empty map cell for: R_BWC86       variable wave =  2*/ ;
R_CACT=R2CACT ;
/* Empty map cell for: R1_CALC       variable wave =  2*/ ;
R2_CALC=R2CALC ;
R_CALCA=R2CALCA ;
/* Empty map cell for: R_CALCW       variable wave =  2*/ ;
R_CANCR=R2CANCR ;
R_CANCRE=R2CANCRE ;
R_CANCRF=R2CANCRF ;
R_CANCRQ=R2CANCRQ ;
R_CANCRS=R2CANCRS ;
R_CENDIV=R2CENDIV ;
R_CENREG=R2CENREG ;
R_CESD=R2CESD ;
R_CESDM=R2CESDM ;
/* Empty map cell for: R1_CHAIR      variable wave =  2*/ ;
R2_CHAIR=R2CHAIR ;
/* Empty map cell for: R_CHAIR       variable wave =  2*/ ;
R_CHAIRA=R2CHAIRA ;
/* Empty map cell for: R_CHAIRW      variable wave =  2*/ ;
/* Empty map cell for: R_CHOLST      variable wave =  2*/ ;
/* Empty map cell for: R_CLAIMED     variable wave =  2*/ ;
/* Empty map cell for: R1_CLIM1      variable wave =  2*/ ;
R2_CLIM1=R2CLIM1 ;
/* Empty map cell for: R_CLIM1       variable wave =  2*/ ;
R_CLIM1A=R2CLIM1A ;
/* Empty map cell for: R_CLIM1W      variable wave =  2*/ ;
/* Empty map cell for: R1_CLIMS      variable wave =  2*/ ;
R2_CLIMS=R2CLIMS ;
/* Empty map cell for: R_CLIMS       variable wave =  2*/ ;
R_CLIMSA=R2CLIMSA ;
/* Empty map cell for: R_CLIMSW      variable wave =  2*/ ;
/* Empty map cell for: R_COGTOT      variable wave =  2*/ ;
/* Empty map cell for: R_COMP        variable wave =  2*/ ;
/* Empty map cell for: R_COMPW       variable wave =  2*/ ;
R_CONDE=R2CONDE ;
R_CONDEF=R2CONDEF ;
R_CONDS=R2CONDS ;
R_CONDSF=R2CONDSF ;
R_CONDSP=R2CONDSP ;
R_COVR=R2COVR ;
R_COVRT=R2COVRT ;
R_COVS=R2COVS ;
R_DADAGE=R2DADAGE ;
R_DADLIV=R2DADLIV ;
R_DCBAL1=R2DCBAL1 ;
R_DCBAL2=R2DCBAL2 ;
R_DCBAL3=R2DCBAL3 ;
/* Empty map cell for: R_DCBAL4      variable wave =  2*/ ;
R_DCBENE1=R2DCBENE1 ;
R_DCBENE2=R2DCBENE2 ;
R_DCBENE3=R2DCBENE3 ;
/* Empty map cell for: R_DCBENE4     variable wave =  2*/ ;
R_DCCONT1=R2DCCONT1 ;
R_DCCONT2=R2DCCONT2 ;
R_DCCONT3=R2DCCONT3 ;
/* Empty map cell for: R_DCCONT4     variable wave =  2*/ ;
R_DCMODE1=R2DCMODE1 ;
R_DCMODE2=R2DCMODE2 ;
R_DCMODE3=R2DCMODE3 ;
/* Empty map cell for: R_DCMODE4     variable wave =  2*/ ;
R_DCPCT1=R2DCPCT1 ;
R_DCPCT2=R2DCPCT2 ;
R_DCPCT3=R2DCPCT3 ;
/* Empty map cell for: R_DCPCT4      variable wave =  2*/ ;
/* Empty map cell for: R_DEMEN       variable wave =  2*/ ;
/* Empty map cell for: R_DEMENE      variable wave =  2*/ ;
/* Empty map cell for: R_DEMENF      variable wave =  2*/ ;
/* Empty map cell for: R_DEMENQ      variable wave =  2*/ ;
/* Empty map cell for: R_DEMENS      variable wave =  2*/ ;
R_DENTST=R2DENTST ;
R_DEPRES=R2DEPRES ;
/* Empty map cell for: R_DEPREX      variable wave =  2*/ ;
R_DIAB=R2DIAB ;
R_DIABE=R2DIABE ;
R_DIABF=R2DIABF ;
R_DIABQ=R2DIABQ ;
R_DIABS=R2DIABS ;
/* Empty map cell for: R1_DIME       variable wave =  2*/ ;
R2_DIME=R2DIME ;
/* Empty map cell for: R_DIME        variable wave =  2*/ ;
R_DIMEA=R2DIMEA ;
/* Empty map cell for: R_DIMEW       variable wave =  2*/ ;
/* Empty map cell for: R_DLRC        variable wave =  2*/ ;
/* Empty map cell for: R_DLRC20      variable wave =  2*/ ;
R_DOCTIM=R2DOCTIM ;
R_DOCTOR=R2DOCTOR ;
/* Empty map cell for: R1_DRESS      variable wave =  2*/ ;
R2_DRESS=R2DRESS ;
/* Empty map cell for: R_DRESS       variable wave =  2*/ ;
R_DRESSA=R2DRESSA ;
R2_DRESSH=R2DRESSH ;
/* Empty map cell for: R_DRESSH      variable wave =  2*/ ;
/* Empty map cell for: R_DRESSW      variable wave =  2*/ ;
R_DRINK=R2DRINK ;
/* Empty map cell for: R_DRINKD      variable wave =  2*/ ;
/* Empty map cell for: R_DRINKN      variable wave =  2*/ ;
R_DRINKR=R2DRINKR ;
R_DRUGS=R2DRUGS ;
/* Empty map cell for: R_DSIAMT      variable wave =  2*/ ;
/* Empty map cell for: R_DSSAMT      variable wave =  2*/ ;
R_DSTAT=R2DSTAT ;
R_DW=R2DW ;
R_DY=R2DY ;
/* Empty map cell for: R1_EAT        variable wave =  2*/ ;
R2_EAT=R2EAT ;
/* Empty map cell for: R_EAT         variable wave =  2*/ ;
R_EATA=R2EATA ;
R2_EATH=R2EATH ;
/* Empty map cell for: R_EATH        variable wave =  2*/ ;
/* Empty map cell for: R_EATW        variable wave =  2*/ ;
R_EFFORT=R2EFFORT ;
/* Empty map cell for: R_EFFORX      variable wave =  2*/ ;
R_ENLIFE=R2ENLIFE ;
/* Empty map cell for: R_ENLIFX      variable wave =  2*/ ;
R_FAMR=R2FAMR ;
R_FBWC20=R2FBWC20 ;
/* Empty map cell for: R_FBWC86      variable wave =  2*/ ;
R_FCACT=R2FCACT ;
R_FDLRC=R2FDLRC ;
R_FDW=R2FDW ;
R_FDY=R2FDY ;
R_FIMRC=R2FIMRC ;
R_FINEA=R2FINEA ;
/* Empty map cell for: R_FINPLN      variable wave =  2*/ ;
R_FINR=R2FINR ;
R_FLAG=R2FLAG ;
R_FLONE=R2FLONE ;
/* Empty map cell for: R_FLONEX      variable wave =  2*/ ;
/* Empty map cell for: R_FLUSHT      variable wave =  2*/ ;
R_FMO=R2FMO ;
R_FPRES=R2FPRES ;
R_FPSTME=R2FPSTME ;
R_FSAD=R2FSAD ;
/* Empty map cell for: R_FSADX       variable wave =  2*/ ;
R_FSCIS=R2FSCIS ;
R_FSER7=R2FSER7 ;
R_FSIZE=R2FSIZE ;
R_FSIZEF=R2FSIZEF ;
R_FSLFME=R2FSLFME ;
/* Empty map cell for: R_FVOCAB      variable wave =  2*/ ;
R_FVP=R2FVP ;
R_FYR=R2FYR ;
R_GOING=R2GOING ;
/* Empty map cell for: R_GOINGX      variable wave =  2*/ ;
R_GOVMD=R2GOVMD ;
R_GOVMR=R2GOVMR ;
R_GOVOT=R2GOVOT ;
R_GOVVA=R2GOVVA ;
R_GROSSA=R2GROSSA ;
/* Empty map cell for: R_GRP         variable wave =  2*/ ;
/* Empty map cell for: R_GRPDOM      variable wave =  2*/ ;
/* Empty map cell for: R_GRPL        variable wave =  2*/ ;
/* Empty map cell for: R_GRPPOS      variable wave =  2*/ ;
/* Empty map cell for: R_GRPR        variable wave =  2*/ ;
R_HALUC=R2HALUC ;
R_HDLR20=R2HDLR20 ;
R_HEART=R2HEART ;
R_HEARTE=R2HEARTE ;
R_HEARTF=R2HEARTF ;
R_HEARTQ=R2HEARTQ ;
R_HEARTS=R2HEARTS ;
R_HECOV1=R2HECOV1 ;
R_HECOV2=R2HECOV2 ;
/* Empty map cell for: R_HECOV3      variable wave =  2*/ ;
R_HEIGHT=R2HEIGHT ;
R_HENUM=R2HENUM ;
R_HERET=R2HERET ;
R_HERTR1=R2HERTR1 ;
R_HERTR2=R2HERTR2 ;
/* Empty map cell for: R_HERTR3      variable wave =  2*/ ;
R_HERTS1=R2HERTS1 ;
R_HERTS2=R2HERTS2 ;
/* Empty map cell for: R_HERTS3      variable wave =  2*/ ;
R_HESRC1=R2HESRC1 ;
R_HESRC2=R2HESRC2 ;
/* Empty map cell for: R_HESRC3      variable wave =  2*/ ;
R_HIBP=R2HIBP ;
R_HIBPE=R2HIBPE ;
R_HIBPF=R2HIBPF ;
R_HIBPQ=R2HIBPQ ;
R_HIBPS=R2HIBPS ;
R_HIGOV=R2HIGOV ;
R_HILTC=R2HILTC ;
R_HIMR20=R2HIMR20 ;
R_HIOTHP=R2HIOTHP ;
/* Empty map cell for: R_HLPDYSF     variable wave =  2*/ ;
/* Empty map cell for: R_HLPDYSNF    variable wave =  2*/ ;
/* Empty map cell for: R_HLPDYSP     variable wave =  2*/ ;
/* Empty map cell for: R_HLPDYST     variable wave =  2*/ ;
/* Empty map cell for: R_HLPDYSU     variable wave =  2*/ ;
/* Empty map cell for: R_HLPHRSF     variable wave =  2*/ ;
/* Empty map cell for: R_HLPHRSNF    variable wave =  2*/ ;
/* Empty map cell for: R_HLPHRSP     variable wave =  2*/ ;
/* Empty map cell for: R_HLPHRST     variable wave =  2*/ ;
/* Empty map cell for: R_HLPHRSU     variable wave =  2*/ ;
/* Empty map cell for: R_HLPPDFA     variable wave =  2*/ ;
/* Empty map cell for: R_HLPPDFN     variable wave =  2*/ ;
/* Empty map cell for: R_HLPPDNFA    variable wave =  2*/ ;
/* Empty map cell for: R_HLPPDNFN    variable wave =  2*/ ;
/* Empty map cell for: R_HLPPDTA     variable wave =  2*/ ;
/* Empty map cell for: R_HLPPDTN     variable wave =  2*/ ;
/* Empty map cell for: R_HLPRFN      variable wave =  2*/ ;
/* Empty map cell for: R_HLPRNFN     variable wave =  2*/ ;
/* Empty map cell for: R_HLPRPN      variable wave =  2*/ ;
/* Empty map cell for: R_HLPRTN      variable wave =  2*/ ;
/* Empty map cell for: R_HLPRUN      variable wave =  2*/ ;
R_HLTC3=R2HLTC3 ;
R_HLTC5=R2HLTC5 ;
/* Empty map cell for: R_HLTC5F      variable wave =  2*/ ;
R_HLTHLM=R2HLTHLM ;
R_HOMCAR=R2HOMCAR ;
R_HOSP=R2HOSP ;
R_HSPNIT=R2HSPNIT ;
R_HSPTIM=R2HSPTIM ;
/* Empty map cell for: R_HSWRKF      variable wave =  2*/ ;
R_HTR40=R2HTR40 ;
R_IADL5A=R2IADL5A ;
/* Empty map cell for: R_IADL5H      variable wave =  2*/ ;
R_IANN=R2IANN ;
R_IEARN=R2IEARN ;
R_IFANN=R2IFANN ;
R_IFEARN=R2IFEARN ;
R_IFGXFR=R2IFGXFR ;
/* Empty map cell for: R_IFIRAW      variable wave =  2*/ ;
R_IFIRAWY1=R2IFIRAWY1 ;
R_IFPEN=R2IFPEN ;
R_IFPENA=R2IFPENA ;
R_IFSDI=R2IFSDI ;
R_IFSRET=R2IFSRET ;
R_IFSSDI=R2IFSSDI ;
R_IFSSI=R2IFSSI ;
R_IFUNEM=R2IFUNEM ;
R_IFUNWC=R2IFUNWC ;
R_IFWCMP=R2IFWCMP ;
R_IGXFR=R2IGXFR ;
/* Empty map cell for: R_IIRAW       variable wave =  2*/ ;
R_IIRAWY1=R2IIRAWY1 ;
/* Empty map cell for: R_IMRC        variable wave =  2*/ ;
/* Empty map cell for: R_IMRC20      variable wave =  2*/ ;
R_INHER=R2INHER ;
/* Empty map cell for: R_INHPE       variable wave =  2*/ ;
/* Empty map cell for: R_INHPFN      variable wave =  2*/ ;
/* Empty map cell for: R_INHPNFN     variable wave =  2*/ ;
/* Empty map cell for: R_INHPPN      variable wave =  2*/ ;
/* Empty map cell for: R_INHPTN      variable wave =  2*/ ;
/* Empty map cell for: R_INHPUN      variable wave =  2*/ ;
R_INLBRF=R2INLBRF ;
R_IPEN=R2IPEN ;
R_IPENA=R2IPENA ;
R_ISDI=R2ISDI ;
R_ISRET=R2ISRET ;
R_ISSDI=R2ISSDI ;
R_ISSI=R2ISSI ;
R_IUNEM=R2IUNEM ;
R_IUNWC=R2IUNWC ;
R_IWBEG=R2IWBEG ;
R_IWBEGF=R2IWBEGF ;
R_IWCMP=R2IWCMP ;
R_IWEND=R2IWEND ;
R_IWENDF=R2IWENDF ;
R_IWENDM=R2IWENDM ;
R_IWENDY=R2IWENDY ;
R_IWMID=R2IWMID ;
R_IWMIDF=R2IWMIDF ;
R_IWSTAT=R2IWSTAT ;
R_JCIND=R2JCIND ;
/* Empty map cell for: R_JCINDB      variable wave =  2*/ ;
/* Empty map cell for: R_JCINDC      variable wave =  2*/ ;
R_JCOCC=R2JCOCC ;
R_JCOCCA=R2JCOCCA ;
/* Empty map cell for: R_JCOCCB      variable wave =  2*/ ;
/* Empty map cell for: R_JCOCCC      variable wave =  2*/ ;
R_JCPEN=R2JCPEN ;
R_JCPENF=R2JCPENF ;
R_JCTEN=R2JCTEN ;
R_JHOUR2=R2JHOUR2 ;
R_JHOURS=R2JHOURS ;
R_JJOBS=R2JJOBS ;
R_JLASTM=R2JLASTM ;
R_JLASTY=R2JLASTY ;
R_JLIFT=R2JLIFT ;
R_JLIND=R2JLIND ;
/* Empty map cell for: R_JLINDB      variable wave =  2*/ ;
/* Empty map cell for: R_JLINDC      variable wave =  2*/ ;
R_JLMIS=R2JLMIS ;
R_JLOCC=R2JLOCC ;
R_JLOCCA=R2JLOCCA ;
/* Empty map cell for: R_JLOCCB      variable wave =  2*/ ;
/* Empty map cell for: R_JLOCCC      variable wave =  2*/ ;
R_JLTEN=R2JLTEN ;
R_JLTENF=R2JLTENF ;
R_JMISS=R2JMISS ;
R_JNJOB=R2JNJOB ;
R_JNJOB5=R2JNJOB5 ;
/* Empty map cell for: R1_JOG        variable wave =  2*/ ;
R2_JOG=R2JOG ;
/* Empty map cell for: R_JOG         variable wave =  2*/ ;
R_JOGA=R2JOGA ;
/* Empty map cell for: R_JOGW        variable wave =  2*/ ;
R_JPHYS=R2JPHYS ;
R_JSIGHT=R2JSIGHT ;
R_JSTOOP=R2JSTOOP ;
R_JSTRES=R2JSTRES ;
R_JWEEK2=R2JWEEK2 ;
R_JWEEKS=R2JWEEKS ;
R_JYEARM=R2JYEARM ;
R_JYEARS=R2JYEARS ;
/* Empty map cell for: R_LBAGR       variable wave =  2*/ ;
/* Empty map cell for: R_LBASSISTPRB variable wave =  2*/ ;
/* Empty map cell for: R_LBCOMP      variable wave =  2*/ ;
/* Empty map cell for: R_LBCON10     variable wave =  2*/ ;
/* Empty map cell for: R_LBCON5      variable wave =  2*/ ;
/* Empty map cell for: R_LBELIG      variable wave =  2*/ ;
/* Empty map cell for: R_LBEXT       variable wave =  2*/ ;
/* Empty map cell for: R_LBFAMDRUGPRBvariable wave =  2*/ ;
/* Empty map cell for: R_LBFAMHLTHPRBvariable wave =  2*/ ;
/* Empty map cell for: R_LBFINPRB    variable wave =  2*/ ;
/* Empty map cell for: R_LBHLTHPRB   variable wave =  2*/ ;
/* Empty map cell for: R_LBHOUSEPRB  variable wave =  2*/ ;
/* Empty map cell for: R_LBLONELY11  variable wave =  2*/ ;
/* Empty map cell for: R_LBLONELY3   variable wave =  2*/ ;
/* Empty map cell for: R_LBNEGAFFECT variable wave =  2*/ ;
/* Empty map cell for: R_LBNEGAFFECT6variable wave =  2*/ ;
/* Empty map cell for: R_LBNEUR      variable wave =  2*/ ;
/* Empty map cell for: R_LBONCHRSTR  variable wave =  2*/ ;
/* Empty map cell for: R_LBOPEN      variable wave =  2*/ ;
/* Empty map cell for: R_LBPOSAFFECT variable wave =  2*/ ;
/* Empty map cell for: R_LBPOSAFFECT6variable wave =  2*/ ;
R_LBRF=R2LBRF ;
R_LBRFH=R2LBRFH ;
R_LBRFY=R2LBRFY ;
/* Empty map cell for: R_LBRLTNSHPRB variable wave =  2*/ ;
/* Empty map cell for: R_LBSATCITY   variable wave =  2*/ ;
/* Empty map cell for: R_LBSATFAM    variable wave =  2*/ ;
/* Empty map cell for: R_LBSATFIN    variable wave =  2*/ ;
/* Empty map cell for: R_LBSATHLTH   variable wave =  2*/ ;
/* Empty map cell for: R_LBSATHOME   variable wave =  2*/ ;
/* Empty map cell for: R_LBSATINC    variable wave =  2*/ ;
/* Empty map cell for: R_LBSATLEISUREvariable wave =  2*/ ;
/* Empty map cell for: R_LBSATLIFE   variable wave =  2*/ ;
/* Empty map cell for: R_LBSATWLF    variable wave =  2*/ ;
/* Empty map cell for: R_LBWGTR      variable wave =  2*/ ;
/* Empty map cell for: R_LBWORKPRB   variable wave =  2*/ ;
R_LGMUSA=R2LGMUSA ;
/* Empty map cell for: R_LGMUSW      variable wave =  2*/ ;
R_LHTACT=R2LHTACT ;
R_LIFEIN=R2LIFEIN ;
/* Empty map cell for: R1_LIFT       variable wave =  2*/ ;
R2_LIFT=R2LIFT ;
/* Empty map cell for: R_LIFT        variable wave =  2*/ ;
R_LIFTA=R2LIFTA ;
/* Empty map cell for: R_LIFTW       variable wave =  2*/ ;
R_LIV10=R2LIV10 ;
R_LIV10A=R2LIV10A ;
R_LIV10P=R2LIV10P ;
R_LIV10R=R2LIV10R ;
R_LIV75=R2LIV75 ;
R_LIV75C=R2LIV75C ;
R_LIV75F=R2LIV75F ;
R_LIV75P=R2LIV75P ;
R_LIV75R=R2LIV75R ;
R_LIV85=R2LIV85 ;
R_LIV85C=R2LIV85C ;
R_LIV85F=R2LIV85F ;
R_LIV85P=R2LIV85P ;
R_LIV85R=R2LIV85R ;
R_LIV8XC=R2LIV8XC ;
R_LIV8XF=R2LIV8XF ;
R_LIVBRO=R2LIVBRO ;
R_LIVPAR=R2LIVPAR ;
R_LIVSIB=R2LIVSIB ;
R_LIVSIS=R2LIVSIS ;
R_LOST=R2LOST ;
/* Empty map cell for: R_LTACTF      variable wave =  2*/ ;
R_LTACTN=R2LTACTN ;
R_LTACTP=R2LTACTP ;
/* Empty map cell for: R_LTACTX      variable wave =  2*/ ;
R_LTCPRM=R2LTCPRM ;
R_LUNG=R2LUNG ;
R_LUNGE=R2LUNGE ;
R_LUNGF=R2LUNGF ;
R_LUNGQ=R2LUNGQ ;
R_LUNGS=R2LUNGS ;
/* Empty map cell for: R_MAMMOG      variable wave =  2*/ ;
/* Empty map cell for: R1_MAP        variable wave =  2*/ ;
R2_MAP=R2MAP ;
/* Empty map cell for: R_MAP         variable wave =  2*/ ;
R_MAPA=R2MAPA ;
/* Empty map cell for: R_MAPW        variable wave =  2*/ ;
R_MCURLN=R2MCURLN ;
/* Empty map cell for: R_MCWV        variable wave =  2*/ ;
/* Empty map cell for: R_MCWVW       variable wave =  2*/ ;
/* Empty map cell for: R_MDACTX      variable wave =  2*/ ;
R_MDIV=R2MDIV ;
/* Empty map cell for: R_MEALS       variable wave =  2*/ ;
R_MEALSA=R2MEALSA ;
/* Empty map cell for: R_MEALSH      variable wave =  2*/ ;
R_MEALSR=R2MEALSR ;
R2_MEDS=R2MEDS ;
/* Empty map cell for: R_MEDS        variable wave =  2*/ ;
R_MEDSA=R2MEDSA ;
/* Empty map cell for: R_MEDSH       variable wave =  2*/ ;
R_MEDSR=R2MEDSR ;
/* Empty map cell for: R_MEMRY       variable wave =  2*/ ;
/* Empty map cell for: R_MEMRYE      variable wave =  2*/ ;
/* Empty map cell for: R_MEMRYF      variable wave =  2*/ ;
/* Empty map cell for: R_MEMRYQ      variable wave =  2*/ ;
/* Empty map cell for: R_MEMRYS      variable wave =  2*/ ;
R_MEND=R2MEND ;
R_MLEN=R2MLEN ;
R_MLENM=R2MLENM ;
R_MNEV=R2MNEV ;
R_MO=R2MO ;
R_MOBILA=R2MOBILA ;
/* Empty map cell for: R_MOBILW      variable wave =  2*/ ;
R_MOMAGE=R2MOMAGE ;
R_MOMLIV=R2MOMLIV ;
R2_MONEY=R2MONEY ;
/* Empty map cell for: R_MONEY       variable wave =  2*/ ;
R_MONEYA=R2MONEYA ;
/* Empty map cell for: R_MONEYH      variable wave =  2*/ ;
R_MONEYR=R2MONEYR ;
R_MPART=R2MPART ;
R_MRCT=R2MRCT ;
/* Empty map cell for: R_MRPREM      variable wave =  2*/ ;
R_MSTAT=R2MSTAT ;
R_MSTATF=R2MSTATF ;
R_MSTATH=R2MSTATH ;
/* Empty map cell for: R_MSTOT       variable wave =  2*/ ;
R_MWID=R2MWID ;
/* Empty map cell for: R_NHMDAY      variable wave =  2*/ ;
/* Empty map cell for: R_NHMLIV      variable wave =  2*/ ;
/* Empty map cell for: R_NHMMVM      variable wave =  2*/ ;
/* Empty map cell for: R_NHMMVY      variable wave =  2*/ ;
/* Empty map cell for: R_NOTICS      variable wave =  2*/ ;
/* Empty map cell for: R_NOVOC       variable wave =  2*/ ;
R_NRSHOM=R2NRSHOM ;
R_NRSNIT=R2NRSNIT ;
R_NRSTIM=R2NRSTIM ;
/* Empty map cell for: R_NSSCRE      variable wave =  2*/ ;
/* Empty map cell for: R_NSSCSE      variable wave =  2*/ ;
R_OOPMD=R2OOPMD ;
R_OOPMDF=R2OOPMDF ;
/* Empty map cell for: R_OOPMDO      variable wave =  2*/ ;
/* Empty map cell for: R_OOPMDOF     variable wave =  2*/ ;
R_OUTPT=R2OUTPT ;
/* Empty map cell for: R_PAPSM       variable wave =  2*/ ;
/* Empty map cell for: R_PARTD       variable wave =  2*/ ;
R_PENCT=R2PENCT ;
R_PENIC1=R2PENIC1 ;
R_PENIC2=R2PENIC2 ;
R_PENINC=R2PENINC ;
R_PENI_N=R2PENI_N ;
R_PEXIT=R2PEXIT ;
R2_PHONE=R2PHONE ;
/* Empty map cell for: R_PHONE       variable wave =  2*/ ;
R_PHONEA=R2PHONEA ;
/* Empty map cell for: R_PHONEH      variable wave =  2*/ ;
R_PHONER=R2PHONER ;
/* Empty map cell for: R_PMBMI       variable wave =  2*/ ;
/* Empty map cell for: R_PMHGHT      variable wave =  2*/ ;
/* Empty map cell for: R_PMHGHTS     variable wave =  2*/ ;
/* Empty map cell for: R_PMWAIST     variable wave =  2*/ ;
/* Empty map cell for: R_PMWAISTC    variable wave =  2*/ ;
/* Empty map cell for: R_PMWGHT      variable wave =  2*/ ;
/* Empty map cell for: R_PMWGHTF     variable wave =  2*/ ;
/* Empty map cell for: R_PMWGHTS     variable wave =  2*/ ;
/* Empty map cell for: R_PNHM5Y      variable wave =  2*/ ;
/* Empty map cell for: R_PRCHMEM     variable wave =  2*/ ;
R_PRES=R2PRES ;
R_PRMEM=R2PRMEM ;
/* Empty map cell for: R_PROST       variable wave =  2*/ ;
R_PROXY=R2PROXY ;
R_PRPCNT=R2PRPCNT ;
R_PRPRM1=R2PRPRM1 ;
R_PRPRM2=R2PRPRM2 ;
R_PRPRM3=R2PRPRM3 ;
R_PRSRC1=R2PRSRC1 ;
R_PRSRC2=R2PRSRC2 ;
R_PRSRC3=R2PRSRC3 ;
R_PSTMEM=R2PSTMEM ;
R_PSYCH=R2PSYCH ;
R_PSYCHE=R2PSYCHE ;
R_PSYCHF=R2PSYCHF ;
R_PSYCHQ=R2PSYCHQ ;
R_PSYCHS=R2PSYCHS ;
R_PTYP1=R2PTYP1 ;
R_PTYP2=R2PTYP2 ;
R_PTYP3=R2PTYP3 ;
/* Empty map cell for: R_PTYP4       variable wave =  2*/ ;
/* Empty map cell for: R_PTYPD1      variable wave =  2*/ ;
/* Empty map cell for: R_PTYPD2      variable wave =  2*/ ;
/* Empty map cell for: R_PTYPD3      variable wave =  2*/ ;
/* Empty map cell for: R_PTYPD4      variable wave =  2*/ ;
/* Empty map cell for: R_PTYPF1      variable wave =  2*/ ;
/* Empty map cell for: R_PTYPF2      variable wave =  2*/ ;
/* Empty map cell for: R_PTYPF3      variable wave =  2*/ ;
/* Empty map cell for: R_PTYPF4      variable wave =  2*/ ;
/* Empty map cell for: R_PUFF        variable wave =  2*/ ;
/* Empty map cell for: R_PUFFPOS     variable wave =  2*/ ;
/* Empty map cell for: R1_PUSH       variable wave =  2*/ ;
R2_PUSH=R2PUSH ;
/* Empty map cell for: R_PUSH        variable wave =  2*/ ;
R_PUSHA=R2PUSHA ;
/* Empty map cell for: R_PUSHW       variable wave =  2*/ ;
R_RETDTWV=R2RETDTWV ;
R_RETEMP=R2RETEMP ;
/* Empty map cell for: R_RETINC      variable wave =  2*/ ;
/* Empty map cell for: R_RETLIV      variable wave =  2*/ ;
R_RETMON=R2RETMON ;
R_RETSAT=R2RETSAT ;
/* Empty map cell for: R_RETWLT      variable wave =  2*/ ;
/* Empty map cell for: R_RETWRK      variable wave =  2*/ ;
/* Empty map cell for: R_RETWSP      variable wave =  2*/ ;
R_RETYR=R2RETYR ;
/* Empty map cell for: R_RISK        variable wave =  2*/ ;
/* Empty map cell for: R_RISK6       variable wave =  2*/ ;
/* Empty map cell for: R_RPLNYA      variable wave =  2*/ ;
R_RPLNYR=R2RPLNYR ;
/* Empty map cell for: R_RXPREM      variable wave =  2*/ ;
R_RYRCMP=R2RYRCMP ;
/* Empty map cell for: R_SADLF       variable wave =  2*/ ;
R_SAMEJOB=R2SAMEJOB ;
R_SAMEMP=R2SAMEMP ;
R_SAYRET=R2SAYRET ;
R_SCIS=R2SCIS ;
/* Empty map cell for: R_SDIAPL      variable wave =  2*/ ;
/* Empty map cell for: R_SDIAPLM     variable wave =  2*/ ;
/* Empty map cell for: R_SDIAPLY     variable wave =  2*/ ;
/* Empty map cell for: R_SDIAPP      variable wave =  2*/ ;
/* Empty map cell for: R_SDIAPPM     variable wave =  2*/ ;
/* Empty map cell for: R_SDIAPPY     variable wave =  2*/ ;
/* Empty map cell for: R_SDIDEN      variable wave =  2*/ ;
/* Empty map cell for: R_SDIREC      variable wave =  2*/ ;
/* Empty map cell for: R_SDIRECM     variable wave =  2*/ ;
/* Empty map cell for: R_SDIRECY     variable wave =  2*/ ;
/* Empty map cell for: R_SDISTP      variable wave =  2*/ ;
/* Empty map cell for: R_SDISTPM     variable wave =  2*/ ;
/* Empty map cell for: R_SDISTPY     variable wave =  2*/ ;
R_SER7=R2SER7 ;
R_SHLT=R2SHLT ;
R_SHLTC=R2SHLTC ;
R_SHLTCF=R2SHLTCF ;
/* Empty map cell for: R_SHOP        variable wave =  2*/ ;
R_SHOPA=R2SHOPA ;
/* Empty map cell for: R_SHOPH       variable wave =  2*/ ;
R_SHOPR=R2SHOPR ;
/* Empty map cell for: R1_SIT        variable wave =  2*/ ;
R2_SIT=R2SIT ;
/* Empty map cell for: R_SIT         variable wave =  2*/ ;
R_SITA=R2SITA ;
/* Empty map cell for: R_SITW        variable wave =  2*/ ;
/* Empty map cell for: R_SLEEP       variable wave =  2*/ ;
/* Empty map cell for: R_SLEEPE      variable wave =  2*/ ;
/* Empty map cell for: R_SLEEPQ      variable wave =  2*/ ;
R_SLEEPR=R2SLEEPR ;
/* Empty map cell for: R_SLEEPS      variable wave =  2*/ ;
/* Empty map cell for: R_SLEEPX      variable wave =  2*/ ;
R_SLFEMP=R2SLFEMP ;
R_SLFMEM=R2SLFMEM ;
R_SMOKEN=R2SMOKEN ;
R_SMOKEV=R2SMOKEV ;
R_SPCFAC=R2SPCFAC ;
R_SSAPL=R2SSAPL ;
R_SSAPLM=R2SSAPLM ;
R_SSAPLY=R2SSAPLY ;
R_SSAPP=R2SSAPP ;
R_SSAPPM=R2SSAPPM ;
R_SSAPPY=R2SSAPPY ;
R_SSDEN=R2SSDEN ;
R_SSDI=R2SSDI ;
/* Empty map cell for: R_SSIAPL      variable wave =  2*/ ;
/* Empty map cell for: R_SSIAPLM     variable wave =  2*/ ;
/* Empty map cell for: R_SSIAPLY     variable wave =  2*/ ;
/* Empty map cell for: R_SSIAPP      variable wave =  2*/ ;
/* Empty map cell for: R_SSIAPPM     variable wave =  2*/ ;
/* Empty map cell for: R_SSIAPPY     variable wave =  2*/ ;
/* Empty map cell for: R_SSIDEN      variable wave =  2*/ ;
/* Empty map cell for: R_SSIREC      variable wave =  2*/ ;
/* Empty map cell for: R_SSIRECM     variable wave =  2*/ ;
/* Empty map cell for: R_SSIRECY     variable wave =  2*/ ;
/* Empty map cell for: R_SSISTP      variable wave =  2*/ ;
/* Empty map cell for: R_SSISTPM     variable wave =  2*/ ;
/* Empty map cell for: R_SSISTPY     variable wave =  2*/ ;
R_SSREC=R2SSREC ;
R_SSRECM=R2SSRECM ;
R_SSRECY=R2SSRECY ;
R_SSSTP=R2SSSTP ;
R_SSSTPM=R2SSSTPM ;
R_SSSTPY=R2SSSTPY ;
/* Empty map cell for: R_SSWRER      variable wave =  2*/ ;
/* Empty map cell for: R_SSWRNR      variable wave =  2*/ ;
/* Empty map cell for: R_SSWRXA      variable wave =  2*/ ;
/* Empty map cell for: R_SSWSER      variable wave =  2*/ ;
/* Empty map cell for: R_SSWSNR      variable wave =  2*/ ;
/* Empty map cell for: R_SSWSXA      variable wave =  2*/ ;
R_STATUS=R2STATUS ;
/* Empty map cell for: R1_STOOP      variable wave =  2*/ ;
R2_STOOP=R2STOOP ;
/* Empty map cell for: R_STOOP       variable wave =  2*/ ;
R_STOOPA=R2STOOPA ;
/* Empty map cell for: R_STOOPW      variable wave =  2*/ ;
R_STROK=R2STROK ;
R_STROKE=R2STROKE ;
R_STROKF=R2STROKF ;
R_STROKQ=R2STROKQ ;
R_STROKS=R2STROKS ;
/* Empty map cell for: R_TIMWLK      variable wave =  2*/ ;
/* Empty map cell for: R_TIMWLKA     variable wave =  2*/ ;
R_TLIPRM=R2TLIPRM ;
R2_TOILT=R2TOILT ;
/* Empty map cell for: R_TOILT       variable wave =  2*/ ;
R_TOILTA=R2TOILTA ;
R2_TOILTH=R2TOILTH ;
/* Empty map cell for: R_TOILTH      variable wave =  2*/ ;
/* Empty map cell for: R_TOTMBF      variable wave =  2*/ ;
/* Empty map cell for: R_TOTMBI      variable wave =  2*/ ;
/* Empty map cell for: R_TOTMD       variable wave =  2*/ ;
/* Empty map cell for: R_TOTMDF      variable wave =  2*/ ;
/* Empty map cell for: R_TR20        variable wave =  2*/ ;
/* Empty map cell for: R_TR40        variable wave =  2*/ ;
R_TYLTC=R2TYLTC ;
R_ULCER=R2ULCER ;
R_UNEMP=R2UNEMP ;
R_UNION=R2UNION ;
R_UNIONF=R2UNIONF ;
/* Empty map cell for: R_VGACTF      variable wave =  2*/ ;
R_VGACTN=R2VGACTN ;
R_VGACTP=R2VGACTP ;
/* Empty map cell for: R_VGACTX      variable wave =  2*/ ;
R_VIGACT=R2VIGACT ;
/* Empty map cell for: R_VOCAB       variable wave =  2*/ ;
R_VP=R2VP ;
/* Empty map cell for: R1_WALK1      variable wave =  2*/ ;
R2_WALK1=R2WALK1 ;
/* Empty map cell for: R_WALK1       variable wave =  2*/ ;
R_WALK1A=R2WALK1A ;
/* Empty map cell for: R_WALK1W      variable wave =  2*/ ;
/* Empty map cell for: R1_WALKR      variable wave =  2*/ ;
R2_WALKR=R2WALKR ;
/* Empty map cell for: R_WALKR       variable wave =  2*/ ;
R_WALKRA=R2WALKRA ;
R_WALKRE=R2WALKRE ;
R2_WALKRH=R2WALKRH ;
/* Empty map cell for: R_WALKRH      variable wave =  2*/ ;
/* Empty map cell for: R_WALKRW      variable wave =  2*/ ;
/* Empty map cell for: R1_WALKS      variable wave =  2*/ ;
R2_WALKS=R2WALKS ;
/* Empty map cell for: R_WALKS       variable wave =  2*/ ;
R_WALKSA=R2WALKSA ;
/* Empty map cell for: R_WALKSW      variable wave =  2*/ ;
R_WANDER=R2WANDER ;
R_WEIGHT=R2WEIGHT ;
R_WGFHR=R2WGFHR ;
R_WGFWK=R2WGFWK ;
R_WGIHR=R2WGIHR ;
R_WGIWK=R2WGIWK ;
/* Empty map cell for: R_WHAPPX      variable wave =  2*/ ;
R_WHAPPY=R2WHAPPY ;
R_WLIPRM=R2WLIPRM ;
R_WORK=R2WORK ;
R_WORK2=R2WORK2 ;
R_WORK62=R2WORK62 ;
R_WORK62F=R2WORK62F ;
R_WORK65=R2WORK65 ;
R_WORK65F=R2WORK65F ;
/* Empty map cell for: R_WORK70      variable wave =  2*/ ;
/* Empty map cell for: R_WORK70A     variable wave =  2*/ ;
/* Empty map cell for: R_WORK70AF    variable wave =  2*/ ;
/* Empty map cell for: R_WORK70F     variable wave =  2*/ ;
R_WORKLM=R2WORKLM ;
R_WTCRNH=R2WTCRNH ;
R_WTHH=R2WTHH ;
R_WTRESP=R2WTRESP ;
/* Empty map cell for: R_WTR_NH      variable wave =  2*/ ;
R_YR=R2YR ;
if inw=1 then output ;
%put --- Rlong table ;
%initvars ;
%put ---- Rlong table ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
WAVE_NUMBER=3 ;
H_HHIDC=H3HHIDC ;
SUBHH= substr(H_HHIDC,7)     /* --- Derived variable  */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
INW=INW3 ;
WAVE_NAME=  'hrs_wave'||strip(put(wave_number,3.))     /* --- Derived variable  */ ;
CYEAR='yr1995_96' ;
/* --- RAND variable:HACOHORT  included */ ;
studyyr= hrs_studyyr(wave_number,
hacohort)     /* --- Derived variable  */ ;
H_HHID=H3HHID ;
S_HHIDPN=S3HHIDPN ;
/* Empty map cell for: R_ACGTOT      variable wave =  3*/ ;
R_ADL5A=R3ADL5A ;
R_ADL5H=R3ADL5H ;
R_ADL6A=R3ADL6A ;
R_ADL6H=R3ADL6H ;
/* Empty map cell for: R_ADLR10      variable wave =  3*/ ;
/* Empty map cell for: R_ADLW        variable wave =  3*/ ;
R_AGEM_B=R3AGEM_B ;
R_AGEM_E=R3AGEM_E ;
R_AGEM_M=R3AGEM_M ;
R_AGEY_B=R3AGEY_B ;
R_AGEY_E=R3AGEY_E ;
R_AGEY_M=R3AGEY_M ;
/* Empty map cell for: R_AIMR10      variable wave =  3*/ ;
R_ALONE=R3ALONE ;
/* Empty map cell for: R_ALZHE       variable wave =  3*/ ;
/* Empty map cell for: R_ALZHEE      variable wave =  3*/ ;
/* Empty map cell for: R_ALZHEF      variable wave =  3*/ ;
/* Empty map cell for: R_ALZHEQ      variable wave =  3*/ ;
/* Empty map cell for: R_ALZHES      variable wave =  3*/ ;
/* Empty map cell for: R_AMSTOT      variable wave =  3*/ ;
R_ANS3PQ=R3ANS3PQ ;
/* Empty map cell for: R1_ARMS       variable wave =  3*/ ;
/* Empty map cell for: R2_ARMS       variable wave =  3*/ ;
R_ARMS=R3ARMS ;
R_ARMSA=R3ARMSA ;
/* Empty map cell for: R_ARMSW       variable wave =  3*/ ;
R_ARTHR=R3ARTHR ;
R_ARTHRE=R3ARTHRE ;
R_ARTHRF=R3ARTHRF ;
R_ARTHRQ=R3ARTHRQ ;
R_ARTHRS=R3ARTHRS ;
/* Empty map cell for: R_ATR20       variable wave =  3*/ ;
R_BACK=R3BACK ;
/* Empty map cell for: R_BALFUL      variable wave =  3*/ ;
/* Empty map cell for: R_BALFULC     variable wave =  3*/ ;
/* Empty map cell for: R_BALFULT     variable wave =  3*/ ;
/* Empty map cell for: R_BALSBS      variable wave =  3*/ ;
/* Empty map cell for: R_BALSBSC     variable wave =  3*/ ;
/* Empty map cell for: R_BALSEMI     variable wave =  3*/ ;
/* Empty map cell for: R_BALSEMIC    variable wave =  3*/ ;
/* Empty map cell for: R1_BATH       variable wave =  3*/ ;
/* Empty map cell for: R2_BATH       variable wave =  3*/ ;
R_BATH=R3BATH ;
R_BATHA=R3BATHA ;
/* Empty map cell for: R2_BATHH      variable wave =  3*/ ;
R_BATHH=R3BATHH ;
/* Empty map cell for: R_BATHW       variable wave =  3*/ ;
/* Empty map cell for: R1_BED        variable wave =  3*/ ;
/* Empty map cell for: R2_BED        variable wave =  3*/ ;
R_BED=R3BED ;
R_BEDA=R3BEDA ;
R_BEDE=R3BEDE ;
/* Empty map cell for: R2_BEDH       variable wave =  3*/ ;
R_BEDH=R3BEDH ;
/* Empty map cell for: R_BEDW        variable wave =  3*/ ;
R_BEQ100=R3BEQ100 ;
R_BEQ10K=R3BEQ10K ;
/* Empty map cell for: R_BEQ500      variable wave =  3*/ ;
R_BEQANY=R3BEQANY ;
/* Empty map cell for: R_BEQLRG      variable wave =  3*/ ;
R_BMI=R3BMI ;
/* Empty map cell for: R_BPDIA       variable wave =  3*/ ;
/* Empty map cell for: R_BPPOS       variable wave =  3*/ ;
/* Empty map cell for: R_BPPULS      variable wave =  3*/ ;
/* Empty map cell for: R_BPSYS       variable wave =  3*/ ;
R_BREAST=R3BREAST ;
R_BWC20=R3BWC20 ;
R_BWC86=R3BWC86 ;
R_CACT=R3CACT ;
/* Empty map cell for: R1_CALC       variable wave =  3*/ ;
/* Empty map cell for: R2_CALC       variable wave =  3*/ ;
/* Empty map cell for: R_CALCA       variable wave =  3*/ ;
/* Empty map cell for: R_CALCW       variable wave =  3*/ ;
R_CANCR=R3CANCR ;
R_CANCRE=R3CANCRE ;
R_CANCRF=R3CANCRF ;
R_CANCRQ=R3CANCRQ ;
R_CANCRS=R3CANCRS ;
R_CENDIV=R3CENDIV ;
R_CENREG=R3CENREG ;
R_CESD=R3CESD ;
R_CESDM=R3CESDM ;
/* Empty map cell for: R1_CHAIR      variable wave =  3*/ ;
/* Empty map cell for: R2_CHAIR      variable wave =  3*/ ;
R_CHAIR=R3CHAIR ;
R_CHAIRA=R3CHAIRA ;
/* Empty map cell for: R_CHAIRW      variable wave =  3*/ ;
R_CHOLST=R3CHOLST ;
/* Empty map cell for: R_CLAIMED     variable wave =  3*/ ;
/* Empty map cell for: R1_CLIM1      variable wave =  3*/ ;
/* Empty map cell for: R2_CLIM1      variable wave =  3*/ ;
R_CLIM1=R3CLIM1 ;
R_CLIM1A=R3CLIM1A ;
/* Empty map cell for: R_CLIM1W      variable wave =  3*/ ;
/* Empty map cell for: R1_CLIMS      variable wave =  3*/ ;
/* Empty map cell for: R2_CLIMS      variable wave =  3*/ ;
R_CLIMS=R3CLIMS ;
R_CLIMSA=R3CLIMSA ;
/* Empty map cell for: R_CLIMSW      variable wave =  3*/ ;
R_COGTOT=R3COGTOT ;
/* Empty map cell for: R_COMP        variable wave =  3*/ ;
/* Empty map cell for: R_COMPW       variable wave =  3*/ ;
R_CONDE=R3CONDE ;
R_CONDEF=R3CONDEF ;
R_CONDS=R3CONDS ;
R_CONDSF=R3CONDSF ;
R_CONDSP=R3CONDSP ;
R_COVR=R3COVR ;
R_COVRT=R3COVRT ;
R_COVS=R3COVS ;
R_DADAGE=R3DADAGE ;
R_DADLIV=R3DADLIV ;
R_DCBAL1=R3DCBAL1 ;
R_DCBAL2=R3DCBAL2 ;
R_DCBAL3=R3DCBAL3 ;
/* Empty map cell for: R_DCBAL4      variable wave =  3*/ ;
R_DCBENE1=R3DCBENE1 ;
R_DCBENE2=R3DCBENE2 ;
R_DCBENE3=R3DCBENE3 ;
/* Empty map cell for: R_DCBENE4     variable wave =  3*/ ;
R_DCCONT1=R3DCCONT1 ;
R_DCCONT2=R3DCCONT2 ;
R_DCCONT3=R3DCCONT3 ;
/* Empty map cell for: R_DCCONT4     variable wave =  3*/ ;
R_DCMODE1=R3DCMODE1 ;
R_DCMODE2=R3DCMODE2 ;
R_DCMODE3=R3DCMODE3 ;
/* Empty map cell for: R_DCMODE4     variable wave =  3*/ ;
R_DCPCT1=R3DCPCT1 ;
R_DCPCT2=R3DCPCT2 ;
R_DCPCT3=R3DCPCT3 ;
/* Empty map cell for: R_DCPCT4      variable wave =  3*/ ;
/* Empty map cell for: R_DEMEN       variable wave =  3*/ ;
/* Empty map cell for: R_DEMENE      variable wave =  3*/ ;
/* Empty map cell for: R_DEMENF      variable wave =  3*/ ;
/* Empty map cell for: R_DEMENQ      variable wave =  3*/ ;
/* Empty map cell for: R_DEMENS      variable wave =  3*/ ;
R_DENTST=R3DENTST ;
R_DEPRES=R3DEPRES ;
/* Empty map cell for: R_DEPREX      variable wave =  3*/ ;
R_DIAB=R3DIAB ;
R_DIABE=R3DIABE ;
R_DIABF=R3DIABF ;
R_DIABQ=R3DIABQ ;
R_DIABS=R3DIABS ;
/* Empty map cell for: R1_DIME       variable wave =  3*/ ;
/* Empty map cell for: R2_DIME       variable wave =  3*/ ;
R_DIME=R3DIME ;
R_DIMEA=R3DIMEA ;
/* Empty map cell for: R_DIMEW       variable wave =  3*/ ;
R_DLRC=R3DLRC ;
/* Empty map cell for: R_DLRC20      variable wave =  3*/ ;
R_DOCTIM=R3DOCTIM ;
R_DOCTOR=R3DOCTOR ;
/* Empty map cell for: R1_DRESS      variable wave =  3*/ ;
/* Empty map cell for: R2_DRESS      variable wave =  3*/ ;
R_DRESS=R3DRESS ;
R_DRESSA=R3DRESSA ;
/* Empty map cell for: R2_DRESSH     variable wave =  3*/ ;
R_DRESSH=R3DRESSH ;
/* Empty map cell for: R_DRESSW      variable wave =  3*/ ;
R_DRINK=R3DRINK ;
R_DRINKD=R3DRINKD ;
R_DRINKN=R3DRINKN ;
/* Empty map cell for: R_DRINKR      variable wave =  3*/ ;
R_DRUGS=R3DRUGS ;
/* Empty map cell for: R_DSIAMT      variable wave =  3*/ ;
/* Empty map cell for: R_DSSAMT      variable wave =  3*/ ;
R_DSTAT=R3DSTAT ;
R_DW=R3DW ;
R_DY=R3DY ;
/* Empty map cell for: R1_EAT        variable wave =  3*/ ;
/* Empty map cell for: R2_EAT        variable wave =  3*/ ;
R_EAT=R3EAT ;
R_EATA=R3EATA ;
/* Empty map cell for: R2_EATH       variable wave =  3*/ ;
R_EATH=R3EATH ;
/* Empty map cell for: R_EATW        variable wave =  3*/ ;
R_EFFORT=R3EFFORT ;
/* Empty map cell for: R_EFFORX      variable wave =  3*/ ;
R_ENLIFE=R3ENLIFE ;
/* Empty map cell for: R_ENLIFX      variable wave =  3*/ ;
R_FAMR=R3FAMR ;
R_FBWC20=R3FBWC20 ;
R_FBWC86=R3FBWC86 ;
R_FCACT=R3FCACT ;
R_FDLRC=R3FDLRC ;
R_FDW=R3FDW ;
R_FDY=R3FDY ;
R_FIMRC=R3FIMRC ;
R_FINEA=R3FINEA ;
/* Empty map cell for: R_FINPLN      variable wave =  3*/ ;
R_FINR=R3FINR ;
R_FLAG=R3FLAG ;
R_FLONE=R3FLONE ;
/* Empty map cell for: R_FLONEX      variable wave =  3*/ ;
R_FLUSHT=R3FLUSHT ;
R_FMO=R3FMO ;
R_FPRES=R3FPRES ;
R_FPSTME=R3FPSTME ;
R_FSAD=R3FSAD ;
/* Empty map cell for: R_FSADX       variable wave =  3*/ ;
R_FSCIS=R3FSCIS ;
R_FSER7=R3FSER7 ;
R_FSIZE=R3FSIZE ;
R_FSIZEF=R3FSIZEF ;
R_FSLFME=R3FSLFME ;
R_FVOCAB=R3FVOCAB ;
R_FVP=R3FVP ;
R_FYR=R3FYR ;
R_GOING=R3GOING ;
/* Empty map cell for: R_GOINGX      variable wave =  3*/ ;
R_GOVMD=R3GOVMD ;
R_GOVMR=R3GOVMR ;
R_GOVOT=R3GOVOT ;
R_GOVVA=R3GOVVA ;
R_GROSSA=R3GROSSA ;
/* Empty map cell for: R_GRP         variable wave =  3*/ ;
/* Empty map cell for: R_GRPDOM      variable wave =  3*/ ;
/* Empty map cell for: R_GRPL        variable wave =  3*/ ;
/* Empty map cell for: R_GRPPOS      variable wave =  3*/ ;
/* Empty map cell for: R_GRPR        variable wave =  3*/ ;
R_HALUC=R3HALUC ;
/* Empty map cell for: R_HDLR20      variable wave =  3*/ ;
R_HEART=R3HEART ;
R_HEARTE=R3HEARTE ;
R_HEARTF=R3HEARTF ;
R_HEARTQ=R3HEARTQ ;
R_HEARTS=R3HEARTS ;
R_HECOV1=R3HECOV1 ;
R_HECOV2=R3HECOV2 ;
/* Empty map cell for: R_HECOV3      variable wave =  3*/ ;
R_HEIGHT=R3HEIGHT ;
R_HENUM=R3HENUM ;
R_HERET=R3HERET ;
R_HERTR1=R3HERTR1 ;
R_HERTR2=R3HERTR2 ;
/* Empty map cell for: R_HERTR3      variable wave =  3*/ ;
/* Empty map cell for: R_HERTS1      variable wave =  3*/ ;
/* Empty map cell for: R_HERTS2      variable wave =  3*/ ;
/* Empty map cell for: R_HERTS3      variable wave =  3*/ ;
R_HESRC1=R3HESRC1 ;
R_HESRC2=R3HESRC2 ;
/* Empty map cell for: R_HESRC3      variable wave =  3*/ ;
R_HIBP=R3HIBP ;
R_HIBPE=R3HIBPE ;
R_HIBPF=R3HIBPF ;
R_HIBPQ=R3HIBPQ ;
R_HIBPS=R3HIBPS ;
R_HIGOV=R3HIGOV ;
R_HILTC=R3HILTC ;
/* Empty map cell for: R_HIMR20      variable wave =  3*/ ;
R_HIOTHP=R3HIOTHP ;
R_HLPDYSF=R3HLPDYSF ;
R_HLPDYSNF=R3HLPDYSNF ;
R_HLPDYSP=R3HLPDYSP ;
R_HLPDYST=R3HLPDYST ;
R_HLPDYSU=R3HLPDYSU ;
R_HLPHRSF=R3HLPHRSF ;
R_HLPHRSNF=R3HLPHRSNF ;
R_HLPHRSP=R3HLPHRSP ;
R_HLPHRST=R3HLPHRST ;
R_HLPHRSU=R3HLPHRSU ;
R_HLPPDFA=R3HLPPDFA ;
R_HLPPDFN=R3HLPPDFN ;
R_HLPPDNFA=R3HLPPDNFA ;
R_HLPPDNFN=R3HLPPDNFN ;
R_HLPPDTA=R3HLPPDTA ;
R_HLPPDTN=R3HLPPDTN ;
R_HLPRFN=R3HLPRFN ;
R_HLPRNFN=R3HLPRNFN ;
R_HLPRPN=R3HLPRPN ;
R_HLPRTN=R3HLPRTN ;
R_HLPRUN=R3HLPRUN ;
R_HLTC3=R3HLTC3 ;
R_HLTC5=R3HLTC5 ;
R_HLTC5F=R3HLTC5F ;
R_HLTHLM=R3HLTHLM ;
R_HOMCAR=R3HOMCAR ;
R_HOSP=R3HOSP ;
R_HSPNIT=R3HSPNIT ;
R_HSPTIM=R3HSPTIM ;
/* Empty map cell for: R_HSWRKF      variable wave =  3*/ ;
/* Empty map cell for: R_HTR40       variable wave =  3*/ ;
R_IADL5A=R3IADL5A ;
R_IADL5H=R3IADL5H ;
R_IANN=R3IANN ;
R_IEARN=R3IEARN ;
R_IFANN=R3IFANN ;
R_IFEARN=R3IFEARN ;
R_IFGXFR=R3IFGXFR ;
/* Empty map cell for: R_IFIRAW      variable wave =  3*/ ;
/* Empty map cell for: R_IFIRAWY1    variable wave =  3*/ ;
R_IFPEN=R3IFPEN ;
R_IFPENA=R3IFPENA ;
R_IFSDI=R3IFSDI ;
R_IFSRET=R3IFSRET ;
R_IFSSDI=R3IFSSDI ;
/* Empty map cell for: R_IFSSI       variable wave =  3*/ ;
R_IFUNEM=R3IFUNEM ;
R_IFUNWC=R3IFUNWC ;
R_IFWCMP=R3IFWCMP ;
R_IGXFR=R3IGXFR ;
/* Empty map cell for: R_IIRAW       variable wave =  3*/ ;
/* Empty map cell for: R_IIRAWY1     variable wave =  3*/ ;
R_IMRC=R3IMRC ;
/* Empty map cell for: R_IMRC20      variable wave =  3*/ ;
R_INHER=R3INHER ;
R_INHPE=R3INHPE ;
R_INHPFN=R3INHPFN ;
R_INHPNFN=R3INHPNFN ;
R_INHPPN=R3INHPPN ;
R_INHPTN=R3INHPTN ;
R_INHPUN=R3INHPUN ;
R_INLBRF=R3INLBRF ;
R_IPEN=R3IPEN ;
R_IPENA=R3IPENA ;
R_ISDI=R3ISDI ;
R_ISRET=R3ISRET ;
R_ISSDI=R3ISSDI ;
R_ISSI=R3ISSI ;
R_IUNEM=R3IUNEM ;
R_IUNWC=R3IUNWC ;
R_IWBEG=R3IWBEG ;
/* Empty map cell for: R_IWBEGF      variable wave =  3*/ ;
R_IWCMP=R3IWCMP ;
R_IWEND=R3IWEND ;
R_IWENDF=R3IWENDF ;
R_IWENDM=R3IWENDM ;
R_IWENDY=R3IWENDY ;
R_IWMID=R3IWMID ;
R_IWMIDF=R3IWMIDF ;
R_IWSTAT=R3IWSTAT ;
R_JCIND=R3JCIND ;
/* Empty map cell for: R_JCINDB      variable wave =  3*/ ;
/* Empty map cell for: R_JCINDC      variable wave =  3*/ ;
R_JCOCC=R3JCOCC ;
R_JCOCCA=R3JCOCCA ;
/* Empty map cell for: R_JCOCCB      variable wave =  3*/ ;
/* Empty map cell for: R_JCOCCC      variable wave =  3*/ ;
R_JCPEN=R3JCPEN ;
R_JCPENF=R3JCPENF ;
R_JCTEN=R3JCTEN ;
R_JHOUR2=R3JHOUR2 ;
R_JHOURS=R3JHOURS ;
R_JJOBS=R3JJOBS ;
R_JLASTM=R3JLASTM ;
R_JLASTY=R3JLASTY ;
R_JLIFT=R3JLIFT ;
R_JLIND=R3JLIND ;
/* Empty map cell for: R_JLINDB      variable wave =  3*/ ;
/* Empty map cell for: R_JLINDC      variable wave =  3*/ ;
R_JLMIS=R3JLMIS ;
R_JLOCC=R3JLOCC ;
R_JLOCCA=R3JLOCCA ;
/* Empty map cell for: R_JLOCCB      variable wave =  3*/ ;
/* Empty map cell for: R_JLOCCC      variable wave =  3*/ ;
R_JLTEN=R3JLTEN ;
R_JLTENF=R3JLTENF ;
R_JMISS=R3JMISS ;
R_JNJOB=R3JNJOB ;
R_JNJOB5=R3JNJOB5 ;
/* Empty map cell for: R1_JOG        variable wave =  3*/ ;
/* Empty map cell for: R2_JOG        variable wave =  3*/ ;
R_JOG=R3JOG ;
R_JOGA=R3JOGA ;
/* Empty map cell for: R_JOGW        variable wave =  3*/ ;
R_JPHYS=R3JPHYS ;
R_JSIGHT=R3JSIGHT ;
R_JSTOOP=R3JSTOOP ;
R_JSTRES=R3JSTRES ;
R_JWEEK2=R3JWEEK2 ;
R_JWEEKS=R3JWEEKS ;
R_JYEARM=R3JYEARM ;
R_JYEARS=R3JYEARS ;
/* Empty map cell for: R_LBAGR       variable wave =  3*/ ;
/* Empty map cell for: R_LBASSISTPRB variable wave =  3*/ ;
/* Empty map cell for: R_LBCOMP      variable wave =  3*/ ;
/* Empty map cell for: R_LBCON10     variable wave =  3*/ ;
/* Empty map cell for: R_LBCON5      variable wave =  3*/ ;
/* Empty map cell for: R_LBELIG      variable wave =  3*/ ;
/* Empty map cell for: R_LBEXT       variable wave =  3*/ ;
/* Empty map cell for: R_LBFAMDRUGPRBvariable wave =  3*/ ;
/* Empty map cell for: R_LBFAMHLTHPRBvariable wave =  3*/ ;
/* Empty map cell for: R_LBFINPRB    variable wave =  3*/ ;
/* Empty map cell for: R_LBHLTHPRB   variable wave =  3*/ ;
/* Empty map cell for: R_LBHOUSEPRB  variable wave =  3*/ ;
/* Empty map cell for: R_LBLONELY11  variable wave =  3*/ ;
/* Empty map cell for: R_LBLONELY3   variable wave =  3*/ ;
/* Empty map cell for: R_LBNEGAFFECT variable wave =  3*/ ;
/* Empty map cell for: R_LBNEGAFFECT6variable wave =  3*/ ;
/* Empty map cell for: R_LBNEUR      variable wave =  3*/ ;
/* Empty map cell for: R_LBONCHRSTR  variable wave =  3*/ ;
/* Empty map cell for: R_LBOPEN      variable wave =  3*/ ;
/* Empty map cell for: R_LBPOSAFFECT variable wave =  3*/ ;
/* Empty map cell for: R_LBPOSAFFECT6variable wave =  3*/ ;
R_LBRF=R3LBRF ;
R_LBRFH=R3LBRFH ;
R_LBRFY=R3LBRFY ;
/* Empty map cell for: R_LBRLTNSHPRB variable wave =  3*/ ;
/* Empty map cell for: R_LBSATCITY   variable wave =  3*/ ;
/* Empty map cell for: R_LBSATFAM    variable wave =  3*/ ;
/* Empty map cell for: R_LBSATFIN    variable wave =  3*/ ;
/* Empty map cell for: R_LBSATHLTH   variable wave =  3*/ ;
/* Empty map cell for: R_LBSATHOME   variable wave =  3*/ ;
/* Empty map cell for: R_LBSATINC    variable wave =  3*/ ;
/* Empty map cell for: R_LBSATLEISUREvariable wave =  3*/ ;
/* Empty map cell for: R_LBSATLIFE   variable wave =  3*/ ;
/* Empty map cell for: R_LBSATWLF    variable wave =  3*/ ;
/* Empty map cell for: R_LBWGTR      variable wave =  3*/ ;
/* Empty map cell for: R_LBWORKPRB   variable wave =  3*/ ;
R_LGMUSA=R3LGMUSA ;
/* Empty map cell for: R_LGMUSW      variable wave =  3*/ ;
/* Empty map cell for: R_LHTACT      variable wave =  3*/ ;
R_LIFEIN=R3LIFEIN ;
/* Empty map cell for: R1_LIFT       variable wave =  3*/ ;
/* Empty map cell for: R2_LIFT       variable wave =  3*/ ;
R_LIFT=R3LIFT ;
R_LIFTA=R3LIFTA ;
/* Empty map cell for: R_LIFTW       variable wave =  3*/ ;
R_LIV10=R3LIV10 ;
R_LIV10A=R3LIV10A ;
R_LIV10P=R3LIV10P ;
R_LIV10R=R3LIV10R ;
R_LIV75=R3LIV75 ;
R_LIV75C=R3LIV75C ;
R_LIV75F=R3LIV75F ;
R_LIV75P=R3LIV75P ;
R_LIV75R=R3LIV75R ;
R_LIV85=R3LIV85 ;
R_LIV85C=R3LIV85C ;
R_LIV85F=R3LIV85F ;
R_LIV85P=R3LIV85P ;
R_LIV85R=R3LIV85R ;
R_LIV8XC=R3LIV8XC ;
R_LIV8XF=R3LIV8XF ;
R_LIVBRO=R3LIVBRO ;
R_LIVPAR=R3LIVPAR ;
R_LIVSIB=R3LIVSIB ;
R_LIVSIS=R3LIVSIS ;
R_LOST=R3LOST ;
/* Empty map cell for: R_LTACTF      variable wave =  3*/ ;
/* Empty map cell for: R_LTACTN      variable wave =  3*/ ;
/* Empty map cell for: R_LTACTP      variable wave =  3*/ ;
/* Empty map cell for: R_LTACTX      variable wave =  3*/ ;
R_LTCPRM=R3LTCPRM ;
R_LUNG=R3LUNG ;
R_LUNGE=R3LUNGE ;
R_LUNGF=R3LUNGF ;
R_LUNGQ=R3LUNGQ ;
R_LUNGS=R3LUNGS ;
R_MAMMOG=R3MAMMOG ;
/* Empty map cell for: R1_MAP        variable wave =  3*/ ;
/* Empty map cell for: R2_MAP        variable wave =  3*/ ;
R_MAP=R3MAP ;
R_MAPA=R3MAPA ;
/* Empty map cell for: R_MAPW        variable wave =  3*/ ;
R_MCURLN=R3MCURLN ;
/* Empty map cell for: R_MCWV        variable wave =  3*/ ;
/* Empty map cell for: R_MCWVW       variable wave =  3*/ ;
/* Empty map cell for: R_MDACTX      variable wave =  3*/ ;
R_MDIV=R3MDIV ;
R_MEALS=R3MEALS ;
R_MEALSA=R3MEALSA ;
R_MEALSH=R3MEALSH ;
/* Empty map cell for: R_MEALSR      variable wave =  3*/ ;
/* Empty map cell for: R2_MEDS       variable wave =  3*/ ;
R_MEDS=R3MEDS ;
R_MEDSA=R3MEDSA ;
R_MEDSH=R3MEDSH ;
/* Empty map cell for: R_MEDSR       variable wave =  3*/ ;
/* Empty map cell for: R_MEMRY       variable wave =  3*/ ;
/* Empty map cell for: R_MEMRYE      variable wave =  3*/ ;
/* Empty map cell for: R_MEMRYF      variable wave =  3*/ ;
/* Empty map cell for: R_MEMRYQ      variable wave =  3*/ ;
/* Empty map cell for: R_MEMRYS      variable wave =  3*/ ;
R_MEND=R3MEND ;
R_MLEN=R3MLEN ;
R_MLENM=R3MLENM ;
R_MNEV=R3MNEV ;
R_MO=R3MO ;
R_MOBILA=R3MOBILA ;
/* Empty map cell for: R_MOBILW      variable wave =  3*/ ;
R_MOMAGE=R3MOMAGE ;
R_MOMLIV=R3MOMLIV ;
/* Empty map cell for: R2_MONEY      variable wave =  3*/ ;
R_MONEY=R3MONEY ;
R_MONEYA=R3MONEYA ;
R_MONEYH=R3MONEYH ;
/* Empty map cell for: R_MONEYR      variable wave =  3*/ ;
R_MPART=R3MPART ;
R_MRCT=R3MRCT ;
R_MRPREM=R3MRPREM ;
R_MSTAT=R3MSTAT ;
R_MSTATF=R3MSTATF ;
R_MSTATH=R3MSTATH ;
R_MSTOT=R3MSTOT ;
R_MWID=R3MWID ;
R_NHMDAY=R3NHMDAY ;
R_NHMLIV=R3NHMLIV ;
R_NHMMVM=R3NHMMVM ;
R_NHMMVY=R3NHMMVY ;
/* Empty map cell for: R_NOTICS      variable wave =  3*/ ;
/* Empty map cell for: R_NOVOC       variable wave =  3*/ ;
R_NRSHOM=R3NRSHOM ;
R_NRSNIT=R3NRSNIT ;
R_NRSTIM=R3NRSTIM ;
/* Empty map cell for: R_NSSCRE      variable wave =  3*/ ;
/* Empty map cell for: R_NSSCSE      variable wave =  3*/ ;
R_OOPMD=R3OOPMD ;
R_OOPMDF=R3OOPMDF ;
/* Empty map cell for: R_OOPMDO      variable wave =  3*/ ;
/* Empty map cell for: R_OOPMDOF     variable wave =  3*/ ;
R_OUTPT=R3OUTPT ;
R_PAPSM=R3PAPSM ;
/* Empty map cell for: R_PARTD       variable wave =  3*/ ;
R_PENCT=R3PENCT ;
R_PENIC1=R3PENIC1 ;
R_PENIC2=R3PENIC2 ;
R_PENINC=R3PENINC ;
R_PENI_N=R3PENI_N ;
R_PEXIT=R3PEXIT ;
/* Empty map cell for: R2_PHONE      variable wave =  3*/ ;
R_PHONE=R3PHONE ;
R_PHONEA=R3PHONEA ;
R_PHONEH=R3PHONEH ;
/* Empty map cell for: R_PHONER      variable wave =  3*/ ;
/* Empty map cell for: R_PMBMI       variable wave =  3*/ ;
/* Empty map cell for: R_PMHGHT      variable wave =  3*/ ;
/* Empty map cell for: R_PMHGHTS     variable wave =  3*/ ;
/* Empty map cell for: R_PMWAIST     variable wave =  3*/ ;
/* Empty map cell for: R_PMWAISTC    variable wave =  3*/ ;
/* Empty map cell for: R_PMWGHT      variable wave =  3*/ ;
/* Empty map cell for: R_PMWGHTF     variable wave =  3*/ ;
/* Empty map cell for: R_PMWGHTS     variable wave =  3*/ ;
/* Empty map cell for: R_PNHM5Y      variable wave =  3*/ ;
/* Empty map cell for: R_PRCHMEM     variable wave =  3*/ ;
R_PRES=R3PRES ;
R_PRMEM=R3PRMEM ;
R_PROST=R3PROST ;
R_PROXY=R3PROXY ;
R_PRPCNT=R3PRPCNT ;
R_PRPRM1=R3PRPRM1 ;
R_PRPRM2=R3PRPRM2 ;
R_PRPRM3=R3PRPRM3 ;
R_PRSRC1=R3PRSRC1 ;
R_PRSRC2=R3PRSRC2 ;
R_PRSRC3=R3PRSRC3 ;
R_PSTMEM=R3PSTMEM ;
R_PSYCH=R3PSYCH ;
R_PSYCHE=R3PSYCHE ;
R_PSYCHF=R3PSYCHF ;
R_PSYCHQ=R3PSYCHQ ;
R_PSYCHS=R3PSYCHS ;
R_PTYP1=R3PTYP1 ;
R_PTYP2=R3PTYP2 ;
R_PTYP3=R3PTYP3 ;
/* Empty map cell for: R_PTYP4       variable wave =  3*/ ;
/* Empty map cell for: R_PTYPD1      variable wave =  3*/ ;
/* Empty map cell for: R_PTYPD2      variable wave =  3*/ ;
/* Empty map cell for: R_PTYPD3      variable wave =  3*/ ;
/* Empty map cell for: R_PTYPD4      variable wave =  3*/ ;
/* Empty map cell for: R_PTYPF1      variable wave =  3*/ ;
/* Empty map cell for: R_PTYPF2      variable wave =  3*/ ;
/* Empty map cell for: R_PTYPF3      variable wave =  3*/ ;
/* Empty map cell for: R_PTYPF4      variable wave =  3*/ ;
/* Empty map cell for: R_PUFF        variable wave =  3*/ ;
/* Empty map cell for: R_PUFFPOS     variable wave =  3*/ ;
/* Empty map cell for: R1_PUSH       variable wave =  3*/ ;
/* Empty map cell for: R2_PUSH       variable wave =  3*/ ;
R_PUSH=R3PUSH ;
R_PUSHA=R3PUSHA ;
/* Empty map cell for: R_PUSHW       variable wave =  3*/ ;
R_RETDTWV=R3RETDTWV ;
R_RETEMP=R3RETEMP ;
/* Empty map cell for: R_RETINC      variable wave =  3*/ ;
/* Empty map cell for: R_RETLIV      variable wave =  3*/ ;
R_RETMON=R3RETMON ;
R_RETSAT=R3RETSAT ;
/* Empty map cell for: R_RETWLT      variable wave =  3*/ ;
/* Empty map cell for: R_RETWRK      variable wave =  3*/ ;
/* Empty map cell for: R_RETWSP      variable wave =  3*/ ;
R_RETYR=R3RETYR ;
/* Empty map cell for: R_RISK        variable wave =  3*/ ;
/* Empty map cell for: R_RISK6       variable wave =  3*/ ;
R_RPLNYA=R3RPLNYA ;
R_RPLNYR=R3RPLNYR ;
/* Empty map cell for: R_RXPREM      variable wave =  3*/ ;
R_RYRCMP=R3RYRCMP ;
R_SADLF=R3SADLF ;
R_SAMEJOB=R3SAMEJOB ;
R_SAMEMP=R3SAMEMP ;
R_SAYRET=R3SAYRET ;
R_SCIS=R3SCIS ;
/* Empty map cell for: R_SDIAPL      variable wave =  3*/ ;
/* Empty map cell for: R_SDIAPLM     variable wave =  3*/ ;
/* Empty map cell for: R_SDIAPLY     variable wave =  3*/ ;
/* Empty map cell for: R_SDIAPP      variable wave =  3*/ ;
/* Empty map cell for: R_SDIAPPM     variable wave =  3*/ ;
/* Empty map cell for: R_SDIAPPY     variable wave =  3*/ ;
/* Empty map cell for: R_SDIDEN      variable wave =  3*/ ;
/* Empty map cell for: R_SDIREC      variable wave =  3*/ ;
/* Empty map cell for: R_SDIRECM     variable wave =  3*/ ;
/* Empty map cell for: R_SDIRECY     variable wave =  3*/ ;
/* Empty map cell for: R_SDISTP      variable wave =  3*/ ;
/* Empty map cell for: R_SDISTPM     variable wave =  3*/ ;
/* Empty map cell for: R_SDISTPY     variable wave =  3*/ ;
R_SER7=R3SER7 ;
R_SHLT=R3SHLT ;
R_SHLTC=R3SHLTC ;
R_SHLTCF=R3SHLTCF ;
R_SHOP=R3SHOP ;
R_SHOPA=R3SHOPA ;
R_SHOPH=R3SHOPH ;
/* Empty map cell for: R_SHOPR       variable wave =  3*/ ;
/* Empty map cell for: R1_SIT        variable wave =  3*/ ;
/* Empty map cell for: R2_SIT        variable wave =  3*/ ;
R_SIT=R3SIT ;
R_SITA=R3SITA ;
/* Empty map cell for: R_SITW        variable wave =  3*/ ;
/* Empty map cell for: R_SLEEP       variable wave =  3*/ ;
/* Empty map cell for: R_SLEEPE      variable wave =  3*/ ;
/* Empty map cell for: R_SLEEPQ      variable wave =  3*/ ;
R_SLEEPR=R3SLEEPR ;
/* Empty map cell for: R_SLEEPS      variable wave =  3*/ ;
/* Empty map cell for: R_SLEEPX      variable wave =  3*/ ;
R_SLFEMP=R3SLFEMP ;
R_SLFMEM=R3SLFMEM ;
R_SMOKEN=R3SMOKEN ;
R_SMOKEV=R3SMOKEV ;
R_SPCFAC=R3SPCFAC ;
R_SSAPL=R3SSAPL ;
R_SSAPLM=R3SSAPLM ;
R_SSAPLY=R3SSAPLY ;
R_SSAPP=R3SSAPP ;
R_SSAPPM=R3SSAPPM ;
R_SSAPPY=R3SSAPPY ;
R_SSDEN=R3SSDEN ;
R_SSDI=R3SSDI ;
/* Empty map cell for: R_SSIAPL      variable wave =  3*/ ;
/* Empty map cell for: R_SSIAPLM     variable wave =  3*/ ;
/* Empty map cell for: R_SSIAPLY     variable wave =  3*/ ;
/* Empty map cell for: R_SSIAPP      variable wave =  3*/ ;
/* Empty map cell for: R_SSIAPPM     variable wave =  3*/ ;
/* Empty map cell for: R_SSIAPPY     variable wave =  3*/ ;
/* Empty map cell for: R_SSIDEN      variable wave =  3*/ ;
/* Empty map cell for: R_SSIREC      variable wave =  3*/ ;
/* Empty map cell for: R_SSIRECM     variable wave =  3*/ ;
/* Empty map cell for: R_SSIRECY     variable wave =  3*/ ;
/* Empty map cell for: R_SSISTP      variable wave =  3*/ ;
/* Empty map cell for: R_SSISTPM     variable wave =  3*/ ;
/* Empty map cell for: R_SSISTPY     variable wave =  3*/ ;
R_SSREC=R3SSREC ;
R_SSRECM=R3SSRECM ;
R_SSRECY=R3SSRECY ;
R_SSSTP=R3SSSTP ;
R_SSSTPM=R3SSSTPM ;
R_SSSTPY=R3SSSTPY ;
/* Empty map cell for: R_SSWRER      variable wave =  3*/ ;
/* Empty map cell for: R_SSWRNR      variable wave =  3*/ ;
/* Empty map cell for: R_SSWRXA      variable wave =  3*/ ;
/* Empty map cell for: R_SSWSER      variable wave =  3*/ ;
/* Empty map cell for: R_SSWSNR      variable wave =  3*/ ;
/* Empty map cell for: R_SSWSXA      variable wave =  3*/ ;
R_STATUS=R3STATUS ;
/* Empty map cell for: R1_STOOP      variable wave =  3*/ ;
/* Empty map cell for: R2_STOOP      variable wave =  3*/ ;
R_STOOP=R3STOOP ;
R_STOOPA=R3STOOPA ;
/* Empty map cell for: R_STOOPW      variable wave =  3*/ ;
R_STROK=R3STROK ;
R_STROKE=R3STROKE ;
R_STROKF=R3STROKF ;
R_STROKQ=R3STROKQ ;
R_STROKS=R3STROKS ;
/* Empty map cell for: R_TIMWLK      variable wave =  3*/ ;
/* Empty map cell for: R_TIMWLKA     variable wave =  3*/ ;
R_TLIPRM=R3TLIPRM ;
/* Empty map cell for: R2_TOILT      variable wave =  3*/ ;
R_TOILT=R3TOILT ;
R_TOILTA=R3TOILTA ;
/* Empty map cell for: R2_TOILTH     variable wave =  3*/ ;
R_TOILTH=R3TOILTH ;
R_TOTMBF=R3TOTMBF ;
R_TOTMBI=R3TOTMBI ;
R_TOTMD=R3TOTMD ;
R_TOTMDF=R3TOTMDF ;
R_TR20=R3TR20 ;
/* Empty map cell for: R_TR40        variable wave =  3*/ ;
R_TYLTC=R3TYLTC ;
/* Empty map cell for: R_ULCER       variable wave =  3*/ ;
R_UNEMP=R3UNEMP ;
R_UNION=R3UNION ;
R_UNIONF=R3UNIONF ;
/* Empty map cell for: R_VGACTF      variable wave =  3*/ ;
/* Empty map cell for: R_VGACTN      variable wave =  3*/ ;
/* Empty map cell for: R_VGACTP      variable wave =  3*/ ;
/* Empty map cell for: R_VGACTX      variable wave =  3*/ ;
R_VIGACT=R3VIGACT ;
R_VOCAB=R3VOCAB ;
R_VP=R3VP ;
/* Empty map cell for: R1_WALK1      variable wave =  3*/ ;
/* Empty map cell for: R2_WALK1      variable wave =  3*/ ;
R_WALK1=R3WALK1 ;
R_WALK1A=R3WALK1A ;
/* Empty map cell for: R_WALK1W      variable wave =  3*/ ;
/* Empty map cell for: R1_WALKR      variable wave =  3*/ ;
/* Empty map cell for: R2_WALKR      variable wave =  3*/ ;
R_WALKR=R3WALKR ;
R_WALKRA=R3WALKRA ;
R_WALKRE=R3WALKRE ;
/* Empty map cell for: R2_WALKRH     variable wave =  3*/ ;
R_WALKRH=R3WALKRH ;
/* Empty map cell for: R_WALKRW      variable wave =  3*/ ;
/* Empty map cell for: R1_WALKS      variable wave =  3*/ ;
/* Empty map cell for: R2_WALKS      variable wave =  3*/ ;
R_WALKS=R3WALKS ;
R_WALKSA=R3WALKSA ;
/* Empty map cell for: R_WALKSW      variable wave =  3*/ ;
R_WANDER=R3WANDER ;
R_WEIGHT=R3WEIGHT ;
R_WGFHR=R3WGFHR ;
R_WGFWK=R3WGFWK ;
R_WGIHR=R3WGIHR ;
R_WGIWK=R3WGIWK ;
/* Empty map cell for: R_WHAPPX      variable wave =  3*/ ;
R_WHAPPY=R3WHAPPY ;
R_WLIPRM=R3WLIPRM ;
R_WORK=R3WORK ;
R_WORK2=R3WORK2 ;
R_WORK62=R3WORK62 ;
R_WORK62F=R3WORK62F ;
R_WORK65=R3WORK65 ;
R_WORK65F=R3WORK65F ;
/* Empty map cell for: R_WORK70      variable wave =  3*/ ;
/* Empty map cell for: R_WORK70A     variable wave =  3*/ ;
/* Empty map cell for: R_WORK70AF    variable wave =  3*/ ;
/* Empty map cell for: R_WORK70F     variable wave =  3*/ ;
R_WORKLM=R3WORKLM ;
R_WTCRNH=R3WTCRNH ;
R_WTHH=R3WTHH ;
R_WTRESP=R3WTRESP ;
/* Empty map cell for: R_WTR_NH      variable wave =  3*/ ;
R_YR=R3YR ;
if inw=1 then output ;
%put --- Rlong table ;
%initvars ;
%put ---- Rlong table ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
WAVE_NUMBER=4 ;
H_HHIDC=H4HHIDC ;
SUBHH= substr(H_HHIDC,7)     /* --- Derived variable  */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
INW=INW4 ;
WAVE_NAME=  'hrs_wave'||strip(put(wave_number,3.))     /* --- Derived variable  */ ;
CYEAR='yr1998' ;
/* --- RAND variable:HACOHORT  included */ ;
studyyr= hrs_studyyr(wave_number,
hacohort)     /* --- Derived variable  */ ;
H_HHID=H4HHID ;
S_HHIDPN=S4HHIDPN ;
/* Empty map cell for: R_ACGTOT      variable wave =  4*/ ;
R_ADL5A=R4ADL5A ;
R_ADL5H=R4ADL5H ;
R_ADL6A=R4ADL6A ;
R_ADL6H=R4ADL6H ;
/* Empty map cell for: R_ADLR10      variable wave =  4*/ ;
/* Empty map cell for: R_ADLW        variable wave =  4*/ ;
R_AGEM_B=R4AGEM_B ;
R_AGEM_E=R4AGEM_E ;
R_AGEM_M=R4AGEM_M ;
R_AGEY_B=R4AGEY_B ;
R_AGEY_E=R4AGEY_E ;
R_AGEY_M=R4AGEY_M ;
/* Empty map cell for: R_AIMR10      variable wave =  4*/ ;
R_ALONE=R4ALONE ;
/* Empty map cell for: R_ALZHE       variable wave =  4*/ ;
/* Empty map cell for: R_ALZHEE      variable wave =  4*/ ;
/* Empty map cell for: R_ALZHEF      variable wave =  4*/ ;
/* Empty map cell for: R_ALZHEQ      variable wave =  4*/ ;
/* Empty map cell for: R_ALZHES      variable wave =  4*/ ;
/* Empty map cell for: R_AMSTOT      variable wave =  4*/ ;
R_ANS3PQ=R4ANS3PQ ;
/* Empty map cell for: R1_ARMS       variable wave =  4*/ ;
/* Empty map cell for: R2_ARMS       variable wave =  4*/ ;
R_ARMS=R4ARMS ;
R_ARMSA=R4ARMSA ;
/* Empty map cell for: R_ARMSW       variable wave =  4*/ ;
R_ARTHR=R4ARTHR ;
R_ARTHRE=R4ARTHRE ;
R_ARTHRF=R4ARTHRF ;
R_ARTHRQ=R4ARTHRQ ;
R_ARTHRS=R4ARTHRS ;
/* Empty map cell for: R_ATR20       variable wave =  4*/ ;
R_BACK=R4BACK ;
/* Empty map cell for: R_BALFUL      variable wave =  4*/ ;
/* Empty map cell for: R_BALFULC     variable wave =  4*/ ;
/* Empty map cell for: R_BALFULT     variable wave =  4*/ ;
/* Empty map cell for: R_BALSBS      variable wave =  4*/ ;
/* Empty map cell for: R_BALSBSC     variable wave =  4*/ ;
/* Empty map cell for: R_BALSEMI     variable wave =  4*/ ;
/* Empty map cell for: R_BALSEMIC    variable wave =  4*/ ;
/* Empty map cell for: R1_BATH       variable wave =  4*/ ;
/* Empty map cell for: R2_BATH       variable wave =  4*/ ;
R_BATH=R4BATH ;
R_BATHA=R4BATHA ;
/* Empty map cell for: R2_BATHH      variable wave =  4*/ ;
R_BATHH=R4BATHH ;
/* Empty map cell for: R_BATHW       variable wave =  4*/ ;
/* Empty map cell for: R1_BED        variable wave =  4*/ ;
/* Empty map cell for: R2_BED        variable wave =  4*/ ;
R_BED=R4BED ;
R_BEDA=R4BEDA ;
R_BEDE=R4BEDE ;
/* Empty map cell for: R2_BEDH       variable wave =  4*/ ;
R_BEDH=R4BEDH ;
/* Empty map cell for: R_BEDW        variable wave =  4*/ ;
R_BEQ100=R4BEQ100 ;
R_BEQ10K=R4BEQ10K ;
/* Empty map cell for: R_BEQ500      variable wave =  4*/ ;
R_BEQANY=R4BEQANY ;
/* Empty map cell for: R_BEQLRG      variable wave =  4*/ ;
R_BMI=R4BMI ;
/* Empty map cell for: R_BPDIA       variable wave =  4*/ ;
/* Empty map cell for: R_BPPOS       variable wave =  4*/ ;
/* Empty map cell for: R_BPPULS      variable wave =  4*/ ;
/* Empty map cell for: R_BPSYS       variable wave =  4*/ ;
R_BREAST=R4BREAST ;
R_BWC20=R4BWC20 ;
R_BWC86=R4BWC86 ;
R_CACT=R4CACT ;
/* Empty map cell for: R1_CALC       variable wave =  4*/ ;
/* Empty map cell for: R2_CALC       variable wave =  4*/ ;
/* Empty map cell for: R_CALCA       variable wave =  4*/ ;
/* Empty map cell for: R_CALCW       variable wave =  4*/ ;
R_CANCR=R4CANCR ;
R_CANCRE=R4CANCRE ;
R_CANCRF=R4CANCRF ;
R_CANCRQ=R4CANCRQ ;
R_CANCRS=R4CANCRS ;
R_CENDIV=R4CENDIV ;
R_CENREG=R4CENREG ;
R_CESD=R4CESD ;
R_CESDM=R4CESDM ;
/* Empty map cell for: R1_CHAIR      variable wave =  4*/ ;
/* Empty map cell for: R2_CHAIR      variable wave =  4*/ ;
R_CHAIR=R4CHAIR ;
R_CHAIRA=R4CHAIRA ;
/* Empty map cell for: R_CHAIRW      variable wave =  4*/ ;
R_CHOLST=R4CHOLST ;
R_CLAIMED=R4CLAIMED ;
/* Empty map cell for: R1_CLIM1      variable wave =  4*/ ;
/* Empty map cell for: R2_CLIM1      variable wave =  4*/ ;
R_CLIM1=R4CLIM1 ;
R_CLIM1A=R4CLIM1A ;
/* Empty map cell for: R_CLIM1W      variable wave =  4*/ ;
/* Empty map cell for: R1_CLIMS      variable wave =  4*/ ;
/* Empty map cell for: R2_CLIMS      variable wave =  4*/ ;
R_CLIMS=R4CLIMS ;
R_CLIMSA=R4CLIMSA ;
/* Empty map cell for: R_CLIMSW      variable wave =  4*/ ;
R_COGTOT=R4COGTOT ;
/* Empty map cell for: R_COMP        variable wave =  4*/ ;
/* Empty map cell for: R_COMPW       variable wave =  4*/ ;
R_CONDE=R4CONDE ;
R_CONDEF=R4CONDEF ;
R_CONDS=R4CONDS ;
R_CONDSF=R4CONDSF ;
R_CONDSP=R4CONDSP ;
R_COVR=R4COVR ;
R_COVRT=R4COVRT ;
R_COVS=R4COVS ;
R_DADAGE=R4DADAGE ;
R_DADLIV=R4DADLIV ;
R_DCBAL1=R4DCBAL1 ;
R_DCBAL2=R4DCBAL2 ;
R_DCBAL3=R4DCBAL3 ;
/* Empty map cell for: R_DCBAL4      variable wave =  4*/ ;
R_DCBENE1=R4DCBENE1 ;
R_DCBENE2=R4DCBENE2 ;
R_DCBENE3=R4DCBENE3 ;
/* Empty map cell for: R_DCBENE4     variable wave =  4*/ ;
R_DCCONT1=R4DCCONT1 ;
R_DCCONT2=R4DCCONT2 ;
R_DCCONT3=R4DCCONT3 ;
/* Empty map cell for: R_DCCONT4     variable wave =  4*/ ;
R_DCMODE1=R4DCMODE1 ;
R_DCMODE2=R4DCMODE2 ;
R_DCMODE3=R4DCMODE3 ;
/* Empty map cell for: R_DCMODE4     variable wave =  4*/ ;
R_DCPCT1=R4DCPCT1 ;
R_DCPCT2=R4DCPCT2 ;
R_DCPCT3=R4DCPCT3 ;
/* Empty map cell for: R_DCPCT4      variable wave =  4*/ ;
/* Empty map cell for: R_DEMEN       variable wave =  4*/ ;
/* Empty map cell for: R_DEMENE      variable wave =  4*/ ;
/* Empty map cell for: R_DEMENF      variable wave =  4*/ ;
/* Empty map cell for: R_DEMENQ      variable wave =  4*/ ;
/* Empty map cell for: R_DEMENS      variable wave =  4*/ ;
R_DENTST=R4DENTST ;
R_DEPRES=R4DEPRES ;
/* Empty map cell for: R_DEPREX      variable wave =  4*/ ;
R_DIAB=R4DIAB ;
R_DIABE=R4DIABE ;
R_DIABF=R4DIABF ;
R_DIABQ=R4DIABQ ;
R_DIABS=R4DIABS ;
/* Empty map cell for: R1_DIME       variable wave =  4*/ ;
/* Empty map cell for: R2_DIME       variable wave =  4*/ ;
R_DIME=R4DIME ;
R_DIMEA=R4DIMEA ;
/* Empty map cell for: R_DIMEW       variable wave =  4*/ ;
R_DLRC=R4DLRC ;
/* Empty map cell for: R_DLRC20      variable wave =  4*/ ;
R_DOCTIM=R4DOCTIM ;
R_DOCTOR=R4DOCTOR ;
/* Empty map cell for: R1_DRESS      variable wave =  4*/ ;
/* Empty map cell for: R2_DRESS      variable wave =  4*/ ;
R_DRESS=R4DRESS ;
R_DRESSA=R4DRESSA ;
/* Empty map cell for: R2_DRESSH     variable wave =  4*/ ;
R_DRESSH=R4DRESSH ;
/* Empty map cell for: R_DRESSW      variable wave =  4*/ ;
R_DRINK=R4DRINK ;
R_DRINKD=R4DRINKD ;
R_DRINKN=R4DRINKN ;
/* Empty map cell for: R_DRINKR      variable wave =  4*/ ;
R_DRUGS=R4DRUGS ;
/* Empty map cell for: R_DSIAMT      variable wave =  4*/ ;
/* Empty map cell for: R_DSSAMT      variable wave =  4*/ ;
R_DSTAT=R4DSTAT ;
R_DW=R4DW ;
R_DY=R4DY ;
/* Empty map cell for: R1_EAT        variable wave =  4*/ ;
/* Empty map cell for: R2_EAT        variable wave =  4*/ ;
R_EAT=R4EAT ;
R_EATA=R4EATA ;
/* Empty map cell for: R2_EATH       variable wave =  4*/ ;
R_EATH=R4EATH ;
/* Empty map cell for: R_EATW        variable wave =  4*/ ;
R_EFFORT=R4EFFORT ;
/* Empty map cell for: R_EFFORX      variable wave =  4*/ ;
R_ENLIFE=R4ENLIFE ;
/* Empty map cell for: R_ENLIFX      variable wave =  4*/ ;
R_FAMR=R4FAMR ;
R_FBWC20=R4FBWC20 ;
R_FBWC86=R4FBWC86 ;
R_FCACT=R4FCACT ;
R_FDLRC=R4FDLRC ;
R_FDW=R4FDW ;
R_FDY=R4FDY ;
R_FIMRC=R4FIMRC ;
R_FINEA=R4FINEA ;
R_FINPLN=R4FINPLN ;
R_FINR=R4FINR ;
/* Empty map cell for: R_FLAG        variable wave =  4*/ ;
R_FLONE=R4FLONE ;
/* Empty map cell for: R_FLONEX      variable wave =  4*/ ;
R_FLUSHT=R4FLUSHT ;
R_FMO=R4FMO ;
R_FPRES=R4FPRES ;
R_FPSTME=R4FPSTME ;
R_FSAD=R4FSAD ;
/* Empty map cell for: R_FSADX       variable wave =  4*/ ;
R_FSCIS=R4FSCIS ;
R_FSER7=R4FSER7 ;
R_FSIZE=R4FSIZE ;
R_FSIZEF=R4FSIZEF ;
R_FSLFME=R4FSLFME ;
R_FVOCAB=R4FVOCAB ;
R_FVP=R4FVP ;
R_FYR=R4FYR ;
R_GOING=R4GOING ;
/* Empty map cell for: R_GOINGX      variable wave =  4*/ ;
R_GOVMD=R4GOVMD ;
R_GOVMR=R4GOVMR ;
/* Empty map cell for: R_GOVOT       variable wave =  4*/ ;
R_GOVVA=R4GOVVA ;
R_GROSSA=R4GROSSA ;
/* Empty map cell for: R_GRP         variable wave =  4*/ ;
/* Empty map cell for: R_GRPDOM      variable wave =  4*/ ;
/* Empty map cell for: R_GRPL        variable wave =  4*/ ;
/* Empty map cell for: R_GRPPOS      variable wave =  4*/ ;
/* Empty map cell for: R_GRPR        variable wave =  4*/ ;
R_HALUC=R4HALUC ;
/* Empty map cell for: R_HDLR20      variable wave =  4*/ ;
R_HEART=R4HEART ;
R_HEARTE=R4HEARTE ;
R_HEARTF=R4HEARTF ;
R_HEARTQ=R4HEARTQ ;
R_HEARTS=R4HEARTS ;
R_HECOV1=R4HECOV1 ;
/* Empty map cell for: R_HECOV2      variable wave =  4*/ ;
/* Empty map cell for: R_HECOV3      variable wave =  4*/ ;
R_HEIGHT=R4HEIGHT ;
R_HENUM=R4HENUM ;
R_HERET=R4HERET ;
R_HERTR1=R4HERTR1 ;
/* Empty map cell for: R_HERTR2      variable wave =  4*/ ;
/* Empty map cell for: R_HERTR3      variable wave =  4*/ ;
/* Empty map cell for: R_HERTS1      variable wave =  4*/ ;
/* Empty map cell for: R_HERTS2      variable wave =  4*/ ;
/* Empty map cell for: R_HERTS3      variable wave =  4*/ ;
R_HESRC1=R4HESRC1 ;
/* Empty map cell for: R_HESRC2      variable wave =  4*/ ;
/* Empty map cell for: R_HESRC3      variable wave =  4*/ ;
R_HIBP=R4HIBP ;
R_HIBPE=R4HIBPE ;
R_HIBPF=R4HIBPF ;
R_HIBPQ=R4HIBPQ ;
R_HIBPS=R4HIBPS ;
R_HIGOV=R4HIGOV ;
R_HILTC=R4HILTC ;
/* Empty map cell for: R_HIMR20      variable wave =  4*/ ;
R_HIOTHP=R4HIOTHP ;
R_HLPDYSF=R4HLPDYSF ;
R_HLPDYSNF=R4HLPDYSNF ;
R_HLPDYSP=R4HLPDYSP ;
R_HLPDYST=R4HLPDYST ;
R_HLPDYSU=R4HLPDYSU ;
R_HLPHRSF=R4HLPHRSF ;
R_HLPHRSNF=R4HLPHRSNF ;
R_HLPHRSP=R4HLPHRSP ;
R_HLPHRST=R4HLPHRST ;
R_HLPHRSU=R4HLPHRSU ;
R_HLPPDFA=R4HLPPDFA ;
R_HLPPDFN=R4HLPPDFN ;
R_HLPPDNFA=R4HLPPDNFA ;
R_HLPPDNFN=R4HLPPDNFN ;
R_HLPPDTA=R4HLPPDTA ;
R_HLPPDTN=R4HLPPDTN ;
R_HLPRFN=R4HLPRFN ;
R_HLPRNFN=R4HLPRNFN ;
R_HLPRPN=R4HLPRPN ;
R_HLPRTN=R4HLPRTN ;
R_HLPRUN=R4HLPRUN ;
R_HLTC3=R4HLTC3 ;
R_HLTC5=R4HLTC5 ;
R_HLTC5F=R4HLTC5F ;
R_HLTHLM=R4HLTHLM ;
R_HOMCAR=R4HOMCAR ;
R_HOSP=R4HOSP ;
R_HSPNIT=R4HSPNIT ;
R_HSPTIM=R4HSPTIM ;
/* Empty map cell for: R_HSWRKF      variable wave =  4*/ ;
/* Empty map cell for: R_HTR40       variable wave =  4*/ ;
R_IADL5A=R4IADL5A ;
R_IADL5H=R4IADL5H ;
R_IANN=R4IANN ;
R_IEARN=R4IEARN ;
R_IFANN=R4IFANN ;
R_IFEARN=R4IFEARN ;
R_IFGXFR=R4IFGXFR ;
/* Empty map cell for: R_IFIRAW      variable wave =  4*/ ;
/* Empty map cell for: R_IFIRAWY1    variable wave =  4*/ ;
R_IFPEN=R4IFPEN ;
R_IFPENA=R4IFPENA ;
R_IFSDI=R4IFSDI ;
R_IFSRET=R4IFSRET ;
R_IFSSDI=R4IFSSDI ;
/* Empty map cell for: R_IFSSI       variable wave =  4*/ ;
R_IFUNEM=R4IFUNEM ;
R_IFUNWC=R4IFUNWC ;
R_IFWCMP=R4IFWCMP ;
R_IGXFR=R4IGXFR ;
/* Empty map cell for: R_IIRAW       variable wave =  4*/ ;
/* Empty map cell for: R_IIRAWY1     variable wave =  4*/ ;
R_IMRC=R4IMRC ;
/* Empty map cell for: R_IMRC20      variable wave =  4*/ ;
R_INHER=R4INHER ;
R_INHPE=R4INHPE ;
R_INHPFN=R4INHPFN ;
R_INHPNFN=R4INHPNFN ;
R_INHPPN=R4INHPPN ;
R_INHPTN=R4INHPTN ;
R_INHPUN=R4INHPUN ;
R_INLBRF=R4INLBRF ;
R_IPEN=R4IPEN ;
R_IPENA=R4IPENA ;
R_ISDI=R4ISDI ;
R_ISRET=R4ISRET ;
R_ISSDI=R4ISSDI ;
R_ISSI=R4ISSI ;
R_IUNEM=R4IUNEM ;
R_IUNWC=R4IUNWC ;
R_IWBEG=R4IWBEG ;
/* Empty map cell for: R_IWBEGF      variable wave =  4*/ ;
R_IWCMP=R4IWCMP ;
R_IWEND=R4IWEND ;
/* Empty map cell for: R_IWENDF      variable wave =  4*/ ;
R_IWENDM=R4IWENDM ;
R_IWENDY=R4IWENDY ;
R_IWMID=R4IWMID ;
R_IWMIDF=R4IWMIDF ;
R_IWSTAT=R4IWSTAT ;
R_JCIND=R4JCIND ;
/* Empty map cell for: R_JCINDB      variable wave =  4*/ ;
/* Empty map cell for: R_JCINDC      variable wave =  4*/ ;
R_JCOCC=R4JCOCC ;
R_JCOCCA=R4JCOCCA ;
/* Empty map cell for: R_JCOCCB      variable wave =  4*/ ;
/* Empty map cell for: R_JCOCCC      variable wave =  4*/ ;
R_JCPEN=R4JCPEN ;
R_JCPENF=R4JCPENF ;
R_JCTEN=R4JCTEN ;
R_JHOUR2=R4JHOUR2 ;
R_JHOURS=R4JHOURS ;
R_JJOBS=R4JJOBS ;
R_JLASTM=R4JLASTM ;
R_JLASTY=R4JLASTY ;
R_JLIFT=R4JLIFT ;
R_JLIND=R4JLIND ;
/* Empty map cell for: R_JLINDB      variable wave =  4*/ ;
/* Empty map cell for: R_JLINDC      variable wave =  4*/ ;
R_JLMIS=R4JLMIS ;
R_JLOCC=R4JLOCC ;
R_JLOCCA=R4JLOCCA ;
/* Empty map cell for: R_JLOCCB      variable wave =  4*/ ;
/* Empty map cell for: R_JLOCCC      variable wave =  4*/ ;
R_JLTEN=R4JLTEN ;
R_JLTENF=R4JLTENF ;
R_JMISS=R4JMISS ;
R_JNJOB=R4JNJOB ;
R_JNJOB5=R4JNJOB5 ;
/* Empty map cell for: R1_JOG        variable wave =  4*/ ;
/* Empty map cell for: R2_JOG        variable wave =  4*/ ;
R_JOG=R4JOG ;
R_JOGA=R4JOGA ;
/* Empty map cell for: R_JOGW        variable wave =  4*/ ;
R_JPHYS=R4JPHYS ;
R_JSIGHT=R4JSIGHT ;
R_JSTOOP=R4JSTOOP ;
R_JSTRES=R4JSTRES ;
R_JWEEK2=R4JWEEK2 ;
R_JWEEKS=R4JWEEKS ;
R_JYEARM=R4JYEARM ;
R_JYEARS=R4JYEARS ;
/* Empty map cell for: R_LBAGR       variable wave =  4*/ ;
/* Empty map cell for: R_LBASSISTPRB variable wave =  4*/ ;
/* Empty map cell for: R_LBCOMP      variable wave =  4*/ ;
/* Empty map cell for: R_LBCON10     variable wave =  4*/ ;
/* Empty map cell for: R_LBCON5      variable wave =  4*/ ;
/* Empty map cell for: R_LBELIG      variable wave =  4*/ ;
/* Empty map cell for: R_LBEXT       variable wave =  4*/ ;
/* Empty map cell for: R_LBFAMDRUGPRBvariable wave =  4*/ ;
/* Empty map cell for: R_LBFAMHLTHPRBvariable wave =  4*/ ;
/* Empty map cell for: R_LBFINPRB    variable wave =  4*/ ;
/* Empty map cell for: R_LBHLTHPRB   variable wave =  4*/ ;
/* Empty map cell for: R_LBHOUSEPRB  variable wave =  4*/ ;
/* Empty map cell for: R_LBLONELY11  variable wave =  4*/ ;
/* Empty map cell for: R_LBLONELY3   variable wave =  4*/ ;
/* Empty map cell for: R_LBNEGAFFECT variable wave =  4*/ ;
/* Empty map cell for: R_LBNEGAFFECT6variable wave =  4*/ ;
/* Empty map cell for: R_LBNEUR      variable wave =  4*/ ;
/* Empty map cell for: R_LBONCHRSTR  variable wave =  4*/ ;
/* Empty map cell for: R_LBOPEN      variable wave =  4*/ ;
/* Empty map cell for: R_LBPOSAFFECT variable wave =  4*/ ;
/* Empty map cell for: R_LBPOSAFFECT6variable wave =  4*/ ;
R_LBRF=R4LBRF ;
R_LBRFH=R4LBRFH ;
R_LBRFY=R4LBRFY ;
/* Empty map cell for: R_LBRLTNSHPRB variable wave =  4*/ ;
/* Empty map cell for: R_LBSATCITY   variable wave =  4*/ ;
/* Empty map cell for: R_LBSATFAM    variable wave =  4*/ ;
/* Empty map cell for: R_LBSATFIN    variable wave =  4*/ ;
/* Empty map cell for: R_LBSATHLTH   variable wave =  4*/ ;
/* Empty map cell for: R_LBSATHOME   variable wave =  4*/ ;
/* Empty map cell for: R_LBSATINC    variable wave =  4*/ ;
/* Empty map cell for: R_LBSATLEISUREvariable wave =  4*/ ;
/* Empty map cell for: R_LBSATLIFE   variable wave =  4*/ ;
/* Empty map cell for: R_LBSATWLF    variable wave =  4*/ ;
/* Empty map cell for: R_LBWGTR      variable wave =  4*/ ;
/* Empty map cell for: R_LBWORKPRB   variable wave =  4*/ ;
R_LGMUSA=R4LGMUSA ;
/* Empty map cell for: R_LGMUSW      variable wave =  4*/ ;
/* Empty map cell for: R_LHTACT      variable wave =  4*/ ;
R_LIFEIN=R4LIFEIN ;
/* Empty map cell for: R1_LIFT       variable wave =  4*/ ;
/* Empty map cell for: R2_LIFT       variable wave =  4*/ ;
R_LIFT=R4LIFT ;
R_LIFTA=R4LIFTA ;
/* Empty map cell for: R_LIFTW       variable wave =  4*/ ;
/* Empty map cell for: R_LIV10       variable wave =  4*/ ;
/* Empty map cell for: R_LIV10A      variable wave =  4*/ ;
/* Empty map cell for: R_LIV10P      variable wave =  4*/ ;
/* Empty map cell for: R_LIV10R      variable wave =  4*/ ;
R_LIV75=R4LIV75 ;
R_LIV75C=R4LIV75C ;
R_LIV75F=R4LIV75F ;
R_LIV75P=R4LIV75P ;
R_LIV75R=R4LIV75R ;
R_LIV85=R4LIV85 ;
R_LIV85C=R4LIV85C ;
R_LIV85F=R4LIV85F ;
R_LIV85P=R4LIV85P ;
R_LIV85R=R4LIV85R ;
R_LIV8XC=R4LIV8XC ;
R_LIV8XF=R4LIV8XF ;
R_LIVBRO=R4LIVBRO ;
R_LIVPAR=R4LIVPAR ;
R_LIVSIB=R4LIVSIB ;
R_LIVSIS=R4LIVSIS ;
R_LOST=R4LOST ;
/* Empty map cell for: R_LTACTF      variable wave =  4*/ ;
/* Empty map cell for: R_LTACTN      variable wave =  4*/ ;
/* Empty map cell for: R_LTACTP      variable wave =  4*/ ;
/* Empty map cell for: R_LTACTX      variable wave =  4*/ ;
R_LTCPRM=R4LTCPRM ;
R_LUNG=R4LUNG ;
R_LUNGE=R4LUNGE ;
R_LUNGF=R4LUNGF ;
R_LUNGQ=R4LUNGQ ;
R_LUNGS=R4LUNGS ;
R_MAMMOG=R4MAMMOG ;
/* Empty map cell for: R1_MAP        variable wave =  4*/ ;
/* Empty map cell for: R2_MAP        variable wave =  4*/ ;
R_MAP=R4MAP ;
R_MAPA=R4MAPA ;
/* Empty map cell for: R_MAPW        variable wave =  4*/ ;
R_MCURLN=R4MCURLN ;
/* Empty map cell for: R_MCWV        variable wave =  4*/ ;
/* Empty map cell for: R_MCWVW       variable wave =  4*/ ;
/* Empty map cell for: R_MDACTX      variable wave =  4*/ ;
R_MDIV=R4MDIV ;
R_MEALS=R4MEALS ;
R_MEALSA=R4MEALSA ;
R_MEALSH=R4MEALSH ;
/* Empty map cell for: R_MEALSR      variable wave =  4*/ ;
/* Empty map cell for: R2_MEDS       variable wave =  4*/ ;
R_MEDS=R4MEDS ;
R_MEDSA=R4MEDSA ;
R_MEDSH=R4MEDSH ;
/* Empty map cell for: R_MEDSR       variable wave =  4*/ ;
R_MEMRY=R4MEMRY ;
R_MEMRYE=R4MEMRYE ;
/* Empty map cell for: R_MEMRYF      variable wave =  4*/ ;
R_MEMRYQ=R4MEMRYQ ;
/* Empty map cell for: R_MEMRYS      variable wave =  4*/ ;
R_MEND=R4MEND ;
R_MLEN=R4MLEN ;
R_MLENM=R4MLENM ;
R_MNEV=R4MNEV ;
R_MO=R4MO ;
R_MOBILA=R4MOBILA ;
/* Empty map cell for: R_MOBILW      variable wave =  4*/ ;
R_MOMAGE=R4MOMAGE ;
R_MOMLIV=R4MOMLIV ;
/* Empty map cell for: R2_MONEY      variable wave =  4*/ ;
R_MONEY=R4MONEY ;
R_MONEYA=R4MONEYA ;
R_MONEYH=R4MONEYH ;
/* Empty map cell for: R_MONEYR      variable wave =  4*/ ;
R_MPART=R4MPART ;
R_MRCT=R4MRCT ;
R_MRPREM=R4MRPREM ;
R_MSTAT=R4MSTAT ;
R_MSTATF=R4MSTATF ;
R_MSTATH=R4MSTATH ;
R_MSTOT=R4MSTOT ;
R_MWID=R4MWID ;
R_NHMDAY=R4NHMDAY ;
R_NHMLIV=R4NHMLIV ;
R_NHMMVM=R4NHMMVM ;
R_NHMMVY=R4NHMMVY ;
R_NOTICS=R4NOTICS ;
/* Empty map cell for: R_NOVOC       variable wave =  4*/ ;
R_NRSHOM=R4NRSHOM ;
R_NRSNIT=R4NRSNIT ;
R_NRSTIM=R4NRSTIM ;
/* Empty map cell for: R_NSSCRE      variable wave =  4*/ ;
/* Empty map cell for: R_NSSCSE      variable wave =  4*/ ;
R_OOPMD=R4OOPMD ;
R_OOPMDF=R4OOPMDF ;
/* Empty map cell for: R_OOPMDO      variable wave =  4*/ ;
/* Empty map cell for: R_OOPMDOF     variable wave =  4*/ ;
R_OUTPT=R4OUTPT ;
R_PAPSM=R4PAPSM ;
/* Empty map cell for: R_PARTD       variable wave =  4*/ ;
R_PENCT=R4PENCT ;
R_PENIC1=R4PENIC1 ;
R_PENIC2=R4PENIC2 ;
R_PENINC=R4PENINC ;
R_PENI_N=R4PENI_N ;
R_PEXIT=R4PEXIT ;
/* Empty map cell for: R2_PHONE      variable wave =  4*/ ;
R_PHONE=R4PHONE ;
R_PHONEA=R4PHONEA ;
R_PHONEH=R4PHONEH ;
/* Empty map cell for: R_PHONER      variable wave =  4*/ ;
/* Empty map cell for: R_PMBMI       variable wave =  4*/ ;
/* Empty map cell for: R_PMHGHT      variable wave =  4*/ ;
/* Empty map cell for: R_PMHGHTS     variable wave =  4*/ ;
/* Empty map cell for: R_PMWAIST     variable wave =  4*/ ;
/* Empty map cell for: R_PMWAISTC    variable wave =  4*/ ;
/* Empty map cell for: R_PMWGHT      variable wave =  4*/ ;
/* Empty map cell for: R_PMWGHTF     variable wave =  4*/ ;
/* Empty map cell for: R_PMWGHTS     variable wave =  4*/ ;
R_PNHM5Y=R4PNHM5Y ;
R_PRCHMEM=R4PRCHMEM ;
R_PRES=R4PRES ;
R_PRMEM=R4PRMEM ;
R_PROST=R4PROST ;
R_PROXY=R4PROXY ;
R_PRPCNT=R4PRPCNT ;
R_PRPRM1=R4PRPRM1 ;
R_PRPRM2=R4PRPRM2 ;
/* Empty map cell for: R_PRPRM3      variable wave =  4*/ ;
R_PRSRC1=R4PRSRC1 ;
R_PRSRC2=R4PRSRC2 ;
/* Empty map cell for: R_PRSRC3      variable wave =  4*/ ;
R_PSTMEM=R4PSTMEM ;
R_PSYCH=R4PSYCH ;
R_PSYCHE=R4PSYCHE ;
R_PSYCHF=R4PSYCHF ;
R_PSYCHQ=R4PSYCHQ ;
R_PSYCHS=R4PSYCHS ;
R_PTYP1=R4PTYP1 ;
R_PTYP2=R4PTYP2 ;
R_PTYP3=R4PTYP3 ;
/* Empty map cell for: R_PTYP4       variable wave =  4*/ ;
/* Empty map cell for: R_PTYPD1      variable wave =  4*/ ;
/* Empty map cell for: R_PTYPD2      variable wave =  4*/ ;
/* Empty map cell for: R_PTYPD3      variable wave =  4*/ ;
/* Empty map cell for: R_PTYPD4      variable wave =  4*/ ;
/* Empty map cell for: R_PTYPF1      variable wave =  4*/ ;
/* Empty map cell for: R_PTYPF2      variable wave =  4*/ ;
/* Empty map cell for: R_PTYPF3      variable wave =  4*/ ;
/* Empty map cell for: R_PTYPF4      variable wave =  4*/ ;
/* Empty map cell for: R_PUFF        variable wave =  4*/ ;
/* Empty map cell for: R_PUFFPOS     variable wave =  4*/ ;
/* Empty map cell for: R1_PUSH       variable wave =  4*/ ;
/* Empty map cell for: R2_PUSH       variable wave =  4*/ ;
R_PUSH=R4PUSH ;
R_PUSHA=R4PUSHA ;
/* Empty map cell for: R_PUSHW       variable wave =  4*/ ;
R_RETDTWV=R4RETDTWV ;
R_RETEMP=R4RETEMP ;
/* Empty map cell for: R_RETINC      variable wave =  4*/ ;
/* Empty map cell for: R_RETLIV      variable wave =  4*/ ;
R_RETMON=R4RETMON ;
R_RETSAT=R4RETSAT ;
/* Empty map cell for: R_RETWLT      variable wave =  4*/ ;
/* Empty map cell for: R_RETWRK      variable wave =  4*/ ;
/* Empty map cell for: R_RETWSP      variable wave =  4*/ ;
R_RETYR=R4RETYR ;
R_RISK=R4RISK ;
R_RISK6=R4RISK6 ;
R_RPLNYA=R4RPLNYA ;
R_RPLNYR=R4RPLNYR ;
/* Empty map cell for: R_RXPREM      variable wave =  4*/ ;
R_RYRCMP=R4RYRCMP ;
R_SADLF=R4SADLF ;
R_SAMEJOB=R4SAMEJOB ;
R_SAMEMP=R4SAMEMP ;
R_SAYRET=R4SAYRET ;
R_SCIS=R4SCIS ;
/* Empty map cell for: R_SDIAPL      variable wave =  4*/ ;
/* Empty map cell for: R_SDIAPLM     variable wave =  4*/ ;
/* Empty map cell for: R_SDIAPLY     variable wave =  4*/ ;
/* Empty map cell for: R_SDIAPP      variable wave =  4*/ ;
/* Empty map cell for: R_SDIAPPM     variable wave =  4*/ ;
/* Empty map cell for: R_SDIAPPY     variable wave =  4*/ ;
/* Empty map cell for: R_SDIDEN      variable wave =  4*/ ;
/* Empty map cell for: R_SDIREC      variable wave =  4*/ ;
/* Empty map cell for: R_SDIRECM     variable wave =  4*/ ;
/* Empty map cell for: R_SDIRECY     variable wave =  4*/ ;
/* Empty map cell for: R_SDISTP      variable wave =  4*/ ;
/* Empty map cell for: R_SDISTPM     variable wave =  4*/ ;
/* Empty map cell for: R_SDISTPY     variable wave =  4*/ ;
R_SER7=R4SER7 ;
R_SHLT=R4SHLT ;
R_SHLTC=R4SHLTC ;
R_SHLTCF=R4SHLTCF ;
R_SHOP=R4SHOP ;
R_SHOPA=R4SHOPA ;
R_SHOPH=R4SHOPH ;
/* Empty map cell for: R_SHOPR       variable wave =  4*/ ;
/* Empty map cell for: R1_SIT        variable wave =  4*/ ;
/* Empty map cell for: R2_SIT        variable wave =  4*/ ;
R_SIT=R4SIT ;
R_SITA=R4SITA ;
/* Empty map cell for: R_SITW        variable wave =  4*/ ;
/* Empty map cell for: R_SLEEP       variable wave =  4*/ ;
/* Empty map cell for: R_SLEEPE      variable wave =  4*/ ;
/* Empty map cell for: R_SLEEPQ      variable wave =  4*/ ;
R_SLEEPR=R4SLEEPR ;
/* Empty map cell for: R_SLEEPS      variable wave =  4*/ ;
/* Empty map cell for: R_SLEEPX      variable wave =  4*/ ;
R_SLFEMP=R4SLFEMP ;
R_SLFMEM=R4SLFMEM ;
R_SMOKEN=R4SMOKEN ;
R_SMOKEV=R4SMOKEV ;
R_SPCFAC=R4SPCFAC ;
R_SSAPL=R4SSAPL ;
R_SSAPLM=R4SSAPLM ;
R_SSAPLY=R4SSAPLY ;
R_SSAPP=R4SSAPP ;
R_SSAPPM=R4SSAPPM ;
R_SSAPPY=R4SSAPPY ;
R_SSDEN=R4SSDEN ;
R_SSDI=R4SSDI ;
/* Empty map cell for: R_SSIAPL      variable wave =  4*/ ;
/* Empty map cell for: R_SSIAPLM     variable wave =  4*/ ;
/* Empty map cell for: R_SSIAPLY     variable wave =  4*/ ;
/* Empty map cell for: R_SSIAPP      variable wave =  4*/ ;
/* Empty map cell for: R_SSIAPPM     variable wave =  4*/ ;
/* Empty map cell for: R_SSIAPPY     variable wave =  4*/ ;
/* Empty map cell for: R_SSIDEN      variable wave =  4*/ ;
/* Empty map cell for: R_SSIREC      variable wave =  4*/ ;
/* Empty map cell for: R_SSIRECM     variable wave =  4*/ ;
/* Empty map cell for: R_SSIRECY     variable wave =  4*/ ;
/* Empty map cell for: R_SSISTP      variable wave =  4*/ ;
/* Empty map cell for: R_SSISTPM     variable wave =  4*/ ;
/* Empty map cell for: R_SSISTPY     variable wave =  4*/ ;
R_SSREC=R4SSREC ;
R_SSRECM=R4SSRECM ;
R_SSRECY=R4SSRECY ;
R_SSSTP=R4SSSTP ;
R_SSSTPM=R4SSSTPM ;
R_SSSTPY=R4SSSTPY ;
R_SSWRER=R4SSWRER ;
R_SSWRNR=R4SSWRNR ;
R_SSWRXA=R4SSWRXA ;
/* Empty map cell for: R_SSWSER      variable wave =  4*/ ;
/* Empty map cell for: R_SSWSNR      variable wave =  4*/ ;
/* Empty map cell for: R_SSWSXA      variable wave =  4*/ ;
R_STATUS=R4STATUS ;
/* Empty map cell for: R1_STOOP      variable wave =  4*/ ;
/* Empty map cell for: R2_STOOP      variable wave =  4*/ ;
R_STOOP=R4STOOP ;
R_STOOPA=R4STOOPA ;
/* Empty map cell for: R_STOOPW      variable wave =  4*/ ;
R_STROK=R4STROK ;
R_STROKE=R4STROKE ;
R_STROKF=R4STROKF ;
R_STROKQ=R4STROKQ ;
R_STROKS=R4STROKS ;
/* Empty map cell for: R_TIMWLK      variable wave =  4*/ ;
/* Empty map cell for: R_TIMWLKA     variable wave =  4*/ ;
/* Empty map cell for: R_TLIPRM      variable wave =  4*/ ;
/* Empty map cell for: R2_TOILT      variable wave =  4*/ ;
R_TOILT=R4TOILT ;
R_TOILTA=R4TOILTA ;
/* Empty map cell for: R2_TOILTH     variable wave =  4*/ ;
R_TOILTH=R4TOILTH ;
R_TOTMBF=R4TOTMBF ;
R_TOTMBI=R4TOTMBI ;
/* Empty map cell for: R_TOTMD       variable wave =  4*/ ;
/* Empty map cell for: R_TOTMDF      variable wave =  4*/ ;
R_TR20=R4TR20 ;
/* Empty map cell for: R_TR40        variable wave =  4*/ ;
R_TYLTC=R4TYLTC ;
/* Empty map cell for: R_ULCER       variable wave =  4*/ ;
R_UNEMP=R4UNEMP ;
R_UNION=R4UNION ;
R_UNIONF=R4UNIONF ;
/* Empty map cell for: R_VGACTF      variable wave =  4*/ ;
/* Empty map cell for: R_VGACTN      variable wave =  4*/ ;
/* Empty map cell for: R_VGACTP      variable wave =  4*/ ;
/* Empty map cell for: R_VGACTX      variable wave =  4*/ ;
R_VIGACT=R4VIGACT ;
R_VOCAB=R4VOCAB ;
R_VP=R4VP ;
/* Empty map cell for: R1_WALK1      variable wave =  4*/ ;
/* Empty map cell for: R2_WALK1      variable wave =  4*/ ;
R_WALK1=R4WALK1 ;
R_WALK1A=R4WALK1A ;
/* Empty map cell for: R_WALK1W      variable wave =  4*/ ;
/* Empty map cell for: R1_WALKR      variable wave =  4*/ ;
/* Empty map cell for: R2_WALKR      variable wave =  4*/ ;
R_WALKR=R4WALKR ;
R_WALKRA=R4WALKRA ;
R_WALKRE=R4WALKRE ;
/* Empty map cell for: R2_WALKRH     variable wave =  4*/ ;
R_WALKRH=R4WALKRH ;
/* Empty map cell for: R_WALKRW      variable wave =  4*/ ;
/* Empty map cell for: R1_WALKS      variable wave =  4*/ ;
/* Empty map cell for: R2_WALKS      variable wave =  4*/ ;
R_WALKS=R4WALKS ;
R_WALKSA=R4WALKSA ;
/* Empty map cell for: R_WALKSW      variable wave =  4*/ ;
R_WANDER=R4WANDER ;
R_WEIGHT=R4WEIGHT ;
R_WGFHR=R4WGFHR ;
R_WGFWK=R4WGFWK ;
R_WGIHR=R4WGIHR ;
R_WGIWK=R4WGIWK ;
/* Empty map cell for: R_WHAPPX      variable wave =  4*/ ;
R_WHAPPY=R4WHAPPY ;
/* Empty map cell for: R_WLIPRM      variable wave =  4*/ ;
R_WORK=R4WORK ;
R_WORK2=R4WORK2 ;
R_WORK62=R4WORK62 ;
R_WORK62F=R4WORK62F ;
R_WORK65=R4WORK65 ;
R_WORK65F=R4WORK65F ;
/* Empty map cell for: R_WORK70      variable wave =  4*/ ;
/* Empty map cell for: R_WORK70A     variable wave =  4*/ ;
/* Empty map cell for: R_WORK70AF    variable wave =  4*/ ;
/* Empty map cell for: R_WORK70F     variable wave =  4*/ ;
R_WORKLM=R4WORKLM ;
R_WTCRNH=R4WTCRNH ;
R_WTHH=R4WTHH ;
R_WTRESP=R4WTRESP ;
/* Empty map cell for: R_WTR_NH      variable wave =  4*/ ;
R_YR=R4YR ;
if inw=1 then output ;
%put --- Rlong table ;
%initvars ;
%put ---- Rlong table ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
WAVE_NUMBER=5 ;
H_HHIDC=H5HHIDC ;
SUBHH= substr(H_HHIDC,7)     /* --- Derived variable  */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
INW=INW5 ;
WAVE_NAME=  'hrs_wave'||strip(put(wave_number,3.))     /* --- Derived variable  */ ;
CYEAR='yr2000' ;
/* --- RAND variable:HACOHORT  included */ ;
studyyr= hrs_studyyr(wave_number,
hacohort)     /* --- Derived variable  */ ;
H_HHID=H5HHID ;
S_HHIDPN=S5HHIDPN ;
/* Empty map cell for: R_ACGTOT      variable wave =  5*/ ;
R_ADL5A=R5ADL5A ;
R_ADL5H=R5ADL5H ;
R_ADL6A=R5ADL6A ;
R_ADL6H=R5ADL6H ;
/* Empty map cell for: R_ADLR10      variable wave =  5*/ ;
/* Empty map cell for: R_ADLW        variable wave =  5*/ ;
R_AGEM_B=R5AGEM_B ;
R_AGEM_E=R5AGEM_E ;
R_AGEM_M=R5AGEM_M ;
R_AGEY_B=R5AGEY_B ;
R_AGEY_E=R5AGEY_E ;
R_AGEY_M=R5AGEY_M ;
/* Empty map cell for: R_AIMR10      variable wave =  5*/ ;
R_ALONE=R5ALONE ;
/* Empty map cell for: R_ALZHE       variable wave =  5*/ ;
/* Empty map cell for: R_ALZHEE      variable wave =  5*/ ;
/* Empty map cell for: R_ALZHEF      variable wave =  5*/ ;
/* Empty map cell for: R_ALZHEQ      variable wave =  5*/ ;
/* Empty map cell for: R_ALZHES      variable wave =  5*/ ;
/* Empty map cell for: R_AMSTOT      variable wave =  5*/ ;
R_ANS3PQ=R5ANS3PQ ;
/* Empty map cell for: R1_ARMS       variable wave =  5*/ ;
/* Empty map cell for: R2_ARMS       variable wave =  5*/ ;
R_ARMS=R5ARMS ;
R_ARMSA=R5ARMSA ;
/* Empty map cell for: R_ARMSW       variable wave =  5*/ ;
R_ARTHR=R5ARTHR ;
R_ARTHRE=R5ARTHRE ;
R_ARTHRF=R5ARTHRF ;
R_ARTHRQ=R5ARTHRQ ;
R_ARTHRS=R5ARTHRS ;
/* Empty map cell for: R_ATR20       variable wave =  5*/ ;
R_BACK=R5BACK ;
/* Empty map cell for: R_BALFUL      variable wave =  5*/ ;
/* Empty map cell for: R_BALFULC     variable wave =  5*/ ;
/* Empty map cell for: R_BALFULT     variable wave =  5*/ ;
/* Empty map cell for: R_BALSBS      variable wave =  5*/ ;
/* Empty map cell for: R_BALSBSC     variable wave =  5*/ ;
/* Empty map cell for: R_BALSEMI     variable wave =  5*/ ;
/* Empty map cell for: R_BALSEMIC    variable wave =  5*/ ;
/* Empty map cell for: R1_BATH       variable wave =  5*/ ;
/* Empty map cell for: R2_BATH       variable wave =  5*/ ;
R_BATH=R5BATH ;
R_BATHA=R5BATHA ;
/* Empty map cell for: R2_BATHH      variable wave =  5*/ ;
R_BATHH=R5BATHH ;
/* Empty map cell for: R_BATHW       variable wave =  5*/ ;
/* Empty map cell for: R1_BED        variable wave =  5*/ ;
/* Empty map cell for: R2_BED        variable wave =  5*/ ;
R_BED=R5BED ;
R_BEDA=R5BEDA ;
R_BEDE=R5BEDE ;
/* Empty map cell for: R2_BEDH       variable wave =  5*/ ;
R_BEDH=R5BEDH ;
/* Empty map cell for: R_BEDW        variable wave =  5*/ ;
R_BEQ100=R5BEQ100 ;
R_BEQ10K=R5BEQ10K ;
/* Empty map cell for: R_BEQ500      variable wave =  5*/ ;
R_BEQANY=R5BEQANY ;
/* Empty map cell for: R_BEQLRG      variable wave =  5*/ ;
R_BMI=R5BMI ;
/* Empty map cell for: R_BPDIA       variable wave =  5*/ ;
/* Empty map cell for: R_BPPOS       variable wave =  5*/ ;
/* Empty map cell for: R_BPPULS      variable wave =  5*/ ;
/* Empty map cell for: R_BPSYS       variable wave =  5*/ ;
R_BREAST=R5BREAST ;
R_BWC20=R5BWC20 ;
R_BWC86=R5BWC86 ;
R_CACT=R5CACT ;
/* Empty map cell for: R1_CALC       variable wave =  5*/ ;
/* Empty map cell for: R2_CALC       variable wave =  5*/ ;
/* Empty map cell for: R_CALCA       variable wave =  5*/ ;
/* Empty map cell for: R_CALCW       variable wave =  5*/ ;
R_CANCR=R5CANCR ;
R_CANCRE=R5CANCRE ;
R_CANCRF=R5CANCRF ;
R_CANCRQ=R5CANCRQ ;
R_CANCRS=R5CANCRS ;
R_CENDIV=R5CENDIV ;
R_CENREG=R5CENREG ;
R_CESD=R5CESD ;
R_CESDM=R5CESDM ;
/* Empty map cell for: R1_CHAIR      variable wave =  5*/ ;
/* Empty map cell for: R2_CHAIR      variable wave =  5*/ ;
R_CHAIR=R5CHAIR ;
R_CHAIRA=R5CHAIRA ;
/* Empty map cell for: R_CHAIRW      variable wave =  5*/ ;
R_CHOLST=R5CHOLST ;
/* Empty map cell for: R_CLAIMED     variable wave =  5*/ ;
/* Empty map cell for: R1_CLIM1      variable wave =  5*/ ;
/* Empty map cell for: R2_CLIM1      variable wave =  5*/ ;
R_CLIM1=R5CLIM1 ;
R_CLIM1A=R5CLIM1A ;
/* Empty map cell for: R_CLIM1W      variable wave =  5*/ ;
/* Empty map cell for: R1_CLIMS      variable wave =  5*/ ;
/* Empty map cell for: R2_CLIMS      variable wave =  5*/ ;
R_CLIMS=R5CLIMS ;
R_CLIMSA=R5CLIMSA ;
/* Empty map cell for: R_CLIMSW      variable wave =  5*/ ;
R_COGTOT=R5COGTOT ;
/* Empty map cell for: R_COMP        variable wave =  5*/ ;
/* Empty map cell for: R_COMPW       variable wave =  5*/ ;
R_CONDE=R5CONDE ;
R_CONDEF=R5CONDEF ;
R_CONDS=R5CONDS ;
R_CONDSF=R5CONDSF ;
R_CONDSP=R5CONDSP ;
R_COVR=R5COVR ;
R_COVRT=R5COVRT ;
R_COVS=R5COVS ;
R_DADAGE=R5DADAGE ;
R_DADLIV=R5DADLIV ;
R_DCBAL1=R5DCBAL1 ;
R_DCBAL2=R5DCBAL2 ;
R_DCBAL3=R5DCBAL3 ;
R_DCBAL4=R5DCBAL4 ;
R_DCBENE1=R5DCBENE1 ;
R_DCBENE2=R5DCBENE2 ;
R_DCBENE3=R5DCBENE3 ;
R_DCBENE4=R5DCBENE4 ;
R_DCCONT1=R5DCCONT1 ;
R_DCCONT2=R5DCCONT2 ;
R_DCCONT3=R5DCCONT3 ;
R_DCCONT4=R5DCCONT4 ;
R_DCMODE1=R5DCMODE1 ;
R_DCMODE2=R5DCMODE2 ;
R_DCMODE3=R5DCMODE3 ;
R_DCMODE4=R5DCMODE4 ;
R_DCPCT1=R5DCPCT1 ;
R_DCPCT2=R5DCPCT2 ;
R_DCPCT3=R5DCPCT3 ;
R_DCPCT4=R5DCPCT4 ;
/* Empty map cell for: R_DEMEN       variable wave =  5*/ ;
/* Empty map cell for: R_DEMENE      variable wave =  5*/ ;
/* Empty map cell for: R_DEMENF      variable wave =  5*/ ;
/* Empty map cell for: R_DEMENQ      variable wave =  5*/ ;
/* Empty map cell for: R_DEMENS      variable wave =  5*/ ;
R_DENTST=R5DENTST ;
R_DEPRES=R5DEPRES ;
/* Empty map cell for: R_DEPREX      variable wave =  5*/ ;
R_DIAB=R5DIAB ;
R_DIABE=R5DIABE ;
R_DIABF=R5DIABF ;
R_DIABQ=R5DIABQ ;
R_DIABS=R5DIABS ;
/* Empty map cell for: R1_DIME       variable wave =  5*/ ;
/* Empty map cell for: R2_DIME       variable wave =  5*/ ;
R_DIME=R5DIME ;
R_DIMEA=R5DIMEA ;
/* Empty map cell for: R_DIMEW       variable wave =  5*/ ;
R_DLRC=R5DLRC ;
/* Empty map cell for: R_DLRC20      variable wave =  5*/ ;
R_DOCTIM=R5DOCTIM ;
R_DOCTOR=R5DOCTOR ;
/* Empty map cell for: R1_DRESS      variable wave =  5*/ ;
/* Empty map cell for: R2_DRESS      variable wave =  5*/ ;
R_DRESS=R5DRESS ;
R_DRESSA=R5DRESSA ;
/* Empty map cell for: R2_DRESSH     variable wave =  5*/ ;
R_DRESSH=R5DRESSH ;
/* Empty map cell for: R_DRESSW      variable wave =  5*/ ;
R_DRINK=R5DRINK ;
R_DRINKD=R5DRINKD ;
R_DRINKN=R5DRINKN ;
/* Empty map cell for: R_DRINKR      variable wave =  5*/ ;
R_DRUGS=R5DRUGS ;
R_DSIAMT=R5DSIAMT ;
R_DSSAMT=R5DSSAMT ;
R_DSTAT=R5DSTAT ;
R_DW=R5DW ;
R_DY=R5DY ;
/* Empty map cell for: R1_EAT        variable wave =  5*/ ;
/* Empty map cell for: R2_EAT        variable wave =  5*/ ;
R_EAT=R5EAT ;
R_EATA=R5EATA ;
/* Empty map cell for: R2_EATH       variable wave =  5*/ ;
R_EATH=R5EATH ;
/* Empty map cell for: R_EATW        variable wave =  5*/ ;
R_EFFORT=R5EFFORT ;
/* Empty map cell for: R_EFFORX      variable wave =  5*/ ;
R_ENLIFE=R5ENLIFE ;
/* Empty map cell for: R_ENLIFX      variable wave =  5*/ ;
R_FAMR=R5FAMR ;
R_FBWC20=R5FBWC20 ;
R_FBWC86=R5FBWC86 ;
R_FCACT=R5FCACT ;
R_FDLRC=R5FDLRC ;
R_FDW=R5FDW ;
R_FDY=R5FDY ;
R_FIMRC=R5FIMRC ;
R_FINEA=R5FINEA ;
R_FINPLN=R5FINPLN ;
R_FINR=R5FINR ;
/* Empty map cell for: R_FLAG        variable wave =  5*/ ;
R_FLONE=R5FLONE ;
/* Empty map cell for: R_FLONEX      variable wave =  5*/ ;
R_FLUSHT=R5FLUSHT ;
R_FMO=R5FMO ;
R_FPRES=R5FPRES ;
R_FPSTME=R5FPSTME ;
R_FSAD=R5FSAD ;
/* Empty map cell for: R_FSADX       variable wave =  5*/ ;
R_FSCIS=R5FSCIS ;
R_FSER7=R5FSER7 ;
R_FSIZE=R5FSIZE ;
R_FSIZEF=R5FSIZEF ;
R_FSLFME=R5FSLFME ;
R_FVOCAB=R5FVOCAB ;
R_FVP=R5FVP ;
R_FYR=R5FYR ;
R_GOING=R5GOING ;
/* Empty map cell for: R_GOINGX      variable wave =  5*/ ;
R_GOVMD=R5GOVMD ;
R_GOVMR=R5GOVMR ;
/* Empty map cell for: R_GOVOT       variable wave =  5*/ ;
R_GOVVA=R5GOVVA ;
R_GROSSA=R5GROSSA ;
/* Empty map cell for: R_GRP         variable wave =  5*/ ;
/* Empty map cell for: R_GRPDOM      variable wave =  5*/ ;
/* Empty map cell for: R_GRPL        variable wave =  5*/ ;
/* Empty map cell for: R_GRPPOS      variable wave =  5*/ ;
/* Empty map cell for: R_GRPR        variable wave =  5*/ ;
R_HALUC=R5HALUC ;
/* Empty map cell for: R_HDLR20      variable wave =  5*/ ;
R_HEART=R5HEART ;
R_HEARTE=R5HEARTE ;
R_HEARTF=R5HEARTF ;
R_HEARTQ=R5HEARTQ ;
R_HEARTS=R5HEARTS ;
R_HECOV1=R5HECOV1 ;
/* Empty map cell for: R_HECOV2      variable wave =  5*/ ;
/* Empty map cell for: R_HECOV3      variable wave =  5*/ ;
R_HEIGHT=R5HEIGHT ;
R_HENUM=R5HENUM ;
R_HERET=R5HERET ;
R_HERTR1=R5HERTR1 ;
/* Empty map cell for: R_HERTR2      variable wave =  5*/ ;
/* Empty map cell for: R_HERTR3      variable wave =  5*/ ;
R_HERTS1=R5HERTS1 ;
/* Empty map cell for: R_HERTS2      variable wave =  5*/ ;
/* Empty map cell for: R_HERTS3      variable wave =  5*/ ;
R_HESRC1=R5HESRC1 ;
/* Empty map cell for: R_HESRC2      variable wave =  5*/ ;
/* Empty map cell for: R_HESRC3      variable wave =  5*/ ;
R_HIBP=R5HIBP ;
R_HIBPE=R5HIBPE ;
R_HIBPF=R5HIBPF ;
R_HIBPQ=R5HIBPQ ;
R_HIBPS=R5HIBPS ;
R_HIGOV=R5HIGOV ;
R_HILTC=R5HILTC ;
/* Empty map cell for: R_HIMR20      variable wave =  5*/ ;
R_HIOTHP=R5HIOTHP ;
R_HLPDYSF=R5HLPDYSF ;
R_HLPDYSNF=R5HLPDYSNF ;
R_HLPDYSP=R5HLPDYSP ;
R_HLPDYST=R5HLPDYST ;
R_HLPDYSU=R5HLPDYSU ;
R_HLPHRSF=R5HLPHRSF ;
R_HLPHRSNF=R5HLPHRSNF ;
R_HLPHRSP=R5HLPHRSP ;
R_HLPHRST=R5HLPHRST ;
R_HLPHRSU=R5HLPHRSU ;
R_HLPPDFA=R5HLPPDFA ;
R_HLPPDFN=R5HLPPDFN ;
R_HLPPDNFA=R5HLPPDNFA ;
R_HLPPDNFN=R5HLPPDNFN ;
R_HLPPDTA=R5HLPPDTA ;
R_HLPPDTN=R5HLPPDTN ;
R_HLPRFN=R5HLPRFN ;
R_HLPRNFN=R5HLPRNFN ;
R_HLPRPN=R5HLPRPN ;
R_HLPRTN=R5HLPRTN ;
R_HLPRUN=R5HLPRUN ;
R_HLTC3=R5HLTC3 ;
R_HLTC5=R5HLTC5 ;
R_HLTC5F=R5HLTC5F ;
R_HLTHLM=R5HLTHLM ;
R_HOMCAR=R5HOMCAR ;
R_HOSP=R5HOSP ;
R_HSPNIT=R5HSPNIT ;
R_HSPTIM=R5HSPTIM ;
/* Empty map cell for: R_HSWRKF      variable wave =  5*/ ;
/* Empty map cell for: R_HTR40       variable wave =  5*/ ;
R_IADL5A=R5IADL5A ;
R_IADL5H=R5IADL5H ;
R_IANN=R5IANN ;
R_IEARN=R5IEARN ;
R_IFANN=R5IFANN ;
R_IFEARN=R5IFEARN ;
R_IFGXFR=R5IFGXFR ;
R_IFIRAW=R5IFIRAW ;
/* Empty map cell for: R_IFIRAWY1    variable wave =  5*/ ;
R_IFPEN=R5IFPEN ;
R_IFPENA=R5IFPENA ;
R_IFSDI=R5IFSDI ;
R_IFSRET=R5IFSRET ;
R_IFSSDI=R5IFSSDI ;
/* Empty map cell for: R_IFSSI       variable wave =  5*/ ;
R_IFUNEM=R5IFUNEM ;
R_IFUNWC=R5IFUNWC ;
R_IFWCMP=R5IFWCMP ;
R_IGXFR=R5IGXFR ;
R_IIRAW=R5IIRAW ;
R_IIRAWY1=R5IIRAWY1 ;
R_IMRC=R5IMRC ;
/* Empty map cell for: R_IMRC20      variable wave =  5*/ ;
R_INHER=R5INHER ;
R_INHPE=R5INHPE ;
R_INHPFN=R5INHPFN ;
R_INHPNFN=R5INHPNFN ;
R_INHPPN=R5INHPPN ;
R_INHPTN=R5INHPTN ;
R_INHPUN=R5INHPUN ;
R_INLBRF=R5INLBRF ;
R_IPEN=R5IPEN ;
R_IPENA=R5IPENA ;
R_ISDI=R5ISDI ;
R_ISRET=R5ISRET ;
R_ISSDI=R5ISSDI ;
R_ISSI=R5ISSI ;
R_IUNEM=R5IUNEM ;
R_IUNWC=R5IUNWC ;
R_IWBEG=R5IWBEG ;
/* Empty map cell for: R_IWBEGF      variable wave =  5*/ ;
R_IWCMP=R5IWCMP ;
R_IWEND=R5IWEND ;
/* Empty map cell for: R_IWENDF      variable wave =  5*/ ;
R_IWENDM=R5IWENDM ;
R_IWENDY=R5IWENDY ;
R_IWMID=R5IWMID ;
R_IWMIDF=R5IWMIDF ;
R_IWSTAT=R5IWSTAT ;
R_JCIND=R5JCIND ;
/* Empty map cell for: R_JCINDB      variable wave =  5*/ ;
/* Empty map cell for: R_JCINDC      variable wave =  5*/ ;
R_JCOCC=R5JCOCC ;
R_JCOCCA=R5JCOCCA ;
/* Empty map cell for: R_JCOCCB      variable wave =  5*/ ;
/* Empty map cell for: R_JCOCCC      variable wave =  5*/ ;
R_JCPEN=R5JCPEN ;
R_JCPENF=R5JCPENF ;
R_JCTEN=R5JCTEN ;
R_JHOUR2=R5JHOUR2 ;
R_JHOURS=R5JHOURS ;
R_JJOBS=R5JJOBS ;
R_JLASTM=R5JLASTM ;
R_JLASTY=R5JLASTY ;
R_JLIFT=R5JLIFT ;
R_JLIND=R5JLIND ;
/* Empty map cell for: R_JLINDB      variable wave =  5*/ ;
/* Empty map cell for: R_JLINDC      variable wave =  5*/ ;
R_JLMIS=R5JLMIS ;
R_JLOCC=R5JLOCC ;
R_JLOCCA=R5JLOCCA ;
/* Empty map cell for: R_JLOCCB      variable wave =  5*/ ;
/* Empty map cell for: R_JLOCCC      variable wave =  5*/ ;
R_JLTEN=R5JLTEN ;
R_JLTENF=R5JLTENF ;
R_JMISS=R5JMISS ;
R_JNJOB=R5JNJOB ;
R_JNJOB5=R5JNJOB5 ;
/* Empty map cell for: R1_JOG        variable wave =  5*/ ;
/* Empty map cell for: R2_JOG        variable wave =  5*/ ;
R_JOG=R5JOG ;
R_JOGA=R5JOGA ;
/* Empty map cell for: R_JOGW        variable wave =  5*/ ;
R_JPHYS=R5JPHYS ;
R_JSIGHT=R5JSIGHT ;
R_JSTOOP=R5JSTOOP ;
R_JSTRES=R5JSTRES ;
R_JWEEK2=R5JWEEK2 ;
R_JWEEKS=R5JWEEKS ;
R_JYEARM=R5JYEARM ;
R_JYEARS=R5JYEARS ;
/* Empty map cell for: R_LBAGR       variable wave =  5*/ ;
/* Empty map cell for: R_LBASSISTPRB variable wave =  5*/ ;
/* Empty map cell for: R_LBCOMP      variable wave =  5*/ ;
/* Empty map cell for: R_LBCON10     variable wave =  5*/ ;
/* Empty map cell for: R_LBCON5      variable wave =  5*/ ;
/* Empty map cell for: R_LBELIG      variable wave =  5*/ ;
/* Empty map cell for: R_LBEXT       variable wave =  5*/ ;
/* Empty map cell for: R_LBFAMDRUGPRBvariable wave =  5*/ ;
/* Empty map cell for: R_LBFAMHLTHPRBvariable wave =  5*/ ;
/* Empty map cell for: R_LBFINPRB    variable wave =  5*/ ;
/* Empty map cell for: R_LBHLTHPRB   variable wave =  5*/ ;
/* Empty map cell for: R_LBHOUSEPRB  variable wave =  5*/ ;
/* Empty map cell for: R_LBLONELY11  variable wave =  5*/ ;
/* Empty map cell for: R_LBLONELY3   variable wave =  5*/ ;
/* Empty map cell for: R_LBNEGAFFECT variable wave =  5*/ ;
/* Empty map cell for: R_LBNEGAFFECT6variable wave =  5*/ ;
/* Empty map cell for: R_LBNEUR      variable wave =  5*/ ;
/* Empty map cell for: R_LBONCHRSTR  variable wave =  5*/ ;
/* Empty map cell for: R_LBOPEN      variable wave =  5*/ ;
/* Empty map cell for: R_LBPOSAFFECT variable wave =  5*/ ;
/* Empty map cell for: R_LBPOSAFFECT6variable wave =  5*/ ;
R_LBRF=R5LBRF ;
R_LBRFH=R5LBRFH ;
R_LBRFY=R5LBRFY ;
/* Empty map cell for: R_LBRLTNSHPRB variable wave =  5*/ ;
/* Empty map cell for: R_LBSATCITY   variable wave =  5*/ ;
/* Empty map cell for: R_LBSATFAM    variable wave =  5*/ ;
/* Empty map cell for: R_LBSATFIN    variable wave =  5*/ ;
/* Empty map cell for: R_LBSATHLTH   variable wave =  5*/ ;
/* Empty map cell for: R_LBSATHOME   variable wave =  5*/ ;
/* Empty map cell for: R_LBSATINC    variable wave =  5*/ ;
/* Empty map cell for: R_LBSATLEISUREvariable wave =  5*/ ;
/* Empty map cell for: R_LBSATLIFE   variable wave =  5*/ ;
/* Empty map cell for: R_LBSATWLF    variable wave =  5*/ ;
/* Empty map cell for: R_LBWGTR      variable wave =  5*/ ;
/* Empty map cell for: R_LBWORKPRB   variable wave =  5*/ ;
R_LGMUSA=R5LGMUSA ;
/* Empty map cell for: R_LGMUSW      variable wave =  5*/ ;
/* Empty map cell for: R_LHTACT      variable wave =  5*/ ;
R_LIFEIN=R5LIFEIN ;
/* Empty map cell for: R1_LIFT       variable wave =  5*/ ;
/* Empty map cell for: R2_LIFT       variable wave =  5*/ ;
R_LIFT=R5LIFT ;
R_LIFTA=R5LIFTA ;
/* Empty map cell for: R_LIFTW       variable wave =  5*/ ;
R_LIV10=R5LIV10 ;
R_LIV10A=R5LIV10A ;
R_LIV10P=R5LIV10P ;
R_LIV10R=R5LIV10R ;
R_LIV75=R5LIV75 ;
R_LIV75C=R5LIV75C ;
R_LIV75F=R5LIV75F ;
R_LIV75P=R5LIV75P ;
R_LIV75R=R5LIV75R ;
/* Empty map cell for: R_LIV85       variable wave =  5*/ ;
/* Empty map cell for: R_LIV85C      variable wave =  5*/ ;
/* Empty map cell for: R_LIV85F      variable wave =  5*/ ;
/* Empty map cell for: R_LIV85P      variable wave =  5*/ ;
/* Empty map cell for: R_LIV85R      variable wave =  5*/ ;
R_LIV8XC=R5LIV8XC ;
R_LIV8XF=R5LIV8XF ;
R_LIVBRO=R5LIVBRO ;
R_LIVPAR=R5LIVPAR ;
R_LIVSIB=R5LIVSIB ;
R_LIVSIS=R5LIVSIS ;
R_LOST=R5LOST ;
/* Empty map cell for: R_LTACTF      variable wave =  5*/ ;
/* Empty map cell for: R_LTACTN      variable wave =  5*/ ;
/* Empty map cell for: R_LTACTP      variable wave =  5*/ ;
/* Empty map cell for: R_LTACTX      variable wave =  5*/ ;
R_LTCPRM=R5LTCPRM ;
R_LUNG=R5LUNG ;
R_LUNGE=R5LUNGE ;
R_LUNGF=R5LUNGF ;
R_LUNGQ=R5LUNGQ ;
R_LUNGS=R5LUNGS ;
R_MAMMOG=R5MAMMOG ;
/* Empty map cell for: R1_MAP        variable wave =  5*/ ;
/* Empty map cell for: R2_MAP        variable wave =  5*/ ;
R_MAP=R5MAP ;
R_MAPA=R5MAPA ;
/* Empty map cell for: R_MAPW        variable wave =  5*/ ;
R_MCURLN=R5MCURLN ;
/* Empty map cell for: R_MCWV        variable wave =  5*/ ;
/* Empty map cell for: R_MCWVW       variable wave =  5*/ ;
/* Empty map cell for: R_MDACTX      variable wave =  5*/ ;
R_MDIV=R5MDIV ;
R_MEALS=R5MEALS ;
R_MEALSA=R5MEALSA ;
R_MEALSH=R5MEALSH ;
/* Empty map cell for: R_MEALSR      variable wave =  5*/ ;
/* Empty map cell for: R2_MEDS       variable wave =  5*/ ;
R_MEDS=R5MEDS ;
R_MEDSA=R5MEDSA ;
R_MEDSH=R5MEDSH ;
/* Empty map cell for: R_MEDSR       variable wave =  5*/ ;
R_MEMRY=R5MEMRY ;
R_MEMRYE=R5MEMRYE ;
R_MEMRYF=R5MEMRYF ;
R_MEMRYQ=R5MEMRYQ ;
R_MEMRYS=R5MEMRYS ;
R_MEND=R5MEND ;
R_MLEN=R5MLEN ;
R_MLENM=R5MLENM ;
R_MNEV=R5MNEV ;
R_MO=R5MO ;
R_MOBILA=R5MOBILA ;
/* Empty map cell for: R_MOBILW      variable wave =  5*/ ;
R_MOMAGE=R5MOMAGE ;
R_MOMLIV=R5MOMLIV ;
/* Empty map cell for: R2_MONEY      variable wave =  5*/ ;
R_MONEY=R5MONEY ;
R_MONEYA=R5MONEYA ;
R_MONEYH=R5MONEYH ;
/* Empty map cell for: R_MONEYR      variable wave =  5*/ ;
R_MPART=R5MPART ;
R_MRCT=R5MRCT ;
R_MRPREM=R5MRPREM ;
R_MSTAT=R5MSTAT ;
R_MSTATF=R5MSTATF ;
R_MSTATH=R5MSTATH ;
R_MSTOT=R5MSTOT ;
R_MWID=R5MWID ;
R_NHMDAY=R5NHMDAY ;
R_NHMLIV=R5NHMLIV ;
R_NHMMVM=R5NHMMVM ;
R_NHMMVY=R5NHMMVY ;
R_NOTICS=R5NOTICS ;
/* Empty map cell for: R_NOVOC       variable wave =  5*/ ;
R_NRSHOM=R5NRSHOM ;
R_NRSNIT=R5NRSNIT ;
R_NRSTIM=R5NRSTIM ;
/* Empty map cell for: R_NSSCRE      variable wave =  5*/ ;
/* Empty map cell for: R_NSSCSE      variable wave =  5*/ ;
R_OOPMD=R5OOPMD ;
R_OOPMDF=R5OOPMDF ;
/* Empty map cell for: R_OOPMDO      variable wave =  5*/ ;
/* Empty map cell for: R_OOPMDOF     variable wave =  5*/ ;
R_OUTPT=R5OUTPT ;
R_PAPSM=R5PAPSM ;
/* Empty map cell for: R_PARTD       variable wave =  5*/ ;
R_PENCT=R5PENCT ;
R_PENIC1=R5PENIC1 ;
R_PENIC2=R5PENIC2 ;
R_PENINC=R5PENINC ;
R_PENI_N=R5PENI_N ;
R_PEXIT=R5PEXIT ;
/* Empty map cell for: R2_PHONE      variable wave =  5*/ ;
R_PHONE=R5PHONE ;
R_PHONEA=R5PHONEA ;
R_PHONEH=R5PHONEH ;
/* Empty map cell for: R_PHONER      variable wave =  5*/ ;
/* Empty map cell for: R_PMBMI       variable wave =  5*/ ;
/* Empty map cell for: R_PMHGHT      variable wave =  5*/ ;
/* Empty map cell for: R_PMHGHTS     variable wave =  5*/ ;
/* Empty map cell for: R_PMWAIST     variable wave =  5*/ ;
/* Empty map cell for: R_PMWAISTC    variable wave =  5*/ ;
/* Empty map cell for: R_PMWGHT      variable wave =  5*/ ;
/* Empty map cell for: R_PMWGHTF     variable wave =  5*/ ;
/* Empty map cell for: R_PMWGHTS     variable wave =  5*/ ;
R_PNHM5Y=R5PNHM5Y ;
R_PRCHMEM=R5PRCHMEM ;
R_PRES=R5PRES ;
R_PRMEM=R5PRMEM ;
R_PROST=R5PROST ;
R_PROXY=R5PROXY ;
R_PRPCNT=R5PRPCNT ;
R_PRPRM1=R5PRPRM1 ;
R_PRPRM2=R5PRPRM2 ;
/* Empty map cell for: R_PRPRM3      variable wave =  5*/ ;
R_PRSRC1=R5PRSRC1 ;
R_PRSRC2=R5PRSRC2 ;
/* Empty map cell for: R_PRSRC3      variable wave =  5*/ ;
R_PSTMEM=R5PSTMEM ;
R_PSYCH=R5PSYCH ;
R_PSYCHE=R5PSYCHE ;
R_PSYCHF=R5PSYCHF ;
R_PSYCHQ=R5PSYCHQ ;
R_PSYCHS=R5PSYCHS ;
R_PTYP1=R5PTYP1 ;
R_PTYP2=R5PTYP2 ;
R_PTYP3=R5PTYP3 ;
R_PTYP4=R5PTYP4 ;
/* Empty map cell for: R_PTYPD1      variable wave =  5*/ ;
/* Empty map cell for: R_PTYPD2      variable wave =  5*/ ;
/* Empty map cell for: R_PTYPD3      variable wave =  5*/ ;
/* Empty map cell for: R_PTYPD4      variable wave =  5*/ ;
/* Empty map cell for: R_PTYPF1      variable wave =  5*/ ;
/* Empty map cell for: R_PTYPF2      variable wave =  5*/ ;
/* Empty map cell for: R_PTYPF3      variable wave =  5*/ ;
/* Empty map cell for: R_PTYPF4      variable wave =  5*/ ;
/* Empty map cell for: R_PUFF        variable wave =  5*/ ;
/* Empty map cell for: R_PUFFPOS     variable wave =  5*/ ;
/* Empty map cell for: R1_PUSH       variable wave =  5*/ ;
/* Empty map cell for: R2_PUSH       variable wave =  5*/ ;
R_PUSH=R5PUSH ;
R_PUSHA=R5PUSHA ;
/* Empty map cell for: R_PUSHW       variable wave =  5*/ ;
R_RETDTWV=R5RETDTWV ;
R_RETEMP=R5RETEMP ;
/* Empty map cell for: R_RETINC      variable wave =  5*/ ;
/* Empty map cell for: R_RETLIV      variable wave =  5*/ ;
R_RETMON=R5RETMON ;
R_RETSAT=R5RETSAT ;
/* Empty map cell for: R_RETWLT      variable wave =  5*/ ;
/* Empty map cell for: R_RETWRK      variable wave =  5*/ ;
/* Empty map cell for: R_RETWSP      variable wave =  5*/ ;
R_RETYR=R5RETYR ;
R_RISK=R5RISK ;
R_RISK6=R5RISK6 ;
R_RPLNYA=R5RPLNYA ;
R_RPLNYR=R5RPLNYR ;
/* Empty map cell for: R_RXPREM      variable wave =  5*/ ;
R_RYRCMP=R5RYRCMP ;
R_SADLF=R5SADLF ;
R_SAMEJOB=R5SAMEJOB ;
R_SAMEMP=R5SAMEMP ;
R_SAYRET=R5SAYRET ;
R_SCIS=R5SCIS ;
R_SDIAPL=R5SDIAPL ;
R_SDIAPLM=R5SDIAPLM ;
R_SDIAPLY=R5SDIAPLY ;
R_SDIAPP=R5SDIAPP ;
R_SDIAPPM=R5SDIAPPM ;
R_SDIAPPY=R5SDIAPPY ;
R_SDIDEN=R5SDIDEN ;
R_SDIREC=R5SDIREC ;
R_SDIRECM=R5SDIRECM ;
R_SDIRECY=R5SDIRECY ;
R_SDISTP=R5SDISTP ;
R_SDISTPM=R5SDISTPM ;
R_SDISTPY=R5SDISTPY ;
R_SER7=R5SER7 ;
R_SHLT=R5SHLT ;
R_SHLTC=R5SHLTC ;
R_SHLTCF=R5SHLTCF ;
R_SHOP=R5SHOP ;
R_SHOPA=R5SHOPA ;
R_SHOPH=R5SHOPH ;
/* Empty map cell for: R_SHOPR       variable wave =  5*/ ;
/* Empty map cell for: R1_SIT        variable wave =  5*/ ;
/* Empty map cell for: R2_SIT        variable wave =  5*/ ;
R_SIT=R5SIT ;
R_SITA=R5SITA ;
/* Empty map cell for: R_SITW        variable wave =  5*/ ;
/* Empty map cell for: R_SLEEP       variable wave =  5*/ ;
/* Empty map cell for: R_SLEEPE      variable wave =  5*/ ;
/* Empty map cell for: R_SLEEPQ      variable wave =  5*/ ;
R_SLEEPR=R5SLEEPR ;
/* Empty map cell for: R_SLEEPS      variable wave =  5*/ ;
/* Empty map cell for: R_SLEEPX      variable wave =  5*/ ;
R_SLFEMP=R5SLFEMP ;
R_SLFMEM=R5SLFMEM ;
R_SMOKEN=R5SMOKEN ;
R_SMOKEV=R5SMOKEV ;
R_SPCFAC=R5SPCFAC ;
/* Empty map cell for: R_SSAPL       variable wave =  5*/ ;
/* Empty map cell for: R_SSAPLM      variable wave =  5*/ ;
/* Empty map cell for: R_SSAPLY      variable wave =  5*/ ;
/* Empty map cell for: R_SSAPP       variable wave =  5*/ ;
/* Empty map cell for: R_SSAPPM      variable wave =  5*/ ;
/* Empty map cell for: R_SSAPPY      variable wave =  5*/ ;
/* Empty map cell for: R_SSDEN       variable wave =  5*/ ;
R_SSDI=R5SSDI ;
R_SSIAPL=R5SSIAPL ;
R_SSIAPLM=R5SSIAPLM ;
R_SSIAPLY=R5SSIAPLY ;
R_SSIAPP=R5SSIAPP ;
R_SSIAPPM=R5SSIAPPM ;
R_SSIAPPY=R5SSIAPPY ;
R_SSIDEN=R5SSIDEN ;
R_SSIREC=R5SSIREC ;
R_SSIRECM=R5SSIRECM ;
R_SSIRECY=R5SSIRECY ;
R_SSISTP=R5SSISTP ;
R_SSISTPM=R5SSISTPM ;
R_SSISTPY=R5SSISTPY ;
/* Empty map cell for: R_SSREC       variable wave =  5*/ ;
/* Empty map cell for: R_SSRECM      variable wave =  5*/ ;
/* Empty map cell for: R_SSRECY      variable wave =  5*/ ;
/* Empty map cell for: R_SSSTP       variable wave =  5*/ ;
/* Empty map cell for: R_SSSTPM      variable wave =  5*/ ;
/* Empty map cell for: R_SSSTPY      variable wave =  5*/ ;
/* Empty map cell for: R_SSWRER      variable wave =  5*/ ;
/* Empty map cell for: R_SSWRNR      variable wave =  5*/ ;
/* Empty map cell for: R_SSWRXA      variable wave =  5*/ ;
/* Empty map cell for: R_SSWSER      variable wave =  5*/ ;
/* Empty map cell for: R_SSWSNR      variable wave =  5*/ ;
/* Empty map cell for: R_SSWSXA      variable wave =  5*/ ;
R_STATUS=R5STATUS ;
/* Empty map cell for: R1_STOOP      variable wave =  5*/ ;
/* Empty map cell for: R2_STOOP      variable wave =  5*/ ;
R_STOOP=R5STOOP ;
R_STOOPA=R5STOOPA ;
/* Empty map cell for: R_STOOPW      variable wave =  5*/ ;
R_STROK=R5STROK ;
R_STROKE=R5STROKE ;
R_STROKF=R5STROKF ;
R_STROKQ=R5STROKQ ;
R_STROKS=R5STROKS ;
/* Empty map cell for: R_TIMWLK      variable wave =  5*/ ;
/* Empty map cell for: R_TIMWLKA     variable wave =  5*/ ;
/* Empty map cell for: R_TLIPRM      variable wave =  5*/ ;
/* Empty map cell for: R2_TOILT      variable wave =  5*/ ;
R_TOILT=R5TOILT ;
R_TOILTA=R5TOILTA ;
/* Empty map cell for: R2_TOILTH     variable wave =  5*/ ;
R_TOILTH=R5TOILTH ;
R_TOTMBF=R5TOTMBF ;
R_TOTMBI=R5TOTMBI ;
/* Empty map cell for: R_TOTMD       variable wave =  5*/ ;
/* Empty map cell for: R_TOTMDF      variable wave =  5*/ ;
R_TR20=R5TR20 ;
/* Empty map cell for: R_TR40        variable wave =  5*/ ;
R_TYLTC=R5TYLTC ;
/* Empty map cell for: R_ULCER       variable wave =  5*/ ;
R_UNEMP=R5UNEMP ;
R_UNION=R5UNION ;
R_UNIONF=R5UNIONF ;
/* Empty map cell for: R_VGACTF      variable wave =  5*/ ;
/* Empty map cell for: R_VGACTN      variable wave =  5*/ ;
/* Empty map cell for: R_VGACTP      variable wave =  5*/ ;
/* Empty map cell for: R_VGACTX      variable wave =  5*/ ;
R_VIGACT=R5VIGACT ;
R_VOCAB=R5VOCAB ;
R_VP=R5VP ;
/* Empty map cell for: R1_WALK1      variable wave =  5*/ ;
/* Empty map cell for: R2_WALK1      variable wave =  5*/ ;
R_WALK1=R5WALK1 ;
R_WALK1A=R5WALK1A ;
/* Empty map cell for: R_WALK1W      variable wave =  5*/ ;
/* Empty map cell for: R1_WALKR      variable wave =  5*/ ;
/* Empty map cell for: R2_WALKR      variable wave =  5*/ ;
R_WALKR=R5WALKR ;
R_WALKRA=R5WALKRA ;
R_WALKRE=R5WALKRE ;
/* Empty map cell for: R2_WALKRH     variable wave =  5*/ ;
R_WALKRH=R5WALKRH ;
/* Empty map cell for: R_WALKRW      variable wave =  5*/ ;
/* Empty map cell for: R1_WALKS      variable wave =  5*/ ;
/* Empty map cell for: R2_WALKS      variable wave =  5*/ ;
R_WALKS=R5WALKS ;
R_WALKSA=R5WALKSA ;
/* Empty map cell for: R_WALKSW      variable wave =  5*/ ;
R_WANDER=R5WANDER ;
R_WEIGHT=R5WEIGHT ;
R_WGFHR=R5WGFHR ;
R_WGFWK=R5WGFWK ;
R_WGIHR=R5WGIHR ;
R_WGIWK=R5WGIWK ;
/* Empty map cell for: R_WHAPPX      variable wave =  5*/ ;
R_WHAPPY=R5WHAPPY ;
R_WLIPRM=R5WLIPRM ;
R_WORK=R5WORK ;
R_WORK2=R5WORK2 ;
R_WORK62=R5WORK62 ;
R_WORK62F=R5WORK62F ;
R_WORK65=R5WORK65 ;
R_WORK65F=R5WORK65F ;
/* Empty map cell for: R_WORK70      variable wave =  5*/ ;
/* Empty map cell for: R_WORK70A     variable wave =  5*/ ;
/* Empty map cell for: R_WORK70AF    variable wave =  5*/ ;
/* Empty map cell for: R_WORK70F     variable wave =  5*/ ;
R_WORKLM=R5WORKLM ;
R_WTCRNH=R5WTCRNH ;
R_WTHH=R5WTHH ;
R_WTRESP=R5WTRESP ;
R_WTR_NH=R5WTR_NH ;
R_YR=R5YR ;
if inw=1 then output ;
%put --- Rlong table ;
%initvars ;
%put ---- Rlong table ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
WAVE_NUMBER=6 ;
H_HHIDC=H6HHIDC ;
SUBHH= substr(H_HHIDC,7)     /* --- Derived variable  */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
INW=INW6 ;
WAVE_NAME=  'hrs_wave'||strip(put(wave_number,3.))     /* --- Derived variable  */ ;
CYEAR='yr2002' ;
/* --- RAND variable:HACOHORT  included */ ;
studyyr= hrs_studyyr(wave_number,
hacohort)     /* --- Derived variable  */ ;
H_HHID=H6HHID ;
S_HHIDPN=S6HHIDPN ;
/* Empty map cell for: R_ACGTOT      variable wave =  6*/ ;
R_ADL5A=R6ADL5A ;
R_ADL5H=R6ADL5H ;
R_ADL6A=R6ADL6A ;
R_ADL6H=R6ADL6H ;
/* Empty map cell for: R_ADLR10      variable wave =  6*/ ;
/* Empty map cell for: R_ADLW        variable wave =  6*/ ;
R_AGEM_B=R6AGEM_B ;
R_AGEM_E=R6AGEM_E ;
R_AGEM_M=R6AGEM_M ;
R_AGEY_B=R6AGEY_B ;
R_AGEY_E=R6AGEY_E ;
R_AGEY_M=R6AGEY_M ;
/* Empty map cell for: R_AIMR10      variable wave =  6*/ ;
R_ALONE=R6ALONE ;
/* Empty map cell for: R_ALZHE       variable wave =  6*/ ;
/* Empty map cell for: R_ALZHEE      variable wave =  6*/ ;
/* Empty map cell for: R_ALZHEF      variable wave =  6*/ ;
/* Empty map cell for: R_ALZHEQ      variable wave =  6*/ ;
/* Empty map cell for: R_ALZHES      variable wave =  6*/ ;
/* Empty map cell for: R_AMSTOT      variable wave =  6*/ ;
R_ANS3PQ=R6ANS3PQ ;
/* Empty map cell for: R1_ARMS       variable wave =  6*/ ;
/* Empty map cell for: R2_ARMS       variable wave =  6*/ ;
R_ARMS=R6ARMS ;
R_ARMSA=R6ARMSA ;
/* Empty map cell for: R_ARMSW       variable wave =  6*/ ;
R_ARTHR=R6ARTHR ;
R_ARTHRE=R6ARTHRE ;
R_ARTHRF=R6ARTHRF ;
R_ARTHRQ=R6ARTHRQ ;
R_ARTHRS=R6ARTHRS ;
/* Empty map cell for: R_ATR20       variable wave =  6*/ ;
R_BACK=R6BACK ;
/* Empty map cell for: R_BALFUL      variable wave =  6*/ ;
/* Empty map cell for: R_BALFULC     variable wave =  6*/ ;
/* Empty map cell for: R_BALFULT     variable wave =  6*/ ;
/* Empty map cell for: R_BALSBS      variable wave =  6*/ ;
/* Empty map cell for: R_BALSBSC     variable wave =  6*/ ;
/* Empty map cell for: R_BALSEMI     variable wave =  6*/ ;
/* Empty map cell for: R_BALSEMIC    variable wave =  6*/ ;
/* Empty map cell for: R1_BATH       variable wave =  6*/ ;
/* Empty map cell for: R2_BATH       variable wave =  6*/ ;
R_BATH=R6BATH ;
R_BATHA=R6BATHA ;
/* Empty map cell for: R2_BATHH      variable wave =  6*/ ;
R_BATHH=R6BATHH ;
/* Empty map cell for: R_BATHW       variable wave =  6*/ ;
/* Empty map cell for: R1_BED        variable wave =  6*/ ;
/* Empty map cell for: R2_BED        variable wave =  6*/ ;
R_BED=R6BED ;
R_BEDA=R6BEDA ;
R_BEDE=R6BEDE ;
/* Empty map cell for: R2_BEDH       variable wave =  6*/ ;
R_BEDH=R6BEDH ;
/* Empty map cell for: R_BEDW        variable wave =  6*/ ;
R_BEQ100=R6BEQ100 ;
R_BEQ10K=R6BEQ10K ;
R_BEQ500=R6BEQ500 ;
R_BEQANY=R6BEQANY ;
/* Empty map cell for: R_BEQLRG      variable wave =  6*/ ;
R_BMI=R6BMI ;
/* Empty map cell for: R_BPDIA       variable wave =  6*/ ;
/* Empty map cell for: R_BPPOS       variable wave =  6*/ ;
/* Empty map cell for: R_BPPULS      variable wave =  6*/ ;
/* Empty map cell for: R_BPSYS       variable wave =  6*/ ;
R_BREAST=R6BREAST ;
R_BWC20=R6BWC20 ;
R_BWC86=R6BWC86 ;
R_CACT=R6CACT ;
/* Empty map cell for: R1_CALC       variable wave =  6*/ ;
/* Empty map cell for: R2_CALC       variable wave =  6*/ ;
/* Empty map cell for: R_CALCA       variable wave =  6*/ ;
/* Empty map cell for: R_CALCW       variable wave =  6*/ ;
R_CANCR=R6CANCR ;
R_CANCRE=R6CANCRE ;
R_CANCRF=R6CANCRF ;
R_CANCRQ=R6CANCRQ ;
R_CANCRS=R6CANCRS ;
R_CENDIV=R6CENDIV ;
R_CENREG=R6CENREG ;
R_CESD=R6CESD ;
R_CESDM=R6CESDM ;
/* Empty map cell for: R1_CHAIR      variable wave =  6*/ ;
/* Empty map cell for: R2_CHAIR      variable wave =  6*/ ;
R_CHAIR=R6CHAIR ;
R_CHAIRA=R6CHAIRA ;
/* Empty map cell for: R_CHAIRW      variable wave =  6*/ ;
R_CHOLST=R6CHOLST ;
/* Empty map cell for: R_CLAIMED     variable wave =  6*/ ;
/* Empty map cell for: R1_CLIM1      variable wave =  6*/ ;
/* Empty map cell for: R2_CLIM1      variable wave =  6*/ ;
R_CLIM1=R6CLIM1 ;
R_CLIM1A=R6CLIM1A ;
/* Empty map cell for: R_CLIM1W      variable wave =  6*/ ;
/* Empty map cell for: R1_CLIMS      variable wave =  6*/ ;
/* Empty map cell for: R2_CLIMS      variable wave =  6*/ ;
R_CLIMS=R6CLIMS ;
R_CLIMSA=R6CLIMSA ;
/* Empty map cell for: R_CLIMSW      variable wave =  6*/ ;
R_COGTOT=R6COGTOT ;
/* Empty map cell for: R_COMP        variable wave =  6*/ ;
/* Empty map cell for: R_COMPW       variable wave =  6*/ ;
R_CONDE=R6CONDE ;
R_CONDEF=R6CONDEF ;
R_CONDS=R6CONDS ;
R_CONDSF=R6CONDSF ;
R_CONDSP=R6CONDSP ;
R_COVR=R6COVR ;
R_COVRT=R6COVRT ;
R_COVS=R6COVS ;
R_DADAGE=R6DADAGE ;
R_DADLIV=R6DADLIV ;
R_DCBAL1=R6DCBAL1 ;
R_DCBAL2=R6DCBAL2 ;
R_DCBAL3=R6DCBAL3 ;
R_DCBAL4=R6DCBAL4 ;
R_DCBENE1=R6DCBENE1 ;
R_DCBENE2=R6DCBENE2 ;
R_DCBENE3=R6DCBENE3 ;
R_DCBENE4=R6DCBENE4 ;
R_DCCONT1=R6DCCONT1 ;
R_DCCONT2=R6DCCONT2 ;
R_DCCONT3=R6DCCONT3 ;
R_DCCONT4=R6DCCONT4 ;
R_DCMODE1=R6DCMODE1 ;
R_DCMODE2=R6DCMODE2 ;
R_DCMODE3=R6DCMODE3 ;
R_DCMODE4=R6DCMODE4 ;
R_DCPCT1=R6DCPCT1 ;
R_DCPCT2=R6DCPCT2 ;
R_DCPCT3=R6DCPCT3 ;
R_DCPCT4=R6DCPCT4 ;
/* Empty map cell for: R_DEMEN       variable wave =  6*/ ;
/* Empty map cell for: R_DEMENE      variable wave =  6*/ ;
/* Empty map cell for: R_DEMENF      variable wave =  6*/ ;
/* Empty map cell for: R_DEMENQ      variable wave =  6*/ ;
/* Empty map cell for: R_DEMENS      variable wave =  6*/ ;
R_DENTST=R6DENTST ;
R_DEPRES=R6DEPRES ;
/* Empty map cell for: R_DEPREX      variable wave =  6*/ ;
R_DIAB=R6DIAB ;
R_DIABE=R6DIABE ;
R_DIABF=R6DIABF ;
R_DIABQ=R6DIABQ ;
R_DIABS=R6DIABS ;
/* Empty map cell for: R1_DIME       variable wave =  6*/ ;
/* Empty map cell for: R2_DIME       variable wave =  6*/ ;
R_DIME=R6DIME ;
R_DIMEA=R6DIMEA ;
/* Empty map cell for: R_DIMEW       variable wave =  6*/ ;
R_DLRC=R6DLRC ;
/* Empty map cell for: R_DLRC20      variable wave =  6*/ ;
R_DOCTIM=R6DOCTIM ;
R_DOCTOR=R6DOCTOR ;
/* Empty map cell for: R1_DRESS      variable wave =  6*/ ;
/* Empty map cell for: R2_DRESS      variable wave =  6*/ ;
R_DRESS=R6DRESS ;
R_DRESSA=R6DRESSA ;
/* Empty map cell for: R2_DRESSH     variable wave =  6*/ ;
R_DRESSH=R6DRESSH ;
/* Empty map cell for: R_DRESSW      variable wave =  6*/ ;
R_DRINK=R6DRINK ;
R_DRINKD=R6DRINKD ;
R_DRINKN=R6DRINKN ;
/* Empty map cell for: R_DRINKR      variable wave =  6*/ ;
R_DRUGS=R6DRUGS ;
R_DSIAMT=R6DSIAMT ;
R_DSSAMT=R6DSSAMT ;
R_DSTAT=R6DSTAT ;
R_DW=R6DW ;
R_DY=R6DY ;
/* Empty map cell for: R1_EAT        variable wave =  6*/ ;
/* Empty map cell for: R2_EAT        variable wave =  6*/ ;
R_EAT=R6EAT ;
R_EATA=R6EATA ;
/* Empty map cell for: R2_EATH       variable wave =  6*/ ;
R_EATH=R6EATH ;
/* Empty map cell for: R_EATW        variable wave =  6*/ ;
R_EFFORT=R6EFFORT ;
/* Empty map cell for: R_EFFORX      variable wave =  6*/ ;
R_ENLIFE=R6ENLIFE ;
/* Empty map cell for: R_ENLIFX      variable wave =  6*/ ;
R_FAMR=R6FAMR ;
R_FBWC20=R6FBWC20 ;
R_FBWC86=R6FBWC86 ;
R_FCACT=R6FCACT ;
R_FDLRC=R6FDLRC ;
R_FDW=R6FDW ;
R_FDY=R6FDY ;
R_FIMRC=R6FIMRC ;
R_FINEA=R6FINEA ;
R_FINPLN=R6FINPLN ;
R_FINR=R6FINR ;
/* Empty map cell for: R_FLAG        variable wave =  6*/ ;
R_FLONE=R6FLONE ;
/* Empty map cell for: R_FLONEX      variable wave =  6*/ ;
R_FLUSHT=R6FLUSHT ;
R_FMO=R6FMO ;
R_FPRES=R6FPRES ;
R_FPSTME=R6FPSTME ;
R_FSAD=R6FSAD ;
/* Empty map cell for: R_FSADX       variable wave =  6*/ ;
R_FSCIS=R6FSCIS ;
R_FSER7=R6FSER7 ;
R_FSIZE=R6FSIZE ;
R_FSIZEF=R6FSIZEF ;
R_FSLFME=R6FSLFME ;
R_FVOCAB=R6FVOCAB ;
R_FVP=R6FVP ;
R_FYR=R6FYR ;
R_GOING=R6GOING ;
/* Empty map cell for: R_GOINGX      variable wave =  6*/ ;
R_GOVMD=R6GOVMD ;
R_GOVMR=R6GOVMR ;
/* Empty map cell for: R_GOVOT       variable wave =  6*/ ;
R_GOVVA=R6GOVVA ;
R_GROSSA=R6GROSSA ;
/* Empty map cell for: R_GRP         variable wave =  6*/ ;
/* Empty map cell for: R_GRPDOM      variable wave =  6*/ ;
/* Empty map cell for: R_GRPL        variable wave =  6*/ ;
/* Empty map cell for: R_GRPPOS      variable wave =  6*/ ;
/* Empty map cell for: R_GRPR        variable wave =  6*/ ;
R_HALUC=R6HALUC ;
/* Empty map cell for: R_HDLR20      variable wave =  6*/ ;
R_HEART=R6HEART ;
R_HEARTE=R6HEARTE ;
R_HEARTF=R6HEARTF ;
R_HEARTQ=R6HEARTQ ;
R_HEARTS=R6HEARTS ;
R_HECOV1=R6HECOV1 ;
R_HECOV2=R6HECOV2 ;
R_HECOV3=R6HECOV3 ;
R_HEIGHT=R6HEIGHT ;
R_HENUM=R6HENUM ;
R_HERET=R6HERET ;
R_HERTR1=R6HERTR1 ;
R_HERTR2=R6HERTR2 ;
R_HERTR3=R6HERTR3 ;
R_HERTS1=R6HERTS1 ;
R_HERTS2=R6HERTS2 ;
R_HERTS3=R6HERTS3 ;
R_HESRC1=R6HESRC1 ;
R_HESRC2=R6HESRC2 ;
R_HESRC3=R6HESRC3 ;
R_HIBP=R6HIBP ;
R_HIBPE=R6HIBPE ;
R_HIBPF=R6HIBPF ;
R_HIBPQ=R6HIBPQ ;
R_HIBPS=R6HIBPS ;
R_HIGOV=R6HIGOV ;
R_HILTC=R6HILTC ;
/* Empty map cell for: R_HIMR20      variable wave =  6*/ ;
R_HIOTHP=R6HIOTHP ;
R_HLPDYSF=R6HLPDYSF ;
R_HLPDYSNF=R6HLPDYSNF ;
R_HLPDYSP=R6HLPDYSP ;
R_HLPDYST=R6HLPDYST ;
R_HLPDYSU=R6HLPDYSU ;
R_HLPHRSF=R6HLPHRSF ;
R_HLPHRSNF=R6HLPHRSNF ;
R_HLPHRSP=R6HLPHRSP ;
R_HLPHRST=R6HLPHRST ;
R_HLPHRSU=R6HLPHRSU ;
R_HLPPDFA=R6HLPPDFA ;
R_HLPPDFN=R6HLPPDFN ;
R_HLPPDNFA=R6HLPPDNFA ;
R_HLPPDNFN=R6HLPPDNFN ;
R_HLPPDTA=R6HLPPDTA ;
R_HLPPDTN=R6HLPPDTN ;
R_HLPRFN=R6HLPRFN ;
R_HLPRNFN=R6HLPRNFN ;
R_HLPRPN=R6HLPRPN ;
R_HLPRTN=R6HLPRTN ;
R_HLPRUN=R6HLPRUN ;
R_HLTC3=R6HLTC3 ;
R_HLTC5=R6HLTC5 ;
R_HLTC5F=R6HLTC5F ;
R_HLTHLM=R6HLTHLM ;
R_HOMCAR=R6HOMCAR ;
R_HOSP=R6HOSP ;
R_HSPNIT=R6HSPNIT ;
R_HSPTIM=R6HSPTIM ;
/* Empty map cell for: R_HSWRKF      variable wave =  6*/ ;
/* Empty map cell for: R_HTR40       variable wave =  6*/ ;
R_IADL5A=R6IADL5A ;
R_IADL5H=R6IADL5H ;
R_IANN=R6IANN ;
R_IEARN=R6IEARN ;
R_IFANN=R6IFANN ;
R_IFEARN=R6IFEARN ;
R_IFGXFR=R6IFGXFR ;
R_IFIRAW=R6IFIRAW ;
/* Empty map cell for: R_IFIRAWY1    variable wave =  6*/ ;
R_IFPEN=R6IFPEN ;
R_IFPENA=R6IFPENA ;
R_IFSDI=R6IFSDI ;
R_IFSRET=R6IFSRET ;
R_IFSSDI=R6IFSSDI ;
/* Empty map cell for: R_IFSSI       variable wave =  6*/ ;
R_IFUNEM=R6IFUNEM ;
R_IFUNWC=R6IFUNWC ;
R_IFWCMP=R6IFWCMP ;
R_IGXFR=R6IGXFR ;
R_IIRAW=R6IIRAW ;
R_IIRAWY1=R6IIRAWY1 ;
R_IMRC=R6IMRC ;
/* Empty map cell for: R_IMRC20      variable wave =  6*/ ;
R_INHER=R6INHER ;
R_INHPE=R6INHPE ;
R_INHPFN=R6INHPFN ;
R_INHPNFN=R6INHPNFN ;
R_INHPPN=R6INHPPN ;
R_INHPTN=R6INHPTN ;
R_INHPUN=R6INHPUN ;
R_INLBRF=R6INLBRF ;
R_IPEN=R6IPEN ;
R_IPENA=R6IPENA ;
R_ISDI=R6ISDI ;
R_ISRET=R6ISRET ;
R_ISSDI=R6ISSDI ;
R_ISSI=R6ISSI ;
R_IUNEM=R6IUNEM ;
R_IUNWC=R6IUNWC ;
R_IWBEG=R6IWBEG ;
/* Empty map cell for: R_IWBEGF      variable wave =  6*/ ;
R_IWCMP=R6IWCMP ;
R_IWEND=R6IWEND ;
/* Empty map cell for: R_IWENDF      variable wave =  6*/ ;
R_IWENDM=R6IWENDM ;
R_IWENDY=R6IWENDY ;
R_IWMID=R6IWMID ;
R_IWMIDF=R6IWMIDF ;
R_IWSTAT=R6IWSTAT ;
R_JCIND=R6JCIND ;
/* Empty map cell for: R_JCINDB      variable wave =  6*/ ;
/* Empty map cell for: R_JCINDC      variable wave =  6*/ ;
R_JCOCC=R6JCOCC ;
R_JCOCCA=R6JCOCCA ;
/* Empty map cell for: R_JCOCCB      variable wave =  6*/ ;
/* Empty map cell for: R_JCOCCC      variable wave =  6*/ ;
R_JCPEN=R6JCPEN ;
R_JCPENF=R6JCPENF ;
R_JCTEN=R6JCTEN ;
R_JHOUR2=R6JHOUR2 ;
R_JHOURS=R6JHOURS ;
R_JJOBS=R6JJOBS ;
R_JLASTM=R6JLASTM ;
R_JLASTY=R6JLASTY ;
R_JLIFT=R6JLIFT ;
R_JLIND=R6JLIND ;
/* Empty map cell for: R_JLINDB      variable wave =  6*/ ;
/* Empty map cell for: R_JLINDC      variable wave =  6*/ ;
R_JLMIS=R6JLMIS ;
R_JLOCC=R6JLOCC ;
R_JLOCCA=R6JLOCCA ;
/* Empty map cell for: R_JLOCCB      variable wave =  6*/ ;
/* Empty map cell for: R_JLOCCC      variable wave =  6*/ ;
R_JLTEN=R6JLTEN ;
R_JLTENF=R6JLTENF ;
R_JMISS=R6JMISS ;
R_JNJOB=R6JNJOB ;
R_JNJOB5=R6JNJOB5 ;
/* Empty map cell for: R1_JOG        variable wave =  6*/ ;
/* Empty map cell for: R2_JOG        variable wave =  6*/ ;
R_JOG=R6JOG ;
R_JOGA=R6JOGA ;
/* Empty map cell for: R_JOGW        variable wave =  6*/ ;
R_JPHYS=R6JPHYS ;
R_JSIGHT=R6JSIGHT ;
R_JSTOOP=R6JSTOOP ;
R_JSTRES=R6JSTRES ;
R_JWEEK2=R6JWEEK2 ;
R_JWEEKS=R6JWEEKS ;
R_JYEARM=R6JYEARM ;
R_JYEARS=R6JYEARS ;
/* Empty map cell for: R_LBAGR       variable wave =  6*/ ;
/* Empty map cell for: R_LBASSISTPRB variable wave =  6*/ ;
/* Empty map cell for: R_LBCOMP      variable wave =  6*/ ;
/* Empty map cell for: R_LBCON10     variable wave =  6*/ ;
/* Empty map cell for: R_LBCON5      variable wave =  6*/ ;
/* Empty map cell for: R_LBELIG      variable wave =  6*/ ;
/* Empty map cell for: R_LBEXT       variable wave =  6*/ ;
/* Empty map cell for: R_LBFAMDRUGPRBvariable wave =  6*/ ;
/* Empty map cell for: R_LBFAMHLTHPRBvariable wave =  6*/ ;
/* Empty map cell for: R_LBFINPRB    variable wave =  6*/ ;
/* Empty map cell for: R_LBHLTHPRB   variable wave =  6*/ ;
/* Empty map cell for: R_LBHOUSEPRB  variable wave =  6*/ ;
/* Empty map cell for: R_LBLONELY11  variable wave =  6*/ ;
/* Empty map cell for: R_LBLONELY3   variable wave =  6*/ ;
/* Empty map cell for: R_LBNEGAFFECT variable wave =  6*/ ;
/* Empty map cell for: R_LBNEGAFFECT6variable wave =  6*/ ;
/* Empty map cell for: R_LBNEUR      variable wave =  6*/ ;
/* Empty map cell for: R_LBONCHRSTR  variable wave =  6*/ ;
/* Empty map cell for: R_LBOPEN      variable wave =  6*/ ;
/* Empty map cell for: R_LBPOSAFFECT variable wave =  6*/ ;
/* Empty map cell for: R_LBPOSAFFECT6variable wave =  6*/ ;
R_LBRF=R6LBRF ;
R_LBRFH=R6LBRFH ;
R_LBRFY=R6LBRFY ;
/* Empty map cell for: R_LBRLTNSHPRB variable wave =  6*/ ;
/* Empty map cell for: R_LBSATCITY   variable wave =  6*/ ;
/* Empty map cell for: R_LBSATFAM    variable wave =  6*/ ;
/* Empty map cell for: R_LBSATFIN    variable wave =  6*/ ;
/* Empty map cell for: R_LBSATHLTH   variable wave =  6*/ ;
/* Empty map cell for: R_LBSATHOME   variable wave =  6*/ ;
/* Empty map cell for: R_LBSATINC    variable wave =  6*/ ;
/* Empty map cell for: R_LBSATLEISUREvariable wave =  6*/ ;
/* Empty map cell for: R_LBSATLIFE   variable wave =  6*/ ;
/* Empty map cell for: R_LBSATWLF    variable wave =  6*/ ;
/* Empty map cell for: R_LBWGTR      variable wave =  6*/ ;
/* Empty map cell for: R_LBWORKPRB   variable wave =  6*/ ;
R_LGMUSA=R6LGMUSA ;
/* Empty map cell for: R_LGMUSW      variable wave =  6*/ ;
/* Empty map cell for: R_LHTACT      variable wave =  6*/ ;
R_LIFEIN=R6LIFEIN ;
/* Empty map cell for: R1_LIFT       variable wave =  6*/ ;
/* Empty map cell for: R2_LIFT       variable wave =  6*/ ;
R_LIFT=R6LIFT ;
R_LIFTA=R6LIFTA ;
/* Empty map cell for: R_LIFTW       variable wave =  6*/ ;
R_LIV10=R6LIV10 ;
R_LIV10A=R6LIV10A ;
R_LIV10P=R6LIV10P ;
R_LIV10R=R6LIV10R ;
R_LIV75=R6LIV75 ;
R_LIV75C=R6LIV75C ;
R_LIV75F=R6LIV75F ;
R_LIV75P=R6LIV75P ;
R_LIV75R=R6LIV75R ;
/* Empty map cell for: R_LIV85       variable wave =  6*/ ;
/* Empty map cell for: R_LIV85C      variable wave =  6*/ ;
/* Empty map cell for: R_LIV85F      variable wave =  6*/ ;
/* Empty map cell for: R_LIV85P      variable wave =  6*/ ;
/* Empty map cell for: R_LIV85R      variable wave =  6*/ ;
R_LIV8XC=R6LIV8XC ;
R_LIV8XF=R6LIV8XF ;
R_LIVBRO=R6LIVBRO ;
R_LIVPAR=R6LIVPAR ;
R_LIVSIB=R6LIVSIB ;
R_LIVSIS=R6LIVSIS ;
R_LOST=R6LOST ;
/* Empty map cell for: R_LTACTF      variable wave =  6*/ ;
/* Empty map cell for: R_LTACTN      variable wave =  6*/ ;
/* Empty map cell for: R_LTACTP      variable wave =  6*/ ;
/* Empty map cell for: R_LTACTX      variable wave =  6*/ ;
R_LTCPRM=R6LTCPRM ;
R_LUNG=R6LUNG ;
R_LUNGE=R6LUNGE ;
R_LUNGF=R6LUNGF ;
R_LUNGQ=R6LUNGQ ;
R_LUNGS=R6LUNGS ;
R_MAMMOG=R6MAMMOG ;
/* Empty map cell for: R1_MAP        variable wave =  6*/ ;
/* Empty map cell for: R2_MAP        variable wave =  6*/ ;
R_MAP=R6MAP ;
R_MAPA=R6MAPA ;
/* Empty map cell for: R_MAPW        variable wave =  6*/ ;
R_MCURLN=R6MCURLN ;
/* Empty map cell for: R_MCWV        variable wave =  6*/ ;
/* Empty map cell for: R_MCWVW       variable wave =  6*/ ;
/* Empty map cell for: R_MDACTX      variable wave =  6*/ ;
R_MDIV=R6MDIV ;
R_MEALS=R6MEALS ;
R_MEALSA=R6MEALSA ;
R_MEALSH=R6MEALSH ;
/* Empty map cell for: R_MEALSR      variable wave =  6*/ ;
/* Empty map cell for: R2_MEDS       variable wave =  6*/ ;
R_MEDS=R6MEDS ;
R_MEDSA=R6MEDSA ;
R_MEDSH=R6MEDSH ;
/* Empty map cell for: R_MEDSR       variable wave =  6*/ ;
R_MEMRY=R6MEMRY ;
R_MEMRYE=R6MEMRYE ;
R_MEMRYF=R6MEMRYF ;
R_MEMRYQ=R6MEMRYQ ;
R_MEMRYS=R6MEMRYS ;
R_MEND=R6MEND ;
R_MLEN=R6MLEN ;
R_MLENM=R6MLENM ;
R_MNEV=R6MNEV ;
R_MO=R6MO ;
R_MOBILA=R6MOBILA ;
/* Empty map cell for: R_MOBILW      variable wave =  6*/ ;
R_MOMAGE=R6MOMAGE ;
R_MOMLIV=R6MOMLIV ;
/* Empty map cell for: R2_MONEY      variable wave =  6*/ ;
R_MONEY=R6MONEY ;
R_MONEYA=R6MONEYA ;
R_MONEYH=R6MONEYH ;
/* Empty map cell for: R_MONEYR      variable wave =  6*/ ;
R_MPART=R6MPART ;
R_MRCT=R6MRCT ;
R_MRPREM=R6MRPREM ;
R_MSTAT=R6MSTAT ;
R_MSTATF=R6MSTATF ;
R_MSTATH=R6MSTATH ;
R_MSTOT=R6MSTOT ;
R_MWID=R6MWID ;
R_NHMDAY=R6NHMDAY ;
R_NHMLIV=R6NHMLIV ;
R_NHMMVM=R6NHMMVM ;
R_NHMMVY=R6NHMMVY ;
R_NOTICS=R6NOTICS ;
/* Empty map cell for: R_NOVOC       variable wave =  6*/ ;
R_NRSHOM=R6NRSHOM ;
R_NRSNIT=R6NRSNIT ;
R_NRSTIM=R6NRSTIM ;
/* Empty map cell for: R_NSSCRE      variable wave =  6*/ ;
/* Empty map cell for: R_NSSCSE      variable wave =  6*/ ;
R_OOPMD=R6OOPMD ;
R_OOPMDF=R6OOPMDF ;
/* Empty map cell for: R_OOPMDO      variable wave =  6*/ ;
/* Empty map cell for: R_OOPMDOF     variable wave =  6*/ ;
R_OUTPT=R6OUTPT ;
R_PAPSM=R6PAPSM ;
/* Empty map cell for: R_PARTD       variable wave =  6*/ ;
R_PENCT=R6PENCT ;
R_PENIC1=R6PENIC1 ;
R_PENIC2=R6PENIC2 ;
R_PENINC=R6PENINC ;
R_PENI_N=R6PENI_N ;
R_PEXIT=R6PEXIT ;
/* Empty map cell for: R2_PHONE      variable wave =  6*/ ;
R_PHONE=R6PHONE ;
R_PHONEA=R6PHONEA ;
R_PHONEH=R6PHONEH ;
/* Empty map cell for: R_PHONER      variable wave =  6*/ ;
/* Empty map cell for: R_PMBMI       variable wave =  6*/ ;
/* Empty map cell for: R_PMHGHT      variable wave =  6*/ ;
/* Empty map cell for: R_PMHGHTS     variable wave =  6*/ ;
/* Empty map cell for: R_PMWAIST     variable wave =  6*/ ;
/* Empty map cell for: R_PMWAISTC    variable wave =  6*/ ;
/* Empty map cell for: R_PMWGHT      variable wave =  6*/ ;
/* Empty map cell for: R_PMWGHTF     variable wave =  6*/ ;
/* Empty map cell for: R_PMWGHTS     variable wave =  6*/ ;
R_PNHM5Y=R6PNHM5Y ;
R_PRCHMEM=R6PRCHMEM ;
R_PRES=R6PRES ;
R_PRMEM=R6PRMEM ;
R_PROST=R6PROST ;
R_PROXY=R6PROXY ;
R_PRPCNT=R6PRPCNT ;
R_PRPRM1=R6PRPRM1 ;
R_PRPRM2=R6PRPRM2 ;
R_PRPRM3=R6PRPRM3 ;
R_PRSRC1=R6PRSRC1 ;
R_PRSRC2=R6PRSRC2 ;
R_PRSRC3=R6PRSRC3 ;
R_PSTMEM=R6PSTMEM ;
R_PSYCH=R6PSYCH ;
R_PSYCHE=R6PSYCHE ;
R_PSYCHF=R6PSYCHF ;
R_PSYCHQ=R6PSYCHQ ;
R_PSYCHS=R6PSYCHS ;
R_PTYP1=R6PTYP1 ;
R_PTYP2=R6PTYP2 ;
R_PTYP3=R6PTYP3 ;
R_PTYP4=R6PTYP4 ;
/* Empty map cell for: R_PTYPD1      variable wave =  6*/ ;
/* Empty map cell for: R_PTYPD2      variable wave =  6*/ ;
/* Empty map cell for: R_PTYPD3      variable wave =  6*/ ;
/* Empty map cell for: R_PTYPD4      variable wave =  6*/ ;
/* Empty map cell for: R_PTYPF1      variable wave =  6*/ ;
/* Empty map cell for: R_PTYPF2      variable wave =  6*/ ;
/* Empty map cell for: R_PTYPF3      variable wave =  6*/ ;
/* Empty map cell for: R_PTYPF4      variable wave =  6*/ ;
/* Empty map cell for: R_PUFF        variable wave =  6*/ ;
/* Empty map cell for: R_PUFFPOS     variable wave =  6*/ ;
/* Empty map cell for: R1_PUSH       variable wave =  6*/ ;
/* Empty map cell for: R2_PUSH       variable wave =  6*/ ;
R_PUSH=R6PUSH ;
R_PUSHA=R6PUSHA ;
/* Empty map cell for: R_PUSHW       variable wave =  6*/ ;
R_RETDTWV=R6RETDTWV ;
R_RETEMP=R6RETEMP ;
/* Empty map cell for: R_RETINC      variable wave =  6*/ ;
/* Empty map cell for: R_RETLIV      variable wave =  6*/ ;
R_RETMON=R6RETMON ;
R_RETSAT=R6RETSAT ;
/* Empty map cell for: R_RETWLT      variable wave =  6*/ ;
/* Empty map cell for: R_RETWRK      variable wave =  6*/ ;
/* Empty map cell for: R_RETWSP      variable wave =  6*/ ;
R_RETYR=R6RETYR ;
R_RISK=R6RISK ;
R_RISK6=R6RISK6 ;
R_RPLNYA=R6RPLNYA ;
R_RPLNYR=R6RPLNYR ;
/* Empty map cell for: R_RXPREM      variable wave =  6*/ ;
R_RYRCMP=R6RYRCMP ;
R_SADLF=R6SADLF ;
R_SAMEJOB=R6SAMEJOB ;
R_SAMEMP=R6SAMEMP ;
R_SAYRET=R6SAYRET ;
R_SCIS=R6SCIS ;
R_SDIAPL=R6SDIAPL ;
R_SDIAPLM=R6SDIAPLM ;
R_SDIAPLY=R6SDIAPLY ;
R_SDIAPP=R6SDIAPP ;
R_SDIAPPM=R6SDIAPPM ;
R_SDIAPPY=R6SDIAPPY ;
R_SDIDEN=R6SDIDEN ;
R_SDIREC=R6SDIREC ;
R_SDIRECM=R6SDIRECM ;
R_SDIRECY=R6SDIRECY ;
R_SDISTP=R6SDISTP ;
R_SDISTPM=R6SDISTPM ;
R_SDISTPY=R6SDISTPY ;
R_SER7=R6SER7 ;
R_SHLT=R6SHLT ;
R_SHLTC=R6SHLTC ;
R_SHLTCF=R6SHLTCF ;
R_SHOP=R6SHOP ;
R_SHOPA=R6SHOPA ;
R_SHOPH=R6SHOPH ;
/* Empty map cell for: R_SHOPR       variable wave =  6*/ ;
/* Empty map cell for: R1_SIT        variable wave =  6*/ ;
/* Empty map cell for: R2_SIT        variable wave =  6*/ ;
R_SIT=R6SIT ;
R_SITA=R6SITA ;
/* Empty map cell for: R_SITW        variable wave =  6*/ ;
/* Empty map cell for: R_SLEEP       variable wave =  6*/ ;
/* Empty map cell for: R_SLEEPE      variable wave =  6*/ ;
/* Empty map cell for: R_SLEEPQ      variable wave =  6*/ ;
R_SLEEPR=R6SLEEPR ;
/* Empty map cell for: R_SLEEPS      variable wave =  6*/ ;
/* Empty map cell for: R_SLEEPX      variable wave =  6*/ ;
R_SLFEMP=R6SLFEMP ;
R_SLFMEM=R6SLFMEM ;
R_SMOKEN=R6SMOKEN ;
R_SMOKEV=R6SMOKEV ;
R_SPCFAC=R6SPCFAC ;
/* Empty map cell for: R_SSAPL       variable wave =  6*/ ;
/* Empty map cell for: R_SSAPLM      variable wave =  6*/ ;
/* Empty map cell for: R_SSAPLY      variable wave =  6*/ ;
/* Empty map cell for: R_SSAPP       variable wave =  6*/ ;
/* Empty map cell for: R_SSAPPM      variable wave =  6*/ ;
/* Empty map cell for: R_SSAPPY      variable wave =  6*/ ;
/* Empty map cell for: R_SSDEN       variable wave =  6*/ ;
R_SSDI=R6SSDI ;
R_SSIAPL=R6SSIAPL ;
R_SSIAPLM=R6SSIAPLM ;
R_SSIAPLY=R6SSIAPLY ;
R_SSIAPP=R6SSIAPP ;
R_SSIAPPM=R6SSIAPPM ;
R_SSIAPPY=R6SSIAPPY ;
R_SSIDEN=R6SSIDEN ;
R_SSIREC=R6SSIREC ;
R_SSIRECM=R6SSIRECM ;
R_SSIRECY=R6SSIRECY ;
R_SSISTP=R6SSISTP ;
R_SSISTPM=R6SSISTPM ;
R_SSISTPY=R6SSISTPY ;
/* Empty map cell for: R_SSREC       variable wave =  6*/ ;
/* Empty map cell for: R_SSRECM      variable wave =  6*/ ;
/* Empty map cell for: R_SSRECY      variable wave =  6*/ ;
/* Empty map cell for: R_SSSTP       variable wave =  6*/ ;
/* Empty map cell for: R_SSSTPM      variable wave =  6*/ ;
/* Empty map cell for: R_SSSTPY      variable wave =  6*/ ;
/* Empty map cell for: R_SSWRER      variable wave =  6*/ ;
/* Empty map cell for: R_SSWRNR      variable wave =  6*/ ;
/* Empty map cell for: R_SSWRXA      variable wave =  6*/ ;
/* Empty map cell for: R_SSWSER      variable wave =  6*/ ;
/* Empty map cell for: R_SSWSNR      variable wave =  6*/ ;
/* Empty map cell for: R_SSWSXA      variable wave =  6*/ ;
R_STATUS=R6STATUS ;
/* Empty map cell for: R1_STOOP      variable wave =  6*/ ;
/* Empty map cell for: R2_STOOP      variable wave =  6*/ ;
R_STOOP=R6STOOP ;
R_STOOPA=R6STOOPA ;
/* Empty map cell for: R_STOOPW      variable wave =  6*/ ;
R_STROK=R6STROK ;
R_STROKE=R6STROKE ;
R_STROKF=R6STROKF ;
R_STROKQ=R6STROKQ ;
R_STROKS=R6STROKS ;
/* Empty map cell for: R_TIMWLK      variable wave =  6*/ ;
/* Empty map cell for: R_TIMWLKA     variable wave =  6*/ ;
/* Empty map cell for: R_TLIPRM      variable wave =  6*/ ;
/* Empty map cell for: R2_TOILT      variable wave =  6*/ ;
R_TOILT=R6TOILT ;
R_TOILTA=R6TOILTA ;
/* Empty map cell for: R2_TOILTH     variable wave =  6*/ ;
R_TOILTH=R6TOILTH ;
R_TOTMBF=R6TOTMBF ;
R_TOTMBI=R6TOTMBI ;
/* Empty map cell for: R_TOTMD       variable wave =  6*/ ;
/* Empty map cell for: R_TOTMDF      variable wave =  6*/ ;
R_TR20=R6TR20 ;
/* Empty map cell for: R_TR40        variable wave =  6*/ ;
R_TYLTC=R6TYLTC ;
/* Empty map cell for: R_ULCER       variable wave =  6*/ ;
R_UNEMP=R6UNEMP ;
R_UNION=R6UNION ;
R_UNIONF=R6UNIONF ;
/* Empty map cell for: R_VGACTF      variable wave =  6*/ ;
/* Empty map cell for: R_VGACTN      variable wave =  6*/ ;
/* Empty map cell for: R_VGACTP      variable wave =  6*/ ;
/* Empty map cell for: R_VGACTX      variable wave =  6*/ ;
R_VIGACT=R6VIGACT ;
R_VOCAB=R6VOCAB ;
R_VP=R6VP ;
/* Empty map cell for: R1_WALK1      variable wave =  6*/ ;
/* Empty map cell for: R2_WALK1      variable wave =  6*/ ;
R_WALK1=R6WALK1 ;
R_WALK1A=R6WALK1A ;
/* Empty map cell for: R_WALK1W      variable wave =  6*/ ;
/* Empty map cell for: R1_WALKR      variable wave =  6*/ ;
/* Empty map cell for: R2_WALKR      variable wave =  6*/ ;
R_WALKR=R6WALKR ;
R_WALKRA=R6WALKRA ;
R_WALKRE=R6WALKRE ;
/* Empty map cell for: R2_WALKRH     variable wave =  6*/ ;
R_WALKRH=R6WALKRH ;
/* Empty map cell for: R_WALKRW      variable wave =  6*/ ;
/* Empty map cell for: R1_WALKS      variable wave =  6*/ ;
/* Empty map cell for: R2_WALKS      variable wave =  6*/ ;
R_WALKS=R6WALKS ;
R_WALKSA=R6WALKSA ;
/* Empty map cell for: R_WALKSW      variable wave =  6*/ ;
R_WANDER=R6WANDER ;
R_WEIGHT=R6WEIGHT ;
R_WGFHR=R6WGFHR ;
R_WGFWK=R6WGFWK ;
R_WGIHR=R6WGIHR ;
R_WGIWK=R6WGIWK ;
/* Empty map cell for: R_WHAPPX      variable wave =  6*/ ;
R_WHAPPY=R6WHAPPY ;
R_WLIPRM=R6WLIPRM ;
R_WORK=R6WORK ;
R_WORK2=R6WORK2 ;
R_WORK62=R6WORK62 ;
R_WORK62F=R6WORK62F ;
R_WORK65=R6WORK65 ;
R_WORK65F=R6WORK65F ;
/* Empty map cell for: R_WORK70      variable wave =  6*/ ;
/* Empty map cell for: R_WORK70A     variable wave =  6*/ ;
/* Empty map cell for: R_WORK70AF    variable wave =  6*/ ;
/* Empty map cell for: R_WORK70F     variable wave =  6*/ ;
R_WORKLM=R6WORKLM ;
R_WTCRNH=R6WTCRNH ;
R_WTHH=R6WTHH ;
R_WTRESP=R6WTRESP ;
R_WTR_NH=R6WTR_NH ;
R_YR=R6YR ;
if inw=1 then output ;
%put --- Rlong table ;
%initvars ;
%put ---- Rlong table ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
WAVE_NUMBER=7 ;
H_HHIDC=H7HHIDC ;
SUBHH= substr(H_HHIDC,7)     /* --- Derived variable  */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
INW=INW7 ;
WAVE_NAME=  'hrs_wave'||strip(put(wave_number,3.))     /* --- Derived variable  */ ;
CYEAR='yr2004' ;
/* --- RAND variable:HACOHORT  included */ ;
studyyr= hrs_studyyr(wave_number,
hacohort)     /* --- Derived variable  */ ;
H_HHID=H7HHID ;
S_HHIDPN=S7HHIDPN ;
/* Empty map cell for: R_ACGTOT      variable wave =  7*/ ;
R_ADL5A=R7ADL5A ;
R_ADL5H=R7ADL5H ;
R_ADL6A=R7ADL6A ;
R_ADL6H=R7ADL6H ;
/* Empty map cell for: R_ADLR10      variable wave =  7*/ ;
/* Empty map cell for: R_ADLW        variable wave =  7*/ ;
R_AGEM_B=R7AGEM_B ;
R_AGEM_E=R7AGEM_E ;
R_AGEM_M=R7AGEM_M ;
R_AGEY_B=R7AGEY_B ;
R_AGEY_E=R7AGEY_E ;
R_AGEY_M=R7AGEY_M ;
/* Empty map cell for: R_AIMR10      variable wave =  7*/ ;
R_ALONE=R7ALONE ;
/* Empty map cell for: R_ALZHE       variable wave =  7*/ ;
/* Empty map cell for: R_ALZHEE      variable wave =  7*/ ;
/* Empty map cell for: R_ALZHEF      variable wave =  7*/ ;
/* Empty map cell for: R_ALZHEQ      variable wave =  7*/ ;
/* Empty map cell for: R_ALZHES      variable wave =  7*/ ;
/* Empty map cell for: R_AMSTOT      variable wave =  7*/ ;
R_ANS3PQ=R7ANS3PQ ;
/* Empty map cell for: R1_ARMS       variable wave =  7*/ ;
/* Empty map cell for: R2_ARMS       variable wave =  7*/ ;
R_ARMS=R7ARMS ;
R_ARMSA=R7ARMSA ;
/* Empty map cell for: R_ARMSW       variable wave =  7*/ ;
R_ARTHR=R7ARTHR ;
R_ARTHRE=R7ARTHRE ;
R_ARTHRF=R7ARTHRF ;
R_ARTHRQ=R7ARTHRQ ;
R_ARTHRS=R7ARTHRS ;
/* Empty map cell for: R_ATR20       variable wave =  7*/ ;
R_BACK=R7BACK ;
/* Empty map cell for: R_BALFUL      variable wave =  7*/ ;
/* Empty map cell for: R_BALFULC     variable wave =  7*/ ;
/* Empty map cell for: R_BALFULT     variable wave =  7*/ ;
/* Empty map cell for: R_BALSBS      variable wave =  7*/ ;
/* Empty map cell for: R_BALSBSC     variable wave =  7*/ ;
/* Empty map cell for: R_BALSEMI     variable wave =  7*/ ;
/* Empty map cell for: R_BALSEMIC    variable wave =  7*/ ;
/* Empty map cell for: R1_BATH       variable wave =  7*/ ;
/* Empty map cell for: R2_BATH       variable wave =  7*/ ;
R_BATH=R7BATH ;
R_BATHA=R7BATHA ;
/* Empty map cell for: R2_BATHH      variable wave =  7*/ ;
R_BATHH=R7BATHH ;
/* Empty map cell for: R_BATHW       variable wave =  7*/ ;
/* Empty map cell for: R1_BED        variable wave =  7*/ ;
/* Empty map cell for: R2_BED        variable wave =  7*/ ;
R_BED=R7BED ;
R_BEDA=R7BEDA ;
R_BEDE=R7BEDE ;
/* Empty map cell for: R2_BEDH       variable wave =  7*/ ;
R_BEDH=R7BEDH ;
/* Empty map cell for: R_BEDW        variable wave =  7*/ ;
R_BEQ100=R7BEQ100 ;
R_BEQ10K=R7BEQ10K ;
R_BEQ500=R7BEQ500 ;
R_BEQANY=R7BEQANY ;
/* Empty map cell for: R_BEQLRG      variable wave =  7*/ ;
R_BMI=R7BMI ;
/* Empty map cell for: R_BPDIA       variable wave =  7*/ ;
/* Empty map cell for: R_BPPOS       variable wave =  7*/ ;
/* Empty map cell for: R_BPPULS      variable wave =  7*/ ;
/* Empty map cell for: R_BPSYS       variable wave =  7*/ ;
R_BREAST=R7BREAST ;
R_BWC20=R7BWC20 ;
/* Empty map cell for: R_BWC86       variable wave =  7*/ ;
R_CACT=R7CACT ;
/* Empty map cell for: R1_CALC       variable wave =  7*/ ;
/* Empty map cell for: R2_CALC       variable wave =  7*/ ;
/* Empty map cell for: R_CALCA       variable wave =  7*/ ;
/* Empty map cell for: R_CALCW       variable wave =  7*/ ;
R_CANCR=R7CANCR ;
R_CANCRE=R7CANCRE ;
R_CANCRF=R7CANCRF ;
R_CANCRQ=R7CANCRQ ;
R_CANCRS=R7CANCRS ;
R_CENDIV=R7CENDIV ;
R_CENREG=R7CENREG ;
R_CESD=R7CESD ;
R_CESDM=R7CESDM ;
/* Empty map cell for: R1_CHAIR      variable wave =  7*/ ;
/* Empty map cell for: R2_CHAIR      variable wave =  7*/ ;
R_CHAIR=R7CHAIR ;
R_CHAIRA=R7CHAIRA ;
/* Empty map cell for: R_CHAIRW      variable wave =  7*/ ;
R_CHOLST=R7CHOLST ;
R_CLAIMED=R7CLAIMED ;
/* Empty map cell for: R1_CLIM1      variable wave =  7*/ ;
/* Empty map cell for: R2_CLIM1      variable wave =  7*/ ;
R_CLIM1=R7CLIM1 ;
R_CLIM1A=R7CLIM1A ;
/* Empty map cell for: R_CLIM1W      variable wave =  7*/ ;
/* Empty map cell for: R1_CLIMS      variable wave =  7*/ ;
/* Empty map cell for: R2_CLIMS      variable wave =  7*/ ;
R_CLIMS=R7CLIMS ;
R_CLIMSA=R7CLIMSA ;
/* Empty map cell for: R_CLIMSW      variable wave =  7*/ ;
R_COGTOT=R7COGTOT ;
/* Empty map cell for: R_COMP        variable wave =  7*/ ;
/* Empty map cell for: R_COMPW       variable wave =  7*/ ;
R_CONDE=R7CONDE ;
R_CONDEF=R7CONDEF ;
R_CONDS=R7CONDS ;
R_CONDSF=R7CONDSF ;
R_CONDSP=R7CONDSP ;
R_COVR=R7COVR ;
R_COVRT=R7COVRT ;
R_COVS=R7COVS ;
R_DADAGE=R7DADAGE ;
R_DADLIV=R7DADLIV ;
R_DCBAL1=R7DCBAL1 ;
R_DCBAL2=R7DCBAL2 ;
R_DCBAL3=R7DCBAL3 ;
R_DCBAL4=R7DCBAL4 ;
R_DCBENE1=R7DCBENE1 ;
R_DCBENE2=R7DCBENE2 ;
R_DCBENE3=R7DCBENE3 ;
R_DCBENE4=R7DCBENE4 ;
R_DCCONT1=R7DCCONT1 ;
R_DCCONT2=R7DCCONT2 ;
R_DCCONT3=R7DCCONT3 ;
R_DCCONT4=R7DCCONT4 ;
R_DCMODE1=R7DCMODE1 ;
R_DCMODE2=R7DCMODE2 ;
R_DCMODE3=R7DCMODE3 ;
R_DCMODE4=R7DCMODE4 ;
R_DCPCT1=R7DCPCT1 ;
R_DCPCT2=R7DCPCT2 ;
R_DCPCT3=R7DCPCT3 ;
R_DCPCT4=R7DCPCT4 ;
/* Empty map cell for: R_DEMEN       variable wave =  7*/ ;
/* Empty map cell for: R_DEMENE      variable wave =  7*/ ;
/* Empty map cell for: R_DEMENF      variable wave =  7*/ ;
/* Empty map cell for: R_DEMENQ      variable wave =  7*/ ;
/* Empty map cell for: R_DEMENS      variable wave =  7*/ ;
R_DENTST=R7DENTST ;
R_DEPRES=R7DEPRES ;
/* Empty map cell for: R_DEPREX      variable wave =  7*/ ;
R_DIAB=R7DIAB ;
R_DIABE=R7DIABE ;
R_DIABF=R7DIABF ;
R_DIABQ=R7DIABQ ;
R_DIABS=R7DIABS ;
/* Empty map cell for: R1_DIME       variable wave =  7*/ ;
/* Empty map cell for: R2_DIME       variable wave =  7*/ ;
R_DIME=R7DIME ;
R_DIMEA=R7DIMEA ;
/* Empty map cell for: R_DIMEW       variable wave =  7*/ ;
R_DLRC=R7DLRC ;
/* Empty map cell for: R_DLRC20      variable wave =  7*/ ;
R_DOCTIM=R7DOCTIM ;
R_DOCTOR=R7DOCTOR ;
/* Empty map cell for: R1_DRESS      variable wave =  7*/ ;
/* Empty map cell for: R2_DRESS      variable wave =  7*/ ;
R_DRESS=R7DRESS ;
R_DRESSA=R7DRESSA ;
/* Empty map cell for: R2_DRESSH     variable wave =  7*/ ;
R_DRESSH=R7DRESSH ;
/* Empty map cell for: R_DRESSW      variable wave =  7*/ ;
R_DRINK=R7DRINK ;
R_DRINKD=R7DRINKD ;
R_DRINKN=R7DRINKN ;
/* Empty map cell for: R_DRINKR      variable wave =  7*/ ;
R_DRUGS=R7DRUGS ;
R_DSIAMT=R7DSIAMT ;
R_DSSAMT=R7DSSAMT ;
R_DSTAT=R7DSTAT ;
R_DW=R7DW ;
R_DY=R7DY ;
/* Empty map cell for: R1_EAT        variable wave =  7*/ ;
/* Empty map cell for: R2_EAT        variable wave =  7*/ ;
R_EAT=R7EAT ;
R_EATA=R7EATA ;
/* Empty map cell for: R2_EATH       variable wave =  7*/ ;
R_EATH=R7EATH ;
/* Empty map cell for: R_EATW        variable wave =  7*/ ;
R_EFFORT=R7EFFORT ;
/* Empty map cell for: R_EFFORX      variable wave =  7*/ ;
R_ENLIFE=R7ENLIFE ;
/* Empty map cell for: R_ENLIFX      variable wave =  7*/ ;
R_FAMR=R7FAMR ;
R_FBWC20=R7FBWC20 ;
/* Empty map cell for: R_FBWC86      variable wave =  7*/ ;
R_FCACT=R7FCACT ;
R_FDLRC=R7FDLRC ;
R_FDW=R7FDW ;
R_FDY=R7FDY ;
R_FIMRC=R7FIMRC ;
R_FINEA=R7FINEA ;
R_FINPLN=R7FINPLN ;
R_FINR=R7FINR ;
/* Empty map cell for: R_FLAG        variable wave =  7*/ ;
R_FLONE=R7FLONE ;
/* Empty map cell for: R_FLONEX      variable wave =  7*/ ;
R_FLUSHT=R7FLUSHT ;
R_FMO=R7FMO ;
R_FPRES=R7FPRES ;
R_FPSTME=R7FPSTME ;
R_FSAD=R7FSAD ;
/* Empty map cell for: R_FSADX       variable wave =  7*/ ;
R_FSCIS=R7FSCIS ;
R_FSER7=R7FSER7 ;
R_FSIZE=R7FSIZE ;
R_FSIZEF=R7FSIZEF ;
R_FSLFME=R7FSLFME ;
R_FVOCAB=R7FVOCAB ;
R_FVP=R7FVP ;
R_FYR=R7FYR ;
R_GOING=R7GOING ;
/* Empty map cell for: R_GOINGX      variable wave =  7*/ ;
R_GOVMD=R7GOVMD ;
R_GOVMR=R7GOVMR ;
/* Empty map cell for: R_GOVOT       variable wave =  7*/ ;
R_GOVVA=R7GOVVA ;
R_GROSSA=R7GROSSA ;
/* Empty map cell for: R_GRP         variable wave =  7*/ ;
/* Empty map cell for: R_GRPDOM      variable wave =  7*/ ;
/* Empty map cell for: R_GRPL        variable wave =  7*/ ;
/* Empty map cell for: R_GRPPOS      variable wave =  7*/ ;
/* Empty map cell for: R_GRPR        variable wave =  7*/ ;
R_HALUC=R7HALUC ;
/* Empty map cell for: R_HDLR20      variable wave =  7*/ ;
R_HEART=R7HEART ;
R_HEARTE=R7HEARTE ;
R_HEARTF=R7HEARTF ;
R_HEARTQ=R7HEARTQ ;
R_HEARTS=R7HEARTS ;
R_HECOV1=R7HECOV1 ;
R_HECOV2=R7HECOV2 ;
R_HECOV3=R7HECOV3 ;
R_HEIGHT=R7HEIGHT ;
R_HENUM=R7HENUM ;
R_HERET=R7HERET ;
R_HERTR1=R7HERTR1 ;
R_HERTR2=R7HERTR2 ;
R_HERTR3=R7HERTR3 ;
R_HERTS1=R7HERTS1 ;
R_HERTS2=R7HERTS2 ;
R_HERTS3=R7HERTS3 ;
R_HESRC1=R7HESRC1 ;
R_HESRC2=R7HESRC2 ;
R_HESRC3=R7HESRC3 ;
R_HIBP=R7HIBP ;
R_HIBPE=R7HIBPE ;
R_HIBPF=R7HIBPF ;
R_HIBPQ=R7HIBPQ ;
R_HIBPS=R7HIBPS ;
R_HIGOV=R7HIGOV ;
R_HILTC=R7HILTC ;
/* Empty map cell for: R_HIMR20      variable wave =  7*/ ;
R_HIOTHP=R7HIOTHP ;
R_HLPDYSF=R7HLPDYSF ;
R_HLPDYSNF=R7HLPDYSNF ;
R_HLPDYSP=R7HLPDYSP ;
R_HLPDYST=R7HLPDYST ;
R_HLPDYSU=R7HLPDYSU ;
R_HLPHRSF=R7HLPHRSF ;
R_HLPHRSNF=R7HLPHRSNF ;
R_HLPHRSP=R7HLPHRSP ;
R_HLPHRST=R7HLPHRST ;
R_HLPHRSU=R7HLPHRSU ;
R_HLPPDFA=R7HLPPDFA ;
R_HLPPDFN=R7HLPPDFN ;
R_HLPPDNFA=R7HLPPDNFA ;
R_HLPPDNFN=R7HLPPDNFN ;
R_HLPPDTA=R7HLPPDTA ;
R_HLPPDTN=R7HLPPDTN ;
R_HLPRFN=R7HLPRFN ;
R_HLPRNFN=R7HLPRNFN ;
R_HLPRPN=R7HLPRPN ;
R_HLPRTN=R7HLPRTN ;
R_HLPRUN=R7HLPRUN ;
R_HLTC3=R7HLTC3 ;
/* Empty map cell for: R_HLTC5       variable wave =  7*/ ;
/* Empty map cell for: R_HLTC5F      variable wave =  7*/ ;
R_HLTHLM=R7HLTHLM ;
R_HOMCAR=R7HOMCAR ;
R_HOSP=R7HOSP ;
R_HSPNIT=R7HSPNIT ;
R_HSPTIM=R7HSPTIM ;
/* Empty map cell for: R_HSWRKF      variable wave =  7*/ ;
/* Empty map cell for: R_HTR40       variable wave =  7*/ ;
R_IADL5A=R7IADL5A ;
R_IADL5H=R7IADL5H ;
R_IANN=R7IANN ;
R_IEARN=R7IEARN ;
R_IFANN=R7IFANN ;
R_IFEARN=R7IFEARN ;
R_IFGXFR=R7IFGXFR ;
R_IFIRAW=R7IFIRAW ;
/* Empty map cell for: R_IFIRAWY1    variable wave =  7*/ ;
R_IFPEN=R7IFPEN ;
R_IFPENA=R7IFPENA ;
R_IFSDI=R7IFSDI ;
R_IFSRET=R7IFSRET ;
R_IFSSDI=R7IFSSDI ;
/* Empty map cell for: R_IFSSI       variable wave =  7*/ ;
R_IFUNEM=R7IFUNEM ;
R_IFUNWC=R7IFUNWC ;
R_IFWCMP=R7IFWCMP ;
R_IGXFR=R7IGXFR ;
R_IIRAW=R7IIRAW ;
R_IIRAWY1=R7IIRAWY1 ;
R_IMRC=R7IMRC ;
/* Empty map cell for: R_IMRC20      variable wave =  7*/ ;
R_INHER=R7INHER ;
R_INHPE=R7INHPE ;
R_INHPFN=R7INHPFN ;
R_INHPNFN=R7INHPNFN ;
R_INHPPN=R7INHPPN ;
R_INHPTN=R7INHPTN ;
R_INHPUN=R7INHPUN ;
R_INLBRF=R7INLBRF ;
R_IPEN=R7IPEN ;
R_IPENA=R7IPENA ;
R_ISDI=R7ISDI ;
R_ISRET=R7ISRET ;
R_ISSDI=R7ISSDI ;
R_ISSI=R7ISSI ;
R_IUNEM=R7IUNEM ;
R_IUNWC=R7IUNWC ;
R_IWBEG=R7IWBEG ;
/* Empty map cell for: R_IWBEGF      variable wave =  7*/ ;
R_IWCMP=R7IWCMP ;
R_IWEND=R7IWEND ;
/* Empty map cell for: R_IWENDF      variable wave =  7*/ ;
R_IWENDM=R7IWENDM ;
R_IWENDY=R7IWENDY ;
R_IWMID=R7IWMID ;
R_IWMIDF=R7IWMIDF ;
R_IWSTAT=R7IWSTAT ;
R_JCIND=R7JCIND ;
R_JCINDB=R7JCINDB ;
/* Empty map cell for: R_JCINDC      variable wave =  7*/ ;
R_JCOCC=R7JCOCC ;
R_JCOCCA=R7JCOCCA ;
R_JCOCCB=R7JCOCCB ;
/* Empty map cell for: R_JCOCCC      variable wave =  7*/ ;
R_JCPEN=R7JCPEN ;
R_JCPENF=R7JCPENF ;
R_JCTEN=R7JCTEN ;
R_JHOUR2=R7JHOUR2 ;
R_JHOURS=R7JHOURS ;
R_JJOBS=R7JJOBS ;
R_JLASTM=R7JLASTM ;
R_JLASTY=R7JLASTY ;
R_JLIFT=R7JLIFT ;
R_JLIND=R7JLIND ;
R_JLINDB=R7JLINDB ;
/* Empty map cell for: R_JLINDC      variable wave =  7*/ ;
R_JLMIS=R7JLMIS ;
R_JLOCC=R7JLOCC ;
R_JLOCCA=R7JLOCCA ;
R_JLOCCB=R7JLOCCB ;
/* Empty map cell for: R_JLOCCC      variable wave =  7*/ ;
R_JLTEN=R7JLTEN ;
R_JLTENF=R7JLTENF ;
R_JMISS=R7JMISS ;
R_JNJOB=R7JNJOB ;
R_JNJOB5=R7JNJOB5 ;
/* Empty map cell for: R1_JOG        variable wave =  7*/ ;
/* Empty map cell for: R2_JOG        variable wave =  7*/ ;
R_JOG=R7JOG ;
R_JOGA=R7JOGA ;
/* Empty map cell for: R_JOGW        variable wave =  7*/ ;
R_JPHYS=R7JPHYS ;
R_JSIGHT=R7JSIGHT ;
R_JSTOOP=R7JSTOOP ;
R_JSTRES=R7JSTRES ;
R_JWEEK2=R7JWEEK2 ;
R_JWEEKS=R7JWEEKS ;
R_JYEARM=R7JYEARM ;
R_JYEARS=R7JYEARS ;
/* Empty map cell for: R_LBAGR       variable wave =  7*/ ;
/* Empty map cell for: R_LBASSISTPRB variable wave =  7*/ ;
/* Empty map cell for: R_LBCOMP      variable wave =  7*/ ;
/* Empty map cell for: R_LBCON10     variable wave =  7*/ ;
/* Empty map cell for: R_LBCON5      variable wave =  7*/ ;
/* Empty map cell for: R_LBELIG      variable wave =  7*/ ;
/* Empty map cell for: R_LBEXT       variable wave =  7*/ ;
/* Empty map cell for: R_LBFAMDRUGPRBvariable wave =  7*/ ;
/* Empty map cell for: R_LBFAMHLTHPRBvariable wave =  7*/ ;
/* Empty map cell for: R_LBFINPRB    variable wave =  7*/ ;
/* Empty map cell for: R_LBHLTHPRB   variable wave =  7*/ ;
/* Empty map cell for: R_LBHOUSEPRB  variable wave =  7*/ ;
/* Empty map cell for: R_LBLONELY11  variable wave =  7*/ ;
/* Empty map cell for: R_LBLONELY3   variable wave =  7*/ ;
/* Empty map cell for: R_LBNEGAFFECT variable wave =  7*/ ;
/* Empty map cell for: R_LBNEGAFFECT6variable wave =  7*/ ;
/* Empty map cell for: R_LBNEUR      variable wave =  7*/ ;
/* Empty map cell for: R_LBONCHRSTR  variable wave =  7*/ ;
/* Empty map cell for: R_LBOPEN      variable wave =  7*/ ;
/* Empty map cell for: R_LBPOSAFFECT variable wave =  7*/ ;
/* Empty map cell for: R_LBPOSAFFECT6variable wave =  7*/ ;
R_LBRF=R7LBRF ;
R_LBRFH=R7LBRFH ;
R_LBRFY=R7LBRFY ;
/* Empty map cell for: R_LBRLTNSHPRB variable wave =  7*/ ;
/* Empty map cell for: R_LBSATCITY   variable wave =  7*/ ;
/* Empty map cell for: R_LBSATFAM    variable wave =  7*/ ;
/* Empty map cell for: R_LBSATFIN    variable wave =  7*/ ;
/* Empty map cell for: R_LBSATHLTH   variable wave =  7*/ ;
/* Empty map cell for: R_LBSATHOME   variable wave =  7*/ ;
/* Empty map cell for: R_LBSATINC    variable wave =  7*/ ;
/* Empty map cell for: R_LBSATLEISUREvariable wave =  7*/ ;
/* Empty map cell for: R_LBSATLIFE   variable wave =  7*/ ;
/* Empty map cell for: R_LBSATWLF    variable wave =  7*/ ;
/* Empty map cell for: R_LBWGTR      variable wave =  7*/ ;
/* Empty map cell for: R_LBWORKPRB   variable wave =  7*/ ;
R_LGMUSA=R7LGMUSA ;
/* Empty map cell for: R_LGMUSW      variable wave =  7*/ ;
/* Empty map cell for: R_LHTACT      variable wave =  7*/ ;
R_LIFEIN=R7LIFEIN ;
/* Empty map cell for: R1_LIFT       variable wave =  7*/ ;
/* Empty map cell for: R2_LIFT       variable wave =  7*/ ;
R_LIFT=R7LIFT ;
R_LIFTA=R7LIFTA ;
/* Empty map cell for: R_LIFTW       variable wave =  7*/ ;
R_LIV10=R7LIV10 ;
R_LIV10A=R7LIV10A ;
R_LIV10P=R7LIV10P ;
R_LIV10R=R7LIV10R ;
R_LIV75=R7LIV75 ;
R_LIV75C=R7LIV75C ;
R_LIV75F=R7LIV75F ;
R_LIV75P=R7LIV75P ;
R_LIV75R=R7LIV75R ;
/* Empty map cell for: R_LIV85       variable wave =  7*/ ;
/* Empty map cell for: R_LIV85C      variable wave =  7*/ ;
/* Empty map cell for: R_LIV85F      variable wave =  7*/ ;
/* Empty map cell for: R_LIV85P      variable wave =  7*/ ;
/* Empty map cell for: R_LIV85R      variable wave =  7*/ ;
R_LIV8XC=R7LIV8XC ;
R_LIV8XF=R7LIV8XF ;
R_LIVBRO=R7LIVBRO ;
R_LIVPAR=R7LIVPAR ;
R_LIVSIB=R7LIVSIB ;
R_LIVSIS=R7LIVSIS ;
R_LOST=R7LOST ;
/* Empty map cell for: R_LTACTF      variable wave =  7*/ ;
/* Empty map cell for: R_LTACTN      variable wave =  7*/ ;
/* Empty map cell for: R_LTACTP      variable wave =  7*/ ;
R_LTACTX=R7LTACTX ;
R_LTCPRM=R7LTCPRM ;
R_LUNG=R7LUNG ;
R_LUNGE=R7LUNGE ;
R_LUNGF=R7LUNGF ;
R_LUNGQ=R7LUNGQ ;
R_LUNGS=R7LUNGS ;
R_MAMMOG=R7MAMMOG ;
/* Empty map cell for: R1_MAP        variable wave =  7*/ ;
/* Empty map cell for: R2_MAP        variable wave =  7*/ ;
R_MAP=R7MAP ;
R_MAPA=R7MAPA ;
/* Empty map cell for: R_MAPW        variable wave =  7*/ ;
R_MCURLN=R7MCURLN ;
/* Empty map cell for: R_MCWV        variable wave =  7*/ ;
/* Empty map cell for: R_MCWVW       variable wave =  7*/ ;
R_MDACTX=R7MDACTX ;
R_MDIV=R7MDIV ;
R_MEALS=R7MEALS ;
R_MEALSA=R7MEALSA ;
R_MEALSH=R7MEALSH ;
/* Empty map cell for: R_MEALSR      variable wave =  7*/ ;
/* Empty map cell for: R2_MEDS       variable wave =  7*/ ;
R_MEDS=R7MEDS ;
R_MEDSA=R7MEDSA ;
R_MEDSH=R7MEDSH ;
/* Empty map cell for: R_MEDSR       variable wave =  7*/ ;
R_MEMRY=R7MEMRY ;
R_MEMRYE=R7MEMRYE ;
R_MEMRYF=R7MEMRYF ;
R_MEMRYQ=R7MEMRYQ ;
R_MEMRYS=R7MEMRYS ;
R_MEND=R7MEND ;
R_MLEN=R7MLEN ;
R_MLENM=R7MLENM ;
R_MNEV=R7MNEV ;
R_MO=R7MO ;
R_MOBILA=R7MOBILA ;
/* Empty map cell for: R_MOBILW      variable wave =  7*/ ;
R_MOMAGE=R7MOMAGE ;
R_MOMLIV=R7MOMLIV ;
/* Empty map cell for: R2_MONEY      variable wave =  7*/ ;
R_MONEY=R7MONEY ;
R_MONEYA=R7MONEYA ;
R_MONEYH=R7MONEYH ;
/* Empty map cell for: R_MONEYR      variable wave =  7*/ ;
R_MPART=R7MPART ;
R_MRCT=R7MRCT ;
R_MRPREM=R7MRPREM ;
R_MSTAT=R7MSTAT ;
R_MSTATF=R7MSTATF ;
R_MSTATH=R7MSTATH ;
R_MSTOT=R7MSTOT ;
R_MWID=R7MWID ;
R_NHMDAY=R7NHMDAY ;
R_NHMLIV=R7NHMLIV ;
R_NHMMVM=R7NHMMVM ;
R_NHMMVY=R7NHMMVY ;
R_NOTICS=R7NOTICS ;
R_NOVOC=R7NOVOC ;
R_NRSHOM=R7NRSHOM ;
R_NRSNIT=R7NRSNIT ;
R_NRSTIM=R7NRSTIM ;
/* Empty map cell for: R_NSSCRE      variable wave =  7*/ ;
/* Empty map cell for: R_NSSCSE      variable wave =  7*/ ;
R_OOPMD=R7OOPMD ;
R_OOPMDF=R7OOPMDF ;
/* Empty map cell for: R_OOPMDO      variable wave =  7*/ ;
/* Empty map cell for: R_OOPMDOF     variable wave =  7*/ ;
R_OUTPT=R7OUTPT ;
R_PAPSM=R7PAPSM ;
/* Empty map cell for: R_PARTD       variable wave =  7*/ ;
R_PENCT=R7PENCT ;
R_PENIC1=R7PENIC1 ;
R_PENIC2=R7PENIC2 ;
R_PENINC=R7PENINC ;
R_PENI_N=R7PENI_N ;
R_PEXIT=R7PEXIT ;
/* Empty map cell for: R2_PHONE      variable wave =  7*/ ;
R_PHONE=R7PHONE ;
R_PHONEA=R7PHONEA ;
R_PHONEH=R7PHONEH ;
/* Empty map cell for: R_PHONER      variable wave =  7*/ ;
/* Empty map cell for: R_PMBMI       variable wave =  7*/ ;
/* Empty map cell for: R_PMHGHT      variable wave =  7*/ ;
/* Empty map cell for: R_PMHGHTS     variable wave =  7*/ ;
/* Empty map cell for: R_PMWAIST     variable wave =  7*/ ;
/* Empty map cell for: R_PMWAISTC    variable wave =  7*/ ;
/* Empty map cell for: R_PMWGHT      variable wave =  7*/ ;
/* Empty map cell for: R_PMWGHTF     variable wave =  7*/ ;
/* Empty map cell for: R_PMWGHTS     variable wave =  7*/ ;
R_PNHM5Y=R7PNHM5Y ;
R_PRCHMEM=R7PRCHMEM ;
R_PRES=R7PRES ;
R_PRMEM=R7PRMEM ;
R_PROST=R7PROST ;
R_PROXY=R7PROXY ;
R_PRPCNT=R7PRPCNT ;
R_PRPRM1=R7PRPRM1 ;
R_PRPRM2=R7PRPRM2 ;
R_PRPRM3=R7PRPRM3 ;
R_PRSRC1=R7PRSRC1 ;
R_PRSRC2=R7PRSRC2 ;
R_PRSRC3=R7PRSRC3 ;
R_PSTMEM=R7PSTMEM ;
R_PSYCH=R7PSYCH ;
R_PSYCHE=R7PSYCHE ;
R_PSYCHF=R7PSYCHF ;
R_PSYCHQ=R7PSYCHQ ;
R_PSYCHS=R7PSYCHS ;
R_PTYP1=R7PTYP1 ;
R_PTYP2=R7PTYP2 ;
R_PTYP3=R7PTYP3 ;
R_PTYP4=R7PTYP4 ;
/* Empty map cell for: R_PTYPD1      variable wave =  7*/ ;
/* Empty map cell for: R_PTYPD2      variable wave =  7*/ ;
/* Empty map cell for: R_PTYPD3      variable wave =  7*/ ;
/* Empty map cell for: R_PTYPD4      variable wave =  7*/ ;
/* Empty map cell for: R_PTYPF1      variable wave =  7*/ ;
/* Empty map cell for: R_PTYPF2      variable wave =  7*/ ;
/* Empty map cell for: R_PTYPF3      variable wave =  7*/ ;
/* Empty map cell for: R_PTYPF4      variable wave =  7*/ ;
/* Empty map cell for: R_PUFF        variable wave =  7*/ ;
/* Empty map cell for: R_PUFFPOS     variable wave =  7*/ ;
/* Empty map cell for: R1_PUSH       variable wave =  7*/ ;
/* Empty map cell for: R2_PUSH       variable wave =  7*/ ;
R_PUSH=R7PUSH ;
R_PUSHA=R7PUSHA ;
/* Empty map cell for: R_PUSHW       variable wave =  7*/ ;
R_RETDTWV=R7RETDTWV ;
R_RETEMP=R7RETEMP ;
/* Empty map cell for: R_RETINC      variable wave =  7*/ ;
/* Empty map cell for: R_RETLIV      variable wave =  7*/ ;
R_RETMON=R7RETMON ;
R_RETSAT=R7RETSAT ;
/* Empty map cell for: R_RETWLT      variable wave =  7*/ ;
/* Empty map cell for: R_RETWRK      variable wave =  7*/ ;
/* Empty map cell for: R_RETWSP      variable wave =  7*/ ;
R_RETYR=R7RETYR ;
R_RISK=R7RISK ;
R_RISK6=R7RISK6 ;
R_RPLNYA=R7RPLNYA ;
R_RPLNYR=R7RPLNYR ;
/* Empty map cell for: R_RXPREM      variable wave =  7*/ ;
R_RYRCMP=R7RYRCMP ;
R_SADLF=R7SADLF ;
R_SAMEJOB=R7SAMEJOB ;
R_SAMEMP=R7SAMEMP ;
R_SAYRET=R7SAYRET ;
R_SCIS=R7SCIS ;
R_SDIAPL=R7SDIAPL ;
R_SDIAPLM=R7SDIAPLM ;
R_SDIAPLY=R7SDIAPLY ;
R_SDIAPP=R7SDIAPP ;
R_SDIAPPM=R7SDIAPPM ;
R_SDIAPPY=R7SDIAPPY ;
R_SDIDEN=R7SDIDEN ;
R_SDIREC=R7SDIREC ;
R_SDIRECM=R7SDIRECM ;
R_SDIRECY=R7SDIRECY ;
R_SDISTP=R7SDISTP ;
R_SDISTPM=R7SDISTPM ;
R_SDISTPY=R7SDISTPY ;
R_SER7=R7SER7 ;
R_SHLT=R7SHLT ;
R_SHLTC=R7SHLTC ;
R_SHLTCF=R7SHLTCF ;
R_SHOP=R7SHOP ;
R_SHOPA=R7SHOPA ;
R_SHOPH=R7SHOPH ;
/* Empty map cell for: R_SHOPR       variable wave =  7*/ ;
/* Empty map cell for: R1_SIT        variable wave =  7*/ ;
/* Empty map cell for: R2_SIT        variable wave =  7*/ ;
R_SIT=R7SIT ;
R_SITA=R7SITA ;
/* Empty map cell for: R_SITW        variable wave =  7*/ ;
/* Empty map cell for: R_SLEEP       variable wave =  7*/ ;
/* Empty map cell for: R_SLEEPE      variable wave =  7*/ ;
/* Empty map cell for: R_SLEEPQ      variable wave =  7*/ ;
R_SLEEPR=R7SLEEPR ;
/* Empty map cell for: R_SLEEPS      variable wave =  7*/ ;
/* Empty map cell for: R_SLEEPX      variable wave =  7*/ ;
R_SLFEMP=R7SLFEMP ;
R_SLFMEM=R7SLFMEM ;
R_SMOKEN=R7SMOKEN ;
R_SMOKEV=R7SMOKEV ;
R_SPCFAC=R7SPCFAC ;
/* Empty map cell for: R_SSAPL       variable wave =  7*/ ;
/* Empty map cell for: R_SSAPLM      variable wave =  7*/ ;
/* Empty map cell for: R_SSAPLY      variable wave =  7*/ ;
/* Empty map cell for: R_SSAPP       variable wave =  7*/ ;
/* Empty map cell for: R_SSAPPM      variable wave =  7*/ ;
/* Empty map cell for: R_SSAPPY      variable wave =  7*/ ;
/* Empty map cell for: R_SSDEN       variable wave =  7*/ ;
R_SSDI=R7SSDI ;
R_SSIAPL=R7SSIAPL ;
R_SSIAPLM=R7SSIAPLM ;
R_SSIAPLY=R7SSIAPLY ;
R_SSIAPP=R7SSIAPP ;
R_SSIAPPM=R7SSIAPPM ;
R_SSIAPPY=R7SSIAPPY ;
R_SSIDEN=R7SSIDEN ;
R_SSIREC=R7SSIREC ;
R_SSIRECM=R7SSIRECM ;
R_SSIRECY=R7SSIRECY ;
R_SSISTP=R7SSISTP ;
R_SSISTPM=R7SSISTPM ;
R_SSISTPY=R7SSISTPY ;
/* Empty map cell for: R_SSREC       variable wave =  7*/ ;
/* Empty map cell for: R_SSRECM      variable wave =  7*/ ;
/* Empty map cell for: R_SSRECY      variable wave =  7*/ ;
/* Empty map cell for: R_SSSTP       variable wave =  7*/ ;
/* Empty map cell for: R_SSSTPM      variable wave =  7*/ ;
/* Empty map cell for: R_SSSTPY      variable wave =  7*/ ;
R_SSWRER=R7SSWRER ;
R_SSWRNR=R7SSWRNR ;
R_SSWRXA=R7SSWRXA ;
/* Empty map cell for: R_SSWSER      variable wave =  7*/ ;
/* Empty map cell for: R_SSWSNR      variable wave =  7*/ ;
/* Empty map cell for: R_SSWSXA      variable wave =  7*/ ;
R_STATUS=R7STATUS ;
/* Empty map cell for: R1_STOOP      variable wave =  7*/ ;
/* Empty map cell for: R2_STOOP      variable wave =  7*/ ;
R_STOOP=R7STOOP ;
R_STOOPA=R7STOOPA ;
/* Empty map cell for: R_STOOPW      variable wave =  7*/ ;
R_STROK=R7STROK ;
R_STROKE=R7STROKE ;
R_STROKF=R7STROKF ;
R_STROKQ=R7STROKQ ;
R_STROKS=R7STROKS ;
/* Empty map cell for: R_TIMWLK      variable wave =  7*/ ;
/* Empty map cell for: R_TIMWLKA     variable wave =  7*/ ;
/* Empty map cell for: R_TLIPRM      variable wave =  7*/ ;
/* Empty map cell for: R2_TOILT      variable wave =  7*/ ;
R_TOILT=R7TOILT ;
R_TOILTA=R7TOILTA ;
/* Empty map cell for: R2_TOILTH     variable wave =  7*/ ;
R_TOILTH=R7TOILTH ;
/* Empty map cell for: R_TOTMBF      variable wave =  7*/ ;
/* Empty map cell for: R_TOTMBI      variable wave =  7*/ ;
/* Empty map cell for: R_TOTMD       variable wave =  7*/ ;
/* Empty map cell for: R_TOTMDF      variable wave =  7*/ ;
R_TR20=R7TR20 ;
/* Empty map cell for: R_TR40        variable wave =  7*/ ;
R_TYLTC=R7TYLTC ;
/* Empty map cell for: R_ULCER       variable wave =  7*/ ;
R_UNEMP=R7UNEMP ;
R_UNION=R7UNION ;
R_UNIONF=R7UNIONF ;
/* Empty map cell for: R_VGACTF      variable wave =  7*/ ;
/* Empty map cell for: R_VGACTN      variable wave =  7*/ ;
/* Empty map cell for: R_VGACTP      variable wave =  7*/ ;
R_VGACTX=R7VGACTX ;
/* Empty map cell for: R_VIGACT      variable wave =  7*/ ;
R_VOCAB=R7VOCAB ;
R_VP=R7VP ;
/* Empty map cell for: R1_WALK1      variable wave =  7*/ ;
/* Empty map cell for: R2_WALK1      variable wave =  7*/ ;
R_WALK1=R7WALK1 ;
R_WALK1A=R7WALK1A ;
/* Empty map cell for: R_WALK1W      variable wave =  7*/ ;
/* Empty map cell for: R1_WALKR      variable wave =  7*/ ;
/* Empty map cell for: R2_WALKR      variable wave =  7*/ ;
R_WALKR=R7WALKR ;
R_WALKRA=R7WALKRA ;
R_WALKRE=R7WALKRE ;
/* Empty map cell for: R2_WALKRH     variable wave =  7*/ ;
R_WALKRH=R7WALKRH ;
/* Empty map cell for: R_WALKRW      variable wave =  7*/ ;
/* Empty map cell for: R1_WALKS      variable wave =  7*/ ;
/* Empty map cell for: R2_WALKS      variable wave =  7*/ ;
R_WALKS=R7WALKS ;
R_WALKSA=R7WALKSA ;
/* Empty map cell for: R_WALKSW      variable wave =  7*/ ;
R_WANDER=R7WANDER ;
R_WEIGHT=R7WEIGHT ;
R_WGFHR=R7WGFHR ;
R_WGFWK=R7WGFWK ;
R_WGIHR=R7WGIHR ;
R_WGIWK=R7WGIWK ;
/* Empty map cell for: R_WHAPPX      variable wave =  7*/ ;
R_WHAPPY=R7WHAPPY ;
R_WLIPRM=R7WLIPRM ;
R_WORK=R7WORK ;
R_WORK2=R7WORK2 ;
R_WORK62=R7WORK62 ;
R_WORK62F=R7WORK62F ;
R_WORK65=R7WORK65 ;
R_WORK65F=R7WORK65F ;
/* Empty map cell for: R_WORK70      variable wave =  7*/ ;
/* Empty map cell for: R_WORK70A     variable wave =  7*/ ;
/* Empty map cell for: R_WORK70AF    variable wave =  7*/ ;
/* Empty map cell for: R_WORK70F     variable wave =  7*/ ;
/* Empty map cell for: R_WORKLM      variable wave =  7*/ ;
R_WTCRNH=R7WTCRNH ;
R_WTHH=R7WTHH ;
R_WTRESP=R7WTRESP ;
R_WTR_NH=R7WTR_NH ;
R_YR=R7YR ;
if inw=1 then output ;
%put --- Rlong table ;
%initvars ;
%put ---- Rlong table ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
WAVE_NUMBER=8 ;
H_HHIDC=H8HHIDC ;
SUBHH= substr(H_HHIDC,7)     /* --- Derived variable  */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
INW=INW8 ;
WAVE_NAME=  'hrs_wave'||strip(put(wave_number,3.))     /* --- Derived variable  */ ;
CYEAR='yr2006' ;
/* --- RAND variable:HACOHORT  included */ ;
studyyr= hrs_studyyr(wave_number,
hacohort)     /* --- Derived variable  */ ;
H_HHID=H8HHID ;
S_HHIDPN=S8HHIDPN ;
/* Empty map cell for: R_ACGTOT      variable wave =  8*/ ;
R_ADL5A=R8ADL5A ;
R_ADL5H=R8ADL5H ;
R_ADL6A=R8ADL6A ;
R_ADL6H=R8ADL6H ;
/* Empty map cell for: R_ADLR10      variable wave =  8*/ ;
/* Empty map cell for: R_ADLW        variable wave =  8*/ ;
R_AGEM_B=R8AGEM_B ;
R_AGEM_E=R8AGEM_E ;
R_AGEM_M=R8AGEM_M ;
R_AGEY_B=R8AGEY_B ;
R_AGEY_E=R8AGEY_E ;
R_AGEY_M=R8AGEY_M ;
/* Empty map cell for: R_AIMR10      variable wave =  8*/ ;
R_ALONE=R8ALONE ;
/* Empty map cell for: R_ALZHE       variable wave =  8*/ ;
/* Empty map cell for: R_ALZHEE      variable wave =  8*/ ;
/* Empty map cell for: R_ALZHEF      variable wave =  8*/ ;
/* Empty map cell for: R_ALZHEQ      variable wave =  8*/ ;
/* Empty map cell for: R_ALZHES      variable wave =  8*/ ;
/* Empty map cell for: R_AMSTOT      variable wave =  8*/ ;
R_ANS3PQ=R8ANS3PQ ;
/* Empty map cell for: R1_ARMS       variable wave =  8*/ ;
/* Empty map cell for: R2_ARMS       variable wave =  8*/ ;
R_ARMS=R8ARMS ;
R_ARMSA=R8ARMSA ;
/* Empty map cell for: R_ARMSW       variable wave =  8*/ ;
R_ARTHR=R8ARTHR ;
R_ARTHRE=R8ARTHRE ;
R_ARTHRF=R8ARTHRF ;
R_ARTHRQ=R8ARTHRQ ;
R_ARTHRS=R8ARTHRS ;
/* Empty map cell for: R_ATR20       variable wave =  8*/ ;
R_BACK=R8BACK ;
R_BALFUL=R8BALFUL ;
R_BALFULC=R8BALFULC ;
R_BALFULT=R8BALFULT ;
R_BALSBS=R8BALSBS ;
R_BALSBSC=R8BALSBSC ;
R_BALSEMI=R8BALSEMI ;
R_BALSEMIC=R8BALSEMIC ;
/* Empty map cell for: R1_BATH       variable wave =  8*/ ;
/* Empty map cell for: R2_BATH       variable wave =  8*/ ;
R_BATH=R8BATH ;
R_BATHA=R8BATHA ;
/* Empty map cell for: R2_BATHH      variable wave =  8*/ ;
R_BATHH=R8BATHH ;
/* Empty map cell for: R_BATHW       variable wave =  8*/ ;
/* Empty map cell for: R1_BED        variable wave =  8*/ ;
/* Empty map cell for: R2_BED        variable wave =  8*/ ;
R_BED=R8BED ;
R_BEDA=R8BEDA ;
R_BEDE=R8BEDE ;
/* Empty map cell for: R2_BEDH       variable wave =  8*/ ;
R_BEDH=R8BEDH ;
/* Empty map cell for: R_BEDW        variable wave =  8*/ ;
R_BEQ100=R8BEQ100 ;
R_BEQ10K=R8BEQ10K ;
R_BEQ500=R8BEQ500 ;
R_BEQANY=R8BEQANY ;
/* Empty map cell for: R_BEQLRG      variable wave =  8*/ ;
R_BMI=R8BMI ;
R_BPDIA=R8BPDIA ;
R_BPPOS=R8BPPOS ;
R_BPPULS=R8BPPULS ;
R_BPSYS=R8BPSYS ;
R_BREAST=R8BREAST ;
R_BWC20=R8BWC20 ;
/* Empty map cell for: R_BWC86       variable wave =  8*/ ;
R_CACT=R8CACT ;
/* Empty map cell for: R1_CALC       variable wave =  8*/ ;
/* Empty map cell for: R2_CALC       variable wave =  8*/ ;
/* Empty map cell for: R_CALCA       variable wave =  8*/ ;
/* Empty map cell for: R_CALCW       variable wave =  8*/ ;
R_CANCR=R8CANCR ;
R_CANCRE=R8CANCRE ;
R_CANCRF=R8CANCRF ;
R_CANCRQ=R8CANCRQ ;
R_CANCRS=R8CANCRS ;
R_CENDIV=R8CENDIV ;
R_CENREG=R8CENREG ;
R_CESD=R8CESD ;
R_CESDM=R8CESDM ;
/* Empty map cell for: R1_CHAIR      variable wave =  8*/ ;
/* Empty map cell for: R2_CHAIR      variable wave =  8*/ ;
R_CHAIR=R8CHAIR ;
R_CHAIRA=R8CHAIRA ;
/* Empty map cell for: R_CHAIRW      variable wave =  8*/ ;
R_CHOLST=R8CHOLST ;
/* Empty map cell for: R_CLAIMED     variable wave =  8*/ ;
/* Empty map cell for: R1_CLIM1      variable wave =  8*/ ;
/* Empty map cell for: R2_CLIM1      variable wave =  8*/ ;
R_CLIM1=R8CLIM1 ;
R_CLIM1A=R8CLIM1A ;
/* Empty map cell for: R_CLIM1W      variable wave =  8*/ ;
/* Empty map cell for: R1_CLIMS      variable wave =  8*/ ;
/* Empty map cell for: R2_CLIMS      variable wave =  8*/ ;
R_CLIMS=R8CLIMS ;
R_CLIMSA=R8CLIMSA ;
/* Empty map cell for: R_CLIMSW      variable wave =  8*/ ;
R_COGTOT=R8COGTOT ;
/* Empty map cell for: R_COMP        variable wave =  8*/ ;
/* Empty map cell for: R_COMPW       variable wave =  8*/ ;
R_CONDE=R8CONDE ;
R_CONDEF=R8CONDEF ;
R_CONDS=R8CONDS ;
R_CONDSF=R8CONDSF ;
R_CONDSP=R8CONDSP ;
R_COVR=R8COVR ;
R_COVRT=R8COVRT ;
R_COVS=R8COVS ;
R_DADAGE=R8DADAGE ;
R_DADLIV=R8DADLIV ;
R_DCBAL1=R8DCBAL1 ;
R_DCBAL2=R8DCBAL2 ;
R_DCBAL3=R8DCBAL3 ;
R_DCBAL4=R8DCBAL4 ;
R_DCBENE1=R8DCBENE1 ;
R_DCBENE2=R8DCBENE2 ;
R_DCBENE3=R8DCBENE3 ;
R_DCBENE4=R8DCBENE4 ;
R_DCCONT1=R8DCCONT1 ;
R_DCCONT2=R8DCCONT2 ;
R_DCCONT3=R8DCCONT3 ;
R_DCCONT4=R8DCCONT4 ;
R_DCMODE1=R8DCMODE1 ;
R_DCMODE2=R8DCMODE2 ;
R_DCMODE3=R8DCMODE3 ;
R_DCMODE4=R8DCMODE4 ;
R_DCPCT1=R8DCPCT1 ;
R_DCPCT2=R8DCPCT2 ;
R_DCPCT3=R8DCPCT3 ;
R_DCPCT4=R8DCPCT4 ;
/* Empty map cell for: R_DEMEN       variable wave =  8*/ ;
/* Empty map cell for: R_DEMENE      variable wave =  8*/ ;
/* Empty map cell for: R_DEMENF      variable wave =  8*/ ;
/* Empty map cell for: R_DEMENQ      variable wave =  8*/ ;
/* Empty map cell for: R_DEMENS      variable wave =  8*/ ;
R_DENTST=R8DENTST ;
R_DEPRES=R8DEPRES ;
/* Empty map cell for: R_DEPREX      variable wave =  8*/ ;
R_DIAB=R8DIAB ;
R_DIABE=R8DIABE ;
R_DIABF=R8DIABF ;
R_DIABQ=R8DIABQ ;
R_DIABS=R8DIABS ;
/* Empty map cell for: R1_DIME       variable wave =  8*/ ;
/* Empty map cell for: R2_DIME       variable wave =  8*/ ;
R_DIME=R8DIME ;
R_DIMEA=R8DIMEA ;
/* Empty map cell for: R_DIMEW       variable wave =  8*/ ;
R_DLRC=R8DLRC ;
/* Empty map cell for: R_DLRC20      variable wave =  8*/ ;
R_DOCTIM=R8DOCTIM ;
R_DOCTOR=R8DOCTOR ;
/* Empty map cell for: R1_DRESS      variable wave =  8*/ ;
/* Empty map cell for: R2_DRESS      variable wave =  8*/ ;
R_DRESS=R8DRESS ;
R_DRESSA=R8DRESSA ;
/* Empty map cell for: R2_DRESSH     variable wave =  8*/ ;
R_DRESSH=R8DRESSH ;
/* Empty map cell for: R_DRESSW      variable wave =  8*/ ;
R_DRINK=R8DRINK ;
R_DRINKD=R8DRINKD ;
R_DRINKN=R8DRINKN ;
/* Empty map cell for: R_DRINKR      variable wave =  8*/ ;
R_DRUGS=R8DRUGS ;
R_DSIAMT=R8DSIAMT ;
R_DSSAMT=R8DSSAMT ;
R_DSTAT=R8DSTAT ;
R_DW=R8DW ;
R_DY=R8DY ;
/* Empty map cell for: R1_EAT        variable wave =  8*/ ;
/* Empty map cell for: R2_EAT        variable wave =  8*/ ;
R_EAT=R8EAT ;
R_EATA=R8EATA ;
/* Empty map cell for: R2_EATH       variable wave =  8*/ ;
R_EATH=R8EATH ;
/* Empty map cell for: R_EATW        variable wave =  8*/ ;
R_EFFORT=R8EFFORT ;
/* Empty map cell for: R_EFFORX      variable wave =  8*/ ;
R_ENLIFE=R8ENLIFE ;
/* Empty map cell for: R_ENLIFX      variable wave =  8*/ ;
R_FAMR=R8FAMR ;
R_FBWC20=R8FBWC20 ;
/* Empty map cell for: R_FBWC86      variable wave =  8*/ ;
R_FCACT=R8FCACT ;
R_FDLRC=R8FDLRC ;
R_FDW=R8FDW ;
R_FDY=R8FDY ;
R_FIMRC=R8FIMRC ;
R_FINEA=R8FINEA ;
R_FINPLN=R8FINPLN ;
R_FINR=R8FINR ;
/* Empty map cell for: R_FLAG        variable wave =  8*/ ;
R_FLONE=R8FLONE ;
/* Empty map cell for: R_FLONEX      variable wave =  8*/ ;
R_FLUSHT=R8FLUSHT ;
R_FMO=R8FMO ;
R_FPRES=R8FPRES ;
R_FPSTME=R8FPSTME ;
R_FSAD=R8FSAD ;
/* Empty map cell for: R_FSADX       variable wave =  8*/ ;
R_FSCIS=R8FSCIS ;
R_FSER7=R8FSER7 ;
R_FSIZE=R8FSIZE ;
R_FSIZEF=R8FSIZEF ;
R_FSLFME=R8FSLFME ;
R_FVOCAB=R8FVOCAB ;
R_FVP=R8FVP ;
R_FYR=R8FYR ;
R_GOING=R8GOING ;
/* Empty map cell for: R_GOINGX      variable wave =  8*/ ;
R_GOVMD=R8GOVMD ;
R_GOVMR=R8GOVMR ;
/* Empty map cell for: R_GOVOT       variable wave =  8*/ ;
R_GOVVA=R8GOVVA ;
R_GROSSA=R8GROSSA ;
R_GRP=R8GRP ;
R_GRPDOM=R8GRPDOM ;
R_GRPL=R8GRPL ;
R_GRPPOS=R8GRPPOS ;
R_GRPR=R8GRPR ;
R_HALUC=R8HALUC ;
/* Empty map cell for: R_HDLR20      variable wave =  8*/ ;
R_HEART=R8HEART ;
R_HEARTE=R8HEARTE ;
R_HEARTF=R8HEARTF ;
R_HEARTQ=R8HEARTQ ;
R_HEARTS=R8HEARTS ;
R_HECOV1=R8HECOV1 ;
R_HECOV2=R8HECOV2 ;
R_HECOV3=R8HECOV3 ;
R_HEIGHT=R8HEIGHT ;
R_HENUM=R8HENUM ;
R_HERET=R8HERET ;
R_HERTR1=R8HERTR1 ;
R_HERTR2=R8HERTR2 ;
R_HERTR3=R8HERTR3 ;
R_HERTS1=R8HERTS1 ;
R_HERTS2=R8HERTS2 ;
R_HERTS3=R8HERTS3 ;
R_HESRC1=R8HESRC1 ;
R_HESRC2=R8HESRC2 ;
R_HESRC3=R8HESRC3 ;
R_HIBP=R8HIBP ;
R_HIBPE=R8HIBPE ;
R_HIBPF=R8HIBPF ;
R_HIBPQ=R8HIBPQ ;
R_HIBPS=R8HIBPS ;
R_HIGOV=R8HIGOV ;
R_HILTC=R8HILTC ;
/* Empty map cell for: R_HIMR20      variable wave =  8*/ ;
R_HIOTHP=R8HIOTHP ;
R_HLPDYSF=R8HLPDYSF ;
R_HLPDYSNF=R8HLPDYSNF ;
R_HLPDYSP=R8HLPDYSP ;
R_HLPDYST=R8HLPDYST ;
R_HLPDYSU=R8HLPDYSU ;
R_HLPHRSF=R8HLPHRSF ;
R_HLPHRSNF=R8HLPHRSNF ;
R_HLPHRSP=R8HLPHRSP ;
R_HLPHRST=R8HLPHRST ;
R_HLPHRSU=R8HLPHRSU ;
R_HLPPDFA=R8HLPPDFA ;
R_HLPPDFN=R8HLPPDFN ;
R_HLPPDNFA=R8HLPPDNFA ;
R_HLPPDNFN=R8HLPPDNFN ;
R_HLPPDTA=R8HLPPDTA ;
R_HLPPDTN=R8HLPPDTN ;
R_HLPRFN=R8HLPRFN ;
R_HLPRNFN=R8HLPRNFN ;
R_HLPRPN=R8HLPRPN ;
R_HLPRTN=R8HLPRTN ;
R_HLPRUN=R8HLPRUN ;
R_HLTC3=R8HLTC3 ;
/* Empty map cell for: R_HLTC5       variable wave =  8*/ ;
/* Empty map cell for: R_HLTC5F      variable wave =  8*/ ;
R_HLTHLM=R8HLTHLM ;
R_HOMCAR=R8HOMCAR ;
R_HOSP=R8HOSP ;
R_HSPNIT=R8HSPNIT ;
R_HSPTIM=R8HSPTIM ;
/* Empty map cell for: R_HSWRKF      variable wave =  8*/ ;
/* Empty map cell for: R_HTR40       variable wave =  8*/ ;
R_IADL5A=R8IADL5A ;
R_IADL5H=R8IADL5H ;
R_IANN=R8IANN ;
R_IEARN=R8IEARN ;
R_IFANN=R8IFANN ;
R_IFEARN=R8IFEARN ;
R_IFGXFR=R8IFGXFR ;
R_IFIRAW=R8IFIRAW ;
/* Empty map cell for: R_IFIRAWY1    variable wave =  8*/ ;
R_IFPEN=R8IFPEN ;
R_IFPENA=R8IFPENA ;
R_IFSDI=R8IFSDI ;
R_IFSRET=R8IFSRET ;
R_IFSSDI=R8IFSSDI ;
/* Empty map cell for: R_IFSSI       variable wave =  8*/ ;
R_IFUNEM=R8IFUNEM ;
R_IFUNWC=R8IFUNWC ;
R_IFWCMP=R8IFWCMP ;
R_IGXFR=R8IGXFR ;
R_IIRAW=R8IIRAW ;
R_IIRAWY1=R8IIRAWY1 ;
R_IMRC=R8IMRC ;
/* Empty map cell for: R_IMRC20      variable wave =  8*/ ;
R_INHER=R8INHER ;
R_INHPE=R8INHPE ;
R_INHPFN=R8INHPFN ;
R_INHPNFN=R8INHPNFN ;
R_INHPPN=R8INHPPN ;
R_INHPTN=R8INHPTN ;
R_INHPUN=R8INHPUN ;
R_INLBRF=R8INLBRF ;
R_IPEN=R8IPEN ;
R_IPENA=R8IPENA ;
R_ISDI=R8ISDI ;
R_ISRET=R8ISRET ;
R_ISSDI=R8ISSDI ;
R_ISSI=R8ISSI ;
R_IUNEM=R8IUNEM ;
R_IUNWC=R8IUNWC ;
R_IWBEG=R8IWBEG ;
/* Empty map cell for: R_IWBEGF      variable wave =  8*/ ;
R_IWCMP=R8IWCMP ;
R_IWEND=R8IWEND ;
/* Empty map cell for: R_IWENDF      variable wave =  8*/ ;
R_IWENDM=R8IWENDM ;
R_IWENDY=R8IWENDY ;
R_IWMID=R8IWMID ;
R_IWMIDF=R8IWMIDF ;
R_IWSTAT=R8IWSTAT ;
R_JCIND=R8JCIND ;
R_JCINDB=R8JCINDB ;
/* Empty map cell for: R_JCINDC      variable wave =  8*/ ;
R_JCOCC=R8JCOCC ;
R_JCOCCA=R8JCOCCA ;
R_JCOCCB=R8JCOCCB ;
/* Empty map cell for: R_JCOCCC      variable wave =  8*/ ;
R_JCPEN=R8JCPEN ;
R_JCPENF=R8JCPENF ;
R_JCTEN=R8JCTEN ;
R_JHOUR2=R8JHOUR2 ;
R_JHOURS=R8JHOURS ;
R_JJOBS=R8JJOBS ;
R_JLASTM=R8JLASTM ;
R_JLASTY=R8JLASTY ;
R_JLIFT=R8JLIFT ;
R_JLIND=R8JLIND ;
R_JLINDB=R8JLINDB ;
/* Empty map cell for: R_JLINDC      variable wave =  8*/ ;
R_JLMIS=R8JLMIS ;
R_JLOCC=R8JLOCC ;
R_JLOCCA=R8JLOCCA ;
R_JLOCCB=R8JLOCCB ;
/* Empty map cell for: R_JLOCCC      variable wave =  8*/ ;
R_JLTEN=R8JLTEN ;
R_JLTENF=R8JLTENF ;
R_JMISS=R8JMISS ;
R_JNJOB=R8JNJOB ;
R_JNJOB5=R8JNJOB5 ;
/* Empty map cell for: R1_JOG        variable wave =  8*/ ;
/* Empty map cell for: R2_JOG        variable wave =  8*/ ;
R_JOG=R8JOG ;
R_JOGA=R8JOGA ;
/* Empty map cell for: R_JOGW        variable wave =  8*/ ;
R_JPHYS=R8JPHYS ;
R_JSIGHT=R8JSIGHT ;
R_JSTOOP=R8JSTOOP ;
R_JSTRES=R8JSTRES ;
R_JWEEK2=R8JWEEK2 ;
R_JWEEKS=R8JWEEKS ;
R_JYEARM=R8JYEARM ;
R_JYEARS=R8JYEARS ;
R_LBAGR=R8LBAGR ;
R_LBASSISTPRB=R8LBASSISTPRB ;
R_LBCOMP=R8LBCOMP ;
/* Empty map cell for: R_LBCON10     variable wave =  8*/ ;
R_LBCON5=R8LBCON5 ;
R_LBELIG=R8LBELIG ;
R_LBEXT=R8LBEXT ;
R_LBFAMDRUGPRB=R8LBFAMDRUGPRB ;
R_LBFAMHLTHPRB=R8LBFAMHLTHPRB ;
R_LBFINPRB=R8LBFINPRB ;
R_LBHLTHPRB=R8LBHLTHPRB ;
R_LBHOUSEPRB=R8LBHOUSEPRB ;
/* Empty map cell for: R_LBLONELY11  variable wave =  8*/ ;
R_LBLONELY3=R8LBLONELY3 ;
/* Empty map cell for: R_LBNEGAFFECT variable wave =  8*/ ;
R_LBNEGAFFECT6=R8LBNEGAFFECT6 ;
R_LBNEUR=R8LBNEUR ;
R_LBONCHRSTR=R8LBONCHRSTR ;
R_LBOPEN=R8LBOPEN ;
/* Empty map cell for: R_LBPOSAFFECT variable wave =  8*/ ;
R_LBPOSAFFECT6=R8LBPOSAFFECT6 ;
R_LBRF=R8LBRF ;
R_LBRFH=R8LBRFH ;
R_LBRFY=R8LBRFY ;
R_LBRLTNSHPRB=R8LBRLTNSHPRB ;
/* Empty map cell for: R_LBSATCITY   variable wave =  8*/ ;
/* Empty map cell for: R_LBSATFAM    variable wave =  8*/ ;
R_LBSATFIN=R8LBSATFIN ;
/* Empty map cell for: R_LBSATHLTH   variable wave =  8*/ ;
/* Empty map cell for: R_LBSATHOME   variable wave =  8*/ ;
/* Empty map cell for: R_LBSATINC    variable wave =  8*/ ;
/* Empty map cell for: R_LBSATLEISUREvariable wave =  8*/ ;
/* Empty map cell for: R_LBSATLIFE   variable wave =  8*/ ;
R_LBSATWLF=R8LBSATWLF ;
R_LBWGTR=R8LBWGTR ;
R_LBWORKPRB=R8LBWORKPRB ;
R_LGMUSA=R8LGMUSA ;
/* Empty map cell for: R_LGMUSW      variable wave =  8*/ ;
/* Empty map cell for: R_LHTACT      variable wave =  8*/ ;
R_LIFEIN=R8LIFEIN ;
/* Empty map cell for: R1_LIFT       variable wave =  8*/ ;
/* Empty map cell for: R2_LIFT       variable wave =  8*/ ;
R_LIFT=R8LIFT ;
R_LIFTA=R8LIFTA ;
/* Empty map cell for: R_LIFTW       variable wave =  8*/ ;
R_LIV10=R8LIV10 ;
R_LIV10A=R8LIV10A ;
R_LIV10P=R8LIV10P ;
R_LIV10R=R8LIV10R ;
R_LIV75=R8LIV75 ;
R_LIV75C=R8LIV75C ;
R_LIV75F=R8LIV75F ;
R_LIV75P=R8LIV75P ;
R_LIV75R=R8LIV75R ;
/* Empty map cell for: R_LIV85       variable wave =  8*/ ;
/* Empty map cell for: R_LIV85C      variable wave =  8*/ ;
/* Empty map cell for: R_LIV85F      variable wave =  8*/ ;
/* Empty map cell for: R_LIV85P      variable wave =  8*/ ;
/* Empty map cell for: R_LIV85R      variable wave =  8*/ ;
R_LIV8XC=R8LIV8XC ;
R_LIV8XF=R8LIV8XF ;
R_LIVBRO=R8LIVBRO ;
R_LIVPAR=R8LIVPAR ;
R_LIVSIB=R8LIVSIB ;
R_LIVSIS=R8LIVSIS ;
R_LOST=R8LOST ;
/* Empty map cell for: R_LTACTF      variable wave =  8*/ ;
/* Empty map cell for: R_LTACTN      variable wave =  8*/ ;
/* Empty map cell for: R_LTACTP      variable wave =  8*/ ;
R_LTACTX=R8LTACTX ;
R_LTCPRM=R8LTCPRM ;
R_LUNG=R8LUNG ;
R_LUNGE=R8LUNGE ;
R_LUNGF=R8LUNGF ;
R_LUNGQ=R8LUNGQ ;
R_LUNGS=R8LUNGS ;
R_MAMMOG=R8MAMMOG ;
/* Empty map cell for: R1_MAP        variable wave =  8*/ ;
/* Empty map cell for: R2_MAP        variable wave =  8*/ ;
R_MAP=R8MAP ;
R_MAPA=R8MAPA ;
/* Empty map cell for: R_MAPW        variable wave =  8*/ ;
R_MCURLN=R8MCURLN ;
/* Empty map cell for: R_MCWV        variable wave =  8*/ ;
/* Empty map cell for: R_MCWVW       variable wave =  8*/ ;
R_MDACTX=R8MDACTX ;
R_MDIV=R8MDIV ;
R_MEALS=R8MEALS ;
R_MEALSA=R8MEALSA ;
R_MEALSH=R8MEALSH ;
/* Empty map cell for: R_MEALSR      variable wave =  8*/ ;
/* Empty map cell for: R2_MEDS       variable wave =  8*/ ;
R_MEDS=R8MEDS ;
R_MEDSA=R8MEDSA ;
R_MEDSH=R8MEDSH ;
/* Empty map cell for: R_MEDSR       variable wave =  8*/ ;
R_MEMRY=R8MEMRY ;
R_MEMRYE=R8MEMRYE ;
R_MEMRYF=R8MEMRYF ;
R_MEMRYQ=R8MEMRYQ ;
R_MEMRYS=R8MEMRYS ;
R_MEND=R8MEND ;
R_MLEN=R8MLEN ;
R_MLENM=R8MLENM ;
R_MNEV=R8MNEV ;
R_MO=R8MO ;
R_MOBILA=R8MOBILA ;
/* Empty map cell for: R_MOBILW      variable wave =  8*/ ;
R_MOMAGE=R8MOMAGE ;
R_MOMLIV=R8MOMLIV ;
/* Empty map cell for: R2_MONEY      variable wave =  8*/ ;
R_MONEY=R8MONEY ;
R_MONEYA=R8MONEYA ;
R_MONEYH=R8MONEYH ;
/* Empty map cell for: R_MONEYR      variable wave =  8*/ ;
R_MPART=R8MPART ;
R_MRCT=R8MRCT ;
R_MRPREM=R8MRPREM ;
R_MSTAT=R8MSTAT ;
R_MSTATF=R8MSTATF ;
R_MSTATH=R8MSTATH ;
R_MSTOT=R8MSTOT ;
R_MWID=R8MWID ;
R_NHMDAY=R8NHMDAY ;
R_NHMLIV=R8NHMLIV ;
R_NHMMVM=R8NHMMVM ;
R_NHMMVY=R8NHMMVY ;
R_NOTICS=R8NOTICS ;
R_NOVOC=R8NOVOC ;
R_NRSHOM=R8NRSHOM ;
R_NRSNIT=R8NRSNIT ;
R_NRSTIM=R8NRSTIM ;
/* Empty map cell for: R_NSSCRE      variable wave =  8*/ ;
/* Empty map cell for: R_NSSCSE      variable wave =  8*/ ;
R_OOPMD=R8OOPMD ;
R_OOPMDF=R8OOPMDF ;
/* Empty map cell for: R_OOPMDO      variable wave =  8*/ ;
/* Empty map cell for: R_OOPMDOF     variable wave =  8*/ ;
R_OUTPT=R8OUTPT ;
R_PAPSM=R8PAPSM ;
R_PARTD=R8PARTD ;
R_PENCT=R8PENCT ;
R_PENIC1=R8PENIC1 ;
R_PENIC2=R8PENIC2 ;
R_PENINC=R8PENINC ;
R_PENI_N=R8PENI_N ;
R_PEXIT=R8PEXIT ;
/* Empty map cell for: R2_PHONE      variable wave =  8*/ ;
R_PHONE=R8PHONE ;
R_PHONEA=R8PHONEA ;
R_PHONEH=R8PHONEH ;
/* Empty map cell for: R_PHONER      variable wave =  8*/ ;
R_PMBMI=R8PMBMI ;
R_PMHGHT=R8PMHGHT ;
R_PMHGHTS=R8PMHGHTS ;
R_PMWAIST=R8PMWAIST ;
R_PMWAISTC=R8PMWAISTC ;
R_PMWGHT=R8PMWGHT ;
R_PMWGHTF=R8PMWGHTF ;
R_PMWGHTS=R8PMWGHTS ;
R_PNHM5Y=R8PNHM5Y ;
R_PRCHMEM=R8PRCHMEM ;
R_PRES=R8PRES ;
R_PRMEM=R8PRMEM ;
R_PROST=R8PROST ;
R_PROXY=R8PROXY ;
R_PRPCNT=R8PRPCNT ;
R_PRPRM1=R8PRPRM1 ;
R_PRPRM2=R8PRPRM2 ;
R_PRPRM3=R8PRPRM3 ;
R_PRSRC1=R8PRSRC1 ;
R_PRSRC2=R8PRSRC2 ;
R_PRSRC3=R8PRSRC3 ;
R_PSTMEM=R8PSTMEM ;
R_PSYCH=R8PSYCH ;
R_PSYCHE=R8PSYCHE ;
R_PSYCHF=R8PSYCHF ;
R_PSYCHQ=R8PSYCHQ ;
R_PSYCHS=R8PSYCHS ;
R_PTYP1=R8PTYP1 ;
R_PTYP2=R8PTYP2 ;
R_PTYP3=R8PTYP3 ;
R_PTYP4=R8PTYP4 ;
/* Empty map cell for: R_PTYPD1      variable wave =  8*/ ;
/* Empty map cell for: R_PTYPD2      variable wave =  8*/ ;
/* Empty map cell for: R_PTYPD3      variable wave =  8*/ ;
/* Empty map cell for: R_PTYPD4      variable wave =  8*/ ;
/* Empty map cell for: R_PTYPF1      variable wave =  8*/ ;
/* Empty map cell for: R_PTYPF2      variable wave =  8*/ ;
/* Empty map cell for: R_PTYPF3      variable wave =  8*/ ;
/* Empty map cell for: R_PTYPF4      variable wave =  8*/ ;
R_PUFF=R8PUFF ;
R_PUFFPOS=R8PUFFPOS ;
/* Empty map cell for: R1_PUSH       variable wave =  8*/ ;
/* Empty map cell for: R2_PUSH       variable wave =  8*/ ;
R_PUSH=R8PUSH ;
R_PUSHA=R8PUSHA ;
/* Empty map cell for: R_PUSHW       variable wave =  8*/ ;
R_RETDTWV=R8RETDTWV ;
R_RETEMP=R8RETEMP ;
/* Empty map cell for: R_RETINC      variable wave =  8*/ ;
/* Empty map cell for: R_RETLIV      variable wave =  8*/ ;
R_RETMON=R8RETMON ;
R_RETSAT=R8RETSAT ;
/* Empty map cell for: R_RETWLT      variable wave =  8*/ ;
/* Empty map cell for: R_RETWRK      variable wave =  8*/ ;
/* Empty map cell for: R_RETWSP      variable wave =  8*/ ;
R_RETYR=R8RETYR ;
R_RISK=R8RISK ;
R_RISK6=R8RISK6 ;
R_RPLNYA=R8RPLNYA ;
R_RPLNYR=R8RPLNYR ;
R_RXPREM=R8RXPREM ;
R_RYRCMP=R8RYRCMP ;
R_SADLF=R8SADLF ;
R_SAMEJOB=R8SAMEJOB ;
R_SAMEMP=R8SAMEMP ;
R_SAYRET=R8SAYRET ;
R_SCIS=R8SCIS ;
R_SDIAPL=R8SDIAPL ;
R_SDIAPLM=R8SDIAPLM ;
R_SDIAPLY=R8SDIAPLY ;
R_SDIAPP=R8SDIAPP ;
R_SDIAPPM=R8SDIAPPM ;
R_SDIAPPY=R8SDIAPPY ;
R_SDIDEN=R8SDIDEN ;
R_SDIREC=R8SDIREC ;
R_SDIRECM=R8SDIRECM ;
R_SDIRECY=R8SDIRECY ;
R_SDISTP=R8SDISTP ;
R_SDISTPM=R8SDISTPM ;
R_SDISTPY=R8SDISTPY ;
R_SER7=R8SER7 ;
R_SHLT=R8SHLT ;
R_SHLTC=R8SHLTC ;
R_SHLTCF=R8SHLTCF ;
R_SHOP=R8SHOP ;
R_SHOPA=R8SHOPA ;
R_SHOPH=R8SHOPH ;
/* Empty map cell for: R_SHOPR       variable wave =  8*/ ;
/* Empty map cell for: R1_SIT        variable wave =  8*/ ;
/* Empty map cell for: R2_SIT        variable wave =  8*/ ;
R_SIT=R8SIT ;
R_SITA=R8SITA ;
/* Empty map cell for: R_SITW        variable wave =  8*/ ;
/* Empty map cell for: R_SLEEP       variable wave =  8*/ ;
/* Empty map cell for: R_SLEEPE      variable wave =  8*/ ;
/* Empty map cell for: R_SLEEPQ      variable wave =  8*/ ;
R_SLEEPR=R8SLEEPR ;
/* Empty map cell for: R_SLEEPS      variable wave =  8*/ ;
/* Empty map cell for: R_SLEEPX      variable wave =  8*/ ;
R_SLFEMP=R8SLFEMP ;
R_SLFMEM=R8SLFMEM ;
R_SMOKEN=R8SMOKEN ;
R_SMOKEV=R8SMOKEV ;
R_SPCFAC=R8SPCFAC ;
/* Empty map cell for: R_SSAPL       variable wave =  8*/ ;
/* Empty map cell for: R_SSAPLM      variable wave =  8*/ ;
/* Empty map cell for: R_SSAPLY      variable wave =  8*/ ;
/* Empty map cell for: R_SSAPP       variable wave =  8*/ ;
/* Empty map cell for: R_SSAPPM      variable wave =  8*/ ;
/* Empty map cell for: R_SSAPPY      variable wave =  8*/ ;
/* Empty map cell for: R_SSDEN       variable wave =  8*/ ;
R_SSDI=R8SSDI ;
R_SSIAPL=R8SSIAPL ;
R_SSIAPLM=R8SSIAPLM ;
R_SSIAPLY=R8SSIAPLY ;
R_SSIAPP=R8SSIAPP ;
R_SSIAPPM=R8SSIAPPM ;
R_SSIAPPY=R8SSIAPPY ;
R_SSIDEN=R8SSIDEN ;
R_SSIREC=R8SSIREC ;
R_SSIRECM=R8SSIRECM ;
R_SSIRECY=R8SSIRECY ;
R_SSISTP=R8SSISTP ;
R_SSISTPM=R8SSISTPM ;
R_SSISTPY=R8SSISTPY ;
/* Empty map cell for: R_SSREC       variable wave =  8*/ ;
/* Empty map cell for: R_SSRECM      variable wave =  8*/ ;
/* Empty map cell for: R_SSRECY      variable wave =  8*/ ;
/* Empty map cell for: R_SSSTP       variable wave =  8*/ ;
/* Empty map cell for: R_SSSTPM      variable wave =  8*/ ;
/* Empty map cell for: R_SSSTPY      variable wave =  8*/ ;
/* Empty map cell for: R_SSWRER      variable wave =  8*/ ;
/* Empty map cell for: R_SSWRNR      variable wave =  8*/ ;
/* Empty map cell for: R_SSWRXA      variable wave =  8*/ ;
/* Empty map cell for: R_SSWSER      variable wave =  8*/ ;
/* Empty map cell for: R_SSWSNR      variable wave =  8*/ ;
/* Empty map cell for: R_SSWSXA      variable wave =  8*/ ;
R_STATUS=R8STATUS ;
/* Empty map cell for: R1_STOOP      variable wave =  8*/ ;
/* Empty map cell for: R2_STOOP      variable wave =  8*/ ;
R_STOOP=R8STOOP ;
R_STOOPA=R8STOOPA ;
/* Empty map cell for: R_STOOPW      variable wave =  8*/ ;
R_STROK=R8STROK ;
R_STROKE=R8STROKE ;
R_STROKF=R8STROKF ;
R_STROKQ=R8STROKQ ;
R_STROKS=R8STROKS ;
R_TIMWLK=R8TIMWLK ;
R_TIMWLKA=R8TIMWLKA ;
/* Empty map cell for: R_TLIPRM      variable wave =  8*/ ;
/* Empty map cell for: R2_TOILT      variable wave =  8*/ ;
R_TOILT=R8TOILT ;
R_TOILTA=R8TOILTA ;
/* Empty map cell for: R2_TOILTH     variable wave =  8*/ ;
R_TOILTH=R8TOILTH ;
/* Empty map cell for: R_TOTMBF      variable wave =  8*/ ;
/* Empty map cell for: R_TOTMBI      variable wave =  8*/ ;
/* Empty map cell for: R_TOTMD       variable wave =  8*/ ;
/* Empty map cell for: R_TOTMDF      variable wave =  8*/ ;
R_TR20=R8TR20 ;
/* Empty map cell for: R_TR40        variable wave =  8*/ ;
R_TYLTC=R8TYLTC ;
/* Empty map cell for: R_ULCER       variable wave =  8*/ ;
R_UNEMP=R8UNEMP ;
R_UNION=R8UNION ;
R_UNIONF=R8UNIONF ;
/* Empty map cell for: R_VGACTF      variable wave =  8*/ ;
/* Empty map cell for: R_VGACTN      variable wave =  8*/ ;
/* Empty map cell for: R_VGACTP      variable wave =  8*/ ;
R_VGACTX=R8VGACTX ;
/* Empty map cell for: R_VIGACT      variable wave =  8*/ ;
R_VOCAB=R8VOCAB ;
R_VP=R8VP ;
/* Empty map cell for: R1_WALK1      variable wave =  8*/ ;
/* Empty map cell for: R2_WALK1      variable wave =  8*/ ;
R_WALK1=R8WALK1 ;
R_WALK1A=R8WALK1A ;
/* Empty map cell for: R_WALK1W      variable wave =  8*/ ;
/* Empty map cell for: R1_WALKR      variable wave =  8*/ ;
/* Empty map cell for: R2_WALKR      variable wave =  8*/ ;
R_WALKR=R8WALKR ;
R_WALKRA=R8WALKRA ;
R_WALKRE=R8WALKRE ;
/* Empty map cell for: R2_WALKRH     variable wave =  8*/ ;
R_WALKRH=R8WALKRH ;
/* Empty map cell for: R_WALKRW      variable wave =  8*/ ;
/* Empty map cell for: R1_WALKS      variable wave =  8*/ ;
/* Empty map cell for: R2_WALKS      variable wave =  8*/ ;
R_WALKS=R8WALKS ;
R_WALKSA=R8WALKSA ;
/* Empty map cell for: R_WALKSW      variable wave =  8*/ ;
R_WANDER=R8WANDER ;
R_WEIGHT=R8WEIGHT ;
R_WGFHR=R8WGFHR ;
R_WGFWK=R8WGFWK ;
R_WGIHR=R8WGIHR ;
R_WGIWK=R8WGIWK ;
/* Empty map cell for: R_WHAPPX      variable wave =  8*/ ;
R_WHAPPY=R8WHAPPY ;
R_WLIPRM=R8WLIPRM ;
R_WORK=R8WORK ;
R_WORK2=R8WORK2 ;
R_WORK62=R8WORK62 ;
R_WORK62F=R8WORK62F ;
R_WORK65=R8WORK65 ;
R_WORK65F=R8WORK65F ;
/* Empty map cell for: R_WORK70      variable wave =  8*/ ;
/* Empty map cell for: R_WORK70A     variable wave =  8*/ ;
/* Empty map cell for: R_WORK70AF    variable wave =  8*/ ;
/* Empty map cell for: R_WORK70F     variable wave =  8*/ ;
/* Empty map cell for: R_WORKLM      variable wave =  8*/ ;
R_WTCRNH=R8WTCRNH ;
R_WTHH=R8WTHH ;
R_WTRESP=R8WTRESP ;
R_WTR_NH=R8WTR_NH ;
R_YR=R8YR ;
if inw=1 then output ;
%put --- Rlong table ;
%initvars ;
%put ---- Rlong table ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
WAVE_NUMBER=9 ;
H_HHIDC=H9HHIDC ;
SUBHH= substr(H_HHIDC,7)     /* --- Derived variable  */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
INW=INW9 ;
WAVE_NAME=  'hrs_wave'||strip(put(wave_number,3.))     /* --- Derived variable  */ ;
CYEAR='yr2008' ;
/* --- RAND variable:HACOHORT  included */ ;
studyyr= hrs_studyyr(wave_number,
hacohort)     /* --- Derived variable  */ ;
H_HHID=H9HHID ;
S_HHIDPN=S9HHIDPN ;
/* Empty map cell for: R_ACGTOT      variable wave =  9*/ ;
R_ADL5A=R9ADL5A ;
R_ADL5H=R9ADL5H ;
R_ADL6A=R9ADL6A ;
R_ADL6H=R9ADL6H ;
/* Empty map cell for: R_ADLR10      variable wave =  9*/ ;
/* Empty map cell for: R_ADLW        variable wave =  9*/ ;
R_AGEM_B=R9AGEM_B ;
R_AGEM_E=R9AGEM_E ;
R_AGEM_M=R9AGEM_M ;
R_AGEY_B=R9AGEY_B ;
R_AGEY_E=R9AGEY_E ;
R_AGEY_M=R9AGEY_M ;
/* Empty map cell for: R_AIMR10      variable wave =  9*/ ;
R_ALONE=R9ALONE ;
/* Empty map cell for: R_ALZHE       variable wave =  9*/ ;
/* Empty map cell for: R_ALZHEE      variable wave =  9*/ ;
/* Empty map cell for: R_ALZHEF      variable wave =  9*/ ;
/* Empty map cell for: R_ALZHEQ      variable wave =  9*/ ;
/* Empty map cell for: R_ALZHES      variable wave =  9*/ ;
/* Empty map cell for: R_AMSTOT      variable wave =  9*/ ;
R_ANS3PQ=R9ANS3PQ ;
/* Empty map cell for: R1_ARMS       variable wave =  9*/ ;
/* Empty map cell for: R2_ARMS       variable wave =  9*/ ;
R_ARMS=R9ARMS ;
R_ARMSA=R9ARMSA ;
/* Empty map cell for: R_ARMSW       variable wave =  9*/ ;
R_ARTHR=R9ARTHR ;
R_ARTHRE=R9ARTHRE ;
R_ARTHRF=R9ARTHRF ;
R_ARTHRQ=R9ARTHRQ ;
R_ARTHRS=R9ARTHRS ;
/* Empty map cell for: R_ATR20       variable wave =  9*/ ;
R_BACK=R9BACK ;
R_BALFUL=R9BALFUL ;
R_BALFULC=R9BALFULC ;
R_BALFULT=R9BALFULT ;
R_BALSBS=R9BALSBS ;
R_BALSBSC=R9BALSBSC ;
R_BALSEMI=R9BALSEMI ;
R_BALSEMIC=R9BALSEMIC ;
/* Empty map cell for: R1_BATH       variable wave =  9*/ ;
/* Empty map cell for: R2_BATH       variable wave =  9*/ ;
R_BATH=R9BATH ;
R_BATHA=R9BATHA ;
/* Empty map cell for: R2_BATHH      variable wave =  9*/ ;
R_BATHH=R9BATHH ;
/* Empty map cell for: R_BATHW       variable wave =  9*/ ;
/* Empty map cell for: R1_BED        variable wave =  9*/ ;
/* Empty map cell for: R2_BED        variable wave =  9*/ ;
R_BED=R9BED ;
R_BEDA=R9BEDA ;
R_BEDE=R9BEDE ;
/* Empty map cell for: R2_BEDH       variable wave =  9*/ ;
R_BEDH=R9BEDH ;
/* Empty map cell for: R_BEDW        variable wave =  9*/ ;
R_BEQ100=R9BEQ100 ;
R_BEQ10K=R9BEQ10K ;
R_BEQ500=R9BEQ500 ;
R_BEQANY=R9BEQANY ;
/* Empty map cell for: R_BEQLRG      variable wave =  9*/ ;
R_BMI=R9BMI ;
R_BPDIA=R9BPDIA ;
R_BPPOS=R9BPPOS ;
R_BPPULS=R9BPPULS ;
R_BPSYS=R9BPSYS ;
R_BREAST=R9BREAST ;
R_BWC20=R9BWC20 ;
/* Empty map cell for: R_BWC86       variable wave =  9*/ ;
R_CACT=R9CACT ;
/* Empty map cell for: R1_CALC       variable wave =  9*/ ;
/* Empty map cell for: R2_CALC       variable wave =  9*/ ;
/* Empty map cell for: R_CALCA       variable wave =  9*/ ;
/* Empty map cell for: R_CALCW       variable wave =  9*/ ;
R_CANCR=R9CANCR ;
R_CANCRE=R9CANCRE ;
R_CANCRF=R9CANCRF ;
R_CANCRQ=R9CANCRQ ;
R_CANCRS=R9CANCRS ;
R_CENDIV=R9CENDIV ;
R_CENREG=R9CENREG ;
R_CESD=R9CESD ;
R_CESDM=R9CESDM ;
/* Empty map cell for: R1_CHAIR      variable wave =  9*/ ;
/* Empty map cell for: R2_CHAIR      variable wave =  9*/ ;
R_CHAIR=R9CHAIR ;
R_CHAIRA=R9CHAIRA ;
/* Empty map cell for: R_CHAIRW      variable wave =  9*/ ;
R_CHOLST=R9CHOLST ;
/* Empty map cell for: R_CLAIMED     variable wave =  9*/ ;
/* Empty map cell for: R1_CLIM1      variable wave =  9*/ ;
/* Empty map cell for: R2_CLIM1      variable wave =  9*/ ;
R_CLIM1=R9CLIM1 ;
R_CLIM1A=R9CLIM1A ;
/* Empty map cell for: R_CLIM1W      variable wave =  9*/ ;
/* Empty map cell for: R1_CLIMS      variable wave =  9*/ ;
/* Empty map cell for: R2_CLIMS      variable wave =  9*/ ;
R_CLIMS=R9CLIMS ;
R_CLIMSA=R9CLIMSA ;
/* Empty map cell for: R_CLIMSW      variable wave =  9*/ ;
R_COGTOT=R9COGTOT ;
/* Empty map cell for: R_COMP        variable wave =  9*/ ;
/* Empty map cell for: R_COMPW       variable wave =  9*/ ;
R_CONDE=R9CONDE ;
R_CONDEF=R9CONDEF ;
R_CONDS=R9CONDS ;
R_CONDSF=R9CONDSF ;
R_CONDSP=R9CONDSP ;
R_COVR=R9COVR ;
R_COVRT=R9COVRT ;
R_COVS=R9COVS ;
R_DADAGE=R9DADAGE ;
R_DADLIV=R9DADLIV ;
R_DCBAL1=R9DCBAL1 ;
R_DCBAL2=R9DCBAL2 ;
R_DCBAL3=R9DCBAL3 ;
R_DCBAL4=R9DCBAL4 ;
R_DCBENE1=R9DCBENE1 ;
R_DCBENE2=R9DCBENE2 ;
R_DCBENE3=R9DCBENE3 ;
R_DCBENE4=R9DCBENE4 ;
R_DCCONT1=R9DCCONT1 ;
R_DCCONT2=R9DCCONT2 ;
R_DCCONT3=R9DCCONT3 ;
R_DCCONT4=R9DCCONT4 ;
R_DCMODE1=R9DCMODE1 ;
R_DCMODE2=R9DCMODE2 ;
R_DCMODE3=R9DCMODE3 ;
R_DCMODE4=R9DCMODE4 ;
R_DCPCT1=R9DCPCT1 ;
R_DCPCT2=R9DCPCT2 ;
R_DCPCT3=R9DCPCT3 ;
R_DCPCT4=R9DCPCT4 ;
/* Empty map cell for: R_DEMEN       variable wave =  9*/ ;
/* Empty map cell for: R_DEMENE      variable wave =  9*/ ;
/* Empty map cell for: R_DEMENF      variable wave =  9*/ ;
/* Empty map cell for: R_DEMENQ      variable wave =  9*/ ;
/* Empty map cell for: R_DEMENS      variable wave =  9*/ ;
R_DENTST=R9DENTST ;
R_DEPRES=R9DEPRES ;
/* Empty map cell for: R_DEPREX      variable wave =  9*/ ;
R_DIAB=R9DIAB ;
R_DIABE=R9DIABE ;
R_DIABF=R9DIABF ;
R_DIABQ=R9DIABQ ;
R_DIABS=R9DIABS ;
/* Empty map cell for: R1_DIME       variable wave =  9*/ ;
/* Empty map cell for: R2_DIME       variable wave =  9*/ ;
R_DIME=R9DIME ;
R_DIMEA=R9DIMEA ;
/* Empty map cell for: R_DIMEW       variable wave =  9*/ ;
R_DLRC=R9DLRC ;
/* Empty map cell for: R_DLRC20      variable wave =  9*/ ;
R_DOCTIM=R9DOCTIM ;
R_DOCTOR=R9DOCTOR ;
/* Empty map cell for: R1_DRESS      variable wave =  9*/ ;
/* Empty map cell for: R2_DRESS      variable wave =  9*/ ;
R_DRESS=R9DRESS ;
R_DRESSA=R9DRESSA ;
/* Empty map cell for: R2_DRESSH     variable wave =  9*/ ;
R_DRESSH=R9DRESSH ;
/* Empty map cell for: R_DRESSW      variable wave =  9*/ ;
R_DRINK=R9DRINK ;
R_DRINKD=R9DRINKD ;
R_DRINKN=R9DRINKN ;
/* Empty map cell for: R_DRINKR      variable wave =  9*/ ;
R_DRUGS=R9DRUGS ;
R_DSIAMT=R9DSIAMT ;
R_DSSAMT=R9DSSAMT ;
R_DSTAT=R9DSTAT ;
R_DW=R9DW ;
R_DY=R9DY ;
/* Empty map cell for: R1_EAT        variable wave =  9*/ ;
/* Empty map cell for: R2_EAT        variable wave =  9*/ ;
R_EAT=R9EAT ;
R_EATA=R9EATA ;
/* Empty map cell for: R2_EATH       variable wave =  9*/ ;
R_EATH=R9EATH ;
/* Empty map cell for: R_EATW        variable wave =  9*/ ;
R_EFFORT=R9EFFORT ;
/* Empty map cell for: R_EFFORX      variable wave =  9*/ ;
R_ENLIFE=R9ENLIFE ;
/* Empty map cell for: R_ENLIFX      variable wave =  9*/ ;
R_FAMR=R9FAMR ;
R_FBWC20=R9FBWC20 ;
/* Empty map cell for: R_FBWC86      variable wave =  9*/ ;
R_FCACT=R9FCACT ;
R_FDLRC=R9FDLRC ;
R_FDW=R9FDW ;
R_FDY=R9FDY ;
R_FIMRC=R9FIMRC ;
R_FINEA=R9FINEA ;
/* Empty map cell for: R_FINPLN      variable wave =  9*/ ;
R_FINR=R9FINR ;
/* Empty map cell for: R_FLAG        variable wave =  9*/ ;
R_FLONE=R9FLONE ;
/* Empty map cell for: R_FLONEX      variable wave =  9*/ ;
R_FLUSHT=R9FLUSHT ;
R_FMO=R9FMO ;
R_FPRES=R9FPRES ;
R_FPSTME=R9FPSTME ;
R_FSAD=R9FSAD ;
/* Empty map cell for: R_FSADX       variable wave =  9*/ ;
R_FSCIS=R9FSCIS ;
R_FSER7=R9FSER7 ;
R_FSIZE=R9FSIZE ;
R_FSIZEF=R9FSIZEF ;
R_FSLFME=R9FSLFME ;
R_FVOCAB=R9FVOCAB ;
R_FVP=R9FVP ;
R_FYR=R9FYR ;
R_GOING=R9GOING ;
/* Empty map cell for: R_GOINGX      variable wave =  9*/ ;
R_GOVMD=R9GOVMD ;
R_GOVMR=R9GOVMR ;
/* Empty map cell for: R_GOVOT       variable wave =  9*/ ;
R_GOVVA=R9GOVVA ;
R_GROSSA=R9GROSSA ;
R_GRP=R9GRP ;
R_GRPDOM=R9GRPDOM ;
R_GRPL=R9GRPL ;
R_GRPPOS=R9GRPPOS ;
R_GRPR=R9GRPR ;
R_HALUC=R9HALUC ;
/* Empty map cell for: R_HDLR20      variable wave =  9*/ ;
R_HEART=R9HEART ;
R_HEARTE=R9HEARTE ;
R_HEARTF=R9HEARTF ;
R_HEARTQ=R9HEARTQ ;
R_HEARTS=R9HEARTS ;
R_HECOV1=R9HECOV1 ;
R_HECOV2=R9HECOV2 ;
R_HECOV3=R9HECOV3 ;
R_HEIGHT=R9HEIGHT ;
R_HENUM=R9HENUM ;
R_HERET=R9HERET ;
R_HERTR1=R9HERTR1 ;
R_HERTR2=R9HERTR2 ;
R_HERTR3=R9HERTR3 ;
R_HERTS1=R9HERTS1 ;
R_HERTS2=R9HERTS2 ;
R_HERTS3=R9HERTS3 ;
R_HESRC1=R9HESRC1 ;
R_HESRC2=R9HESRC2 ;
R_HESRC3=R9HESRC3 ;
R_HIBP=R9HIBP ;
R_HIBPE=R9HIBPE ;
R_HIBPF=R9HIBPF ;
R_HIBPQ=R9HIBPQ ;
R_HIBPS=R9HIBPS ;
R_HIGOV=R9HIGOV ;
R_HILTC=R9HILTC ;
/* Empty map cell for: R_HIMR20      variable wave =  9*/ ;
R_HIOTHP=R9HIOTHP ;
R_HLPDYSF=R9HLPDYSF ;
R_HLPDYSNF=R9HLPDYSNF ;
R_HLPDYSP=R9HLPDYSP ;
R_HLPDYST=R9HLPDYST ;
R_HLPDYSU=R9HLPDYSU ;
R_HLPHRSF=R9HLPHRSF ;
R_HLPHRSNF=R9HLPHRSNF ;
R_HLPHRSP=R9HLPHRSP ;
R_HLPHRST=R9HLPHRST ;
R_HLPHRSU=R9HLPHRSU ;
R_HLPPDFA=R9HLPPDFA ;
R_HLPPDFN=R9HLPPDFN ;
R_HLPPDNFA=R9HLPPDNFA ;
R_HLPPDNFN=R9HLPPDNFN ;
R_HLPPDTA=R9HLPPDTA ;
R_HLPPDTN=R9HLPPDTN ;
R_HLPRFN=R9HLPRFN ;
R_HLPRNFN=R9HLPRNFN ;
R_HLPRPN=R9HLPRPN ;
R_HLPRTN=R9HLPRTN ;
R_HLPRUN=R9HLPRUN ;
R_HLTC3=R9HLTC3 ;
/* Empty map cell for: R_HLTC5       variable wave =  9*/ ;
/* Empty map cell for: R_HLTC5F      variable wave =  9*/ ;
R_HLTHLM=R9HLTHLM ;
R_HOMCAR=R9HOMCAR ;
R_HOSP=R9HOSP ;
R_HSPNIT=R9HSPNIT ;
R_HSPTIM=R9HSPTIM ;
/* Empty map cell for: R_HSWRKF      variable wave =  9*/ ;
/* Empty map cell for: R_HTR40       variable wave =  9*/ ;
R_IADL5A=R9IADL5A ;
R_IADL5H=R9IADL5H ;
R_IANN=R9IANN ;
R_IEARN=R9IEARN ;
R_IFANN=R9IFANN ;
R_IFEARN=R9IFEARN ;
R_IFGXFR=R9IFGXFR ;
R_IFIRAW=R9IFIRAW ;
/* Empty map cell for: R_IFIRAWY1    variable wave =  9*/ ;
R_IFPEN=R9IFPEN ;
R_IFPENA=R9IFPENA ;
R_IFSDI=R9IFSDI ;
R_IFSRET=R9IFSRET ;
R_IFSSDI=R9IFSSDI ;
/* Empty map cell for: R_IFSSI       variable wave =  9*/ ;
R_IFUNEM=R9IFUNEM ;
R_IFUNWC=R9IFUNWC ;
R_IFWCMP=R9IFWCMP ;
R_IGXFR=R9IGXFR ;
R_IIRAW=R9IIRAW ;
R_IIRAWY1=R9IIRAWY1 ;
R_IMRC=R9IMRC ;
/* Empty map cell for: R_IMRC20      variable wave =  9*/ ;
/* Empty map cell for: R_INHER       variable wave =  9*/ ;
R_INHPE=R9INHPE ;
R_INHPFN=R9INHPFN ;
R_INHPNFN=R9INHPNFN ;
R_INHPPN=R9INHPPN ;
R_INHPTN=R9INHPTN ;
R_INHPUN=R9INHPUN ;
R_INLBRF=R9INLBRF ;
R_IPEN=R9IPEN ;
R_IPENA=R9IPENA ;
R_ISDI=R9ISDI ;
R_ISRET=R9ISRET ;
R_ISSDI=R9ISSDI ;
R_ISSI=R9ISSI ;
R_IUNEM=R9IUNEM ;
R_IUNWC=R9IUNWC ;
R_IWBEG=R9IWBEG ;
/* Empty map cell for: R_IWBEGF      variable wave =  9*/ ;
R_IWCMP=R9IWCMP ;
R_IWEND=R9IWEND ;
/* Empty map cell for: R_IWENDF      variable wave =  9*/ ;
R_IWENDM=R9IWENDM ;
R_IWENDY=R9IWENDY ;
R_IWMID=R9IWMID ;
R_IWMIDF=R9IWMIDF ;
R_IWSTAT=R9IWSTAT ;
R_JCIND=R9JCIND ;
R_JCINDB=R9JCINDB ;
/* Empty map cell for: R_JCINDC      variable wave =  9*/ ;
R_JCOCC=R9JCOCC ;
R_JCOCCA=R9JCOCCA ;
R_JCOCCB=R9JCOCCB ;
/* Empty map cell for: R_JCOCCC      variable wave =  9*/ ;
R_JCPEN=R9JCPEN ;
/* Empty map cell for: R_JCPENF      variable wave =  9*/ ;
R_JCTEN=R9JCTEN ;
R_JHOUR2=R9JHOUR2 ;
R_JHOURS=R9JHOURS ;
R_JJOBS=R9JJOBS ;
R_JLASTM=R9JLASTM ;
R_JLASTY=R9JLASTY ;
R_JLIFT=R9JLIFT ;
R_JLIND=R9JLIND ;
R_JLINDB=R9JLINDB ;
/* Empty map cell for: R_JLINDC      variable wave =  9*/ ;
R_JLMIS=R9JLMIS ;
R_JLOCC=R9JLOCC ;
R_JLOCCA=R9JLOCCA ;
R_JLOCCB=R9JLOCCB ;
/* Empty map cell for: R_JLOCCC      variable wave =  9*/ ;
R_JLTEN=R9JLTEN ;
R_JLTENF=R9JLTENF ;
R_JMISS=R9JMISS ;
R_JNJOB=R9JNJOB ;
R_JNJOB5=R9JNJOB5 ;
/* Empty map cell for: R1_JOG        variable wave =  9*/ ;
/* Empty map cell for: R2_JOG        variable wave =  9*/ ;
R_JOG=R9JOG ;
R_JOGA=R9JOGA ;
/* Empty map cell for: R_JOGW        variable wave =  9*/ ;
R_JPHYS=R9JPHYS ;
R_JSIGHT=R9JSIGHT ;
R_JSTOOP=R9JSTOOP ;
R_JSTRES=R9JSTRES ;
R_JWEEK2=R9JWEEK2 ;
R_JWEEKS=R9JWEEKS ;
R_JYEARM=R9JYEARM ;
R_JYEARS=R9JYEARS ;
R_LBAGR=R9LBAGR ;
/* Empty map cell for: R_LBASSISTPRB variable wave =  9*/ ;
R_LBCOMP=R9LBCOMP ;
/* Empty map cell for: R_LBCON10     variable wave =  9*/ ;
R_LBCON5=R9LBCON5 ;
R_LBELIG=R9LBELIG ;
R_LBEXT=R9LBEXT ;
/* Empty map cell for: R_LBFAMDRUGPRBvariable wave =  9*/ ;
/* Empty map cell for: R_LBFAMHLTHPRBvariable wave =  9*/ ;
/* Empty map cell for: R_LBFINPRB    variable wave =  9*/ ;
/* Empty map cell for: R_LBHLTHPRB   variable wave =  9*/ ;
/* Empty map cell for: R_LBHOUSEPRB  variable wave =  9*/ ;
R_LBLONELY11=R9LBLONELY11 ;
R_LBLONELY3=R9LBLONELY3 ;
R_LBNEGAFFECT=R9LBNEGAFFECT ;
/* Empty map cell for: R_LBNEGAFFECT6variable wave =  9*/ ;
R_LBNEUR=R9LBNEUR ;
/* Empty map cell for: R_LBONCHRSTR  variable wave =  9*/ ;
R_LBOPEN=R9LBOPEN ;
R_LBPOSAFFECT=R9LBPOSAFFECT ;
/* Empty map cell for: R_LBPOSAFFECT6variable wave =  9*/ ;
R_LBRF=R9LBRF ;
R_LBRFH=R9LBRFH ;
R_LBRFY=R9LBRFY ;
/* Empty map cell for: R_LBRLTNSHPRB variable wave =  9*/ ;
R_LBSATCITY=R9LBSATCITY ;
R_LBSATFAM=R9LBSATFAM ;
R_LBSATFIN=R9LBSATFIN ;
R_LBSATHLTH=R9LBSATHLTH ;
R_LBSATHOME=R9LBSATHOME ;
/* Empty map cell for: R_LBSATINC    variable wave =  9*/ ;
R_LBSATLEISURE=R9LBSATLEISURE ;
R_LBSATLIFE=R9LBSATLIFE ;
R_LBSATWLF=R9LBSATWLF ;
R_LBWGTR=R9LBWGTR ;
/* Empty map cell for: R_LBWORKPRB   variable wave =  9*/ ;
R_LGMUSA=R9LGMUSA ;
/* Empty map cell for: R_LGMUSW      variable wave =  9*/ ;
/* Empty map cell for: R_LHTACT      variable wave =  9*/ ;
R_LIFEIN=R9LIFEIN ;
/* Empty map cell for: R1_LIFT       variable wave =  9*/ ;
/* Empty map cell for: R2_LIFT       variable wave =  9*/ ;
R_LIFT=R9LIFT ;
R_LIFTA=R9LIFTA ;
/* Empty map cell for: R_LIFTW       variable wave =  9*/ ;
R_LIV10=R9LIV10 ;
R_LIV10A=R9LIV10A ;
R_LIV10P=R9LIV10P ;
R_LIV10R=R9LIV10R ;
R_LIV75=R9LIV75 ;
R_LIV75C=R9LIV75C ;
R_LIV75F=R9LIV75F ;
R_LIV75P=R9LIV75P ;
R_LIV75R=R9LIV75R ;
/* Empty map cell for: R_LIV85       variable wave =  9*/ ;
/* Empty map cell for: R_LIV85C      variable wave =  9*/ ;
/* Empty map cell for: R_LIV85F      variable wave =  9*/ ;
/* Empty map cell for: R_LIV85P      variable wave =  9*/ ;
/* Empty map cell for: R_LIV85R      variable wave =  9*/ ;
R_LIV8XC=R9LIV8XC ;
R_LIV8XF=R9LIV8XF ;
R_LIVBRO=R9LIVBRO ;
R_LIVPAR=R9LIVPAR ;
R_LIVSIB=R9LIVSIB ;
R_LIVSIS=R9LIVSIS ;
R_LOST=R9LOST ;
/* Empty map cell for: R_LTACTF      variable wave =  9*/ ;
/* Empty map cell for: R_LTACTN      variable wave =  9*/ ;
/* Empty map cell for: R_LTACTP      variable wave =  9*/ ;
R_LTACTX=R9LTACTX ;
R_LTCPRM=R9LTCPRM ;
R_LUNG=R9LUNG ;
R_LUNGE=R9LUNGE ;
R_LUNGF=R9LUNGF ;
R_LUNGQ=R9LUNGQ ;
R_LUNGS=R9LUNGS ;
R_MAMMOG=R9MAMMOG ;
/* Empty map cell for: R1_MAP        variable wave =  9*/ ;
/* Empty map cell for: R2_MAP        variable wave =  9*/ ;
R_MAP=R9MAP ;
R_MAPA=R9MAPA ;
/* Empty map cell for: R_MAPW        variable wave =  9*/ ;
R_MCURLN=R9MCURLN ;
/* Empty map cell for: R_MCWV        variable wave =  9*/ ;
/* Empty map cell for: R_MCWVW       variable wave =  9*/ ;
R_MDACTX=R9MDACTX ;
R_MDIV=R9MDIV ;
R_MEALS=R9MEALS ;
R_MEALSA=R9MEALSA ;
R_MEALSH=R9MEALSH ;
/* Empty map cell for: R_MEALSR      variable wave =  9*/ ;
/* Empty map cell for: R2_MEDS       variable wave =  9*/ ;
R_MEDS=R9MEDS ;
R_MEDSA=R9MEDSA ;
R_MEDSH=R9MEDSH ;
/* Empty map cell for: R_MEDSR       variable wave =  9*/ ;
R_MEMRY=R9MEMRY ;
R_MEMRYE=R9MEMRYE ;
R_MEMRYF=R9MEMRYF ;
R_MEMRYQ=R9MEMRYQ ;
R_MEMRYS=R9MEMRYS ;
R_MEND=R9MEND ;
R_MLEN=R9MLEN ;
R_MLENM=R9MLENM ;
R_MNEV=R9MNEV ;
R_MO=R9MO ;
R_MOBILA=R9MOBILA ;
/* Empty map cell for: R_MOBILW      variable wave =  9*/ ;
R_MOMAGE=R9MOMAGE ;
R_MOMLIV=R9MOMLIV ;
/* Empty map cell for: R2_MONEY      variable wave =  9*/ ;
R_MONEY=R9MONEY ;
R_MONEYA=R9MONEYA ;
R_MONEYH=R9MONEYH ;
/* Empty map cell for: R_MONEYR      variable wave =  9*/ ;
R_MPART=R9MPART ;
R_MRCT=R9MRCT ;
R_MRPREM=R9MRPREM ;
R_MSTAT=R9MSTAT ;
R_MSTATF=R9MSTATF ;
R_MSTATH=R9MSTATH ;
R_MSTOT=R9MSTOT ;
R_MWID=R9MWID ;
R_NHMDAY=R9NHMDAY ;
R_NHMLIV=R9NHMLIV ;
R_NHMMVM=R9NHMMVM ;
R_NHMMVY=R9NHMMVY ;
R_NOTICS=R9NOTICS ;
R_NOVOC=R9NOVOC ;
R_NRSHOM=R9NRSHOM ;
R_NRSNIT=R9NRSNIT ;
R_NRSTIM=R9NRSTIM ;
/* Empty map cell for: R_NSSCRE      variable wave =  9*/ ;
/* Empty map cell for: R_NSSCSE      variable wave =  9*/ ;
R_OOPMD=R9OOPMD ;
R_OOPMDF=R9OOPMDF ;
/* Empty map cell for: R_OOPMDO      variable wave =  9*/ ;
/* Empty map cell for: R_OOPMDOF     variable wave =  9*/ ;
R_OUTPT=R9OUTPT ;
R_PAPSM=R9PAPSM ;
/* Empty map cell for: R_PARTD       variable wave =  9*/ ;
R_PENCT=R9PENCT ;
R_PENIC1=R9PENIC1 ;
R_PENIC2=R9PENIC2 ;
R_PENINC=R9PENINC ;
R_PENI_N=R9PENI_N ;
R_PEXIT=R9PEXIT ;
/* Empty map cell for: R2_PHONE      variable wave =  9*/ ;
R_PHONE=R9PHONE ;
R_PHONEA=R9PHONEA ;
R_PHONEH=R9PHONEH ;
/* Empty map cell for: R_PHONER      variable wave =  9*/ ;
R_PMBMI=R9PMBMI ;
R_PMHGHT=R9PMHGHT ;
R_PMHGHTS=R9PMHGHTS ;
R_PMWAIST=R9PMWAIST ;
R_PMWAISTC=R9PMWAISTC ;
R_PMWGHT=R9PMWGHT ;
R_PMWGHTF=R9PMWGHTF ;
R_PMWGHTS=R9PMWGHTS ;
R_PNHM5Y=R9PNHM5Y ;
R_PRCHMEM=R9PRCHMEM ;
R_PRES=R9PRES ;
R_PRMEM=R9PRMEM ;
R_PROST=R9PROST ;
R_PROXY=R9PROXY ;
R_PRPCNT=R9PRPCNT ;
R_PRPRM1=R9PRPRM1 ;
R_PRPRM2=R9PRPRM2 ;
R_PRPRM3=R9PRPRM3 ;
R_PRSRC1=R9PRSRC1 ;
R_PRSRC2=R9PRSRC2 ;
R_PRSRC3=R9PRSRC3 ;
R_PSTMEM=R9PSTMEM ;
R_PSYCH=R9PSYCH ;
R_PSYCHE=R9PSYCHE ;
R_PSYCHF=R9PSYCHF ;
R_PSYCHQ=R9PSYCHQ ;
R_PSYCHS=R9PSYCHS ;
R_PTYP1=R9PTYP1 ;
R_PTYP2=R9PTYP2 ;
R_PTYP3=R9PTYP3 ;
R_PTYP4=R9PTYP4 ;
R_PTYPD1=R9PTYPD1 ;
R_PTYPD2=R9PTYPD2 ;
R_PTYPD3=R9PTYPD3 ;
R_PTYPD4=R9PTYPD4 ;
R_PTYPF1=R9PTYPF1 ;
R_PTYPF2=R9PTYPF2 ;
R_PTYPF3=R9PTYPF3 ;
R_PTYPF4=R9PTYPF4 ;
R_PUFF=R9PUFF ;
R_PUFFPOS=R9PUFFPOS ;
/* Empty map cell for: R1_PUSH       variable wave =  9*/ ;
/* Empty map cell for: R2_PUSH       variable wave =  9*/ ;
R_PUSH=R9PUSH ;
R_PUSHA=R9PUSHA ;
/* Empty map cell for: R_PUSHW       variable wave =  9*/ ;
R_RETDTWV=R9RETDTWV ;
R_RETEMP=R9RETEMP ;
/* Empty map cell for: R_RETINC      variable wave =  9*/ ;
/* Empty map cell for: R_RETLIV      variable wave =  9*/ ;
R_RETMON=R9RETMON ;
R_RETSAT=R9RETSAT ;
/* Empty map cell for: R_RETWLT      variable wave =  9*/ ;
/* Empty map cell for: R_RETWRK      variable wave =  9*/ ;
/* Empty map cell for: R_RETWSP      variable wave =  9*/ ;
R_RETYR=R9RETYR ;
/* Empty map cell for: R_RISK        variable wave =  9*/ ;
/* Empty map cell for: R_RISK6       variable wave =  9*/ ;
R_RPLNYA=R9RPLNYA ;
R_RPLNYR=R9RPLNYR ;
R_RXPREM=R9RXPREM ;
R_RYRCMP=R9RYRCMP ;
R_SADLF=R9SADLF ;
R_SAMEJOB=R9SAMEJOB ;
R_SAMEMP=R9SAMEMP ;
R_SAYRET=R9SAYRET ;
R_SCIS=R9SCIS ;
R_SDIAPL=R9SDIAPL ;
R_SDIAPLM=R9SDIAPLM ;
R_SDIAPLY=R9SDIAPLY ;
R_SDIAPP=R9SDIAPP ;
R_SDIAPPM=R9SDIAPPM ;
R_SDIAPPY=R9SDIAPPY ;
R_SDIDEN=R9SDIDEN ;
R_SDIREC=R9SDIREC ;
R_SDIRECM=R9SDIRECM ;
R_SDIRECY=R9SDIRECY ;
R_SDISTP=R9SDISTP ;
R_SDISTPM=R9SDISTPM ;
R_SDISTPY=R9SDISTPY ;
R_SER7=R9SER7 ;
R_SHLT=R9SHLT ;
R_SHLTC=R9SHLTC ;
R_SHLTCF=R9SHLTCF ;
R_SHOP=R9SHOP ;
R_SHOPA=R9SHOPA ;
R_SHOPH=R9SHOPH ;
/* Empty map cell for: R_SHOPR       variable wave =  9*/ ;
/* Empty map cell for: R1_SIT        variable wave =  9*/ ;
/* Empty map cell for: R2_SIT        variable wave =  9*/ ;
R_SIT=R9SIT ;
R_SITA=R9SITA ;
/* Empty map cell for: R_SITW        variable wave =  9*/ ;
/* Empty map cell for: R_SLEEP       variable wave =  9*/ ;
/* Empty map cell for: R_SLEEPE      variable wave =  9*/ ;
/* Empty map cell for: R_SLEEPQ      variable wave =  9*/ ;
R_SLEEPR=R9SLEEPR ;
/* Empty map cell for: R_SLEEPS      variable wave =  9*/ ;
/* Empty map cell for: R_SLEEPX      variable wave =  9*/ ;
R_SLFEMP=R9SLFEMP ;
R_SLFMEM=R9SLFMEM ;
R_SMOKEN=R9SMOKEN ;
R_SMOKEV=R9SMOKEV ;
R_SPCFAC=R9SPCFAC ;
/* Empty map cell for: R_SSAPL       variable wave =  9*/ ;
/* Empty map cell for: R_SSAPLM      variable wave =  9*/ ;
/* Empty map cell for: R_SSAPLY      variable wave =  9*/ ;
/* Empty map cell for: R_SSAPP       variable wave =  9*/ ;
/* Empty map cell for: R_SSAPPM      variable wave =  9*/ ;
/* Empty map cell for: R_SSAPPY      variable wave =  9*/ ;
/* Empty map cell for: R_SSDEN       variable wave =  9*/ ;
R_SSDI=R9SSDI ;
R_SSIAPL=R9SSIAPL ;
R_SSIAPLM=R9SSIAPLM ;
R_SSIAPLY=R9SSIAPLY ;
R_SSIAPP=R9SSIAPP ;
R_SSIAPPM=R9SSIAPPM ;
R_SSIAPPY=R9SSIAPPY ;
R_SSIDEN=R9SSIDEN ;
R_SSIREC=R9SSIREC ;
R_SSIRECM=R9SSIRECM ;
R_SSIRECY=R9SSIRECY ;
R_SSISTP=R9SSISTP ;
R_SSISTPM=R9SSISTPM ;
R_SSISTPY=R9SSISTPY ;
/* Empty map cell for: R_SSREC       variable wave =  9*/ ;
/* Empty map cell for: R_SSRECM      variable wave =  9*/ ;
/* Empty map cell for: R_SSRECY      variable wave =  9*/ ;
/* Empty map cell for: R_SSSTP       variable wave =  9*/ ;
/* Empty map cell for: R_SSSTPM      variable wave =  9*/ ;
/* Empty map cell for: R_SSSTPY      variable wave =  9*/ ;
/* Empty map cell for: R_SSWRER      variable wave =  9*/ ;
/* Empty map cell for: R_SSWRNR      variable wave =  9*/ ;
/* Empty map cell for: R_SSWRXA      variable wave =  9*/ ;
/* Empty map cell for: R_SSWSER      variable wave =  9*/ ;
/* Empty map cell for: R_SSWSNR      variable wave =  9*/ ;
/* Empty map cell for: R_SSWSXA      variable wave =  9*/ ;
R_STATUS=R9STATUS ;
/* Empty map cell for: R1_STOOP      variable wave =  9*/ ;
/* Empty map cell for: R2_STOOP      variable wave =  9*/ ;
R_STOOP=R9STOOP ;
R_STOOPA=R9STOOPA ;
/* Empty map cell for: R_STOOPW      variable wave =  9*/ ;
R_STROK=R9STROK ;
R_STROKE=R9STROKE ;
R_STROKF=R9STROKF ;
R_STROKQ=R9STROKQ ;
R_STROKS=R9STROKS ;
R_TIMWLK=R9TIMWLK ;
R_TIMWLKA=R9TIMWLKA ;
/* Empty map cell for: R_TLIPRM      variable wave =  9*/ ;
/* Empty map cell for: R2_TOILT      variable wave =  9*/ ;
R_TOILT=R9TOILT ;
R_TOILTA=R9TOILTA ;
/* Empty map cell for: R2_TOILTH     variable wave =  9*/ ;
R_TOILTH=R9TOILTH ;
/* Empty map cell for: R_TOTMBF      variable wave =  9*/ ;
/* Empty map cell for: R_TOTMBI      variable wave =  9*/ ;
/* Empty map cell for: R_TOTMD       variable wave =  9*/ ;
/* Empty map cell for: R_TOTMDF      variable wave =  9*/ ;
R_TR20=R9TR20 ;
/* Empty map cell for: R_TR40        variable wave =  9*/ ;
R_TYLTC=R9TYLTC ;
/* Empty map cell for: R_ULCER       variable wave =  9*/ ;
R_UNEMP=R9UNEMP ;
R_UNION=R9UNION ;
R_UNIONF=R9UNIONF ;
/* Empty map cell for: R_VGACTF      variable wave =  9*/ ;
/* Empty map cell for: R_VGACTN      variable wave =  9*/ ;
/* Empty map cell for: R_VGACTP      variable wave =  9*/ ;
R_VGACTX=R9VGACTX ;
/* Empty map cell for: R_VIGACT      variable wave =  9*/ ;
R_VOCAB=R9VOCAB ;
R_VP=R9VP ;
/* Empty map cell for: R1_WALK1      variable wave =  9*/ ;
/* Empty map cell for: R2_WALK1      variable wave =  9*/ ;
R_WALK1=R9WALK1 ;
R_WALK1A=R9WALK1A ;
/* Empty map cell for: R_WALK1W      variable wave =  9*/ ;
/* Empty map cell for: R1_WALKR      variable wave =  9*/ ;
/* Empty map cell for: R2_WALKR      variable wave =  9*/ ;
R_WALKR=R9WALKR ;
R_WALKRA=R9WALKRA ;
R_WALKRE=R9WALKRE ;
/* Empty map cell for: R2_WALKRH     variable wave =  9*/ ;
R_WALKRH=R9WALKRH ;
/* Empty map cell for: R_WALKRW      variable wave =  9*/ ;
/* Empty map cell for: R1_WALKS      variable wave =  9*/ ;
/* Empty map cell for: R2_WALKS      variable wave =  9*/ ;
R_WALKS=R9WALKS ;
R_WALKSA=R9WALKSA ;
/* Empty map cell for: R_WALKSW      variable wave =  9*/ ;
R_WANDER=R9WANDER ;
R_WEIGHT=R9WEIGHT ;
R_WGFHR=R9WGFHR ;
R_WGFWK=R9WGFWK ;
R_WGIHR=R9WGIHR ;
R_WGIWK=R9WGIWK ;
/* Empty map cell for: R_WHAPPX      variable wave =  9*/ ;
R_WHAPPY=R9WHAPPY ;
R_WLIPRM=R9WLIPRM ;
R_WORK=R9WORK ;
R_WORK2=R9WORK2 ;
R_WORK62=R9WORK62 ;
R_WORK62F=R9WORK62F ;
R_WORK65=R9WORK65 ;
R_WORK65F=R9WORK65F ;
/* Empty map cell for: R_WORK70      variable wave =  9*/ ;
/* Empty map cell for: R_WORK70A     variable wave =  9*/ ;
/* Empty map cell for: R_WORK70AF    variable wave =  9*/ ;
/* Empty map cell for: R_WORK70F     variable wave =  9*/ ;
/* Empty map cell for: R_WORKLM      variable wave =  9*/ ;
R_WTCRNH=R9WTCRNH ;
R_WTHH=R9WTHH ;
R_WTRESP=R9WTRESP ;
R_WTR_NH=R9WTR_NH ;
R_YR=R9YR ;
if inw=1 then output ;
%put --- Rlong table ;
%initvars ;
%put ---- Rlong table ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
WAVE_NUMBER=10 ;
H_HHIDC=H10HHIDC ;
SUBHH= substr(H_HHIDC,7)     /* --- Derived variable  */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
INW=INW10 ;
WAVE_NAME=  'hrs_wave'||strip(put(wave_number,3.))     /* --- Derived variable  */ ;
CYEAR='yr2010' ;
/* --- RAND variable:HACOHORT  included */ ;
studyyr= hrs_studyyr(wave_number,
hacohort)     /* --- Derived variable  */ ;
H_HHID=H10HHID ;
S_HHIDPN=S10HHIDPN ;
/* Empty map cell for: R_ACGTOT      variable wave = 10*/ ;
R_ADL5A=R10ADL5A ;
R_ADL5H=R10ADL5H ;
R_ADL6A=R10ADL6A ;
R_ADL6H=R10ADL6H ;
/* Empty map cell for: R_ADLR10      variable wave = 10*/ ;
/* Empty map cell for: R_ADLW        variable wave = 10*/ ;
R_AGEM_B=R10AGEM_B ;
R_AGEM_E=R10AGEM_E ;
R_AGEM_M=R10AGEM_M ;
R_AGEY_B=R10AGEY_B ;
R_AGEY_E=R10AGEY_E ;
R_AGEY_M=R10AGEY_M ;
/* Empty map cell for: R_AIMR10      variable wave = 10*/ ;
R_ALONE=R10ALONE ;
R_ALZHE=R10ALZHE ;
R_ALZHEE=R10ALZHEE ;
/* Empty map cell for: R_ALZHEF      variable wave = 10*/ ;
R_ALZHEQ=R10ALZHEQ ;
/* Empty map cell for: R_ALZHES      variable wave = 10*/ ;
/* Empty map cell for: R_AMSTOT      variable wave = 10*/ ;
R_ANS3PQ=R10ANS3PQ ;
/* Empty map cell for: R1_ARMS       variable wave = 10*/ ;
/* Empty map cell for: R2_ARMS       variable wave = 10*/ ;
R_ARMS=R10ARMS ;
R_ARMSA=R10ARMSA ;
/* Empty map cell for: R_ARMSW       variable wave = 10*/ ;
R_ARTHR=R10ARTHR ;
R_ARTHRE=R10ARTHRE ;
R_ARTHRF=R10ARTHRF ;
R_ARTHRQ=R10ARTHRQ ;
R_ARTHRS=R10ARTHRS ;
/* Empty map cell for: R_ATR20       variable wave = 10*/ ;
R_BACK=R10BACK ;
R_BALFUL=R10BALFUL ;
R_BALFULC=R10BALFULC ;
R_BALFULT=R10BALFULT ;
R_BALSBS=R10BALSBS ;
R_BALSBSC=R10BALSBSC ;
R_BALSEMI=R10BALSEMI ;
R_BALSEMIC=R10BALSEMIC ;
/* Empty map cell for: R1_BATH       variable wave = 10*/ ;
/* Empty map cell for: R2_BATH       variable wave = 10*/ ;
R_BATH=R10BATH ;
R_BATHA=R10BATHA ;
/* Empty map cell for: R2_BATHH      variable wave = 10*/ ;
R_BATHH=R10BATHH ;
/* Empty map cell for: R_BATHW       variable wave = 10*/ ;
/* Empty map cell for: R1_BED        variable wave = 10*/ ;
/* Empty map cell for: R2_BED        variable wave = 10*/ ;
R_BED=R10BED ;
R_BEDA=R10BEDA ;
R_BEDE=R10BEDE ;
/* Empty map cell for: R2_BEDH       variable wave = 10*/ ;
R_BEDH=R10BEDH ;
/* Empty map cell for: R_BEDW        variable wave = 10*/ ;
R_BEQ100=R10BEQ100 ;
R_BEQ10K=R10BEQ10K ;
R_BEQ500=R10BEQ500 ;
R_BEQANY=R10BEQANY ;
/* Empty map cell for: R_BEQLRG      variable wave = 10*/ ;
R_BMI=R10BMI ;
R_BPDIA=R10BPDIA ;
R_BPPOS=R10BPPOS ;
R_BPPULS=R10BPPULS ;
R_BPSYS=R10BPSYS ;
R_BREAST=R10BREAST ;
R_BWC20=R10BWC20 ;
/* Empty map cell for: R_BWC86       variable wave = 10*/ ;
R_CACT=R10CACT ;
/* Empty map cell for: R1_CALC       variable wave = 10*/ ;
/* Empty map cell for: R2_CALC       variable wave = 10*/ ;
/* Empty map cell for: R_CALCA       variable wave = 10*/ ;
/* Empty map cell for: R_CALCW       variable wave = 10*/ ;
R_CANCR=R10CANCR ;
R_CANCRE=R10CANCRE ;
R_CANCRF=R10CANCRF ;
R_CANCRQ=R10CANCRQ ;
R_CANCRS=R10CANCRS ;
R_CENDIV=R10CENDIV ;
R_CENREG=R10CENREG ;
R_CESD=R10CESD ;
R_CESDM=R10CESDM ;
/* Empty map cell for: R1_CHAIR      variable wave = 10*/ ;
/* Empty map cell for: R2_CHAIR      variable wave = 10*/ ;
R_CHAIR=R10CHAIR ;
R_CHAIRA=R10CHAIRA ;
/* Empty map cell for: R_CHAIRW      variable wave = 10*/ ;
R_CHOLST=R10CHOLST ;
R_CLAIMED=R10CLAIMED ;
/* Empty map cell for: R1_CLIM1      variable wave = 10*/ ;
/* Empty map cell for: R2_CLIM1      variable wave = 10*/ ;
R_CLIM1=R10CLIM1 ;
R_CLIM1A=R10CLIM1A ;
/* Empty map cell for: R_CLIM1W      variable wave = 10*/ ;
/* Empty map cell for: R1_CLIMS      variable wave = 10*/ ;
/* Empty map cell for: R2_CLIMS      variable wave = 10*/ ;
R_CLIMS=R10CLIMS ;
R_CLIMSA=R10CLIMSA ;
/* Empty map cell for: R_CLIMSW      variable wave = 10*/ ;
R_COGTOT=R10COGTOT ;
/* Empty map cell for: R_COMP        variable wave = 10*/ ;
/* Empty map cell for: R_COMPW       variable wave = 10*/ ;
R_CONDE=R10CONDE ;
R_CONDEF=R10CONDEF ;
R_CONDS=R10CONDS ;
R_CONDSF=R10CONDSF ;
R_CONDSP=R10CONDSP ;
R_COVR=R10COVR ;
R_COVRT=R10COVRT ;
R_COVS=R10COVS ;
R_DADAGE=R10DADAGE ;
R_DADLIV=R10DADLIV ;
R_DCBAL1=R10DCBAL1 ;
R_DCBAL2=R10DCBAL2 ;
R_DCBAL3=R10DCBAL3 ;
R_DCBAL4=R10DCBAL4 ;
R_DCBENE1=R10DCBENE1 ;
R_DCBENE2=R10DCBENE2 ;
R_DCBENE3=R10DCBENE3 ;
R_DCBENE4=R10DCBENE4 ;
R_DCCONT1=R10DCCONT1 ;
R_DCCONT2=R10DCCONT2 ;
R_DCCONT3=R10DCCONT3 ;
R_DCCONT4=R10DCCONT4 ;
R_DCMODE1=R10DCMODE1 ;
R_DCMODE2=R10DCMODE2 ;
R_DCMODE3=R10DCMODE3 ;
R_DCMODE4=R10DCMODE4 ;
R_DCPCT1=R10DCPCT1 ;
R_DCPCT2=R10DCPCT2 ;
R_DCPCT3=R10DCPCT3 ;
R_DCPCT4=R10DCPCT4 ;
R_DEMEN=R10DEMEN ;
R_DEMENE=R10DEMENE ;
/* Empty map cell for: R_DEMENF      variable wave = 10*/ ;
R_DEMENQ=R10DEMENQ ;
/* Empty map cell for: R_DEMENS      variable wave = 10*/ ;
R_DENTST=R10DENTST ;
R_DEPRES=R10DEPRES ;
/* Empty map cell for: R_DEPREX      variable wave = 10*/ ;
R_DIAB=R10DIAB ;
R_DIABE=R10DIABE ;
R_DIABF=R10DIABF ;
R_DIABQ=R10DIABQ ;
R_DIABS=R10DIABS ;
/* Empty map cell for: R1_DIME       variable wave = 10*/ ;
/* Empty map cell for: R2_DIME       variable wave = 10*/ ;
R_DIME=R10DIME ;
R_DIMEA=R10DIMEA ;
/* Empty map cell for: R_DIMEW       variable wave = 10*/ ;
R_DLRC=R10DLRC ;
/* Empty map cell for: R_DLRC20      variable wave = 10*/ ;
R_DOCTIM=R10DOCTIM ;
R_DOCTOR=R10DOCTOR ;
/* Empty map cell for: R1_DRESS      variable wave = 10*/ ;
/* Empty map cell for: R2_DRESS      variable wave = 10*/ ;
R_DRESS=R10DRESS ;
R_DRESSA=R10DRESSA ;
/* Empty map cell for: R2_DRESSH     variable wave = 10*/ ;
R_DRESSH=R10DRESSH ;
/* Empty map cell for: R_DRESSW      variable wave = 10*/ ;
R_DRINK=R10DRINK ;
R_DRINKD=R10DRINKD ;
R_DRINKN=R10DRINKN ;
/* Empty map cell for: R_DRINKR      variable wave = 10*/ ;
R_DRUGS=R10DRUGS ;
R_DSIAMT=R10DSIAMT ;
R_DSSAMT=R10DSSAMT ;
R_DSTAT=R10DSTAT ;
R_DW=R10DW ;
R_DY=R10DY ;
/* Empty map cell for: R1_EAT        variable wave = 10*/ ;
/* Empty map cell for: R2_EAT        variable wave = 10*/ ;
R_EAT=R10EAT ;
R_EATA=R10EATA ;
/* Empty map cell for: R2_EATH       variable wave = 10*/ ;
R_EATH=R10EATH ;
/* Empty map cell for: R_EATW        variable wave = 10*/ ;
R_EFFORT=R10EFFORT ;
/* Empty map cell for: R_EFFORX      variable wave = 10*/ ;
R_ENLIFE=R10ENLIFE ;
/* Empty map cell for: R_ENLIFX      variable wave = 10*/ ;
R_FAMR=R10FAMR ;
R_FBWC20=R10FBWC20 ;
/* Empty map cell for: R_FBWC86      variable wave = 10*/ ;
R_FCACT=R10FCACT ;
R_FDLRC=R10FDLRC ;
R_FDW=R10FDW ;
R_FDY=R10FDY ;
R_FIMRC=R10FIMRC ;
R_FINEA=R10FINEA ;
/* Empty map cell for: R_FINPLN      variable wave = 10*/ ;
R_FINR=R10FINR ;
/* Empty map cell for: R_FLAG        variable wave = 10*/ ;
R_FLONE=R10FLONE ;
/* Empty map cell for: R_FLONEX      variable wave = 10*/ ;
R_FLUSHT=R10FLUSHT ;
R_FMO=R10FMO ;
R_FPRES=R10FPRES ;
R_FPSTME=R10FPSTME ;
R_FSAD=R10FSAD ;
/* Empty map cell for: R_FSADX       variable wave = 10*/ ;
R_FSCIS=R10FSCIS ;
R_FSER7=R10FSER7 ;
R_FSIZE=R10FSIZE ;
R_FSIZEF=R10FSIZEF ;
R_FSLFME=R10FSLFME ;
R_FVOCAB=R10FVOCAB ;
R_FVP=R10FVP ;
R_FYR=R10FYR ;
R_GOING=R10GOING ;
/* Empty map cell for: R_GOINGX      variable wave = 10*/ ;
R_GOVMD=R10GOVMD ;
R_GOVMR=R10GOVMR ;
/* Empty map cell for: R_GOVOT       variable wave = 10*/ ;
R_GOVVA=R10GOVVA ;
R_GROSSA=R10GROSSA ;
R_GRP=R10GRP ;
R_GRPDOM=R10GRPDOM ;
R_GRPL=R10GRPL ;
R_GRPPOS=R10GRPPOS ;
R_GRPR=R10GRPR ;
R_HALUC=R10HALUC ;
/* Empty map cell for: R_HDLR20      variable wave = 10*/ ;
R_HEART=R10HEART ;
R_HEARTE=R10HEARTE ;
R_HEARTF=R10HEARTF ;
R_HEARTQ=R10HEARTQ ;
R_HEARTS=R10HEARTS ;
R_HECOV1=R10HECOV1 ;
R_HECOV2=R10HECOV2 ;
R_HECOV3=R10HECOV3 ;
R_HEIGHT=R10HEIGHT ;
R_HENUM=R10HENUM ;
R_HERET=R10HERET ;
R_HERTR1=R10HERTR1 ;
R_HERTR2=R10HERTR2 ;
R_HERTR3=R10HERTR3 ;
R_HERTS1=R10HERTS1 ;
R_HERTS2=R10HERTS2 ;
R_HERTS3=R10HERTS3 ;
R_HESRC1=R10HESRC1 ;
R_HESRC2=R10HESRC2 ;
R_HESRC3=R10HESRC3 ;
R_HIBP=R10HIBP ;
R_HIBPE=R10HIBPE ;
R_HIBPF=R10HIBPF ;
R_HIBPQ=R10HIBPQ ;
R_HIBPS=R10HIBPS ;
R_HIGOV=R10HIGOV ;
R_HILTC=R10HILTC ;
/* Empty map cell for: R_HIMR20      variable wave = 10*/ ;
R_HIOTHP=R10HIOTHP ;
R_HLPDYSF=R10HLPDYSF ;
R_HLPDYSNF=R10HLPDYSNF ;
R_HLPDYSP=R10HLPDYSP ;
R_HLPDYST=R10HLPDYST ;
R_HLPDYSU=R10HLPDYSU ;
R_HLPHRSF=R10HLPHRSF ;
R_HLPHRSNF=R10HLPHRSNF ;
R_HLPHRSP=R10HLPHRSP ;
R_HLPHRST=R10HLPHRST ;
R_HLPHRSU=R10HLPHRSU ;
R_HLPPDFA=R10HLPPDFA ;
R_HLPPDFN=R10HLPPDFN ;
R_HLPPDNFA=R10HLPPDNFA ;
R_HLPPDNFN=R10HLPPDNFN ;
R_HLPPDTA=R10HLPPDTA ;
R_HLPPDTN=R10HLPPDTN ;
R_HLPRFN=R10HLPRFN ;
R_HLPRNFN=R10HLPRNFN ;
R_HLPRPN=R10HLPRPN ;
R_HLPRTN=R10HLPRTN ;
R_HLPRUN=R10HLPRUN ;
R_HLTC3=R10HLTC3 ;
/* Empty map cell for: R_HLTC5       variable wave = 10*/ ;
/* Empty map cell for: R_HLTC5F      variable wave = 10*/ ;
R_HLTHLM=R10HLTHLM ;
R_HOMCAR=R10HOMCAR ;
R_HOSP=R10HOSP ;
R_HSPNIT=R10HSPNIT ;
R_HSPTIM=R10HSPTIM ;
/* Empty map cell for: R_HSWRKF      variable wave = 10*/ ;
/* Empty map cell for: R_HTR40       variable wave = 10*/ ;
R_IADL5A=R10IADL5A ;
R_IADL5H=R10IADL5H ;
R_IANN=R10IANN ;
R_IEARN=R10IEARN ;
R_IFANN=R10IFANN ;
R_IFEARN=R10IFEARN ;
R_IFGXFR=R10IFGXFR ;
R_IFIRAW=R10IFIRAW ;
/* Empty map cell for: R_IFIRAWY1    variable wave = 10*/ ;
R_IFPEN=R10IFPEN ;
R_IFPENA=R10IFPENA ;
R_IFSDI=R10IFSDI ;
R_IFSRET=R10IFSRET ;
R_IFSSDI=R10IFSSDI ;
/* Empty map cell for: R_IFSSI       variable wave = 10*/ ;
R_IFUNEM=R10IFUNEM ;
R_IFUNWC=R10IFUNWC ;
R_IFWCMP=R10IFWCMP ;
R_IGXFR=R10IGXFR ;
R_IIRAW=R10IIRAW ;
R_IIRAWY1=R10IIRAWY1 ;
R_IMRC=R10IMRC ;
/* Empty map cell for: R_IMRC20      variable wave = 10*/ ;
/* Empty map cell for: R_INHER       variable wave = 10*/ ;
R_INHPE=R10INHPE ;
R_INHPFN=R10INHPFN ;
R_INHPNFN=R10INHPNFN ;
R_INHPPN=R10INHPPN ;
R_INHPTN=R10INHPTN ;
R_INHPUN=R10INHPUN ;
R_INLBRF=R10INLBRF ;
R_IPEN=R10IPEN ;
R_IPENA=R10IPENA ;
R_ISDI=R10ISDI ;
R_ISRET=R10ISRET ;
R_ISSDI=R10ISSDI ;
R_ISSI=R10ISSI ;
R_IUNEM=R10IUNEM ;
R_IUNWC=R10IUNWC ;
R_IWBEG=R10IWBEG ;
/* Empty map cell for: R_IWBEGF      variable wave = 10*/ ;
R_IWCMP=R10IWCMP ;
R_IWEND=R10IWEND ;
/* Empty map cell for: R_IWENDF      variable wave = 10*/ ;
R_IWENDM=R10IWENDM ;
R_IWENDY=R10IWENDY ;
R_IWMID=R10IWMID ;
R_IWMIDF=R10IWMIDF ;
R_IWSTAT=R10IWSTAT ;
R_JCIND=R10JCIND ;
R_JCINDB=R10JCINDB ;
R_JCINDC=R10JCINDC ;
R_JCOCC=R10JCOCC ;
R_JCOCCA=R10JCOCCA ;
R_JCOCCB=R10JCOCCB ;
R_JCOCCC=R10JCOCCC ;
R_JCPEN=R10JCPEN ;
/* Empty map cell for: R_JCPENF      variable wave = 10*/ ;
R_JCTEN=R10JCTEN ;
R_JHOUR2=R10JHOUR2 ;
R_JHOURS=R10JHOURS ;
R_JJOBS=R10JJOBS ;
R_JLASTM=R10JLASTM ;
R_JLASTY=R10JLASTY ;
R_JLIFT=R10JLIFT ;
R_JLIND=R10JLIND ;
R_JLINDB=R10JLINDB ;
R_JLINDC=R10JLINDC ;
R_JLMIS=R10JLMIS ;
R_JLOCC=R10JLOCC ;
R_JLOCCA=R10JLOCCA ;
R_JLOCCB=R10JLOCCB ;
R_JLOCCC=R10JLOCCC ;
R_JLTEN=R10JLTEN ;
R_JLTENF=R10JLTENF ;
R_JMISS=R10JMISS ;
R_JNJOB=R10JNJOB ;
R_JNJOB5=R10JNJOB5 ;
/* Empty map cell for: R1_JOG        variable wave = 10*/ ;
/* Empty map cell for: R2_JOG        variable wave = 10*/ ;
R_JOG=R10JOG ;
R_JOGA=R10JOGA ;
/* Empty map cell for: R_JOGW        variable wave = 10*/ ;
R_JPHYS=R10JPHYS ;
R_JSIGHT=R10JSIGHT ;
R_JSTOOP=R10JSTOOP ;
R_JSTRES=R10JSTRES ;
R_JWEEK2=R10JWEEK2 ;
R_JWEEKS=R10JWEEKS ;
R_JYEARM=R10JYEARM ;
R_JYEARS=R10JYEARS ;
R_LBAGR=R10LBAGR ;
R_LBASSISTPRB=R10LBASSISTPRB ;
R_LBCOMP=R10LBCOMP ;
R_LBCON10=R10LBCON10 ;
R_LBCON5=R10LBCON5 ;
R_LBELIG=R10LBELIG ;
R_LBEXT=R10LBEXT ;
R_LBFAMDRUGPRB=R10LBFAMDRUGPRB ;
R_LBFAMHLTHPRB=R10LBFAMHLTHPRB ;
R_LBFINPRB=R10LBFINPRB ;
R_LBHLTHPRB=R10LBHLTHPRB ;
R_LBHOUSEPRB=R10LBHOUSEPRB ;
R_LBLONELY11=R10LBLONELY11 ;
R_LBLONELY3=R10LBLONELY3 ;
R_LBNEGAFFECT=R10LBNEGAFFECT ;
/* Empty map cell for: R_LBNEGAFFECT6variable wave = 10*/ ;
R_LBNEUR=R10LBNEUR ;
R_LBONCHRSTR=R10LBONCHRSTR ;
R_LBOPEN=R10LBOPEN ;
R_LBPOSAFFECT=R10LBPOSAFFECT ;
/* Empty map cell for: R_LBPOSAFFECT6variable wave = 10*/ ;
R_LBRF=R10LBRF ;
R_LBRFH=R10LBRFH ;
R_LBRFY=R10LBRFY ;
R_LBRLTNSHPRB=R10LBRLTNSHPRB ;
R_LBSATCITY=R10LBSATCITY ;
R_LBSATFAM=R10LBSATFAM ;
R_LBSATFIN=R10LBSATFIN ;
R_LBSATHLTH=R10LBSATHLTH ;
R_LBSATHOME=R10LBSATHOME ;
R_LBSATINC=R10LBSATINC ;
R_LBSATLEISURE=R10LBSATLEISURE ;
R_LBSATLIFE=R10LBSATLIFE ;
R_LBSATWLF=R10LBSATWLF ;
R_LBWGTR=R10LBWGTR ;
R_LBWORKPRB=R10LBWORKPRB ;
R_LGMUSA=R10LGMUSA ;
/* Empty map cell for: R_LGMUSW      variable wave = 10*/ ;
/* Empty map cell for: R_LHTACT      variable wave = 10*/ ;
R_LIFEIN=R10LIFEIN ;
/* Empty map cell for: R1_LIFT       variable wave = 10*/ ;
/* Empty map cell for: R2_LIFT       variable wave = 10*/ ;
R_LIFT=R10LIFT ;
R_LIFTA=R10LIFTA ;
/* Empty map cell for: R_LIFTW       variable wave = 10*/ ;
R_LIV10=R10LIV10 ;
R_LIV10A=R10LIV10A ;
R_LIV10P=R10LIV10P ;
R_LIV10R=R10LIV10R ;
R_LIV75=R10LIV75 ;
R_LIV75C=R10LIV75C ;
R_LIV75F=R10LIV75F ;
R_LIV75P=R10LIV75P ;
R_LIV75R=R10LIV75R ;
/* Empty map cell for: R_LIV85       variable wave = 10*/ ;
/* Empty map cell for: R_LIV85C      variable wave = 10*/ ;
/* Empty map cell for: R_LIV85F      variable wave = 10*/ ;
/* Empty map cell for: R_LIV85P      variable wave = 10*/ ;
/* Empty map cell for: R_LIV85R      variable wave = 10*/ ;
R_LIV8XC=R10LIV8XC ;
R_LIV8XF=R10LIV8XF ;
R_LIVBRO=R10LIVBRO ;
R_LIVPAR=R10LIVPAR ;
R_LIVSIB=R10LIVSIB ;
R_LIVSIS=R10LIVSIS ;
R_LOST=R10LOST ;
/* Empty map cell for: R_LTACTF      variable wave = 10*/ ;
/* Empty map cell for: R_LTACTN      variable wave = 10*/ ;
/* Empty map cell for: R_LTACTP      variable wave = 10*/ ;
R_LTACTX=R10LTACTX ;
R_LTCPRM=R10LTCPRM ;
R_LUNG=R10LUNG ;
R_LUNGE=R10LUNGE ;
R_LUNGF=R10LUNGF ;
R_LUNGQ=R10LUNGQ ;
R_LUNGS=R10LUNGS ;
R_MAMMOG=R10MAMMOG ;
/* Empty map cell for: R1_MAP        variable wave = 10*/ ;
/* Empty map cell for: R2_MAP        variable wave = 10*/ ;
R_MAP=R10MAP ;
R_MAPA=R10MAPA ;
/* Empty map cell for: R_MAPW        variable wave = 10*/ ;
R_MCURLN=R10MCURLN ;
/* Empty map cell for: R_MCWV        variable wave = 10*/ ;
/* Empty map cell for: R_MCWVW       variable wave = 10*/ ;
R_MDACTX=R10MDACTX ;
R_MDIV=R10MDIV ;
R_MEALS=R10MEALS ;
R_MEALSA=R10MEALSA ;
R_MEALSH=R10MEALSH ;
/* Empty map cell for: R_MEALSR      variable wave = 10*/ ;
/* Empty map cell for: R2_MEDS       variable wave = 10*/ ;
R_MEDS=R10MEDS ;
R_MEDSA=R10MEDSA ;
R_MEDSH=R10MEDSH ;
/* Empty map cell for: R_MEDSR       variable wave = 10*/ ;
/* Empty map cell for: R_MEMRY       variable wave = 10*/ ;
/* Empty map cell for: R_MEMRYE      variable wave = 10*/ ;
/* Empty map cell for: R_MEMRYF      variable wave = 10*/ ;
/* Empty map cell for: R_MEMRYQ      variable wave = 10*/ ;
/* Empty map cell for: R_MEMRYS      variable wave = 10*/ ;
R_MEND=R10MEND ;
R_MLEN=R10MLEN ;
R_MLENM=R10MLENM ;
R_MNEV=R10MNEV ;
R_MO=R10MO ;
R_MOBILA=R10MOBILA ;
/* Empty map cell for: R_MOBILW      variable wave = 10*/ ;
R_MOMAGE=R10MOMAGE ;
R_MOMLIV=R10MOMLIV ;
/* Empty map cell for: R2_MONEY      variable wave = 10*/ ;
R_MONEY=R10MONEY ;
R_MONEYA=R10MONEYA ;
R_MONEYH=R10MONEYH ;
/* Empty map cell for: R_MONEYR      variable wave = 10*/ ;
R_MPART=R10MPART ;
R_MRCT=R10MRCT ;
R_MRPREM=R10MRPREM ;
R_MSTAT=R10MSTAT ;
R_MSTATF=R10MSTATF ;
R_MSTATH=R10MSTATH ;
R_MSTOT=R10MSTOT ;
R_MWID=R10MWID ;
R_NHMDAY=R10NHMDAY ;
R_NHMLIV=R10NHMLIV ;
R_NHMMVM=R10NHMMVM ;
R_NHMMVY=R10NHMMVY ;
R_NOTICS=R10NOTICS ;
R_NOVOC=R10NOVOC ;
R_NRSHOM=R10NRSHOM ;
R_NRSNIT=R10NRSNIT ;
R_NRSTIM=R10NRSTIM ;
R_NSSCRE=R10NSSCRE ;
R_NSSCSE=R10NSSCSE ;
R_OOPMD=R10OOPMD ;
R_OOPMDF=R10OOPMDF ;
R_OOPMDO=R10OOPMDO ;
R_OOPMDOF=R10OOPMDOF ;
R_OUTPT=R10OUTPT ;
R_PAPSM=R10PAPSM ;
/* Empty map cell for: R_PARTD       variable wave = 10*/ ;
R_PENCT=R10PENCT ;
R_PENIC1=R10PENIC1 ;
R_PENIC2=R10PENIC2 ;
R_PENINC=R10PENINC ;
R_PENI_N=R10PENI_N ;
R_PEXIT=R10PEXIT ;
/* Empty map cell for: R2_PHONE      variable wave = 10*/ ;
R_PHONE=R10PHONE ;
R_PHONEA=R10PHONEA ;
R_PHONEH=R10PHONEH ;
/* Empty map cell for: R_PHONER      variable wave = 10*/ ;
R_PMBMI=R10PMBMI ;
R_PMHGHT=R10PMHGHT ;
R_PMHGHTS=R10PMHGHTS ;
R_PMWAIST=R10PMWAIST ;
R_PMWAISTC=R10PMWAISTC ;
R_PMWGHT=R10PMWGHT ;
R_PMWGHTF=R10PMWGHTF ;
R_PMWGHTS=R10PMWGHTS ;
R_PNHM5Y=R10PNHM5Y ;
R_PRCHMEM=R10PRCHMEM ;
R_PRES=R10PRES ;
R_PRMEM=R10PRMEM ;
R_PROST=R10PROST ;
R_PROXY=R10PROXY ;
R_PRPCNT=R10PRPCNT ;
R_PRPRM1=R10PRPRM1 ;
R_PRPRM2=R10PRPRM2 ;
R_PRPRM3=R10PRPRM3 ;
R_PRSRC1=R10PRSRC1 ;
R_PRSRC2=R10PRSRC2 ;
R_PRSRC3=R10PRSRC3 ;
R_PSTMEM=R10PSTMEM ;
R_PSYCH=R10PSYCH ;
R_PSYCHE=R10PSYCHE ;
R_PSYCHF=R10PSYCHF ;
R_PSYCHQ=R10PSYCHQ ;
R_PSYCHS=R10PSYCHS ;
R_PTYP1=R10PTYP1 ;
R_PTYP2=R10PTYP2 ;
R_PTYP3=R10PTYP3 ;
R_PTYP4=R10PTYP4 ;
R_PTYPD1=R10PTYPD1 ;
R_PTYPD2=R10PTYPD2 ;
R_PTYPD3=R10PTYPD3 ;
R_PTYPD4=R10PTYPD4 ;
R_PTYPF1=R10PTYPF1 ;
R_PTYPF2=R10PTYPF2 ;
R_PTYPF3=R10PTYPF3 ;
R_PTYPF4=R10PTYPF4 ;
R_PUFF=R10PUFF ;
R_PUFFPOS=R10PUFFPOS ;
/* Empty map cell for: R1_PUSH       variable wave = 10*/ ;
/* Empty map cell for: R2_PUSH       variable wave = 10*/ ;
R_PUSH=R10PUSH ;
R_PUSHA=R10PUSHA ;
/* Empty map cell for: R_PUSHW       variable wave = 10*/ ;
R_RETDTWV=R10RETDTWV ;
R_RETEMP=R10RETEMP ;
/* Empty map cell for: R_RETINC      variable wave = 10*/ ;
/* Empty map cell for: R_RETLIV      variable wave = 10*/ ;
R_RETMON=R10RETMON ;
R_RETSAT=R10RETSAT ;
/* Empty map cell for: R_RETWLT      variable wave = 10*/ ;
/* Empty map cell for: R_RETWRK      variable wave = 10*/ ;
/* Empty map cell for: R_RETWSP      variable wave = 10*/ ;
R_RETYR=R10RETYR ;
/* Empty map cell for: R_RISK        variable wave = 10*/ ;
/* Empty map cell for: R_RISK6       variable wave = 10*/ ;
R_RPLNYA=R10RPLNYA ;
R_RPLNYR=R10RPLNYR ;
R_RXPREM=R10RXPREM ;
R_RYRCMP=R10RYRCMP ;
R_SADLF=R10SADLF ;
R_SAMEJOB=R10SAMEJOB ;
R_SAMEMP=R10SAMEMP ;
R_SAYRET=R10SAYRET ;
R_SCIS=R10SCIS ;
R_SDIAPL=R10SDIAPL ;
R_SDIAPLM=R10SDIAPLM ;
R_SDIAPLY=R10SDIAPLY ;
R_SDIAPP=R10SDIAPP ;
R_SDIAPPM=R10SDIAPPM ;
R_SDIAPPY=R10SDIAPPY ;
R_SDIDEN=R10SDIDEN ;
R_SDIREC=R10SDIREC ;
R_SDIRECM=R10SDIRECM ;
R_SDIRECY=R10SDIRECY ;
R_SDISTP=R10SDISTP ;
R_SDISTPM=R10SDISTPM ;
R_SDISTPY=R10SDISTPY ;
R_SER7=R10SER7 ;
R_SHLT=R10SHLT ;
R_SHLTC=R10SHLTC ;
R_SHLTCF=R10SHLTCF ;
R_SHOP=R10SHOP ;
R_SHOPA=R10SHOPA ;
R_SHOPH=R10SHOPH ;
/* Empty map cell for: R_SHOPR       variable wave = 10*/ ;
/* Empty map cell for: R1_SIT        variable wave = 10*/ ;
/* Empty map cell for: R2_SIT        variable wave = 10*/ ;
R_SIT=R10SIT ;
R_SITA=R10SITA ;
/* Empty map cell for: R_SITW        variable wave = 10*/ ;
/* Empty map cell for: R_SLEEP       variable wave = 10*/ ;
/* Empty map cell for: R_SLEEPE      variable wave = 10*/ ;
/* Empty map cell for: R_SLEEPQ      variable wave = 10*/ ;
R_SLEEPR=R10SLEEPR ;
/* Empty map cell for: R_SLEEPS      variable wave = 10*/ ;
/* Empty map cell for: R_SLEEPX      variable wave = 10*/ ;
R_SLFEMP=R10SLFEMP ;
R_SLFMEM=R10SLFMEM ;
R_SMOKEN=R10SMOKEN ;
R_SMOKEV=R10SMOKEV ;
R_SPCFAC=R10SPCFAC ;
/* Empty map cell for: R_SSAPL       variable wave = 10*/ ;
/* Empty map cell for: R_SSAPLM      variable wave = 10*/ ;
/* Empty map cell for: R_SSAPLY      variable wave = 10*/ ;
/* Empty map cell for: R_SSAPP       variable wave = 10*/ ;
/* Empty map cell for: R_SSAPPM      variable wave = 10*/ ;
/* Empty map cell for: R_SSAPPY      variable wave = 10*/ ;
/* Empty map cell for: R_SSDEN       variable wave = 10*/ ;
R_SSDI=R10SSDI ;
R_SSIAPL=R10SSIAPL ;
R_SSIAPLM=R10SSIAPLM ;
R_SSIAPLY=R10SSIAPLY ;
R_SSIAPP=R10SSIAPP ;
R_SSIAPPM=R10SSIAPPM ;
R_SSIAPPY=R10SSIAPPY ;
R_SSIDEN=R10SSIDEN ;
R_SSIREC=R10SSIREC ;
R_SSIRECM=R10SSIRECM ;
R_SSIRECY=R10SSIRECY ;
R_SSISTP=R10SSISTP ;
R_SSISTPM=R10SSISTPM ;
R_SSISTPY=R10SSISTPY ;
/* Empty map cell for: R_SSREC       variable wave = 10*/ ;
/* Empty map cell for: R_SSRECM      variable wave = 10*/ ;
/* Empty map cell for: R_SSRECY      variable wave = 10*/ ;
/* Empty map cell for: R_SSSTP       variable wave = 10*/ ;
/* Empty map cell for: R_SSSTPM      variable wave = 10*/ ;
/* Empty map cell for: R_SSSTPY      variable wave = 10*/ ;
R_SSWRER=R10SSWRER ;
R_SSWRNR=R10SSWRNR ;
R_SSWRXA=R10SSWRXA ;
R_SSWSER=R10SSWSER ;
R_SSWSNR=R10SSWSNR ;
R_SSWSXA=R10SSWSXA ;
R_STATUS=R10STATUS ;
/* Empty map cell for: R1_STOOP      variable wave = 10*/ ;
/* Empty map cell for: R2_STOOP      variable wave = 10*/ ;
R_STOOP=R10STOOP ;
R_STOOPA=R10STOOPA ;
/* Empty map cell for: R_STOOPW      variable wave = 10*/ ;
R_STROK=R10STROK ;
R_STROKE=R10STROKE ;
R_STROKF=R10STROKF ;
R_STROKQ=R10STROKQ ;
R_STROKS=R10STROKS ;
R_TIMWLK=R10TIMWLK ;
R_TIMWLKA=R10TIMWLKA ;
/* Empty map cell for: R_TLIPRM      variable wave = 10*/ ;
/* Empty map cell for: R2_TOILT      variable wave = 10*/ ;
R_TOILT=R10TOILT ;
R_TOILTA=R10TOILTA ;
/* Empty map cell for: R2_TOILTH     variable wave = 10*/ ;
R_TOILTH=R10TOILTH ;
/* Empty map cell for: R_TOTMBF      variable wave = 10*/ ;
/* Empty map cell for: R_TOTMBI      variable wave = 10*/ ;
/* Empty map cell for: R_TOTMD       variable wave = 10*/ ;
/* Empty map cell for: R_TOTMDF      variable wave = 10*/ ;
R_TR20=R10TR20 ;
/* Empty map cell for: R_TR40        variable wave = 10*/ ;
R_TYLTC=R10TYLTC ;
/* Empty map cell for: R_ULCER       variable wave = 10*/ ;
R_UNEMP=R10UNEMP ;
R_UNION=R10UNION ;
R_UNIONF=R10UNIONF ;
/* Empty map cell for: R_VGACTF      variable wave = 10*/ ;
/* Empty map cell for: R_VGACTN      variable wave = 10*/ ;
/* Empty map cell for: R_VGACTP      variable wave = 10*/ ;
R_VGACTX=R10VGACTX ;
/* Empty map cell for: R_VIGACT      variable wave = 10*/ ;
R_VOCAB=R10VOCAB ;
R_VP=R10VP ;
/* Empty map cell for: R1_WALK1      variable wave = 10*/ ;
/* Empty map cell for: R2_WALK1      variable wave = 10*/ ;
R_WALK1=R10WALK1 ;
R_WALK1A=R10WALK1A ;
/* Empty map cell for: R_WALK1W      variable wave = 10*/ ;
/* Empty map cell for: R1_WALKR      variable wave = 10*/ ;
/* Empty map cell for: R2_WALKR      variable wave = 10*/ ;
R_WALKR=R10WALKR ;
R_WALKRA=R10WALKRA ;
R_WALKRE=R10WALKRE ;
/* Empty map cell for: R2_WALKRH     variable wave = 10*/ ;
R_WALKRH=R10WALKRH ;
/* Empty map cell for: R_WALKRW      variable wave = 10*/ ;
/* Empty map cell for: R1_WALKS      variable wave = 10*/ ;
/* Empty map cell for: R2_WALKS      variable wave = 10*/ ;
R_WALKS=R10WALKS ;
R_WALKSA=R10WALKSA ;
/* Empty map cell for: R_WALKSW      variable wave = 10*/ ;
R_WANDER=R10WANDER ;
R_WEIGHT=R10WEIGHT ;
R_WGFHR=R10WGFHR ;
R_WGFWK=R10WGFWK ;
R_WGIHR=R10WGIHR ;
R_WGIWK=R10WGIWK ;
/* Empty map cell for: R_WHAPPX      variable wave = 10*/ ;
R_WHAPPY=R10WHAPPY ;
R_WLIPRM=R10WLIPRM ;
R_WORK=R10WORK ;
R_WORK2=R10WORK2 ;
R_WORK62=R10WORK62 ;
R_WORK62F=R10WORK62F ;
R_WORK65=R10WORK65 ;
R_WORK65F=R10WORK65F ;
/* Empty map cell for: R_WORK70      variable wave = 10*/ ;
/* Empty map cell for: R_WORK70A     variable wave = 10*/ ;
/* Empty map cell for: R_WORK70AF    variable wave = 10*/ ;
/* Empty map cell for: R_WORK70F     variable wave = 10*/ ;
/* Empty map cell for: R_WORKLM      variable wave = 10*/ ;
R_WTCRNH=R10WTCRNH ;
R_WTHH=R10WTHH ;
R_WTRESP=R10WTRESP ;
R_WTR_NH=R10WTR_NH ;
R_YR=R10YR ;
if inw=1 then output ;
%put --- Rlong table ;
%initvars ;
%put ---- Rlong table ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
WAVE_NUMBER=11 ;
H_HHIDC=H11HHIDC ;
SUBHH= substr(H_HHIDC,7)     /* --- Derived variable  */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
INW=INW11 ;
WAVE_NAME=  'hrs_wave'||strip(put(wave_number,3.))     /* --- Derived variable  */ ;
CYEAR='yr2012' ;
/* --- RAND variable:HACOHORT  included */ ;
studyyr= hrs_studyyr(wave_number,
hacohort)     /* --- Derived variable  */ ;
H_HHID=H11HHID ;
S_HHIDPN=S11HHIDPN ;
/* Empty map cell for: R_ACGTOT      variable wave = 11*/ ;
R_ADL5A=R11ADL5A ;
R_ADL5H=R11ADL5H ;
R_ADL6A=R11ADL6A ;
R_ADL6H=R11ADL6H ;
/* Empty map cell for: R_ADLR10      variable wave = 11*/ ;
/* Empty map cell for: R_ADLW        variable wave = 11*/ ;
R_AGEM_B=R11AGEM_B ;
R_AGEM_E=R11AGEM_E ;
R_AGEM_M=R11AGEM_M ;
R_AGEY_B=R11AGEY_B ;
R_AGEY_E=R11AGEY_E ;
R_AGEY_M=R11AGEY_M ;
/* Empty map cell for: R_AIMR10      variable wave = 11*/ ;
R_ALONE=R11ALONE ;
R_ALZHE=R11ALZHE ;
R_ALZHEE=R11ALZHEE ;
R_ALZHEF=R11ALZHEF ;
R_ALZHEQ=R11ALZHEQ ;
R_ALZHES=R11ALZHES ;
/* Empty map cell for: R_AMSTOT      variable wave = 11*/ ;
R_ANS3PQ=R11ANS3PQ ;
/* Empty map cell for: R1_ARMS       variable wave = 11*/ ;
/* Empty map cell for: R2_ARMS       variable wave = 11*/ ;
R_ARMS=R11ARMS ;
R_ARMSA=R11ARMSA ;
/* Empty map cell for: R_ARMSW       variable wave = 11*/ ;
R_ARTHR=R11ARTHR ;
R_ARTHRE=R11ARTHRE ;
R_ARTHRF=R11ARTHRF ;
R_ARTHRQ=R11ARTHRQ ;
R_ARTHRS=R11ARTHRS ;
/* Empty map cell for: R_ATR20       variable wave = 11*/ ;
R_BACK=R11BACK ;
R_BALFUL=R11BALFUL ;
R_BALFULC=R11BALFULC ;
R_BALFULT=R11BALFULT ;
R_BALSBS=R11BALSBS ;
R_BALSBSC=R11BALSBSC ;
R_BALSEMI=R11BALSEMI ;
R_BALSEMIC=R11BALSEMIC ;
/* Empty map cell for: R1_BATH       variable wave = 11*/ ;
/* Empty map cell for: R2_BATH       variable wave = 11*/ ;
R_BATH=R11BATH ;
R_BATHA=R11BATHA ;
/* Empty map cell for: R2_BATHH      variable wave = 11*/ ;
R_BATHH=R11BATHH ;
/* Empty map cell for: R_BATHW       variable wave = 11*/ ;
/* Empty map cell for: R1_BED        variable wave = 11*/ ;
/* Empty map cell for: R2_BED        variable wave = 11*/ ;
R_BED=R11BED ;
R_BEDA=R11BEDA ;
R_BEDE=R11BEDE ;
/* Empty map cell for: R2_BEDH       variable wave = 11*/ ;
R_BEDH=R11BEDH ;
/* Empty map cell for: R_BEDW        variable wave = 11*/ ;
R_BEQ100=R11BEQ100 ;
R_BEQ10K=R11BEQ10K ;
R_BEQ500=R11BEQ500 ;
R_BEQANY=R11BEQANY ;
/* Empty map cell for: R_BEQLRG      variable wave = 11*/ ;
R_BMI=R11BMI ;
R_BPDIA=R11BPDIA ;
R_BPPOS=R11BPPOS ;
R_BPPULS=R11BPPULS ;
R_BPSYS=R11BPSYS ;
/* Empty map cell for: R_BREAST      variable wave = 11*/ ;
R_BWC20=R11BWC20 ;
/* Empty map cell for: R_BWC86       variable wave = 11*/ ;
R_CACT=R11CACT ;
/* Empty map cell for: R1_CALC       variable wave = 11*/ ;
/* Empty map cell for: R2_CALC       variable wave = 11*/ ;
/* Empty map cell for: R_CALCA       variable wave = 11*/ ;
/* Empty map cell for: R_CALCW       variable wave = 11*/ ;
R_CANCR=R11CANCR ;
R_CANCRE=R11CANCRE ;
R_CANCRF=R11CANCRF ;
R_CANCRQ=R11CANCRQ ;
R_CANCRS=R11CANCRS ;
R_CENDIV=R11CENDIV ;
R_CENREG=R11CENREG ;
R_CESD=R11CESD ;
R_CESDM=R11CESDM ;
/* Empty map cell for: R1_CHAIR      variable wave = 11*/ ;
/* Empty map cell for: R2_CHAIR      variable wave = 11*/ ;
R_CHAIR=R11CHAIR ;
R_CHAIRA=R11CHAIRA ;
/* Empty map cell for: R_CHAIRW      variable wave = 11*/ ;
R_CHOLST=R11CHOLST ;
/* Empty map cell for: R_CLAIMED     variable wave = 11*/ ;
/* Empty map cell for: R1_CLIM1      variable wave = 11*/ ;
/* Empty map cell for: R2_CLIM1      variable wave = 11*/ ;
R_CLIM1=R11CLIM1 ;
R_CLIM1A=R11CLIM1A ;
/* Empty map cell for: R_CLIM1W      variable wave = 11*/ ;
/* Empty map cell for: R1_CLIMS      variable wave = 11*/ ;
/* Empty map cell for: R2_CLIMS      variable wave = 11*/ ;
R_CLIMS=R11CLIMS ;
R_CLIMSA=R11CLIMSA ;
/* Empty map cell for: R_CLIMSW      variable wave = 11*/ ;
R_COGTOT=R11COGTOT ;
/* Empty map cell for: R_COMP        variable wave = 11*/ ;
/* Empty map cell for: R_COMPW       variable wave = 11*/ ;
R_CONDE=R11CONDE ;
R_CONDEF=R11CONDEF ;
R_CONDS=R11CONDS ;
R_CONDSF=R11CONDSF ;
R_CONDSP=R11CONDSP ;
R_COVR=R11COVR ;
R_COVRT=R11COVRT ;
R_COVS=R11COVS ;
R_DADAGE=R11DADAGE ;
R_DADLIV=R11DADLIV ;
R_DCBAL1=R11DCBAL1 ;
R_DCBAL2=R11DCBAL2 ;
R_DCBAL3=R11DCBAL3 ;
R_DCBAL4=R11DCBAL4 ;
R_DCBENE1=R11DCBENE1 ;
R_DCBENE2=R11DCBENE2 ;
R_DCBENE3=R11DCBENE3 ;
R_DCBENE4=R11DCBENE4 ;
R_DCCONT1=R11DCCONT1 ;
R_DCCONT2=R11DCCONT2 ;
R_DCCONT3=R11DCCONT3 ;
R_DCCONT4=R11DCCONT4 ;
R_DCMODE1=R11DCMODE1 ;
R_DCMODE2=R11DCMODE2 ;
R_DCMODE3=R11DCMODE3 ;
R_DCMODE4=R11DCMODE4 ;
R_DCPCT1=R11DCPCT1 ;
R_DCPCT2=R11DCPCT2 ;
R_DCPCT3=R11DCPCT3 ;
R_DCPCT4=R11DCPCT4 ;
R_DEMEN=R11DEMEN ;
R_DEMENE=R11DEMENE ;
R_DEMENF=R11DEMENF ;
R_DEMENQ=R11DEMENQ ;
R_DEMENS=R11DEMENS ;
R_DENTST=R11DENTST ;
R_DEPRES=R11DEPRES ;
/* Empty map cell for: R_DEPREX      variable wave = 11*/ ;
R_DIAB=R11DIAB ;
R_DIABE=R11DIABE ;
R_DIABF=R11DIABF ;
R_DIABQ=R11DIABQ ;
R_DIABS=R11DIABS ;
/* Empty map cell for: R1_DIME       variable wave = 11*/ ;
/* Empty map cell for: R2_DIME       variable wave = 11*/ ;
R_DIME=R11DIME ;
R_DIMEA=R11DIMEA ;
/* Empty map cell for: R_DIMEW       variable wave = 11*/ ;
R_DLRC=R11DLRC ;
/* Empty map cell for: R_DLRC20      variable wave = 11*/ ;
R_DOCTIM=R11DOCTIM ;
R_DOCTOR=R11DOCTOR ;
/* Empty map cell for: R1_DRESS      variable wave = 11*/ ;
/* Empty map cell for: R2_DRESS      variable wave = 11*/ ;
R_DRESS=R11DRESS ;
R_DRESSA=R11DRESSA ;
/* Empty map cell for: R2_DRESSH     variable wave = 11*/ ;
R_DRESSH=R11DRESSH ;
/* Empty map cell for: R_DRESSW      variable wave = 11*/ ;
R_DRINK=R11DRINK ;
R_DRINKD=R11DRINKD ;
R_DRINKN=R11DRINKN ;
/* Empty map cell for: R_DRINKR      variable wave = 11*/ ;
R_DRUGS=R11DRUGS ;
R_DSIAMT=R11DSIAMT ;
R_DSSAMT=R11DSSAMT ;
R_DSTAT=R11DSTAT ;
R_DW=R11DW ;
R_DY=R11DY ;
/* Empty map cell for: R1_EAT        variable wave = 11*/ ;
/* Empty map cell for: R2_EAT        variable wave = 11*/ ;
R_EAT=R11EAT ;
R_EATA=R11EATA ;
/* Empty map cell for: R2_EATH       variable wave = 11*/ ;
R_EATH=R11EATH ;
/* Empty map cell for: R_EATW        variable wave = 11*/ ;
R_EFFORT=R11EFFORT ;
/* Empty map cell for: R_EFFORX      variable wave = 11*/ ;
R_ENLIFE=R11ENLIFE ;
/* Empty map cell for: R_ENLIFX      variable wave = 11*/ ;
R_FAMR=R11FAMR ;
R_FBWC20=R11FBWC20 ;
/* Empty map cell for: R_FBWC86      variable wave = 11*/ ;
R_FCACT=R11FCACT ;
R_FDLRC=R11FDLRC ;
R_FDW=R11FDW ;
R_FDY=R11FDY ;
R_FIMRC=R11FIMRC ;
R_FINEA=R11FINEA ;
R_FINPLN=R11FINPLN ;
R_FINR=R11FINR ;
/* Empty map cell for: R_FLAG        variable wave = 11*/ ;
R_FLONE=R11FLONE ;
/* Empty map cell for: R_FLONEX      variable wave = 11*/ ;
R_FLUSHT=R11FLUSHT ;
R_FMO=R11FMO ;
R_FPRES=R11FPRES ;
R_FPSTME=R11FPSTME ;
R_FSAD=R11FSAD ;
/* Empty map cell for: R_FSADX       variable wave = 11*/ ;
R_FSCIS=R11FSCIS ;
R_FSER7=R11FSER7 ;
R_FSIZE=R11FSIZE ;
R_FSIZEF=R11FSIZEF ;
R_FSLFME=R11FSLFME ;
R_FVOCAB=R11FVOCAB ;
R_FVP=R11FVP ;
R_FYR=R11FYR ;
R_GOING=R11GOING ;
/* Empty map cell for: R_GOINGX      variable wave = 11*/ ;
R_GOVMD=R11GOVMD ;
R_GOVMR=R11GOVMR ;
/* Empty map cell for: R_GOVOT       variable wave = 11*/ ;
R_GOVVA=R11GOVVA ;
R_GROSSA=R11GROSSA ;
R_GRP=R11GRP ;
R_GRPDOM=R11GRPDOM ;
R_GRPL=R11GRPL ;
R_GRPPOS=R11GRPPOS ;
R_GRPR=R11GRPR ;
R_HALUC=R11HALUC ;
/* Empty map cell for: R_HDLR20      variable wave = 11*/ ;
R_HEART=R11HEART ;
R_HEARTE=R11HEARTE ;
R_HEARTF=R11HEARTF ;
R_HEARTQ=R11HEARTQ ;
R_HEARTS=R11HEARTS ;
R_HECOV1=R11HECOV1 ;
R_HECOV2=R11HECOV2 ;
R_HECOV3=R11HECOV3 ;
R_HEIGHT=R11HEIGHT ;
R_HENUM=R11HENUM ;
R_HERET=R11HERET ;
R_HERTR1=R11HERTR1 ;
R_HERTR2=R11HERTR2 ;
R_HERTR3=R11HERTR3 ;
R_HERTS1=R11HERTS1 ;
R_HERTS2=R11HERTS2 ;
R_HERTS3=R11HERTS3 ;
R_HESRC1=R11HESRC1 ;
R_HESRC2=R11HESRC2 ;
R_HESRC3=R11HESRC3 ;
R_HIBP=R11HIBP ;
R_HIBPE=R11HIBPE ;
R_HIBPF=R11HIBPF ;
R_HIBPQ=R11HIBPQ ;
R_HIBPS=R11HIBPS ;
R_HIGOV=R11HIGOV ;
R_HILTC=R11HILTC ;
/* Empty map cell for: R_HIMR20      variable wave = 11*/ ;
R_HIOTHP=R11HIOTHP ;
R_HLPDYSF=R11HLPDYSF ;
R_HLPDYSNF=R11HLPDYSNF ;
R_HLPDYSP=R11HLPDYSP ;
R_HLPDYST=R11HLPDYST ;
R_HLPDYSU=R11HLPDYSU ;
R_HLPHRSF=R11HLPHRSF ;
R_HLPHRSNF=R11HLPHRSNF ;
R_HLPHRSP=R11HLPHRSP ;
R_HLPHRST=R11HLPHRST ;
R_HLPHRSU=R11HLPHRSU ;
R_HLPPDFA=R11HLPPDFA ;
R_HLPPDFN=R11HLPPDFN ;
R_HLPPDNFA=R11HLPPDNFA ;
R_HLPPDNFN=R11HLPPDNFN ;
R_HLPPDTA=R11HLPPDTA ;
R_HLPPDTN=R11HLPPDTN ;
R_HLPRFN=R11HLPRFN ;
R_HLPRNFN=R11HLPRNFN ;
R_HLPRPN=R11HLPRPN ;
R_HLPRTN=R11HLPRTN ;
R_HLPRUN=R11HLPRUN ;
R_HLTC3=R11HLTC3 ;
/* Empty map cell for: R_HLTC5       variable wave = 11*/ ;
/* Empty map cell for: R_HLTC5F      variable wave = 11*/ ;
R_HLTHLM=R11HLTHLM ;
R_HOMCAR=R11HOMCAR ;
R_HOSP=R11HOSP ;
R_HSPNIT=R11HSPNIT ;
R_HSPTIM=R11HSPTIM ;
/* Empty map cell for: R_HSWRKF      variable wave = 11*/ ;
/* Empty map cell for: R_HTR40       variable wave = 11*/ ;
R_IADL5A=R11IADL5A ;
R_IADL5H=R11IADL5H ;
R_IANN=R11IANN ;
R_IEARN=R11IEARN ;
R_IFANN=R11IFANN ;
R_IFEARN=R11IFEARN ;
R_IFGXFR=R11IFGXFR ;
R_IFIRAW=R11IFIRAW ;
/* Empty map cell for: R_IFIRAWY1    variable wave = 11*/ ;
R_IFPEN=R11IFPEN ;
R_IFPENA=R11IFPENA ;
R_IFSDI=R11IFSDI ;
R_IFSRET=R11IFSRET ;
R_IFSSDI=R11IFSSDI ;
/* Empty map cell for: R_IFSSI       variable wave = 11*/ ;
R_IFUNEM=R11IFUNEM ;
R_IFUNWC=R11IFUNWC ;
R_IFWCMP=R11IFWCMP ;
R_IGXFR=R11IGXFR ;
R_IIRAW=R11IIRAW ;
R_IIRAWY1=R11IIRAWY1 ;
R_IMRC=R11IMRC ;
/* Empty map cell for: R_IMRC20      variable wave = 11*/ ;
/* Empty map cell for: R_INHER       variable wave = 11*/ ;
R_INHPE=R11INHPE ;
R_INHPFN=R11INHPFN ;
R_INHPNFN=R11INHPNFN ;
R_INHPPN=R11INHPPN ;
R_INHPTN=R11INHPTN ;
R_INHPUN=R11INHPUN ;
R_INLBRF=R11INLBRF ;
R_IPEN=R11IPEN ;
R_IPENA=R11IPENA ;
R_ISDI=R11ISDI ;
R_ISRET=R11ISRET ;
R_ISSDI=R11ISSDI ;
R_ISSI=R11ISSI ;
R_IUNEM=R11IUNEM ;
R_IUNWC=R11IUNWC ;
R_IWBEG=R11IWBEG ;
/* Empty map cell for: R_IWBEGF      variable wave = 11*/ ;
R_IWCMP=R11IWCMP ;
R_IWEND=R11IWEND ;
/* Empty map cell for: R_IWENDF      variable wave = 11*/ ;
R_IWENDM=R11IWENDM ;
R_IWENDY=R11IWENDY ;
R_IWMID=R11IWMID ;
R_IWMIDF=R11IWMIDF ;
R_IWSTAT=R11IWSTAT ;
R_JCIND=R11JCIND ;
R_JCINDB=R11JCINDB ;
R_JCINDC=R11JCINDC ;
R_JCOCC=R11JCOCC ;
R_JCOCCA=R11JCOCCA ;
R_JCOCCB=R11JCOCCB ;
R_JCOCCC=R11JCOCCC ;
R_JCPEN=R11JCPEN ;
/* Empty map cell for: R_JCPENF      variable wave = 11*/ ;
R_JCTEN=R11JCTEN ;
R_JHOUR2=R11JHOUR2 ;
R_JHOURS=R11JHOURS ;
R_JJOBS=R11JJOBS ;
R_JLASTM=R11JLASTM ;
R_JLASTY=R11JLASTY ;
R_JLIFT=R11JLIFT ;
R_JLIND=R11JLIND ;
R_JLINDB=R11JLINDB ;
R_JLINDC=R11JLINDC ;
R_JLMIS=R11JLMIS ;
R_JLOCC=R11JLOCC ;
R_JLOCCA=R11JLOCCA ;
R_JLOCCB=R11JLOCCB ;
R_JLOCCC=R11JLOCCC ;
R_JLTEN=R11JLTEN ;
R_JLTENF=R11JLTENF ;
R_JMISS=R11JMISS ;
R_JNJOB=R11JNJOB ;
R_JNJOB5=R11JNJOB5 ;
/* Empty map cell for: R1_JOG        variable wave = 11*/ ;
/* Empty map cell for: R2_JOG        variable wave = 11*/ ;
R_JOG=R11JOG ;
R_JOGA=R11JOGA ;
/* Empty map cell for: R_JOGW        variable wave = 11*/ ;
R_JPHYS=R11JPHYS ;
R_JSIGHT=R11JSIGHT ;
R_JSTOOP=R11JSTOOP ;
R_JSTRES=R11JSTRES ;
R_JWEEK2=R11JWEEK2 ;
R_JWEEKS=R11JWEEKS ;
R_JYEARM=R11JYEARM ;
R_JYEARS=R11JYEARS ;
R_LBAGR=R11LBAGR ;
R_LBASSISTPRB=R11LBASSISTPRB ;
R_LBCOMP=R11LBCOMP ;
R_LBCON10=R11LBCON10 ;
R_LBCON5=R11LBCON5 ;
R_LBELIG=R11LBELIG ;
R_LBEXT=R11LBEXT ;
R_LBFAMDRUGPRB=R11LBFAMDRUGPRB ;
R_LBFAMHLTHPRB=R11LBFAMHLTHPRB ;
R_LBFINPRB=R11LBFINPRB ;
R_LBHLTHPRB=R11LBHLTHPRB ;
R_LBHOUSEPRB=R11LBHOUSEPRB ;
R_LBLONELY11=R11LBLONELY11 ;
R_LBLONELY3=R11LBLONELY3 ;
R_LBNEGAFFECT=R11LBNEGAFFECT ;
/* Empty map cell for: R_LBNEGAFFECT6variable wave = 11*/ ;
R_LBNEUR=R11LBNEUR ;
R_LBONCHRSTR=R11LBONCHRSTR ;
R_LBOPEN=R11LBOPEN ;
R_LBPOSAFFECT=R11LBPOSAFFECT ;
/* Empty map cell for: R_LBPOSAFFECT6variable wave = 11*/ ;
R_LBRF=R11LBRF ;
R_LBRFH=R11LBRFH ;
R_LBRFY=R11LBRFY ;
R_LBRLTNSHPRB=R11LBRLTNSHPRB ;
R_LBSATCITY=R11LBSATCITY ;
R_LBSATFAM=R11LBSATFAM ;
R_LBSATFIN=R11LBSATFIN ;
R_LBSATHLTH=R11LBSATHLTH ;
R_LBSATHOME=R11LBSATHOME ;
R_LBSATINC=R11LBSATINC ;
R_LBSATLEISURE=R11LBSATLEISURE ;
R_LBSATLIFE=R11LBSATLIFE ;
R_LBSATWLF=R11LBSATWLF ;
R_LBWGTR=R11LBWGTR ;
R_LBWORKPRB=R11LBWORKPRB ;
R_LGMUSA=R11LGMUSA ;
/* Empty map cell for: R_LGMUSW      variable wave = 11*/ ;
/* Empty map cell for: R_LHTACT      variable wave = 11*/ ;
R_LIFEIN=R11LIFEIN ;
/* Empty map cell for: R1_LIFT       variable wave = 11*/ ;
/* Empty map cell for: R2_LIFT       variable wave = 11*/ ;
R_LIFT=R11LIFT ;
R_LIFTA=R11LIFTA ;
/* Empty map cell for: R_LIFTW       variable wave = 11*/ ;
R_LIV10=R11LIV10 ;
R_LIV10A=R11LIV10A ;
R_LIV10P=R11LIV10P ;
R_LIV10R=R11LIV10R ;
R_LIV75=R11LIV75 ;
R_LIV75C=R11LIV75C ;
R_LIV75F=R11LIV75F ;
R_LIV75P=R11LIV75P ;
R_LIV75R=R11LIV75R ;
/* Empty map cell for: R_LIV85       variable wave = 11*/ ;
/* Empty map cell for: R_LIV85C      variable wave = 11*/ ;
/* Empty map cell for: R_LIV85F      variable wave = 11*/ ;
/* Empty map cell for: R_LIV85P      variable wave = 11*/ ;
/* Empty map cell for: R_LIV85R      variable wave = 11*/ ;
R_LIV8XC=R11LIV8XC ;
R_LIV8XF=R11LIV8XF ;
R_LIVBRO=R11LIVBRO ;
R_LIVPAR=R11LIVPAR ;
R_LIVSIB=R11LIVSIB ;
R_LIVSIS=R11LIVSIS ;
R_LOST=R11LOST ;
/* Empty map cell for: R_LTACTF      variable wave = 11*/ ;
/* Empty map cell for: R_LTACTN      variable wave = 11*/ ;
/* Empty map cell for: R_LTACTP      variable wave = 11*/ ;
R_LTACTX=R11LTACTX ;
R_LTCPRM=R11LTCPRM ;
R_LUNG=R11LUNG ;
R_LUNGE=R11LUNGE ;
R_LUNGF=R11LUNGF ;
R_LUNGQ=R11LUNGQ ;
R_LUNGS=R11LUNGS ;
R_MAMMOG=R11MAMMOG ;
/* Empty map cell for: R1_MAP        variable wave = 11*/ ;
/* Empty map cell for: R2_MAP        variable wave = 11*/ ;
R_MAP=R11MAP ;
R_MAPA=R11MAPA ;
/* Empty map cell for: R_MAPW        variable wave = 11*/ ;
R_MCURLN=R11MCURLN ;
/* Empty map cell for: R_MCWV        variable wave = 11*/ ;
/* Empty map cell for: R_MCWVW       variable wave = 11*/ ;
R_MDACTX=R11MDACTX ;
R_MDIV=R11MDIV ;
R_MEALS=R11MEALS ;
R_MEALSA=R11MEALSA ;
R_MEALSH=R11MEALSH ;
/* Empty map cell for: R_MEALSR      variable wave = 11*/ ;
/* Empty map cell for: R2_MEDS       variable wave = 11*/ ;
R_MEDS=R11MEDS ;
R_MEDSA=R11MEDSA ;
R_MEDSH=R11MEDSH ;
/* Empty map cell for: R_MEDSR       variable wave = 11*/ ;
/* Empty map cell for: R_MEMRY       variable wave = 11*/ ;
/* Empty map cell for: R_MEMRYE      variable wave = 11*/ ;
/* Empty map cell for: R_MEMRYF      variable wave = 11*/ ;
/* Empty map cell for: R_MEMRYQ      variable wave = 11*/ ;
/* Empty map cell for: R_MEMRYS      variable wave = 11*/ ;
R_MEND=R11MEND ;
R_MLEN=R11MLEN ;
R_MLENM=R11MLENM ;
R_MNEV=R11MNEV ;
R_MO=R11MO ;
R_MOBILA=R11MOBILA ;
/* Empty map cell for: R_MOBILW      variable wave = 11*/ ;
R_MOMAGE=R11MOMAGE ;
R_MOMLIV=R11MOMLIV ;
/* Empty map cell for: R2_MONEY      variable wave = 11*/ ;
R_MONEY=R11MONEY ;
R_MONEYA=R11MONEYA ;
R_MONEYH=R11MONEYH ;
/* Empty map cell for: R_MONEYR      variable wave = 11*/ ;
R_MPART=R11MPART ;
R_MRCT=R11MRCT ;
R_MRPREM=R11MRPREM ;
R_MSTAT=R11MSTAT ;
R_MSTATF=R11MSTATF ;
R_MSTATH=R11MSTATH ;
R_MSTOT=R11MSTOT ;
R_MWID=R11MWID ;
R_NHMDAY=R11NHMDAY ;
R_NHMLIV=R11NHMLIV ;
R_NHMMVM=R11NHMMVM ;
R_NHMMVY=R11NHMMVY ;
R_NOTICS=R11NOTICS ;
R_NOVOC=R11NOVOC ;
R_NRSHOM=R11NRSHOM ;
R_NRSNIT=R11NRSNIT ;
R_NRSTIM=R11NRSTIM ;
R_NSSCRE=R11NSSCRE ;
R_NSSCSE=R11NSSCSE ;
R_OOPMD=R11OOPMD ;
R_OOPMDF=R11OOPMDF ;
R_OOPMDO=R11OOPMDO ;
R_OOPMDOF=R11OOPMDOF ;
R_OUTPT=R11OUTPT ;
R_PAPSM=R11PAPSM ;
/* Empty map cell for: R_PARTD       variable wave = 11*/ ;
R_PENCT=R11PENCT ;
R_PENIC1=R11PENIC1 ;
R_PENIC2=R11PENIC2 ;
R_PENINC=R11PENINC ;
R_PENI_N=R11PENI_N ;
R_PEXIT=R11PEXIT ;
/* Empty map cell for: R2_PHONE      variable wave = 11*/ ;
R_PHONE=R11PHONE ;
R_PHONEA=R11PHONEA ;
R_PHONEH=R11PHONEH ;
/* Empty map cell for: R_PHONER      variable wave = 11*/ ;
R_PMBMI=R11PMBMI ;
R_PMHGHT=R11PMHGHT ;
R_PMHGHTS=R11PMHGHTS ;
R_PMWAIST=R11PMWAIST ;
R_PMWAISTC=R11PMWAISTC ;
R_PMWGHT=R11PMWGHT ;
R_PMWGHTF=R11PMWGHTF ;
R_PMWGHTS=R11PMWGHTS ;
R_PNHM5Y=R11PNHM5Y ;
R_PRCHMEM=R11PRCHMEM ;
R_PRES=R11PRES ;
R_PRMEM=R11PRMEM ;
R_PROST=R11PROST ;
R_PROXY=R11PROXY ;
R_PRPCNT=R11PRPCNT ;
R_PRPRM1=R11PRPRM1 ;
R_PRPRM2=R11PRPRM2 ;
R_PRPRM3=R11PRPRM3 ;
R_PRSRC1=R11PRSRC1 ;
R_PRSRC2=R11PRSRC2 ;
R_PRSRC3=R11PRSRC3 ;
R_PSTMEM=R11PSTMEM ;
R_PSYCH=R11PSYCH ;
R_PSYCHE=R11PSYCHE ;
R_PSYCHF=R11PSYCHF ;
R_PSYCHQ=R11PSYCHQ ;
R_PSYCHS=R11PSYCHS ;
R_PTYP1=R11PTYP1 ;
R_PTYP2=R11PTYP2 ;
R_PTYP3=R11PTYP3 ;
R_PTYP4=R11PTYP4 ;
R_PTYPD1=R11PTYPD1 ;
R_PTYPD2=R11PTYPD2 ;
R_PTYPD3=R11PTYPD3 ;
R_PTYPD4=R11PTYPD4 ;
R_PTYPF1=R11PTYPF1 ;
R_PTYPF2=R11PTYPF2 ;
R_PTYPF3=R11PTYPF3 ;
R_PTYPF4=R11PTYPF4 ;
R_PUFF=R11PUFF ;
R_PUFFPOS=R11PUFFPOS ;
/* Empty map cell for: R1_PUSH       variable wave = 11*/ ;
/* Empty map cell for: R2_PUSH       variable wave = 11*/ ;
R_PUSH=R11PUSH ;
R_PUSHA=R11PUSHA ;
/* Empty map cell for: R_PUSHW       variable wave = 11*/ ;
R_RETDTWV=R11RETDTWV ;
R_RETEMP=R11RETEMP ;
/* Empty map cell for: R_RETINC      variable wave = 11*/ ;
/* Empty map cell for: R_RETLIV      variable wave = 11*/ ;
R_RETMON=R11RETMON ;
R_RETSAT=R11RETSAT ;
/* Empty map cell for: R_RETWLT      variable wave = 11*/ ;
/* Empty map cell for: R_RETWRK      variable wave = 11*/ ;
/* Empty map cell for: R_RETWSP      variable wave = 11*/ ;
R_RETYR=R11RETYR ;
/* Empty map cell for: R_RISK        variable wave = 11*/ ;
/* Empty map cell for: R_RISK6       variable wave = 11*/ ;
R_RPLNYA=R11RPLNYA ;
R_RPLNYR=R11RPLNYR ;
R_RXPREM=R11RXPREM ;
R_RYRCMP=R11RYRCMP ;
R_SADLF=R11SADLF ;
R_SAMEJOB=R11SAMEJOB ;
R_SAMEMP=R11SAMEMP ;
R_SAYRET=R11SAYRET ;
R_SCIS=R11SCIS ;
R_SDIAPL=R11SDIAPL ;
R_SDIAPLM=R11SDIAPLM ;
R_SDIAPLY=R11SDIAPLY ;
R_SDIAPP=R11SDIAPP ;
R_SDIAPPM=R11SDIAPPM ;
R_SDIAPPY=R11SDIAPPY ;
R_SDIDEN=R11SDIDEN ;
R_SDIREC=R11SDIREC ;
R_SDIRECM=R11SDIRECM ;
R_SDIRECY=R11SDIRECY ;
R_SDISTP=R11SDISTP ;
R_SDISTPM=R11SDISTPM ;
R_SDISTPY=R11SDISTPY ;
R_SER7=R11SER7 ;
R_SHLT=R11SHLT ;
R_SHLTC=R11SHLTC ;
R_SHLTCF=R11SHLTCF ;
R_SHOP=R11SHOP ;
R_SHOPA=R11SHOPA ;
R_SHOPH=R11SHOPH ;
/* Empty map cell for: R_SHOPR       variable wave = 11*/ ;
/* Empty map cell for: R1_SIT        variable wave = 11*/ ;
/* Empty map cell for: R2_SIT        variable wave = 11*/ ;
R_SIT=R11SIT ;
R_SITA=R11SITA ;
/* Empty map cell for: R_SITW        variable wave = 11*/ ;
/* Empty map cell for: R_SLEEP       variable wave = 11*/ ;
/* Empty map cell for: R_SLEEPE      variable wave = 11*/ ;
/* Empty map cell for: R_SLEEPQ      variable wave = 11*/ ;
R_SLEEPR=R11SLEEPR ;
/* Empty map cell for: R_SLEEPS      variable wave = 11*/ ;
/* Empty map cell for: R_SLEEPX      variable wave = 11*/ ;
R_SLFEMP=R11SLFEMP ;
R_SLFMEM=R11SLFMEM ;
R_SMOKEN=R11SMOKEN ;
R_SMOKEV=R11SMOKEV ;
R_SPCFAC=R11SPCFAC ;
/* Empty map cell for: R_SSAPL       variable wave = 11*/ ;
/* Empty map cell for: R_SSAPLM      variable wave = 11*/ ;
/* Empty map cell for: R_SSAPLY      variable wave = 11*/ ;
/* Empty map cell for: R_SSAPP       variable wave = 11*/ ;
/* Empty map cell for: R_SSAPPM      variable wave = 11*/ ;
/* Empty map cell for: R_SSAPPY      variable wave = 11*/ ;
/* Empty map cell for: R_SSDEN       variable wave = 11*/ ;
R_SSDI=R11SSDI ;
R_SSIAPL=R11SSIAPL ;
R_SSIAPLM=R11SSIAPLM ;
R_SSIAPLY=R11SSIAPLY ;
R_SSIAPP=R11SSIAPP ;
R_SSIAPPM=R11SSIAPPM ;
R_SSIAPPY=R11SSIAPPY ;
R_SSIDEN=R11SSIDEN ;
R_SSIREC=R11SSIREC ;
R_SSIRECM=R11SSIRECM ;
R_SSIRECY=R11SSIRECY ;
R_SSISTP=R11SSISTP ;
R_SSISTPM=R11SSISTPM ;
R_SSISTPY=R11SSISTPY ;
/* Empty map cell for: R_SSREC       variable wave = 11*/ ;
/* Empty map cell for: R_SSRECM      variable wave = 11*/ ;
/* Empty map cell for: R_SSRECY      variable wave = 11*/ ;
/* Empty map cell for: R_SSSTP       variable wave = 11*/ ;
/* Empty map cell for: R_SSSTPM      variable wave = 11*/ ;
/* Empty map cell for: R_SSSTPY      variable wave = 11*/ ;
/* Empty map cell for: R_SSWRER      variable wave = 11*/ ;
/* Empty map cell for: R_SSWRNR      variable wave = 11*/ ;
/* Empty map cell for: R_SSWRXA      variable wave = 11*/ ;
/* Empty map cell for: R_SSWSER      variable wave = 11*/ ;
/* Empty map cell for: R_SSWSNR      variable wave = 11*/ ;
/* Empty map cell for: R_SSWSXA      variable wave = 11*/ ;
R_STATUS=R11STATUS ;
/* Empty map cell for: R1_STOOP      variable wave = 11*/ ;
/* Empty map cell for: R2_STOOP      variable wave = 11*/ ;
R_STOOP=R11STOOP ;
R_STOOPA=R11STOOPA ;
/* Empty map cell for: R_STOOPW      variable wave = 11*/ ;
R_STROK=R11STROK ;
R_STROKE=R11STROKE ;
R_STROKF=R11STROKF ;
R_STROKQ=R11STROKQ ;
R_STROKS=R11STROKS ;
R_TIMWLK=R11TIMWLK ;
R_TIMWLKA=R11TIMWLKA ;
/* Empty map cell for: R_TLIPRM      variable wave = 11*/ ;
/* Empty map cell for: R2_TOILT      variable wave = 11*/ ;
R_TOILT=R11TOILT ;
R_TOILTA=R11TOILTA ;
/* Empty map cell for: R2_TOILTH     variable wave = 11*/ ;
R_TOILTH=R11TOILTH ;
/* Empty map cell for: R_TOTMBF      variable wave = 11*/ ;
/* Empty map cell for: R_TOTMBI      variable wave = 11*/ ;
/* Empty map cell for: R_TOTMD       variable wave = 11*/ ;
/* Empty map cell for: R_TOTMDF      variable wave = 11*/ ;
R_TR20=R11TR20 ;
/* Empty map cell for: R_TR40        variable wave = 11*/ ;
R_TYLTC=R11TYLTC ;
/* Empty map cell for: R_ULCER       variable wave = 11*/ ;
R_UNEMP=R11UNEMP ;
R_UNION=R11UNION ;
R_UNIONF=R11UNIONF ;
/* Empty map cell for: R_VGACTF      variable wave = 11*/ ;
/* Empty map cell for: R_VGACTN      variable wave = 11*/ ;
/* Empty map cell for: R_VGACTP      variable wave = 11*/ ;
R_VGACTX=R11VGACTX ;
/* Empty map cell for: R_VIGACT      variable wave = 11*/ ;
R_VOCAB=R11VOCAB ;
R_VP=R11VP ;
/* Empty map cell for: R1_WALK1      variable wave = 11*/ ;
/* Empty map cell for: R2_WALK1      variable wave = 11*/ ;
R_WALK1=R11WALK1 ;
R_WALK1A=R11WALK1A ;
/* Empty map cell for: R_WALK1W      variable wave = 11*/ ;
/* Empty map cell for: R1_WALKR      variable wave = 11*/ ;
/* Empty map cell for: R2_WALKR      variable wave = 11*/ ;
R_WALKR=R11WALKR ;
R_WALKRA=R11WALKRA ;
R_WALKRE=R11WALKRE ;
/* Empty map cell for: R2_WALKRH     variable wave = 11*/ ;
R_WALKRH=R11WALKRH ;
/* Empty map cell for: R_WALKRW      variable wave = 11*/ ;
/* Empty map cell for: R1_WALKS      variable wave = 11*/ ;
/* Empty map cell for: R2_WALKS      variable wave = 11*/ ;
R_WALKS=R11WALKS ;
R_WALKSA=R11WALKSA ;
/* Empty map cell for: R_WALKSW      variable wave = 11*/ ;
R_WANDER=R11WANDER ;
R_WEIGHT=R11WEIGHT ;
R_WGFHR=R11WGFHR ;
R_WGFWK=R11WGFWK ;
R_WGIHR=R11WGIHR ;
R_WGIWK=R11WGIWK ;
/* Empty map cell for: R_WHAPPX      variable wave = 11*/ ;
R_WHAPPY=R11WHAPPY ;
R_WLIPRM=R11WLIPRM ;
R_WORK=R11WORK ;
R_WORK2=R11WORK2 ;
R_WORK62=R11WORK62 ;
R_WORK62F=R11WORK62F ;
R_WORK65=R11WORK65 ;
R_WORK65F=R11WORK65F ;
R_WORK70=R11WORK70 ;
R_WORK70A=R11WORK70A ;
R_WORK70AF=R11WORK70AF ;
R_WORK70F=R11WORK70F ;
/* Empty map cell for: R_WORKLM      variable wave = 11*/ ;
R_WTCRNH=R11WTCRNH ;
R_WTHH=R11WTHH ;
R_WTRESP=R11WTRESP ;
R_WTR_NH=R11WTR_NH ;
R_YR=R11YR ;
if inw=1 then output ;
%put --- Rlong table ;
%initvars ;
%put ---- Rlong table ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
WAVE_NUMBER=12 ;
H_HHIDC=H12HHIDC ;
SUBHH= substr(H_HHIDC,7)     /* --- Derived variable  */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
INW=INW12 ;
WAVE_NAME=  'hrs_wave'||strip(put(wave_number,3.))     /* --- Derived variable  */ ;
CYEAR='yr2014' ;
/* --- RAND variable:HACOHORT  included */ ;
studyyr= hrs_studyyr(wave_number,
hacohort)     /* --- Derived variable  */ ;
H_HHID=H12HHID ;
S_HHIDPN=S12HHIDPN ;
/* Empty map cell for: R_ACGTOT      variable wave = 12*/ ;
R_ADL5A=R12ADL5A ;
R_ADL5H=R12ADL5H ;
R_ADL6A=R12ADL6A ;
R_ADL6H=R12ADL6H ;
/* Empty map cell for: R_ADLR10      variable wave = 12*/ ;
/* Empty map cell for: R_ADLW        variable wave = 12*/ ;
R_AGEM_B=R12AGEM_B ;
R_AGEM_E=R12AGEM_E ;
R_AGEM_M=R12AGEM_M ;
R_AGEY_B=R12AGEY_B ;
R_AGEY_E=R12AGEY_E ;
R_AGEY_M=R12AGEY_M ;
/* Empty map cell for: R_AIMR10      variable wave = 12*/ ;
R_ALONE=R12ALONE ;
R_ALZHE=R12ALZHE ;
R_ALZHEE=R12ALZHEE ;
R_ALZHEF=R12ALZHEF ;
R_ALZHEQ=R12ALZHEQ ;
R_ALZHES=R12ALZHES ;
/* Empty map cell for: R_AMSTOT      variable wave = 12*/ ;
R_ANS3PQ=R12ANS3PQ ;
/* Empty map cell for: R1_ARMS       variable wave = 12*/ ;
/* Empty map cell for: R2_ARMS       variable wave = 12*/ ;
R_ARMS=R12ARMS ;
R_ARMSA=R12ARMSA ;
/* Empty map cell for: R_ARMSW       variable wave = 12*/ ;
R_ARTHR=R12ARTHR ;
R_ARTHRE=R12ARTHRE ;
R_ARTHRF=R12ARTHRF ;
R_ARTHRQ=R12ARTHRQ ;
R_ARTHRS=R12ARTHRS ;
/* Empty map cell for: R_ATR20       variable wave = 12*/ ;
R_BACK=R12BACK ;
R_BALFUL=R12BALFUL ;
R_BALFULC=R12BALFULC ;
R_BALFULT=R12BALFULT ;
R_BALSBS=R12BALSBS ;
R_BALSBSC=R12BALSBSC ;
R_BALSEMI=R12BALSEMI ;
R_BALSEMIC=R12BALSEMIC ;
/* Empty map cell for: R1_BATH       variable wave = 12*/ ;
/* Empty map cell for: R2_BATH       variable wave = 12*/ ;
R_BATH=R12BATH ;
R_BATHA=R12BATHA ;
/* Empty map cell for: R2_BATHH      variable wave = 12*/ ;
R_BATHH=R12BATHH ;
/* Empty map cell for: R_BATHW       variable wave = 12*/ ;
/* Empty map cell for: R1_BED        variable wave = 12*/ ;
/* Empty map cell for: R2_BED        variable wave = 12*/ ;
R_BED=R12BED ;
R_BEDA=R12BEDA ;
R_BEDE=R12BEDE ;
/* Empty map cell for: R2_BEDH       variable wave = 12*/ ;
R_BEDH=R12BEDH ;
/* Empty map cell for: R_BEDW        variable wave = 12*/ ;
R_BEQ100=R12BEQ100 ;
R_BEQ10K=R12BEQ10K ;
R_BEQ500=R12BEQ500 ;
R_BEQANY=R12BEQANY ;
/* Empty map cell for: R_BEQLRG      variable wave = 12*/ ;
R_BMI=R12BMI ;
R_BPDIA=R12BPDIA ;
R_BPPOS=R12BPPOS ;
R_BPPULS=R12BPPULS ;
R_BPSYS=R12BPSYS ;
/* Empty map cell for: R_BREAST      variable wave = 12*/ ;
R_BWC20=R12BWC20 ;
/* Empty map cell for: R_BWC86       variable wave = 12*/ ;
R_CACT=R12CACT ;
/* Empty map cell for: R1_CALC       variable wave = 12*/ ;
/* Empty map cell for: R2_CALC       variable wave = 12*/ ;
/* Empty map cell for: R_CALCA       variable wave = 12*/ ;
/* Empty map cell for: R_CALCW       variable wave = 12*/ ;
R_CANCR=R12CANCR ;
R_CANCRE=R12CANCRE ;
R_CANCRF=R12CANCRF ;
R_CANCRQ=R12CANCRQ ;
R_CANCRS=R12CANCRS ;
R_CENDIV=R12CENDIV ;
R_CENREG=R12CENREG ;
R_CESD=R12CESD ;
R_CESDM=R12CESDM ;
/* Empty map cell for: R1_CHAIR      variable wave = 12*/ ;
/* Empty map cell for: R2_CHAIR      variable wave = 12*/ ;
R_CHAIR=R12CHAIR ;
R_CHAIRA=R12CHAIRA ;
/* Empty map cell for: R_CHAIRW      variable wave = 12*/ ;
R_CHOLST=R12CHOLST ;
/* Empty map cell for: R_CLAIMED     variable wave = 12*/ ;
/* Empty map cell for: R1_CLIM1      variable wave = 12*/ ;
/* Empty map cell for: R2_CLIM1      variable wave = 12*/ ;
R_CLIM1=R12CLIM1 ;
R_CLIM1A=R12CLIM1A ;
/* Empty map cell for: R_CLIM1W      variable wave = 12*/ ;
/* Empty map cell for: R1_CLIMS      variable wave = 12*/ ;
/* Empty map cell for: R2_CLIMS      variable wave = 12*/ ;
R_CLIMS=R12CLIMS ;
R_CLIMSA=R12CLIMSA ;
/* Empty map cell for: R_CLIMSW      variable wave = 12*/ ;
R_COGTOT=R12COGTOT ;
/* Empty map cell for: R_COMP        variable wave = 12*/ ;
/* Empty map cell for: R_COMPW       variable wave = 12*/ ;
R_CONDE=R12CONDE ;
R_CONDEF=R12CONDEF ;
R_CONDS=R12CONDS ;
R_CONDSF=R12CONDSF ;
R_CONDSP=R12CONDSP ;
R_COVR=R12COVR ;
R_COVRT=R12COVRT ;
R_COVS=R12COVS ;
R_DADAGE=R12DADAGE ;
R_DADLIV=R12DADLIV ;
R_DCBAL1=R12DCBAL1 ;
R_DCBAL2=R12DCBAL2 ;
R_DCBAL3=R12DCBAL3 ;
R_DCBAL4=R12DCBAL4 ;
R_DCBENE1=R12DCBENE1 ;
R_DCBENE2=R12DCBENE2 ;
R_DCBENE3=R12DCBENE3 ;
R_DCBENE4=R12DCBENE4 ;
R_DCCONT1=R12DCCONT1 ;
R_DCCONT2=R12DCCONT2 ;
R_DCCONT3=R12DCCONT3 ;
R_DCCONT4=R12DCCONT4 ;
R_DCMODE1=R12DCMODE1 ;
R_DCMODE2=R12DCMODE2 ;
R_DCMODE3=R12DCMODE3 ;
R_DCMODE4=R12DCMODE4 ;
R_DCPCT1=R12DCPCT1 ;
R_DCPCT2=R12DCPCT2 ;
R_DCPCT3=R12DCPCT3 ;
R_DCPCT4=R12DCPCT4 ;
R_DEMEN=R12DEMEN ;
R_DEMENE=R12DEMENE ;
R_DEMENF=R12DEMENF ;
R_DEMENQ=R12DEMENQ ;
R_DEMENS=R12DEMENS ;
R_DENTST=R12DENTST ;
R_DEPRES=R12DEPRES ;
/* Empty map cell for: R_DEPREX      variable wave = 12*/ ;
R_DIAB=R12DIAB ;
R_DIABE=R12DIABE ;
R_DIABF=R12DIABF ;
R_DIABQ=R12DIABQ ;
R_DIABS=R12DIABS ;
/* Empty map cell for: R1_DIME       variable wave = 12*/ ;
/* Empty map cell for: R2_DIME       variable wave = 12*/ ;
R_DIME=R12DIME ;
R_DIMEA=R12DIMEA ;
/* Empty map cell for: R_DIMEW       variable wave = 12*/ ;
R_DLRC=R12DLRC ;
/* Empty map cell for: R_DLRC20      variable wave = 12*/ ;
R_DOCTIM=R12DOCTIM ;
R_DOCTOR=R12DOCTOR ;
/* Empty map cell for: R1_DRESS      variable wave = 12*/ ;
/* Empty map cell for: R2_DRESS      variable wave = 12*/ ;
R_DRESS=R12DRESS ;
R_DRESSA=R12DRESSA ;
/* Empty map cell for: R2_DRESSH     variable wave = 12*/ ;
R_DRESSH=R12DRESSH ;
/* Empty map cell for: R_DRESSW      variable wave = 12*/ ;
R_DRINK=R12DRINK ;
R_DRINKD=R12DRINKD ;
R_DRINKN=R12DRINKN ;
/* Empty map cell for: R_DRINKR      variable wave = 12*/ ;
R_DRUGS=R12DRUGS ;
R_DSIAMT=R12DSIAMT ;
R_DSSAMT=R12DSSAMT ;
R_DSTAT=R12DSTAT ;
R_DW=R12DW ;
R_DY=R12DY ;
/* Empty map cell for: R1_EAT        variable wave = 12*/ ;
/* Empty map cell for: R2_EAT        variable wave = 12*/ ;
R_EAT=R12EAT ;
R_EATA=R12EATA ;
/* Empty map cell for: R2_EATH       variable wave = 12*/ ;
R_EATH=R12EATH ;
/* Empty map cell for: R_EATW        variable wave = 12*/ ;
R_EFFORT=R12EFFORT ;
/* Empty map cell for: R_EFFORX      variable wave = 12*/ ;
R_ENLIFE=R12ENLIFE ;
/* Empty map cell for: R_ENLIFX      variable wave = 12*/ ;
R_FAMR=R12FAMR ;
R_FBWC20=R12FBWC20 ;
/* Empty map cell for: R_FBWC86      variable wave = 12*/ ;
R_FCACT=R12FCACT ;
R_FDLRC=R12FDLRC ;
R_FDW=R12FDW ;
R_FDY=R12FDY ;
R_FIMRC=R12FIMRC ;
R_FINEA=R12FINEA ;
R_FINPLN=R12FINPLN ;
R_FINR=R12FINR ;
/* Empty map cell for: R_FLAG        variable wave = 12*/ ;
R_FLONE=R12FLONE ;
/* Empty map cell for: R_FLONEX      variable wave = 12*/ ;
R_FLUSHT=R12FLUSHT ;
R_FMO=R12FMO ;
R_FPRES=R12FPRES ;
R_FPSTME=R12FPSTME ;
R_FSAD=R12FSAD ;
/* Empty map cell for: R_FSADX       variable wave = 12*/ ;
R_FSCIS=R12FSCIS ;
R_FSER7=R12FSER7 ;
R_FSIZE=R12FSIZE ;
R_FSIZEF=R12FSIZEF ;
R_FSLFME=R12FSLFME ;
R_FVOCAB=R12FVOCAB ;
R_FVP=R12FVP ;
R_FYR=R12FYR ;
R_GOING=R12GOING ;
/* Empty map cell for: R_GOINGX      variable wave = 12*/ ;
R_GOVMD=R12GOVMD ;
R_GOVMR=R12GOVMR ;
/* Empty map cell for: R_GOVOT       variable wave = 12*/ ;
R_GOVVA=R12GOVVA ;
R_GROSSA=R12GROSSA ;
R_GRP=R12GRP ;
R_GRPDOM=R12GRPDOM ;
R_GRPL=R12GRPL ;
R_GRPPOS=R12GRPPOS ;
R_GRPR=R12GRPR ;
R_HALUC=R12HALUC ;
/* Empty map cell for: R_HDLR20      variable wave = 12*/ ;
R_HEART=R12HEART ;
R_HEARTE=R12HEARTE ;
R_HEARTF=R12HEARTF ;
R_HEARTQ=R12HEARTQ ;
R_HEARTS=R12HEARTS ;
R_HECOV1=R12HECOV1 ;
R_HECOV2=R12HECOV2 ;
R_HECOV3=R12HECOV3 ;
R_HEIGHT=R12HEIGHT ;
R_HENUM=R12HENUM ;
R_HERET=R12HERET ;
R_HERTR1=R12HERTR1 ;
R_HERTR2=R12HERTR2 ;
R_HERTR3=R12HERTR3 ;
R_HERTS1=R12HERTS1 ;
R_HERTS2=R12HERTS2 ;
R_HERTS3=R12HERTS3 ;
R_HESRC1=R12HESRC1 ;
R_HESRC2=R12HESRC2 ;
R_HESRC3=R12HESRC3 ;
R_HIBP=R12HIBP ;
R_HIBPE=R12HIBPE ;
R_HIBPF=R12HIBPF ;
R_HIBPQ=R12HIBPQ ;
R_HIBPS=R12HIBPS ;
R_HIGOV=R12HIGOV ;
R_HILTC=R12HILTC ;
/* Empty map cell for: R_HIMR20      variable wave = 12*/ ;
R_HIOTHP=R12HIOTHP ;
R_HLPDYSF=R12HLPDYSF ;
R_HLPDYSNF=R12HLPDYSNF ;
R_HLPDYSP=R12HLPDYSP ;
R_HLPDYST=R12HLPDYST ;
R_HLPDYSU=R12HLPDYSU ;
R_HLPHRSF=R12HLPHRSF ;
R_HLPHRSNF=R12HLPHRSNF ;
R_HLPHRSP=R12HLPHRSP ;
R_HLPHRST=R12HLPHRST ;
R_HLPHRSU=R12HLPHRSU ;
R_HLPPDFA=R12HLPPDFA ;
R_HLPPDFN=R12HLPPDFN ;
R_HLPPDNFA=R12HLPPDNFA ;
R_HLPPDNFN=R12HLPPDNFN ;
R_HLPPDTA=R12HLPPDTA ;
R_HLPPDTN=R12HLPPDTN ;
R_HLPRFN=R12HLPRFN ;
R_HLPRNFN=R12HLPRNFN ;
R_HLPRPN=R12HLPRPN ;
R_HLPRTN=R12HLPRTN ;
R_HLPRUN=R12HLPRUN ;
R_HLTC3=R12HLTC3 ;
/* Empty map cell for: R_HLTC5       variable wave = 12*/ ;
/* Empty map cell for: R_HLTC5F      variable wave = 12*/ ;
R_HLTHLM=R12HLTHLM ;
R_HOMCAR=R12HOMCAR ;
R_HOSP=R12HOSP ;
R_HSPNIT=R12HSPNIT ;
R_HSPTIM=R12HSPTIM ;
/* Empty map cell for: R_HSWRKF      variable wave = 12*/ ;
/* Empty map cell for: R_HTR40       variable wave = 12*/ ;
R_IADL5A=R12IADL5A ;
R_IADL5H=R12IADL5H ;
R_IANN=R12IANN ;
R_IEARN=R12IEARN ;
R_IFANN=R12IFANN ;
R_IFEARN=R12IFEARN ;
R_IFGXFR=R12IFGXFR ;
R_IFIRAW=R12IFIRAW ;
/* Empty map cell for: R_IFIRAWY1    variable wave = 12*/ ;
R_IFPEN=R12IFPEN ;
R_IFPENA=R12IFPENA ;
R_IFSDI=R12IFSDI ;
R_IFSRET=R12IFSRET ;
R_IFSSDI=R12IFSSDI ;
/* Empty map cell for: R_IFSSI       variable wave = 12*/ ;
R_IFUNEM=R12IFUNEM ;
R_IFUNWC=R12IFUNWC ;
R_IFWCMP=R12IFWCMP ;
R_IGXFR=R12IGXFR ;
R_IIRAW=R12IIRAW ;
R_IIRAWY1=R12IIRAWY1 ;
R_IMRC=R12IMRC ;
/* Empty map cell for: R_IMRC20      variable wave = 12*/ ;
/* Empty map cell for: R_INHER       variable wave = 12*/ ;
R_INHPE=R12INHPE ;
R_INHPFN=R12INHPFN ;
R_INHPNFN=R12INHPNFN ;
R_INHPPN=R12INHPPN ;
R_INHPTN=R12INHPTN ;
R_INHPUN=R12INHPUN ;
R_INLBRF=R12INLBRF ;
R_IPEN=R12IPEN ;
R_IPENA=R12IPENA ;
R_ISDI=R12ISDI ;
R_ISRET=R12ISRET ;
R_ISSDI=R12ISSDI ;
R_ISSI=R12ISSI ;
R_IUNEM=R12IUNEM ;
R_IUNWC=R12IUNWC ;
R_IWBEG=R12IWBEG ;
/* Empty map cell for: R_IWBEGF      variable wave = 12*/ ;
R_IWCMP=R12IWCMP ;
R_IWEND=R12IWEND ;
/* Empty map cell for: R_IWENDF      variable wave = 12*/ ;
R_IWENDM=R12IWENDM ;
R_IWENDY=R12IWENDY ;
R_IWMID=R12IWMID ;
R_IWMIDF=R12IWMIDF ;
R_IWSTAT=R12IWSTAT ;
R_JCIND=R12JCIND ;
R_JCINDB=R12JCINDB ;
R_JCINDC=R12JCINDC ;
R_JCOCC=R12JCOCC ;
R_JCOCCA=R12JCOCCA ;
R_JCOCCB=R12JCOCCB ;
R_JCOCCC=R12JCOCCC ;
R_JCPEN=R12JCPEN ;
/* Empty map cell for: R_JCPENF      variable wave = 12*/ ;
R_JCTEN=R12JCTEN ;
R_JHOUR2=R12JHOUR2 ;
R_JHOURS=R12JHOURS ;
R_JJOBS=R12JJOBS ;
R_JLASTM=R12JLASTM ;
R_JLASTY=R12JLASTY ;
R_JLIFT=R12JLIFT ;
R_JLIND=R12JLIND ;
R_JLINDB=R12JLINDB ;
R_JLINDC=R12JLINDC ;
R_JLMIS=R12JLMIS ;
R_JLOCC=R12JLOCC ;
R_JLOCCA=R12JLOCCA ;
R_JLOCCB=R12JLOCCB ;
R_JLOCCC=R12JLOCCC ;
R_JLTEN=R12JLTEN ;
R_JLTENF=R12JLTENF ;
R_JMISS=R12JMISS ;
R_JNJOB=R12JNJOB ;
R_JNJOB5=R12JNJOB5 ;
/* Empty map cell for: R1_JOG        variable wave = 12*/ ;
/* Empty map cell for: R2_JOG        variable wave = 12*/ ;
R_JOG=R12JOG ;
R_JOGA=R12JOGA ;
/* Empty map cell for: R_JOGW        variable wave = 12*/ ;
R_JPHYS=R12JPHYS ;
R_JSIGHT=R12JSIGHT ;
R_JSTOOP=R12JSTOOP ;
R_JSTRES=R12JSTRES ;
R_JWEEK2=R12JWEEK2 ;
R_JWEEKS=R12JWEEKS ;
R_JYEARM=R12JYEARM ;
R_JYEARS=R12JYEARS ;
R_LBAGR=R12LBAGR ;
R_LBASSISTPRB=R12LBASSISTPRB ;
R_LBCOMP=R12LBCOMP ;
R_LBCON10=R12LBCON10 ;
R_LBCON5=R12LBCON5 ;
R_LBELIG=R12LBELIG ;
R_LBEXT=R12LBEXT ;
R_LBFAMDRUGPRB=R12LBFAMDRUGPRB ;
R_LBFAMHLTHPRB=R12LBFAMHLTHPRB ;
R_LBFINPRB=R12LBFINPRB ;
R_LBHLTHPRB=R12LBHLTHPRB ;
R_LBHOUSEPRB=R12LBHOUSEPRB ;
R_LBLONELY11=R12LBLONELY11 ;
R_LBLONELY3=R12LBLONELY3 ;
R_LBNEGAFFECT=R12LBNEGAFFECT ;
/* Empty map cell for: R_LBNEGAFFECT6variable wave = 12*/ ;
R_LBNEUR=R12LBNEUR ;
R_LBONCHRSTR=R12LBONCHRSTR ;
R_LBOPEN=R12LBOPEN ;
R_LBPOSAFFECT=R12LBPOSAFFECT ;
/* Empty map cell for: R_LBPOSAFFECT6variable wave = 12*/ ;
R_LBRF=R12LBRF ;
R_LBRFH=R12LBRFH ;
R_LBRFY=R12LBRFY ;
R_LBRLTNSHPRB=R12LBRLTNSHPRB ;
R_LBSATCITY=R12LBSATCITY ;
R_LBSATFAM=R12LBSATFAM ;
R_LBSATFIN=R12LBSATFIN ;
R_LBSATHLTH=R12LBSATHLTH ;
R_LBSATHOME=R12LBSATHOME ;
R_LBSATINC=R12LBSATINC ;
R_LBSATLEISURE=R12LBSATLEISURE ;
/* Empty map cell for: R_LBSATLIFE   variable wave = 12*/ ;
R_LBSATWLF=R12LBSATWLF ;
R_LBWGTR=R12LBWGTR ;
R_LBWORKPRB=R12LBWORKPRB ;
R_LGMUSA=R12LGMUSA ;
/* Empty map cell for: R_LGMUSW      variable wave = 12*/ ;
/* Empty map cell for: R_LHTACT      variable wave = 12*/ ;
R_LIFEIN=R12LIFEIN ;
/* Empty map cell for: R1_LIFT       variable wave = 12*/ ;
/* Empty map cell for: R2_LIFT       variable wave = 12*/ ;
R_LIFT=R12LIFT ;
R_LIFTA=R12LIFTA ;
/* Empty map cell for: R_LIFTW       variable wave = 12*/ ;
R_LIV10=R12LIV10 ;
R_LIV10A=R12LIV10A ;
R_LIV10P=R12LIV10P ;
R_LIV10R=R12LIV10R ;
R_LIV75=R12LIV75 ;
R_LIV75C=R12LIV75C ;
R_LIV75F=R12LIV75F ;
R_LIV75P=R12LIV75P ;
R_LIV75R=R12LIV75R ;
/* Empty map cell for: R_LIV85       variable wave = 12*/ ;
/* Empty map cell for: R_LIV85C      variable wave = 12*/ ;
/* Empty map cell for: R_LIV85F      variable wave = 12*/ ;
/* Empty map cell for: R_LIV85P      variable wave = 12*/ ;
/* Empty map cell for: R_LIV85R      variable wave = 12*/ ;
R_LIV8XC=R12LIV8XC ;
R_LIV8XF=R12LIV8XF ;
R_LIVBRO=R12LIVBRO ;
R_LIVPAR=R12LIVPAR ;
R_LIVSIB=R12LIVSIB ;
R_LIVSIS=R12LIVSIS ;
R_LOST=R12LOST ;
/* Empty map cell for: R_LTACTF      variable wave = 12*/ ;
/* Empty map cell for: R_LTACTN      variable wave = 12*/ ;
/* Empty map cell for: R_LTACTP      variable wave = 12*/ ;
R_LTACTX=R12LTACTX ;
R_LTCPRM=R12LTCPRM ;
R_LUNG=R12LUNG ;
R_LUNGE=R12LUNGE ;
R_LUNGF=R12LUNGF ;
R_LUNGQ=R12LUNGQ ;
R_LUNGS=R12LUNGS ;
R_MAMMOG=R12MAMMOG ;
/* Empty map cell for: R1_MAP        variable wave = 12*/ ;
/* Empty map cell for: R2_MAP        variable wave = 12*/ ;
R_MAP=R12MAP ;
R_MAPA=R12MAPA ;
/* Empty map cell for: R_MAPW        variable wave = 12*/ ;
R_MCURLN=R12MCURLN ;
/* Empty map cell for: R_MCWV        variable wave = 12*/ ;
/* Empty map cell for: R_MCWVW       variable wave = 12*/ ;
R_MDACTX=R12MDACTX ;
R_MDIV=R12MDIV ;
R_MEALS=R12MEALS ;
R_MEALSA=R12MEALSA ;
R_MEALSH=R12MEALSH ;
/* Empty map cell for: R_MEALSR      variable wave = 12*/ ;
/* Empty map cell for: R2_MEDS       variable wave = 12*/ ;
R_MEDS=R12MEDS ;
R_MEDSA=R12MEDSA ;
R_MEDSH=R12MEDSH ;
/* Empty map cell for: R_MEDSR       variable wave = 12*/ ;
/* Empty map cell for: R_MEMRY       variable wave = 12*/ ;
/* Empty map cell for: R_MEMRYE      variable wave = 12*/ ;
/* Empty map cell for: R_MEMRYF      variable wave = 12*/ ;
/* Empty map cell for: R_MEMRYQ      variable wave = 12*/ ;
/* Empty map cell for: R_MEMRYS      variable wave = 12*/ ;
R_MEND=R12MEND ;
R_MLEN=R12MLEN ;
R_MLENM=R12MLENM ;
R_MNEV=R12MNEV ;
R_MO=R12MO ;
R_MOBILA=R12MOBILA ;
/* Empty map cell for: R_MOBILW      variable wave = 12*/ ;
R_MOMAGE=R12MOMAGE ;
R_MOMLIV=R12MOMLIV ;
/* Empty map cell for: R2_MONEY      variable wave = 12*/ ;
R_MONEY=R12MONEY ;
R_MONEYA=R12MONEYA ;
R_MONEYH=R12MONEYH ;
/* Empty map cell for: R_MONEYR      variable wave = 12*/ ;
R_MPART=R12MPART ;
R_MRCT=R12MRCT ;
R_MRPREM=R12MRPREM ;
R_MSTAT=R12MSTAT ;
R_MSTATF=R12MSTATF ;
R_MSTATH=R12MSTATH ;
R_MSTOT=R12MSTOT ;
R_MWID=R12MWID ;
R_NHMDAY=R12NHMDAY ;
R_NHMLIV=R12NHMLIV ;
R_NHMMVM=R12NHMMVM ;
R_NHMMVY=R12NHMMVY ;
R_NOTICS=R12NOTICS ;
R_NOVOC=R12NOVOC ;
R_NRSHOM=R12NRSHOM ;
R_NRSNIT=R12NRSNIT ;
R_NRSTIM=R12NRSTIM ;
/* Empty map cell for: R_NSSCRE      variable wave = 12*/ ;
/* Empty map cell for: R_NSSCSE      variable wave = 12*/ ;
R_OOPMD=R12OOPMD ;
R_OOPMDF=R12OOPMDF ;
R_OOPMDO=R12OOPMDO ;
R_OOPMDOF=R12OOPMDOF ;
R_OUTPT=R12OUTPT ;
R_PAPSM=R12PAPSM ;
/* Empty map cell for: R_PARTD       variable wave = 12*/ ;
R_PENCT=R12PENCT ;
R_PENIC1=R12PENIC1 ;
R_PENIC2=R12PENIC2 ;
R_PENINC=R12PENINC ;
R_PENI_N=R12PENI_N ;
R_PEXIT=R12PEXIT ;
/* Empty map cell for: R2_PHONE      variable wave = 12*/ ;
R_PHONE=R12PHONE ;
R_PHONEA=R12PHONEA ;
R_PHONEH=R12PHONEH ;
/* Empty map cell for: R_PHONER      variable wave = 12*/ ;
R_PMBMI=R12PMBMI ;
R_PMHGHT=R12PMHGHT ;
R_PMHGHTS=R12PMHGHTS ;
R_PMWAIST=R12PMWAIST ;
R_PMWAISTC=R12PMWAISTC ;
R_PMWGHT=R12PMWGHT ;
R_PMWGHTF=R12PMWGHTF ;
R_PMWGHTS=R12PMWGHTS ;
R_PNHM5Y=R12PNHM5Y ;
R_PRCHMEM=R12PRCHMEM ;
R_PRES=R12PRES ;
R_PRMEM=R12PRMEM ;
R_PROST=R12PROST ;
R_PROXY=R12PROXY ;
R_PRPCNT=R12PRPCNT ;
R_PRPRM1=R12PRPRM1 ;
R_PRPRM2=R12PRPRM2 ;
R_PRPRM3=R12PRPRM3 ;
R_PRSRC1=R12PRSRC1 ;
R_PRSRC2=R12PRSRC2 ;
R_PRSRC3=R12PRSRC3 ;
R_PSTMEM=R12PSTMEM ;
R_PSYCH=R12PSYCH ;
R_PSYCHE=R12PSYCHE ;
R_PSYCHF=R12PSYCHF ;
R_PSYCHQ=R12PSYCHQ ;
R_PSYCHS=R12PSYCHS ;
R_PTYP1=R12PTYP1 ;
R_PTYP2=R12PTYP2 ;
R_PTYP3=R12PTYP3 ;
R_PTYP4=R12PTYP4 ;
R_PTYPD1=R12PTYPD1 ;
R_PTYPD2=R12PTYPD2 ;
R_PTYPD3=R12PTYPD3 ;
R_PTYPD4=R12PTYPD4 ;
R_PTYPF1=R12PTYPF1 ;
R_PTYPF2=R12PTYPF2 ;
R_PTYPF3=R12PTYPF3 ;
R_PTYPF4=R12PTYPF4 ;
R_PUFF=R12PUFF ;
R_PUFFPOS=R12PUFFPOS ;
/* Empty map cell for: R1_PUSH       variable wave = 12*/ ;
/* Empty map cell for: R2_PUSH       variable wave = 12*/ ;
R_PUSH=R12PUSH ;
R_PUSHA=R12PUSHA ;
/* Empty map cell for: R_PUSHW       variable wave = 12*/ ;
R_RETDTWV=R12RETDTWV ;
R_RETEMP=R12RETEMP ;
/* Empty map cell for: R_RETINC      variable wave = 12*/ ;
/* Empty map cell for: R_RETLIV      variable wave = 12*/ ;
R_RETMON=R12RETMON ;
R_RETSAT=R12RETSAT ;
/* Empty map cell for: R_RETWLT      variable wave = 12*/ ;
/* Empty map cell for: R_RETWRK      variable wave = 12*/ ;
/* Empty map cell for: R_RETWSP      variable wave = 12*/ ;
R_RETYR=R12RETYR ;
/* Empty map cell for: R_RISK        variable wave = 12*/ ;
/* Empty map cell for: R_RISK6       variable wave = 12*/ ;
R_RPLNYA=R12RPLNYA ;
R_RPLNYR=R12RPLNYR ;
R_RXPREM=R12RXPREM ;
R_RYRCMP=R12RYRCMP ;
R_SADLF=R12SADLF ;
R_SAMEJOB=R12SAMEJOB ;
R_SAMEMP=R12SAMEMP ;
R_SAYRET=R12SAYRET ;
R_SCIS=R12SCIS ;
R_SDIAPL=R12SDIAPL ;
R_SDIAPLM=R12SDIAPLM ;
R_SDIAPLY=R12SDIAPLY ;
R_SDIAPP=R12SDIAPP ;
R_SDIAPPM=R12SDIAPPM ;
R_SDIAPPY=R12SDIAPPY ;
R_SDIDEN=R12SDIDEN ;
R_SDIREC=R12SDIREC ;
R_SDIRECM=R12SDIRECM ;
R_SDIRECY=R12SDIRECY ;
R_SDISTP=R12SDISTP ;
R_SDISTPM=R12SDISTPM ;
R_SDISTPY=R12SDISTPY ;
R_SER7=R12SER7 ;
R_SHLT=R12SHLT ;
R_SHLTC=R12SHLTC ;
R_SHLTCF=R12SHLTCF ;
R_SHOP=R12SHOP ;
R_SHOPA=R12SHOPA ;
R_SHOPH=R12SHOPH ;
/* Empty map cell for: R_SHOPR       variable wave = 12*/ ;
/* Empty map cell for: R1_SIT        variable wave = 12*/ ;
/* Empty map cell for: R2_SIT        variable wave = 12*/ ;
R_SIT=R12SIT ;
R_SITA=R12SITA ;
/* Empty map cell for: R_SITW        variable wave = 12*/ ;
/* Empty map cell for: R_SLEEP       variable wave = 12*/ ;
/* Empty map cell for: R_SLEEPE      variable wave = 12*/ ;
/* Empty map cell for: R_SLEEPQ      variable wave = 12*/ ;
R_SLEEPR=R12SLEEPR ;
/* Empty map cell for: R_SLEEPS      variable wave = 12*/ ;
/* Empty map cell for: R_SLEEPX      variable wave = 12*/ ;
R_SLFEMP=R12SLFEMP ;
R_SLFMEM=R12SLFMEM ;
R_SMOKEN=R12SMOKEN ;
R_SMOKEV=R12SMOKEV ;
R_SPCFAC=R12SPCFAC ;
/* Empty map cell for: R_SSAPL       variable wave = 12*/ ;
/* Empty map cell for: R_SSAPLM      variable wave = 12*/ ;
/* Empty map cell for: R_SSAPLY      variable wave = 12*/ ;
/* Empty map cell for: R_SSAPP       variable wave = 12*/ ;
/* Empty map cell for: R_SSAPPM      variable wave = 12*/ ;
/* Empty map cell for: R_SSAPPY      variable wave = 12*/ ;
/* Empty map cell for: R_SSDEN       variable wave = 12*/ ;
R_SSDI=R12SSDI ;
R_SSIAPL=R12SSIAPL ;
R_SSIAPLM=R12SSIAPLM ;
R_SSIAPLY=R12SSIAPLY ;
R_SSIAPP=R12SSIAPP ;
R_SSIAPPM=R12SSIAPPM ;
R_SSIAPPY=R12SSIAPPY ;
R_SSIDEN=R12SSIDEN ;
R_SSIREC=R12SSIREC ;
R_SSIRECM=R12SSIRECM ;
R_SSIRECY=R12SSIRECY ;
R_SSISTP=R12SSISTP ;
R_SSISTPM=R12SSISTPM ;
R_SSISTPY=R12SSISTPY ;
/* Empty map cell for: R_SSREC       variable wave = 12*/ ;
/* Empty map cell for: R_SSRECM      variable wave = 12*/ ;
/* Empty map cell for: R_SSRECY      variable wave = 12*/ ;
/* Empty map cell for: R_SSSTP       variable wave = 12*/ ;
/* Empty map cell for: R_SSSTPM      variable wave = 12*/ ;
/* Empty map cell for: R_SSSTPY      variable wave = 12*/ ;
/* Empty map cell for: R_SSWRER      variable wave = 12*/ ;
/* Empty map cell for: R_SSWRNR      variable wave = 12*/ ;
/* Empty map cell for: R_SSWRXA      variable wave = 12*/ ;
/* Empty map cell for: R_SSWSER      variable wave = 12*/ ;
/* Empty map cell for: R_SSWSNR      variable wave = 12*/ ;
/* Empty map cell for: R_SSWSXA      variable wave = 12*/ ;
R_STATUS=R12STATUS ;
/* Empty map cell for: R1_STOOP      variable wave = 12*/ ;
/* Empty map cell for: R2_STOOP      variable wave = 12*/ ;
R_STOOP=R12STOOP ;
R_STOOPA=R12STOOPA ;
/* Empty map cell for: R_STOOPW      variable wave = 12*/ ;
R_STROK=R12STROK ;
R_STROKE=R12STROKE ;
R_STROKF=R12STROKF ;
R_STROKQ=R12STROKQ ;
R_STROKS=R12STROKS ;
R_TIMWLK=R12TIMWLK ;
R_TIMWLKA=R12TIMWLKA ;
/* Empty map cell for: R_TLIPRM      variable wave = 12*/ ;
/* Empty map cell for: R2_TOILT      variable wave = 12*/ ;
R_TOILT=R12TOILT ;
R_TOILTA=R12TOILTA ;
/* Empty map cell for: R2_TOILTH     variable wave = 12*/ ;
R_TOILTH=R12TOILTH ;
/* Empty map cell for: R_TOTMBF      variable wave = 12*/ ;
/* Empty map cell for: R_TOTMBI      variable wave = 12*/ ;
/* Empty map cell for: R_TOTMD       variable wave = 12*/ ;
/* Empty map cell for: R_TOTMDF      variable wave = 12*/ ;
R_TR20=R12TR20 ;
/* Empty map cell for: R_TR40        variable wave = 12*/ ;
R_TYLTC=R12TYLTC ;
/* Empty map cell for: R_ULCER       variable wave = 12*/ ;
R_UNEMP=R12UNEMP ;
R_UNION=R12UNION ;
R_UNIONF=R12UNIONF ;
/* Empty map cell for: R_VGACTF      variable wave = 12*/ ;
/* Empty map cell for: R_VGACTN      variable wave = 12*/ ;
/* Empty map cell for: R_VGACTP      variable wave = 12*/ ;
R_VGACTX=R12VGACTX ;
/* Empty map cell for: R_VIGACT      variable wave = 12*/ ;
R_VOCAB=R12VOCAB ;
R_VP=R12VP ;
/* Empty map cell for: R1_WALK1      variable wave = 12*/ ;
/* Empty map cell for: R2_WALK1      variable wave = 12*/ ;
R_WALK1=R12WALK1 ;
R_WALK1A=R12WALK1A ;
/* Empty map cell for: R_WALK1W      variable wave = 12*/ ;
/* Empty map cell for: R1_WALKR      variable wave = 12*/ ;
/* Empty map cell for: R2_WALKR      variable wave = 12*/ ;
R_WALKR=R12WALKR ;
R_WALKRA=R12WALKRA ;
R_WALKRE=R12WALKRE ;
/* Empty map cell for: R2_WALKRH     variable wave = 12*/ ;
R_WALKRH=R12WALKRH ;
/* Empty map cell for: R_WALKRW      variable wave = 12*/ ;
/* Empty map cell for: R1_WALKS      variable wave = 12*/ ;
/* Empty map cell for: R2_WALKS      variable wave = 12*/ ;
R_WALKS=R12WALKS ;
R_WALKSA=R12WALKSA ;
/* Empty map cell for: R_WALKSW      variable wave = 12*/ ;
R_WANDER=R12WANDER ;
R_WEIGHT=R12WEIGHT ;
R_WGFHR=R12WGFHR ;
R_WGFWK=R12WGFWK ;
R_WGIHR=R12WGIHR ;
R_WGIWK=R12WGIWK ;
/* Empty map cell for: R_WHAPPX      variable wave = 12*/ ;
R_WHAPPY=R12WHAPPY ;
R_WLIPRM=R12WLIPRM ;
R_WORK=R12WORK ;
R_WORK2=R12WORK2 ;
R_WORK62=R12WORK62 ;
R_WORK62F=R12WORK62F ;
R_WORK65=R12WORK65 ;
R_WORK65F=R12WORK65F ;
R_WORK70=R12WORK70 ;
R_WORK70A=R12WORK70A ;
R_WORK70AF=R12WORK70AF ;
R_WORK70F=R12WORK70F ;
/* Empty map cell for: R_WORKLM      variable wave = 12*/ ;
R_WTCRNH=R12WTCRNH ;
R_WTHH=R12WTHH ;
R_WTRESP=R12WTRESP ;
R_WTR_NH=R12WTR_NH ;
R_YR=R12YR ;
if inw=1 then output ;
%put --- Rlong table ;
%initvars ;
%put ---- Rlong table ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
WAVE_NUMBER=13 ;
H_HHIDC=H13HHIDC ;
SUBHH= substr(H_HHIDC,7)     /* --- Derived variable  */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
INW=INW13 ;
WAVE_NAME=  'hrs_wave'||strip(put(wave_number,3.))     /* --- Derived variable  */ ;
CYEAR='yr2016' ;
/* --- RAND variable:HACOHORT  included */ ;
studyyr= hrs_studyyr(wave_number,
hacohort)     /* --- Derived variable  */ ;
H_HHID=H13HHID ;
S_HHIDPN=S13HHIDPN ;
/* Empty map cell for: R_ACGTOT      variable wave = 13*/ ;
R_ADL5A=R13ADL5A ;
R_ADL5H=R13ADL5H ;
R_ADL6A=R13ADL6A ;
R_ADL6H=R13ADL6H ;
/* Empty map cell for: R_ADLR10      variable wave = 13*/ ;
/* Empty map cell for: R_ADLW        variable wave = 13*/ ;
R_AGEM_B=R13AGEM_B ;
R_AGEM_E=R13AGEM_E ;
R_AGEM_M=R13AGEM_M ;
R_AGEY_B=R13AGEY_B ;
R_AGEY_E=R13AGEY_E ;
R_AGEY_M=R13AGEY_M ;
/* Empty map cell for: R_AIMR10      variable wave = 13*/ ;
R_ALONE=R13ALONE ;
R_ALZHE=R13ALZHE ;
R_ALZHEE=R13ALZHEE ;
R_ALZHEF=R13ALZHEF ;
R_ALZHEQ=R13ALZHEQ ;
R_ALZHES=R13ALZHES ;
/* Empty map cell for: R_AMSTOT      variable wave = 13*/ ;
R_ANS3PQ=R13ANS3PQ ;
/* Empty map cell for: R1_ARMS       variable wave = 13*/ ;
/* Empty map cell for: R2_ARMS       variable wave = 13*/ ;
R_ARMS=R13ARMS ;
R_ARMSA=R13ARMSA ;
/* Empty map cell for: R_ARMSW       variable wave = 13*/ ;
R_ARTHR=R13ARTHR ;
R_ARTHRE=R13ARTHRE ;
R_ARTHRF=R13ARTHRF ;
R_ARTHRQ=R13ARTHRQ ;
R_ARTHRS=R13ARTHRS ;
/* Empty map cell for: R_ATR20       variable wave = 13*/ ;
R_BACK=R13BACK ;
R_BALFUL=R13BALFUL ;
R_BALFULC=R13BALFULC ;
R_BALFULT=R13BALFULT ;
R_BALSBS=R13BALSBS ;
R_BALSBSC=R13BALSBSC ;
R_BALSEMI=R13BALSEMI ;
R_BALSEMIC=R13BALSEMIC ;
/* Empty map cell for: R1_BATH       variable wave = 13*/ ;
/* Empty map cell for: R2_BATH       variable wave = 13*/ ;
R_BATH=R13BATH ;
R_BATHA=R13BATHA ;
/* Empty map cell for: R2_BATHH      variable wave = 13*/ ;
R_BATHH=R13BATHH ;
/* Empty map cell for: R_BATHW       variable wave = 13*/ ;
/* Empty map cell for: R1_BED        variable wave = 13*/ ;
/* Empty map cell for: R2_BED        variable wave = 13*/ ;
R_BED=R13BED ;
R_BEDA=R13BEDA ;
R_BEDE=R13BEDE ;
/* Empty map cell for: R2_BEDH       variable wave = 13*/ ;
R_BEDH=R13BEDH ;
/* Empty map cell for: R_BEDW        variable wave = 13*/ ;
R_BEQ100=R13BEQ100 ;
R_BEQ10K=R13BEQ10K ;
R_BEQ500=R13BEQ500 ;
R_BEQANY=R13BEQANY ;
/* Empty map cell for: R_BEQLRG      variable wave = 13*/ ;
R_BMI=R13BMI ;
R_BPDIA=R13BPDIA ;
R_BPPOS=R13BPPOS ;
R_BPPULS=R13BPPULS ;
R_BPSYS=R13BPSYS ;
/* Empty map cell for: R_BREAST      variable wave = 13*/ ;
R_BWC20=R13BWC20 ;
/* Empty map cell for: R_BWC86       variable wave = 13*/ ;
R_CACT=R13CACT ;
/* Empty map cell for: R1_CALC       variable wave = 13*/ ;
/* Empty map cell for: R2_CALC       variable wave = 13*/ ;
/* Empty map cell for: R_CALCA       variable wave = 13*/ ;
/* Empty map cell for: R_CALCW       variable wave = 13*/ ;
R_CANCR=R13CANCR ;
R_CANCRE=R13CANCRE ;
R_CANCRF=R13CANCRF ;
R_CANCRQ=R13CANCRQ ;
R_CANCRS=R13CANCRS ;
R_CENDIV=R13CENDIV ;
R_CENREG=R13CENREG ;
R_CESD=R13CESD ;
R_CESDM=R13CESDM ;
/* Empty map cell for: R1_CHAIR      variable wave = 13*/ ;
/* Empty map cell for: R2_CHAIR      variable wave = 13*/ ;
R_CHAIR=R13CHAIR ;
R_CHAIRA=R13CHAIRA ;
/* Empty map cell for: R_CHAIRW      variable wave = 13*/ ;
R_CHOLST=R13CHOLST ;
R_CLAIMED=R13CLAIMED ;
/* Empty map cell for: R1_CLIM1      variable wave = 13*/ ;
/* Empty map cell for: R2_CLIM1      variable wave = 13*/ ;
R_CLIM1=R13CLIM1 ;
R_CLIM1A=R13CLIM1A ;
/* Empty map cell for: R_CLIM1W      variable wave = 13*/ ;
/* Empty map cell for: R1_CLIMS      variable wave = 13*/ ;
/* Empty map cell for: R2_CLIMS      variable wave = 13*/ ;
R_CLIMS=R13CLIMS ;
R_CLIMSA=R13CLIMSA ;
/* Empty map cell for: R_CLIMSW      variable wave = 13*/ ;
R_COGTOT=R13COGTOT ;
/* Empty map cell for: R_COMP        variable wave = 13*/ ;
/* Empty map cell for: R_COMPW       variable wave = 13*/ ;
R_CONDE=R13CONDE ;
R_CONDEF=R13CONDEF ;
R_CONDS=R13CONDS ;
R_CONDSF=R13CONDSF ;
R_CONDSP=R13CONDSP ;
R_COVR=R13COVR ;
R_COVRT=R13COVRT ;
R_COVS=R13COVS ;
R_DADAGE=R13DADAGE ;
R_DADLIV=R13DADLIV ;
R_DCBAL1=R13DCBAL1 ;
R_DCBAL2=R13DCBAL2 ;
R_DCBAL3=R13DCBAL3 ;
R_DCBAL4=R13DCBAL4 ;
R_DCBENE1=R13DCBENE1 ;
R_DCBENE2=R13DCBENE2 ;
R_DCBENE3=R13DCBENE3 ;
R_DCBENE4=R13DCBENE4 ;
R_DCCONT1=R13DCCONT1 ;
R_DCCONT2=R13DCCONT2 ;
R_DCCONT3=R13DCCONT3 ;
R_DCCONT4=R13DCCONT4 ;
R_DCMODE1=R13DCMODE1 ;
R_DCMODE2=R13DCMODE2 ;
R_DCMODE3=R13DCMODE3 ;
R_DCMODE4=R13DCMODE4 ;
R_DCPCT1=R13DCPCT1 ;
R_DCPCT2=R13DCPCT2 ;
R_DCPCT3=R13DCPCT3 ;
R_DCPCT4=R13DCPCT4 ;
R_DEMEN=R13DEMEN ;
R_DEMENE=R13DEMENE ;
R_DEMENF=R13DEMENF ;
R_DEMENQ=R13DEMENQ ;
R_DEMENS=R13DEMENS ;
R_DENTST=R13DENTST ;
R_DEPRES=R13DEPRES ;
/* Empty map cell for: R_DEPREX      variable wave = 13*/ ;
R_DIAB=R13DIAB ;
R_DIABE=R13DIABE ;
R_DIABF=R13DIABF ;
R_DIABQ=R13DIABQ ;
R_DIABS=R13DIABS ;
/* Empty map cell for: R1_DIME       variable wave = 13*/ ;
/* Empty map cell for: R2_DIME       variable wave = 13*/ ;
R_DIME=R13DIME ;
R_DIMEA=R13DIMEA ;
/* Empty map cell for: R_DIMEW       variable wave = 13*/ ;
R_DLRC=R13DLRC ;
/* Empty map cell for: R_DLRC20      variable wave = 13*/ ;
R_DOCTIM=R13DOCTIM ;
R_DOCTOR=R13DOCTOR ;
/* Empty map cell for: R1_DRESS      variable wave = 13*/ ;
/* Empty map cell for: R2_DRESS      variable wave = 13*/ ;
R_DRESS=R13DRESS ;
R_DRESSA=R13DRESSA ;
/* Empty map cell for: R2_DRESSH     variable wave = 13*/ ;
R_DRESSH=R13DRESSH ;
/* Empty map cell for: R_DRESSW      variable wave = 13*/ ;
R_DRINK=R13DRINK ;
R_DRINKD=R13DRINKD ;
R_DRINKN=R13DRINKN ;
/* Empty map cell for: R_DRINKR      variable wave = 13*/ ;
R_DRUGS=R13DRUGS ;
R_DSIAMT=R13DSIAMT ;
R_DSSAMT=R13DSSAMT ;
R_DSTAT=R13DSTAT ;
R_DW=R13DW ;
R_DY=R13DY ;
/* Empty map cell for: R1_EAT        variable wave = 13*/ ;
/* Empty map cell for: R2_EAT        variable wave = 13*/ ;
R_EAT=R13EAT ;
R_EATA=R13EATA ;
/* Empty map cell for: R2_EATH       variable wave = 13*/ ;
R_EATH=R13EATH ;
/* Empty map cell for: R_EATW        variable wave = 13*/ ;
R_EFFORT=R13EFFORT ;
/* Empty map cell for: R_EFFORX      variable wave = 13*/ ;
R_ENLIFE=R13ENLIFE ;
/* Empty map cell for: R_ENLIFX      variable wave = 13*/ ;
R_FAMR=R13FAMR ;
R_FBWC20=R13FBWC20 ;
/* Empty map cell for: R_FBWC86      variable wave = 13*/ ;
R_FCACT=R13FCACT ;
R_FDLRC=R13FDLRC ;
R_FDW=R13FDW ;
R_FDY=R13FDY ;
R_FIMRC=R13FIMRC ;
R_FINEA=R13FINEA ;
R_FINPLN=R13FINPLN ;
R_FINR=R13FINR ;
/* Empty map cell for: R_FLAG        variable wave = 13*/ ;
R_FLONE=R13FLONE ;
/* Empty map cell for: R_FLONEX      variable wave = 13*/ ;
R_FLUSHT=R13FLUSHT ;
R_FMO=R13FMO ;
R_FPRES=R13FPRES ;
R_FPSTME=R13FPSTME ;
R_FSAD=R13FSAD ;
/* Empty map cell for: R_FSADX       variable wave = 13*/ ;
R_FSCIS=R13FSCIS ;
R_FSER7=R13FSER7 ;
R_FSIZE=R13FSIZE ;
R_FSIZEF=R13FSIZEF ;
R_FSLFME=R13FSLFME ;
R_FVOCAB=R13FVOCAB ;
R_FVP=R13FVP ;
R_FYR=R13FYR ;
R_GOING=R13GOING ;
/* Empty map cell for: R_GOINGX      variable wave = 13*/ ;
R_GOVMD=R13GOVMD ;
R_GOVMR=R13GOVMR ;
/* Empty map cell for: R_GOVOT       variable wave = 13*/ ;
R_GOVVA=R13GOVVA ;
R_GROSSA=R13GROSSA ;
R_GRP=R13GRP ;
R_GRPDOM=R13GRPDOM ;
R_GRPL=R13GRPL ;
R_GRPPOS=R13GRPPOS ;
R_GRPR=R13GRPR ;
R_HALUC=R13HALUC ;
/* Empty map cell for: R_HDLR20      variable wave = 13*/ ;
R_HEART=R13HEART ;
R_HEARTE=R13HEARTE ;
R_HEARTF=R13HEARTF ;
R_HEARTQ=R13HEARTQ ;
R_HEARTS=R13HEARTS ;
R_HECOV1=R13HECOV1 ;
R_HECOV2=R13HECOV2 ;
R_HECOV3=R13HECOV3 ;
R_HEIGHT=R13HEIGHT ;
R_HENUM=R13HENUM ;
R_HERET=R13HERET ;
R_HERTR1=R13HERTR1 ;
R_HERTR2=R13HERTR2 ;
R_HERTR3=R13HERTR3 ;
R_HERTS1=R13HERTS1 ;
R_HERTS2=R13HERTS2 ;
R_HERTS3=R13HERTS3 ;
R_HESRC1=R13HESRC1 ;
R_HESRC2=R13HESRC2 ;
R_HESRC3=R13HESRC3 ;
R_HIBP=R13HIBP ;
R_HIBPE=R13HIBPE ;
R_HIBPF=R13HIBPF ;
R_HIBPQ=R13HIBPQ ;
R_HIBPS=R13HIBPS ;
R_HIGOV=R13HIGOV ;
R_HILTC=R13HILTC ;
/* Empty map cell for: R_HIMR20      variable wave = 13*/ ;
R_HIOTHP=R13HIOTHP ;
R_HLPDYSF=R13HLPDYSF ;
R_HLPDYSNF=R13HLPDYSNF ;
R_HLPDYSP=R13HLPDYSP ;
R_HLPDYST=R13HLPDYST ;
R_HLPDYSU=R13HLPDYSU ;
R_HLPHRSF=R13HLPHRSF ;
R_HLPHRSNF=R13HLPHRSNF ;
R_HLPHRSP=R13HLPHRSP ;
R_HLPHRST=R13HLPHRST ;
R_HLPHRSU=R13HLPHRSU ;
R_HLPPDFA=R13HLPPDFA ;
R_HLPPDFN=R13HLPPDFN ;
R_HLPPDNFA=R13HLPPDNFA ;
R_HLPPDNFN=R13HLPPDNFN ;
R_HLPPDTA=R13HLPPDTA ;
R_HLPPDTN=R13HLPPDTN ;
R_HLPRFN=R13HLPRFN ;
R_HLPRNFN=R13HLPRNFN ;
R_HLPRPN=R13HLPRPN ;
R_HLPRTN=R13HLPRTN ;
R_HLPRUN=R13HLPRUN ;
R_HLTC3=R13HLTC3 ;
/* Empty map cell for: R_HLTC5       variable wave = 13*/ ;
/* Empty map cell for: R_HLTC5F      variable wave = 13*/ ;
R_HLTHLM=R13HLTHLM ;
R_HOMCAR=R13HOMCAR ;
R_HOSP=R13HOSP ;
R_HSPNIT=R13HSPNIT ;
R_HSPTIM=R13HSPTIM ;
/* Empty map cell for: R_HSWRKF      variable wave = 13*/ ;
/* Empty map cell for: R_HTR40       variable wave = 13*/ ;
R_IADL5A=R13IADL5A ;
R_IADL5H=R13IADL5H ;
R_IANN=R13IANN ;
R_IEARN=R13IEARN ;
R_IFANN=R13IFANN ;
R_IFEARN=R13IFEARN ;
R_IFGXFR=R13IFGXFR ;
R_IFIRAW=R13IFIRAW ;
/* Empty map cell for: R_IFIRAWY1    variable wave = 13*/ ;
R_IFPEN=R13IFPEN ;
R_IFPENA=R13IFPENA ;
R_IFSDI=R13IFSDI ;
R_IFSRET=R13IFSRET ;
R_IFSSDI=R13IFSSDI ;
/* Empty map cell for: R_IFSSI       variable wave = 13*/ ;
R_IFUNEM=R13IFUNEM ;
R_IFUNWC=R13IFUNWC ;
R_IFWCMP=R13IFWCMP ;
R_IGXFR=R13IGXFR ;
R_IIRAW=R13IIRAW ;
R_IIRAWY1=R13IIRAWY1 ;
R_IMRC=R13IMRC ;
/* Empty map cell for: R_IMRC20      variable wave = 13*/ ;
/* Empty map cell for: R_INHER       variable wave = 13*/ ;
R_INHPE=R13INHPE ;
R_INHPFN=R13INHPFN ;
R_INHPNFN=R13INHPNFN ;
R_INHPPN=R13INHPPN ;
R_INHPTN=R13INHPTN ;
R_INHPUN=R13INHPUN ;
R_INLBRF=R13INLBRF ;
R_IPEN=R13IPEN ;
R_IPENA=R13IPENA ;
R_ISDI=R13ISDI ;
R_ISRET=R13ISRET ;
R_ISSDI=R13ISSDI ;
R_ISSI=R13ISSI ;
R_IUNEM=R13IUNEM ;
R_IUNWC=R13IUNWC ;
R_IWBEG=R13IWBEG ;
/* Empty map cell for: R_IWBEGF      variable wave = 13*/ ;
R_IWCMP=R13IWCMP ;
R_IWEND=R13IWEND ;
/* Empty map cell for: R_IWENDF      variable wave = 13*/ ;
R_IWENDM=R13IWENDM ;
R_IWENDY=R13IWENDY ;
R_IWMID=R13IWMID ;
R_IWMIDF=R13IWMIDF ;
R_IWSTAT=R13IWSTAT ;
R_JCIND=R13JCIND ;
R_JCINDB=R13JCINDB ;
R_JCINDC=R13JCINDC ;
R_JCOCC=R13JCOCC ;
R_JCOCCA=R13JCOCCA ;
R_JCOCCB=R13JCOCCB ;
R_JCOCCC=R13JCOCCC ;
R_JCPEN=R13JCPEN ;
/* Empty map cell for: R_JCPENF      variable wave = 13*/ ;
R_JCTEN=R13JCTEN ;
R_JHOUR2=R13JHOUR2 ;
R_JHOURS=R13JHOURS ;
R_JJOBS=R13JJOBS ;
R_JLASTM=R13JLASTM ;
R_JLASTY=R13JLASTY ;
R_JLIFT=R13JLIFT ;
R_JLIND=R13JLIND ;
R_JLINDB=R13JLINDB ;
R_JLINDC=R13JLINDC ;
R_JLMIS=R13JLMIS ;
R_JLOCC=R13JLOCC ;
R_JLOCCA=R13JLOCCA ;
R_JLOCCB=R13JLOCCB ;
R_JLOCCC=R13JLOCCC ;
R_JLTEN=R13JLTEN ;
R_JLTENF=R13JLTENF ;
R_JMISS=R13JMISS ;
R_JNJOB=R13JNJOB ;
R_JNJOB5=R13JNJOB5 ;
/* Empty map cell for: R1_JOG        variable wave = 13*/ ;
/* Empty map cell for: R2_JOG        variable wave = 13*/ ;
R_JOG=R13JOG ;
R_JOGA=R13JOGA ;
/* Empty map cell for: R_JOGW        variable wave = 13*/ ;
R_JPHYS=R13JPHYS ;
R_JSIGHT=R13JSIGHT ;
R_JSTOOP=R13JSTOOP ;
R_JSTRES=R13JSTRES ;
R_JWEEK2=R13JWEEK2 ;
R_JWEEKS=R13JWEEKS ;
R_JYEARM=R13JYEARM ;
R_JYEARS=R13JYEARS ;
R_LBAGR=R13LBAGR ;
R_LBASSISTPRB=R13LBASSISTPRB ;
R_LBCOMP=R13LBCOMP ;
R_LBCON10=R13LBCON10 ;
R_LBCON5=R13LBCON5 ;
R_LBELIG=R13LBELIG ;
R_LBEXT=R13LBEXT ;
R_LBFAMDRUGPRB=R13LBFAMDRUGPRB ;
R_LBFAMHLTHPRB=R13LBFAMHLTHPRB ;
R_LBFINPRB=R13LBFINPRB ;
R_LBHLTHPRB=R13LBHLTHPRB ;
R_LBHOUSEPRB=R13LBHOUSEPRB ;
R_LBLONELY11=R13LBLONELY11 ;
R_LBLONELY3=R13LBLONELY3 ;
R_LBNEGAFFECT=R13LBNEGAFFECT ;
/* Empty map cell for: R_LBNEGAFFECT6variable wave = 13*/ ;
R_LBNEUR=R13LBNEUR ;
R_LBONCHRSTR=R13LBONCHRSTR ;
R_LBOPEN=R13LBOPEN ;
R_LBPOSAFFECT=R13LBPOSAFFECT ;
/* Empty map cell for: R_LBPOSAFFECT6variable wave = 13*/ ;
R_LBRF=R13LBRF ;
R_LBRFH=R13LBRFH ;
R_LBRFY=R13LBRFY ;
R_LBRLTNSHPRB=R13LBRLTNSHPRB ;
R_LBSATCITY=R13LBSATCITY ;
R_LBSATFAM=R13LBSATFAM ;
R_LBSATFIN=R13LBSATFIN ;
R_LBSATHLTH=R13LBSATHLTH ;
R_LBSATHOME=R13LBSATHOME ;
R_LBSATINC=R13LBSATINC ;
R_LBSATLEISURE=R13LBSATLEISURE ;
/* Empty map cell for: R_LBSATLIFE   variable wave = 13*/ ;
R_LBSATWLF=R13LBSATWLF ;
R_LBWGTR=R13LBWGTR ;
R_LBWORKPRB=R13LBWORKPRB ;
R_LGMUSA=R13LGMUSA ;
/* Empty map cell for: R_LGMUSW      variable wave = 13*/ ;
/* Empty map cell for: R_LHTACT      variable wave = 13*/ ;
R_LIFEIN=R13LIFEIN ;
/* Empty map cell for: R1_LIFT       variable wave = 13*/ ;
/* Empty map cell for: R2_LIFT       variable wave = 13*/ ;
R_LIFT=R13LIFT ;
R_LIFTA=R13LIFTA ;
/* Empty map cell for: R_LIFTW       variable wave = 13*/ ;
R_LIV10=R13LIV10 ;
R_LIV10A=R13LIV10A ;
R_LIV10P=R13LIV10P ;
R_LIV10R=R13LIV10R ;
R_LIV75=R13LIV75 ;
R_LIV75C=R13LIV75C ;
R_LIV75F=R13LIV75F ;
R_LIV75P=R13LIV75P ;
R_LIV75R=R13LIV75R ;
/* Empty map cell for: R_LIV85       variable wave = 13*/ ;
/* Empty map cell for: R_LIV85C      variable wave = 13*/ ;
/* Empty map cell for: R_LIV85F      variable wave = 13*/ ;
/* Empty map cell for: R_LIV85P      variable wave = 13*/ ;
/* Empty map cell for: R_LIV85R      variable wave = 13*/ ;
R_LIV8XC=R13LIV8XC ;
R_LIV8XF=R13LIV8XF ;
R_LIVBRO=R13LIVBRO ;
R_LIVPAR=R13LIVPAR ;
R_LIVSIB=R13LIVSIB ;
R_LIVSIS=R13LIVSIS ;
R_LOST=R13LOST ;
/* Empty map cell for: R_LTACTF      variable wave = 13*/ ;
/* Empty map cell for: R_LTACTN      variable wave = 13*/ ;
/* Empty map cell for: R_LTACTP      variable wave = 13*/ ;
R_LTACTX=R13LTACTX ;
R_LTCPRM=R13LTCPRM ;
R_LUNG=R13LUNG ;
R_LUNGE=R13LUNGE ;
R_LUNGF=R13LUNGF ;
R_LUNGQ=R13LUNGQ ;
R_LUNGS=R13LUNGS ;
R_MAMMOG=R13MAMMOG ;
/* Empty map cell for: R1_MAP        variable wave = 13*/ ;
/* Empty map cell for: R2_MAP        variable wave = 13*/ ;
R_MAP=R13MAP ;
R_MAPA=R13MAPA ;
/* Empty map cell for: R_MAPW        variable wave = 13*/ ;
R_MCURLN=R13MCURLN ;
/* Empty map cell for: R_MCWV        variable wave = 13*/ ;
/* Empty map cell for: R_MCWVW       variable wave = 13*/ ;
R_MDACTX=R13MDACTX ;
R_MDIV=R13MDIV ;
R_MEALS=R13MEALS ;
R_MEALSA=R13MEALSA ;
R_MEALSH=R13MEALSH ;
/* Empty map cell for: R_MEALSR      variable wave = 13*/ ;
/* Empty map cell for: R2_MEDS       variable wave = 13*/ ;
R_MEDS=R13MEDS ;
R_MEDSA=R13MEDSA ;
R_MEDSH=R13MEDSH ;
/* Empty map cell for: R_MEDSR       variable wave = 13*/ ;
/* Empty map cell for: R_MEMRY       variable wave = 13*/ ;
/* Empty map cell for: R_MEMRYE      variable wave = 13*/ ;
/* Empty map cell for: R_MEMRYF      variable wave = 13*/ ;
/* Empty map cell for: R_MEMRYQ      variable wave = 13*/ ;
/* Empty map cell for: R_MEMRYS      variable wave = 13*/ ;
R_MEND=R13MEND ;
R_MLEN=R13MLEN ;
R_MLENM=R13MLENM ;
R_MNEV=R13MNEV ;
R_MO=R13MO ;
R_MOBILA=R13MOBILA ;
/* Empty map cell for: R_MOBILW      variable wave = 13*/ ;
R_MOMAGE=R13MOMAGE ;
R_MOMLIV=R13MOMLIV ;
/* Empty map cell for: R2_MONEY      variable wave = 13*/ ;
R_MONEY=R13MONEY ;
R_MONEYA=R13MONEYA ;
R_MONEYH=R13MONEYH ;
/* Empty map cell for: R_MONEYR      variable wave = 13*/ ;
R_MPART=R13MPART ;
R_MRCT=R13MRCT ;
R_MRPREM=R13MRPREM ;
R_MSTAT=R13MSTAT ;
R_MSTATF=R13MSTATF ;
R_MSTATH=R13MSTATH ;
R_MSTOT=R13MSTOT ;
R_MWID=R13MWID ;
R_NHMDAY=R13NHMDAY ;
R_NHMLIV=R13NHMLIV ;
R_NHMMVM=R13NHMMVM ;
R_NHMMVY=R13NHMMVY ;
R_NOTICS=R13NOTICS ;
R_NOVOC=R13NOVOC ;
R_NRSHOM=R13NRSHOM ;
R_NRSNIT=R13NRSNIT ;
R_NRSTIM=R13NRSTIM ;
R_NSSCRE=R13NSSCRE ;
R_NSSCSE=R13NSSCSE ;
R_OOPMD=R13OOPMD ;
R_OOPMDF=R13OOPMDF ;
R_OOPMDO=R13OOPMDO ;
R_OOPMDOF=R13OOPMDOF ;
R_OUTPT=R13OUTPT ;
R_PAPSM=R13PAPSM ;
/* Empty map cell for: R_PARTD       variable wave = 13*/ ;
R_PENCT=R13PENCT ;
R_PENIC1=R13PENIC1 ;
R_PENIC2=R13PENIC2 ;
R_PENINC=R13PENINC ;
R_PENI_N=R13PENI_N ;
R_PEXIT=R13PEXIT ;
/* Empty map cell for: R2_PHONE      variable wave = 13*/ ;
R_PHONE=R13PHONE ;
R_PHONEA=R13PHONEA ;
R_PHONEH=R13PHONEH ;
/* Empty map cell for: R_PHONER      variable wave = 13*/ ;
R_PMBMI=R13PMBMI ;
R_PMHGHT=R13PMHGHT ;
R_PMHGHTS=R13PMHGHTS ;
R_PMWAIST=R13PMWAIST ;
R_PMWAISTC=R13PMWAISTC ;
R_PMWGHT=R13PMWGHT ;
R_PMWGHTF=R13PMWGHTF ;
R_PMWGHTS=R13PMWGHTS ;
R_PNHM5Y=R13PNHM5Y ;
R_PRCHMEM=R13PRCHMEM ;
R_PRES=R13PRES ;
R_PRMEM=R13PRMEM ;
R_PROST=R13PROST ;
R_PROXY=R13PROXY ;
R_PRPCNT=R13PRPCNT ;
R_PRPRM1=R13PRPRM1 ;
R_PRPRM2=R13PRPRM2 ;
R_PRPRM3=R13PRPRM3 ;
R_PRSRC1=R13PRSRC1 ;
R_PRSRC2=R13PRSRC2 ;
R_PRSRC3=R13PRSRC3 ;
R_PSTMEM=R13PSTMEM ;
R_PSYCH=R13PSYCH ;
R_PSYCHE=R13PSYCHE ;
R_PSYCHF=R13PSYCHF ;
R_PSYCHQ=R13PSYCHQ ;
R_PSYCHS=R13PSYCHS ;
R_PTYP1=R13PTYP1 ;
R_PTYP2=R13PTYP2 ;
R_PTYP3=R13PTYP3 ;
R_PTYP4=R13PTYP4 ;
R_PTYPD1=R13PTYPD1 ;
R_PTYPD2=R13PTYPD2 ;
R_PTYPD3=R13PTYPD3 ;
R_PTYPD4=R13PTYPD4 ;
R_PTYPF1=R13PTYPF1 ;
R_PTYPF2=R13PTYPF2 ;
R_PTYPF3=R13PTYPF3 ;
R_PTYPF4=R13PTYPF4 ;
R_PUFF=R13PUFF ;
R_PUFFPOS=R13PUFFPOS ;
/* Empty map cell for: R1_PUSH       variable wave = 13*/ ;
/* Empty map cell for: R2_PUSH       variable wave = 13*/ ;
R_PUSH=R13PUSH ;
R_PUSHA=R13PUSHA ;
/* Empty map cell for: R_PUSHW       variable wave = 13*/ ;
R_RETDTWV=R13RETDTWV ;
R_RETEMP=R13RETEMP ;
/* Empty map cell for: R_RETINC      variable wave = 13*/ ;
/* Empty map cell for: R_RETLIV      variable wave = 13*/ ;
R_RETMON=R13RETMON ;
R_RETSAT=R13RETSAT ;
/* Empty map cell for: R_RETWLT      variable wave = 13*/ ;
/* Empty map cell for: R_RETWRK      variable wave = 13*/ ;
/* Empty map cell for: R_RETWSP      variable wave = 13*/ ;
R_RETYR=R13RETYR ;
/* Empty map cell for: R_RISK        variable wave = 13*/ ;
/* Empty map cell for: R_RISK6       variable wave = 13*/ ;
R_RPLNYA=R13RPLNYA ;
R_RPLNYR=R13RPLNYR ;
R_RXPREM=R13RXPREM ;
R_RYRCMP=R13RYRCMP ;
R_SADLF=R13SADLF ;
R_SAMEJOB=R13SAMEJOB ;
R_SAMEMP=R13SAMEMP ;
R_SAYRET=R13SAYRET ;
R_SCIS=R13SCIS ;
R_SDIAPL=R13SDIAPL ;
R_SDIAPLM=R13SDIAPLM ;
R_SDIAPLY=R13SDIAPLY ;
R_SDIAPP=R13SDIAPP ;
R_SDIAPPM=R13SDIAPPM ;
R_SDIAPPY=R13SDIAPPY ;
R_SDIDEN=R13SDIDEN ;
R_SDIREC=R13SDIREC ;
R_SDIRECM=R13SDIRECM ;
R_SDIRECY=R13SDIRECY ;
R_SDISTP=R13SDISTP ;
R_SDISTPM=R13SDISTPM ;
R_SDISTPY=R13SDISTPY ;
R_SER7=R13SER7 ;
R_SHLT=R13SHLT ;
R_SHLTC=R13SHLTC ;
R_SHLTCF=R13SHLTCF ;
R_SHOP=R13SHOP ;
R_SHOPA=R13SHOPA ;
R_SHOPH=R13SHOPH ;
/* Empty map cell for: R_SHOPR       variable wave = 13*/ ;
/* Empty map cell for: R1_SIT        variable wave = 13*/ ;
/* Empty map cell for: R2_SIT        variable wave = 13*/ ;
R_SIT=R13SIT ;
R_SITA=R13SITA ;
/* Empty map cell for: R_SITW        variable wave = 13*/ ;
R_SLEEP=R13SLEEP ;
R_SLEEPE=R13SLEEPE ;
R_SLEEPQ=R13SLEEPQ ;
R_SLEEPR=R13SLEEPR ;
/* Empty map cell for: R_SLEEPS      variable wave = 13*/ ;
/* Empty map cell for: R_SLEEPX      variable wave = 13*/ ;
R_SLFEMP=R13SLFEMP ;
R_SLFMEM=R13SLFMEM ;
R_SMOKEN=R13SMOKEN ;
R_SMOKEV=R13SMOKEV ;
R_SPCFAC=R13SPCFAC ;
/* Empty map cell for: R_SSAPL       variable wave = 13*/ ;
/* Empty map cell for: R_SSAPLM      variable wave = 13*/ ;
/* Empty map cell for: R_SSAPLY      variable wave = 13*/ ;
/* Empty map cell for: R_SSAPP       variable wave = 13*/ ;
/* Empty map cell for: R_SSAPPM      variable wave = 13*/ ;
/* Empty map cell for: R_SSAPPY      variable wave = 13*/ ;
/* Empty map cell for: R_SSDEN       variable wave = 13*/ ;
R_SSDI=R13SSDI ;
R_SSIAPL=R13SSIAPL ;
R_SSIAPLM=R13SSIAPLM ;
R_SSIAPLY=R13SSIAPLY ;
R_SSIAPP=R13SSIAPP ;
R_SSIAPPM=R13SSIAPPM ;
R_SSIAPPY=R13SSIAPPY ;
R_SSIDEN=R13SSIDEN ;
R_SSIREC=R13SSIREC ;
R_SSIRECM=R13SSIRECM ;
R_SSIRECY=R13SSIRECY ;
R_SSISTP=R13SSISTP ;
R_SSISTPM=R13SSISTPM ;
R_SSISTPY=R13SSISTPY ;
/* Empty map cell for: R_SSREC       variable wave = 13*/ ;
/* Empty map cell for: R_SSRECM      variable wave = 13*/ ;
/* Empty map cell for: R_SSRECY      variable wave = 13*/ ;
/* Empty map cell for: R_SSSTP       variable wave = 13*/ ;
/* Empty map cell for: R_SSSTPM      variable wave = 13*/ ;
/* Empty map cell for: R_SSSTPY      variable wave = 13*/ ;
R_SSWRER=R13SSWRER ;
R_SSWRNR=R13SSWRNR ;
R_SSWRXA=R13SSWRXA ;
R_SSWSER=R13SSWSER ;
R_SSWSNR=R13SSWSNR ;
R_SSWSXA=R13SSWSXA ;
R_STATUS=R13STATUS ;
/* Empty map cell for: R1_STOOP      variable wave = 13*/ ;
/* Empty map cell for: R2_STOOP      variable wave = 13*/ ;
R_STOOP=R13STOOP ;
R_STOOPA=R13STOOPA ;
/* Empty map cell for: R_STOOPW      variable wave = 13*/ ;
R_STROK=R13STROK ;
R_STROKE=R13STROKE ;
R_STROKF=R13STROKF ;
R_STROKQ=R13STROKQ ;
R_STROKS=R13STROKS ;
R_TIMWLK=R13TIMWLK ;
R_TIMWLKA=R13TIMWLKA ;
/* Empty map cell for: R_TLIPRM      variable wave = 13*/ ;
/* Empty map cell for: R2_TOILT      variable wave = 13*/ ;
R_TOILT=R13TOILT ;
R_TOILTA=R13TOILTA ;
/* Empty map cell for: R2_TOILTH     variable wave = 13*/ ;
R_TOILTH=R13TOILTH ;
/* Empty map cell for: R_TOTMBF      variable wave = 13*/ ;
/* Empty map cell for: R_TOTMBI      variable wave = 13*/ ;
/* Empty map cell for: R_TOTMD       variable wave = 13*/ ;
/* Empty map cell for: R_TOTMDF      variable wave = 13*/ ;
R_TR20=R13TR20 ;
/* Empty map cell for: R_TR40        variable wave = 13*/ ;
R_TYLTC=R13TYLTC ;
/* Empty map cell for: R_ULCER       variable wave = 13*/ ;
R_UNEMP=R13UNEMP ;
R_UNION=R13UNION ;
R_UNIONF=R13UNIONF ;
/* Empty map cell for: R_VGACTF      variable wave = 13*/ ;
/* Empty map cell for: R_VGACTN      variable wave = 13*/ ;
/* Empty map cell for: R_VGACTP      variable wave = 13*/ ;
R_VGACTX=R13VGACTX ;
/* Empty map cell for: R_VIGACT      variable wave = 13*/ ;
R_VOCAB=R13VOCAB ;
R_VP=R13VP ;
/* Empty map cell for: R1_WALK1      variable wave = 13*/ ;
/* Empty map cell for: R2_WALK1      variable wave = 13*/ ;
R_WALK1=R13WALK1 ;
R_WALK1A=R13WALK1A ;
/* Empty map cell for: R_WALK1W      variable wave = 13*/ ;
/* Empty map cell for: R1_WALKR      variable wave = 13*/ ;
/* Empty map cell for: R2_WALKR      variable wave = 13*/ ;
R_WALKR=R13WALKR ;
R_WALKRA=R13WALKRA ;
R_WALKRE=R13WALKRE ;
/* Empty map cell for: R2_WALKRH     variable wave = 13*/ ;
R_WALKRH=R13WALKRH ;
/* Empty map cell for: R_WALKRW      variable wave = 13*/ ;
/* Empty map cell for: R1_WALKS      variable wave = 13*/ ;
/* Empty map cell for: R2_WALKS      variable wave = 13*/ ;
R_WALKS=R13WALKS ;
R_WALKSA=R13WALKSA ;
/* Empty map cell for: R_WALKSW      variable wave = 13*/ ;
R_WANDER=R13WANDER ;
R_WEIGHT=R13WEIGHT ;
R_WGFHR=R13WGFHR ;
R_WGFWK=R13WGFWK ;
R_WGIHR=R13WGIHR ;
R_WGIWK=R13WGIWK ;
/* Empty map cell for: R_WHAPPX      variable wave = 13*/ ;
R_WHAPPY=R13WHAPPY ;
R_WLIPRM=R13WLIPRM ;
R_WORK=R13WORK ;
R_WORK2=R13WORK2 ;
R_WORK62=R13WORK62 ;
R_WORK62F=R13WORK62F ;
R_WORK65=R13WORK65 ;
R_WORK65F=R13WORK65F ;
R_WORK70=R13WORK70 ;
R_WORK70A=R13WORK70A ;
R_WORK70AF=R13WORK70AF ;
R_WORK70F=R13WORK70F ;
/* Empty map cell for: R_WORKLM      variable wave = 13*/ ;
R_WTCRNH=R13WTCRNH ;
R_WTHH=R13WTHH ;
R_WTRESP=R13WTRESP ;
R_WTR_NH=R13WTR_NH ;
R_YR=R13YR ;
if inw=1 then output ;
%put --- Rlong table ;
%initvars ;
%put ---- Rlong table ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
WAVE_NUMBER=14 ;
H_HHIDC=H14HHIDC ;
SUBHH= substr(H_HHIDC,7)     /* --- Derived variable  */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
INW=INW14 ;
WAVE_NAME=  'hrs_wave'||strip(put(wave_number,3.))     /* --- Derived variable  */ ;
CYEAR='yr2018' ;
/* --- RAND variable:HACOHORT  included */ ;
studyyr= hrs_studyyr(wave_number,
hacohort)     /* --- Derived variable  */ ;
H_HHID=H14HHID ;
S_HHIDPN=S14HHIDPN ;
/* Empty map cell for: R_ACGTOT      variable wave = 14*/ ;
R_ADL5A=R14ADL5A ;
R_ADL5H=R14ADL5H ;
R_ADL6A=R14ADL6A ;
R_ADL6H=R14ADL6H ;
/* Empty map cell for: R_ADLR10      variable wave = 14*/ ;
/* Empty map cell for: R_ADLW        variable wave = 14*/ ;
R_AGEM_B=R14AGEM_B ;
R_AGEM_E=R14AGEM_E ;
R_AGEM_M=R14AGEM_M ;
R_AGEY_B=R14AGEY_B ;
R_AGEY_E=R14AGEY_E ;
R_AGEY_M=R14AGEY_M ;
/* Empty map cell for: R_AIMR10      variable wave = 14*/ ;
R_ALONE=R14ALONE ;
R_ALZHE=R14ALZHE ;
R_ALZHEE=R14ALZHEE ;
R_ALZHEF=R14ALZHEF ;
R_ALZHEQ=R14ALZHEQ ;
R_ALZHES=R14ALZHES ;
/* Empty map cell for: R_AMSTOT      variable wave = 14*/ ;
R_ANS3PQ=R14ANS3PQ ;
/* Empty map cell for: R1_ARMS       variable wave = 14*/ ;
/* Empty map cell for: R2_ARMS       variable wave = 14*/ ;
R_ARMS=R14ARMS ;
R_ARMSA=R14ARMSA ;
/* Empty map cell for: R_ARMSW       variable wave = 14*/ ;
R_ARTHR=R14ARTHR ;
R_ARTHRE=R14ARTHRE ;
R_ARTHRF=R14ARTHRF ;
R_ARTHRQ=R14ARTHRQ ;
R_ARTHRS=R14ARTHRS ;
/* Empty map cell for: R_ATR20       variable wave = 14*/ ;
R_BACK=R14BACK ;
R_BALFUL=R14BALFUL ;
R_BALFULC=R14BALFULC ;
R_BALFULT=R14BALFULT ;
R_BALSBS=R14BALSBS ;
R_BALSBSC=R14BALSBSC ;
R_BALSEMI=R14BALSEMI ;
R_BALSEMIC=R14BALSEMIC ;
/* Empty map cell for: R1_BATH       variable wave = 14*/ ;
/* Empty map cell for: R2_BATH       variable wave = 14*/ ;
R_BATH=R14BATH ;
R_BATHA=R14BATHA ;
/* Empty map cell for: R2_BATHH      variable wave = 14*/ ;
R_BATHH=R14BATHH ;
/* Empty map cell for: R_BATHW       variable wave = 14*/ ;
/* Empty map cell for: R1_BED        variable wave = 14*/ ;
/* Empty map cell for: R2_BED        variable wave = 14*/ ;
R_BED=R14BED ;
R_BEDA=R14BEDA ;
R_BEDE=R14BEDE ;
/* Empty map cell for: R2_BEDH       variable wave = 14*/ ;
R_BEDH=R14BEDH ;
/* Empty map cell for: R_BEDW        variable wave = 14*/ ;
R_BEQ100=R14BEQ100 ;
R_BEQ10K=R14BEQ10K ;
R_BEQ500=R14BEQ500 ;
R_BEQANY=R14BEQANY ;
/* Empty map cell for: R_BEQLRG      variable wave = 14*/ ;
R_BMI=R14BMI ;
R_BPDIA=R14BPDIA ;
R_BPPOS=R14BPPOS ;
R_BPPULS=R14BPPULS ;
R_BPSYS=R14BPSYS ;
/* Empty map cell for: R_BREAST      variable wave = 14*/ ;
/* Empty map cell for: R_BWC20       variable wave = 14*/ ;
/* Empty map cell for: R_BWC86       variable wave = 14*/ ;
/* Empty map cell for: R_CACT        variable wave = 14*/ ;
/* Empty map cell for: R1_CALC       variable wave = 14*/ ;
/* Empty map cell for: R2_CALC       variable wave = 14*/ ;
/* Empty map cell for: R_CALCA       variable wave = 14*/ ;
/* Empty map cell for: R_CALCW       variable wave = 14*/ ;
R_CANCR=R14CANCR ;
R_CANCRE=R14CANCRE ;
R_CANCRF=R14CANCRF ;
R_CANCRQ=R14CANCRQ ;
R_CANCRS=R14CANCRS ;
R_CENDIV=R14CENDIV ;
R_CENREG=R14CENREG ;
R_CESD=R14CESD ;
R_CESDM=R14CESDM ;
/* Empty map cell for: R1_CHAIR      variable wave = 14*/ ;
/* Empty map cell for: R2_CHAIR      variable wave = 14*/ ;
R_CHAIR=R14CHAIR ;
R_CHAIRA=R14CHAIRA ;
/* Empty map cell for: R_CHAIRW      variable wave = 14*/ ;
R_CHOLST=R14CHOLST ;
/* Empty map cell for: R_CLAIMED     variable wave = 14*/ ;
/* Empty map cell for: R1_CLIM1      variable wave = 14*/ ;
/* Empty map cell for: R2_CLIM1      variable wave = 14*/ ;
R_CLIM1=R14CLIM1 ;
R_CLIM1A=R14CLIM1A ;
/* Empty map cell for: R_CLIM1W      variable wave = 14*/ ;
/* Empty map cell for: R1_CLIMS      variable wave = 14*/ ;
/* Empty map cell for: R2_CLIMS      variable wave = 14*/ ;
R_CLIMS=R14CLIMS ;
R_CLIMSA=R14CLIMSA ;
/* Empty map cell for: R_CLIMSW      variable wave = 14*/ ;
/* Empty map cell for: R_COGTOT      variable wave = 14*/ ;
/* Empty map cell for: R_COMP        variable wave = 14*/ ;
/* Empty map cell for: R_COMPW       variable wave = 14*/ ;
R_CONDE=R14CONDE ;
R_CONDEF=R14CONDEF ;
R_CONDS=R14CONDS ;
R_CONDSF=R14CONDSF ;
R_CONDSP=R14CONDSP ;
R_COVR=R14COVR ;
R_COVRT=R14COVRT ;
R_COVS=R14COVS ;
R_DADAGE=R14DADAGE ;
R_DADLIV=R14DADLIV ;
R_DCBAL1=R14DCBAL1 ;
R_DCBAL2=R14DCBAL2 ;
R_DCBAL3=R14DCBAL3 ;
R_DCBAL4=R14DCBAL4 ;
R_DCBENE1=R14DCBENE1 ;
R_DCBENE2=R14DCBENE2 ;
R_DCBENE3=R14DCBENE3 ;
R_DCBENE4=R14DCBENE4 ;
R_DCCONT1=R14DCCONT1 ;
R_DCCONT2=R14DCCONT2 ;
R_DCCONT3=R14DCCONT3 ;
R_DCCONT4=R14DCCONT4 ;
R_DCMODE1=R14DCMODE1 ;
R_DCMODE2=R14DCMODE2 ;
R_DCMODE3=R14DCMODE3 ;
R_DCMODE4=R14DCMODE4 ;
R_DCPCT1=R14DCPCT1 ;
R_DCPCT2=R14DCPCT2 ;
R_DCPCT3=R14DCPCT3 ;
R_DCPCT4=R14DCPCT4 ;
R_DEMEN=R14DEMEN ;
R_DEMENE=R14DEMENE ;
R_DEMENF=R14DEMENF ;
R_DEMENQ=R14DEMENQ ;
R_DEMENS=R14DEMENS ;
R_DENTST=R14DENTST ;
R_DEPRES=R14DEPRES ;
/* Empty map cell for: R_DEPREX      variable wave = 14*/ ;
R_DIAB=R14DIAB ;
R_DIABE=R14DIABE ;
R_DIABF=R14DIABF ;
R_DIABQ=R14DIABQ ;
R_DIABS=R14DIABS ;
/* Empty map cell for: R1_DIME       variable wave = 14*/ ;
/* Empty map cell for: R2_DIME       variable wave = 14*/ ;
R_DIME=R14DIME ;
R_DIMEA=R14DIMEA ;
/* Empty map cell for: R_DIMEW       variable wave = 14*/ ;
/* Empty map cell for: R_DLRC        variable wave = 14*/ ;
/* Empty map cell for: R_DLRC20      variable wave = 14*/ ;
R_DOCTIM=R14DOCTIM ;
R_DOCTOR=R14DOCTOR ;
/* Empty map cell for: R1_DRESS      variable wave = 14*/ ;
/* Empty map cell for: R2_DRESS      variable wave = 14*/ ;
R_DRESS=R14DRESS ;
R_DRESSA=R14DRESSA ;
/* Empty map cell for: R2_DRESSH     variable wave = 14*/ ;
R_DRESSH=R14DRESSH ;
/* Empty map cell for: R_DRESSW      variable wave = 14*/ ;
R_DRINK=R14DRINK ;
R_DRINKD=R14DRINKD ;
R_DRINKN=R14DRINKN ;
/* Empty map cell for: R_DRINKR      variable wave = 14*/ ;
R_DRUGS=R14DRUGS ;
R_DSIAMT=R14DSIAMT ;
R_DSSAMT=R14DSSAMT ;
R_DSTAT=R14DSTAT ;
/* Empty map cell for: R_DW          variable wave = 14*/ ;
/* Empty map cell for: R_DY          variable wave = 14*/ ;
/* Empty map cell for: R1_EAT        variable wave = 14*/ ;
/* Empty map cell for: R2_EAT        variable wave = 14*/ ;
R_EAT=R14EAT ;
R_EATA=R14EATA ;
/* Empty map cell for: R2_EATH       variable wave = 14*/ ;
R_EATH=R14EATH ;
/* Empty map cell for: R_EATW        variable wave = 14*/ ;
R_EFFORT=R14EFFORT ;
/* Empty map cell for: R_EFFORX      variable wave = 14*/ ;
R_ENLIFE=R14ENLIFE ;
/* Empty map cell for: R_ENLIFX      variable wave = 14*/ ;
R_FAMR=R14FAMR ;
/* Empty map cell for: R_FBWC20      variable wave = 14*/ ;
/* Empty map cell for: R_FBWC86      variable wave = 14*/ ;
/* Empty map cell for: R_FCACT       variable wave = 14*/ ;
/* Empty map cell for: R_FDLRC       variable wave = 14*/ ;
/* Empty map cell for: R_FDW         variable wave = 14*/ ;
/* Empty map cell for: R_FDY         variable wave = 14*/ ;
/* Empty map cell for: R_FIMRC       variable wave = 14*/ ;
R_FINEA=R14FINEA ;
R_FINPLN=R14FINPLN ;
R_FINR=R14FINR ;
/* Empty map cell for: R_FLAG        variable wave = 14*/ ;
R_FLONE=R14FLONE ;
/* Empty map cell for: R_FLONEX      variable wave = 14*/ ;
R_FLUSHT=R14FLUSHT ;
/* Empty map cell for: R_FMO         variable wave = 14*/ ;
/* Empty map cell for: R_FPRES       variable wave = 14*/ ;
/* Empty map cell for: R_FPSTME      variable wave = 14*/ ;
R_FSAD=R14FSAD ;
/* Empty map cell for: R_FSADX       variable wave = 14*/ ;
/* Empty map cell for: R_FSCIS       variable wave = 14*/ ;
/* Empty map cell for: R_FSER7       variable wave = 14*/ ;
R_FSIZE=R14FSIZE ;
R_FSIZEF=R14FSIZEF ;
/* Empty map cell for: R_FSLFME      variable wave = 14*/ ;
/* Empty map cell for: R_FVOCAB      variable wave = 14*/ ;
/* Empty map cell for: R_FVP         variable wave = 14*/ ;
/* Empty map cell for: R_FYR         variable wave = 14*/ ;
R_GOING=R14GOING ;
/* Empty map cell for: R_GOINGX      variable wave = 14*/ ;
R_GOVMD=R14GOVMD ;
R_GOVMR=R14GOVMR ;
/* Empty map cell for: R_GOVOT       variable wave = 14*/ ;
R_GOVVA=R14GOVVA ;
R_GROSSA=R14GROSSA ;
R_GRP=R14GRP ;
R_GRPDOM=R14GRPDOM ;
R_GRPL=R14GRPL ;
R_GRPPOS=R14GRPPOS ;
R_GRPR=R14GRPR ;
R_HALUC=R14HALUC ;
/* Empty map cell for: R_HDLR20      variable wave = 14*/ ;
R_HEART=R14HEART ;
R_HEARTE=R14HEARTE ;
R_HEARTF=R14HEARTF ;
R_HEARTQ=R14HEARTQ ;
R_HEARTS=R14HEARTS ;
R_HECOV1=R14HECOV1 ;
R_HECOV2=R14HECOV2 ;
R_HECOV3=R14HECOV3 ;
R_HEIGHT=R14HEIGHT ;
R_HENUM=R14HENUM ;
R_HERET=R14HERET ;
R_HERTR1=R14HERTR1 ;
R_HERTR2=R14HERTR2 ;
R_HERTR3=R14HERTR3 ;
R_HERTS1=R14HERTS1 ;
R_HERTS2=R14HERTS2 ;
R_HERTS3=R14HERTS3 ;
R_HESRC1=R14HESRC1 ;
R_HESRC2=R14HESRC2 ;
R_HESRC3=R14HESRC3 ;
R_HIBP=R14HIBP ;
R_HIBPE=R14HIBPE ;
R_HIBPF=R14HIBPF ;
R_HIBPQ=R14HIBPQ ;
R_HIBPS=R14HIBPS ;
R_HIGOV=R14HIGOV ;
R_HILTC=R14HILTC ;
/* Empty map cell for: R_HIMR20      variable wave = 14*/ ;
R_HIOTHP=R14HIOTHP ;
R_HLPDYSF=R14HLPDYSF ;
R_HLPDYSNF=R14HLPDYSNF ;
R_HLPDYSP=R14HLPDYSP ;
R_HLPDYST=R14HLPDYST ;
R_HLPDYSU=R14HLPDYSU ;
R_HLPHRSF=R14HLPHRSF ;
R_HLPHRSNF=R14HLPHRSNF ;
R_HLPHRSP=R14HLPHRSP ;
R_HLPHRST=R14HLPHRST ;
R_HLPHRSU=R14HLPHRSU ;
R_HLPPDFA=R14HLPPDFA ;
R_HLPPDFN=R14HLPPDFN ;
R_HLPPDNFA=R14HLPPDNFA ;
R_HLPPDNFN=R14HLPPDNFN ;
R_HLPPDTA=R14HLPPDTA ;
R_HLPPDTN=R14HLPPDTN ;
R_HLPRFN=R14HLPRFN ;
R_HLPRNFN=R14HLPRNFN ;
R_HLPRPN=R14HLPRPN ;
R_HLPRTN=R14HLPRTN ;
R_HLPRUN=R14HLPRUN ;
R_HLTC3=R14HLTC3 ;
/* Empty map cell for: R_HLTC5       variable wave = 14*/ ;
/* Empty map cell for: R_HLTC5F      variable wave = 14*/ ;
R_HLTHLM=R14HLTHLM ;
R_HOMCAR=R14HOMCAR ;
R_HOSP=R14HOSP ;
R_HSPNIT=R14HSPNIT ;
R_HSPTIM=R14HSPTIM ;
/* Empty map cell for: R_HSWRKF      variable wave = 14*/ ;
/* Empty map cell for: R_HTR40       variable wave = 14*/ ;
R_IADL5A=R14IADL5A ;
R_IADL5H=R14IADL5H ;
R_IANN=R14IANN ;
R_IEARN=R14IEARN ;
R_IFANN=R14IFANN ;
R_IFEARN=R14IFEARN ;
R_IFGXFR=R14IFGXFR ;
R_IFIRAW=R14IFIRAW ;
/* Empty map cell for: R_IFIRAWY1    variable wave = 14*/ ;
R_IFPEN=R14IFPEN ;
R_IFPENA=R14IFPENA ;
R_IFSDI=R14IFSDI ;
R_IFSRET=R14IFSRET ;
R_IFSSDI=R14IFSSDI ;
/* Empty map cell for: R_IFSSI       variable wave = 14*/ ;
R_IFUNEM=R14IFUNEM ;
R_IFUNWC=R14IFUNWC ;
R_IFWCMP=R14IFWCMP ;
R_IGXFR=R14IGXFR ;
R_IIRAW=R14IIRAW ;
R_IIRAWY1=R14IIRAWY1 ;
/* Empty map cell for: R_IMRC        variable wave = 14*/ ;
/* Empty map cell for: R_IMRC20      variable wave = 14*/ ;
/* Empty map cell for: R_INHER       variable wave = 14*/ ;
R_INHPE=R14INHPE ;
R_INHPFN=R14INHPFN ;
R_INHPNFN=R14INHPNFN ;
R_INHPPN=R14INHPPN ;
R_INHPTN=R14INHPTN ;
R_INHPUN=R14INHPUN ;
R_INLBRF=R14INLBRF ;
R_IPEN=R14IPEN ;
R_IPENA=R14IPENA ;
R_ISDI=R14ISDI ;
R_ISRET=R14ISRET ;
R_ISSDI=R14ISSDI ;
R_ISSI=R14ISSI ;
R_IUNEM=R14IUNEM ;
R_IUNWC=R14IUNWC ;
R_IWBEG=R14IWBEG ;
/* Empty map cell for: R_IWBEGF      variable wave = 14*/ ;
R_IWCMP=R14IWCMP ;
R_IWEND=R14IWEND ;
/* Empty map cell for: R_IWENDF      variable wave = 14*/ ;
R_IWENDM=R14IWENDM ;
R_IWENDY=R14IWENDY ;
R_IWMID=R14IWMID ;
R_IWMIDF=R14IWMIDF ;
R_IWSTAT=R14IWSTAT ;
R_JCIND=R14JCIND ;
R_JCINDB=R14JCINDB ;
R_JCINDC=R14JCINDC ;
R_JCOCC=R14JCOCC ;
R_JCOCCA=R14JCOCCA ;
R_JCOCCB=R14JCOCCB ;
R_JCOCCC=R14JCOCCC ;
R_JCPEN=R14JCPEN ;
/* Empty map cell for: R_JCPENF      variable wave = 14*/ ;
R_JCTEN=R14JCTEN ;
R_JHOUR2=R14JHOUR2 ;
R_JHOURS=R14JHOURS ;
R_JJOBS=R14JJOBS ;
R_JLASTM=R14JLASTM ;
R_JLASTY=R14JLASTY ;
R_JLIFT=R14JLIFT ;
R_JLIND=R14JLIND ;
R_JLINDB=R14JLINDB ;
R_JLINDC=R14JLINDC ;
R_JLMIS=R14JLMIS ;
R_JLOCC=R14JLOCC ;
R_JLOCCA=R14JLOCCA ;
R_JLOCCB=R14JLOCCB ;
R_JLOCCC=R14JLOCCC ;
R_JLTEN=R14JLTEN ;
R_JLTENF=R14JLTENF ;
R_JMISS=R14JMISS ;
R_JNJOB=R14JNJOB ;
R_JNJOB5=R14JNJOB5 ;
/* Empty map cell for: R1_JOG        variable wave = 14*/ ;
/* Empty map cell for: R2_JOG        variable wave = 14*/ ;
R_JOG=R14JOG ;
R_JOGA=R14JOGA ;
/* Empty map cell for: R_JOGW        variable wave = 14*/ ;
R_JPHYS=R14JPHYS ;
R_JSIGHT=R14JSIGHT ;
R_JSTOOP=R14JSTOOP ;
R_JSTRES=R14JSTRES ;
R_JWEEK2=R14JWEEK2 ;
R_JWEEKS=R14JWEEKS ;
R_JYEARM=R14JYEARM ;
R_JYEARS=R14JYEARS ;
R_LBAGR=R14LBAGR ;
R_LBASSISTPRB=R14LBASSISTPRB ;
R_LBCOMP=R14LBCOMP ;
R_LBCON10=R14LBCON10 ;
R_LBCON5=R14LBCON5 ;
R_LBELIG=R14LBELIG ;
R_LBEXT=R14LBEXT ;
R_LBFAMDRUGPRB=R14LBFAMDRUGPRB ;
R_LBFAMHLTHPRB=R14LBFAMHLTHPRB ;
R_LBFINPRB=R14LBFINPRB ;
R_LBHLTHPRB=R14LBHLTHPRB ;
R_LBHOUSEPRB=R14LBHOUSEPRB ;
R_LBLONELY11=R14LBLONELY11 ;
R_LBLONELY3=R14LBLONELY3 ;
R_LBNEGAFFECT=R14LBNEGAFFECT ;
/* Empty map cell for: R_LBNEGAFFECT6variable wave = 14*/ ;
R_LBNEUR=R14LBNEUR ;
R_LBONCHRSTR=R14LBONCHRSTR ;
R_LBOPEN=R14LBOPEN ;
R_LBPOSAFFECT=R14LBPOSAFFECT ;
/* Empty map cell for: R_LBPOSAFFECT6variable wave = 14*/ ;
R_LBRF=R14LBRF ;
R_LBRFH=R14LBRFH ;
R_LBRFY=R14LBRFY ;
R_LBRLTNSHPRB=R14LBRLTNSHPRB ;
R_LBSATCITY=R14LBSATCITY ;
R_LBSATFAM=R14LBSATFAM ;
R_LBSATFIN=R14LBSATFIN ;
R_LBSATHLTH=R14LBSATHLTH ;
R_LBSATHOME=R14LBSATHOME ;
R_LBSATINC=R14LBSATINC ;
R_LBSATLEISURE=R14LBSATLEISURE ;
/* Empty map cell for: R_LBSATLIFE   variable wave = 14*/ ;
R_LBSATWLF=R14LBSATWLF ;
R_LBWGTR=R14LBWGTR ;
R_LBWORKPRB=R14LBWORKPRB ;
R_LGMUSA=R14LGMUSA ;
/* Empty map cell for: R_LGMUSW      variable wave = 14*/ ;
/* Empty map cell for: R_LHTACT      variable wave = 14*/ ;
R_LIFEIN=R14LIFEIN ;
/* Empty map cell for: R1_LIFT       variable wave = 14*/ ;
/* Empty map cell for: R2_LIFT       variable wave = 14*/ ;
R_LIFT=R14LIFT ;
R_LIFTA=R14LIFTA ;
/* Empty map cell for: R_LIFTW       variable wave = 14*/ ;
R_LIV10=R14LIV10 ;
R_LIV10A=R14LIV10A ;
R_LIV10P=R14LIV10P ;
R_LIV10R=R14LIV10R ;
R_LIV75=R14LIV75 ;
R_LIV75C=R14LIV75C ;
R_LIV75F=R14LIV75F ;
R_LIV75P=R14LIV75P ;
R_LIV75R=R14LIV75R ;
/* Empty map cell for: R_LIV85       variable wave = 14*/ ;
/* Empty map cell for: R_LIV85C      variable wave = 14*/ ;
/* Empty map cell for: R_LIV85F      variable wave = 14*/ ;
/* Empty map cell for: R_LIV85P      variable wave = 14*/ ;
/* Empty map cell for: R_LIV85R      variable wave = 14*/ ;
R_LIV8XC=R14LIV8XC ;
R_LIV8XF=R14LIV8XF ;
R_LIVBRO=R14LIVBRO ;
R_LIVPAR=R14LIVPAR ;
R_LIVSIB=R14LIVSIB ;
R_LIVSIS=R14LIVSIS ;
R_LOST=R14LOST ;
/* Empty map cell for: R_LTACTF      variable wave = 14*/ ;
/* Empty map cell for: R_LTACTN      variable wave = 14*/ ;
/* Empty map cell for: R_LTACTP      variable wave = 14*/ ;
R_LTACTX=R14LTACTX ;
R_LTCPRM=R14LTCPRM ;
R_LUNG=R14LUNG ;
R_LUNGE=R14LUNGE ;
R_LUNGF=R14LUNGF ;
R_LUNGQ=R14LUNGQ ;
R_LUNGS=R14LUNGS ;
R_MAMMOG=R14MAMMOG ;
/* Empty map cell for: R1_MAP        variable wave = 14*/ ;
/* Empty map cell for: R2_MAP        variable wave = 14*/ ;
R_MAP=R14MAP ;
R_MAPA=R14MAPA ;
/* Empty map cell for: R_MAPW        variable wave = 14*/ ;
R_MCURLN=R14MCURLN ;
/* Empty map cell for: R_MCWV        variable wave = 14*/ ;
/* Empty map cell for: R_MCWVW       variable wave = 14*/ ;
R_MDACTX=R14MDACTX ;
R_MDIV=R14MDIV ;
R_MEALS=R14MEALS ;
R_MEALSA=R14MEALSA ;
R_MEALSH=R14MEALSH ;
/* Empty map cell for: R_MEALSR      variable wave = 14*/ ;
/* Empty map cell for: R2_MEDS       variable wave = 14*/ ;
R_MEDS=R14MEDS ;
R_MEDSA=R14MEDSA ;
R_MEDSH=R14MEDSH ;
/* Empty map cell for: R_MEDSR       variable wave = 14*/ ;
/* Empty map cell for: R_MEMRY       variable wave = 14*/ ;
/* Empty map cell for: R_MEMRYE      variable wave = 14*/ ;
/* Empty map cell for: R_MEMRYF      variable wave = 14*/ ;
/* Empty map cell for: R_MEMRYQ      variable wave = 14*/ ;
/* Empty map cell for: R_MEMRYS      variable wave = 14*/ ;
R_MEND=R14MEND ;
R_MLEN=R14MLEN ;
R_MLENM=R14MLENM ;
R_MNEV=R14MNEV ;
/* Empty map cell for: R_MO          variable wave = 14*/ ;
R_MOBILA=R14MOBILA ;
/* Empty map cell for: R_MOBILW      variable wave = 14*/ ;
R_MOMAGE=R14MOMAGE ;
R_MOMLIV=R14MOMLIV ;
/* Empty map cell for: R2_MONEY      variable wave = 14*/ ;
R_MONEY=R14MONEY ;
R_MONEYA=R14MONEYA ;
R_MONEYH=R14MONEYH ;
/* Empty map cell for: R_MONEYR      variable wave = 14*/ ;
R_MPART=R14MPART ;
R_MRCT=R14MRCT ;
R_MRPREM=R14MRPREM ;
R_MSTAT=R14MSTAT ;
R_MSTATF=R14MSTATF ;
R_MSTATH=R14MSTATH ;
/* Empty map cell for: R_MSTOT       variable wave = 14*/ ;
R_MWID=R14MWID ;
R_NHMDAY=R14NHMDAY ;
R_NHMLIV=R14NHMLIV ;
R_NHMMVM=R14NHMMVM ;
R_NHMMVY=R14NHMMVY ;
/* Empty map cell for: R_NOTICS      variable wave = 14*/ ;
/* Empty map cell for: R_NOVOC       variable wave = 14*/ ;
R_NRSHOM=R14NRSHOM ;
R_NRSNIT=R14NRSNIT ;
R_NRSTIM=R14NRSTIM ;
/* Empty map cell for: R_NSSCRE      variable wave = 14*/ ;
/* Empty map cell for: R_NSSCSE      variable wave = 14*/ ;
R_OOPMD=R14OOPMD ;
R_OOPMDF=R14OOPMDF ;
R_OOPMDO=R14OOPMDO ;
R_OOPMDOF=R14OOPMDOF ;
R_OUTPT=R14OUTPT ;
R_PAPSM=R14PAPSM ;
/* Empty map cell for: R_PARTD       variable wave = 14*/ ;
R_PENCT=R14PENCT ;
R_PENIC1=R14PENIC1 ;
R_PENIC2=R14PENIC2 ;
R_PENINC=R14PENINC ;
R_PENI_N=R14PENI_N ;
R_PEXIT=R14PEXIT ;
/* Empty map cell for: R2_PHONE      variable wave = 14*/ ;
R_PHONE=R14PHONE ;
R_PHONEA=R14PHONEA ;
R_PHONEH=R14PHONEH ;
/* Empty map cell for: R_PHONER      variable wave = 14*/ ;
R_PMBMI=R14PMBMI ;
R_PMHGHT=R14PMHGHT ;
R_PMHGHTS=R14PMHGHTS ;
R_PMWAIST=R14PMWAIST ;
R_PMWAISTC=R14PMWAISTC ;
R_PMWGHT=R14PMWGHT ;
R_PMWGHTF=R14PMWGHTF ;
R_PMWGHTS=R14PMWGHTS ;
R_PNHM5Y=R14PNHM5Y ;
R_PRCHMEM=R14PRCHMEM ;
/* Empty map cell for: R_PRES        variable wave = 14*/ ;
R_PRMEM=R14PRMEM ;
R_PROST=R14PROST ;
R_PROXY=R14PROXY ;
R_PRPCNT=R14PRPCNT ;
R_PRPRM1=R14PRPRM1 ;
R_PRPRM2=R14PRPRM2 ;
R_PRPRM3=R14PRPRM3 ;
R_PRSRC1=R14PRSRC1 ;
R_PRSRC2=R14PRSRC2 ;
R_PRSRC3=R14PRSRC3 ;
/* Empty map cell for: R_PSTMEM      variable wave = 14*/ ;
R_PSYCH=R14PSYCH ;
R_PSYCHE=R14PSYCHE ;
R_PSYCHF=R14PSYCHF ;
R_PSYCHQ=R14PSYCHQ ;
R_PSYCHS=R14PSYCHS ;
R_PTYP1=R14PTYP1 ;
R_PTYP2=R14PTYP2 ;
R_PTYP3=R14PTYP3 ;
R_PTYP4=R14PTYP4 ;
R_PTYPD1=R14PTYPD1 ;
R_PTYPD2=R14PTYPD2 ;
R_PTYPD3=R14PTYPD3 ;
R_PTYPD4=R14PTYPD4 ;
R_PTYPF1=R14PTYPF1 ;
R_PTYPF2=R14PTYPF2 ;
R_PTYPF3=R14PTYPF3 ;
R_PTYPF4=R14PTYPF4 ;
R_PUFF=R14PUFF ;
R_PUFFPOS=R14PUFFPOS ;
/* Empty map cell for: R1_PUSH       variable wave = 14*/ ;
/* Empty map cell for: R2_PUSH       variable wave = 14*/ ;
R_PUSH=R14PUSH ;
R_PUSHA=R14PUSHA ;
/* Empty map cell for: R_PUSHW       variable wave = 14*/ ;
R_RETDTWV=R14RETDTWV ;
R_RETEMP=R14RETEMP ;
/* Empty map cell for: R_RETINC      variable wave = 14*/ ;
/* Empty map cell for: R_RETLIV      variable wave = 14*/ ;
R_RETMON=R14RETMON ;
R_RETSAT=R14RETSAT ;
/* Empty map cell for: R_RETWLT      variable wave = 14*/ ;
/* Empty map cell for: R_RETWRK      variable wave = 14*/ ;
/* Empty map cell for: R_RETWSP      variable wave = 14*/ ;
R_RETYR=R14RETYR ;
/* Empty map cell for: R_RISK        variable wave = 14*/ ;
/* Empty map cell for: R_RISK6       variable wave = 14*/ ;
R_RPLNYA=R14RPLNYA ;
R_RPLNYR=R14RPLNYR ;
R_RXPREM=R14RXPREM ;
R_RYRCMP=R14RYRCMP ;
R_SADLF=R14SADLF ;
R_SAMEJOB=R14SAMEJOB ;
R_SAMEMP=R14SAMEMP ;
R_SAYRET=R14SAYRET ;
/* Empty map cell for: R_SCIS        variable wave = 14*/ ;
R_SDIAPL=R14SDIAPL ;
R_SDIAPLM=R14SDIAPLM ;
R_SDIAPLY=R14SDIAPLY ;
R_SDIAPP=R14SDIAPP ;
R_SDIAPPM=R14SDIAPPM ;
R_SDIAPPY=R14SDIAPPY ;
R_SDIDEN=R14SDIDEN ;
R_SDIREC=R14SDIREC ;
R_SDIRECM=R14SDIRECM ;
R_SDIRECY=R14SDIRECY ;
R_SDISTP=R14SDISTP ;
R_SDISTPM=R14SDISTPM ;
R_SDISTPY=R14SDISTPY ;
/* Empty map cell for: R_SER7        variable wave = 14*/ ;
R_SHLT=R14SHLT ;
R_SHLTC=R14SHLTC ;
R_SHLTCF=R14SHLTCF ;
R_SHOP=R14SHOP ;
R_SHOPA=R14SHOPA ;
R_SHOPH=R14SHOPH ;
/* Empty map cell for: R_SHOPR       variable wave = 14*/ ;
/* Empty map cell for: R1_SIT        variable wave = 14*/ ;
/* Empty map cell for: R2_SIT        variable wave = 14*/ ;
R_SIT=R14SIT ;
R_SITA=R14SITA ;
/* Empty map cell for: R_SITW        variable wave = 14*/ ;
R_SLEEP=R14SLEEP ;
R_SLEEPE=R14SLEEPE ;
R_SLEEPQ=R14SLEEPQ ;
R_SLEEPR=R14SLEEPR ;
R_SLEEPS=R14SLEEPS ;
/* Empty map cell for: R_SLEEPX      variable wave = 14*/ ;
R_SLFEMP=R14SLFEMP ;
/* Empty map cell for: R_SLFMEM      variable wave = 14*/ ;
R_SMOKEN=R14SMOKEN ;
R_SMOKEV=R14SMOKEV ;
R_SPCFAC=R14SPCFAC ;
/* Empty map cell for: R_SSAPL       variable wave = 14*/ ;
/* Empty map cell for: R_SSAPLM      variable wave = 14*/ ;
/* Empty map cell for: R_SSAPLY      variable wave = 14*/ ;
/* Empty map cell for: R_SSAPP       variable wave = 14*/ ;
/* Empty map cell for: R_SSAPPM      variable wave = 14*/ ;
/* Empty map cell for: R_SSAPPY      variable wave = 14*/ ;
/* Empty map cell for: R_SSDEN       variable wave = 14*/ ;
R_SSDI=R14SSDI ;
R_SSIAPL=R14SSIAPL ;
R_SSIAPLM=R14SSIAPLM ;
R_SSIAPLY=R14SSIAPLY ;
R_SSIAPP=R14SSIAPP ;
R_SSIAPPM=R14SSIAPPM ;
R_SSIAPPY=R14SSIAPPY ;
R_SSIDEN=R14SSIDEN ;
R_SSIREC=R14SSIREC ;
R_SSIRECM=R14SSIRECM ;
R_SSIRECY=R14SSIRECY ;
R_SSISTP=R14SSISTP ;
R_SSISTPM=R14SSISTPM ;
R_SSISTPY=R14SSISTPY ;
/* Empty map cell for: R_SSREC       variable wave = 14*/ ;
/* Empty map cell for: R_SSRECM      variable wave = 14*/ ;
/* Empty map cell for: R_SSRECY      variable wave = 14*/ ;
/* Empty map cell for: R_SSSTP       variable wave = 14*/ ;
/* Empty map cell for: R_SSSTPM      variable wave = 14*/ ;
/* Empty map cell for: R_SSSTPY      variable wave = 14*/ ;
/* Empty map cell for: R_SSWRER      variable wave = 14*/ ;
/* Empty map cell for: R_SSWRNR      variable wave = 14*/ ;
/* Empty map cell for: R_SSWRXA      variable wave = 14*/ ;
/* Empty map cell for: R_SSWSER      variable wave = 14*/ ;
/* Empty map cell for: R_SSWSNR      variable wave = 14*/ ;
/* Empty map cell for: R_SSWSXA      variable wave = 14*/ ;
/* Empty map cell for: R_STATUS      variable wave = 14*/ ;
/* Empty map cell for: R1_STOOP      variable wave = 14*/ ;
/* Empty map cell for: R2_STOOP      variable wave = 14*/ ;
R_STOOP=R14STOOP ;
R_STOOPA=R14STOOPA ;
/* Empty map cell for: R_STOOPW      variable wave = 14*/ ;
R_STROK=R14STROK ;
R_STROKE=R14STROKE ;
R_STROKF=R14STROKF ;
R_STROKQ=R14STROKQ ;
R_STROKS=R14STROKS ;
R_TIMWLK=R14TIMWLK ;
R_TIMWLKA=R14TIMWLKA ;
/* Empty map cell for: R_TLIPRM      variable wave = 14*/ ;
/* Empty map cell for: R2_TOILT      variable wave = 14*/ ;
R_TOILT=R14TOILT ;
R_TOILTA=R14TOILTA ;
/* Empty map cell for: R2_TOILTH     variable wave = 14*/ ;
R_TOILTH=R14TOILTH ;
/* Empty map cell for: R_TOTMBF      variable wave = 14*/ ;
/* Empty map cell for: R_TOTMBI      variable wave = 14*/ ;
/* Empty map cell for: R_TOTMD       variable wave = 14*/ ;
/* Empty map cell for: R_TOTMDF      variable wave = 14*/ ;
/* Empty map cell for: R_TR20        variable wave = 14*/ ;
/* Empty map cell for: R_TR40        variable wave = 14*/ ;
R_TYLTC=R14TYLTC ;
/* Empty map cell for: R_ULCER       variable wave = 14*/ ;
R_UNEMP=R14UNEMP ;
R_UNION=R14UNION ;
R_UNIONF=R14UNIONF ;
/* Empty map cell for: R_VGACTF      variable wave = 14*/ ;
/* Empty map cell for: R_VGACTN      variable wave = 14*/ ;
/* Empty map cell for: R_VGACTP      variable wave = 14*/ ;
R_VGACTX=R14VGACTX ;
/* Empty map cell for: R_VIGACT      variable wave = 14*/ ;
/* Empty map cell for: R_VOCAB       variable wave = 14*/ ;
/* Empty map cell for: R_VP          variable wave = 14*/ ;
/* Empty map cell for: R1_WALK1      variable wave = 14*/ ;
/* Empty map cell for: R2_WALK1      variable wave = 14*/ ;
R_WALK1=R14WALK1 ;
R_WALK1A=R14WALK1A ;
/* Empty map cell for: R_WALK1W      variable wave = 14*/ ;
/* Empty map cell for: R1_WALKR      variable wave = 14*/ ;
/* Empty map cell for: R2_WALKR      variable wave = 14*/ ;
R_WALKR=R14WALKR ;
R_WALKRA=R14WALKRA ;
R_WALKRE=R14WALKRE ;
/* Empty map cell for: R2_WALKRH     variable wave = 14*/ ;
R_WALKRH=R14WALKRH ;
/* Empty map cell for: R_WALKRW      variable wave = 14*/ ;
/* Empty map cell for: R1_WALKS      variable wave = 14*/ ;
/* Empty map cell for: R2_WALKS      variable wave = 14*/ ;
R_WALKS=R14WALKS ;
R_WALKSA=R14WALKSA ;
/* Empty map cell for: R_WALKSW      variable wave = 14*/ ;
R_WANDER=R14WANDER ;
R_WEIGHT=R14WEIGHT ;
R_WGFHR=R14WGFHR ;
R_WGFWK=R14WGFWK ;
R_WGIHR=R14WGIHR ;
R_WGIWK=R14WGIWK ;
/* Empty map cell for: R_WHAPPX      variable wave = 14*/ ;
R_WHAPPY=R14WHAPPY ;
R_WLIPRM=R14WLIPRM ;
R_WORK=R14WORK ;
R_WORK2=R14WORK2 ;
R_WORK62=R14WORK62 ;
R_WORK62F=R14WORK62F ;
R_WORK65=R14WORK65 ;
R_WORK65F=R14WORK65F ;
R_WORK70=R14WORK70 ;
R_WORK70A=R14WORK70A ;
R_WORK70AF=R14WORK70AF ;
R_WORK70F=R14WORK70F ;
/* Empty map cell for: R_WORKLM      variable wave = 14*/ ;
R_WTCRNH=R14WTCRNH ;
R_WTHH=R14WTHH ;
R_WTRESP=R14WTRESP ;
R_WTR_NH=R14WTR_NH ;
/* Empty map cell for: R_YR          variable wave = 14*/ ;
if inw=1 then output ;
%put --- Rlong table ;
%initvars ;
%put ---- Rlong table ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
WAVE_NUMBER=15 ;
H_HHIDC=H15HHIDC ;
SUBHH= substr(H_HHIDC,7)     /* --- Derived variable  */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
INW=INW15 ;
WAVE_NAME=  'hrs_wave'||strip(put(wave_number,3.))     /* --- Derived variable  */ ;
CYEAR='yr2020' ;
/* --- RAND variable:HACOHORT  included */ ;
studyyr= hrs_studyyr(wave_number,
hacohort)     /* --- Derived variable  */ ;
H_HHID=H15HHID ;
S_HHIDPN=S15HHIDPN ;
/* Empty map cell for: R_ACGTOT      variable wave = 15*/ ;
R_ADL5A=R15ADL5A ;
R_ADL5H=R15ADL5H ;
R_ADL6A=R15ADL6A ;
R_ADL6H=R15ADL6H ;
/* Empty map cell for: R_ADLR10      variable wave = 15*/ ;
/* Empty map cell for: R_ADLW        variable wave = 15*/ ;
R_AGEM_B=R15AGEM_B ;
R_AGEM_E=R15AGEM_E ;
R_AGEM_M=R15AGEM_M ;
R_AGEY_B=R15AGEY_B ;
R_AGEY_E=R15AGEY_E ;
R_AGEY_M=R15AGEY_M ;
/* Empty map cell for: R_AIMR10      variable wave = 15*/ ;
R_ALONE=R15ALONE ;
R_ALZHE=R15ALZHE ;
R_ALZHEE=R15ALZHEE ;
R_ALZHEF=R15ALZHEF ;
R_ALZHEQ=R15ALZHEQ ;
R_ALZHES=R15ALZHES ;
/* Empty map cell for: R_AMSTOT      variable wave = 15*/ ;
R_ANS3PQ=R15ANS3PQ ;
/* Empty map cell for: R1_ARMS       variable wave = 15*/ ;
/* Empty map cell for: R2_ARMS       variable wave = 15*/ ;
R_ARMS=R15ARMS ;
R_ARMSA=R15ARMSA ;
/* Empty map cell for: R_ARMSW       variable wave = 15*/ ;
R_ARTHR=R15ARTHR ;
R_ARTHRE=R15ARTHRE ;
R_ARTHRF=R15ARTHRF ;
R_ARTHRQ=R15ARTHRQ ;
R_ARTHRS=R15ARTHRS ;
/* Empty map cell for: R_ATR20       variable wave = 15*/ ;
R_BACK=R15BACK ;
/* Empty map cell for: R_BALFUL      variable wave = 15*/ ;
/* Empty map cell for: R_BALFULC     variable wave = 15*/ ;
/* Empty map cell for: R_BALFULT     variable wave = 15*/ ;
/* Empty map cell for: R_BALSBS      variable wave = 15*/ ;
/* Empty map cell for: R_BALSBSC     variable wave = 15*/ ;
/* Empty map cell for: R_BALSEMI     variable wave = 15*/ ;
/* Empty map cell for: R_BALSEMIC    variable wave = 15*/ ;
/* Empty map cell for: R1_BATH       variable wave = 15*/ ;
/* Empty map cell for: R2_BATH       variable wave = 15*/ ;
R_BATH=R15BATH ;
R_BATHA=R15BATHA ;
/* Empty map cell for: R2_BATHH      variable wave = 15*/ ;
R_BATHH=R15BATHH ;
/* Empty map cell for: R_BATHW       variable wave = 15*/ ;
/* Empty map cell for: R1_BED        variable wave = 15*/ ;
/* Empty map cell for: R2_BED        variable wave = 15*/ ;
R_BED=R15BED ;
R_BEDA=R15BEDA ;
R_BEDE=R15BEDE ;
/* Empty map cell for: R2_BEDH       variable wave = 15*/ ;
R_BEDH=R15BEDH ;
/* Empty map cell for: R_BEDW        variable wave = 15*/ ;
R_BEQ100=R15BEQ100 ;
R_BEQ10K=R15BEQ10K ;
R_BEQ500=R15BEQ500 ;
R_BEQANY=R15BEQANY ;
/* Empty map cell for: R_BEQLRG      variable wave = 15*/ ;
R_BMI=R15BMI ;
/* Empty map cell for: R_BPDIA       variable wave = 15*/ ;
/* Empty map cell for: R_BPPOS       variable wave = 15*/ ;
/* Empty map cell for: R_BPPULS      variable wave = 15*/ ;
/* Empty map cell for: R_BPSYS       variable wave = 15*/ ;
/* Empty map cell for: R_BREAST      variable wave = 15*/ ;
/* Empty map cell for: R_BWC20       variable wave = 15*/ ;
/* Empty map cell for: R_BWC86       variable wave = 15*/ ;
/* Empty map cell for: R_CACT        variable wave = 15*/ ;
/* Empty map cell for: R1_CALC       variable wave = 15*/ ;
/* Empty map cell for: R2_CALC       variable wave = 15*/ ;
/* Empty map cell for: R_CALCA       variable wave = 15*/ ;
/* Empty map cell for: R_CALCW       variable wave = 15*/ ;
R_CANCR=R15CANCR ;
R_CANCRE=R15CANCRE ;
R_CANCRF=R15CANCRF ;
R_CANCRQ=R15CANCRQ ;
R_CANCRS=R15CANCRS ;
R_CENDIV=R15CENDIV ;
R_CENREG=R15CENREG ;
R_CESD=R15CESD ;
R_CESDM=R15CESDM ;
/* Empty map cell for: R1_CHAIR      variable wave = 15*/ ;
/* Empty map cell for: R2_CHAIR      variable wave = 15*/ ;
R_CHAIR=R15CHAIR ;
R_CHAIRA=R15CHAIRA ;
/* Empty map cell for: R_CHAIRW      variable wave = 15*/ ;
R_CHOLST=R15CHOLST ;
/* Empty map cell for: R_CLAIMED     variable wave = 15*/ ;
/* Empty map cell for: R1_CLIM1      variable wave = 15*/ ;
/* Empty map cell for: R2_CLIM1      variable wave = 15*/ ;
R_CLIM1=R15CLIM1 ;
R_CLIM1A=R15CLIM1A ;
/* Empty map cell for: R_CLIM1W      variable wave = 15*/ ;
/* Empty map cell for: R1_CLIMS      variable wave = 15*/ ;
/* Empty map cell for: R2_CLIMS      variable wave = 15*/ ;
R_CLIMS=R15CLIMS ;
R_CLIMSA=R15CLIMSA ;
/* Empty map cell for: R_CLIMSW      variable wave = 15*/ ;
/* Empty map cell for: R_COGTOT      variable wave = 15*/ ;
/* Empty map cell for: R_COMP        variable wave = 15*/ ;
/* Empty map cell for: R_COMPW       variable wave = 15*/ ;
R_CONDE=R15CONDE ;
R_CONDEF=R15CONDEF ;
R_CONDS=R15CONDS ;
R_CONDSF=R15CONDSF ;
R_CONDSP=R15CONDSP ;
R_COVR=R15COVR ;
R_COVRT=R15COVRT ;
R_COVS=R15COVS ;
R_DADAGE=R15DADAGE ;
R_DADLIV=R15DADLIV ;
R_DCBAL1=R15DCBAL1 ;
R_DCBAL2=R15DCBAL2 ;
R_DCBAL3=R15DCBAL3 ;
R_DCBAL4=R15DCBAL4 ;
R_DCBENE1=R15DCBENE1 ;
R_DCBENE2=R15DCBENE2 ;
R_DCBENE3=R15DCBENE3 ;
R_DCBENE4=R15DCBENE4 ;
R_DCCONT1=R15DCCONT1 ;
R_DCCONT2=R15DCCONT2 ;
R_DCCONT3=R15DCCONT3 ;
R_DCCONT4=R15DCCONT4 ;
R_DCMODE1=R15DCMODE1 ;
R_DCMODE2=R15DCMODE2 ;
R_DCMODE3=R15DCMODE3 ;
R_DCMODE4=R15DCMODE4 ;
R_DCPCT1=R15DCPCT1 ;
R_DCPCT2=R15DCPCT2 ;
R_DCPCT3=R15DCPCT3 ;
R_DCPCT4=R15DCPCT4 ;
R_DEMEN=R15DEMEN ;
R_DEMENE=R15DEMENE ;
R_DEMENF=R15DEMENF ;
R_DEMENQ=R15DEMENQ ;
R_DEMENS=R15DEMENS ;
R_DENTST=R15DENTST ;
R_DEPRES=R15DEPRES ;
/* Empty map cell for: R_DEPREX      variable wave = 15*/ ;
R_DIAB=R15DIAB ;
R_DIABE=R15DIABE ;
R_DIABF=R15DIABF ;
R_DIABQ=R15DIABQ ;
R_DIABS=R15DIABS ;
/* Empty map cell for: R1_DIME       variable wave = 15*/ ;
/* Empty map cell for: R2_DIME       variable wave = 15*/ ;
R_DIME=R15DIME ;
R_DIMEA=R15DIMEA ;
/* Empty map cell for: R_DIMEW       variable wave = 15*/ ;
/* Empty map cell for: R_DLRC        variable wave = 15*/ ;
/* Empty map cell for: R_DLRC20      variable wave = 15*/ ;
R_DOCTIM=R15DOCTIM ;
R_DOCTOR=R15DOCTOR ;
/* Empty map cell for: R1_DRESS      variable wave = 15*/ ;
/* Empty map cell for: R2_DRESS      variable wave = 15*/ ;
R_DRESS=R15DRESS ;
R_DRESSA=R15DRESSA ;
/* Empty map cell for: R2_DRESSH     variable wave = 15*/ ;
R_DRESSH=R15DRESSH ;
/* Empty map cell for: R_DRESSW      variable wave = 15*/ ;
R_DRINK=R15DRINK ;
R_DRINKD=R15DRINKD ;
R_DRINKN=R15DRINKN ;
/* Empty map cell for: R_DRINKR      variable wave = 15*/ ;
R_DRUGS=R15DRUGS ;
R_DSIAMT=R15DSIAMT ;
R_DSSAMT=R15DSSAMT ;
R_DSTAT=R15DSTAT ;
/* Empty map cell for: R_DW          variable wave = 15*/ ;
/* Empty map cell for: R_DY          variable wave = 15*/ ;
/* Empty map cell for: R1_EAT        variable wave = 15*/ ;
/* Empty map cell for: R2_EAT        variable wave = 15*/ ;
R_EAT=R15EAT ;
R_EATA=R15EATA ;
/* Empty map cell for: R2_EATH       variable wave = 15*/ ;
R_EATH=R15EATH ;
/* Empty map cell for: R_EATW        variable wave = 15*/ ;
R_EFFORT=R15EFFORT ;
/* Empty map cell for: R_EFFORX      variable wave = 15*/ ;
R_ENLIFE=R15ENLIFE ;
/* Empty map cell for: R_ENLIFX      variable wave = 15*/ ;
R_FAMR=R15FAMR ;
/* Empty map cell for: R_FBWC20      variable wave = 15*/ ;
/* Empty map cell for: R_FBWC86      variable wave = 15*/ ;
/* Empty map cell for: R_FCACT       variable wave = 15*/ ;
/* Empty map cell for: R_FDLRC       variable wave = 15*/ ;
/* Empty map cell for: R_FDW         variable wave = 15*/ ;
/* Empty map cell for: R_FDY         variable wave = 15*/ ;
/* Empty map cell for: R_FIMRC       variable wave = 15*/ ;
R_FINEA=R15FINEA ;
R_FINPLN=R15FINPLN ;
R_FINR=R15FINR ;
/* Empty map cell for: R_FLAG        variable wave = 15*/ ;
R_FLONE=R15FLONE ;
/* Empty map cell for: R_FLONEX      variable wave = 15*/ ;
R_FLUSHT=R15FLUSHT ;
/* Empty map cell for: R_FMO         variable wave = 15*/ ;
/* Empty map cell for: R_FPRES       variable wave = 15*/ ;
/* Empty map cell for: R_FPSTME      variable wave = 15*/ ;
R_FSAD=R15FSAD ;
/* Empty map cell for: R_FSADX       variable wave = 15*/ ;
/* Empty map cell for: R_FSCIS       variable wave = 15*/ ;
/* Empty map cell for: R_FSER7       variable wave = 15*/ ;
R_FSIZE=R15FSIZE ;
R_FSIZEF=R15FSIZEF ;
/* Empty map cell for: R_FSLFME      variable wave = 15*/ ;
/* Empty map cell for: R_FVOCAB      variable wave = 15*/ ;
/* Empty map cell for: R_FVP         variable wave = 15*/ ;
/* Empty map cell for: R_FYR         variable wave = 15*/ ;
R_GOING=R15GOING ;
/* Empty map cell for: R_GOINGX      variable wave = 15*/ ;
R_GOVMD=R15GOVMD ;
R_GOVMR=R15GOVMR ;
/* Empty map cell for: R_GOVOT       variable wave = 15*/ ;
R_GOVVA=R15GOVVA ;
R_GROSSA=R15GROSSA ;
/* Empty map cell for: R_GRP         variable wave = 15*/ ;
/* Empty map cell for: R_GRPDOM      variable wave = 15*/ ;
/* Empty map cell for: R_GRPL        variable wave = 15*/ ;
/* Empty map cell for: R_GRPPOS      variable wave = 15*/ ;
/* Empty map cell for: R_GRPR        variable wave = 15*/ ;
R_HALUC=R15HALUC ;
/* Empty map cell for: R_HDLR20      variable wave = 15*/ ;
R_HEART=R15HEART ;
R_HEARTE=R15HEARTE ;
R_HEARTF=R15HEARTF ;
R_HEARTQ=R15HEARTQ ;
R_HEARTS=R15HEARTS ;
R_HECOV1=R15HECOV1 ;
R_HECOV2=R15HECOV2 ;
R_HECOV3=R15HECOV3 ;
R_HEIGHT=R15HEIGHT ;
R_HENUM=R15HENUM ;
R_HERET=R15HERET ;
R_HERTR1=R15HERTR1 ;
R_HERTR2=R15HERTR2 ;
R_HERTR3=R15HERTR3 ;
R_HERTS1=R15HERTS1 ;
R_HERTS2=R15HERTS2 ;
R_HERTS3=R15HERTS3 ;
R_HESRC1=R15HESRC1 ;
R_HESRC2=R15HESRC2 ;
R_HESRC3=R15HESRC3 ;
R_HIBP=R15HIBP ;
R_HIBPE=R15HIBPE ;
R_HIBPF=R15HIBPF ;
R_HIBPQ=R15HIBPQ ;
R_HIBPS=R15HIBPS ;
R_HIGOV=R15HIGOV ;
R_HILTC=R15HILTC ;
/* Empty map cell for: R_HIMR20      variable wave = 15*/ ;
R_HIOTHP=R15HIOTHP ;
R_HLPDYSF=R15HLPDYSF ;
R_HLPDYSNF=R15HLPDYSNF ;
R_HLPDYSP=R15HLPDYSP ;
R_HLPDYST=R15HLPDYST ;
R_HLPDYSU=R15HLPDYSU ;
R_HLPHRSF=R15HLPHRSF ;
R_HLPHRSNF=R15HLPHRSNF ;
R_HLPHRSP=R15HLPHRSP ;
R_HLPHRST=R15HLPHRST ;
R_HLPHRSU=R15HLPHRSU ;
R_HLPPDFA=R15HLPPDFA ;
R_HLPPDFN=R15HLPPDFN ;
R_HLPPDNFA=R15HLPPDNFA ;
R_HLPPDNFN=R15HLPPDNFN ;
R_HLPPDTA=R15HLPPDTA ;
R_HLPPDTN=R15HLPPDTN ;
R_HLPRFN=R15HLPRFN ;
R_HLPRNFN=R15HLPRNFN ;
R_HLPRPN=R15HLPRPN ;
R_HLPRTN=R15HLPRTN ;
R_HLPRUN=R15HLPRUN ;
R_HLTC3=R15HLTC3 ;
/* Empty map cell for: R_HLTC5       variable wave = 15*/ ;
/* Empty map cell for: R_HLTC5F      variable wave = 15*/ ;
R_HLTHLM=R15HLTHLM ;
R_HOMCAR=R15HOMCAR ;
R_HOSP=R15HOSP ;
R_HSPNIT=R15HSPNIT ;
R_HSPTIM=R15HSPTIM ;
/* Empty map cell for: R_HSWRKF      variable wave = 15*/ ;
/* Empty map cell for: R_HTR40       variable wave = 15*/ ;
R_IADL5A=R15IADL5A ;
R_IADL5H=R15IADL5H ;
R_IANN=R15IANN ;
R_IEARN=R15IEARN ;
R_IFANN=R15IFANN ;
R_IFEARN=R15IFEARN ;
R_IFGXFR=R15IFGXFR ;
R_IFIRAW=R15IFIRAW ;
/* Empty map cell for: R_IFIRAWY1    variable wave = 15*/ ;
R_IFPEN=R15IFPEN ;
R_IFPENA=R15IFPENA ;
R_IFSDI=R15IFSDI ;
R_IFSRET=R15IFSRET ;
R_IFSSDI=R15IFSSDI ;
/* Empty map cell for: R_IFSSI       variable wave = 15*/ ;
R_IFUNEM=R15IFUNEM ;
R_IFUNWC=R15IFUNWC ;
R_IFWCMP=R15IFWCMP ;
R_IGXFR=R15IGXFR ;
R_IIRAW=R15IIRAW ;
R_IIRAWY1=R15IIRAWY1 ;
/* Empty map cell for: R_IMRC        variable wave = 15*/ ;
/* Empty map cell for: R_IMRC20      variable wave = 15*/ ;
/* Empty map cell for: R_INHER       variable wave = 15*/ ;
R_INHPE=R15INHPE ;
R_INHPFN=R15INHPFN ;
R_INHPNFN=R15INHPNFN ;
R_INHPPN=R15INHPPN ;
R_INHPTN=R15INHPTN ;
R_INHPUN=R15INHPUN ;
R_INLBRF=R15INLBRF ;
R_IPEN=R15IPEN ;
R_IPENA=R15IPENA ;
R_ISDI=R15ISDI ;
R_ISRET=R15ISRET ;
R_ISSDI=R15ISSDI ;
R_ISSI=R15ISSI ;
R_IUNEM=R15IUNEM ;
R_IUNWC=R15IUNWC ;
R_IWBEG=R15IWBEG ;
/* Empty map cell for: R_IWBEGF      variable wave = 15*/ ;
R_IWCMP=R15IWCMP ;
R_IWEND=R15IWEND ;
/* Empty map cell for: R_IWENDF      variable wave = 15*/ ;
R_IWENDM=R15IWENDM ;
R_IWENDY=R15IWENDY ;
R_IWMID=R15IWMID ;
R_IWMIDF=R15IWMIDF ;
R_IWSTAT=R15IWSTAT ;
R_JCIND=R15JCIND ;
R_JCINDB=R15JCINDB ;
R_JCINDC=R15JCINDC ;
R_JCOCC=R15JCOCC ;
R_JCOCCA=R15JCOCCA ;
R_JCOCCB=R15JCOCCB ;
R_JCOCCC=R15JCOCCC ;
R_JCPEN=R15JCPEN ;
/* Empty map cell for: R_JCPENF      variable wave = 15*/ ;
R_JCTEN=R15JCTEN ;
R_JHOUR2=R15JHOUR2 ;
R_JHOURS=R15JHOURS ;
R_JJOBS=R15JJOBS ;
R_JLASTM=R15JLASTM ;
R_JLASTY=R15JLASTY ;
R_JLIFT=R15JLIFT ;
R_JLIND=R15JLIND ;
R_JLINDB=R15JLINDB ;
R_JLINDC=R15JLINDC ;
R_JLMIS=R15JLMIS ;
R_JLOCC=R15JLOCC ;
R_JLOCCA=R15JLOCCA ;
R_JLOCCB=R15JLOCCB ;
R_JLOCCC=R15JLOCCC ;
R_JLTEN=R15JLTEN ;
R_JLTENF=R15JLTENF ;
R_JMISS=R15JMISS ;
R_JNJOB=R15JNJOB ;
R_JNJOB5=R15JNJOB5 ;
/* Empty map cell for: R1_JOG        variable wave = 15*/ ;
/* Empty map cell for: R2_JOG        variable wave = 15*/ ;
R_JOG=R15JOG ;
R_JOGA=R15JOGA ;
/* Empty map cell for: R_JOGW        variable wave = 15*/ ;
R_JPHYS=R15JPHYS ;
R_JSIGHT=R15JSIGHT ;
R_JSTOOP=R15JSTOOP ;
R_JSTRES=R15JSTRES ;
R_JWEEK2=R15JWEEK2 ;
R_JWEEKS=R15JWEEKS ;
R_JYEARM=R15JYEARM ;
R_JYEARS=R15JYEARS ;
R_LBAGR=R15LBAGR ;
R_LBASSISTPRB=R15LBASSISTPRB ;
R_LBCOMP=R15LBCOMP ;
R_LBCON10=R15LBCON10 ;
R_LBCON5=R15LBCON5 ;
R_LBELIG=R15LBELIG ;
R_LBEXT=R15LBEXT ;
R_LBFAMDRUGPRB=R15LBFAMDRUGPRB ;
R_LBFAMHLTHPRB=R15LBFAMHLTHPRB ;
R_LBFINPRB=R15LBFINPRB ;
R_LBHLTHPRB=R15LBHLTHPRB ;
R_LBHOUSEPRB=R15LBHOUSEPRB ;
R_LBLONELY11=R15LBLONELY11 ;
R_LBLONELY3=R15LBLONELY3 ;
R_LBNEGAFFECT=R15LBNEGAFFECT ;
/* Empty map cell for: R_LBNEGAFFECT6variable wave = 15*/ ;
R_LBNEUR=R15LBNEUR ;
R_LBONCHRSTR=R15LBONCHRSTR ;
R_LBOPEN=R15LBOPEN ;
R_LBPOSAFFECT=R15LBPOSAFFECT ;
/* Empty map cell for: R_LBPOSAFFECT6variable wave = 15*/ ;
R_LBRF=R15LBRF ;
R_LBRFH=R15LBRFH ;
R_LBRFY=R15LBRFY ;
R_LBRLTNSHPRB=R15LBRLTNSHPRB ;
R_LBSATCITY=R15LBSATCITY ;
R_LBSATFAM=R15LBSATFAM ;
R_LBSATFIN=R15LBSATFIN ;
R_LBSATHLTH=R15LBSATHLTH ;
R_LBSATHOME=R15LBSATHOME ;
R_LBSATINC=R15LBSATINC ;
R_LBSATLEISURE=R15LBSATLEISURE ;
/* Empty map cell for: R_LBSATLIFE   variable wave = 15*/ ;
R_LBSATWLF=R15LBSATWLF ;
/* Empty map cell for: R_LBWGTR      variable wave = 15*/ ;
R_LBWORKPRB=R15LBWORKPRB ;
R_LGMUSA=R15LGMUSA ;
/* Empty map cell for: R_LGMUSW      variable wave = 15*/ ;
/* Empty map cell for: R_LHTACT      variable wave = 15*/ ;
R_LIFEIN=R15LIFEIN ;
/* Empty map cell for: R1_LIFT       variable wave = 15*/ ;
/* Empty map cell for: R2_LIFT       variable wave = 15*/ ;
R_LIFT=R15LIFT ;
R_LIFTA=R15LIFTA ;
/* Empty map cell for: R_LIFTW       variable wave = 15*/ ;
R_LIV10=R15LIV10 ;
R_LIV10A=R15LIV10A ;
R_LIV10P=R15LIV10P ;
R_LIV10R=R15LIV10R ;
R_LIV75=R15LIV75 ;
R_LIV75C=R15LIV75C ;
R_LIV75F=R15LIV75F ;
R_LIV75P=R15LIV75P ;
R_LIV75R=R15LIV75R ;
/* Empty map cell for: R_LIV85       variable wave = 15*/ ;
/* Empty map cell for: R_LIV85C      variable wave = 15*/ ;
/* Empty map cell for: R_LIV85F      variable wave = 15*/ ;
/* Empty map cell for: R_LIV85P      variable wave = 15*/ ;
/* Empty map cell for: R_LIV85R      variable wave = 15*/ ;
R_LIV8XC=R15LIV8XC ;
R_LIV8XF=R15LIV8XF ;
R_LIVBRO=R15LIVBRO ;
R_LIVPAR=R15LIVPAR ;
R_LIVSIB=R15LIVSIB ;
R_LIVSIS=R15LIVSIS ;
R_LOST=R15LOST ;
/* Empty map cell for: R_LTACTF      variable wave = 15*/ ;
/* Empty map cell for: R_LTACTN      variable wave = 15*/ ;
/* Empty map cell for: R_LTACTP      variable wave = 15*/ ;
R_LTACTX=R15LTACTX ;
R_LTCPRM=R15LTCPRM ;
R_LUNG=R15LUNG ;
R_LUNGE=R15LUNGE ;
R_LUNGF=R15LUNGF ;
R_LUNGQ=R15LUNGQ ;
R_LUNGS=R15LUNGS ;
R_MAMMOG=R15MAMMOG ;
/* Empty map cell for: R1_MAP        variable wave = 15*/ ;
/* Empty map cell for: R2_MAP        variable wave = 15*/ ;
R_MAP=R15MAP ;
R_MAPA=R15MAPA ;
/* Empty map cell for: R_MAPW        variable wave = 15*/ ;
R_MCURLN=R15MCURLN ;
/* Empty map cell for: R_MCWV        variable wave = 15*/ ;
/* Empty map cell for: R_MCWVW       variable wave = 15*/ ;
R_MDACTX=R15MDACTX ;
R_MDIV=R15MDIV ;
R_MEALS=R15MEALS ;
R_MEALSA=R15MEALSA ;
R_MEALSH=R15MEALSH ;
/* Empty map cell for: R_MEALSR      variable wave = 15*/ ;
/* Empty map cell for: R2_MEDS       variable wave = 15*/ ;
R_MEDS=R15MEDS ;
R_MEDSA=R15MEDSA ;
R_MEDSH=R15MEDSH ;
/* Empty map cell for: R_MEDSR       variable wave = 15*/ ;
/* Empty map cell for: R_MEMRY       variable wave = 15*/ ;
/* Empty map cell for: R_MEMRYE      variable wave = 15*/ ;
/* Empty map cell for: R_MEMRYF      variable wave = 15*/ ;
/* Empty map cell for: R_MEMRYQ      variable wave = 15*/ ;
/* Empty map cell for: R_MEMRYS      variable wave = 15*/ ;
R_MEND=R15MEND ;
R_MLEN=R15MLEN ;
R_MLENM=R15MLENM ;
R_MNEV=R15MNEV ;
/* Empty map cell for: R_MO          variable wave = 15*/ ;
R_MOBILA=R15MOBILA ;
/* Empty map cell for: R_MOBILW      variable wave = 15*/ ;
R_MOMAGE=R15MOMAGE ;
R_MOMLIV=R15MOMLIV ;
/* Empty map cell for: R2_MONEY      variable wave = 15*/ ;
R_MONEY=R15MONEY ;
R_MONEYA=R15MONEYA ;
R_MONEYH=R15MONEYH ;
/* Empty map cell for: R_MONEYR      variable wave = 15*/ ;
R_MPART=R15MPART ;
R_MRCT=R15MRCT ;
R_MRPREM=R15MRPREM ;
R_MSTAT=R15MSTAT ;
R_MSTATF=R15MSTATF ;
R_MSTATH=R15MSTATH ;
/* Empty map cell for: R_MSTOT       variable wave = 15*/ ;
R_MWID=R15MWID ;
R_NHMDAY=R15NHMDAY ;
R_NHMLIV=R15NHMLIV ;
R_NHMMVM=R15NHMMVM ;
R_NHMMVY=R15NHMMVY ;
/* Empty map cell for: R_NOTICS      variable wave = 15*/ ;
/* Empty map cell for: R_NOVOC       variable wave = 15*/ ;
R_NRSHOM=R15NRSHOM ;
R_NRSNIT=R15NRSNIT ;
R_NRSTIM=R15NRSTIM ;
/* Empty map cell for: R_NSSCRE      variable wave = 15*/ ;
/* Empty map cell for: R_NSSCSE      variable wave = 15*/ ;
R_OOPMD=R15OOPMD ;
R_OOPMDF=R15OOPMDF ;
R_OOPMDO=R15OOPMDO ;
R_OOPMDOF=R15OOPMDOF ;
R_OUTPT=R15OUTPT ;
R_PAPSM=R15PAPSM ;
/* Empty map cell for: R_PARTD       variable wave = 15*/ ;
R_PENCT=R15PENCT ;
R_PENIC1=R15PENIC1 ;
R_PENIC2=R15PENIC2 ;
R_PENINC=R15PENINC ;
R_PENI_N=R15PENI_N ;
R_PEXIT=R15PEXIT ;
/* Empty map cell for: R2_PHONE      variable wave = 15*/ ;
R_PHONE=R15PHONE ;
R_PHONEA=R15PHONEA ;
R_PHONEH=R15PHONEH ;
/* Empty map cell for: R_PHONER      variable wave = 15*/ ;
/* Empty map cell for: R_PMBMI       variable wave = 15*/ ;
/* Empty map cell for: R_PMHGHT      variable wave = 15*/ ;
/* Empty map cell for: R_PMHGHTS     variable wave = 15*/ ;
/* Empty map cell for: R_PMWAIST     variable wave = 15*/ ;
/* Empty map cell for: R_PMWAISTC    variable wave = 15*/ ;
/* Empty map cell for: R_PMWGHT      variable wave = 15*/ ;
/* Empty map cell for: R_PMWGHTF     variable wave = 15*/ ;
/* Empty map cell for: R_PMWGHTS     variable wave = 15*/ ;
R_PNHM5Y=R15PNHM5Y ;
R_PRCHMEM=R15PRCHMEM ;
/* Empty map cell for: R_PRES        variable wave = 15*/ ;
R_PRMEM=R15PRMEM ;
R_PROST=R15PROST ;
R_PROXY=R15PROXY ;
R_PRPCNT=R15PRPCNT ;
R_PRPRM1=R15PRPRM1 ;
R_PRPRM2=R15PRPRM2 ;
R_PRPRM3=R15PRPRM3 ;
R_PRSRC1=R15PRSRC1 ;
R_PRSRC2=R15PRSRC2 ;
R_PRSRC3=R15PRSRC3 ;
/* Empty map cell for: R_PSTMEM      variable wave = 15*/ ;
R_PSYCH=R15PSYCH ;
R_PSYCHE=R15PSYCHE ;
R_PSYCHF=R15PSYCHF ;
R_PSYCHQ=R15PSYCHQ ;
R_PSYCHS=R15PSYCHS ;
R_PTYP1=R15PTYP1 ;
R_PTYP2=R15PTYP2 ;
R_PTYP3=R15PTYP3 ;
R_PTYP4=R15PTYP4 ;
R_PTYPD1=R15PTYPD1 ;
R_PTYPD2=R15PTYPD2 ;
R_PTYPD3=R15PTYPD3 ;
R_PTYPD4=R15PTYPD4 ;
R_PTYPF1=R15PTYPF1 ;
R_PTYPF2=R15PTYPF2 ;
R_PTYPF3=R15PTYPF3 ;
R_PTYPF4=R15PTYPF4 ;
/* Empty map cell for: R_PUFF        variable wave = 15*/ ;
/* Empty map cell for: R_PUFFPOS     variable wave = 15*/ ;
/* Empty map cell for: R1_PUSH       variable wave = 15*/ ;
/* Empty map cell for: R2_PUSH       variable wave = 15*/ ;
R_PUSH=R15PUSH ;
R_PUSHA=R15PUSHA ;
/* Empty map cell for: R_PUSHW       variable wave = 15*/ ;
R_RETDTWV=R15RETDTWV ;
R_RETEMP=R15RETEMP ;
/* Empty map cell for: R_RETINC      variable wave = 15*/ ;
/* Empty map cell for: R_RETLIV      variable wave = 15*/ ;
R_RETMON=R15RETMON ;
R_RETSAT=R15RETSAT ;
/* Empty map cell for: R_RETWLT      variable wave = 15*/ ;
/* Empty map cell for: R_RETWRK      variable wave = 15*/ ;
/* Empty map cell for: R_RETWSP      variable wave = 15*/ ;
R_RETYR=R15RETYR ;
/* Empty map cell for: R_RISK        variable wave = 15*/ ;
/* Empty map cell for: R_RISK6       variable wave = 15*/ ;
R_RPLNYA=R15RPLNYA ;
R_RPLNYR=R15RPLNYR ;
R_RXPREM=R15RXPREM ;
R_RYRCMP=R15RYRCMP ;
R_SADLF=R15SADLF ;
R_SAMEJOB=R15SAMEJOB ;
R_SAMEMP=R15SAMEMP ;
R_SAYRET=R15SAYRET ;
/* Empty map cell for: R_SCIS        variable wave = 15*/ ;
R_SDIAPL=R15SDIAPL ;
R_SDIAPLM=R15SDIAPLM ;
R_SDIAPLY=R15SDIAPLY ;
R_SDIAPP=R15SDIAPP ;
R_SDIAPPM=R15SDIAPPM ;
R_SDIAPPY=R15SDIAPPY ;
R_SDIDEN=R15SDIDEN ;
R_SDIREC=R15SDIREC ;
R_SDIRECM=R15SDIRECM ;
R_SDIRECY=R15SDIRECY ;
R_SDISTP=R15SDISTP ;
R_SDISTPM=R15SDISTPM ;
R_SDISTPY=R15SDISTPY ;
/* Empty map cell for: R_SER7        variable wave = 15*/ ;
R_SHLT=R15SHLT ;
R_SHLTC=R15SHLTC ;
R_SHLTCF=R15SHLTCF ;
R_SHOP=R15SHOP ;
R_SHOPA=R15SHOPA ;
R_SHOPH=R15SHOPH ;
/* Empty map cell for: R_SHOPR       variable wave = 15*/ ;
/* Empty map cell for: R1_SIT        variable wave = 15*/ ;
/* Empty map cell for: R2_SIT        variable wave = 15*/ ;
R_SIT=R15SIT ;
R_SITA=R15SITA ;
/* Empty map cell for: R_SITW        variable wave = 15*/ ;
R_SLEEP=R15SLEEP ;
R_SLEEPE=R15SLEEPE ;
R_SLEEPQ=R15SLEEPQ ;
R_SLEEPR=R15SLEEPR ;
R_SLEEPS=R15SLEEPS ;
/* Empty map cell for: R_SLEEPX      variable wave = 15*/ ;
R_SLFEMP=R15SLFEMP ;
/* Empty map cell for: R_SLFMEM      variable wave = 15*/ ;
R_SMOKEN=R15SMOKEN ;
R_SMOKEV=R15SMOKEV ;
R_SPCFAC=R15SPCFAC ;
/* Empty map cell for: R_SSAPL       variable wave = 15*/ ;
/* Empty map cell for: R_SSAPLM      variable wave = 15*/ ;
/* Empty map cell for: R_SSAPLY      variable wave = 15*/ ;
/* Empty map cell for: R_SSAPP       variable wave = 15*/ ;
/* Empty map cell for: R_SSAPPM      variable wave = 15*/ ;
/* Empty map cell for: R_SSAPPY      variable wave = 15*/ ;
/* Empty map cell for: R_SSDEN       variable wave = 15*/ ;
R_SSDI=R15SSDI ;
R_SSIAPL=R15SSIAPL ;
R_SSIAPLM=R15SSIAPLM ;
R_SSIAPLY=R15SSIAPLY ;
R_SSIAPP=R15SSIAPP ;
R_SSIAPPM=R15SSIAPPM ;
R_SSIAPPY=R15SSIAPPY ;
R_SSIDEN=R15SSIDEN ;
R_SSIREC=R15SSIREC ;
R_SSIRECM=R15SSIRECM ;
R_SSIRECY=R15SSIRECY ;
R_SSISTP=R15SSISTP ;
R_SSISTPM=R15SSISTPM ;
R_SSISTPY=R15SSISTPY ;
/* Empty map cell for: R_SSREC       variable wave = 15*/ ;
/* Empty map cell for: R_SSRECM      variable wave = 15*/ ;
/* Empty map cell for: R_SSRECY      variable wave = 15*/ ;
/* Empty map cell for: R_SSSTP       variable wave = 15*/ ;
/* Empty map cell for: R_SSSTPM      variable wave = 15*/ ;
/* Empty map cell for: R_SSSTPY      variable wave = 15*/ ;
/* Empty map cell for: R_SSWRER      variable wave = 15*/ ;
/* Empty map cell for: R_SSWRNR      variable wave = 15*/ ;
/* Empty map cell for: R_SSWRXA      variable wave = 15*/ ;
/* Empty map cell for: R_SSWSER      variable wave = 15*/ ;
/* Empty map cell for: R_SSWSNR      variable wave = 15*/ ;
/* Empty map cell for: R_SSWSXA      variable wave = 15*/ ;
/* Empty map cell for: R_STATUS      variable wave = 15*/ ;
/* Empty map cell for: R1_STOOP      variable wave = 15*/ ;
/* Empty map cell for: R2_STOOP      variable wave = 15*/ ;
R_STOOP=R15STOOP ;
R_STOOPA=R15STOOPA ;
/* Empty map cell for: R_STOOPW      variable wave = 15*/ ;
R_STROK=R15STROK ;
R_STROKE=R15STROKE ;
R_STROKF=R15STROKF ;
R_STROKQ=R15STROKQ ;
R_STROKS=R15STROKS ;
/* Empty map cell for: R_TIMWLK      variable wave = 15*/ ;
/* Empty map cell for: R_TIMWLKA     variable wave = 15*/ ;
/* Empty map cell for: R_TLIPRM      variable wave = 15*/ ;
/* Empty map cell for: R2_TOILT      variable wave = 15*/ ;
R_TOILT=R15TOILT ;
R_TOILTA=R15TOILTA ;
/* Empty map cell for: R2_TOILTH     variable wave = 15*/ ;
R_TOILTH=R15TOILTH ;
/* Empty map cell for: R_TOTMBF      variable wave = 15*/ ;
/* Empty map cell for: R_TOTMBI      variable wave = 15*/ ;
/* Empty map cell for: R_TOTMD       variable wave = 15*/ ;
/* Empty map cell for: R_TOTMDF      variable wave = 15*/ ;
/* Empty map cell for: R_TR20        variable wave = 15*/ ;
/* Empty map cell for: R_TR40        variable wave = 15*/ ;
R_TYLTC=R15TYLTC ;
/* Empty map cell for: R_ULCER       variable wave = 15*/ ;
R_UNEMP=R15UNEMP ;
R_UNION=R15UNION ;
R_UNIONF=R15UNIONF ;
/* Empty map cell for: R_VGACTF      variable wave = 15*/ ;
/* Empty map cell for: R_VGACTN      variable wave = 15*/ ;
/* Empty map cell for: R_VGACTP      variable wave = 15*/ ;
R_VGACTX=R15VGACTX ;
/* Empty map cell for: R_VIGACT      variable wave = 15*/ ;
/* Empty map cell for: R_VOCAB       variable wave = 15*/ ;
/* Empty map cell for: R_VP          variable wave = 15*/ ;
/* Empty map cell for: R1_WALK1      variable wave = 15*/ ;
/* Empty map cell for: R2_WALK1      variable wave = 15*/ ;
R_WALK1=R15WALK1 ;
R_WALK1A=R15WALK1A ;
/* Empty map cell for: R_WALK1W      variable wave = 15*/ ;
/* Empty map cell for: R1_WALKR      variable wave = 15*/ ;
/* Empty map cell for: R2_WALKR      variable wave = 15*/ ;
R_WALKR=R15WALKR ;
R_WALKRA=R15WALKRA ;
R_WALKRE=R15WALKRE ;
/* Empty map cell for: R2_WALKRH     variable wave = 15*/ ;
R_WALKRH=R15WALKRH ;
/* Empty map cell for: R_WALKRW      variable wave = 15*/ ;
/* Empty map cell for: R1_WALKS      variable wave = 15*/ ;
/* Empty map cell for: R2_WALKS      variable wave = 15*/ ;
R_WALKS=R15WALKS ;
R_WALKSA=R15WALKSA ;
/* Empty map cell for: R_WALKSW      variable wave = 15*/ ;
R_WANDER=R15WANDER ;
R_WEIGHT=R15WEIGHT ;
R_WGFHR=R15WGFHR ;
R_WGFWK=R15WGFWK ;
R_WGIHR=R15WGIHR ;
R_WGIWK=R15WGIWK ;
/* Empty map cell for: R_WHAPPX      variable wave = 15*/ ;
R_WHAPPY=R15WHAPPY ;
R_WLIPRM=R15WLIPRM ;
R_WORK=R15WORK ;
R_WORK2=R15WORK2 ;
R_WORK62=R15WORK62 ;
R_WORK62F=R15WORK62F ;
R_WORK65=R15WORK65 ;
R_WORK65F=R15WORK65F ;
R_WORK70=R15WORK70 ;
R_WORK70A=R15WORK70A ;
R_WORK70AF=R15WORK70AF ;
R_WORK70F=R15WORK70F ;
/* Empty map cell for: R_WORKLM      variable wave = 15*/ ;
/* Empty map cell for: R_WTCRNH      variable wave = 15*/ ;
/* Empty map cell for: R_WTHH        variable wave = 15*/ ;
/* Empty map cell for: R_WTRESP      variable wave = 15*/ ;
/* Empty map cell for: R_WTR_NH      variable wave = 15*/ ;
/* Empty map cell for: R_YR          variable wave = 15*/ ;
if inw=1 then output ;
%mend process_data /*  -- mend statement  */ ;
