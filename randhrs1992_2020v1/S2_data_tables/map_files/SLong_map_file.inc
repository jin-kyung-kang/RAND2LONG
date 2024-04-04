/* This is map_file `SLong_map_file.inc` for `SLong_table` dataset */
/* Repo name := RAND2LONG (version 0.852) */
/* Project name := randhrs1992_2020v1 */
/* Excel map: _1992_2020v1_maps22MAR2024.xlsx */
/* Date stamp: 03APR24  */


%macro label_statements;
/* Table SLong: Label statements for 806 variables */
/* Macro invoked by `create_template_longout` macro */
  label HHID  = "HHold ID / 6-Char <KEY1>";
  label PN  = "Person Number (3-CHAR) <KEY2>";
  label HHIDPN  = "HHIDPN: HHold ID + Person Number /Num";
  label RAHHIDPN  = "HHold ID + Person Number /9-Char";
  label HACOHORT  = "Sample cohort";
  label WAVE_NUMBER  = "HRS wave number <KEY3>";
  label WAVE_NAME  = "Wave label/12-Char";
  label studyyr  = "Study year /Num";
  label CYEAR  = "Study year /10-Char";

 /* --Variable H_HHID : # _10 */
  label H_HHID  = "HHold ID + SubHHold /Num";
  label H_HHIDC  = "HHold ID + SubHHold /7-Char <KEY3>";
  label SUBHH  = "HRS subHHold/1-Char";
  label INW  = "1 if respondent/Num";
  label S_HHIDPN  = "Spouse HHIDPN";
  label SASSAGEB  = "SASSAGEB: Age Sp Start Rec. SocSec";
  label SASSAGEM  = "SASSAGEM: Age/mnths Sp Start Rec. SocSec";
  label SASSRECV  = "SASSRECV: Any Spouse Receives SocSec";
  label S_ACGTOT  = "AHD TOTAL COGNITION SUMMARY SCORE";
  label S_ADL5A  = "Any Diff-sum of ADLs /0-5";

 /* --Variable S_ADL5H : # _20 */
  label S_ADL5H  = "S Gets Help-sum of ADLs /0-5";
  label S_ADL6A  = "Any Diff-sum of ADLs /0-6";
  label S_ADL6H  = "S Gets Help-sum of ADLs /0-6";
  label S_ADLR10  = "DELAYED WORD RECALL-AHD93";
  label S_ADLW  = "Any Diff-sum of ADLs /0-5";
  label S_AGEM_B  = "S Age (months) at Ivw BegMon";
  label S_AGEM_E  = "S Age (months) at Ivw EndMon";
  label S_AGEM_M  = "S Age (months) at Ivw MidMon";
  label S_AGEY_B  = "S Age (years) at Ivw BegMon";
  label S_AGEY_E  = "S Age (years) at Ivw EndMon";

 /* --Variable S_AGEY_M : # _30 */
  label S_AGEY_M  = "S Age (years) at Ivw MidMon";
  label S_AHDSMP  = "Sample-Age Elig/Ahd93 Resp";
  label S_AIMR10  = "IMMEDIATE WORD RECALL-AHD93";
  label S_ALONE  = "S can be left alone";
  label S_ALZHE  = "S reports Alzheimer this wv";
  label S_ALZHEE  = "S ever reported Alzheimer";
  label S_ALZHEEF  = "1st wv special missing Alzheimers";
  label S_ALZHEF  = "Flag chg prev report of Alzheimer";
  label S_ALZHEQ  = "Q-wording of Alzheimer this wv";
  label S_ALZHES  = "S had Alzheimer onset snce last IW";

 /* --Variable S_AMSTOT : # _40 */
  label S_AMSTOT  = "AHD MENTAL STATUS SUMMARY SCORE";
  label S_ANS3PQ  = "S answered the first three probability questions";
  label S1_ARMS  = "S Diff-Reach/extnd arms up";
  label S2_ARMS  = "S Diff-Reach/extnd arms up";
  label S_ARMS  = "S Diff-Reach/extnd arms up";
  label S_ARMSA  = "S Any Diff-Rch/xtnd arms up";
  label S_ARMSW  = "S Any Diff-Reach/xtnd arms up";
  label S_ARTHR  = "S reports arthritis this wv";
  label S_ARTHRE  = "S ever had arthritis";
  label S_ARTHREF  = "1st wv special missing arthritis";

 /* --Variable S_ARTHRF : # _50 */
  label S_ARTHRF  = "Flag dispute chg arthritis";
  label S_ARTHRQ  = "Q-wording arthritis this wv";
  label S_ARTHRS  = "S had arthritis snce last IW";
  label S_ATR20  = "AHD WORD TOTAL RECALL SUMMARY SCORE";
  label S_BACK  = "S had back problems";
  label S_BALFUL  = "S full tandem bal test time";
  label S_BALFULC  = "S full tandem bal test-Comp mvmt";
  label S_BALFULT  = "S full tandem bal test-Cmpltd";
  label S_BALSBS  = "S side-by-side bal test time";
  label S_BALSBSC  = "S side-by-side bal test-Comp mvmt";

 /* --Variable S_BALSEMI : # _60 */
  label S_BALSEMI  = "S semi tandem bal test time";
  label S_BALSEMIC  = "S semi tandem bal test-Comp mvmts";
  label S1_BATH  = "S Diff-Bathing or showerng";
  label S2_BATH  = "S Diff-Bathing or showerng";
  label S_BATH  = "S Diff-Bathing or showerng";
  label S_BATHA  = "S Any Diff-Bathing, shower";
  label S2_BATHH  = "S Gets Help-Bathing, showerng";
  label S_BATHH  = "S Gets Help-Bathing, showerng";
  label S_BATHW  = "S Any Diff-Bathing, shower";
  label S_BDATE  = "birth date";

 /* --Variable S1_BED : # _70 */
  label S1_BED  = "S Diff-Get in/out of bed";
  label S2_BED  = "S Diff-Get in/out of bed";
  label S_BED  = "S Diff-Get in/out of bed";
  label S_BEDA  = "S Any Diff-Get in/out bed";
  label S_BEDE  = "S Use Eqp-Get in/out of bed";
  label S2_BEDH  = "S Gets Help-Get in/out of bed";
  label S_BEDH  = "S Gets Help-Get in/out of bed";
  label S_BEDW  = "S Any Diff-Get in/out of bed";
  label S_BEQ100  = "S Prob leave bequest 100K+";
  label S_BEQ10K  = "S Prob leave bequest 10K+";

 /* --Variable S_BEQ500 : # _80 */
  label S_BEQ500  = "S Prob leave bequest 500K+";
  label S_BEQANY  = "S Prob leave bequest any";
  label S_BEQLRG  = "S Prob leave sizable bequest";
  label S_BFLAG  = "flag birthdate missings";
  label S_BMI  = "Self-reported body mass index=kg/m2";
  label S_BMONTH  = "birth month";
  label S_BPDIA  = "S diastolic blood pressure";
  label S_BPLACE  = "Place of Birth (Cens Region)";
  label S_BPLACF  = "diff RABPLACE/USBORN(trk)";
  label S_BPPOS  = "S position during BP measures";

 /* --Variable S_BPPULS : # _90 */
  label S_BPPULS  = "S pulse";
  label S_BPSYS  = "S systolic blood pressure";
  label S_BREAST  = "Prev Breast Check";
  label S_BWC20  = "BACKWARDS COUNT FROM 20";
  label S_BWC86  = "BACKWARDS COUNT FROM 86";
  label S_BYEAR  = "birth year";
  label S_CACT  = "CACTUS";
  label S1_CALC  = "S Diff-Use a calculator";
  label S2_CALC  = "S Diff-Use a calculator";
  label S_CALCA  = "S Any Diff-Use a calculator";

 /* --Variable S_CALCW : # _100 */
  label S_CALCW  = "S Any Diff-Use a calculator";
  label S_CANCR  = "S reports cancer this wv";
  label S_CANCRE  = "S ever had cancer";
  label S_CANCREF  = "1st wv special missing cancer";
  label S_CANCRF  = "Flag dispute chg cancer";
  label S_CANCRQ  = "Q-wording cancer this wv";
  label S_CANCRS  = "S had cancer since last IW";
  label S_CENDIV  = "Census Division";
  label S_CENREG  = "Census Region";
  label S_CESD  = "CESD score";

 /* --Variable S_CESDM : # _110 */
  label S_CESDM  = "missings in CESD score";
  label S1_CHAIR  = "S Diff-Get up fr chair";
  label S2_CHAIR  = "S Diff-Get up fr chair";
  label S_CHAIR  = "S Diff-Get up fr chair";
  label S_CHAIRA  = "S Any Diff-Get up fr chair";
  label S_CHAIRW  = "S Any Diff-Get up fr chair";
  label S_CHOLST  = "Prev Cholesterol";
  label S_CLAIMED  = "S already claiming SS benefits";
  label S1_CLIM1  = "S Diff-Climb one flt stair";
  label S2_CLIM1  = "S Diff-Climb one flt stair";

 /* --Variable S_CLIM1 : # _120 */
  label S_CLIM1  = "S Diff-Climb one flt stair";
  label S_CLIM1A  = "S Any Diff-Clmb 1 flt stair";
  label S_CLIM1W  = "S Any Diff-Climb 1 flt stair";
  label S1_CLIMS  = "S Diff-Climb sev flt stair";
  label S2_CLIMS  = "S Diff-Climb sev flt stair";
  label S_CLIMS  = "S Diff-Climb sev flt stair";
  label S_CLIMSA  = "S Any Diff-Clmb sev flt str";
  label S_CLIMSW  = "S Any Diff-Climb sev flt str";
  label S_COGTOT  = "TOTAL COGNITION SUMMARY SCORE(W14: FTF/TEL*)";
  label S_COHBYR  = "based on birth yr";

 /* --Variable S_COHORT : # _130 */
  label S_COHORT  = "cohort";
  label S_COMP  = "S Diff-Use a computer";
  label S_COMPW  = "S Any Diff-Use a computer";
  label S_CONDE  = "Sum of conditions ever had";
  label S_CONDEF  = "# chg from dispute/sum ever";
  label S_CONDS  = "Sum of conditns since lastIW";
  label S_CONDSF  = "# chg from dispute/sum since";
  label S_CONDSP  = "Flag Prv IVW not Wv-1/since";
  label S_COVR  = "S covered by R empl plan";
  label S_COVRT  = "S plan covers retirees";

 /* --Variable S_COVS : # _140 */
  label S_COVS  = "S covered by S empl plan";
  label S_DADAGE  = "Father age current/at death";
  label S_DADLIV  = "Father alive";
  label S_DAGE_M  = "at Death in Months";
  label S_DAGE_Y  = "at Death in Years";
  label S_DCBAL1  = "Current balance of DC plan #1";
  label S_DCBAL2  = "Current balance of DC plan #2";
  label S_DCBAL3  = "Current balance of DC plan #3";
  label S_DCBAL4  = "Current balance of DC plan #4";
  label S_DCBENE1  = "Employer contribution to DC plan #1";

 /* --Variable S_DCBENE2 : # _150 */
  label S_DCBENE2  = "Employer contribution to DC plan #2";
  label S_DCBENE3  = "Employer contribution to DC plan #3";
  label S_DCBENE4  = "Employer contribution to DC plan #4";
  label S_DCCONT1  = "Employee contribution to DC plan #1";
  label S_DCCONT2  = "Employee contribution to DC plan #2";
  label S_DCCONT3  = "Employee contribution to DC plan #3";
  label S_DCCONT4  = "Employee contribution to DC plan #4";
  label S_DCMODE1  = "Employer contribution:$ or % #1";
  label S_DCMODE2  = "Employer contribution:$ or % #2";
  label S_DCMODE3  = "Employer contribution:$ or % #3";

 /* --Variable S_DCMODE4 : # _160 */
  label S_DCMODE4  = "Employer contribution:$ or % #4";
  label S_DCPCT1  = "Employer % contribution #1";
  label S_DCPCT2  = "Employer % contribution #2";
  label S_DCPCT3  = "Employer % contribution #3";
  label S_DCPCT4  = "Employer % contribution #4";
  label S_DDATE  = "death date";
  label S_DEMEN  = "S reports dementia this wv";
  label S_DEMENE  = "S ever reported dementia";
  label S_DEMENEF  = "1st wv special missing dementia";
  label S_DEMENF  = "Flag chg prev report of dementia";

 /* --Variable S_DEMENQ : # _170 */
  label S_DEMENQ  = "Q-wording of dementia this wv";
  label S_DEMENS  = "S had dementia onset snce last IW";
  label S_DENTST  = "Dental visit prv 2 yrs (W2:  prv 1-,2-yr(A,H)*)";
  label S_DEPRES  = "CESD:Felt depressed";
  label S_DEPREX  = "CESD:Felt depressed-raw";
  label S_DIAB  = "S reports diabetes this wv";
  label S_DIABE  = "S ever had diabetes";
  label S_DIABEF  = "1st wv special missing diabetes";
  label S_DIABF  = "Flag dispute chg diabetes";
  label S_DIABQ  = "Q-wording diabetes this wv";

 /* --Variable S_DIABS : # _180 */
  label S_DIABS  = "S had diabetes since last IW";
  label S1_DIME  = "S Diff-Pick up a dime";
  label S2_DIME  = "S Diff-Pick up a dime";
  label S_DIME  = "S Diff-Pick up a dime";
  label S_DIMEA  = "S Any Diff-Pick up a dime";
  label S_DIMEW  = "S Any Diff-Pick up a dime";
  label S_DLRC  = "DELAYED WORD RECALL(W14: FTF/TEL*)";
  label S_DLRC20  = "DELAYED WORD RECALL";
  label S_DMONTH  = "death month";
  label S_DOCTIM  = "# Doctor vists prv 2 yrs (W1: prv 12 mos*)";

 /* --Variable S_DOCTOR : # _190 */
  label S_DOCTOR  = "Doctor visit prv 2 yrs (W1: prv 12 mos*)";
  label S1_DRESS  = "S Diff-Dressing";
  label S2_DRESS  = "S Diff-Dressing";
  label S_DRESS  = "S Diff-Dressing";
  label S_DRESSA  = "S Any Diff-Dressing";
  label S2_DRESSH  = "S Gets Help-Dressing";
  label S_DRESSH  = "S Gets Help-Dressing";
  label S_DRESSW  = "S Any Diff-Dressing";
  label S_DRINK  = "S ever drinks any alcohol";
  label S_DRINKD  = "S # days/week drinks";

 /* --Variable S_DRINKN : # _200 */
  label S_DRINKN  = "S # drinks/day when drinks";
  label S_DRINKR  = "S range of # drinks/day";
  label S_DRUGS  = "Reg take Rx prv 2 yrs (W2: prv 1-yr(A)*)";
  label S_DSIAMT  = "AMT RECEIVED LAST MONTH SSI";
  label S_DSRC  = "death date source";
  label S_DSSAMT  = "AMT RECEIVED LAST MONTH SSDI";
  label S_DSTAT  = "'POSITION 1=DK, 2=SSDI, 3=SSI'";
  label S_DTIMTDTH  = "of Months from last Core interview to Death Date";
  label S_DW  = "Cognition Date naming-Day of week";
  label S_DY  = "Cognition Date naming-Day of month";

 /* --Variable S_DYEAR : # _210 */
  label S_DYEAR  = "death year";
  label S1_EAT  = "S Diff-Eating";
  label S2_EAT  = "S Diff-Eating";
  label S_EAT  = "S Diff-Eating";
  label S_EATA  = "S Any Diff-Eating";
  label S2_EATH  = "S Gets Help-Eating";
  label S_EATH  = "S Gets Help-Eating";
  label S_EATW  = "S Any Diff-Eating";
  label S_EDEGRM  = "Highest Degree-masked";
  label S_EDUC  = "education (categ)";

 /* --Variable S_EDYRS : # _220 */
  label S_EDYRS  = "Years of Education";
  label S_EFFORT  = "CESD:Everything an effort";
  label S_EFFORX  = "CESD:Everything an effort-raw";
  label S_ENLIFE  = "CESD:Enjoyed life";
  label S_ENLIFX  = "CESD:Enjoyed life -raw";
  label S_EVBRN  = "of Children Ever Born";
  label S_EVBRNF  = "when S responds in 1993 and 1995";
  label S_FAMR  = "Whether Family Resp";
  label S_FBWC20  = "IMPFLAG:BACKWARDS COUNT FROM 20";
  label S_FBWC86  = "IMPFLAG:BACKWARDS COUNT FROM 86";

 /* --Variable S_FCACT : # _230 */
  label S_FCACT  = "IMPFLAG:CACTUS";
  label S_FDLRC  = "IMPFLAG:DELAYED WORD RECALL";
  label S_FDW  = "IMPFLAG:DATE:DAY OF WEEK";
  label S_FDY  = "IMPFLAG:DATE:DAY";
  label S_FEDUC  = "Father's Years Education";
  label S_FIMRC  = "IMPFLAG:IMMEDIATE WORD RECALL";
  label S_FINEA  = "Dime/Eat/Dress /0-3";
  label S_FINPLN  = "S Financial planning horizon";
  label S_FINR  = "Whether Financial Resp";
  label S_FLAG  = "AHEAD OR 94/96 HRS";

 /* --Variable S_FLONE : # _240 */
  label S_FLONE  = "CESD:Felt lonely";
  label S_FLONEX  = "CESD:Felt lonely-raw";
  label S_FLUSHT  = "Prev Flu Shot";
  label S_FMO  = "IMPFLAG:DATE:MONTH";
  label S_FPRES  = "IMPFLAG:PRESIDENT";
  label S_FPSTME  = "IMPFLAG:MEMORY COMPARED TO PAST";
  label S_FSAD  = "CESD:Felt sad";
  label S_FSADX  = "CESD:Felt sad-raw";
  label S_FSCIS  = "IMPFLAG:SCISSORS";
  label S_FSER7  = "IMPFLAG:SERIAL 7s";

 /* --Variable S_FSIZE : # _250 */
  label S_FSIZE  = "Size of firm or business";
  label S_FSIZEF  = "Value carried forward from previous wave";
  label S_FSLFME  = "IMPFLAG:SELF RATED MEMORY";
  label S_FVOCAB  = "IMPFLAG:VOCAB SUM SCORE";
  label S_FVP  = "IMPFLAG:VICE PRESIDENT";
  label S_FYR  = "IMPFLAG:DATE:YEAR";
  label S_GENDER  = "Gender";
  label S_GOING  = "CESD:Could not get going";
  label S_GOINGX  = "CESD:Could not get going -raw";
  label S_GOVMD  = "S has Gov plan-Medicaid";

 /* --Variable S_GOVMR : # _260 */
  label S_GOVMR  = "S has Gov plan-Medicare";
  label S_GOVOT  = "S has Gov plan-Other";
  label S_GOVVA  = "S has Gov plan-Champus/VA";
  label S_GROSSA  = "Walk1/R,Clim1,Bed,Bath/0-5";
  label S_GRP  = "S hand grip strength max msrmnt";
  label S_GRPDOM  = "S dominant hand";
  label S_GRPL  = "S hand grip strength-Left hand";
  label S_GRPPOS  = "S pos during grip strength tests";
  label S_GRPR  = "S hand grip strength-Right hand";
  label S_HALUC  = "S hallucinates";

 /* --Variable S_HDLR20 : # _270 */
  label S_HDLR20  = "DELAYED WORD RECALL-HRS94";
  label S_HEART  = "S reports heart prob this wv";
  label S_HEARTE  = "S ever had heart problems";
  label S_HEARTEF  = "1st wv special missing heart problems";
  label S_HEARTF  = "Flag dispute chg heart prob";
  label S_HEARTQ  = "Q-wording heart prob this wv";
  label S_HEARTS  = "S had heart prob snce lastIW";
  label S_HECOV1  = "Who is covered in Sp empl plan #1";
  label S_HECOV2  = "Who is covered in Sp empl plan #2";
  label S_HECOV3  = "Who is covered in Sp empl plan #3";

 /* --Variable S_HEIGHT : # _280 */
  label S_HEIGHT  = "Self-reported height in meters";
  label S_HENUM  = "Number of health insurance plans";
  label S_HERET  = "S covered in retirement /summary";
  label S_HERTR1  = "R coverage by Sp in retirement #1";
  label S_HERTR2  = "R coverage by Sp in retirement #2";
  label S_HERTR3  = "R coverage by Sp in retirement #3";
  label S_HERTS1  = "Sp coverage by Sp in retirement #1";
  label S_HERTS2  = "Sp coverage by Sp in retirement #2";
  label S_HERTS3  = "Sp coverage by Sp in retirement #3";
  label S_HESRC1  = "Source of Sp empl plan #1";

 /* --Variable S_HESRC2 : # _290 */
  label S_HESRC2  = "Source of Sp empl plan #2";
  label S_HESRC3  = "Source of Sp empl plan #3";
  label S_HHIDPN  = "Spouse HHIDPN";
  label S_HIBP  = "S reports high BP this wv";
  label S_HIBPE  = "S ever had high blood pressure";
  label S_HIBPEF  = "1st wv special missing high blood pressure";
  label S_HIBPF  = "Flag dispute chg hi BP";
  label S_HIBPQ  = "Q-wording high BP this wv";
  label S_HIBPS  = "S had hi BP since last IW";
  label S_HIGOV  = "S is covered by Gov plan";

 /* --Variable S_HILTC : # _300 */
  label S_HILTC  = "S has Long Term Care Ins";
  label S_HIMR20  = "IMMEDIATE WORD RECALL-HRS94";
  label S_HIOTHP  = "S has Other Ins";
  label S_HISPAN  = "Hispanic";
  label S_HLPDYSF  = "Days family helpers helped last month";
  label S_HLPDYSNF  = "Days non-family helpers helped last month";
  label S_HLPDYSP  = "Days paid helpers helped last month";
  label S_HLPDYST  = "Total days got help last month";
  label S_HLPDYSU  = "Days unpaid helpers helped last month";
  label S_HLPHRSF  = "Hours family helpers helped last month";

 /* --Variable S_HLPHRSNF : # _310 */
  label S_HLPHRSNF  = "Hours non-family helpers helped last month";
  label S_HLPHRSP  = "Hours paid helpers helped last month";
  label S_HLPHRST  = "Total hours got help last month";
  label S_HLPHRSU  = "Hours unpaid helpers helped last month";
  label S_HLPPDFA  = "Amount family helpers were paid to help last month";
  label S_HLPPDFN  = "Number of family helpers paid to help";
  label S_HLPPDNFA  = "Amount non-family helpers were paid to help last month";
  label S_HLPPDNFN  = "Number of non-family helpers paid to help";
  label S_HLPPDTA  = "Total amount helpers were paid last month";
  label S_HLPPDTN  = "Total number of helpers paid to help";

 /* --Variable S_HLPRFN : # _320 */
  label S_HLPRFN  = "Number of family helpers who helped last month";
  label S_HLPRNFN  = "Number of non-family helpers who helped last month";
  label S_HLPRPN  = "Number of paid helpers who helped last month";
  label S_HLPRTN  = "Total number of helpers who helped last month";
  label S_HLPRUN  = "Number of unpaid helpers who helped last month";
  label S_HLTC3  = "Self-report of health change";
  label S_HLTC5  = "Self-report of health change, 5-cat";
  label S_HLTC5F  = "Flag self-report of hlth chg, 5-cat";
  label S_HLTHLM  = "Hlth problems limit work";
  label S_HOMCAR  = "Home hlth care prv 2 yrs (W1: prv 12 mos*)";

 /* --Variable S_HOSP : # _330 */
  label S_HOSP  = "Hospital stay prv 2 yrs (W1: prv 12 mos*)";
  label S_HRSAMP  = "Sample-Age Elig/Hrs92 Resp";
  label S_HSPNIT  = "# Nights in hosp prv 2 yrs (W1: prv 12 mos*)";
  label S_HSPTIM  = "# Hospital stays prv 2 yrs (W1: prv 12 mos*)";
  label S_HSWRKF  = "S Freq heavy housework";
  label S_HTR40  = "HRS WORD TOTAL RECALL SUMMARY SCORE";
  label S_IADL5A  = "Any Diff-sum of IADLs /0-5";
  label S_IADL5H  = "S Gets Help-sum of IADLs /0-5";
  label S_IANN  = "Income:Sp Annuity";
  label S_IEARN  = "Income:Sp Earnings";

 /* --Variable S_IFANN : # _340 */
  label S_IFANN  = "ImpFlag:Sp Annuity";
  label S_IFEARN  = "ImpFlag:Sp Earnings";
  label S_IFGXFR  = "ImpFlag:Sp Other Gov Transfer";
  label S_IFIRAW  = "ImpFlag:IRA Withd-Total (prev 2 yrs/since last int)";
  label S_IFIRAWY1  = "ImpFlag:IRA Withd-Total (LCY)";
  label S_IFPEN  = "ImpFlag:Sp Pension";
  label S_IFPENA  = "ImpFlag:Sp Pension + Annuity";
  label S_IFSDI  = "ImpFlag-SocSec DI";
  label S_IFSRET  = "ImpFlag:Sp SocSec Retirement";
  label S1_IFSSDI  = "ImpFlag:Sp SSI + SS Disability";

 /* --Variable S_IFSSDI : # _350 */
  label S_IFSSDI  = "ImpFlag:Sp SSI + SS Disablty";
  label S_IFSSI  = "ImpFlag-SSI Inc";
  label S_IFUNEM  = "ImpFlag-Unemployment";
  label S1_IFUNWC  = "ImpFlag:Sp Unemp + Workers Comp";
  label S2_IFUNWC  = "ImpFlag:Sp Unemp + WorkerComp";
  label S_IFWCMP  = "ImpFlag-Workers Comp";
  label S_IGXFR  = "Income:Sp Other Gov Transfer";
  label S_IIRAW  = "Income:IRA Withd-Total (prev 2 yrs/since last int)";
  label S_IIRAWY1  = "Income:IRA Withd-Total (LCY)";
  label S_IMRC  = "IMMEDIATE WORD RECALL(W14: FTF/TEL*)";

 /* --Variable S_IMRC20 : # _360 */
  label S_IMRC20  = "IMMEDIATE WORD RECALL";
  label S_INHER  = "S Prob inheritance nxt 10 yr";
  label S_INHPE  = "Any employee of institution ever helped";
  label S_INHPFN  = "Number of family helpers ever helped";
  label S_INHPNFN  = "Number of non-family helpers ever helped";
  label S_INHPPN  = "Number of paid helpers ever helped";
  label S_INHPTN  = "Total number of helpers ever helped";
  label S_INHPUN  = "Number of unpaid helpers ever helped";
  label S_INLBRF  = "=1 if S is in the labor force";
  label S_IPEN  = "Income:Sp Pension";

 /* --Variable S_IPENA : # _370 */
  label S_IPENA  = "Income:Sp Pension + Annuity";
  label S_ISDI  = "IncPart-SocSec DI";
  label S_ISRET  = "Income:Sp SocSec Retirement";
  label S_ISSDI  = "Income:Sp SSI + SS Disability";
  label S_ISSI  = "IncPart-SSI Inc";
  label S_IUNEM  = "IncPart-Unemployment";
  label S_IUNWC  = "Income:Sp Unemp + Workers Comp";
  label S_IWBEG  = "Interview Begin Date";
  label S_IWBEGF  = "Interview Beg Date Flag";
  label S_IWCMP  = "IncPart-Workers Comp";

 /* --Variable S_IWEND : # _380 */
  label S_IWEND  = "Interview End Date";
  label S_IWENDF  = "Interview End Date Flag";
  label S_IWENDM  = "Interview End Month";
  label S_IWENDY  = "Interview End Year";
  label S_IWMID  = "Interview Midpoint Date";
  label S_IWMIDF  = "Interview Midpt Date Flag";
  label S_IWSTAT  = "S Interview Status";
  label S_JCIND  = "Current Job Industry/1980 Census";
  label S_JCINDB  = "Cur Job Industry/2002 Census";
  label S_JCINDC  = "Cur Job Industry/2007 Census";

 /* --Variable S_JCOCC : # _390 */
  label S_JCOCC  = "Current Job Occup/1980 Census";
  label S_JCOCCA  = "Cur Job Occup/Ahead coding";
  label S_JCOCCB  = "Cur Job Occup/2000 Census";
  label S_JCOCCC  = "Cur Job Occup/2010 Census";
  label S_JCPEN  = "Has pension current job";
  label S_JCPENF  = "Further info on JCPEN";
  label S_JCTEN  = "Current Job Tenure";
  label S_JHOUR2  = "Hours worked/week 2nd job";
  label S_JHOURS  = "Hours worked/week main job";
  label S_JJOBS  = "Status of S Job History";

 /* --Variable S_JLASTM : # _400 */
  label S_JLASTM  = "Month Last Worked/not workng";
  label S_JLASTY  = "Year Last Worked/not working";
  label S_JLIFT  = "Cur job req lift heavy loads";
  label S_JLIND  = "Longest Job Industry/1980 Census";
  label S_JLINDB  = "Long Job Industry/2002 Census";
  label S_JLINDC  = "Long Job Industry/2007 Census";
  label S_JLMIS  = "Longest Job # Jobs date=miss";
  label S_JLOCC  = "Longest Job Occ/1980 Census";
  label S_JLOCCA  = "Long Job Occup/Ahead coding";
  label S_JLOCCB  = "Long Job Occup/2000 Census";

 /* --Variable S_JLOCCC : # _410 */
  label S_JLOCCC  = "Long Job Occup/2010 Census";
  label S_JLTEN  = "Longest Job Tenure";
  label S_JLTENF  = "Long Job Tenure/fill in flag";
  label S_JMISS  = "# Jobs with missing dates";
  label S_JNJOB  = "# Jobs Reported";
  label S_JNJOB5  = "# 5+ year-jobs reported";
  label S1_JOG  = "S Diff-Jog one mile";
  label S2_JOG  = "S Diff-Jog one mile";
  label S_JOG  = "S Diff-Jog one mile";
  label S_JOGA  = "S Any Diff-Jog one mile";

 /* --Variable S_JOGW : # _420 */
  label S_JOGW  = "S Any Diff-Jog one mile";
  label S_JPHYS  = "Cur job req lots phys effort";
  label S_JSIGHT  = "Cur job req good eyesight";
  label S_JSTOOP  = "Cur job req stoop/kneel/crouch";
  label S_JSTRES  = "Cur job involves much stress";
  label S_JWEEK2  = "Weeks worked/year 2nd job";
  label S_JWEEKS  = "Weeks worked/year main job";
  label S_JYEARM  = "S Years Worked/missing flag";
  label S_JYEARS  = "S Years Worked/self-rpt+jobh";
  label S_LBAGR  = "Big 5 Agreeableness";

 /* --Variable S_LBASSISTPRB : # _430 */
  label S_LBASSISTPRB  = "Reg help ailing friend/fam";
  label S_LBCOMP  = "Completed LB Psychosocial Survey";
  label S_LBCON10  = "Big 5 Conscientiousness 10 Sub-items";
  label S_LBCON5  = "Big 5 Conscientiousness 5 Sub-items";
  label S_LBELIG  = "Eligible for LB Psychosocial Survey";
  label S_LBEXT  = "Big 5 Extroversion";
  label S_LBFAMDRUGPRB  = "Ongoing drug/alcohol probs fam mbr";
  label S_LBFAMHLTHPRB  = "Ongoing phy/emot problems in sp/chld";
  label S_LBFINPRB  = "Ongoing financial strain";
  label S_LBHLTHPRB  = "Self ongoing health problems";

 /* --Variable S_LBHOUSEPRB : # _440 */
  label S_LBHOUSEPRB  = "Ongoing housing preoblems";
  label S_LBLONELY11  = "Loneliness 11-item scale";
  label S_LBLONELY3  = "Loneliness 3-item scale";
  label S_LBNEGAFFECT  = "Negative affect 12-question scale";
  label S_LBNEGAFFECT6  = "Negative affect 6-question scales";
  label S_LBNEUR  = "Big 5 Neuroticism";
  label S_LBONCHRSTR  = "Ongoing Chronic Stress Scale";
  label S_LBOPEN  = "Big 5 Openness to experience";
  label S_LBPOSAFFECT  = "Positive affect 13-question scale";
  label S_LBPOSAFFECT6  = "Positive affect 6-question scales";

 /* --Variable S_LBRF : # _450 */
  label S_LBRF  = "S Labor Force Status";
  label S_LBRFH  = "Labor Force Status, No Week Restriction";
  label S_LBRFY  = "Labor Force Status Year Round Flag";
  label S_LBRLTNSHPRB  = "Ongoing problems close relationship";
  label S_LBSATCITY  = "Sat w/City town live";
  label S_LBSATFAM  = "Sat w/Family life";
  label S_LBSATFIN  = "Sat w/Present fin situation";
  label S_LBSATHLTH  = "Sat w/Health";
  label S_LBSATHOME  = "Sat w/Condition of home";
  label S_LBSATINC  = "Sat w/Total household income";

 /* --Variable S_LBSATLEISURE : # _460 */
  label S_LBSATLEISURE  = "Sat w/Daily leisure acts";
  label S_LBSATLIFE  = "Sat w/Life as a whole LB";
  label S_LBSATWLF  = "Life satisfaction scale";
  label S_LBWGTR  = "S weight for LB Psychosocial Survey";
  label S_LBWORKPRB  = "Ongoing difficulties at work";
  label S_LGMUSA  = "Any Diff-sum of Large Muscle measures /0-4";
  label S_LGMUSW  = "Any Diff-sum of Large Muscle measures /0-4";
  label S_LHTACT  = "S Wtr light phys activ 3+/wk";
  label S_LIFEIN  = "S has Life Insurance";
  label S1_LIFT  = "S Diff-Lift/carry 10lbs";

 /* --Variable S2_LIFT : # _470 */
  label S2_LIFT  = "S Diff-Lift/carry 10lbs";
  label S_LIFT  = "S Diff-Lift/carry 10lbs";
  label S_LIFTA  = "S Any Diff-Lift/carry 10lbs";
  label S_LIFTW  = "S Any Diff-Lift/carry 10lbs";
  label S_LIV10  = "S Probability to live 80-100";
  label S_LIV10A  = "Age used in live 80-100/85 Q";
  label S_LIV10P  = "LfTab prob live 80-100/R curage";
  label S_LIV10R  = "Rprob live 80-100 / LfTab prob";
  label S_LIV75  = "S Probability to live 75+";
  label S_LIV75C  = "Chg live 75+:R/LfTab ratio";

 /* --Variable S_LIV75F : # _480 */
  label S_LIV75F  = "Flag LIV75C, # prv iw";
  label S_LIV75P  = "LfTab prob live 75+/R curage";
  label S_LIV75R  = "Rprob live 75+ / LfTab prob";
  label S_LIV85  = "S Probability to live 85+";
  label S_LIV85C  = "Chg live 85+:R/LfTab ratio";
  label S_LIV85F  = "Flag LIV85C, # prv iw";
  label S_LIV85P  = "LfTab prob live 85+/R curage";
  label S_LIV85R  = "Rprob live 85+ / LfTab prob";
  label S_LIV8XC  = "Chg live 80-100:R/LfTab ratio";
  label S_LIV8XF  = "Flag LIV8XC, # prv iw";

 /* --Variable S_LIVBRO : # _490 */
  label S_LIVBRO  = "Number of living brothers";
  label S_LIVPAR  = "Number of living parents";
  label S_LIVSIB  = "Number of living siblings";
  label S_LIVSIS  = "Number of living sisters";
  label S_LOST  = "S lost in familiar environments";
  label S_LTACTF  = "S Freq light phys activities";
  label S_LTACTN  = "S # times/per light phys act";
  label S_LTACTP  = "S Period light phys activ";
  label S_LTACTX  = "S Freq light phys activ {finer scale}";
  label S_LTCPRM  = "Long Term Care Insurance Plan Monthly Premium";

 /* --Variable S_LUNG : # _500 */
  label S_LUNG  = "S reports lung disease this wv";
  label S_LUNGE  = "S ever had lung disease";
  label S_LUNGEF  = "1st wv special missing lung disease";
  label S_LUNGF  = "Flag dispute chg lung disease";
  label S_LUNGQ  = "Q-wording lung disease this wv";
  label S_LUNGS  = "S had lung dis since last IW";
  label S_MAMMOG  = "Prev Mammogram";
  label S1_MAP  = "S Diff-Use a map";
  label S2_MAP  = "S Diff-Use a map";
  label S_MAP  = "S Diff-Use a map";

 /* --Variable S_MAPA : # _510 */
  label S_MAPA  = "S Any Diff-Use a map";
  label S_MAPW  = "S Any Diff-Use a map";
  label S_MCURLN  = "S length of current marriage";
  label S_MCWV  = "S Diff-Use a microwave";
  label S_MCWVW  = "S Any Diff-Use a microwave";
  label S_MDACTX  = "S Freq moderate phys activ {finer scale}";
  label S_MDIV  = "S # times divorced";
  label S_MEALS  = "S Diff-Preparing hot meals";
  label S_MEALSA  = "S Any Diff-Prepare hot meal";
  label S_MEALSH  = "S Gets Help-Preparing hot meals";

 /* --Variable S_MEALSR : # _520 */
  label S_MEALSR  = "S Diff-Preparing hot meals";
  label S2_MEDS  = "S Diff-Take medications";
  label S_MEDS  = "S Diff-Take medications";
  label S_MEDSA  = "S Any Diff-Take medications";
  label S_MEDSH  = "S Gets Help-Take medications";
  label S_MEDSR  = "S Diff-Take medications";
  label S_MEDUC  = "Mother's Years Education";
  label S_MEMRY  = "S reports memory prob this wv";
  label S_MEMRYE  = "S ever had memory problem";
  label S_MEMRYEF  = "1st wv special missing memory problem";

 /* --Variable S_MEMRYF : # _530 */
  label S_MEMRYF  = "Flag chg prev memory prob";
  label S_MEMRYQ  = "Q-wording memory prob this wv";
  label S_MEMRYS  = "S had memory prob snce last IW";
  label S_MEND  = "S # times unknown end marriage";
  label S_MLEN  = "S length of longest marriage";
  label S_MLENM  = "S # marriage lengths missng";
  label S_MNEV  = "S never married";
  label S_MO  = "Cognition Date naming-Month";
  label S_MOBILA  = "Any Diff-sum of Mobility measures /0-5";
  label S_MOBILW  = "Any Diff-sum of Mobility measures /0-5";

 /* --Variable S_MOMAGE : # _540 */
  label S_MOMAGE  = "Mother age current/at death";
  label S_MOMLIV  = "Mother alive";
  label S2_MONEY  = "S Diff-Managing money";
  label S_MONEY  = "S Diff-Managing money";
  label S_MONEYA  = "S Any Diff-Managing money";
  label S_MONEYH  = "S Gets Help-Managing money";
  label S_MONEYR  = "S Diff-Managing money";
  label S_MPART  = "S partnered";
  label S_MRCT  = "S # marriages";
  label S_MRPREM  = "Medicare/Medicaid HMO Monthly Premium";

 /* --Variable S_MSTAT : # _550 */
  label S_MSTAT  = "S Marital Status";
  label S_MSTATF  = "S MStatH-Flag diff w/marhist";
  label S_MSTATH  = "S MarStat-w/o part,filled";
  label S_MSTOT  = "TOTAL MENTAL STATUS SUMMARY SCORE(W14: FTF/TEL*)";
  label S_MWID  = "S # times widowed";
  label S_NHMDAY  = "Days in NH from Move/PrvIvw";
  label S_NHMLIV  = "Live in Nurs home at Iview";
  label S_NHMMVM  = "Month moved to Nurs home";
  label S_NHMMVY  = "Year moved to Nurs home";
  label S_NOTICS  = "NOT ASKED TICS ITEMS";

 /* --Variable S_NOVOC : # _560 */
  label S_NOVOC  = "NOT ASKED VOCABULARY";
  label S_NRSHOM  = "Nurs home stay prv 2 yrs (W1: prv 12 mos*)";
  label S_NRSNIT  = "# Nights in nurs home prv 2 yrs (W1: prv 12 mos*)";
  label S_NRSTIM  = "# Nurs home stays prv 2 yrs (W1: prv 12 mos*)";
  label S_NSSCRE  = "S Calculated number series score";
  label S_NSSCSE  = "S Calculated number series score-SE";
  label S_OAHDID  = "case-Ahead core HHIDPN";
  label S_OHRSID  = "case-HRS core HHIDPN/Num";
  label S_OOPMD  = "Mexp Amt:Out of pkt med exp prv 2 yrs (W2: prv 12 mos*)";
  label S_OOPMDF  = "Mexp Flag:Out of pkt imputed";

 /* --Variable S_OOPMDO : # _570 */
  label S_OOPMDO  = "Mexp Amt:Out of pkt med exp w oth, prv 2 yrs";
  label S_OOPMDOF  = "Mexp Flag:Out of pkt w oth imputed";
  label S_OUTPT  = "Outpatient surgry prv 2 yrs (W2:  prv 1-,2-yr(A,H)*)";
  label S_PAPSM  = "Prev Pap Smear";
  label S_PARTD  = "S Medicare Part D status";
  label S_PENCT  = "# pensions current job";
  label S_PENIC1  = "Pen #1 Continue after death";
  label S_PENIC2  = "Pen #2 Continue after death";
  label S_PENINC  = "S current receiving pension income";
  label S_PENI_N  = "# pensions S receives income";

 /* --Variable S2_PHONE : # _580 */
  label S2_PHONE  = "S Diff-Use telephone";
  label S_PHONE  = "S Diff-Use telephone";
  label S_PHONEA  = "S Any Diff-Use telephone";
  label S_PHONEH  = "S Gets Help-Use telephone";
  label S_PHONER  = "S Diff-Use telephone";
  label S_PMBMI  = "S phys msr body mass index=kg/m2";
  label S_PMHGHT  = "S phys msr height in meters";
  label S_PMHGHTS  = "S phys msr height-Wore shoes";
  label S_PMWAIST  = "S phys msr waist";
  label S_PMWAISTC  = "S phys msr waist-Bulky clothes";

 /* --Variable S_PMWGHT : # _590 */
  label S_PMWGHT  = "S phys msr weight in kilograms";
  label S_PMWGHTF  = "S phys msr weight-Floor type";
  label S_PMWGHTS  = "S phys msr weight-Wore shoes";
  label S_PNHM5Y  = "S Prob moving to NHM in 5 yrs";
  label S_PRCHMEM  = "Rate S change in memory";
  label S_PRES  = "PRESIDENT";
  label S_PRMEM  = "Rate S memory";
  label S_PROST  = "Prev Prostate";
  label S_PROXY  = "Whether Proxy Interview";
  label S_PRPCNT  = "Number of Private Insurance Plans";

 /* --Variable S_PRPRM1 : # _600 */
  label S_PRPRM1  = "Private Insurance Plan 1 Monthly Premium";
  label S_PRPRM2  = "Private Insurance Plan 2 Monthly Premium";
  label S_PRPRM3  = "Private Insurance Plan 3 Monthly Premium";
  label S_PRSRC1  = "Private Insurance Plan 1 Source";
  label S_PRSRC2  = "Private Insurance Plan 2 Source";
  label S_PRSRC3  = "Private Insurance Plan 3 Source";
  label S_PSTMEM  = "MEMORY COMPARED TO PAST";
  label S_PSYCH  = "S reports psych prob this wv";
  label S_PSYCHE  = "S ever had psych problems";
  label S_PSYCHEF  = "1st wv special missing psych problems";

 /* --Variable S_PSYCHF : # _610 */
  label S_PSYCHF  = "Flag dispute chg psych probs";
  label S_PSYCHQ  = "Q-wording psych prob this wv";
  label S_PSYCHS  = "S had psych prob snce lastIW";
  label S_PTYP1  = "Current pension type #1";
  label S_PTYP2  = "Current pension type #2";
  label S_PTYP3  = "Current pension type #3";
  label S_PTYP4  = "Current pension type #4";
  label S_PTYPD1  = "Current pension type in detail #1";
  label S_PTYPD2  = "Current pension type in detail #2";
  label S_PTYPD3  = "Current pension type in detail #3";

 /* --Variable S_PTYPD4 : # _620 */
  label S_PTYPD4  = "Current pension type in detail #4";
  label S_PTYPF1  = "Does pension type match detail? #1";
  label S_PTYPF2  = "Does pension type match detail? #2";
  label S_PTYPF3  = "Does pension type match detail? #3";
  label S_PTYPF4  = "Does pension type match detail? #4";
  label S_PUFF  = "S breathing test";
  label S_PUFFPOS  = "S pos during breathing tests";
  label S1_PUSH  = "S Diff-Push/pull large obj";
  label S2_PUSH  = "S Diff-Push/pull large obj";
  label S_PUSH  = "S Diff-Push/pull large obj";

 /* --Variable S_PUSHA : # _630 */
  label S_PUSHA  = "S Any Diff-Push/pull lg obj";
  label S_PUSHW  = "S Any Diff-Push/pull lg obj";
  label S_RACEM  = "Race-masked";
  label S_RELIG  = "Religion";
  label S_RETDTWV  = "Wave retirement date reported";
  label S_RETEMP  = "S GIVES RETIRED IN EMPSTAT";
  label S_RETINC  = "S Worry-enough retiremnt inc";
  label S_RETLIV  = "S Expect-retiremt living std";
  label S_RETMON  = "Month Retired if say retired";
  label S_RETSAT  = "Ret Satisfying";

 /* --Variable S_RETWLT : # _640 */
  label S_RETWLT  = "S Expect-tot retirement wlth";
  label S_RETWRK  = "S Plan-paid work aft retired";
  label S_RETWSP  = "S Expect-SP retire same time";
  label S_RETYR  = "Year Retired if say retired";
  label S_RISK  = "S Income Risk Aversion";
  label S_RISK6  = "S Income Risk Avers/6-categ";
  label S_RPLNYA  = "When S thinks will stop work";
  label S_RPLNYR  = "When S plans to stop work";
  label S_RXPREM  = "Prescription Drug Insurance Monthly Premium";
  label S_RYRCMP  = "Ret Yrs Compared to Before";

 /* --Variable S_SADLF : # _650 */
  label S_SADLF  = "S Skip ADLs Flag";
  label S_SAMEJOB  = "Same Job title as last Wave";
  label S_SAMEMP  = "Same Employer as Last Wave";
  label S_SAYRET  = "S considers self retired";
  label S_SCIS  = "SCISSORS";
  label S_SDIAPL  = "Appealed SSDI decision since last wave";
  label S_SDIAPLM  = "Month appealed SSDI since last wave";
  label S_SDIAPLY  = "Year appealed SSDI since last wave";
  label S_SDIAPP  = "Applied for SSDI since last wave";
  label S_SDIAPPM  = "Month applied for SSDI since last wave";

 /* --Variable S_SDIAPPY : # _660 */
  label S_SDIAPPY  = "Year applied for SSDI since last wave";
  label S_SDIDEN  = "Denied SSDI since last wave";
  label S_SDIREC  = "Started receiving SSDI since last wave";
  label S_SDIRECM  = "Month started receiving SSDI since last wave";
  label S_SDIRECY  = "Year started receiving SSDI since last wave";
  label S_SDISTP  = "Stopped receiving SSDI since last wave";
  label S_SDISTPM  = "Month stopped receiving SSDI since last wave";
  label S_SDISTPY  = "Year stopped receiving SSDI since last wave";
  label S_SER7  = "SERIAL 7S";
  label S_SHLT  = "Self-report of health";

 /* --Variable S_SHLTC : # _670 */
  label S_SHLTC  = "Change in self-reported hlth";
  label S_SHLTCF  = "Flag chg self-reported hlth";
  label S_SHOP  = "S Diff-Shop for groceries";
  label S_SHOPA  = "S Any Diff-Shop for grocery";
  label S_SHOPH  = "S Gets Help-Shop for groceries";
  label S_SHOPR  = "S Diff-Shop for groceries";
  label S1_SIT  = "S Diff-Sit for 2 hours";
  label S2_SIT  = "S Diff-Sit for 2 hours";
  label S_SIT  = "S Diff-Sit for 2 hours";
  label S_SITA  = "S Any Diff-Sit for 2 hours";

 /* --Variable S_SITW : # _680 */
  label S_SITW  = "S Any Diff-Sit for 2 hours";
  label S_SLEEP  = "S reports sleep disorder this wv";
  label S_SLEEPE  = "S ever had sleep disorder";
  label S_SLEEPEF  = "1st wv special missing sleep disorder";
  label S_SLEEPQ  = "Q-wording sleep disorder this wv";
  label S_SLEEPR  = "CESD:Sleep was restless";
  label S_SLEEPS  = "S had sleep disorder snce last IW";
  label S_SLEEPX  = "CESD:Sleep was restless-raw";
  label S_SLFEMP  = "Whether Self-Employed";
  label S_SLFMEM  = "SELF RATED MEMORY";

 /* --Variable S_SMOKEN : # _690 */
  label S_SMOKEN  = "S smokes now";
  label S_SMOKEV  = "S smoke ever";
  label S_SPCFAC  = "Spec hlth facilty prv 2 yrs (W2:  prv 1-,2-yr(A,H)*)";
  label S_SSAPL  = "Appealed SSDI/SSI decision since last wave";
  label S_SSAPLM  = "Month appealed SSDI/SSI since last wave";
  label S_SSAPLY  = "Year appealed SSDI/SSI since last wave";
  label S_SSAPP  = "Applied for SSDI/SSI since last wave";
  label S_SSAPPM  = "Month applied for SSDI/SSI since last wave";
  label S_SSAPPY  = "Year applied for SSDI/SSI since last wave";
  label S_SSDEN  = "Denied SSDI/SSI since last wave";

 /* --Variable S_SSDI : # _700 */
  label S_SSDI  = "S IS RECEIVING SSDI";
  label S_SSIAPL  = "Appealed SSI decision since last wave";
  label S_SSIAPLM  = "Month appealed SSI since last wave";
  label S_SSIAPLY  = "Year appealed SSI since last wave";
  label S_SSIAPP  = "Applied for SSI since last wave";
  label S_SSIAPPM  = "Month applied for SSI since last wave";
  label S_SSIAPPY  = "Year applied for SSI since last wave";
  label S_SSIDEN  = "Denied SSI since last wave";
  label S_SSIREC  = "Started receiving SSI since last wave";
  label S_SSIRECM  = "Month started receiving SSI since last wave";

 /* --Variable S_SSIRECY : # _710 */
  label S_SSIRECY  = "Year started receiving SSI since last wave";
  label S_SSISTP  = "Stopped receiving SSI since last wave";
  label S_SSISTPM  = "Month stopped receiving SSI since last wave";
  label S_SSISTPY  = "Year stopped receiving SSI since last wave";
  label S_SSREC  = "Started receiving SSDI/SSI since last wave";
  label S_SSRECM  = "Month started receiving SSDI/SSI since last wave";
  label S_SSRECY  = "Year started receiving SSDI/SSI since last wave";
  label S_SSSTP  = "Stopped receiving SSDI/SSI since last wave";
  label S_SSSTPM  = "Month stopped receiving SSDI/SSI since last wave";
  label S_SSSTPY  = "Year stopped receiving SSDI/SSI since last wave";

 /* --Variable S_SSWRER : # _720 */
  label S_SSWRER  = "S SS wealth based on own earnings, claiming at 62";
  label S_SSWRNR  = "S SS wealth based on own earnings, claiming at NRA";
  label S_SSWRXA  = "S SS wealth based on own earnings, claiming at 70";
  label S_SSWSER  = "S SSW from spouse/survival benefits, claim at 62";
  label S_SSWSNR  = "S SSW from spouse/survival benefits, claim at NRA";
  label S_SSWSXA  = "S SSW from spouse/survival benefits, claim at 70";
  label S_STATUS  = "STATUS:IMPUTATION ELIGIBILITY STATUS";
  label S1_STOOP  = "S Diff-Stoop/Kneel/Crouch";
  label S2_STOOP  = "S Diff-Stoop/Kneel/Crouch";
  label S_STOOP  = "S Diff-Stoop/Kneel/Crouch";

 /* --Variable S_STOOPA : # _730 */
  label S_STOOPA  = "S Any Diff-Stoop/Kneel/Crch";
  label S_STOOPW  = "S Any Diff-Stoop/Kneel/Crouch";
  label S_STROK  = "S reports stroke this wv";
  label S_STROKE  = "S ever had stroke";
  label S_STROKEF  = "1st wv special missing stroke";
  label S_STROKF  = "Flag dispute chg stroke";
  label S_STROKQ  = "Q-wording stroke this wv";
  label S_STROKS  = "S had stroke since last IW";
  label S_TIMWLK  = "S timed walk test time";
  label S_TIMWLKA  = "S timed walk test-Walk aid used";

 /* --Variable S_TLIPRM : # _740 */
  label S_TLIPRM  = "Term Life Insurance Monthly Premium";
  label S2_TOILT  = "S Diff-Using the toilet";
  label S_TOILT  = "S Diff-Using the toilet";
  label S_TOILTA  = "S Any Diff-Using the toilet";
  label S2_TOILTH  = "S Gets Help-Using the toilet";
  label S_TOILTH  = "S Gets Help-Using the toilet";
  label S_TOTMBF  = "Tot Med Exp Bkt, ImpFlag";
  label S_TOTMBI  = "Imputed Tot Med Exp Bkt";
  label S_TOTMD  = "Total med expenses, prv 2 yrs";
  label S_TOTMDF  = "Total med imputed";

 /* --Variable S_TR20 : # _750 */
  label S_TR20  = "TOTAL WORD RECALL SUMMARY SCORE(W14: FTF/TEL*)";
  label S_TR40  = "TOTAL WORD RECALL SUMMARY SCORE";
  label S_TYLTC  = "S Type of Long Term Care Ins";
  label S_ULCER  = "Rs had ulcers";
  label S_UNEMP  = "=1 if S is unemployed";
  label S_UNION  = "S is covered by a union";
  label S_UNIONF  = "Carried forward value from prev wave";
  label S_VETRN  = "Veteran Status";
  label S_VGACTF  = "S Freq vigorous phys activ";
  label S_VGACTN  = "S # times/per vigor phys act";

 /* --Variable S_VGACTP : # _760 */
  label S_VGACTP  = "S Period vigor phys activ";
  label S_VGACTX  = "S Freq vigorous phys activ {finer scale}";
  label S_VIGACT  = "S Wtr vigorus phys act 3+/wk";
  label S_VOCAB  = "VOCAB SUM SCORE";
  label S_VP  = "VICE PRESIDENT";
  label S1_WALK1  = "S Diff-Walk one block";
  label S2_WALK1  = "S Diff-Walk one block";
  label S_WALK1  = "S Diff-Walk one block";
  label S_WALK1A  = "S Any Diff-Walk one block";
  label S_WALK1W  = "S Any Diff-Walk one block";

 /* --Variable S1_WALKR : # _770 */
  label S1_WALKR  = "S Diff-Walk across room";
  label S2_WALKR  = "S Diff-Walk across room";
  label S_WALKR  = "S Diff-Walk across room";
  label S_WALKRA  = "S Any Diff-Walk across room";
  label S_WALKRE  = "S Eqp-Walk across room";
  label S2_WALKRH  = "S Gets Help-Walk across room";
  label S_WALKRH  = "S Gets Help-Walk across room";
  label S_WALKRW  = "S Any Diff-Walk across room";
  label S1_WALKS  = "S Diff-Walk sev blocks";
  label S2_WALKS  = "S Diff-Walk sev blocks";

 /* --Variable S_WALKS : # _780 */
  label S_WALKS  = "S Diff-Walk sev blocks";
  label S_WALKSA  = "S Any Diff-Walk sev blocks";
  label S_WALKSW  = "S Any Diff-Walk sev blocks";
  label S_WANDER  = "S ever wander off";
  label S_WEIGHT  = "Self-reported weight in kilograms";
  label S_WGFHR  = "Impute Flag Wage Rate-Hrly";
  label S_WGFWK  = "Impute Flag Wage Rate-Wkly";
  label S_WGIHR  = "Imputed Wage Rate-Hrly";
  label S_WGIWK  = "Imputed Wage Rate-Wkly";
  label S_WHAPPX  = "CESD:Was happy-raw";

 /* --Variable S_WHAPPY : # _790 */
  label S_WHAPPY  = "CESD:Was happy";
  label S_WLIPRM  = "Whole Life Insurance Monthly Premium";
  label S_WORK  = "S working for pay";
  label S_WORK2  = "Works at 2nd job";
  label S_WORK62  = "S Prob working FT after 62";
  label S_WORK62F  = "Logical Skip Flag:P62";
  label S_WORK65  = "S Prob working FT after 65";
  label S_WORK65F  = "Logical Skip Flag:P65";
  label S_WORK70  = "S Prob working FT after 70";
  label S_WORK70A  = "S Prob working at all after 70";

 /* --Variable S_WORK70AF : # _800 */
  label S_WORK70AF  = "Logical Skip Flag:P70A";
  label S_WORK70F  = "Logical Skip Flag:P70";
  label S_WORKLM  = "S Prob health limiting work";
  label S_WTCRNH  = "Combined Respondent weight and NursHm Resident weight";
  label S_WTRESP  = "Person-Level Analysis Weight";
  label S_WTR_NH  = "NursHm Resident Analysis Weight";
  label S_YR  = "Cognition Date naming-Year";
%mend label_statements;


%macro clength_statements;
/*  Table SLong: Length statements for character and selected numeric vars */
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
/*  Table SLong: format statements for 512 variables */
/* Macro invoked by `create_template_longout` macro */
  format SASSRECV YESNO.;                   /* _17 */
  format S_AHDSMP AHDSMP.;                  /* _31 */
  format S_ALONE PRLOST.;                   /* _33 */
  format S_ALZHE RAWCOND.;                  /* _34 */
  format S_ALZHEE YESNO.;                   /* _35 */
  format S_ALZHEF MEMRYF.;                  /* _37 */
  format S_ALZHEQ CONDQ.;                   /* _38 */
  format S_ALZHES YESNOP.;                  /* _39 */
  format S_ANS3PQ YESNO.;                   /* _41 */
  format S1_ARMS ADL_1C.;                   /* _42 */
  format S2_ARMS ADL_2C.;                   /* _43 */
  format S_ARMS ADLA.;                      /* _44 */
  format S_ARMSA ADLA.;                     /* _45 */
  format S_ARMSW ADLA.;                     /* _46 */
  format S_ARTHR RAWCOND.;                  /* _47 */
  format S_ARTHRE YESNO.;                   /* _48 */
  format S_ARTHRF EVERF.;                   /* _50 */
  format S_ARTHRQ CONDQ.;                   /* _51 */
  format S_ARTHRS YESNOP.;                  /* _52 */
  format S_BACK PREVENT.;                   /* _54 */
  format S_BALFULC PHYSMEASBIN.;            /* _56 */
  format S_BALFULT PHYSMEASBIN.;            /* _57 */
  format S_BALSBSC PHYSMEASBIN.;            /* _59 */
  format S_BALSEMIC PHYSMEASBIN.;           /* _61 */
  format S1_BATH ADL_1C.;                   /* _62 */
  format S2_BATH ADL_2C.;                   /* _63 */
  format S_BATH ADLA.;                      /* _64 */
  format S_BATHA ADLA.;                     /* _65 */
  format S2_BATHH ADL_2H.;                  /* _66 */
  format S_BATHH ADL_7H.;                   /* _67 */
  format S_BATHW ADLA.;                     /* _68 */
  format S1_BED ADL_1C.;                    /* _70 */
  format S2_BED ADL_2C.;                    /* _71 */
  format S_BED ADLA.;                       /* _72 */
  format S_BEDA ADLA.;                      /* _73 */
  format S_BEDE EQVPMT.;                    /* _74 */
  format S2_BEDH ADL_2H.;                   /* _75 */
  format S_BEDH ADL_7H.;                    /* _76 */
  format S_BEDW ADLA.;                      /* _77 */
  format S_BEQLRG BEQLRG.;                  /* _82 */
  format S_BFLAG RABFLAG.;                  /* _83 */
  format S_BPLACE CENDIV.;                  /* _87 */
  format S_BPLACF BPLACF.;                  /* _88 */
  format S_BPPOS POSITION.;                 /* _89 */
  format S_BREAST PREVENT.;                 /* _92 */
  format S_BWC20 COGCNT.;                   /* _93 */
  format S_BWC86 COGCNT.;                   /* _94 */
  format S_CACT COGCORR.;                   /* _96 */
  format S1_CALC ADL_1C.;                   /* _97 */
  format S2_CALC ADL_2C.;                   /* _98 */
  format S_CALCA ADLA.;                     /* _99 */
  format S_CALCW ADLA.;                     /* _100 */
  format S_CANCR RAWCOND.;                  /* _101 */
  format S_CANCRE YESNO.;                   /* _102 */
  format S_CANCRF EVERF.;                   /* _104 */
  format S_CANCRQ CONDQ.;                   /* _105 */
  format S_CANCRS YESNOP.;                  /* _106 */
  format S_CENDIV CENDIV.;                  /* _107 */
  format S_CENREG CENREG.;                  /* _108 */
  format S1_CHAIR ADL_1C.;                  /* _111 */
  format S2_CHAIR ADL_2C.;                  /* _112 */
  format S_CHAIR ADLA.;                     /* _113 */
  format S_CHAIRA ADLA.;                    /* _114 */
  format S_CHAIRW ADLA.;                    /* _115 */
  format S_CHOLST PREVENT.;                 /* _116 */
  format S_CLAIMED YESNO.;                  /* _117 */
  format S1_CLIM1 ADL_1C.;                  /* _118 */
  format S2_CLIM1 ADL_2C.;                  /* _119 */
  format S_CLIM1 ADLA.;                     /* _120 */
  format S_CLIM1A ADLA.;                    /* _121 */
  format S_CLIM1W ADLA.;                    /* _122 */
  format S1_CLIMS ADL_1C.;                  /* _123 */
  format S2_CLIMS ADL_2C.;                  /* _124 */
  format S_CLIMS ADLA.;                     /* _125 */
  format S_CLIMSA ADLA.;                    /* _126 */
  format S_CLIMSW ADLA.;                    /* _127 */
  format S_COHBYR COHBYR.;                  /* _129 */
  format S_COMP ADL_1C.;                    /* _131 */
  format S_COMPW ADLA.;                     /* _132 */
  format S_CONDSP PRVIWF.;                  /* _137 */
  format S_COVR HINS.;                      /* _138 */
  format S_COVRT HINS.;                     /* _139 */
  format S_COVS HINS.;                      /* _140 */
  format S_DADLIV YNFAM.;                   /* _142 */
  format S_DCMODE1 DCF.;                    /* _157 */
  format S_DCMODE2 DCF.;                    /* _158 */
  format S_DCMODE3 DCF.;                    /* _159 */
  format S_DCMODE4 DCF.;                    /* _160 */
  format S_DEMEN RAWCOND.;                  /* _166 */
  format S_DEMENE YESNO.;                   /* _167 */
  format S_DEMENF MEMRYF.;                  /* _169 */
  format S_DEMENQ CONDQ.;                   /* _170 */
  format S_DEMENS YESNOP.;                  /* _171 */
  format S_DENTST YESNO.;                   /* _172 */
  format S_DEPRES YESNO.;                   /* _173 */
  format S_DEPREX R1CESD.;                  /* _174 */
  format S_DIAB RAWCOND.;                   /* _175 */
  format S_DIABE YESNO.;                    /* _176 */
  format S_DIABF EVERF.;                    /* _178 */
  format S_DIABQ CONDQ.;                    /* _179 */
  format S_DIABS YESNOP.;                   /* _180 */
  format S1_DIME ADL_1C.;                   /* _181 */
  format S2_DIME ADL_2C.;                   /* _182 */
  format S_DIME ADLA.;                      /* _183 */
  format S_DIMEA ADLA.;                     /* _184 */
  format S_DIMEW ADLA.;                     /* _185 */
  format S_DOCTOR YESNO.;                   /* _190 */
  format S1_DRESS ADL_1C.;                  /* _191 */
  format S2_DRESS ADL_2C.;                  /* _192 */
  format S_DRESS ADLA.;                     /* _193 */
  format S_DRESSA ADLA.;                    /* _194 */
  format S2_DRESSH ADL_2H.;                 /* _195 */
  format S_DRESSH ADL_7H.;                  /* _196 */
  format S_DRESSW ADLA.;                    /* _197 */
  format S_DRINK YESNO.;                    /* _198 */
  format S_DRINKD DRINKX.;                  /* _199 */
  format S_DRINKN DRINKX.;                  /* _200 */
  format S_DRINKR DRINKR.;                  /* _201 */
  format S_DRUGS YESNO.;                    /* _202 */
  format S_DSRC DDSRC.;                     /* _204 */
  format S_DSTAT RFDSTAT.;                  /* _206 */
  format S_DW COGCORR.;                     /* _208 */
  format S_DY COGCORR.;                     /* _209 */
  format S1_EAT ADL_1C.;                    /* _211 */
  format S2_EAT ADL_2C.;                    /* _212 */
  format S_EAT ADLA.;                       /* _213 */
  format S_EATA ADLA.;                      /* _214 */
  format S2_EATH ADL_2H.;                   /* _215 */
  format S_EATH ADL_7H.;                    /* _216 */
  format S_EATW ADLA.;                      /* _217 */
  format S_EDEGRM EDEGRM.;                  /* _218 */
  format S_EDUC EDUC.;                      /* _219 */
  format S_EDYRS EDYRS.;                    /* _220 */
  format S_EFFORT YESNO.;                   /* _221 */
  format S_EFFORX R1CESD.;                  /* _222 */
  format S_ENLIFE YESNO.;                   /* _223 */
  format S_ENLIFX R1CESD.;                  /* _224 */
  format S_EVBRNF EVRBORNF.;                /* _226 */
  format S_FAMR YESNO.;                     /* _227 */
  format S_FBWC20 COGIMP.;                  /* _228 */
  format S_FBWC86 COGIMP.;                  /* _229 */
  format S_FCACT COGIMP.;                   /* _230 */
  format S_FDLRC COGIMP.;                   /* _231 */
  format S_FDW COGIMP.;                     /* _232 */
  format S_FDY COGIMP.;                     /* _233 */
  format S_FEDUC MFEDYRS.;                  /* _234 */
  format S_FIMRC COGIMP.;                   /* _235 */
  format S_FINPLN FINPLN.;                  /* _237 */
  format S_FINR YESNO.;                     /* _238 */
  format S_FLAG WFLAG.;                     /* _239 */
  format S_FLONE YESNO.;                    /* _240 */
  format S_FLONEX R1CESD.;                  /* _241 */
  format S_FLUSHT PREVENT.;                 /* _242 */
  format S_FMO COGIMP.;                     /* _243 */
  format S_FPRES COGIMP.;                   /* _244 */
  format S_FPSTME COGIMP.;                  /* _245 */
  format S_FSAD YESNO.;                     /* _246 */
  format S_FSADX R1CESD.;                   /* _247 */
  format S_FSCIS COGIMP.;                   /* _248 */
  format S_FSER7 COGIMP.;                   /* _249 */
  format S_FSIZEF FORWARD.;                 /* _251 */
  format S_FSLFME COGIMP.;                  /* _252 */
  format S_FVOCAB COGIMP.;                  /* _253 */
  format S_FVP COGIMP.;                     /* _254 */
  format S_FYR COGIMP.;                     /* _255 */
  format S_GENDER GENDER.;                  /* _256 */
  format S_GOING YESNO.;                    /* _257 */
  format S_GOINGX R1CESD.;                  /* _258 */
  format S_GOVMD YESNO.;                    /* _259 */
  format S_GOVMR YESNO.;                    /* _260 */
  format S_GOVOT YESNO.;                    /* _261 */
  format S_GOVVA YESNO.;                    /* _262 */
  format S_GRPDOM GRPDOM.;                  /* _265 */
  format S_GRPPOS POSITION.;                /* _267 */
  format S_HALUC PRLOST.;                   /* _269 */
  format S_HEART RAWCOND.;                  /* _271 */
  format S_HEARTE YESNO.;                   /* _272 */
  format S_HEARTF EVERF.;                   /* _274 */
  format S_HEARTQ CONDQ.;                   /* _275 */
  format S_HEARTS YESNOP.;                  /* _276 */
  format S_HECOV1 RHCOV.;                   /* _277 */
  format S_HECOV2 RHCOV.;                   /* _278 */
  format S_HECOV3 RHCOV.;                   /* _279 */
  format S_HERET COVRT.;                    /* _282 */
  format S_HERTR1 COVRT.;                   /* _283 */
  format S_HERTR2 COVRT.;                   /* _284 */
  format S_HERTR3 COVRT.;                   /* _285 */
  format S_HERTS1 COVRT.;                   /* _286 */
  format S_HERTS2 COVRT.;                   /* _287 */
  format S_HERTS3 COVRT.;                   /* _288 */
  format S_HESRC1 RHSRC.;                   /* _289 */
  format S_HESRC2 RHSRC.;                   /* _290 */
  format S_HESRC3 RHSRC.;                   /* _291 */
  format S_HIBP RAWCOND.;                   /* _293 */
  format S_HIBPE YESNO.;                    /* _294 */
  format S_HIBPF EVERF.;                    /* _296 */
  format S_HIBPQ CONDQ.;                    /* _297 */
  format S_HIBPS YESNOP.;                   /* _298 */
  format S_HIGOV YESNO.;                    /* _299 */
  format S_HILTC YESNO.;                    /* _300 */
  format S_HIOTHP HINS.;                    /* _302 */
  format S_HISPAN HISPANIC.;                /* _303 */
  format S_HLTC3 HLTC3_.;                   /* _325 */
  format S_HLTC5 HLTC.;                     /* _326 */
  format S_HLTC5F HLTCF.;                   /* _327 */
  format S_HLTHLM YESNOW.;                  /* _328 */
  format S_HOMCAR HOMCAR.;                  /* _329 */
  format S_HOSP YESNO.;                     /* _330 */
  format S_HRSAMP HRSAMP.;                  /* _331 */
  format S_HSWRKF ACTF.;                    /* _334 */
  format S_IFANN INCSUMF.;                  /* _340 */
  format S_IFEARN INCSUMF.;                 /* _341 */
  format S_IFGXFR INCSUMF.;                 /* _342 */
  format S_IFIRAW INCSUMF.;                 /* _343 */
  format S_IFIRAWY1 INCSUMF.;               /* _344 */
  format S_IFPEN INCSUMF.;                  /* _345 */
  format S_IFPENA INCSUMF.;                 /* _346 */
  format S_IFSDI INCIMPF.;                  /* _347 */
  format S_IFSRET INCSUMF.;                 /* _348 */
  format S1_IFSSDI INCSUMF.;                /* _349 */
  format S_IFSSDI INCSUMF.;                 /* _350 */
  format S_IFSSI INCIMPF.;                  /* _351 */
  format S_IFUNEM INCIMPF.;                 /* _352 */
  format S1_IFUNWC INCSUMF.;                /* _353 */
  format S2_IFUNWC INCSUMF.;                /* _354 */
  format S_IFWCMP INCIMPF.;                 /* _355 */
  format S_INHPE YESNO.;                    /* _362 */
  format S_INLBRF UNEMP.;                   /* _368 */
  format S_IWBEGF IWDTF.;                   /* _378 */
  format S_IWENDF IWDTF.;                   /* _381 */
  format S_IWMIDF IWMIDF.;                  /* _385 */
  format S_IWSTAT IWSTAT.;                  /* _386 */
  format S_JCIND INDUS.;                    /* _387 */
  format S_JCINDB INDUSB.;                  /* _388 */
  format S_JCINDC INDUSC.;                  /* _389 */
  format S_JCOCC OCCUP.;                    /* _390 */
  format S_JCOCCA OCCUPA.;                  /* _391 */
  format S_JCOCCB OCCUPB.;                  /* _392 */
  format S_JCOCCC OCCUPC.;                  /* _393 */
  format S_JCPEN JCPEN.;                    /* _394 */
  format S_JCPENF JCPENF.;                  /* _395 */
  format S_JJOBS JJOBS.;                    /* _399 */
  format S_JLIFT JOBREQ.;                   /* _402 */
  format S_JLIND INDUS.;                    /* _403 */
  format S_JLINDB INDUSB.;                  /* _404 */
  format S_JLINDC INDUSC.;                  /* _405 */
  format S_JLOCC OCCUP.;                    /* _407 */
  format S_JLOCCA OCCUPA.;                  /* _408 */
  format S_JLOCCB OCCUPB.;                  /* _409 */
  format S_JLOCCC OCCUPC.;                  /* _410 */
  format S_JLTENF JLTENF.;                  /* _412 */
  format S1_JOG ADL_1C.;                    /* _416 */
  format S2_JOG ADL_2C.;                    /* _417 */
  format S_JOG ADLA.;                       /* _418 */
  format S_JOGA ADLA.;                      /* _419 */
  format S_JOGW ADLA.;                      /* _420 */
  format S_JPHYS JOBREQ.;                   /* _421 */
  format S_JSIGHT JOBREQ.;                  /* _422 */
  format S_JSTOOP JOBREQ.;                  /* _423 */
  format S_JSTRES STRESS.;                  /* _424 */
  format S_JYEARM JYEARM.;                  /* _427 */
  format S_LBASSISTPRB LBOCS.;              /* _430 */
  format S_LBCOMP LBCOMP.;                  /* _431 */
  format S_LBELIG LBELIG.;                  /* _434 */
  format S_LBFAMDRUGPRB LBOCS.;             /* _436 */
  format S_LBFAMHLTHPRB LBOCS.;             /* _437 */
  format S_LBFINPRB LBOCS.;                 /* _438 */
  format S_LBHLTHPRB LBOCS.;                /* _439 */
  format S_LBHOUSEPRB LBOCS.;               /* _440 */
  format S_LBRF LBRF.;                      /* _450 */
  format S_LBRFH LBRF.;                     /* _451 */
  format S_LBRFY LBRFY.;                    /* _452 */
  format S_LBRLTNSHPRB LBOCS.;              /* _453 */
  format S_LBSATCITY LBLFSAT5F.;            /* _454 */
  format S_LBSATFAM LBLFSAT5F.;             /* _455 */
  format S_LBSATFIN LBLFSAT5F.;             /* _456 */
  format S_LBSATHLTH LBLFSAT5F.;            /* _457 */
  format S_LBSATHOME LBLFSAT5F.;            /* _458 */
  format S_LBSATINC LBLFSAT5F.;             /* _459 */
  format S_LBSATLEISURE LBLFSAT5F.;         /* _460 */
  format S_LBSATLIFE LBLFSAT5F.;            /* _461 */
  format S_LBWORKPRB LBOCS.;                /* _464 */
  format S_LHTACT YESNO.;                   /* _467 */
  format S_LIFEIN YESNO.;                   /* _468 */
  format S1_LIFT ADL_1C.;                   /* _469 */
  format S2_LIFT ADL_2C.;                   /* _470 */
  format S_LIFT ADLA.;                      /* _471 */
  format S_LIFTA ADLA.;                     /* _472 */
  format S_LIFTW ADLA.;                     /* _473 */
  format S_LIV75F PRVIWF.;                  /* _480 */
  format S_LIV85F PRVIWF.;                  /* _485 */
  format S_LIV8XF PRVIWF.;                  /* _489 */
  format S_LOST PRLOST.;                    /* _494 */
  format S_LTACTF ACTF.;                    /* _495 */
  format S_LTACTP ACTP.;                    /* _497 */
  format S_LTACTX ACTX.;                    /* _498 */
  format S_LUNG RAWCOND.;                   /* _500 */
  format S_LUNGE YESNO.;                    /* _501 */
  format S_LUNGF EVERF.;                    /* _503 */
  format S_LUNGQ CONDQ.;                    /* _504 */
  format S_LUNGS YESNOP.;                   /* _505 */
  format S_MAMMOG PREVENT.;                 /* _506 */
  format S1_MAP ADL_1C.;                    /* _507 */
  format S2_MAP ADL_2C.;                    /* _508 */
  format S_MAP ADLA.;                       /* _509 */
  format S_MAPA ADLA.;                      /* _510 */
  format S_MAPW ADLA.;                      /* _511 */
  format S_MCWV ADL_1C.;                    /* _513 */
  format S_MCWVW ADLA.;                     /* _514 */
  format S_MDACTX ACTX.;                    /* _515 */
  format S_MDIV NMAR.;                      /* _516 */
  format S_MEALS ADLA.;                     /* _517 */
  format S_MEALSA ADLA.;                    /* _518 */
  format S_MEALSH ADL_7H.;                  /* _519 */
  format S_MEALSR ADL_2I.;                  /* _520 */
  format S2_MEDS ADL_2C.;                   /* _521 */
  format S_MEDS ADLA.;                      /* _522 */
  format S_MEDSA ADLA.;                     /* _523 */
  format S_MEDSH ADL_7H.;                   /* _524 */
  format S_MEDSR ADL_2I.;                   /* _525 */
  format S_MEDUC MFEDYRS.;                  /* _526 */
  format S_MEMRY RAWCOND.;                  /* _527 */
  format S_MEMRYE YESNO.;                   /* _528 */
  format S_MEMRYF MEMRYF.;                  /* _530 */
  format S_MEMRYQ CONDQ.;                   /* _531 */
  format S_MEMRYS YESNOP.;                  /* _532 */
  format S_MEND NMAR.;                      /* _533 */
  format S_MNEV MNEV.;                      /* _536 */
  format S_MO COGCORR.;                     /* _537 */
  format S_MOMLIV YNFAM.;                   /* _541 */
  format S2_MONEY ADL_2C.;                  /* _542 */
  format S_MONEY ADLA.;                     /* _543 */
  format S_MONEYA ADLA.;                    /* _544 */
  format S_MONEYH ADL_7H.;                  /* _545 */
  format S_MONEYR ADL_2I.;                  /* _546 */
  format S_MPART YESNO.;                    /* _547 */
  format S_MRCT NMAR.;                      /* _548 */
  format S_MSTAT MSTATUS.;                  /* _550 */
  format S_MSTATF MSTATF.;                  /* _551 */
  format S_MSTATH MSTATH.;                  /* _552 */
  format S_MWID NMAR.;                      /* _554 */
  format S_NHMLIV YESNO.;                   /* _556 */
  format S_NOTICS COGNA.;                   /* _559 */
  format S_NOVOC COGNA.;                    /* _560 */
  format S_NRSHOM YESNO.;                   /* _561 */
  format S_OOPMDF MDIMPH.;                  /* _569 */
  format S_OOPMDOF MDIMP.;                  /* _571 */
  format S_OUTPT YESNO.;                    /* _572 */
  format S_PAPSM PREVENT.;                  /* _573 */
  format S_PARTD PARTD.;                    /* _574 */
  format S_PENCT PENNF.;                    /* _575 */
  format S_PENIC1 PENCF.;                   /* _576 */
  format S_PENIC2 PENCF.;                   /* _577 */
  format S_PENINC YESNO.;                   /* _578 */
  format S_PENI_N PENI_N.;                  /* _579 */
  format S2_PHONE ADL_2C.;                  /* _580 */
  format S_PHONE ADLA.;                     /* _581 */
  format S_PHONEA ADLA.;                    /* _582 */
  format S_PHONEH ADL_7H.;                  /* _583 */
  format S_PHONER ADL_2I.;                  /* _584 */
  format S_PMHGHTS PHYSMEASBIN.;            /* _587 */
  format S_PMWAISTC PHYSMEASBIN.;           /* _589 */
  format S_PMWGHTF FLOORT.;                 /* _591 */
  format S_PMWGHTS PHYSMEASBIN.;            /* _592 */
  format S_PRCHMEM PRCHMEMRY.;              /* _594 */
  format S_PRES COGCORR.;                   /* _595 */
  format S_PRMEM PRMEMRY.;                  /* _596 */
  format S_PROST PREVENT.;                  /* _597 */
  format S_PROXY PROXY.;                    /* _598 */
  format S_PRSRC1 PRSRC.;                   /* _603 */
  format S_PRSRC2 PRSRC.;                   /* _604 */
  format S_PRSRC3 PRSRC.;                   /* _605 */
  format S_PSTMEM COGMEMP.;                 /* _606 */
  format S_PSYCH RAWCOND.;                  /* _607 */
  format S_PSYCHE YESNO.;                   /* _608 */
  format S_PSYCHF EVERF.;                   /* _610 */
  format S_PSYCHQ CONDQ.;                   /* _611 */
  format S_PSYCHS YESNOP.;                  /* _612 */
  format S_PTYP1 PENTYP.;                   /* _613 */
  format S_PTYP2 PENTYP.;                   /* _614 */
  format S_PTYP3 PENTYP.;                   /* _615 */
  format S_PTYP4 PENTYP.;                   /* _616 */
  format S_PTYPD1 PENTYPD.;                 /* _617 */
  format S_PTYPD2 PENTYPD.;                 /* _618 */
  format S_PTYPD3 PENTYPD.;                 /* _619 */
  format S_PTYPD4 PENTYPD.;                 /* _620 */
  format S_PTYPF1 PENYESNO.;                /* _621 */
  format S_PTYPF2 PENYESNO.;                /* _622 */
  format S_PTYPF3 PENYESNO.;                /* _623 */
  format S_PTYPF4 PENYESNO.;                /* _624 */
  format S_PUFFPOS POSITION.;               /* _626 */
  format S1_PUSH ADL_1C.;                   /* _627 */
  format S2_PUSH ADL_2C.;                   /* _628 */
  format S_PUSH ADLA.;                      /* _629 */
  format S_PUSHA ADLA.;                     /* _630 */
  format S_PUSHW ADLA.;                     /* _631 */
  format S_RACEM RACEM.;                    /* _632 */
  format S_RELIG RELIG.;                    /* _633 */
  format S_RETEMP RETEMP.;                  /* _635 */
  format S_RETINC RETINC.;                  /* _636 */
  format S_RETLIV RETLIV.;                  /* _637 */
  format S_RETSAT RETSAT.;                  /* _639 */
  format S_RETWRK RETWRK.;                  /* _641 */
  format S_RETWSP RETWSP.;                  /* _642 */
  format S_RISK RISK.;                      /* _644 */
  format S_RISK6 RISKA.;                    /* _645 */
  format S_RYRCMP RYRCMP.;                  /* _649 */
  format S_SADLF SADLF.;                    /* _650 */
  format S_SAMEJOB SAMEJOB.;                /* _651 */
  format S_SAMEMP SAMEMP.;                  /* _652 */
  format S_SAYRET SAYRET.;                  /* _653 */
  format S_SCIS COGCORR.;                   /* _654 */
  format S_SDIAPL DISABW.;                  /* _655 */
  format S_SDIAPP DISABW.;                  /* _658 */
  format S_SDIDEN DISABW.;                  /* _661 */
  format S_SDIREC DISABW.;                  /* _662 */
  format S_SDISTP DISABW.;                  /* _665 */
  format S_SHLT SHLT.;                      /* _669 */
  format S_SHLTCF PRVIWF.;                  /* _671 */
  format S_SHOP ADLA.;                      /* _672 */
  format S_SHOPA ADLA.;                     /* _673 */
  format S_SHOPH ADL_7H.;                   /* _674 */
  format S_SHOPR ADL_2I.;                   /* _675 */
  format S1_SIT ADL_1C.;                    /* _676 */
  format S2_SIT ADL_2C.;                    /* _677 */
  format S_SIT ADLA.;                       /* _678 */
  format S_SITA ADLA.;                      /* _679 */
  format S_SITW ADLA.;                      /* _680 */
  format S_SLEEP RAWCOND.;                  /* _681 */
  format S_SLEEPE YESNO.;                   /* _682 */
  format S_SLEEPQ SLEEPQ.;                  /* _684 */
  format S_SLEEPR YESNO.;                   /* _685 */
  format S_SLEEPS YESNOP.;                  /* _686 */
  format S_SLEEPX R1CESD.;                  /* _687 */
  format S_SLFEMP SLFEMP.;                  /* _688 */
  format S_SLFMEM COGMEMS.;                 /* _689 */
  format S_SMOKEN YESNOS.;                  /* _690 */
  format S_SMOKEV SMOKEV.;                  /* _691 */
  format S_SPCFAC HOMCAR.;                  /* _692 */
  format S_SSAPL DISABW.;                   /* _693 */
  format S_SSAPP DISABW.;                   /* _696 */
  format S_SSDEN DISABW.;                   /* _699 */
  format S_SSDI YESNO.;                     /* _700 */
  format S_SSIAPL DISABW.;                  /* _701 */
  format S_SSIAPP DISABW.;                  /* _704 */
  format S_SSIDEN DISABW.;                  /* _707 */
  format S_SSIREC DISABW.;                  /* _708 */
  format S_SSISTP DISABW.;                  /* _711 */
  format S_SSREC DISABW.;                   /* _714 */
  format S_SSSTP DISABW.;                   /* _717 */
  format S_STATUS COGSTAT.;                 /* _726 */
  format S1_STOOP ADL_1C.;                  /* _727 */
  format S2_STOOP ADL_2C.;                  /* _728 */
  format S_STOOP ADLA.;                     /* _729 */
  format S_STOOPA ADLA.;                    /* _730 */
  format S_STOOPW ADLA.;                    /* _731 */
  format S_STROK RAWCOND.;                  /* _732 */
  format S_STROKE YESNO.;                   /* _733 */
  format S_STROKF EVERF.;                   /* _735 */
  format S_STROKQ CONDQ.;                   /* _736 */
  format S_STROKS YESNOP.;                  /* _737 */
  format S_TIMWLKA TIMWLKA.;                /* _739 */
  format S2_TOILT ADL_2C.;                  /* _741 */
  format S_TOILT ADLA.;                     /* _742 */
  format S_TOILTA ADLA.;                    /* _743 */
  format S2_TOILTH ADL_2H.;                 /* _744 */
  format S_TOILTH ADL_7H.;                  /* _745 */
  format S_TOTMBF MDIMP.;                   /* _746 */
  format S_TOTMBI TOTMBR.;                  /* _747 */
  format S_TOTMDF MEDIMPF.;                 /* _749 */
  format S_TYLTC TYLTC.;                    /* _752 */
  format S_ULCER YESNO.;                    /* _753 */
  format S_UNEMP UNEMP.;                    /* _754 */
  format S_UNION UNION.;                    /* _755 */
  format S_UNIONF FORWARD.;                 /* _756 */
  format S_VETRN YESNO.;                    /* _757 */
  format S_VGACTF ACTF.;                    /* _758 */
  format S_VGACTP ACTP.;                    /* _760 */
  format S_VGACTX ACTX.;                    /* _761 */
  format S_VIGACT YESNO.;                   /* _762 */
  format S_VOCAB COGMISS.;                  /* _763 */
  format S_VP COGCORR.;                     /* _764 */
  format S1_WALK1 ADL_1C.;                  /* _765 */
  format S2_WALK1 ADL_2C.;                  /* _766 */
  format S_WALK1 ADLA.;                     /* _767 */
  format S_WALK1A ADLA.;                    /* _768 */
  format S_WALK1W ADLA.;                    /* _769 */
  format S1_WALKR ADL_1C.;                  /* _770 */
  format S2_WALKR ADL_2C.;                  /* _771 */
  format S_WALKR ADLA.;                     /* _772 */
  format S_WALKRA ADLA.;                    /* _773 */
  format S_WALKRE EQVPMT.;                  /* _774 */
  format S2_WALKRH ADL_2H.;                 /* _775 */
  format S_WALKRH ADL_7H.;                  /* _776 */
  format S_WALKRW ADLA.;                    /* _777 */
  format S1_WALKS ADL_1C.;                  /* _778 */
  format S2_WALKS ADL_2C.;                  /* _779 */
  format S_WALKS ADLA.;                     /* _780 */
  format S_WALKSA ADLA.;                    /* _781 */
  format S_WALKSW ADLA.;                    /* _782 */
  format S_WANDER PRLOST.;                  /* _783 */
  format S_WGFHR WGF.;                      /* _785 */
  format S_WGFWK WGF.;                      /* _786 */
  format S_WHAPPX R1CESD.;                  /* _789 */
  format S_WHAPPY YESNO.;                   /* _790 */
  format S_WORK WORK.;                      /* _792 */
  format S_WORK2 WORK.;                     /* _793 */
  format S_WORK62F WORKFLAGS.;              /* _795 */
  format S_WORK65F WORKFLAGS.;              /* _797 */
  format S_WORK70AF WORKFLAGS.;             /* _800 */
  format S_WORK70F WORKFLAGS.;              /* _801 */
  format S_YR COGCORR.;                     /* _806 */
%mend format_statements;



%macro readvar1_list;
/* List of variables to be read from input dataset */
  HHID                                      /* 1 */
  PN                                        /* 2 */
  HHIDPN                                    /* 3 */
  RAHHIDPN                                  /* 4 */
  HACOHORT                                  /* 5 */
  SASSAGEB                                  /* 15 */
  SASSAGEM                                  /* 16 */
  SASSRECV                                  /* 17 */
%mend readvar1_list;

%macro keep_varlist;
/* Table SLong: List of 806 variables to keep */
  HHID
  PN
  HHIDPN
  RAHHIDPN
  HACOHORT
  WAVE_NUMBER
  WAVE_NAME
  studyyr
  CYEAR
  H_HHID
  H_HHIDC
  SUBHH
  INW
  S_HHIDPN
  SASSAGEB
  SASSAGEM
  SASSRECV
  S_ACGTOT
  S_ADL5A
  S_ADL5H
  S_ADL6A
  S_ADL6H
  S_ADLR10
  S_ADLW
  S_AGEM_B
  S_AGEM_E
  S_AGEM_M
  S_AGEY_B
  S_AGEY_E
  S_AGEY_M
  S_AHDSMP
  S_AIMR10
  S_ALONE
  S_ALZHE
  S_ALZHEE
  S_ALZHEEF
  S_ALZHEF
  S_ALZHEQ
  S_ALZHES
  S_AMSTOT
  S_ANS3PQ
  S1_ARMS
  S2_ARMS
  S_ARMS
  S_ARMSA
  S_ARMSW
  S_ARTHR
  S_ARTHRE
  S_ARTHREF
  S_ARTHRF
  S_ARTHRQ
  S_ARTHRS
  S_ATR20
  S_BACK
  S_BALFUL
  S_BALFULC
  S_BALFULT
  S_BALSBS
  S_BALSBSC
  S_BALSEMI
  S_BALSEMIC
  S1_BATH
  S2_BATH
  S_BATH
  S_BATHA
  S2_BATHH
  S_BATHH
  S_BATHW
  S_BDATE
  S1_BED
  S2_BED
  S_BED
  S_BEDA
  S_BEDE
  S2_BEDH
  S_BEDH
  S_BEDW
  S_BEQ100
  S_BEQ10K
  S_BEQ500
  S_BEQANY
  S_BEQLRG
  S_BFLAG
  S_BMI
  S_BMONTH
  S_BPDIA
  S_BPLACE
  S_BPLACF
  S_BPPOS
  S_BPPULS
  S_BPSYS
  S_BREAST
  S_BWC20
  S_BWC86
  S_BYEAR
  S_CACT
  S1_CALC
  S2_CALC
  S_CALCA
  S_CALCW
  S_CANCR
  S_CANCRE
  S_CANCREF
  S_CANCRF
  S_CANCRQ
  S_CANCRS
  S_CENDIV
  S_CENREG
  S_CESD
  S_CESDM
  S1_CHAIR
  S2_CHAIR
  S_CHAIR
  S_CHAIRA
  S_CHAIRW
  S_CHOLST
  S_CLAIMED
  S1_CLIM1
  S2_CLIM1
  S_CLIM1
  S_CLIM1A
  S_CLIM1W
  S1_CLIMS
  S2_CLIMS
  S_CLIMS
  S_CLIMSA
  S_CLIMSW
  S_COGTOT
  S_COHBYR
  S_COHORT
  S_COMP
  S_COMPW
  S_CONDE
  S_CONDEF
  S_CONDS
  S_CONDSF
  S_CONDSP
  S_COVR
  S_COVRT
  S_COVS
  S_DADAGE
  S_DADLIV
  S_DAGE_M
  S_DAGE_Y
  S_DCBAL1
  S_DCBAL2
  S_DCBAL3
  S_DCBAL4
  S_DCBENE1
  S_DCBENE2
  S_DCBENE3
  S_DCBENE4
  S_DCCONT1
  S_DCCONT2
  S_DCCONT3
  S_DCCONT4
  S_DCMODE1
  S_DCMODE2
  S_DCMODE3
  S_DCMODE4
  S_DCPCT1
  S_DCPCT2
  S_DCPCT3
  S_DCPCT4
  S_DDATE
  S_DEMEN
  S_DEMENE
  S_DEMENEF
  S_DEMENF
  S_DEMENQ
  S_DEMENS
  S_DENTST
  S_DEPRES
  S_DEPREX
  S_DIAB
  S_DIABE
  S_DIABEF
  S_DIABF
  S_DIABQ
  S_DIABS
  S1_DIME
  S2_DIME
  S_DIME
  S_DIMEA
  S_DIMEW
  S_DLRC
  S_DLRC20
  S_DMONTH
  S_DOCTIM
  S_DOCTOR
  S1_DRESS
  S2_DRESS
  S_DRESS
  S_DRESSA
  S2_DRESSH
  S_DRESSH
  S_DRESSW
  S_DRINK
  S_DRINKD
  S_DRINKN
  S_DRINKR
  S_DRUGS
  S_DSIAMT
  S_DSRC
  S_DSSAMT
  S_DSTAT
  S_DTIMTDTH
  S_DW
  S_DY
  S_DYEAR
  S1_EAT
  S2_EAT
  S_EAT
  S_EATA
  S2_EATH
  S_EATH
  S_EATW
  S_EDEGRM
  S_EDUC
  S_EDYRS
  S_EFFORT
  S_EFFORX
  S_ENLIFE
  S_ENLIFX
  S_EVBRN
  S_EVBRNF
  S_FAMR
  S_FBWC20
  S_FBWC86
  S_FCACT
  S_FDLRC
  S_FDW
  S_FDY
  S_FEDUC
  S_FIMRC
  S_FINEA
  S_FINPLN
  S_FINR
  S_FLAG
  S_FLONE
  S_FLONEX
  S_FLUSHT
  S_FMO
  S_FPRES
  S_FPSTME
  S_FSAD
  S_FSADX
  S_FSCIS
  S_FSER7
  S_FSIZE
  S_FSIZEF
  S_FSLFME
  S_FVOCAB
  S_FVP
  S_FYR
  S_GENDER
  S_GOING
  S_GOINGX
  S_GOVMD
  S_GOVMR
  S_GOVOT
  S_GOVVA
  S_GROSSA
  S_GRP
  S_GRPDOM
  S_GRPL
  S_GRPPOS
  S_GRPR
  S_HALUC
  S_HDLR20
  S_HEART
  S_HEARTE
  S_HEARTEF
  S_HEARTF
  S_HEARTQ
  S_HEARTS
  S_HECOV1
  S_HECOV2
  S_HECOV3
  S_HEIGHT
  S_HENUM
  S_HERET
  S_HERTR1
  S_HERTR2
  S_HERTR3
  S_HERTS1
  S_HERTS2
  S_HERTS3
  S_HESRC1
  S_HESRC2
  S_HESRC3
  S_HHIDPN
  S_HIBP
  S_HIBPE
  S_HIBPEF
  S_HIBPF
  S_HIBPQ
  S_HIBPS
  S_HIGOV
  S_HILTC
  S_HIMR20
  S_HIOTHP
  S_HISPAN
  S_HLPDYSF
  S_HLPDYSNF
  S_HLPDYSP
  S_HLPDYST
  S_HLPDYSU
  S_HLPHRSF
  S_HLPHRSNF
  S_HLPHRSP
  S_HLPHRST
  S_HLPHRSU
  S_HLPPDFA
  S_HLPPDFN
  S_HLPPDNFA
  S_HLPPDNFN
  S_HLPPDTA
  S_HLPPDTN
  S_HLPRFN
  S_HLPRNFN
  S_HLPRPN
  S_HLPRTN
  S_HLPRUN
  S_HLTC3
  S_HLTC5
  S_HLTC5F
  S_HLTHLM
  S_HOMCAR
  S_HOSP
  S_HRSAMP
  S_HSPNIT
  S_HSPTIM
  S_HSWRKF
  S_HTR40
  S_IADL5A
  S_IADL5H
  S_IANN
  S_IEARN
  S_IFANN
  S_IFEARN
  S_IFGXFR
  S_IFIRAW
  S_IFIRAWY1
  S_IFPEN
  S_IFPENA
  S_IFSDI
  S_IFSRET
  S1_IFSSDI
  S_IFSSDI
  S_IFSSI
  S_IFUNEM
  S1_IFUNWC
  S2_IFUNWC
  S_IFWCMP
  S_IGXFR
  S_IIRAW
  S_IIRAWY1
  S_IMRC
  S_IMRC20
  S_INHER
  S_INHPE
  S_INHPFN
  S_INHPNFN
  S_INHPPN
  S_INHPTN
  S_INHPUN
  S_INLBRF
  S_IPEN
  S_IPENA
  S_ISDI
  S_ISRET
  S_ISSDI
  S_ISSI
  S_IUNEM
  S_IUNWC
  S_IWBEG
  S_IWBEGF
  S_IWCMP
  S_IWEND
  S_IWENDF
  S_IWENDM
  S_IWENDY
  S_IWMID
  S_IWMIDF
  S_IWSTAT
  S_JCIND
  S_JCINDB
  S_JCINDC
  S_JCOCC
  S_JCOCCA
  S_JCOCCB
  S_JCOCCC
  S_JCPEN
  S_JCPENF
  S_JCTEN
  S_JHOUR2
  S_JHOURS
  S_JJOBS
  S_JLASTM
  S_JLASTY
  S_JLIFT
  S_JLIND
  S_JLINDB
  S_JLINDC
  S_JLMIS
  S_JLOCC
  S_JLOCCA
  S_JLOCCB
  S_JLOCCC
  S_JLTEN
  S_JLTENF
  S_JMISS
  S_JNJOB
  S_JNJOB5
  S1_JOG
  S2_JOG
  S_JOG
  S_JOGA
  S_JOGW
  S_JPHYS
  S_JSIGHT
  S_JSTOOP
  S_JSTRES
  S_JWEEK2
  S_JWEEKS
  S_JYEARM
  S_JYEARS
  S_LBAGR
  S_LBASSISTPRB
  S_LBCOMP
  S_LBCON10
  S_LBCON5
  S_LBELIG
  S_LBEXT
  S_LBFAMDRUGPRB
  S_LBFAMHLTHPRB
  S_LBFINPRB
  S_LBHLTHPRB
  S_LBHOUSEPRB
  S_LBLONELY11
  S_LBLONELY3
  S_LBNEGAFFECT
  S_LBNEGAFFECT6
  S_LBNEUR
  S_LBONCHRSTR
  S_LBOPEN
  S_LBPOSAFFECT
  S_LBPOSAFFECT6
  S_LBRF
  S_LBRFH
  S_LBRFY
  S_LBRLTNSHPRB
  S_LBSATCITY
  S_LBSATFAM
  S_LBSATFIN
  S_LBSATHLTH
  S_LBSATHOME
  S_LBSATINC
  S_LBSATLEISURE
  S_LBSATLIFE
  S_LBSATWLF
  S_LBWGTR
  S_LBWORKPRB
  S_LGMUSA
  S_LGMUSW
  S_LHTACT
  S_LIFEIN
  S1_LIFT
  S2_LIFT
  S_LIFT
  S_LIFTA
  S_LIFTW
  S_LIV10
  S_LIV10A
  S_LIV10P
  S_LIV10R
  S_LIV75
  S_LIV75C
  S_LIV75F
  S_LIV75P
  S_LIV75R
  S_LIV85
  S_LIV85C
  S_LIV85F
  S_LIV85P
  S_LIV85R
  S_LIV8XC
  S_LIV8XF
  S_LIVBRO
  S_LIVPAR
  S_LIVSIB
  S_LIVSIS
  S_LOST
  S_LTACTF
  S_LTACTN
  S_LTACTP
  S_LTACTX
  S_LTCPRM
  S_LUNG
  S_LUNGE
  S_LUNGEF
  S_LUNGF
  S_LUNGQ
  S_LUNGS
  S_MAMMOG
  S1_MAP
  S2_MAP
  S_MAP
  S_MAPA
  S_MAPW
  S_MCURLN
  S_MCWV
  S_MCWVW
  S_MDACTX
  S_MDIV
  S_MEALS
  S_MEALSA
  S_MEALSH
  S_MEALSR
  S2_MEDS
  S_MEDS
  S_MEDSA
  S_MEDSH
  S_MEDSR
  S_MEDUC
  S_MEMRY
  S_MEMRYE
  S_MEMRYEF
  S_MEMRYF
  S_MEMRYQ
  S_MEMRYS
  S_MEND
  S_MLEN
  S_MLENM
  S_MNEV
  S_MO
  S_MOBILA
  S_MOBILW
  S_MOMAGE
  S_MOMLIV
  S2_MONEY
  S_MONEY
  S_MONEYA
  S_MONEYH
  S_MONEYR
  S_MPART
  S_MRCT
  S_MRPREM
  S_MSTAT
  S_MSTATF
  S_MSTATH
  S_MSTOT
  S_MWID
  S_NHMDAY
  S_NHMLIV
  S_NHMMVM
  S_NHMMVY
  S_NOTICS
  S_NOVOC
  S_NRSHOM
  S_NRSNIT
  S_NRSTIM
  S_NSSCRE
  S_NSSCSE
  S_OAHDID
  S_OHRSID
  S_OOPMD
  S_OOPMDF
  S_OOPMDO
  S_OOPMDOF
  S_OUTPT
  S_PAPSM
  S_PARTD
  S_PENCT
  S_PENIC1
  S_PENIC2
  S_PENINC
  S_PENI_N
  S2_PHONE
  S_PHONE
  S_PHONEA
  S_PHONEH
  S_PHONER
  S_PMBMI
  S_PMHGHT
  S_PMHGHTS
  S_PMWAIST
  S_PMWAISTC
  S_PMWGHT
  S_PMWGHTF
  S_PMWGHTS
  S_PNHM5Y
  S_PRCHMEM
  S_PRES
  S_PRMEM
  S_PROST
  S_PROXY
  S_PRPCNT
  S_PRPRM1
  S_PRPRM2
  S_PRPRM3
  S_PRSRC1
  S_PRSRC2
  S_PRSRC3
  S_PSTMEM
  S_PSYCH
  S_PSYCHE
  S_PSYCHEF
  S_PSYCHF
  S_PSYCHQ
  S_PSYCHS
  S_PTYP1
  S_PTYP2
  S_PTYP3
  S_PTYP4
  S_PTYPD1
  S_PTYPD2
  S_PTYPD3
  S_PTYPD4
  S_PTYPF1
  S_PTYPF2
  S_PTYPF3
  S_PTYPF4
  S_PUFF
  S_PUFFPOS
  S1_PUSH
  S2_PUSH
  S_PUSH
  S_PUSHA
  S_PUSHW
  S_RACEM
  S_RELIG
  S_RETDTWV
  S_RETEMP
  S_RETINC
  S_RETLIV
  S_RETMON
  S_RETSAT
  S_RETWLT
  S_RETWRK
  S_RETWSP
  S_RETYR
  S_RISK
  S_RISK6
  S_RPLNYA
  S_RPLNYR
  S_RXPREM
  S_RYRCMP
  S_SADLF
  S_SAMEJOB
  S_SAMEMP
  S_SAYRET
  S_SCIS
  S_SDIAPL
  S_SDIAPLM
  S_SDIAPLY
  S_SDIAPP
  S_SDIAPPM
  S_SDIAPPY
  S_SDIDEN
  S_SDIREC
  S_SDIRECM
  S_SDIRECY
  S_SDISTP
  S_SDISTPM
  S_SDISTPY
  S_SER7
  S_SHLT
  S_SHLTC
  S_SHLTCF
  S_SHOP
  S_SHOPA
  S_SHOPH
  S_SHOPR
  S1_SIT
  S2_SIT
  S_SIT
  S_SITA
  S_SITW
  S_SLEEP
  S_SLEEPE
  S_SLEEPEF
  S_SLEEPQ
  S_SLEEPR
  S_SLEEPS
  S_SLEEPX
  S_SLFEMP
  S_SLFMEM
  S_SMOKEN
  S_SMOKEV
  S_SPCFAC
  S_SSAPL
  S_SSAPLM
  S_SSAPLY
  S_SSAPP
  S_SSAPPM
  S_SSAPPY
  S_SSDEN
  S_SSDI
  S_SSIAPL
  S_SSIAPLM
  S_SSIAPLY
  S_SSIAPP
  S_SSIAPPM
  S_SSIAPPY
  S_SSIDEN
  S_SSIREC
  S_SSIRECM
  S_SSIRECY
  S_SSISTP
  S_SSISTPM
  S_SSISTPY
  S_SSREC
  S_SSRECM
  S_SSRECY
  S_SSSTP
  S_SSSTPM
  S_SSSTPY
  S_SSWRER
  S_SSWRNR
  S_SSWRXA
  S_SSWSER
  S_SSWSNR
  S_SSWSXA
  S_STATUS
  S1_STOOP
  S2_STOOP
  S_STOOP
  S_STOOPA
  S_STOOPW
  S_STROK
  S_STROKE
  S_STROKEF
  S_STROKF
  S_STROKQ
  S_STROKS
  S_TIMWLK
  S_TIMWLKA
  S_TLIPRM
  S2_TOILT
  S_TOILT
  S_TOILTA
  S2_TOILTH
  S_TOILTH
  S_TOTMBF
  S_TOTMBI
  S_TOTMD
  S_TOTMDF
  S_TR20
  S_TR40
  S_TYLTC
  S_ULCER
  S_UNEMP
  S_UNION
  S_UNIONF
  S_VETRN
  S_VGACTF
  S_VGACTN
  S_VGACTP
  S_VGACTX
  S_VIGACT
  S_VOCAB
  S_VP
  S1_WALK1
  S2_WALK1
  S_WALK1
  S_WALK1A
  S_WALK1W
  S1_WALKR
  S2_WALKR
  S_WALKR
  S_WALKRA
  S_WALKRE
  S2_WALKRH
  S_WALKRH
  S_WALKRW
  S1_WALKS
  S2_WALKS
  S_WALKS
  S_WALKSA
  S_WALKSW
  S_WANDER
  S_WEIGHT
  S_WGFHR
  S_WGFWK
  S_WGIHR
  S_WGIWK
  S_WHAPPX
  S_WHAPPY
  S_WLIPRM
  S_WORK
  S_WORK2
  S_WORK62
  S_WORK62F
  S_WORK65
  S_WORK65F
  S_WORK70
  S_WORK70A
  S_WORK70AF
  S_WORK70F
  S_WORKLM
  S_WTCRNH
  S_WTRESP
  S_WTR_NH
  S_YR
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
/*  Table SLong: Macro creates and appends `_outtable` data */;
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
  studyyr = ._;
  CYEAR = '*';
  H_HHID = ._;
  H_HHIDC = '*';
  SUBHH = '*';
  INW = ._;
  S_HHIDPN = ._;
  /* SASSAGEB variable already included  */
  /* SASSAGEM variable already included  */
  /* SASSRECV variable already included  */
  S_ACGTOT = ._;
  S_ADL5A = ._;
  S_ADL5H = ._;
  S_ADL6A = ._;
  S_ADL6H = ._;
  S_ADLR10 = ._;
  S_ADLW = ._;
  S_AGEM_B = ._;
  S_AGEM_E = ._;
  S_AGEM_M = ._;
  S_AGEY_B = ._;
  S_AGEY_E = ._;
  S_AGEY_M = ._;
  S_AHDSMP = ._;
  S_AIMR10 = ._;
  S_ALONE = ._;
  S_ALZHE = ._;
  S_ALZHEE = ._;
  S_ALZHEEF = ._;
  S_ALZHEF = ._;
  S_ALZHEQ = ._;
  S_ALZHES = ._;
  S_AMSTOT = ._;
  S_ANS3PQ = ._;
  S1_ARMS = ._;
  S2_ARMS = ._;
  S_ARMS = ._;
  S_ARMSA = ._;
  S_ARMSW = ._;
  S_ARTHR = ._;
  S_ARTHRE = ._;
  S_ARTHREF = ._;
  S_ARTHRF = ._;
  S_ARTHRQ = ._;
  S_ARTHRS = ._;
  S_ATR20 = ._;
  S_BACK = ._;
  S_BALFUL = ._;
  S_BALFULC = ._;
  S_BALFULT = ._;
  S_BALSBS = ._;
  S_BALSBSC = ._;
  S_BALSEMI = ._;
  S_BALSEMIC = ._;
  S1_BATH = ._;
  S2_BATH = ._;
  S_BATH = ._;
  S_BATHA = ._;
  S2_BATHH = ._;
  S_BATHH = ._;
  S_BATHW = ._;
  S_BDATE = ._;
  S1_BED = ._;
  S2_BED = ._;
  S_BED = ._;
  S_BEDA = ._;
  S_BEDE = ._;
  S2_BEDH = ._;
  S_BEDH = ._;
  S_BEDW = ._;
  S_BEQ100 = ._;
  S_BEQ10K = ._;
  S_BEQ500 = ._;
  S_BEQANY = ._;
  S_BEQLRG = ._;
  S_BFLAG = ._;
  S_BMI = ._;
  S_BMONTH = ._;
  S_BPDIA = ._;
  S_BPLACE = ._;
  S_BPLACF = ._;
  S_BPPOS = ._;
  S_BPPULS = ._;
  S_BPSYS = ._;
  S_BREAST = ._;
  S_BWC20 = ._;
  S_BWC86 = ._;
  S_BYEAR = ._;
  S_CACT = ._;
  S1_CALC = ._;
  S2_CALC = ._;
  S_CALCA = ._;
  S_CALCW = ._;
  S_CANCR = ._;
  S_CANCRE = ._;
  S_CANCREF = ._;
  S_CANCRF = ._;
  S_CANCRQ = ._;
  S_CANCRS = ._;
  S_CENDIV = ._;
  S_CENREG = ._;
  S_CESD = ._;
  S_CESDM = ._;
  S1_CHAIR = ._;
  S2_CHAIR = ._;
  S_CHAIR = ._;
  S_CHAIRA = ._;
  S_CHAIRW = ._;
  S_CHOLST = ._;
  S_CLAIMED = ._;
  S1_CLIM1 = ._;
  S2_CLIM1 = ._;
  S_CLIM1 = ._;
  S_CLIM1A = ._;
  S_CLIM1W = ._;
  S1_CLIMS = ._;
  S2_CLIMS = ._;
  S_CLIMS = ._;
  S_CLIMSA = ._;
  S_CLIMSW = ._;
  S_COGTOT = ._;
  S_COHBYR = ._;
  S_COHORT = ._;
  S_COMP = ._;
  S_COMPW = ._;
  S_CONDE = ._;
  S_CONDEF = ._;
  S_CONDS = ._;
  S_CONDSF = ._;
  S_CONDSP = ._;
  S_COVR = ._;
  S_COVRT = ._;
  S_COVS = ._;
  S_DADAGE = ._;
  S_DADLIV = ._;
  S_DAGE_M = ._;
  S_DAGE_Y = ._;
  S_DCBAL1 = ._;
  S_DCBAL2 = ._;
  S_DCBAL3 = ._;
  S_DCBAL4 = ._;
  S_DCBENE1 = ._;
  S_DCBENE2 = ._;
  S_DCBENE3 = ._;
  S_DCBENE4 = ._;
  S_DCCONT1 = ._;
  S_DCCONT2 = ._;
  S_DCCONT3 = ._;
  S_DCCONT4 = ._;
  S_DCMODE1 = ._;
  S_DCMODE2 = ._;
  S_DCMODE3 = ._;
  S_DCMODE4 = ._;
  S_DCPCT1 = ._;
  S_DCPCT2 = ._;
  S_DCPCT3 = ._;
  S_DCPCT4 = ._;
  S_DDATE = ._;
  S_DEMEN = ._;
  S_DEMENE = ._;
  S_DEMENEF = ._;
  S_DEMENF = ._;
  S_DEMENQ = ._;
  S_DEMENS = ._;
  S_DENTST = ._;
  S_DEPRES = ._;
  S_DEPREX = ._;
  S_DIAB = ._;
  S_DIABE = ._;
  S_DIABEF = ._;
  S_DIABF = ._;
  S_DIABQ = ._;
  S_DIABS = ._;
  S1_DIME = ._;
  S2_DIME = ._;
  S_DIME = ._;
  S_DIMEA = ._;
  S_DIMEW = ._;
  S_DLRC = ._;
  S_DLRC20 = ._;
  S_DMONTH = ._;
  S_DOCTIM = ._;
  S_DOCTOR = ._;
  S1_DRESS = ._;
  S2_DRESS = ._;
  S_DRESS = ._;
  S_DRESSA = ._;
  S2_DRESSH = ._;
  S_DRESSH = ._;
  S_DRESSW = ._;
  S_DRINK = ._;
  S_DRINKD = ._;
  S_DRINKN = ._;
  S_DRINKR = ._;
  S_DRUGS = ._;
  S_DSIAMT = ._;
  S_DSRC = ._;
  S_DSSAMT = ._;
  S_DSTAT = ._;
  S_DTIMTDTH = ._;
  S_DW = ._;
  S_DY = ._;
  S_DYEAR = ._;
  S1_EAT = ._;
  S2_EAT = ._;
  S_EAT = ._;
  S_EATA = ._;
  S2_EATH = ._;
  S_EATH = ._;
  S_EATW = ._;
  S_EDEGRM = ._;
  S_EDUC = ._;
  S_EDYRS = ._;
  S_EFFORT = ._;
  S_EFFORX = ._;
  S_ENLIFE = ._;
  S_ENLIFX = ._;
  S_EVBRN = ._;
  S_EVBRNF = ._;
  S_FAMR = ._;
  S_FBWC20 = ._;
  S_FBWC86 = ._;
  S_FCACT = ._;
  S_FDLRC = ._;
  S_FDW = ._;
  S_FDY = ._;
  S_FEDUC = ._;
  S_FIMRC = ._;
  S_FINEA = ._;
  S_FINPLN = ._;
  S_FINR = ._;
  S_FLAG = ._;
  S_FLONE = ._;
  S_FLONEX = ._;
  S_FLUSHT = ._;
  S_FMO = ._;
  S_FPRES = ._;
  S_FPSTME = ._;
  S_FSAD = ._;
  S_FSADX = ._;
  S_FSCIS = ._;
  S_FSER7 = ._;
  S_FSIZE = ._;
  S_FSIZEF = ._;
  S_FSLFME = ._;
  S_FVOCAB = ._;
  S_FVP = ._;
  S_FYR = ._;
  S_GENDER = ._;
  S_GOING = ._;
  S_GOINGX = ._;
  S_GOVMD = ._;
  S_GOVMR = ._;
  S_GOVOT = ._;
  S_GOVVA = ._;
  S_GROSSA = ._;
  S_GRP = ._;
  S_GRPDOM = ._;
  S_GRPL = ._;
  S_GRPPOS = ._;
  S_GRPR = ._;
  S_HALUC = ._;
  S_HDLR20 = ._;
  S_HEART = ._;
  S_HEARTE = ._;
  S_HEARTEF = ._;
  S_HEARTF = ._;
  S_HEARTQ = ._;
  S_HEARTS = ._;
  S_HECOV1 = ._;
  S_HECOV2 = ._;
  S_HECOV3 = ._;
  S_HEIGHT = ._;
  S_HENUM = ._;
  S_HERET = ._;
  S_HERTR1 = ._;
  S_HERTR2 = ._;
  S_HERTR3 = ._;
  S_HERTS1 = ._;
  S_HERTS2 = ._;
  S_HERTS3 = ._;
  S_HESRC1 = ._;
  S_HESRC2 = ._;
  S_HESRC3 = ._;
  S_HHIDPN = ._;
  S_HIBP = ._;
  S_HIBPE = ._;
  S_HIBPEF = ._;
  S_HIBPF = ._;
  S_HIBPQ = ._;
  S_HIBPS = ._;
  S_HIGOV = ._;
  S_HILTC = ._;
  S_HIMR20 = ._;
  S_HIOTHP = ._;
  S_HISPAN = ._;
  S_HLPDYSF = ._;
  S_HLPDYSNF = ._;
  S_HLPDYSP = ._;
  S_HLPDYST = ._;
  S_HLPDYSU = ._;
  S_HLPHRSF = ._;
  S_HLPHRSNF = ._;
  S_HLPHRSP = ._;
  S_HLPHRST = ._;
  S_HLPHRSU = ._;
  S_HLPPDFA = ._;
  S_HLPPDFN = ._;
  S_HLPPDNFA = ._;
  S_HLPPDNFN = ._;
  S_HLPPDTA = ._;
  S_HLPPDTN = ._;
  S_HLPRFN = ._;
  S_HLPRNFN = ._;
  S_HLPRPN = ._;
  S_HLPRTN = ._;
  S_HLPRUN = ._;
  S_HLTC3 = ._;
  S_HLTC5 = ._;
  S_HLTC5F = ._;
  S_HLTHLM = ._;
  S_HOMCAR = ._;
  S_HOSP = ._;
  S_HRSAMP = ._;
  S_HSPNIT = ._;
  S_HSPTIM = ._;
  S_HSWRKF = ._;
  S_HTR40 = ._;
  S_IADL5A = ._;
  S_IADL5H = ._;
  S_IANN = ._;
  S_IEARN = ._;
  S_IFANN = ._;
  S_IFEARN = ._;
  S_IFGXFR = ._;
  S_IFIRAW = ._;
  S_IFIRAWY1 = ._;
  S_IFPEN = ._;
  S_IFPENA = ._;
  S_IFSDI = ._;
  S_IFSRET = ._;
  S1_IFSSDI = ._;
  S_IFSSDI = ._;
  S_IFSSI = ._;
  S_IFUNEM = ._;
  S1_IFUNWC = ._;
  S2_IFUNWC = ._;
  S_IFWCMP = ._;
  S_IGXFR = ._;
  S_IIRAW = ._;
  S_IIRAWY1 = ._;
  S_IMRC = ._;
  S_IMRC20 = ._;
  S_INHER = ._;
  S_INHPE = ._;
  S_INHPFN = ._;
  S_INHPNFN = ._;
  S_INHPPN = ._;
  S_INHPTN = ._;
  S_INHPUN = ._;
  S_INLBRF = ._;
  S_IPEN = ._;
  S_IPENA = ._;
  S_ISDI = ._;
  S_ISRET = ._;
  S_ISSDI = ._;
  S_ISSI = ._;
  S_IUNEM = ._;
  S_IUNWC = ._;
  S_IWBEG = ._;
  S_IWBEGF = ._;
  S_IWCMP = ._;
  S_IWEND = ._;
  S_IWENDF = ._;
  S_IWENDM = ._;
  S_IWENDY = ._;
  S_IWMID = ._;
  S_IWMIDF = ._;
  S_IWSTAT = ._;
  S_JCIND = ._;
  S_JCINDB = ._;
  S_JCINDC = ._;
  S_JCOCC = ._;
  S_JCOCCA = ._;
  S_JCOCCB = ._;
  S_JCOCCC = ._;
  S_JCPEN = ._;
  S_JCPENF = ._;
  S_JCTEN = ._;
  S_JHOUR2 = ._;
  S_JHOURS = ._;
  S_JJOBS = ._;
  S_JLASTM = ._;
  S_JLASTY = ._;
  S_JLIFT = ._;
  S_JLIND = ._;
  S_JLINDB = ._;
  S_JLINDC = ._;
  S_JLMIS = ._;
  S_JLOCC = ._;
  S_JLOCCA = ._;
  S_JLOCCB = ._;
  S_JLOCCC = ._;
  S_JLTEN = ._;
  S_JLTENF = ._;
  S_JMISS = ._;
  S_JNJOB = ._;
  S_JNJOB5 = ._;
  S1_JOG = ._;
  S2_JOG = ._;
  S_JOG = ._;
  S_JOGA = ._;
  S_JOGW = ._;
  S_JPHYS = ._;
  S_JSIGHT = ._;
  S_JSTOOP = ._;
  S_JSTRES = ._;
  S_JWEEK2 = ._;
  S_JWEEKS = ._;
  S_JYEARM = ._;
  S_JYEARS = ._;
  S_LBAGR = ._;
  S_LBASSISTPRB = ._;
  S_LBCOMP = ._;
  S_LBCON10 = ._;
  S_LBCON5 = ._;
  S_LBELIG = ._;
  S_LBEXT = ._;
  S_LBFAMDRUGPRB = ._;
  S_LBFAMHLTHPRB = ._;
  S_LBFINPRB = ._;
  S_LBHLTHPRB = ._;
  S_LBHOUSEPRB = ._;
  S_LBLONELY11 = ._;
  S_LBLONELY3 = ._;
  S_LBNEGAFFECT = ._;
  S_LBNEGAFFECT6 = ._;
  S_LBNEUR = ._;
  S_LBONCHRSTR = ._;
  S_LBOPEN = ._;
  S_LBPOSAFFECT = ._;
  S_LBPOSAFFECT6 = ._;
  S_LBRF = ._;
  S_LBRFH = ._;
  S_LBRFY = ._;
  S_LBRLTNSHPRB = ._;
  S_LBSATCITY = ._;
  S_LBSATFAM = ._;
  S_LBSATFIN = ._;
  S_LBSATHLTH = ._;
  S_LBSATHOME = ._;
  S_LBSATINC = ._;
  S_LBSATLEISURE = ._;
  S_LBSATLIFE = ._;
  S_LBSATWLF = ._;
  S_LBWGTR = ._;
  S_LBWORKPRB = ._;
  S_LGMUSA = ._;
  S_LGMUSW = ._;
  S_LHTACT = ._;
  S_LIFEIN = ._;
  S1_LIFT = ._;
  S2_LIFT = ._;
  S_LIFT = ._;
  S_LIFTA = ._;
  S_LIFTW = ._;
  S_LIV10 = ._;
  S_LIV10A = ._;
  S_LIV10P = ._;
  S_LIV10R = ._;
  S_LIV75 = ._;
  S_LIV75C = ._;
  S_LIV75F = ._;
  S_LIV75P = ._;
  S_LIV75R = ._;
  S_LIV85 = ._;
  S_LIV85C = ._;
  S_LIV85F = ._;
  S_LIV85P = ._;
  S_LIV85R = ._;
  S_LIV8XC = ._;
  S_LIV8XF = ._;
  S_LIVBRO = ._;
  S_LIVPAR = ._;
  S_LIVSIB = ._;
  S_LIVSIS = ._;
  S_LOST = ._;
  S_LTACTF = ._;
  S_LTACTN = ._;
  S_LTACTP = ._;
  S_LTACTX = ._;
  S_LTCPRM = ._;
  S_LUNG = ._;
  S_LUNGE = ._;
  S_LUNGEF = ._;
  S_LUNGF = ._;
  S_LUNGQ = ._;
  S_LUNGS = ._;
  S_MAMMOG = ._;
  S1_MAP = ._;
  S2_MAP = ._;
  S_MAP = ._;
  S_MAPA = ._;
  S_MAPW = ._;
  S_MCURLN = ._;
  S_MCWV = ._;
  S_MCWVW = ._;
  S_MDACTX = ._;
  S_MDIV = ._;
  S_MEALS = ._;
  S_MEALSA = ._;
  S_MEALSH = ._;
  S_MEALSR = ._;
  S2_MEDS = ._;
  S_MEDS = ._;
  S_MEDSA = ._;
  S_MEDSH = ._;
  S_MEDSR = ._;
  S_MEDUC = ._;
  S_MEMRY = ._;
  S_MEMRYE = ._;
  S_MEMRYEF = ._;
  S_MEMRYF = ._;
  S_MEMRYQ = ._;
  S_MEMRYS = ._;
  S_MEND = ._;
  S_MLEN = ._;
  S_MLENM = ._;
  S_MNEV = ._;
  S_MO = ._;
  S_MOBILA = ._;
  S_MOBILW = ._;
  S_MOMAGE = ._;
  S_MOMLIV = ._;
  S2_MONEY = ._;
  S_MONEY = ._;
  S_MONEYA = ._;
  S_MONEYH = ._;
  S_MONEYR = ._;
  S_MPART = ._;
  S_MRCT = ._;
  S_MRPREM = ._;
  S_MSTAT = ._;
  S_MSTATF = ._;
  S_MSTATH = ._;
  S_MSTOT = ._;
  S_MWID = ._;
  S_NHMDAY = ._;
  S_NHMLIV = ._;
  S_NHMMVM = ._;
  S_NHMMVY = ._;
  S_NOTICS = ._;
  S_NOVOC = ._;
  S_NRSHOM = ._;
  S_NRSNIT = ._;
  S_NRSTIM = ._;
  S_NSSCRE = ._;
  S_NSSCSE = ._;
  S_OAHDID = ._;
  S_OHRSID = ._;
  S_OOPMD = ._;
  S_OOPMDF = ._;
  S_OOPMDO = ._;
  S_OOPMDOF = ._;
  S_OUTPT = ._;
  S_PAPSM = ._;
  S_PARTD = ._;
  S_PENCT = ._;
  S_PENIC1 = ._;
  S_PENIC2 = ._;
  S_PENINC = ._;
  S_PENI_N = ._;
  S2_PHONE = ._;
  S_PHONE = ._;
  S_PHONEA = ._;
  S_PHONEH = ._;
  S_PHONER = ._;
  S_PMBMI = ._;
  S_PMHGHT = ._;
  S_PMHGHTS = ._;
  S_PMWAIST = ._;
  S_PMWAISTC = ._;
  S_PMWGHT = ._;
  S_PMWGHTF = ._;
  S_PMWGHTS = ._;
  S_PNHM5Y = ._;
  S_PRCHMEM = ._;
  S_PRES = ._;
  S_PRMEM = ._;
  S_PROST = ._;
  S_PROXY = ._;
  S_PRPCNT = ._;
  S_PRPRM1 = ._;
  S_PRPRM2 = ._;
  S_PRPRM3 = ._;
  S_PRSRC1 = ._;
  S_PRSRC2 = ._;
  S_PRSRC3 = ._;
  S_PSTMEM = ._;
  S_PSYCH = ._;
  S_PSYCHE = ._;
  S_PSYCHEF = ._;
  S_PSYCHF = ._;
  S_PSYCHQ = ._;
  S_PSYCHS = ._;
  S_PTYP1 = ._;
  S_PTYP2 = ._;
  S_PTYP3 = ._;
  S_PTYP4 = ._;
  S_PTYPD1 = ._;
  S_PTYPD2 = ._;
  S_PTYPD3 = ._;
  S_PTYPD4 = ._;
  S_PTYPF1 = ._;
  S_PTYPF2 = ._;
  S_PTYPF3 = ._;
  S_PTYPF4 = ._;
  S_PUFF = ._;
  S_PUFFPOS = ._;
  S1_PUSH = ._;
  S2_PUSH = ._;
  S_PUSH = ._;
  S_PUSHA = ._;
  S_PUSHW = ._;
  S_RACEM = ._;
  S_RELIG = ._;
  S_RETDTWV = ._;
  S_RETEMP = ._;
  S_RETINC = ._;
  S_RETLIV = ._;
  S_RETMON = ._;
  S_RETSAT = ._;
  S_RETWLT = ._;
  S_RETWRK = ._;
  S_RETWSP = ._;
  S_RETYR = ._;
  S_RISK = ._;
  S_RISK6 = ._;
  S_RPLNYA = ._;
  S_RPLNYR = ._;
  S_RXPREM = ._;
  S_RYRCMP = ._;
  S_SADLF = ._;
  S_SAMEJOB = ._;
  S_SAMEMP = ._;
  S_SAYRET = ._;
  S_SCIS = ._;
  S_SDIAPL = ._;
  S_SDIAPLM = ._;
  S_SDIAPLY = ._;
  S_SDIAPP = ._;
  S_SDIAPPM = ._;
  S_SDIAPPY = ._;
  S_SDIDEN = ._;
  S_SDIREC = ._;
  S_SDIRECM = ._;
  S_SDIRECY = ._;
  S_SDISTP = ._;
  S_SDISTPM = ._;
  S_SDISTPY = ._;
  S_SER7 = ._;
  S_SHLT = ._;
  S_SHLTC = ._;
  S_SHLTCF = ._;
  S_SHOP = ._;
  S_SHOPA = ._;
  S_SHOPH = ._;
  S_SHOPR = ._;
  S1_SIT = ._;
  S2_SIT = ._;
  S_SIT = ._;
  S_SITA = ._;
  S_SITW = ._;
  S_SLEEP = ._;
  S_SLEEPE = ._;
  S_SLEEPEF = ._;
  S_SLEEPQ = ._;
  S_SLEEPR = ._;
  S_SLEEPS = ._;
  S_SLEEPX = ._;
  S_SLFEMP = ._;
  S_SLFMEM = ._;
  S_SMOKEN = ._;
  S_SMOKEV = ._;
  S_SPCFAC = ._;
  S_SSAPL = ._;
  S_SSAPLM = ._;
  S_SSAPLY = ._;
  S_SSAPP = ._;
  S_SSAPPM = ._;
  S_SSAPPY = ._;
  S_SSDEN = ._;
  S_SSDI = ._;
  S_SSIAPL = ._;
  S_SSIAPLM = ._;
  S_SSIAPLY = ._;
  S_SSIAPP = ._;
  S_SSIAPPM = ._;
  S_SSIAPPY = ._;
  S_SSIDEN = ._;
  S_SSIREC = ._;
  S_SSIRECM = ._;
  S_SSIRECY = ._;
  S_SSISTP = ._;
  S_SSISTPM = ._;
  S_SSISTPY = ._;
  S_SSREC = ._;
  S_SSRECM = ._;
  S_SSRECY = ._;
  S_SSSTP = ._;
  S_SSSTPM = ._;
  S_SSSTPY = ._;
  S_SSWRER = ._;
  S_SSWRNR = ._;
  S_SSWRXA = ._;
  S_SSWSER = ._;
  S_SSWSNR = ._;
  S_SSWSXA = ._;
  S_STATUS = ._;
  S1_STOOP = ._;
  S2_STOOP = ._;
  S_STOOP = ._;
  S_STOOPA = ._;
  S_STOOPW = ._;
  S_STROK = ._;
  S_STROKE = ._;
  S_STROKEF = ._;
  S_STROKF = ._;
  S_STROKQ = ._;
  S_STROKS = ._;
  S_TIMWLK = ._;
  S_TIMWLKA = ._;
  S_TLIPRM = ._;
  S2_TOILT = ._;
  S_TOILT = ._;
  S_TOILTA = ._;
  S2_TOILTH = ._;
  S_TOILTH = ._;
  S_TOTMBF = ._;
  S_TOTMBI = ._;
  S_TOTMD = ._;
  S_TOTMDF = ._;
  S_TR20 = ._;
  S_TR40 = ._;
  S_TYLTC = ._;
  S_ULCER = ._;
  S_UNEMP = ._;
  S_UNION = ._;
  S_UNIONF = ._;
  S_VETRN = ._;
  S_VGACTF = ._;
  S_VGACTN = ._;
  S_VGACTP = ._;
  S_VGACTX = ._;
  S_VIGACT = ._;
  S_VOCAB = ._;
  S_VP = ._;
  S1_WALK1 = ._;
  S2_WALK1 = ._;
  S_WALK1 = ._;
  S_WALK1A = ._;
  S_WALK1W = ._;
  S1_WALKR = ._;
  S2_WALKR = ._;
  S_WALKR = ._;
  S_WALKRA = ._;
  S_WALKRE = ._;
  S2_WALKRH = ._;
  S_WALKRH = ._;
  S_WALKRW = ._;
  S1_WALKS = ._;
  S2_WALKS = ._;
  S_WALKS = ._;
  S_WALKSA = ._;
  S_WALKSW = ._;
  S_WANDER = ._;
  S_WEIGHT = ._;
  S_WGFHR = ._;
  S_WGFWK = ._;
  S_WGIHR = ._;
  S_WGIWK = ._;
  S_WHAPPX = ._;
  S_WHAPPY = ._;
  S_WLIPRM = ._;
  S_WORK = ._;
  S_WORK2 = ._;
  S_WORK62 = ._;
  S_WORK62F = ._;
  S_WORK65 = ._;
  S_WORK65F = ._;
  S_WORK70 = ._;
  S_WORK70A = ._;
  S_WORK70AF = ._;
  S_WORK70F = ._;
  S_WORKLM = ._;
  S_WTCRNH = ._;
  S_WTRESP = ._;
  S_WTR_NH = ._;
  S_YR = ._;
%mend initvars;

%macro readvar2_list;
/* List of variables to be read from input dataset */
/*-- WAVE_NUMBER   --*/
/*-- WAVE_NAME   --*/
/*-- studyyr   --*/
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
/*-- S_ACGTOT   --*/
S2ACGTOT
/*-- S_ADL5A   --*/
S2ADL5A
S3ADL5A
S4ADL5A
S5ADL5A
S6ADL5A
S7ADL5A
S8ADL5A
S9ADL5A
S10ADL5A
S11ADL5A
S12ADL5A
S13ADL5A
S14ADL5A
S15ADL5A
/*-- S_ADL5H   --*/
S2ADL5H
S3ADL5H
S4ADL5H
S5ADL5H
S6ADL5H
S7ADL5H
S8ADL5H
S9ADL5H
S10ADL5H
S11ADL5H
S12ADL5H
S13ADL5H
S14ADL5H
S15ADL5H
/*-- S_ADL6A   --*/
S2ADL6A
S3ADL6A
S4ADL6A
S5ADL6A
S6ADL6A
S7ADL6A
S8ADL6A
S9ADL6A
S10ADL6A
S11ADL6A
S12ADL6A
S13ADL6A
S14ADL6A
S15ADL6A
/*-- S_ADL6H   --*/
S2ADL6H
S3ADL6H
S4ADL6H
S5ADL6H
S6ADL6H
S7ADL6H
S8ADL6H
S9ADL6H
S10ADL6H
S11ADL6H
S12ADL6H
S13ADL6H
S14ADL6H
S15ADL6H
/*-- S_ADLR10   --*/
S2ADLR10
/*-- S_ADLW   --*/
S1ADLW
/*-- S_AGEM_B   --*/
S1AGEM_B
S2AGEM_B
S3AGEM_B
S4AGEM_B
S5AGEM_B
S6AGEM_B
S7AGEM_B
S8AGEM_B
S9AGEM_B
S10AGEM_B
S11AGEM_B
S12AGEM_B
S13AGEM_B
S14AGEM_B
S15AGEM_B
/*-- S_AGEM_E   --*/
S1AGEM_E
S2AGEM_E
S3AGEM_E
S4AGEM_E
S5AGEM_E
S6AGEM_E
S7AGEM_E
S8AGEM_E
S9AGEM_E
S10AGEM_E
S11AGEM_E
S12AGEM_E
S13AGEM_E
S14AGEM_E
S15AGEM_E
/*-- S_AGEM_M   --*/
S1AGEM_M
S2AGEM_M
S3AGEM_M
S4AGEM_M
S5AGEM_M
S6AGEM_M
S7AGEM_M
S8AGEM_M
S9AGEM_M
S10AGEM_M
S11AGEM_M
S12AGEM_M
S13AGEM_M
S14AGEM_M
S15AGEM_M
/*-- S_AGEY_B   --*/
S1AGEY_B
S2AGEY_B
S3AGEY_B
S4AGEY_B
S5AGEY_B
S6AGEY_B
S7AGEY_B
S8AGEY_B
S9AGEY_B
S10AGEY_B
S11AGEY_B
S12AGEY_B
S13AGEY_B
S14AGEY_B
S15AGEY_B
/*-- S_AGEY_E   --*/
S1AGEY_E
S2AGEY_E
S3AGEY_E
S4AGEY_E
S5AGEY_E
S6AGEY_E
S7AGEY_E
S8AGEY_E
S9AGEY_E
S10AGEY_E
S11AGEY_E
S12AGEY_E
S13AGEY_E
S14AGEY_E
S15AGEY_E
/*-- S_AGEY_M   --*/
S1AGEY_M
S2AGEY_M
S3AGEY_M
S4AGEY_M
S5AGEY_M
S6AGEY_M
S7AGEY_M
S8AGEY_M
S9AGEY_M
S10AGEY_M
S11AGEY_M
S12AGEY_M
S13AGEY_M
S14AGEY_M
S15AGEY_M
/*-- S_AHDSMP   --*/
S1AHDSMP
S2AHDSMP
S3AHDSMP
S4AHDSMP
S5AHDSMP
S6AHDSMP
S7AHDSMP
S8AHDSMP
S9AHDSMP
S10AHDSMP
S11AHDSMP
S12AHDSMP
S13AHDSMP
S14AHDSMP
S15AHDSMP
/*-- S_AIMR10   --*/
S2AIMR10
/*-- S_ALONE   --*/
S2ALONE
S3ALONE
S4ALONE
S5ALONE
S6ALONE
S7ALONE
S8ALONE
S9ALONE
S10ALONE
S11ALONE
S12ALONE
S13ALONE
S14ALONE
S15ALONE
/*-- S_ALZHE   --*/
S10ALZHE
S11ALZHE
S12ALZHE
S13ALZHE
S14ALZHE
S15ALZHE
/*-- S_ALZHEE   --*/
S10ALZHEE
S11ALZHEE
S12ALZHEE
S13ALZHEE
S14ALZHEE
S15ALZHEE
/*-- S_ALZHEEF   --*/
S10ALZHEEF
S11ALZHEEF
S12ALZHEEF
S13ALZHEEF
S14ALZHEEF
S15ALZHEEF
/*-- S_ALZHEF   --*/
S11ALZHEF
S12ALZHEF
S13ALZHEF
S14ALZHEF
S15ALZHEF
/*-- S_ALZHEQ   --*/
S10ALZHEQ
S11ALZHEQ
S12ALZHEQ
S13ALZHEQ
S14ALZHEQ
S15ALZHEQ
/*-- S_ALZHES   --*/
S11ALZHES
S12ALZHES
S13ALZHES
S14ALZHES
S15ALZHES
/*-- S_AMSTOT   --*/
S2AMSTOT
/*-- S_ANS3PQ   --*/
S3ANS3PQ
S4ANS3PQ
S5ANS3PQ
S6ANS3PQ
S7ANS3PQ
S8ANS3PQ
S9ANS3PQ
S10ANS3PQ
S11ANS3PQ
S12ANS3PQ
S13ANS3PQ
S14ANS3PQ
S15ANS3PQ
/*-- S1_ARMS   --*/
S1ARMS
/*-- S2_ARMS   --*/
S2ARMS
/*-- S_ARMS   --*/
S3ARMS
S4ARMS
S5ARMS
S6ARMS
S7ARMS
S8ARMS
S9ARMS
S10ARMS
S11ARMS
S12ARMS
S13ARMS
S14ARMS
S15ARMS
/*-- S_ARMSA   --*/
S2ARMSA
S3ARMSA
S4ARMSA
S5ARMSA
S6ARMSA
S7ARMSA
S8ARMSA
S9ARMSA
S10ARMSA
S11ARMSA
S12ARMSA
S13ARMSA
S14ARMSA
S15ARMSA
/*-- S_ARMSW   --*/
S1ARMSW
/*-- S_ARTHR   --*/
S1ARTHR
S2ARTHR
S3ARTHR
S4ARTHR
S5ARTHR
S6ARTHR
S7ARTHR
S8ARTHR
S9ARTHR
S10ARTHR
S11ARTHR
S12ARTHR
S13ARTHR
S14ARTHR
S15ARTHR
/*-- S_ARTHRE   --*/
S1ARTHRE
S2ARTHRE
S3ARTHRE
S4ARTHRE
S5ARTHRE
S6ARTHRE
S7ARTHRE
S8ARTHRE
S9ARTHRE
S10ARTHRE
S11ARTHRE
S12ARTHRE
S13ARTHRE
S14ARTHRE
S15ARTHRE
/*-- S_ARTHREF   --*/
S1ARTHREF
S2ARTHREF
S3ARTHREF
S4ARTHREF
S5ARTHREF
S6ARTHREF
S7ARTHREF
S8ARTHREF
S9ARTHREF
S10ARTHREF
S11ARTHREF
S12ARTHREF
S13ARTHREF
S14ARTHREF
S15ARTHREF
/*-- S_ARTHRF   --*/
S1ARTHRF
S2ARTHRF
S3ARTHRF
S4ARTHRF
S5ARTHRF
S6ARTHRF
S7ARTHRF
S8ARTHRF
S9ARTHRF
S10ARTHRF
S11ARTHRF
S12ARTHRF
S13ARTHRF
S14ARTHRF
S15ARTHRF
/*-- S_ARTHRQ   --*/
S1ARTHRQ
S2ARTHRQ
S3ARTHRQ
S4ARTHRQ
S5ARTHRQ
S6ARTHRQ
S7ARTHRQ
S8ARTHRQ
S9ARTHRQ
S10ARTHRQ
S11ARTHRQ
S12ARTHRQ
S13ARTHRQ
S14ARTHRQ
S15ARTHRQ
/*-- S_ARTHRS   --*/
S2ARTHRS
S3ARTHRS
S4ARTHRS
S5ARTHRS
S6ARTHRS
S7ARTHRS
S8ARTHRS
S9ARTHRS
S10ARTHRS
S11ARTHRS
S12ARTHRS
S13ARTHRS
S14ARTHRS
S15ARTHRS
/*-- S_ATR20   --*/
S2ATR20
/*-- S_BACK   --*/
S1BACK
S2BACK
S3BACK
S4BACK
S5BACK
S6BACK
S7BACK
S8BACK
S9BACK
S10BACK
S11BACK
S12BACK
S13BACK
S14BACK
S15BACK
/*-- S_BALFUL   --*/
S8BALFUL
S9BALFUL
S10BALFUL
S11BALFUL
S12BALFUL
S13BALFUL
S14BALFUL
/*-- S_BALFULC   --*/
S8BALFULC
S9BALFULC
S10BALFULC
S11BALFULC
S12BALFULC
S13BALFULC
S14BALFULC
/*-- S_BALFULT   --*/
S8BALFULT
S9BALFULT
S10BALFULT
S11BALFULT
S12BALFULT
S13BALFULT
S14BALFULT
/*-- S_BALSBS   --*/
S8BALSBS
S9BALSBS
S10BALSBS
S11BALSBS
S12BALSBS
S13BALSBS
S14BALSBS
/*-- S_BALSBSC   --*/
S8BALSBSC
S9BALSBSC
S10BALSBSC
S11BALSBSC
S12BALSBSC
S13BALSBSC
S14BALSBSC
/*-- S_BALSEMI   --*/
S8BALSEMI
S9BALSEMI
S10BALSEMI
S11BALSEMI
S12BALSEMI
S13BALSEMI
S14BALSEMI
/*-- S_BALSEMIC   --*/
S8BALSEMIC
S9BALSEMIC
S10BALSEMIC
S11BALSEMIC
S12BALSEMIC
S13BALSEMIC
S14BALSEMIC
/*-- S1_BATH   --*/
S1BATH
/*-- S2_BATH   --*/
S2BATH
/*-- S_BATH   --*/
S3BATH
S4BATH
S5BATH
S6BATH
S7BATH
S8BATH
S9BATH
S10BATH
S11BATH
S12BATH
S13BATH
S14BATH
S15BATH
/*-- S_BATHA   --*/
S2BATHA
S3BATHA
S4BATHA
S5BATHA
S6BATHA
S7BATHA
S8BATHA
S9BATHA
S10BATHA
S11BATHA
S12BATHA
S13BATHA
S14BATHA
S15BATHA
/*-- S2_BATHH   --*/
S2BATHH
/*-- S_BATHH   --*/
S3BATHH
S4BATHH
S5BATHH
S6BATHH
S7BATHH
S8BATHH
S9BATHH
S10BATHH
S11BATHH
S12BATHH
S13BATHH
S14BATHH
S15BATHH
/*-- S_BATHW   --*/
S1BATHW
/*-- S_BDATE   --*/
S1BDATE
S2BDATE
S3BDATE
S4BDATE
S5BDATE
S6BDATE
S7BDATE
S8BDATE
S9BDATE
S10BDATE
S11BDATE
S12BDATE
S13BDATE
S14BDATE
S15BDATE
/*-- S1_BED   --*/
S1BED
/*-- S2_BED   --*/
S2BED
/*-- S_BED   --*/
S3BED
S4BED
S5BED
S6BED
S7BED
S8BED
S9BED
S10BED
S11BED
S12BED
S13BED
S14BED
S15BED
/*-- S_BEDA   --*/
S2BEDA
S3BEDA
S4BEDA
S5BEDA
S6BEDA
S7BEDA
S8BEDA
S9BEDA
S10BEDA
S11BEDA
S12BEDA
S13BEDA
S14BEDA
S15BEDA
/*-- S_BEDE   --*/
S2BEDE
S3BEDE
S4BEDE
S5BEDE
S6BEDE
S7BEDE
S8BEDE
S9BEDE
S10BEDE
S11BEDE
S12BEDE
S13BEDE
S14BEDE
S15BEDE
/*-- S2_BEDH   --*/
S2BEDH
/*-- S_BEDH   --*/
S3BEDH
S4BEDH
S5BEDH
S6BEDH
S7BEDH
S8BEDH
S9BEDH
S10BEDH
S11BEDH
S12BEDH
S13BEDH
S14BEDH
S15BEDH
/*-- S_BEDW   --*/
S1BEDW
/*-- S_BEQ100   --*/
S2BEQ100
S3BEQ100
S4BEQ100
S5BEQ100
S6BEQ100
S7BEQ100
S8BEQ100
S9BEQ100
S10BEQ100
S11BEQ100
S12BEQ100
S13BEQ100
S14BEQ100
S15BEQ100
/*-- S_BEQ10K   --*/
S2BEQ10K
S3BEQ10K
S4BEQ10K
S5BEQ10K
S6BEQ10K
S7BEQ10K
S8BEQ10K
S9BEQ10K
S10BEQ10K
S11BEQ10K
S12BEQ10K
S13BEQ10K
S14BEQ10K
S15BEQ10K
/*-- S_BEQ500   --*/
S6BEQ500
S7BEQ500
S8BEQ500
S9BEQ500
S10BEQ500
S11BEQ500
S12BEQ500
S13BEQ500
S14BEQ500
S15BEQ500
/*-- S_BEQANY   --*/
S2BEQANY
S3BEQANY
S4BEQANY
S5BEQANY
S6BEQANY
S7BEQANY
S8BEQANY
S9BEQANY
S10BEQANY
S11BEQANY
S12BEQANY
S13BEQANY
S14BEQANY
S15BEQANY
/*-- S_BEQLRG   --*/
S1BEQLRG
/*-- S_BFLAG   --*/
S1BFLAG
S2BFLAG
S3BFLAG
S4BFLAG
S5BFLAG
S6BFLAG
S7BFLAG
S8BFLAG
S9BFLAG
S10BFLAG
S11BFLAG
S12BFLAG
S13BFLAG
S14BFLAG
S15BFLAG
/*-- S_BMI   --*/
S1BMI
S2BMI
S3BMI
S4BMI
S5BMI
S6BMI
S7BMI
S8BMI
S9BMI
S10BMI
S11BMI
S12BMI
S13BMI
S14BMI
S15BMI
/*-- S_BMONTH   --*/
S1BMONTH
S2BMONTH
S3BMONTH
S4BMONTH
S5BMONTH
S6BMONTH
S7BMONTH
S8BMONTH
S9BMONTH
S10BMONTH
S11BMONTH
S12BMONTH
S13BMONTH
S14BMONTH
S15BMONTH
/*-- S_BPDIA   --*/
S8BPDIA
S9BPDIA
S10BPDIA
S11BPDIA
S12BPDIA
S13BPDIA
S14BPDIA
/*-- S_BPLACE   --*/
S1BPLACE
S2BPLACE
S3BPLACE
S4BPLACE
S5BPLACE
S6BPLACE
S7BPLACE
S8BPLACE
S9BPLACE
S10BPLACE
S11BPLACE
S12BPLACE
S13BPLACE
S14BPLACE
S15BPLACE
/*-- S_BPLACF   --*/
S1BPLACF
S2BPLACF
S3BPLACF
S4BPLACF
S5BPLACF
S6BPLACF
S7BPLACF
S8BPLACF
S9BPLACF
S10BPLACF
S11BPLACF
S12BPLACF
S13BPLACF
S14BPLACF
S15BPLACF
/*-- S_BPPOS   --*/
S8BPPOS
S9BPPOS
S10BPPOS
S11BPPOS
S12BPPOS
S13BPPOS
S14BPPOS
/*-- S_BPPULS   --*/
S8BPPULS
S9BPPULS
S10BPPULS
S11BPPULS
S12BPPULS
S13BPPULS
S14BPPULS
/*-- S_BPSYS   --*/
S8BPSYS
S9BPSYS
S10BPSYS
S11BPSYS
S12BPSYS
S13BPSYS
S14BPSYS
/*-- S_BREAST   --*/
S3BREAST
S4BREAST
S5BREAST
S6BREAST
S7BREAST
S8BREAST
S9BREAST
S10BREAST
/*-- S_BWC20   --*/
S2BWC20
S3BWC20
S4BWC20
S5BWC20
S6BWC20
S7BWC20
S8BWC20
S9BWC20
S10BWC20
S11BWC20
S12BWC20
S13BWC20
/*-- S_BWC86   --*/
S3BWC86
S4BWC86
S5BWC86
S6BWC86
/*-- S_BYEAR   --*/
S1BYEAR
S2BYEAR
S3BYEAR
S4BYEAR
S5BYEAR
S6BYEAR
S7BYEAR
S8BYEAR
S9BYEAR
S10BYEAR
S11BYEAR
S12BYEAR
S13BYEAR
S14BYEAR
S15BYEAR
/*-- S_CACT   --*/
S2CACT
S3CACT
S4CACT
S5CACT
S6CACT
S7CACT
S8CACT
S9CACT
S10CACT
S11CACT
S12CACT
S13CACT
/*-- S1_CALC   --*/
S1CALC
/*-- S2_CALC   --*/
S2CALC
/*-- S_CALCA   --*/
S2CALCA
/*-- S_CALCW   --*/
S1CALCW
/*-- S_CANCR   --*/
S1CANCR
S2CANCR
S3CANCR
S4CANCR
S5CANCR
S6CANCR
S7CANCR
S8CANCR
S9CANCR
S10CANCR
S11CANCR
S12CANCR
S13CANCR
S14CANCR
S15CANCR
/*-- S_CANCRE   --*/
S1CANCRE
S2CANCRE
S3CANCRE
S4CANCRE
S5CANCRE
S6CANCRE
S7CANCRE
S8CANCRE
S9CANCRE
S10CANCRE
S11CANCRE
S12CANCRE
S13CANCRE
S14CANCRE
S15CANCRE
/*-- S_CANCREF   --*/
S1CANCREF
S2CANCREF
S3CANCREF
S4CANCREF
S5CANCREF
S6CANCREF
S7CANCREF
S8CANCREF
S9CANCREF
S10CANCREF
S11CANCREF
S12CANCREF
S13CANCREF
S14CANCREF
S15CANCREF
/*-- S_CANCRF   --*/
S1CANCRF
S2CANCRF
S3CANCRF
S4CANCRF
S5CANCRF
S6CANCRF
S7CANCRF
S8CANCRF
S9CANCRF
S10CANCRF
S11CANCRF
S12CANCRF
S13CANCRF
S14CANCRF
S15CANCRF
/*-- S_CANCRQ   --*/
S1CANCRQ
S2CANCRQ
S3CANCRQ
S4CANCRQ
S5CANCRQ
S6CANCRQ
S7CANCRQ
S8CANCRQ
S9CANCRQ
S10CANCRQ
S11CANCRQ
S12CANCRQ
S13CANCRQ
S14CANCRQ
S15CANCRQ
/*-- S_CANCRS   --*/
S2CANCRS
S3CANCRS
S4CANCRS
S5CANCRS
S6CANCRS
S7CANCRS
S8CANCRS
S9CANCRS
S10CANCRS
S11CANCRS
S12CANCRS
S13CANCRS
S14CANCRS
S15CANCRS
/*-- S_CENDIV   --*/
S1CENDIV
S2CENDIV
S3CENDIV
S4CENDIV
S5CENDIV
S6CENDIV
S7CENDIV
S8CENDIV
S9CENDIV
S10CENDIV
S11CENDIV
S12CENDIV
S13CENDIV
S14CENDIV
S15CENDIV
/*-- S_CENREG   --*/
S1CENREG
S2CENREG
S3CENREG
S4CENREG
S5CENREG
S6CENREG
S7CENREG
S8CENREG
S9CENREG
S10CENREG
S11CENREG
S12CENREG
S13CENREG
S14CENREG
S15CENREG
/*-- S_CESD   --*/
S2CESD
S3CESD
S4CESD
S5CESD
S6CESD
S7CESD
S8CESD
S9CESD
S10CESD
S11CESD
S12CESD
S13CESD
S14CESD
S15CESD
/*-- S_CESDM   --*/
S1CESDM
S2CESDM
S3CESDM
S4CESDM
S5CESDM
S6CESDM
S7CESDM
S8CESDM
S9CESDM
S10CESDM
S11CESDM
S12CESDM
S13CESDM
S14CESDM
S15CESDM
/*-- S1_CHAIR   --*/
S1CHAIR
/*-- S2_CHAIR   --*/
S2CHAIR
/*-- S_CHAIR   --*/
S3CHAIR
S4CHAIR
S5CHAIR
S6CHAIR
S7CHAIR
S8CHAIR
S9CHAIR
S10CHAIR
S11CHAIR
S12CHAIR
S13CHAIR
S14CHAIR
S15CHAIR
/*-- S_CHAIRA   --*/
S2CHAIRA
S3CHAIRA
S4CHAIRA
S5CHAIRA
S6CHAIRA
S7CHAIRA
S8CHAIRA
S9CHAIRA
S10CHAIRA
S11CHAIRA
S12CHAIRA
S13CHAIRA
S14CHAIRA
S15CHAIRA
/*-- S_CHAIRW   --*/
S1CHAIRW
/*-- S_CHOLST   --*/
S3CHOLST
S4CHOLST
S5CHOLST
S6CHOLST
S7CHOLST
S8CHOLST
S9CHOLST
S10CHOLST
S11CHOLST
S12CHOLST
S13CHOLST
S14CHOLST
S15CHOLST
/*-- S_CLAIMED   --*/
S1CLAIMED
S4CLAIMED
S7CLAIMED
S10CLAIMED
S13CLAIMED
/*-- S1_CLIM1   --*/
S1CLIM1
/*-- S2_CLIM1   --*/
S2CLIM1
/*-- S_CLIM1   --*/
S3CLIM1
S4CLIM1
S5CLIM1
S6CLIM1
S7CLIM1
S8CLIM1
S9CLIM1
S10CLIM1
S11CLIM1
S12CLIM1
S13CLIM1
S14CLIM1
S15CLIM1
/*-- S_CLIM1A   --*/
S2CLIM1A
S3CLIM1A
S4CLIM1A
S5CLIM1A
S6CLIM1A
S7CLIM1A
S8CLIM1A
S9CLIM1A
S10CLIM1A
S11CLIM1A
S12CLIM1A
S13CLIM1A
S14CLIM1A
S15CLIM1A
/*-- S_CLIM1W   --*/
S1CLIM1W
/*-- S1_CLIMS   --*/
S1CLIMS
/*-- S2_CLIMS   --*/
S2CLIMS
/*-- S_CLIMS   --*/
S3CLIMS
S4CLIMS
S5CLIMS
S6CLIMS
S7CLIMS
S8CLIMS
S9CLIMS
S10CLIMS
S11CLIMS
S12CLIMS
S13CLIMS
S14CLIMS
S15CLIMS
/*-- S_CLIMSA   --*/
S2CLIMSA
S3CLIMSA
S4CLIMSA
S5CLIMSA
S6CLIMSA
S7CLIMSA
S8CLIMSA
S9CLIMSA
S10CLIMSA
S11CLIMSA
S12CLIMSA
S13CLIMSA
S14CLIMSA
S15CLIMSA
/*-- S_CLIMSW   --*/
S1CLIMSW
/*-- S_COGTOT   --*/
S3COGTOT
S4COGTOT
S5COGTOT
S6COGTOT
S7COGTOT
S8COGTOT
S9COGTOT
S10COGTOT
S11COGTOT
S12COGTOT
S13COGTOT
/*-- S_COHBYR   --*/
S1COHBYR
S2COHBYR
S3COHBYR
S4COHBYR
S5COHBYR
S6COHBYR
S7COHBYR
S8COHBYR
S9COHBYR
S10COHBYR
S11COHBYR
S12COHBYR
S13COHBYR
S14COHBYR
S15COHBYR
/*-- S_COHORT   --*/
S1COHORT
S2COHORT
S3COHORT
S4COHORT
S5COHORT
S6COHORT
S7COHORT
S8COHORT
S9COHORT
S10COHORT
S11COHORT
S12COHORT
S13COHORT
S14COHORT
S15COHORT
/*-- S_COMP   --*/
S1COMP
/*-- S_COMPW   --*/
S1COMPW
/*-- S_CONDE   --*/
S1CONDE
S2CONDE
S3CONDE
S4CONDE
S5CONDE
S6CONDE
S7CONDE
S8CONDE
S9CONDE
S10CONDE
S11CONDE
S12CONDE
S13CONDE
S14CONDE
S15CONDE
/*-- S_CONDEF   --*/
S1CONDEF
S2CONDEF
S3CONDEF
S4CONDEF
S5CONDEF
S6CONDEF
S7CONDEF
S8CONDEF
S9CONDEF
S10CONDEF
S11CONDEF
S12CONDEF
S13CONDEF
S14CONDEF
S15CONDEF
/*-- S_CONDS   --*/
S2CONDS
S3CONDS
S4CONDS
S5CONDS
S6CONDS
S7CONDS
S8CONDS
S9CONDS
S10CONDS
S11CONDS
S12CONDS
S13CONDS
S14CONDS
S15CONDS
/*-- S_CONDSF   --*/
S2CONDSF
S3CONDSF
S4CONDSF
S5CONDSF
S6CONDSF
S7CONDSF
S8CONDSF
S9CONDSF
S10CONDSF
S11CONDSF
S12CONDSF
S13CONDSF
S14CONDSF
S15CONDSF
/*-- S_CONDSP   --*/
S2CONDSP
S3CONDSP
S4CONDSP
S5CONDSP
S6CONDSP
S7CONDSP
S8CONDSP
S9CONDSP
S10CONDSP
S11CONDSP
S12CONDSP
S13CONDSP
S14CONDSP
S15CONDSP
/*-- S_COVR   --*/
S1COVR
S2COVR
S3COVR
S4COVR
S5COVR
S6COVR
S7COVR
S8COVR
S9COVR
S10COVR
S11COVR
S12COVR
S13COVR
S14COVR
S15COVR
/*-- S_COVRT   --*/
S1COVRT
S2COVRT
S3COVRT
S4COVRT
S5COVRT
S6COVRT
S7COVRT
S8COVRT
S9COVRT
S10COVRT
S11COVRT
S12COVRT
S13COVRT
S14COVRT
S15COVRT
/*-- S_COVS   --*/
S1COVS
S2COVS
S3COVS
S4COVS
S5COVS
S6COVS
S7COVS
S8COVS
S9COVS
S10COVS
S11COVS
S12COVS
S13COVS
S14COVS
S15COVS
/*-- S_DADAGE   --*/
S1DADAGE
S2DADAGE
S3DADAGE
S4DADAGE
S5DADAGE
S6DADAGE
S7DADAGE
S8DADAGE
S9DADAGE
S10DADAGE
S11DADAGE
S12DADAGE
S13DADAGE
S14DADAGE
S15DADAGE
/*-- S_DADLIV   --*/
S1DADLIV
S2DADLIV
S3DADLIV
S4DADLIV
S5DADLIV
S6DADLIV
S7DADLIV
S8DADLIV
S9DADLIV
S10DADLIV
S11DADLIV
S12DADLIV
S13DADLIV
S14DADLIV
S15DADLIV
/*-- S_DAGE_M   --*/
S1DAGE_M
S2DAGE_M
S3DAGE_M
S4DAGE_M
S5DAGE_M
S6DAGE_M
S7DAGE_M
S8DAGE_M
S9DAGE_M
S10DAGE_M
S11DAGE_M
S12DAGE_M
S13DAGE_M
S14DAGE_M
S15DAGE_M
/*-- S_DAGE_Y   --*/
S1DAGE_Y
S2DAGE_Y
S3DAGE_Y
S4DAGE_Y
S5DAGE_Y
S6DAGE_Y
S7DAGE_Y
S8DAGE_Y
S9DAGE_Y
S10DAGE_Y
S11DAGE_Y
S12DAGE_Y
S13DAGE_Y
S14DAGE_Y
S15DAGE_Y
/*-- S_DCBAL1   --*/
S1DCBAL1
S2DCBAL1
S3DCBAL1
S4DCBAL1
S5DCBAL1
S6DCBAL1
S7DCBAL1
S8DCBAL1
S9DCBAL1
S10DCBAL1
S11DCBAL1
S12DCBAL1
S13DCBAL1
S14DCBAL1
S15DCBAL1
/*-- S_DCBAL2   --*/
S1DCBAL2
S2DCBAL2
S3DCBAL2
S4DCBAL2
S5DCBAL2
S6DCBAL2
S7DCBAL2
S8DCBAL2
S9DCBAL2
S10DCBAL2
S11DCBAL2
S12DCBAL2
S13DCBAL2
S14DCBAL2
S15DCBAL2
/*-- S_DCBAL3   --*/
S1DCBAL3
S2DCBAL3
S3DCBAL3
S4DCBAL3
S5DCBAL3
S6DCBAL3
S7DCBAL3
S8DCBAL3
S9DCBAL3
S10DCBAL3
S11DCBAL3
S12DCBAL3
S13DCBAL3
S14DCBAL3
S15DCBAL3
/*-- S_DCBAL4   --*/
S5DCBAL4
S6DCBAL4
S7DCBAL4
S8DCBAL4
S9DCBAL4
S10DCBAL4
S11DCBAL4
S12DCBAL4
S13DCBAL4
S14DCBAL4
S15DCBAL4
/*-- S_DCBENE1   --*/
S1DCBENE1
S2DCBENE1
S3DCBENE1
S4DCBENE1
S5DCBENE1
S6DCBENE1
S7DCBENE1
S8DCBENE1
S9DCBENE1
S10DCBENE1
S11DCBENE1
S12DCBENE1
S13DCBENE1
S14DCBENE1
S15DCBENE1
/*-- S_DCBENE2   --*/
S1DCBENE2
S2DCBENE2
S3DCBENE2
S4DCBENE2
S5DCBENE2
S6DCBENE2
S7DCBENE2
S8DCBENE2
S9DCBENE2
S10DCBENE2
S11DCBENE2
S12DCBENE2
S13DCBENE2
S14DCBENE2
S15DCBENE2
/*-- S_DCBENE3   --*/
S1DCBENE3
S2DCBENE3
S3DCBENE3
S4DCBENE3
S5DCBENE3
S6DCBENE3
S7DCBENE3
S8DCBENE3
S9DCBENE3
S10DCBENE3
S11DCBENE3
S12DCBENE3
S13DCBENE3
S14DCBENE3
S15DCBENE3
/*-- S_DCBENE4   --*/
S5DCBENE4
S6DCBENE4
S7DCBENE4
S8DCBENE4
S9DCBENE4
S10DCBENE4
S11DCBENE4
S12DCBENE4
S13DCBENE4
S14DCBENE4
S15DCBENE4
/*-- S_DCCONT1   --*/
S1DCCONT1
S2DCCONT1
S3DCCONT1
S4DCCONT1
S5DCCONT1
S6DCCONT1
S7DCCONT1
S8DCCONT1
S9DCCONT1
S10DCCONT1
S11DCCONT1
S12DCCONT1
S13DCCONT1
S14DCCONT1
S15DCCONT1
/*-- S_DCCONT2   --*/
S1DCCONT2
S2DCCONT2
S3DCCONT2
S4DCCONT2
S5DCCONT2
S6DCCONT2
S7DCCONT2
S8DCCONT2
S9DCCONT2
S10DCCONT2
S11DCCONT2
S12DCCONT2
S13DCCONT2
S14DCCONT2
S15DCCONT2
/*-- S_DCCONT3   --*/
S1DCCONT3
S2DCCONT3
S3DCCONT3
S4DCCONT3
S5DCCONT3
S6DCCONT3
S7DCCONT3
S8DCCONT3
S9DCCONT3
S10DCCONT3
S11DCCONT3
S12DCCONT3
S13DCCONT3
S14DCCONT3
S15DCCONT3
/*-- S_DCCONT4   --*/
S5DCCONT4
S6DCCONT4
S7DCCONT4
S8DCCONT4
S9DCCONT4
S10DCCONT4
S11DCCONT4
S12DCCONT4
S13DCCONT4
S14DCCONT4
S15DCCONT4
/*-- S_DCMODE1   --*/
S1DCMODE1
S2DCMODE1
S3DCMODE1
S4DCMODE1
S5DCMODE1
S6DCMODE1
S7DCMODE1
S8DCMODE1
S9DCMODE1
S10DCMODE1
S11DCMODE1
S12DCMODE1
S13DCMODE1
S14DCMODE1
S15DCMODE1
/*-- S_DCMODE2   --*/
S1DCMODE2
S2DCMODE2
S3DCMODE2
S4DCMODE2
S5DCMODE2
S6DCMODE2
S7DCMODE2
S8DCMODE2
S9DCMODE2
S10DCMODE2
S11DCMODE2
S12DCMODE2
S13DCMODE2
S14DCMODE2
S15DCMODE2
/*-- S_DCMODE3   --*/
S1DCMODE3
S2DCMODE3
S3DCMODE3
S4DCMODE3
S5DCMODE3
S6DCMODE3
S7DCMODE3
S8DCMODE3
S9DCMODE3
S10DCMODE3
S11DCMODE3
S12DCMODE3
S13DCMODE3
S14DCMODE3
S15DCMODE3
/*-- S_DCMODE4   --*/
S5DCMODE4
S6DCMODE4
S7DCMODE4
S8DCMODE4
S9DCMODE4
S10DCMODE4
S11DCMODE4
S12DCMODE4
S13DCMODE4
S14DCMODE4
S15DCMODE4
/*-- S_DCPCT1   --*/
S1DCPCT1
S2DCPCT1
S3DCPCT1
S4DCPCT1
S5DCPCT1
S6DCPCT1
S7DCPCT1
S8DCPCT1
S9DCPCT1
S10DCPCT1
S11DCPCT1
S12DCPCT1
S13DCPCT1
S14DCPCT1
S15DCPCT1
/*-- S_DCPCT2   --*/
S1DCPCT2
S2DCPCT2
S3DCPCT2
S4DCPCT2
S5DCPCT2
S6DCPCT2
S7DCPCT2
S8DCPCT2
S9DCPCT2
S10DCPCT2
S11DCPCT2
S12DCPCT2
S13DCPCT2
S14DCPCT2
S15DCPCT2
/*-- S_DCPCT3   --*/
S1DCPCT3
S2DCPCT3
S3DCPCT3
S4DCPCT3
S5DCPCT3
S6DCPCT3
S7DCPCT3
S8DCPCT3
S9DCPCT3
S10DCPCT3
S11DCPCT3
S12DCPCT3
S13DCPCT3
S14DCPCT3
S15DCPCT3
/*-- S_DCPCT4   --*/
S5DCPCT4
S6DCPCT4
S7DCPCT4
S8DCPCT4
S9DCPCT4
S10DCPCT4
S11DCPCT4
S12DCPCT4
S13DCPCT4
S14DCPCT4
S15DCPCT4
/*-- S_DDATE   --*/
S1DDATE
S2DDATE
S3DDATE
S4DDATE
S5DDATE
S6DDATE
S7DDATE
S8DDATE
S9DDATE
S10DDATE
S11DDATE
S12DDATE
S13DDATE
S14DDATE
S15DDATE
/*-- S_DEMEN   --*/
S10DEMEN
S11DEMEN
S12DEMEN
S13DEMEN
S14DEMEN
S15DEMEN
/*-- S_DEMENE   --*/
S10DEMENE
S11DEMENE
S12DEMENE
S13DEMENE
S14DEMENE
S15DEMENE
/*-- S_DEMENEF   --*/
S10DEMENEF
S11DEMENEF
S12DEMENEF
S13DEMENEF
S14DEMENEF
S15DEMENEF
/*-- S_DEMENF   --*/
S11DEMENF
S12DEMENF
S13DEMENF
S14DEMENF
S15DEMENF
/*-- S_DEMENQ   --*/
S10DEMENQ
S11DEMENQ
S12DEMENQ
S13DEMENQ
S14DEMENQ
S15DEMENQ
/*-- S_DEMENS   --*/
S11DEMENS
S12DEMENS
S13DEMENS
S14DEMENS
S15DEMENS
/*-- S_DENTST   --*/
S2DENTST
S3DENTST
S4DENTST
S5DENTST
S6DENTST
S7DENTST
S8DENTST
S9DENTST
S10DENTST
S11DENTST
S12DENTST
S13DENTST
S14DENTST
S15DENTST
/*-- S_DEPRES   --*/
S2DEPRES
S3DEPRES
S4DEPRES
S5DEPRES
S6DEPRES
S7DEPRES
S8DEPRES
S9DEPRES
S10DEPRES
S11DEPRES
S12DEPRES
S13DEPRES
S14DEPRES
S15DEPRES
/*-- S_DEPREX   --*/
S1DEPREX
/*-- S_DIAB   --*/
S1DIAB
S2DIAB
S3DIAB
S4DIAB
S5DIAB
S6DIAB
S7DIAB
S8DIAB
S9DIAB
S10DIAB
S11DIAB
S12DIAB
S13DIAB
S14DIAB
S15DIAB
/*-- S_DIABE   --*/
S1DIABE
S2DIABE
S3DIABE
S4DIABE
S5DIABE
S6DIABE
S7DIABE
S8DIABE
S9DIABE
S10DIABE
S11DIABE
S12DIABE
S13DIABE
S14DIABE
S15DIABE
/*-- S_DIABEF   --*/
S1DIABEF
S2DIABEF
S3DIABEF
S4DIABEF
S5DIABEF
S6DIABEF
S7DIABEF
S8DIABEF
S9DIABEF
S10DIABEF
S11DIABEF
S12DIABEF
S13DIABEF
S14DIABEF
S15DIABEF
/*-- S_DIABF   --*/
S1DIABF
S2DIABF
S3DIABF
S4DIABF
S5DIABF
S6DIABF
S7DIABF
S8DIABF
S9DIABF
S10DIABF
S11DIABF
S12DIABF
S13DIABF
S14DIABF
S15DIABF
/*-- S_DIABQ   --*/
S1DIABQ
S2DIABQ
S3DIABQ
S4DIABQ
S5DIABQ
S6DIABQ
S7DIABQ
S8DIABQ
S9DIABQ
S10DIABQ
S11DIABQ
S12DIABQ
S13DIABQ
S14DIABQ
S15DIABQ
/*-- S_DIABS   --*/
S2DIABS
S3DIABS
S4DIABS
S5DIABS
S6DIABS
S7DIABS
S8DIABS
S9DIABS
S10DIABS
S11DIABS
S12DIABS
S13DIABS
S14DIABS
S15DIABS
/*-- S1_DIME   --*/
S1DIME
/*-- S2_DIME   --*/
S2DIME
/*-- S_DIME   --*/
S3DIME
S4DIME
S5DIME
S6DIME
S7DIME
S8DIME
S9DIME
S10DIME
S11DIME
S12DIME
S13DIME
S14DIME
S15DIME
/*-- S_DIMEA   --*/
S2DIMEA
S3DIMEA
S4DIMEA
S5DIMEA
S6DIMEA
S7DIMEA
S8DIMEA
S9DIMEA
S10DIMEA
S11DIMEA
S12DIMEA
S13DIMEA
S14DIMEA
S15DIMEA
/*-- S_DIMEW   --*/
S1DIMEW
/*-- S_DLRC   --*/
S3DLRC
S4DLRC
S5DLRC
S6DLRC
S7DLRC
S8DLRC
S9DLRC
S10DLRC
S11DLRC
S12DLRC
S13DLRC
/*-- S_DLRC20   --*/
S1DLRC20
/*-- S_DMONTH   --*/
S1DMONTH
S2DMONTH
S3DMONTH
S4DMONTH
S5DMONTH
S6DMONTH
S7DMONTH
S8DMONTH
S9DMONTH
S10DMONTH
S11DMONTH
S12DMONTH
S13DMONTH
S14DMONTH
S15DMONTH
/*-- S_DOCTIM   --*/
S1DOCTIM
S2DOCTIM
S3DOCTIM
S4DOCTIM
S5DOCTIM
S6DOCTIM
S7DOCTIM
S8DOCTIM
S9DOCTIM
S10DOCTIM
S11DOCTIM
S12DOCTIM
S13DOCTIM
S14DOCTIM
S15DOCTIM
/*-- S_DOCTOR   --*/
S1DOCTOR
S2DOCTOR
S3DOCTOR
S4DOCTOR
S5DOCTOR
S6DOCTOR
S7DOCTOR
S8DOCTOR
S9DOCTOR
S10DOCTOR
S11DOCTOR
S12DOCTOR
S13DOCTOR
S14DOCTOR
S15DOCTOR
/*-- S1_DRESS   --*/
S1DRESS
/*-- S2_DRESS   --*/
S2DRESS
/*-- S_DRESS   --*/
S3DRESS
S4DRESS
S5DRESS
S6DRESS
S7DRESS
S8DRESS
S9DRESS
S10DRESS
S11DRESS
S12DRESS
S13DRESS
S14DRESS
S15DRESS
/*-- S_DRESSA   --*/
S2DRESSA
S3DRESSA
S4DRESSA
S5DRESSA
S6DRESSA
S7DRESSA
S8DRESSA
S9DRESSA
S10DRESSA
S11DRESSA
S12DRESSA
S13DRESSA
S14DRESSA
S15DRESSA
/*-- S2_DRESSH   --*/
S2DRESSH
/*-- S_DRESSH   --*/
S3DRESSH
S4DRESSH
S5DRESSH
S6DRESSH
S7DRESSH
S8DRESSH
S9DRESSH
S10DRESSH
S11DRESSH
S12DRESSH
S13DRESSH
S14DRESSH
S15DRESSH
/*-- S_DRESSW   --*/
S1DRESSW
/*-- S_DRINK   --*/
S1DRINK
S2DRINK
S3DRINK
S4DRINK
S5DRINK
S6DRINK
S7DRINK
S8DRINK
S9DRINK
S10DRINK
S11DRINK
S12DRINK
S13DRINK
S14DRINK
S15DRINK
/*-- S_DRINKD   --*/
S3DRINKD
S4DRINKD
S5DRINKD
S6DRINKD
S7DRINKD
S8DRINKD
S9DRINKD
S10DRINKD
S11DRINKD
S12DRINKD
S13DRINKD
S14DRINKD
S15DRINKD
/*-- S_DRINKN   --*/
S3DRINKN
S4DRINKN
S5DRINKN
S6DRINKN
S7DRINKN
S8DRINKN
S9DRINKN
S10DRINKN
S11DRINKN
S12DRINKN
S13DRINKN
S14DRINKN
S15DRINKN
/*-- S_DRINKR   --*/
S1DRINKR
S2DRINKR
/*-- S_DRUGS   --*/
S2DRUGS
S3DRUGS
S4DRUGS
S5DRUGS
S6DRUGS
S7DRUGS
S8DRUGS
S9DRUGS
S10DRUGS
S11DRUGS
S12DRUGS
S13DRUGS
S14DRUGS
S15DRUGS
/*-- S_DSIAMT   --*/
S5DSIAMT
S6DSIAMT
S7DSIAMT
S8DSIAMT
S9DSIAMT
S10DSIAMT
S11DSIAMT
S12DSIAMT
S13DSIAMT
S14DSIAMT
S15DSIAMT
/*-- S_DSRC   --*/
S1DSRC
S2DSRC
S3DSRC
S4DSRC
S5DSRC
S6DSRC
S7DSRC
S8DSRC
S9DSRC
S10DSRC
S11DSRC
S12DSRC
S13DSRC
S14DSRC
S15DSRC
/*-- S_DSSAMT   --*/
S5DSSAMT
S6DSSAMT
S7DSSAMT
S8DSSAMT
S9DSSAMT
S10DSSAMT
S11DSSAMT
S12DSSAMT
S13DSSAMT
S14DSSAMT
S15DSSAMT
/*-- S_DSTAT   --*/
S1DSTAT
S2DSTAT
S3DSTAT
S4DSTAT
S5DSTAT
S6DSTAT
S7DSTAT
S8DSTAT
S9DSTAT
S10DSTAT
S11DSTAT
S12DSTAT
S13DSTAT
S14DSTAT
S15DSTAT
/*-- S_DTIMTDTH   --*/
S1DTIMTDTH
S2DTIMTDTH
S3DTIMTDTH
S4DTIMTDTH
S5DTIMTDTH
S6DTIMTDTH
S7DTIMTDTH
S8DTIMTDTH
S9DTIMTDTH
S10DTIMTDTH
S11DTIMTDTH
S12DTIMTDTH
S13DTIMTDTH
S14DTIMTDTH
S15DTIMTDTH
/*-- S_DW   --*/
S2DW
S3DW
S4DW
S5DW
S6DW
S7DW
S8DW
S9DW
S10DW
S11DW
S12DW
S13DW
/*-- S_DY   --*/
S2DY
S3DY
S4DY
S5DY
S6DY
S7DY
S8DY
S9DY
S10DY
S11DY
S12DY
S13DY
/*-- S_DYEAR   --*/
S1DYEAR
S2DYEAR
S3DYEAR
S4DYEAR
S5DYEAR
S6DYEAR
S7DYEAR
S8DYEAR
S9DYEAR
S10DYEAR
S11DYEAR
S12DYEAR
S13DYEAR
S14DYEAR
S15DYEAR
/*-- S1_EAT   --*/
S1EAT
/*-- S2_EAT   --*/
S2EAT
/*-- S_EAT   --*/
S3EAT
S4EAT
S5EAT
S6EAT
S7EAT
S8EAT
S9EAT
S10EAT
S11EAT
S12EAT
S13EAT
S14EAT
S15EAT
/*-- S_EATA   --*/
S2EATA
S3EATA
S4EATA
S5EATA
S6EATA
S7EATA
S8EATA
S9EATA
S10EATA
S11EATA
S12EATA
S13EATA
S14EATA
S15EATA
/*-- S2_EATH   --*/
S2EATH
/*-- S_EATH   --*/
S3EATH
S4EATH
S5EATH
S6EATH
S7EATH
S8EATH
S9EATH
S10EATH
S11EATH
S12EATH
S13EATH
S14EATH
S15EATH
/*-- S_EATW   --*/
S1EATW
/*-- S_EDEGRM   --*/
S1EDEGRM
S2EDEGRM
S3EDEGRM
S4EDEGRM
S5EDEGRM
S6EDEGRM
S7EDEGRM
S8EDEGRM
S9EDEGRM
S10EDEGRM
S11EDEGRM
S12EDEGRM
S13EDEGRM
S14EDEGRM
S15EDEGRM
/*-- S_EDUC   --*/
S1EDUC
S2EDUC
S3EDUC
S4EDUC
S5EDUC
S6EDUC
S7EDUC
S8EDUC
S9EDUC
S10EDUC
S11EDUC
S12EDUC
S13EDUC
S14EDUC
S15EDUC
/*-- S_EDYRS   --*/
S1EDYRS
S2EDYRS
S3EDYRS
S4EDYRS
S5EDYRS
S6EDYRS
S7EDYRS
S8EDYRS
S9EDYRS
S10EDYRS
S11EDYRS
S12EDYRS
S13EDYRS
S14EDYRS
S15EDYRS
/*-- S_EFFORT   --*/
S2EFFORT
S3EFFORT
S4EFFORT
S5EFFORT
S6EFFORT
S7EFFORT
S8EFFORT
S9EFFORT
S10EFFORT
S11EFFORT
S12EFFORT
S13EFFORT
S14EFFORT
S15EFFORT
/*-- S_EFFORX   --*/
S1EFFORX
/*-- S_ENLIFE   --*/
S2ENLIFE
S3ENLIFE
S4ENLIFE
S5ENLIFE
S6ENLIFE
S7ENLIFE
S8ENLIFE
S9ENLIFE
S10ENLIFE
S11ENLIFE
S12ENLIFE
S13ENLIFE
S14ENLIFE
S15ENLIFE
/*-- S_ENLIFX   --*/
S1ENLIFX
/*-- S_EVBRN   --*/
S1EVBRN
S2EVBRN
S3EVBRN
S4EVBRN
S5EVBRN
S6EVBRN
S7EVBRN
S8EVBRN
S9EVBRN
S10EVBRN
S11EVBRN
S12EVBRN
S13EVBRN
S14EVBRN
S15EVBRN
/*-- S_EVBRNF   --*/
S1EVBRNF
S2EVBRNF
S3EVBRNF
S4EVBRNF
S5EVBRNF
S6EVBRNF
S7EVBRNF
S8EVBRNF
S9EVBRNF
S10EVBRNF
S11EVBRNF
S12EVBRNF
S13EVBRNF
S14EVBRNF
S15EVBRNF
/*-- S_FAMR   --*/
S1FAMR
S2FAMR
S3FAMR
S4FAMR
S5FAMR
S6FAMR
S7FAMR
S8FAMR
S9FAMR
S10FAMR
S11FAMR
S12FAMR
S13FAMR
S14FAMR
S15FAMR
/*-- S_FBWC20   --*/
S2FBWC20
S3FBWC20
S4FBWC20
S5FBWC20
S6FBWC20
S7FBWC20
S8FBWC20
S9FBWC20
S10FBWC20
S11FBWC20
S12FBWC20
S13FBWC20
/*-- S_FBWC86   --*/
S3FBWC86
S4FBWC86
S5FBWC86
S6FBWC86
/*-- S_FCACT   --*/
S2FCACT
S3FCACT
S4FCACT
S5FCACT
S6FCACT
S7FCACT
S8FCACT
S9FCACT
S10FCACT
S11FCACT
S12FCACT
S13FCACT
/*-- S_FDLRC   --*/
S1FDLRC
S2FDLRC
S3FDLRC
S4FDLRC
S5FDLRC
S6FDLRC
S7FDLRC
S8FDLRC
S9FDLRC
S10FDLRC
S11FDLRC
S12FDLRC
S13FDLRC
/*-- S_FDW   --*/
S2FDW
S3FDW
S4FDW
S5FDW
S6FDW
S7FDW
S8FDW
S9FDW
S10FDW
S11FDW
S12FDW
S13FDW
/*-- S_FDY   --*/
S2FDY
S3FDY
S4FDY
S5FDY
S6FDY
S7FDY
S8FDY
S9FDY
S10FDY
S11FDY
S12FDY
S13FDY
/*-- S_FEDUC   --*/
S1FEDUC
S2FEDUC
S3FEDUC
S4FEDUC
S5FEDUC
S6FEDUC
S7FEDUC
S8FEDUC
S9FEDUC
S10FEDUC
S11FEDUC
S12FEDUC
S13FEDUC
S14FEDUC
S15FEDUC
/*-- S_FIMRC   --*/
S1FIMRC
S2FIMRC
S3FIMRC
S4FIMRC
S5FIMRC
S6FIMRC
S7FIMRC
S8FIMRC
S9FIMRC
S10FIMRC
S11FIMRC
S12FIMRC
S13FIMRC
/*-- S_FINEA   --*/
S2FINEA
S3FINEA
S4FINEA
S5FINEA
S6FINEA
S7FINEA
S8FINEA
S9FINEA
S10FINEA
S11FINEA
S12FINEA
S13FINEA
S14FINEA
S15FINEA
/*-- S_FINPLN   --*/
S1FINPLN
S4FINPLN
S5FINPLN
S6FINPLN
S7FINPLN
S8FINPLN
S11FINPLN
S12FINPLN
S13FINPLN
S14FINPLN
S15FINPLN
/*-- S_FINR   --*/
S1FINR
S2FINR
S3FINR
S4FINR
S5FINR
S6FINR
S7FINR
S8FINR
S9FINR
S10FINR
S11FINR
S12FINR
S13FINR
S14FINR
S15FINR
/*-- S_FLAG   --*/
S2FLAG
S3FLAG
/*-- S_FLONE   --*/
S2FLONE
S3FLONE
S4FLONE
S5FLONE
S6FLONE
S7FLONE
S8FLONE
S9FLONE
S10FLONE
S11FLONE
S12FLONE
S13FLONE
S14FLONE
S15FLONE
/*-- S_FLONEX   --*/
S1FLONEX
/*-- S_FLUSHT   --*/
S3FLUSHT
S4FLUSHT
S5FLUSHT
S6FLUSHT
S7FLUSHT
S8FLUSHT
S9FLUSHT
S10FLUSHT
S11FLUSHT
S12FLUSHT
S13FLUSHT
S14FLUSHT
S15FLUSHT
/*-- S_FMO   --*/
S2FMO
S3FMO
S4FMO
S5FMO
S6FMO
S7FMO
S8FMO
S9FMO
S10FMO
S11FMO
S12FMO
S13FMO
/*-- S_FPRES   --*/
S2FPRES
S3FPRES
S4FPRES
S5FPRES
S6FPRES
S7FPRES
S8FPRES
S9FPRES
S10FPRES
S11FPRES
S12FPRES
S13FPRES
/*-- S_FPSTME   --*/
S1FPSTME
S2FPSTME
S3FPSTME
S4FPSTME
S5FPSTME
S6FPSTME
S7FPSTME
S8FPSTME
S9FPSTME
S10FPSTME
S11FPSTME
S12FPSTME
S13FPSTME
/*-- S_FSAD   --*/
S2FSAD
S3FSAD
S4FSAD
S5FSAD
S6FSAD
S7FSAD
S8FSAD
S9FSAD
S10FSAD
S11FSAD
S12FSAD
S13FSAD
S14FSAD
S15FSAD
/*-- S_FSADX   --*/
S1FSADX
/*-- S_FSCIS   --*/
S2FSCIS
S3FSCIS
S4FSCIS
S5FSCIS
S6FSCIS
S7FSCIS
S8FSCIS
S9FSCIS
S10FSCIS
S11FSCIS
S12FSCIS
S13FSCIS
/*-- S_FSER7   --*/
S2FSER7
S3FSER7
S4FSER7
S5FSER7
S6FSER7
S7FSER7
S8FSER7
S9FSER7
S10FSER7
S11FSER7
S12FSER7
S13FSER7
/*-- S_FSIZE   --*/
S1FSIZE
S2FSIZE
S3FSIZE
S4FSIZE
S5FSIZE
S6FSIZE
S7FSIZE
S8FSIZE
S9FSIZE
S10FSIZE
S11FSIZE
S12FSIZE
S13FSIZE
S14FSIZE
S15FSIZE
/*-- S_FSIZEF   --*/
S2FSIZEF
S3FSIZEF
S4FSIZEF
S5FSIZEF
S6FSIZEF
S7FSIZEF
S8FSIZEF
S9FSIZEF
S10FSIZEF
S11FSIZEF
S12FSIZEF
S13FSIZEF
S14FSIZEF
S15FSIZEF
/*-- S_FSLFME   --*/
S1FSLFME
S2FSLFME
S3FSLFME
S4FSLFME
S5FSLFME
S6FSLFME
S7FSLFME
S8FSLFME
S9FSLFME
S10FSLFME
S11FSLFME
S12FSLFME
S13FSLFME
/*-- S_FVOCAB   --*/
S3FVOCAB
S4FVOCAB
S5FVOCAB
S6FVOCAB
S7FVOCAB
S8FVOCAB
S9FVOCAB
S10FVOCAB
S11FVOCAB
S12FVOCAB
S13FVOCAB
/*-- S_FVP   --*/
S2FVP
S3FVP
S4FVP
S5FVP
S6FVP
S7FVP
S8FVP
S9FVP
S10FVP
S11FVP
S12FVP
S13FVP
/*-- S_FYR   --*/
S2FYR
S3FYR
S4FYR
S5FYR
S6FYR
S7FYR
S8FYR
S9FYR
S10FYR
S11FYR
S12FYR
S13FYR
/*-- S_GENDER   --*/
S1GENDER
S2GENDER
S3GENDER
S4GENDER
S5GENDER
S6GENDER
S7GENDER
S8GENDER
S9GENDER
S10GENDER
S11GENDER
S12GENDER
S13GENDER
S14GENDER
S15GENDER
/*-- S_GOING   --*/
S2GOING
S3GOING
S4GOING
S5GOING
S6GOING
S7GOING
S8GOING
S9GOING
S10GOING
S11GOING
S12GOING
S13GOING
S14GOING
S15GOING
/*-- S_GOINGX   --*/
S1GOINGX
/*-- S_GOVMD   --*/
S1GOVMD
S2GOVMD
S3GOVMD
S4GOVMD
S5GOVMD
S6GOVMD
S7GOVMD
S8GOVMD
S9GOVMD
S10GOVMD
S11GOVMD
S12GOVMD
S13GOVMD
S14GOVMD
S15GOVMD
/*-- S_GOVMR   --*/
S1GOVMR
S2GOVMR
S3GOVMR
S4GOVMR
S5GOVMR
S6GOVMR
S7GOVMR
S8GOVMR
S9GOVMR
S10GOVMR
S11GOVMR
S12GOVMR
S13GOVMR
S14GOVMR
S15GOVMR
/*-- S_GOVOT   --*/
S1GOVOT
S2GOVOT
S3GOVOT
/*-- S_GOVVA   --*/
S1GOVVA
S2GOVVA
S3GOVVA
S4GOVVA
S5GOVVA
S6GOVVA
S7GOVVA
S8GOVVA
S9GOVVA
S10GOVVA
S11GOVVA
S12GOVVA
S13GOVVA
S14GOVVA
S15GOVVA
/*-- S_GROSSA   --*/
S2GROSSA
S3GROSSA
S4GROSSA
S5GROSSA
S6GROSSA
S7GROSSA
S8GROSSA
S9GROSSA
S10GROSSA
S11GROSSA
S12GROSSA
S13GROSSA
S14GROSSA
S15GROSSA
/*-- S_GRP   --*/
S8GRP
S9GRP
S10GRP
S11GRP
S12GRP
S13GRP
S14GRP
/*-- S_GRPDOM   --*/
S8GRPDOM
S9GRPDOM
S10GRPDOM
S11GRPDOM
S12GRPDOM
S13GRPDOM
S14GRPDOM
/*-- S_GRPL   --*/
S8GRPL
S9GRPL
S10GRPL
S11GRPL
S12GRPL
S13GRPL
S14GRPL
/*-- S_GRPPOS   --*/
S8GRPPOS
S9GRPPOS
S10GRPPOS
S11GRPPOS
S12GRPPOS
S13GRPPOS
S14GRPPOS
/*-- S_GRPR   --*/
S8GRPR
S9GRPR
S10GRPR
S11GRPR
S12GRPR
S13GRPR
S14GRPR
/*-- S_HALUC   --*/
S2HALUC
S3HALUC
S4HALUC
S5HALUC
S6HALUC
S7HALUC
S8HALUC
S9HALUC
S10HALUC
S11HALUC
S12HALUC
S13HALUC
S14HALUC
S15HALUC
/*-- S_HDLR20   --*/
S2HDLR20
/*-- S_HEART   --*/
S1HEART
S2HEART
S3HEART
S4HEART
S5HEART
S6HEART
S7HEART
S8HEART
S9HEART
S10HEART
S11HEART
S12HEART
S13HEART
S14HEART
S15HEART
/*-- S_HEARTE   --*/
S1HEARTE
S2HEARTE
S3HEARTE
S4HEARTE
S5HEARTE
S6HEARTE
S7HEARTE
S8HEARTE
S9HEARTE
S10HEARTE
S11HEARTE
S12HEARTE
S13HEARTE
S14HEARTE
S15HEARTE
/*-- S_HEARTEF   --*/
S1HEARTEF
S2HEARTEF
S3HEARTEF
S4HEARTEF
S5HEARTEF
S6HEARTEF
S7HEARTEF
S8HEARTEF
S9HEARTEF
S10HEARTEF
S11HEARTEF
S12HEARTEF
S13HEARTEF
S14HEARTEF
S15HEARTEF
/*-- S_HEARTF   --*/
S1HEARTF
S2HEARTF
S3HEARTF
S4HEARTF
S5HEARTF
S6HEARTF
S7HEARTF
S8HEARTF
S9HEARTF
S10HEARTF
S11HEARTF
S12HEARTF
S13HEARTF
S14HEARTF
S15HEARTF
/*-- S_HEARTQ   --*/
S1HEARTQ
S2HEARTQ
S3HEARTQ
S4HEARTQ
S5HEARTQ
S6HEARTQ
S7HEARTQ
S8HEARTQ
S9HEARTQ
S10HEARTQ
S11HEARTQ
S12HEARTQ
S13HEARTQ
S14HEARTQ
S15HEARTQ
/*-- S_HEARTS   --*/
S2HEARTS
S3HEARTS
S4HEARTS
S5HEARTS
S6HEARTS
S7HEARTS
S8HEARTS
S9HEARTS
S10HEARTS
S11HEARTS
S12HEARTS
S13HEARTS
S14HEARTS
S15HEARTS
/*-- S_HECOV1   --*/
S1HECOV1
S2HECOV1
S3HECOV1
S4HECOV1
S5HECOV1
S6HECOV1
S7HECOV1
S8HECOV1
S9HECOV1
S10HECOV1
S11HECOV1
S12HECOV1
S13HECOV1
S14HECOV1
S15HECOV1
/*-- S_HECOV2   --*/
S1HECOV2
S2HECOV2
S3HECOV2
S6HECOV2
S7HECOV2
S8HECOV2
S9HECOV2
S10HECOV2
S11HECOV2
S12HECOV2
S13HECOV2
S14HECOV2
S15HECOV2
/*-- S_HECOV3   --*/
S6HECOV3
S7HECOV3
S8HECOV3
S9HECOV3
S10HECOV3
S11HECOV3
S12HECOV3
S13HECOV3
S14HECOV3
S15HECOV3
/*-- S_HEIGHT   --*/
S1HEIGHT
S2HEIGHT
S3HEIGHT
S4HEIGHT
S5HEIGHT
S6HEIGHT
S7HEIGHT
S8HEIGHT
S9HEIGHT
S10HEIGHT
S11HEIGHT
S12HEIGHT
S13HEIGHT
S14HEIGHT
S15HEIGHT
/*-- S_HENUM   --*/
S1HENUM
S2HENUM
S3HENUM
S4HENUM
S5HENUM
S6HENUM
S7HENUM
S8HENUM
S9HENUM
S10HENUM
S11HENUM
S12HENUM
S13HENUM
S14HENUM
S15HENUM
/*-- S_HERET   --*/
S1HERET
S2HERET
S3HERET
S4HERET
S5HERET
S6HERET
S7HERET
S8HERET
S9HERET
S10HERET
S11HERET
S12HERET
S13HERET
S14HERET
S15HERET
/*-- S_HERTR1   --*/
S1HERTR1
S2HERTR1
S5HERTR1
S6HERTR1
S7HERTR1
S8HERTR1
S9HERTR1
S10HERTR1
S11HERTR1
S12HERTR1
S13HERTR1
S14HERTR1
S15HERTR1
/*-- S_HERTR2   --*/
S1HERTR2
S2HERTR2
S6HERTR2
S7HERTR2
S8HERTR2
S9HERTR2
S10HERTR2
S11HERTR2
S12HERTR2
S13HERTR2
S14HERTR2
S15HERTR2
/*-- S_HERTR3   --*/
S6HERTR3
S7HERTR3
S8HERTR3
S9HERTR3
S10HERTR3
S11HERTR3
S12HERTR3
S13HERTR3
S14HERTR3
S15HERTR3
/*-- S_HERTS1   --*/
S1HERTS1
S2HERTS1
S3HERTS1
S4HERTS1
S5HERTS1
S6HERTS1
S7HERTS1
S8HERTS1
S9HERTS1
S10HERTS1
S11HERTS1
S12HERTS1
S13HERTS1
S14HERTS1
S15HERTS1
/*-- S_HERTS2   --*/
S1HERTS2
S2HERTS2
S3HERTS2
S6HERTS2
S7HERTS2
S8HERTS2
S9HERTS2
S10HERTS2
S11HERTS2
S12HERTS2
S13HERTS2
S14HERTS2
S15HERTS2
/*-- S_HERTS3   --*/
S6HERTS3
S7HERTS3
S8HERTS3
S9HERTS3
S10HERTS3
S11HERTS3
S12HERTS3
S13HERTS3
S14HERTS3
S15HERTS3
/*-- S_HESRC1   --*/
S1HESRC1
S2HESRC1
S3HESRC1
S4HESRC1
S5HESRC1
S6HESRC1
S7HESRC1
S8HESRC1
S9HESRC1
S10HESRC1
S11HESRC1
S12HESRC1
S13HESRC1
S14HESRC1
S15HESRC1
/*-- S_HESRC2   --*/
S1HESRC2
S2HESRC2
S3HESRC2
S6HESRC2
S7HESRC2
S8HESRC2
S9HESRC2
S10HESRC2
S11HESRC2
S12HESRC2
S13HESRC2
S14HESRC2
S15HESRC2
/*-- S_HESRC3   --*/
S6HESRC3
S7HESRC3
S8HESRC3
S9HESRC3
S10HESRC3
S11HESRC3
S12HESRC3
S13HESRC3
S14HESRC3
S15HESRC3
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
/*-- S_HIBP   --*/
S1HIBP
S2HIBP
S3HIBP
S4HIBP
S5HIBP
S6HIBP
S7HIBP
S8HIBP
S9HIBP
S10HIBP
S11HIBP
S12HIBP
S13HIBP
S14HIBP
S15HIBP
/*-- S_HIBPE   --*/
S1HIBPE
S2HIBPE
S3HIBPE
S4HIBPE
S5HIBPE
S6HIBPE
S7HIBPE
S8HIBPE
S9HIBPE
S10HIBPE
S11HIBPE
S12HIBPE
S13HIBPE
S14HIBPE
S15HIBPE
/*-- S_HIBPEF   --*/
S1HIBPEF
S2HIBPEF
S3HIBPEF
S4HIBPEF
S5HIBPEF
S6HIBPEF
S7HIBPEF
S8HIBPEF
S9HIBPEF
S10HIBPEF
S11HIBPEF
S12HIBPEF
S13HIBPEF
S14HIBPEF
S15HIBPEF
/*-- S_HIBPF   --*/
S1HIBPF
S2HIBPF
S3HIBPF
S4HIBPF
S5HIBPF
S6HIBPF
S7HIBPF
S8HIBPF
S9HIBPF
S10HIBPF
S11HIBPF
S12HIBPF
S13HIBPF
S14HIBPF
S15HIBPF
/*-- S_HIBPQ   --*/
S1HIBPQ
S2HIBPQ
S3HIBPQ
S4HIBPQ
S5HIBPQ
S6HIBPQ
S7HIBPQ
S8HIBPQ
S9HIBPQ
S10HIBPQ
S11HIBPQ
S12HIBPQ
S13HIBPQ
S14HIBPQ
S15HIBPQ
/*-- S_HIBPS   --*/
S2HIBPS
S3HIBPS
S4HIBPS
S5HIBPS
S6HIBPS
S7HIBPS
S8HIBPS
S9HIBPS
S10HIBPS
S11HIBPS
S12HIBPS
S13HIBPS
S14HIBPS
S15HIBPS
/*-- S_HIGOV   --*/
S1HIGOV
S2HIGOV
S3HIGOV
S4HIGOV
S5HIGOV
S6HIGOV
S7HIGOV
S8HIGOV
S9HIGOV
S10HIGOV
S11HIGOV
S12HIGOV
S13HIGOV
S14HIGOV
S15HIGOV
/*-- S_HILTC   --*/
S1HILTC
S2HILTC
S3HILTC
S4HILTC
S5HILTC
S6HILTC
S7HILTC
S8HILTC
S9HILTC
S10HILTC
S11HILTC
S12HILTC
S13HILTC
S14HILTC
S15HILTC
/*-- S_HIMR20   --*/
S2HIMR20
/*-- S_HIOTHP   --*/
S1HIOTHP
S2HIOTHP
S3HIOTHP
S4HIOTHP
S5HIOTHP
S6HIOTHP
S7HIOTHP
S8HIOTHP
S9HIOTHP
S10HIOTHP
S11HIOTHP
S12HIOTHP
S13HIOTHP
S14HIOTHP
S15HIOTHP
/*-- S_HISPAN   --*/
S1HISPAN
S2HISPAN
S3HISPAN
S4HISPAN
S5HISPAN
S6HISPAN
S7HISPAN
S8HISPAN
S9HISPAN
S10HISPAN
S11HISPAN
S12HISPAN
S13HISPAN
S14HISPAN
S15HISPAN
/*-- S_HLPDYSF   --*/
S3HLPDYSF
S4HLPDYSF
S5HLPDYSF
S6HLPDYSF
S7HLPDYSF
S8HLPDYSF
S9HLPDYSF
S10HLPDYSF
S11HLPDYSF
S12HLPDYSF
S13HLPDYSF
S14HLPDYSF
S15HLPDYSF
/*-- S_HLPDYSNF   --*/
S3HLPDYSNF
S4HLPDYSNF
S5HLPDYSNF
S6HLPDYSNF
S7HLPDYSNF
S8HLPDYSNF
S9HLPDYSNF
S10HLPDYSNF
S11HLPDYSNF
S12HLPDYSNF
S13HLPDYSNF
S14HLPDYSNF
S15HLPDYSNF
/*-- S_HLPDYSP   --*/
S3HLPDYSP
S4HLPDYSP
S5HLPDYSP
S6HLPDYSP
S7HLPDYSP
S8HLPDYSP
S9HLPDYSP
S10HLPDYSP
S11HLPDYSP
S12HLPDYSP
S13HLPDYSP
S14HLPDYSP
S15HLPDYSP
/*-- S_HLPDYST   --*/
S3HLPDYST
S4HLPDYST
S5HLPDYST
S6HLPDYST
S7HLPDYST
S8HLPDYST
S9HLPDYST
S10HLPDYST
S11HLPDYST
S12HLPDYST
S13HLPDYST
S14HLPDYST
S15HLPDYST
/*-- S_HLPDYSU   --*/
S3HLPDYSU
S4HLPDYSU
S5HLPDYSU
S6HLPDYSU
S7HLPDYSU
S8HLPDYSU
S9HLPDYSU
S10HLPDYSU
S11HLPDYSU
S12HLPDYSU
S13HLPDYSU
S14HLPDYSU
S15HLPDYSU
/*-- S_HLPHRSF   --*/
S3HLPHRSF
S4HLPHRSF
S5HLPHRSF
S6HLPHRSF
S7HLPHRSF
S8HLPHRSF
S9HLPHRSF
S10HLPHRSF
S11HLPHRSF
S12HLPHRSF
S13HLPHRSF
S14HLPHRSF
S15HLPHRSF
/*-- S_HLPHRSNF   --*/
S3HLPHRSNF
S4HLPHRSNF
S5HLPHRSNF
S6HLPHRSNF
S7HLPHRSNF
S8HLPHRSNF
S9HLPHRSNF
S10HLPHRSNF
S11HLPHRSNF
S12HLPHRSNF
S13HLPHRSNF
S14HLPHRSNF
S15HLPHRSNF
/*-- S_HLPHRSP   --*/
S3HLPHRSP
S4HLPHRSP
S5HLPHRSP
S6HLPHRSP
S7HLPHRSP
S8HLPHRSP
S9HLPHRSP
S10HLPHRSP
S11HLPHRSP
S12HLPHRSP
S13HLPHRSP
S14HLPHRSP
S15HLPHRSP
/*-- S_HLPHRST   --*/
S3HLPHRST
S4HLPHRST
S5HLPHRST
S6HLPHRST
S7HLPHRST
S8HLPHRST
S9HLPHRST
S10HLPHRST
S11HLPHRST
S12HLPHRST
S13HLPHRST
S14HLPHRST
S15HLPHRST
/*-- S_HLPHRSU   --*/
S3HLPHRSU
S4HLPHRSU
S5HLPHRSU
S6HLPHRSU
S7HLPHRSU
S8HLPHRSU
S9HLPHRSU
S10HLPHRSU
S11HLPHRSU
S12HLPHRSU
S13HLPHRSU
S14HLPHRSU
S15HLPHRSU
/*-- S_HLPPDFA   --*/
S3HLPPDFA
S4HLPPDFA
S5HLPPDFA
S6HLPPDFA
S7HLPPDFA
S8HLPPDFA
S9HLPPDFA
S10HLPPDFA
S11HLPPDFA
S12HLPPDFA
S13HLPPDFA
S14HLPPDFA
S15HLPPDFA
/*-- S_HLPPDFN   --*/
S3HLPPDFN
S4HLPPDFN
S5HLPPDFN
S6HLPPDFN
S7HLPPDFN
S8HLPPDFN
S9HLPPDFN
S10HLPPDFN
S11HLPPDFN
S12HLPPDFN
S13HLPPDFN
S14HLPPDFN
S15HLPPDFN
/*-- S_HLPPDNFA   --*/
S3HLPPDNFA
S4HLPPDNFA
S5HLPPDNFA
S6HLPPDNFA
S7HLPPDNFA
S8HLPPDNFA
S9HLPPDNFA
S10HLPPDNFA
S11HLPPDNFA
S12HLPPDNFA
S13HLPPDNFA
S14HLPPDNFA
S15HLPPDNFA
/*-- S_HLPPDNFN   --*/
S3HLPPDNFN
S4HLPPDNFN
S5HLPPDNFN
S6HLPPDNFN
S7HLPPDNFN
S8HLPPDNFN
S9HLPPDNFN
S10HLPPDNFN
S11HLPPDNFN
S12HLPPDNFN
S13HLPPDNFN
S14HLPPDNFN
S15HLPPDNFN
/*-- S_HLPPDTA   --*/
S3HLPPDTA
S4HLPPDTA
S5HLPPDTA
S6HLPPDTA
S7HLPPDTA
S8HLPPDTA
S9HLPPDTA
S10HLPPDTA
S11HLPPDTA
S12HLPPDTA
S13HLPPDTA
S14HLPPDTA
S15HLPPDTA
/*-- S_HLPPDTN   --*/
S3HLPPDTN
S4HLPPDTN
S5HLPPDTN
S6HLPPDTN
S7HLPPDTN
S8HLPPDTN
S9HLPPDTN
S10HLPPDTN
S11HLPPDTN
S12HLPPDTN
S13HLPPDTN
S14HLPPDTN
S15HLPPDTN
/*-- S_HLPRFN   --*/
S3HLPRFN
S4HLPRFN
S5HLPRFN
S6HLPRFN
S7HLPRFN
S8HLPRFN
S9HLPRFN
S10HLPRFN
S11HLPRFN
S12HLPRFN
S13HLPRFN
S14HLPRFN
S15HLPRFN
/*-- S_HLPRNFN   --*/
S3HLPRNFN
S4HLPRNFN
S5HLPRNFN
S6HLPRNFN
S7HLPRNFN
S8HLPRNFN
S9HLPRNFN
S10HLPRNFN
S11HLPRNFN
S12HLPRNFN
S13HLPRNFN
S14HLPRNFN
S15HLPRNFN
/*-- S_HLPRPN   --*/
S3HLPRPN
S4HLPRPN
S5HLPRPN
S6HLPRPN
S7HLPRPN
S8HLPRPN
S9HLPRPN
S10HLPRPN
S11HLPRPN
S12HLPRPN
S13HLPRPN
S14HLPRPN
S15HLPRPN
/*-- S_HLPRTN   --*/
S3HLPRTN
S4HLPRTN
S5HLPRTN
S6HLPRTN
S7HLPRTN
S8HLPRTN
S9HLPRTN
S10HLPRTN
S11HLPRTN
S12HLPRTN
S13HLPRTN
S14HLPRTN
S15HLPRTN
/*-- S_HLPRUN   --*/
S3HLPRUN
S4HLPRUN
S5HLPRUN
S6HLPRUN
S7HLPRUN
S8HLPRUN
S9HLPRUN
S10HLPRUN
S11HLPRUN
S12HLPRUN
S13HLPRUN
S14HLPRUN
S15HLPRUN
/*-- S_HLTC3   --*/
S1HLTC3
S2HLTC3
S3HLTC3
S4HLTC3
S5HLTC3
S6HLTC3
S7HLTC3
S8HLTC3
S9HLTC3
S10HLTC3
S11HLTC3
S12HLTC3
S13HLTC3
S14HLTC3
S15HLTC3
/*-- S_HLTC5   --*/
S1HLTC5
S2HLTC5
S3HLTC5
S4HLTC5
S5HLTC5
S6HLTC5
/*-- S_HLTC5F   --*/
S3HLTC5F
S4HLTC5F
S5HLTC5F
S6HLTC5F
/*-- S_HLTHLM   --*/
S1HLTHLM
S2HLTHLM
S3HLTHLM
S4HLTHLM
S5HLTHLM
S6HLTHLM
S7HLTHLM
S8HLTHLM
S9HLTHLM
S10HLTHLM
S11HLTHLM
S12HLTHLM
S13HLTHLM
S14HLTHLM
S15HLTHLM
/*-- S_HOMCAR   --*/
S1HOMCAR
S2HOMCAR
S3HOMCAR
S4HOMCAR
S5HOMCAR
S6HOMCAR
S7HOMCAR
S8HOMCAR
S9HOMCAR
S10HOMCAR
S11HOMCAR
S12HOMCAR
S13HOMCAR
S14HOMCAR
S15HOMCAR
/*-- S_HOSP   --*/
S1HOSP
S2HOSP
S3HOSP
S4HOSP
S5HOSP
S6HOSP
S7HOSP
S8HOSP
S9HOSP
S10HOSP
S11HOSP
S12HOSP
S13HOSP
S14HOSP
S15HOSP
/*-- S_HRSAMP   --*/
S1HRSAMP
S2HRSAMP
S3HRSAMP
S4HRSAMP
S5HRSAMP
S6HRSAMP
S7HRSAMP
S8HRSAMP
S9HRSAMP
S10HRSAMP
S11HRSAMP
S12HRSAMP
S13HRSAMP
S14HRSAMP
S15HRSAMP
/*-- S_HSPNIT   --*/
S1HSPNIT
S2HSPNIT
S3HSPNIT
S4HSPNIT
S5HSPNIT
S6HSPNIT
S7HSPNIT
S8HSPNIT
S9HSPNIT
S10HSPNIT
S11HSPNIT
S12HSPNIT
S13HSPNIT
S14HSPNIT
S15HSPNIT
/*-- S_HSPTIM   --*/
S1HSPTIM
S2HSPTIM
S3HSPTIM
S4HSPTIM
S5HSPTIM
S6HSPTIM
S7HSPTIM
S8HSPTIM
S9HSPTIM
S10HSPTIM
S11HSPTIM
S12HSPTIM
S13HSPTIM
S14HSPTIM
S15HSPTIM
/*-- S_HSWRKF   --*/
S1HSWRKF
/*-- S_HTR40   --*/
S2HTR40
/*-- S_IADL5A   --*/
S2IADL5A
S3IADL5A
S4IADL5A
S5IADL5A
S6IADL5A
S7IADL5A
S8IADL5A
S9IADL5A
S10IADL5A
S11IADL5A
S12IADL5A
S13IADL5A
S14IADL5A
S15IADL5A
/*-- S_IADL5H   --*/
S3IADL5H
S4IADL5H
S5IADL5H
S6IADL5H
S7IADL5H
S8IADL5H
S9IADL5H
S10IADL5H
S11IADL5H
S12IADL5H
S13IADL5H
S14IADL5H
S15IADL5H
/*-- S_IANN   --*/
S1IANN
S2IANN
S3IANN
S4IANN
S5IANN
S6IANN
S7IANN
S8IANN
S9IANN
S10IANN
S11IANN
S12IANN
S13IANN
S14IANN
S15IANN
/*-- S_IEARN   --*/
S1IEARN
S2IEARN
S3IEARN
S4IEARN
S5IEARN
S6IEARN
S7IEARN
S8IEARN
S9IEARN
S10IEARN
S11IEARN
S12IEARN
S13IEARN
S14IEARN
S15IEARN
/*-- S_IFANN   --*/
S1IFANN
S2IFANN
S3IFANN
S4IFANN
S5IFANN
S6IFANN
S7IFANN
S8IFANN
S9IFANN
S10IFANN
S11IFANN
S12IFANN
S13IFANN
S14IFANN
S15IFANN
/*-- S_IFEARN   --*/
S1IFEARN
S2IFEARN
S3IFEARN
S4IFEARN
S5IFEARN
S6IFEARN
S7IFEARN
S8IFEARN
S9IFEARN
S10IFEARN
S11IFEARN
S12IFEARN
S13IFEARN
S14IFEARN
S15IFEARN
/*-- S_IFGXFR   --*/
S1IFGXFR
S2IFGXFR
S3IFGXFR
S4IFGXFR
S5IFGXFR
S6IFGXFR
S7IFGXFR
S8IFGXFR
S9IFGXFR
S10IFGXFR
S11IFGXFR
S12IFGXFR
S13IFGXFR
S14IFGXFR
S15IFGXFR
/*-- S_IFIRAW   --*/
S5IFIRAW
S6IFIRAW
S7IFIRAW
S8IFIRAW
S9IFIRAW
S10IFIRAW
S11IFIRAW
S12IFIRAW
S13IFIRAW
S14IFIRAW
S15IFIRAW
/*-- S_IFIRAWY1   --*/
S2IFIRAWY1
/*-- S_IFPEN   --*/
S1IFPEN
S2IFPEN
S3IFPEN
S4IFPEN
S5IFPEN
S6IFPEN
S7IFPEN
S8IFPEN
S9IFPEN
S10IFPEN
S11IFPEN
S12IFPEN
S13IFPEN
S14IFPEN
S15IFPEN
/*-- S_IFPENA   --*/
S1IFPENA
S2IFPENA
S3IFPENA
S4IFPENA
S5IFPENA
S6IFPENA
S7IFPENA
S8IFPENA
S9IFPENA
S10IFPENA
S11IFPENA
S12IFPENA
S13IFPENA
S14IFPENA
S15IFPENA
/*-- S_IFSDI   --*/
S1IFSDI
S2IFSDI
S3IFSDI
S4IFSDI
S5IFSDI
S6IFSDI
S7IFSDI
S8IFSDI
S9IFSDI
S10IFSDI
S11IFSDI
S12IFSDI
S13IFSDI
S14IFSDI
S15IFSDI
/*-- S_IFSRET   --*/
S1IFSRET
S2IFSRET
S3IFSRET
S4IFSRET
S5IFSRET
S6IFSRET
S7IFSRET
S8IFSRET
S9IFSRET
S10IFSRET
S11IFSRET
S12IFSRET
S13IFSRET
S14IFSRET
S15IFSRET
/*-- S1_IFSSDI   --*/
S1IFSSDI
S2IFSSDI
S3IFSSDI
S5IFSSDI
S6IFSSDI
S7IFSSDI
S8IFSSDI
S9IFSSDI
S10IFSSDI
S11IFSSDI
S12IFSSDI
S13IFSSDI
S14IFSSDI
S15IFSSDI
/*-- S_IFSSDI   --*/
S4IFSSDI
/*-- S_IFSSI   --*/
S1IFSSI
S2IFSSI
/*-- S_IFUNEM   --*/
S1IFUNEM
S2IFUNEM
S3IFUNEM
S4IFUNEM
S5IFUNEM
S6IFUNEM
S7IFUNEM
S8IFUNEM
S9IFUNEM
S10IFUNEM
S11IFUNEM
S12IFUNEM
S13IFUNEM
S14IFUNEM
S15IFUNEM
/*-- S1_IFUNWC   --*/
S1IFUNWC
S4IFUNWC
S5IFUNWC
S7IFUNWC
S8IFUNWC
S9IFUNWC
S10IFUNWC
S11IFUNWC
S12IFUNWC
S13IFUNWC
S14IFUNWC
S15IFUNWC
/*-- S2_IFUNWC   --*/
S2IFUNWC
S3IFUNWC
S6IFUNWC
/*-- S_IFWCMP   --*/
S1IFWCMP
S2IFWCMP
S3IFWCMP
S4IFWCMP
S5IFWCMP
S6IFWCMP
S7IFWCMP
S8IFWCMP
S9IFWCMP
S10IFWCMP
S11IFWCMP
S12IFWCMP
S13IFWCMP
S14IFWCMP
S15IFWCMP
/*-- S_IGXFR   --*/
S1IGXFR
S2IGXFR
S3IGXFR
S4IGXFR
S5IGXFR
S6IGXFR
S7IGXFR
S8IGXFR
S9IGXFR
S10IGXFR
S11IGXFR
S12IGXFR
S13IGXFR
S14IGXFR
S15IGXFR
/*-- S_IIRAW   --*/
S5IIRAW
S6IIRAW
S7IIRAW
S8IIRAW
S9IIRAW
S10IIRAW
S11IIRAW
S12IIRAW
S13IIRAW
S14IIRAW
S15IIRAW
/*-- S_IIRAWY1   --*/
S2IIRAWY1
S5IIRAWY1
S6IIRAWY1
S7IIRAWY1
S8IIRAWY1
S9IIRAWY1
S10IIRAWY1
S11IIRAWY1
S12IIRAWY1
S13IIRAWY1
S14IIRAWY1
S15IIRAWY1
/*-- S_IMRC   --*/
S3IMRC
S4IMRC
S5IMRC
S6IMRC
S7IMRC
S8IMRC
S9IMRC
S10IMRC
S11IMRC
S12IMRC
S13IMRC
/*-- S_IMRC20   --*/
S1IMRC20
/*-- S_INHER   --*/
S2INHER
S3INHER
S4INHER
S5INHER
S6INHER
S7INHER
S8INHER
/*-- S_INHPE   --*/
S3INHPE
S4INHPE
S5INHPE
S6INHPE
S7INHPE
S8INHPE
S9INHPE
S10INHPE
S11INHPE
S12INHPE
S13INHPE
S14INHPE
S15INHPE
/*-- S_INHPFN   --*/
S3INHPFN
S4INHPFN
S5INHPFN
S6INHPFN
S7INHPFN
S8INHPFN
S9INHPFN
S10INHPFN
S11INHPFN
S12INHPFN
S13INHPFN
S14INHPFN
S15INHPFN
/*-- S_INHPNFN   --*/
S3INHPNFN
S4INHPNFN
S5INHPNFN
S6INHPNFN
S7INHPNFN
S8INHPNFN
S9INHPNFN
S10INHPNFN
S11INHPNFN
S12INHPNFN
S13INHPNFN
S14INHPNFN
S15INHPNFN
/*-- S_INHPPN   --*/
S3INHPPN
S4INHPPN
S5INHPPN
S6INHPPN
S7INHPPN
S8INHPPN
S9INHPPN
S10INHPPN
S11INHPPN
S12INHPPN
S13INHPPN
S14INHPPN
S15INHPPN
/*-- S_INHPTN   --*/
S3INHPTN
S4INHPTN
S5INHPTN
S6INHPTN
S7INHPTN
S8INHPTN
S9INHPTN
S10INHPTN
S11INHPTN
S12INHPTN
S13INHPTN
S14INHPTN
S15INHPTN
/*-- S_INHPUN   --*/
S3INHPUN
S4INHPUN
S5INHPUN
S6INHPUN
S7INHPUN
S8INHPUN
S9INHPUN
S10INHPUN
S11INHPUN
S12INHPUN
S13INHPUN
S14INHPUN
S15INHPUN
/*-- S_INLBRF   --*/
S1INLBRF
S2INLBRF
S3INLBRF
S4INLBRF
S5INLBRF
S6INLBRF
S7INLBRF
S8INLBRF
S9INLBRF
S10INLBRF
S11INLBRF
S12INLBRF
S13INLBRF
S14INLBRF
S15INLBRF
/*-- S_IPEN   --*/
S1IPEN
S2IPEN
S3IPEN
S4IPEN
S5IPEN
S6IPEN
S7IPEN
S8IPEN
S9IPEN
S10IPEN
S11IPEN
S12IPEN
S13IPEN
S14IPEN
S15IPEN
/*-- S_IPENA   --*/
S1IPENA
S2IPENA
S3IPENA
S4IPENA
S5IPENA
S6IPENA
S7IPENA
S8IPENA
S9IPENA
S10IPENA
S11IPENA
S12IPENA
S13IPENA
S14IPENA
S15IPENA
/*-- S_ISDI   --*/
S1ISDI
S2ISDI
S3ISDI
S4ISDI
S5ISDI
S6ISDI
S7ISDI
S8ISDI
S9ISDI
S10ISDI
S11ISDI
S12ISDI
S13ISDI
S14ISDI
S15ISDI
/*-- S_ISRET   --*/
S1ISRET
S2ISRET
S3ISRET
S4ISRET
S5ISRET
S6ISRET
S7ISRET
S8ISRET
S9ISRET
S10ISRET
S11ISRET
S12ISRET
S13ISRET
S14ISRET
S15ISRET
/*-- S_ISSDI   --*/
S1ISSDI
S2ISSDI
S3ISSDI
S4ISSDI
S5ISSDI
S6ISSDI
S7ISSDI
S8ISSDI
S9ISSDI
S10ISSDI
S11ISSDI
S12ISSDI
S13ISSDI
S14ISSDI
S15ISSDI
/*-- S_ISSI   --*/
S1ISSI
S2ISSI
S3ISSI
S4ISSI
S5ISSI
S6ISSI
S7ISSI
S8ISSI
S9ISSI
S10ISSI
S11ISSI
S12ISSI
S13ISSI
S14ISSI
S15ISSI
/*-- S_IUNEM   --*/
S1IUNEM
S2IUNEM
S3IUNEM
S4IUNEM
S5IUNEM
S6IUNEM
S7IUNEM
S8IUNEM
S9IUNEM
S10IUNEM
S11IUNEM
S12IUNEM
S13IUNEM
S14IUNEM
S15IUNEM
/*-- S_IUNWC   --*/
S1IUNWC
S2IUNWC
S3IUNWC
S4IUNWC
S5IUNWC
S6IUNWC
S7IUNWC
S8IUNWC
S9IUNWC
S10IUNWC
S11IUNWC
S12IUNWC
S13IUNWC
S14IUNWC
S15IUNWC
/*-- S_IWBEG   --*/
S1IWBEG
S2IWBEG
S3IWBEG
S4IWBEG
S5IWBEG
S6IWBEG
S7IWBEG
S8IWBEG
S9IWBEG
S10IWBEG
S11IWBEG
S12IWBEG
S13IWBEG
S14IWBEG
S15IWBEG
/*-- S_IWBEGF   --*/
S1IWBEGF
S2IWBEGF
/*-- S_IWCMP   --*/
S1IWCMP
S2IWCMP
S3IWCMP
S4IWCMP
S5IWCMP
S6IWCMP
S7IWCMP
S8IWCMP
S9IWCMP
S10IWCMP
S11IWCMP
S12IWCMP
S13IWCMP
S14IWCMP
S15IWCMP
/*-- S_IWEND   --*/
S1IWEND
S2IWEND
S3IWEND
S4IWEND
S5IWEND
S6IWEND
S7IWEND
S8IWEND
S9IWEND
S10IWEND
S11IWEND
S12IWEND
S13IWEND
S14IWEND
S15IWEND
/*-- S_IWENDF   --*/
S1IWENDF
S2IWENDF
S3IWENDF
/*-- S_IWENDM   --*/
S1IWENDM
S2IWENDM
S3IWENDM
S4IWENDM
S5IWENDM
S6IWENDM
S7IWENDM
S8IWENDM
S9IWENDM
S10IWENDM
S11IWENDM
S12IWENDM
S13IWENDM
S14IWENDM
S15IWENDM
/*-- S_IWENDY   --*/
S1IWENDY
S2IWENDY
S3IWENDY
S4IWENDY
S5IWENDY
S6IWENDY
S7IWENDY
S8IWENDY
S9IWENDY
S10IWENDY
S11IWENDY
S12IWENDY
S13IWENDY
S14IWENDY
S15IWENDY
/*-- S_IWMID   --*/
S1IWMID
S2IWMID
S3IWMID
S4IWMID
S5IWMID
S6IWMID
S7IWMID
S8IWMID
S9IWMID
S10IWMID
S11IWMID
S12IWMID
S13IWMID
S14IWMID
S15IWMID
/*-- S_IWMIDF   --*/
S1IWMIDF
S2IWMIDF
S3IWMIDF
S4IWMIDF
S5IWMIDF
S6IWMIDF
S7IWMIDF
S8IWMIDF
S9IWMIDF
S10IWMIDF
S11IWMIDF
S12IWMIDF
S13IWMIDF
S14IWMIDF
S15IWMIDF
/*-- S_IWSTAT   --*/
S1IWSTAT
S2IWSTAT
S3IWSTAT
S4IWSTAT
S5IWSTAT
S6IWSTAT
S7IWSTAT
S8IWSTAT
S9IWSTAT
S10IWSTAT
S11IWSTAT
S12IWSTAT
S13IWSTAT
S14IWSTAT
S15IWSTAT
/*-- S_JCIND   --*/
S1JCIND
S2JCIND
S3JCIND
S4JCIND
S5JCIND
S6JCIND
S7JCIND
S8JCIND
S9JCIND
S10JCIND
S11JCIND
S12JCIND
S13JCIND
S14JCIND
S15JCIND
/*-- S_JCINDB   --*/
S7JCINDB
S8JCINDB
S9JCINDB
S10JCINDB
S11JCINDB
S12JCINDB
S13JCINDB
S14JCINDB
S15JCINDB
/*-- S_JCINDC   --*/
S10JCINDC
S11JCINDC
S12JCINDC
S13JCINDC
S14JCINDC
S15JCINDC
/*-- S_JCOCC   --*/
S1JCOCC
S2JCOCC
S3JCOCC
S4JCOCC
S5JCOCC
S6JCOCC
S7JCOCC
S8JCOCC
S9JCOCC
S10JCOCC
S11JCOCC
S12JCOCC
S13JCOCC
S14JCOCC
S15JCOCC
/*-- S_JCOCCA   --*/
S2JCOCCA
S3JCOCCA
S4JCOCCA
S5JCOCCA
S6JCOCCA
S7JCOCCA
S8JCOCCA
S9JCOCCA
S10JCOCCA
S11JCOCCA
S12JCOCCA
S13JCOCCA
S14JCOCCA
S15JCOCCA
/*-- S_JCOCCB   --*/
S7JCOCCB
S8JCOCCB
S9JCOCCB
S10JCOCCB
S11JCOCCB
S12JCOCCB
S13JCOCCB
S14JCOCCB
S15JCOCCB
/*-- S_JCOCCC   --*/
S10JCOCCC
S11JCOCCC
S12JCOCCC
S13JCOCCC
S14JCOCCC
S15JCOCCC
/*-- S_JCPEN   --*/
S1JCPEN
S2JCPEN
S3JCPEN
S4JCPEN
S5JCPEN
S6JCPEN
S7JCPEN
S8JCPEN
S9JCPEN
S10JCPEN
S11JCPEN
S12JCPEN
S13JCPEN
S14JCPEN
S15JCPEN
/*-- S_JCPENF   --*/
S1JCPENF
S2JCPENF
S3JCPENF
S4JCPENF
S5JCPENF
S6JCPENF
S7JCPENF
S8JCPENF
/*-- S_JCTEN   --*/
S1JCTEN
S2JCTEN
S3JCTEN
S4JCTEN
S5JCTEN
S6JCTEN
S7JCTEN
S8JCTEN
S9JCTEN
S10JCTEN
S11JCTEN
S12JCTEN
S13JCTEN
S14JCTEN
S15JCTEN
/*-- S_JHOUR2   --*/
S1JHOUR2
S2JHOUR2
S3JHOUR2
S4JHOUR2
S5JHOUR2
S6JHOUR2
S7JHOUR2
S8JHOUR2
S9JHOUR2
S10JHOUR2
S11JHOUR2
S12JHOUR2
S13JHOUR2
S14JHOUR2
S15JHOUR2
/*-- S_JHOURS   --*/
S1JHOURS
S2JHOURS
S3JHOURS
S4JHOURS
S5JHOURS
S6JHOURS
S7JHOURS
S8JHOURS
S9JHOURS
S10JHOURS
S11JHOURS
S12JHOURS
S13JHOURS
S14JHOURS
S15JHOURS
/*-- S_JJOBS   --*/
S1JJOBS
S2JJOBS
S3JJOBS
S4JJOBS
S5JJOBS
S6JJOBS
S7JJOBS
S8JJOBS
S9JJOBS
S10JJOBS
S11JJOBS
S12JJOBS
S13JJOBS
S14JJOBS
S15JJOBS
/*-- S_JLASTM   --*/
S1JLASTM
S2JLASTM
S3JLASTM
S4JLASTM
S5JLASTM
S6JLASTM
S7JLASTM
S8JLASTM
S9JLASTM
S10JLASTM
S11JLASTM
S12JLASTM
S13JLASTM
S14JLASTM
S15JLASTM
/*-- S_JLASTY   --*/
S1JLASTY
S2JLASTY
S3JLASTY
S4JLASTY
S5JLASTY
S6JLASTY
S7JLASTY
S8JLASTY
S9JLASTY
S10JLASTY
S11JLASTY
S12JLASTY
S13JLASTY
S14JLASTY
S15JLASTY
/*-- S_JLIFT   --*/
S1JLIFT
S2JLIFT
S3JLIFT
S4JLIFT
S5JLIFT
S6JLIFT
S7JLIFT
S8JLIFT
S9JLIFT
S10JLIFT
S11JLIFT
S12JLIFT
S13JLIFT
S14JLIFT
S15JLIFT
/*-- S_JLIND   --*/
S1JLIND
S2JLIND
S3JLIND
S4JLIND
S5JLIND
S6JLIND
S7JLIND
S8JLIND
S9JLIND
S10JLIND
S11JLIND
S12JLIND
S13JLIND
S14JLIND
S15JLIND
/*-- S_JLINDB   --*/
S7JLINDB
S8JLINDB
S9JLINDB
S10JLINDB
S11JLINDB
S12JLINDB
S13JLINDB
S14JLINDB
S15JLINDB
/*-- S_JLINDC   --*/
S10JLINDC
S11JLINDC
S12JLINDC
S13JLINDC
S14JLINDC
S15JLINDC
/*-- S_JLMIS   --*/
S1JLMIS
S2JLMIS
S3JLMIS
S4JLMIS
S5JLMIS
S6JLMIS
S7JLMIS
S8JLMIS
S9JLMIS
S10JLMIS
S11JLMIS
S12JLMIS
S13JLMIS
S14JLMIS
S15JLMIS
/*-- S_JLOCC   --*/
S1JLOCC
S2JLOCC
S3JLOCC
S4JLOCC
S5JLOCC
S6JLOCC
S7JLOCC
S8JLOCC
S9JLOCC
S10JLOCC
S11JLOCC
S12JLOCC
S13JLOCC
S14JLOCC
S15JLOCC
/*-- S_JLOCCA   --*/
S1JLOCCA
S2JLOCCA
S3JLOCCA
S4JLOCCA
S5JLOCCA
S6JLOCCA
S7JLOCCA
S8JLOCCA
S9JLOCCA
S10JLOCCA
S11JLOCCA
S12JLOCCA
S13JLOCCA
S14JLOCCA
S15JLOCCA
/*-- S_JLOCCB   --*/
S7JLOCCB
S8JLOCCB
S9JLOCCB
S10JLOCCB
S11JLOCCB
S12JLOCCB
S13JLOCCB
S14JLOCCB
S15JLOCCB
/*-- S_JLOCCC   --*/
S10JLOCCC
S11JLOCCC
S12JLOCCC
S13JLOCCC
S14JLOCCC
S15JLOCCC
/*-- S_JLTEN   --*/
S1JLTEN
S2JLTEN
S3JLTEN
S4JLTEN
S5JLTEN
S6JLTEN
S7JLTEN
S8JLTEN
S9JLTEN
S10JLTEN
S11JLTEN
S12JLTEN
S13JLTEN
S14JLTEN
S15JLTEN
/*-- S_JLTENF   --*/
S1JLTENF
S2JLTENF
S3JLTENF
S4JLTENF
S5JLTENF
S6JLTENF
S7JLTENF
S8JLTENF
S9JLTENF
S10JLTENF
S11JLTENF
S12JLTENF
S13JLTENF
S14JLTENF
S15JLTENF
/*-- S_JMISS   --*/
S1JMISS
S2JMISS
S3JMISS
S4JMISS
S5JMISS
S6JMISS
S7JMISS
S8JMISS
S9JMISS
S10JMISS
S11JMISS
S12JMISS
S13JMISS
S14JMISS
S15JMISS
/*-- S_JNJOB   --*/
S1JNJOB
S2JNJOB
S3JNJOB
S4JNJOB
S5JNJOB
S6JNJOB
S7JNJOB
S8JNJOB
S9JNJOB
S10JNJOB
S11JNJOB
S12JNJOB
S13JNJOB
S14JNJOB
S15JNJOB
/*-- S_JNJOB5   --*/
S1JNJOB5
S2JNJOB5
S3JNJOB5
S4JNJOB5
S5JNJOB5
S6JNJOB5
S7JNJOB5
S8JNJOB5
S9JNJOB5
S10JNJOB5
S11JNJOB5
S12JNJOB5
S13JNJOB5
S14JNJOB5
S15JNJOB5
/*-- S1_JOG   --*/
S1JOG
/*-- S2_JOG   --*/
S2JOG
/*-- S_JOG   --*/
S3JOG
S4JOG
S5JOG
S6JOG
S7JOG
S8JOG
S9JOG
S10JOG
S11JOG
S12JOG
S13JOG
S14JOG
S15JOG
/*-- S_JOGA   --*/
S2JOGA
S3JOGA
S4JOGA
S5JOGA
S6JOGA
S7JOGA
S8JOGA
S9JOGA
S10JOGA
S11JOGA
S12JOGA
S13JOGA
S14JOGA
S15JOGA
/*-- S_JOGW   --*/
S1JOGW
/*-- S_JPHYS   --*/
S1JPHYS
S2JPHYS
S3JPHYS
S4JPHYS
S5JPHYS
S6JPHYS
S7JPHYS
S8JPHYS
S9JPHYS
S10JPHYS
S11JPHYS
S12JPHYS
S13JPHYS
S14JPHYS
S15JPHYS
/*-- S_JSIGHT   --*/
S1JSIGHT
S2JSIGHT
S3JSIGHT
S4JSIGHT
S5JSIGHT
S6JSIGHT
S7JSIGHT
S8JSIGHT
S9JSIGHT
S10JSIGHT
S11JSIGHT
S12JSIGHT
S13JSIGHT
S14JSIGHT
S15JSIGHT
/*-- S_JSTOOP   --*/
S1JSTOOP
S2JSTOOP
S3JSTOOP
S4JSTOOP
S5JSTOOP
S6JSTOOP
S7JSTOOP
S8JSTOOP
S9JSTOOP
S10JSTOOP
S11JSTOOP
S12JSTOOP
S13JSTOOP
S14JSTOOP
S15JSTOOP
/*-- S_JSTRES   --*/
S1JSTRES
S2JSTRES
S3JSTRES
S4JSTRES
S5JSTRES
S6JSTRES
S7JSTRES
S8JSTRES
S9JSTRES
S10JSTRES
S11JSTRES
S12JSTRES
S13JSTRES
S14JSTRES
S15JSTRES
/*-- S_JWEEK2   --*/
S1JWEEK2
S2JWEEK2
S3JWEEK2
S4JWEEK2
S5JWEEK2
S6JWEEK2
S7JWEEK2
S8JWEEK2
S9JWEEK2
S10JWEEK2
S11JWEEK2
S12JWEEK2
S13JWEEK2
S14JWEEK2
S15JWEEK2
/*-- S_JWEEKS   --*/
S1JWEEKS
S2JWEEKS
S3JWEEKS
S4JWEEKS
S5JWEEKS
S6JWEEKS
S7JWEEKS
S8JWEEKS
S9JWEEKS
S10JWEEKS
S11JWEEKS
S12JWEEKS
S13JWEEKS
S14JWEEKS
S15JWEEKS
/*-- S_JYEARM   --*/
S1JYEARM
S2JYEARM
S3JYEARM
S4JYEARM
S5JYEARM
S6JYEARM
S7JYEARM
S8JYEARM
S9JYEARM
S10JYEARM
S11JYEARM
S12JYEARM
S13JYEARM
S14JYEARM
S15JYEARM
/*-- S_JYEARS   --*/
S1JYEARS
S2JYEARS
S3JYEARS
S4JYEARS
S5JYEARS
S6JYEARS
S7JYEARS
S8JYEARS
S9JYEARS
S10JYEARS
S11JYEARS
S12JYEARS
S13JYEARS
S14JYEARS
S15JYEARS
/*-- S_LBAGR   --*/
S8LBAGR
S9LBAGR
S10LBAGR
S11LBAGR
S12LBAGR
S13LBAGR
S14LBAGR
S15LBAGR
/*-- S_LBASSISTPRB   --*/
S8LBASSISTPRB
S10LBASSISTPRB
S11LBASSISTPRB
S12LBASSISTPRB
S13LBASSISTPRB
S14LBASSISTPRB
S15LBASSISTPRB
/*-- S_LBCOMP   --*/
S8LBCOMP
S9LBCOMP
S10LBCOMP
S11LBCOMP
S12LBCOMP
S13LBCOMP
S14LBCOMP
S15LBCOMP
/*-- S_LBCON10   --*/
S10LBCON10
S11LBCON10
S12LBCON10
S13LBCON10
S14LBCON10
S15LBCON10
/*-- S_LBCON5   --*/
S8LBCON5
S9LBCON5
S10LBCON5
S11LBCON5
S12LBCON5
S13LBCON5
S14LBCON5
S15LBCON5
/*-- S_LBELIG   --*/
S8LBELIG
S9LBELIG
S10LBELIG
S11LBELIG
S12LBELIG
S13LBELIG
S14LBELIG
S15LBELIG
/*-- S_LBEXT   --*/
S8LBEXT
S9LBEXT
S10LBEXT
S11LBEXT
S12LBEXT
S13LBEXT
S14LBEXT
S15LBEXT
/*-- S_LBFAMDRUGPRB   --*/
S8LBFAMDRUGPRB
S10LBFAMDRUGPRB
S11LBFAMDRUGPRB
S12LBFAMDRUGPRB
S13LBFAMDRUGPRB
S14LBFAMDRUGPRB
S15LBFAMDRUGPRB
/*-- S_LBFAMHLTHPRB   --*/
S8LBFAMHLTHPRB
S10LBFAMHLTHPRB
S11LBFAMHLTHPRB
S12LBFAMHLTHPRB
S13LBFAMHLTHPRB
S14LBFAMHLTHPRB
S15LBFAMHLTHPRB
/*-- S_LBFINPRB   --*/
S8LBFINPRB
S10LBFINPRB
S11LBFINPRB
S12LBFINPRB
S13LBFINPRB
S14LBFINPRB
S15LBFINPRB
/*-- S_LBHLTHPRB   --*/
S8LBHLTHPRB
S10LBHLTHPRB
S11LBHLTHPRB
S12LBHLTHPRB
S13LBHLTHPRB
S14LBHLTHPRB
S15LBHLTHPRB
/*-- S_LBHOUSEPRB   --*/
S8LBHOUSEPRB
S10LBHOUSEPRB
S11LBHOUSEPRB
S12LBHOUSEPRB
S13LBHOUSEPRB
S14LBHOUSEPRB
S15LBHOUSEPRB
/*-- S_LBLONELY11   --*/
S9LBLONELY11
S10LBLONELY11
S11LBLONELY11
S12LBLONELY11
S13LBLONELY11
S14LBLONELY11
S15LBLONELY11
/*-- S_LBLONELY3   --*/
S8LBLONELY3
S9LBLONELY3
S10LBLONELY3
S11LBLONELY3
S12LBLONELY3
S13LBLONELY3
S14LBLONELY3
S15LBLONELY3
/*-- S_LBNEGAFFECT   --*/
S9LBNEGAFFECT
S10LBNEGAFFECT
S11LBNEGAFFECT
S12LBNEGAFFECT
S13LBNEGAFFECT
S14LBNEGAFFECT
S15LBNEGAFFECT
/*-- S_LBNEGAFFECT6   --*/
S8LBNEGAFFECT6
/*-- S_LBNEUR   --*/
S8LBNEUR
S9LBNEUR
S10LBNEUR
S11LBNEUR
S12LBNEUR
S13LBNEUR
S14LBNEUR
S15LBNEUR
/*-- S_LBONCHRSTR   --*/
S8LBONCHRSTR
S10LBONCHRSTR
S11LBONCHRSTR
S12LBONCHRSTR
S13LBONCHRSTR
S14LBONCHRSTR
S15LBONCHRSTR
/*-- S_LBOPEN   --*/
S8LBOPEN
S9LBOPEN
S10LBOPEN
S11LBOPEN
S12LBOPEN
S13LBOPEN
S14LBOPEN
S15LBOPEN
/*-- S_LBPOSAFFECT   --*/
S9LBPOSAFFECT
S10LBPOSAFFECT
S11LBPOSAFFECT
S12LBPOSAFFECT
S13LBPOSAFFECT
S14LBPOSAFFECT
S15LBPOSAFFECT
/*-- S_LBPOSAFFECT6   --*/
S8LBPOSAFFECT6
/*-- S_LBRF   --*/
S1LBRF
S2LBRF
S3LBRF
S4LBRF
S5LBRF
S6LBRF
S7LBRF
S8LBRF
S9LBRF
S10LBRF
S11LBRF
S12LBRF
S13LBRF
S14LBRF
S15LBRF
/*-- S_LBRFH   --*/
S1LBRFH
S2LBRFH
S3LBRFH
S4LBRFH
S5LBRFH
S6LBRFH
S7LBRFH
S8LBRFH
S9LBRFH
S10LBRFH
S11LBRFH
S12LBRFH
S13LBRFH
S14LBRFH
S15LBRFH
/*-- S_LBRFY   --*/
S1LBRFY
S2LBRFY
S3LBRFY
S4LBRFY
S5LBRFY
S6LBRFY
S7LBRFY
S8LBRFY
S9LBRFY
S10LBRFY
S11LBRFY
S12LBRFY
S13LBRFY
S14LBRFY
S15LBRFY
/*-- S_LBRLTNSHPRB   --*/
S8LBRLTNSHPRB
S10LBRLTNSHPRB
S11LBRLTNSHPRB
S12LBRLTNSHPRB
S13LBRLTNSHPRB
S14LBRLTNSHPRB
S15LBRLTNSHPRB
/*-- S_LBSATCITY   --*/
S9LBSATCITY
S10LBSATCITY
S11LBSATCITY
S12LBSATCITY
S13LBSATCITY
S14LBSATCITY
S15LBSATCITY
/*-- S_LBSATFAM   --*/
S9LBSATFAM
S10LBSATFAM
S11LBSATFAM
S12LBSATFAM
S13LBSATFAM
S14LBSATFAM
S15LBSATFAM
/*-- S_LBSATFIN   --*/
S8LBSATFIN
S9LBSATFIN
S10LBSATFIN
S11LBSATFIN
S12LBSATFIN
S13LBSATFIN
S14LBSATFIN
S15LBSATFIN
/*-- S_LBSATHLTH   --*/
S9LBSATHLTH
S10LBSATHLTH
S11LBSATHLTH
S12LBSATHLTH
S13LBSATHLTH
S14LBSATHLTH
S15LBSATHLTH
/*-- S_LBSATHOME   --*/
S9LBSATHOME
S10LBSATHOME
S11LBSATHOME
S12LBSATHOME
S13LBSATHOME
S14LBSATHOME
S15LBSATHOME
/*-- S_LBSATINC   --*/
S10LBSATINC
S11LBSATINC
S12LBSATINC
S13LBSATINC
S14LBSATINC
S15LBSATINC
/*-- S_LBSATLEISURE   --*/
S9LBSATLEISURE
S10LBSATLEISURE
S11LBSATLEISURE
S12LBSATLEISURE
S13LBSATLEISURE
S14LBSATLEISURE
S15LBSATLEISURE
/*-- S_LBSATLIFE   --*/
S9LBSATLIFE
S10LBSATLIFE
S11LBSATLIFE
/*-- S_LBSATWLF   --*/
S8LBSATWLF
S9LBSATWLF
S10LBSATWLF
S11LBSATWLF
S12LBSATWLF
S13LBSATWLF
S14LBSATWLF
S15LBSATWLF
/*-- S_LBWGTR   --*/
S8LBWGTR
S9LBWGTR
S10LBWGTR
S11LBWGTR
S12LBWGTR
S13LBWGTR
S14LBWGTR
/*-- S_LBWORKPRB   --*/
S8LBWORKPRB
S10LBWORKPRB
S11LBWORKPRB
S12LBWORKPRB
S13LBWORKPRB
S14LBWORKPRB
S15LBWORKPRB
/*-- S_LGMUSA   --*/
S2LGMUSA
S3LGMUSA
S4LGMUSA
S5LGMUSA
S6LGMUSA
S7LGMUSA
S8LGMUSA
S9LGMUSA
S10LGMUSA
S11LGMUSA
S12LGMUSA
S13LGMUSA
S14LGMUSA
S15LGMUSA
/*-- S_LGMUSW   --*/
S1LGMUSW
/*-- S_LHTACT   --*/
S1LHTACT
S2LHTACT
/*-- S_LIFEIN   --*/
S1LIFEIN
S2LIFEIN
S3LIFEIN
S4LIFEIN
S5LIFEIN
S6LIFEIN
S7LIFEIN
S8LIFEIN
S9LIFEIN
S10LIFEIN
S11LIFEIN
S12LIFEIN
S13LIFEIN
S14LIFEIN
S15LIFEIN
/*-- S1_LIFT   --*/
S1LIFT
/*-- S2_LIFT   --*/
S2LIFT
/*-- S_LIFT   --*/
S3LIFT
S4LIFT
S5LIFT
S6LIFT
S7LIFT
S8LIFT
S9LIFT
S10LIFT
S11LIFT
S12LIFT
S13LIFT
S14LIFT
S15LIFT
/*-- S_LIFTA   --*/
S2LIFTA
S3LIFTA
S4LIFTA
S5LIFTA
S6LIFTA
S7LIFTA
S8LIFTA
S9LIFTA
S10LIFTA
S11LIFTA
S12LIFTA
S13LIFTA
S14LIFTA
S15LIFTA
/*-- S_LIFTW   --*/
S1LIFTW
/*-- S_LIV10   --*/
S2LIV10
S3LIV10
S5LIV10
S6LIV10
S7LIV10
S8LIV10
S9LIV10
S10LIV10
S11LIV10
S12LIV10
S13LIV10
S14LIV10
S15LIV10
/*-- S_LIV10A   --*/
S2LIV10A
S3LIV10A
S5LIV10A
S6LIV10A
S7LIV10A
S8LIV10A
S9LIV10A
S10LIV10A
S11LIV10A
S12LIV10A
S13LIV10A
S14LIV10A
S15LIV10A
/*-- S_LIV10P   --*/
S2LIV10P
S3LIV10P
S5LIV10P
S6LIV10P
S7LIV10P
S8LIV10P
S9LIV10P
S10LIV10P
S11LIV10P
S12LIV10P
S13LIV10P
S14LIV10P
S15LIV10P
/*-- S_LIV10R   --*/
S2LIV10R
S3LIV10R
S5LIV10R
S6LIV10R
S7LIV10R
S8LIV10R
S9LIV10R
S10LIV10R
S11LIV10R
S12LIV10R
S13LIV10R
S14LIV10R
S15LIV10R
/*-- S_LIV75   --*/
S1LIV75
S2LIV75
S3LIV75
S4LIV75
S5LIV75
S6LIV75
S7LIV75
S8LIV75
S9LIV75
S10LIV75
S11LIV75
S12LIV75
S13LIV75
S14LIV75
S15LIV75
/*-- S_LIV75C   --*/
S2LIV75C
S3LIV75C
S4LIV75C
S5LIV75C
S6LIV75C
S7LIV75C
S8LIV75C
S9LIV75C
S10LIV75C
S11LIV75C
S12LIV75C
S13LIV75C
S14LIV75C
S15LIV75C
/*-- S_LIV75F   --*/
S2LIV75F
S3LIV75F
S4LIV75F
S5LIV75F
S6LIV75F
S7LIV75F
S8LIV75F
S9LIV75F
S10LIV75F
S11LIV75F
S12LIV75F
S13LIV75F
S14LIV75F
S15LIV75F
/*-- S_LIV75P   --*/
S1LIV75P
S2LIV75P
S3LIV75P
S4LIV75P
S5LIV75P
S6LIV75P
S7LIV75P
S8LIV75P
S9LIV75P
S10LIV75P
S11LIV75P
S12LIV75P
S13LIV75P
S14LIV75P
S15LIV75P
/*-- S_LIV75R   --*/
S1LIV75R
S2LIV75R
S3LIV75R
S4LIV75R
S5LIV75R
S6LIV75R
S7LIV75R
S8LIV75R
S9LIV75R
S10LIV75R
S11LIV75R
S12LIV75R
S13LIV75R
S14LIV75R
S15LIV75R
/*-- S_LIV85   --*/
S1LIV85
S2LIV85
S3LIV85
S4LIV85
/*-- S_LIV85C   --*/
S2LIV85C
S3LIV85C
S4LIV85C
/*-- S_LIV85F   --*/
S2LIV85F
S3LIV85F
S4LIV85F
/*-- S_LIV85P   --*/
S1LIV85P
S2LIV85P
S3LIV85P
S4LIV85P
/*-- S_LIV85R   --*/
S1LIV85R
S2LIV85R
S3LIV85R
S4LIV85R
/*-- S_LIV8XC   --*/
S2LIV8XC
S3LIV8XC
S4LIV8XC
S5LIV8XC
S6LIV8XC
S7LIV8XC
S8LIV8XC
S9LIV8XC
S10LIV8XC
S11LIV8XC
S12LIV8XC
S13LIV8XC
S14LIV8XC
S15LIV8XC
/*-- S_LIV8XF   --*/
S2LIV8XF
S3LIV8XF
S4LIV8XF
S5LIV8XF
S6LIV8XF
S7LIV8XF
S8LIV8XF
S9LIV8XF
S10LIV8XF
S11LIV8XF
S12LIV8XF
S13LIV8XF
S14LIV8XF
S15LIV8XF
/*-- S_LIVBRO   --*/
S1LIVBRO
S2LIVBRO
S3LIVBRO
S4LIVBRO
S5LIVBRO
S6LIVBRO
S7LIVBRO
S8LIVBRO
S9LIVBRO
S10LIVBRO
S11LIVBRO
S12LIVBRO
S13LIVBRO
S14LIVBRO
S15LIVBRO
/*-- S_LIVPAR   --*/
S1LIVPAR
S2LIVPAR
S3LIVPAR
S4LIVPAR
S5LIVPAR
S6LIVPAR
S7LIVPAR
S8LIVPAR
S9LIVPAR
S10LIVPAR
S11LIVPAR
S12LIVPAR
S13LIVPAR
S14LIVPAR
S15LIVPAR
/*-- S_LIVSIB   --*/
S1LIVSIB
S2LIVSIB
S3LIVSIB
S4LIVSIB
S5LIVSIB
S6LIVSIB
S7LIVSIB
S8LIVSIB
S9LIVSIB
S10LIVSIB
S11LIVSIB
S12LIVSIB
S13LIVSIB
S14LIVSIB
S15LIVSIB
/*-- S_LIVSIS   --*/
S1LIVSIS
S2LIVSIS
S3LIVSIS
S4LIVSIS
S5LIVSIS
S6LIVSIS
S7LIVSIS
S8LIVSIS
S9LIVSIS
S10LIVSIS
S11LIVSIS
S12LIVSIS
S13LIVSIS
S14LIVSIS
S15LIVSIS
/*-- S_LOST   --*/
S2LOST
S3LOST
S4LOST
S5LOST
S6LOST
S7LOST
S8LOST
S9LOST
S10LOST
S11LOST
S12LOST
S13LOST
S14LOST
S15LOST
/*-- S_LTACTF   --*/
S1LTACTF
/*-- S_LTACTN   --*/
S2LTACTN
/*-- S_LTACTP   --*/
S2LTACTP
/*-- S_LTACTX   --*/
S7LTACTX
S8LTACTX
S9LTACTX
S10LTACTX
S11LTACTX
S12LTACTX
S13LTACTX
S14LTACTX
S15LTACTX
/*-- S_LTCPRM   --*/
S1LTCPRM
S2LTCPRM
S3LTCPRM
S4LTCPRM
S5LTCPRM
S6LTCPRM
S7LTCPRM
S8LTCPRM
S9LTCPRM
S10LTCPRM
S11LTCPRM
S12LTCPRM
S13LTCPRM
S14LTCPRM
S15LTCPRM
/*-- S_LUNG   --*/
S1LUNG
S2LUNG
S3LUNG
S4LUNG
S5LUNG
S6LUNG
S7LUNG
S8LUNG
S9LUNG
S10LUNG
S11LUNG
S12LUNG
S13LUNG
S14LUNG
S15LUNG
/*-- S_LUNGE   --*/
S1LUNGE
S2LUNGE
S3LUNGE
S4LUNGE
S5LUNGE
S6LUNGE
S7LUNGE
S8LUNGE
S9LUNGE
S10LUNGE
S11LUNGE
S12LUNGE
S13LUNGE
S14LUNGE
S15LUNGE
/*-- S_LUNGEF   --*/
S1LUNGEF
S2LUNGEF
S3LUNGEF
S4LUNGEF
S5LUNGEF
S6LUNGEF
S7LUNGEF
S8LUNGEF
S9LUNGEF
S10LUNGEF
S11LUNGEF
S12LUNGEF
S13LUNGEF
S14LUNGEF
S15LUNGEF
/*-- S_LUNGF   --*/
S1LUNGF
S2LUNGF
S3LUNGF
S4LUNGF
S5LUNGF
S6LUNGF
S7LUNGF
S8LUNGF
S9LUNGF
S10LUNGF
S11LUNGF
S12LUNGF
S13LUNGF
S14LUNGF
S15LUNGF
/*-- S_LUNGQ   --*/
S1LUNGQ
S2LUNGQ
S3LUNGQ
S4LUNGQ
S5LUNGQ
S6LUNGQ
S7LUNGQ
S8LUNGQ
S9LUNGQ
S10LUNGQ
S11LUNGQ
S12LUNGQ
S13LUNGQ
S14LUNGQ
S15LUNGQ
/*-- S_LUNGS   --*/
S2LUNGS
S3LUNGS
S4LUNGS
S5LUNGS
S6LUNGS
S7LUNGS
S8LUNGS
S9LUNGS
S10LUNGS
S11LUNGS
S12LUNGS
S13LUNGS
S14LUNGS
S15LUNGS
/*-- S_MAMMOG   --*/
S3MAMMOG
S4MAMMOG
S5MAMMOG
S6MAMMOG
S7MAMMOG
S8MAMMOG
S9MAMMOG
S10MAMMOG
S11MAMMOG
S12MAMMOG
S13MAMMOG
S14MAMMOG
S15MAMMOG
/*-- S1_MAP   --*/
S1MAP
/*-- S2_MAP   --*/
S2MAP
/*-- S_MAP   --*/
S3MAP
S4MAP
S5MAP
S6MAP
S7MAP
S8MAP
S9MAP
S10MAP
S11MAP
S12MAP
S13MAP
S14MAP
S15MAP
/*-- S_MAPA   --*/
S2MAPA
S3MAPA
S4MAPA
S5MAPA
S6MAPA
S7MAPA
S8MAPA
S9MAPA
S10MAPA
S11MAPA
S12MAPA
S13MAPA
S14MAPA
S15MAPA
/*-- S_MAPW   --*/
S1MAPW
/*-- S_MCURLN   --*/
S1MCURLN
S2MCURLN
S3MCURLN
S4MCURLN
S5MCURLN
S6MCURLN
S7MCURLN
S8MCURLN
S9MCURLN
S10MCURLN
S11MCURLN
S12MCURLN
S13MCURLN
S14MCURLN
S15MCURLN
/*-- S_MCWV   --*/
S1MCWV
/*-- S_MCWVW   --*/
S1MCWVW
/*-- S_MDACTX   --*/
S7MDACTX
S8MDACTX
S9MDACTX
S10MDACTX
S11MDACTX
S12MDACTX
S13MDACTX
S14MDACTX
S15MDACTX
/*-- S_MDIV   --*/
S1MDIV
S2MDIV
S3MDIV
S4MDIV
S5MDIV
S6MDIV
S7MDIV
S8MDIV
S9MDIV
S10MDIV
S11MDIV
S12MDIV
S13MDIV
S14MDIV
S15MDIV
/*-- S_MEALS   --*/
S3MEALS
S4MEALS
S5MEALS
S6MEALS
S7MEALS
S8MEALS
S9MEALS
S10MEALS
S11MEALS
S12MEALS
S13MEALS
S14MEALS
S15MEALS
/*-- S_MEALSA   --*/
S2MEALSA
S3MEALSA
S4MEALSA
S5MEALSA
S6MEALSA
S7MEALSA
S8MEALSA
S9MEALSA
S10MEALSA
S11MEALSA
S12MEALSA
S13MEALSA
S14MEALSA
S15MEALSA
/*-- S_MEALSH   --*/
S3MEALSH
S4MEALSH
S5MEALSH
S6MEALSH
S7MEALSH
S8MEALSH
S9MEALSH
S10MEALSH
S11MEALSH
S12MEALSH
S13MEALSH
S14MEALSH
S15MEALSH
/*-- S_MEALSR   --*/
S2MEALSR
/*-- S2_MEDS   --*/
S2MEDS
/*-- S_MEDS   --*/
S3MEDS
S4MEDS
S5MEDS
S6MEDS
S7MEDS
S8MEDS
S9MEDS
S10MEDS
S11MEDS
S12MEDS
S13MEDS
S14MEDS
S15MEDS
/*-- S_MEDSA   --*/
S2MEDSA
S3MEDSA
S4MEDSA
S5MEDSA
S6MEDSA
S7MEDSA
S8MEDSA
S9MEDSA
S10MEDSA
S11MEDSA
S12MEDSA
S13MEDSA
S14MEDSA
S15MEDSA
/*-- S_MEDSH   --*/
S3MEDSH
S4MEDSH
S5MEDSH
S6MEDSH
S7MEDSH
S8MEDSH
S9MEDSH
S10MEDSH
S11MEDSH
S12MEDSH
S13MEDSH
S14MEDSH
S15MEDSH
/*-- S_MEDSR   --*/
S2MEDSR
/*-- S_MEDUC   --*/
S1MEDUC
S2MEDUC
S3MEDUC
S4MEDUC
S5MEDUC
S6MEDUC
S7MEDUC
S8MEDUC
S9MEDUC
S10MEDUC
S11MEDUC
S12MEDUC
S13MEDUC
S14MEDUC
S15MEDUC
/*-- S_MEMRY   --*/
S4MEMRY
S5MEMRY
S6MEMRY
S7MEMRY
S8MEMRY
S9MEMRY
/*-- S_MEMRYE   --*/
S4MEMRYE
S5MEMRYE
S6MEMRYE
S7MEMRYE
S8MEMRYE
S9MEMRYE
/*-- S_MEMRYEF   --*/
S4MEMRYEF
S5MEMRYEF
S6MEMRYEF
S7MEMRYEF
S8MEMRYEF
S9MEMRYEF
/*-- S_MEMRYF   --*/
S5MEMRYF
S6MEMRYF
S7MEMRYF
S8MEMRYF
S9MEMRYF
/*-- S_MEMRYQ   --*/
S4MEMRYQ
S5MEMRYQ
S6MEMRYQ
S7MEMRYQ
S8MEMRYQ
S9MEMRYQ
/*-- S_MEMRYS   --*/
S5MEMRYS
S6MEMRYS
S7MEMRYS
S8MEMRYS
S9MEMRYS
/*-- S_MEND   --*/
S1MEND
S2MEND
S3MEND
S4MEND
S5MEND
S6MEND
S7MEND
S8MEND
S9MEND
S10MEND
S11MEND
S12MEND
S13MEND
S14MEND
S15MEND
/*-- S_MLEN   --*/
S1MLEN
S2MLEN
S3MLEN
S4MLEN
S5MLEN
S6MLEN
S7MLEN
S8MLEN
S9MLEN
S10MLEN
S11MLEN
S12MLEN
S13MLEN
S14MLEN
S15MLEN
/*-- S_MLENM   --*/
S1MLENM
S2MLENM
S3MLENM
S4MLENM
S5MLENM
S6MLENM
S7MLENM
S8MLENM
S9MLENM
S10MLENM
S11MLENM
S12MLENM
S13MLENM
S14MLENM
S15MLENM
/*-- S_MNEV   --*/
S1MNEV
S2MNEV
S3MNEV
S4MNEV
S5MNEV
S6MNEV
S7MNEV
S8MNEV
S9MNEV
S10MNEV
S11MNEV
S12MNEV
S13MNEV
S14MNEV
S15MNEV
/*-- S_MO   --*/
S2MO
S3MO
S4MO
S5MO
S6MO
S7MO
S8MO
S9MO
S10MO
S11MO
S12MO
S13MO
/*-- S_MOBILA   --*/
S2MOBILA
S3MOBILA
S4MOBILA
S5MOBILA
S6MOBILA
S7MOBILA
S8MOBILA
S9MOBILA
S10MOBILA
S11MOBILA
S12MOBILA
S13MOBILA
S14MOBILA
S15MOBILA
/*-- S_MOBILW   --*/
S1MOBILW
/*-- S_MOMAGE   --*/
S1MOMAGE
S2MOMAGE
S3MOMAGE
S4MOMAGE
S5MOMAGE
S6MOMAGE
S7MOMAGE
S8MOMAGE
S9MOMAGE
S10MOMAGE
S11MOMAGE
S12MOMAGE
S13MOMAGE
S14MOMAGE
S15MOMAGE
/*-- S_MOMLIV   --*/
S1MOMLIV
S2MOMLIV
S3MOMLIV
S4MOMLIV
S5MOMLIV
S6MOMLIV
S7MOMLIV
S8MOMLIV
S9MOMLIV
S10MOMLIV
S11MOMLIV
S12MOMLIV
S13MOMLIV
S14MOMLIV
S15MOMLIV
/*-- S2_MONEY   --*/
S2MONEY
/*-- S_MONEY   --*/
S3MONEY
S4MONEY
S5MONEY
S6MONEY
S7MONEY
S8MONEY
S9MONEY
S10MONEY
S11MONEY
S12MONEY
S13MONEY
S14MONEY
S15MONEY
/*-- S_MONEYA   --*/
S2MONEYA
S3MONEYA
S4MONEYA
S5MONEYA
S6MONEYA
S7MONEYA
S8MONEYA
S9MONEYA
S10MONEYA
S11MONEYA
S12MONEYA
S13MONEYA
S14MONEYA
S15MONEYA
/*-- S_MONEYH   --*/
S3MONEYH
S4MONEYH
S5MONEYH
S6MONEYH
S7MONEYH
S8MONEYH
S9MONEYH
S10MONEYH
S11MONEYH
S12MONEYH
S13MONEYH
S14MONEYH
S15MONEYH
/*-- S_MONEYR   --*/
S2MONEYR
/*-- S_MPART   --*/
S1MPART
S2MPART
S3MPART
S4MPART
S5MPART
S6MPART
S7MPART
S8MPART
S9MPART
S10MPART
S11MPART
S12MPART
S13MPART
S14MPART
S15MPART
/*-- S_MRCT   --*/
S1MRCT
S2MRCT
S3MRCT
S4MRCT
S5MRCT
S6MRCT
S7MRCT
S8MRCT
S9MRCT
S10MRCT
S11MRCT
S12MRCT
S13MRCT
S14MRCT
S15MRCT
/*-- S_MRPREM   --*/
S3MRPREM
S4MRPREM
S5MRPREM
S6MRPREM
S7MRPREM
S8MRPREM
S9MRPREM
S10MRPREM
S11MRPREM
S12MRPREM
S13MRPREM
S14MRPREM
S15MRPREM
/*-- S_MSTAT   --*/
S1MSTAT
S2MSTAT
S3MSTAT
S4MSTAT
S5MSTAT
S6MSTAT
S7MSTAT
S8MSTAT
S9MSTAT
S10MSTAT
S11MSTAT
S12MSTAT
S13MSTAT
S14MSTAT
S15MSTAT
/*-- S_MSTATF   --*/
S1MSTATF
S2MSTATF
S3MSTATF
S4MSTATF
S5MSTATF
S6MSTATF
S7MSTATF
S8MSTATF
S9MSTATF
S10MSTATF
S11MSTATF
S12MSTATF
S13MSTATF
S14MSTATF
S15MSTATF
/*-- S_MSTATH   --*/
S1MSTATH
S2MSTATH
S3MSTATH
S4MSTATH
S5MSTATH
S6MSTATH
S7MSTATH
S8MSTATH
S9MSTATH
S10MSTATH
S11MSTATH
S12MSTATH
S13MSTATH
S14MSTATH
S15MSTATH
/*-- S_MSTOT   --*/
S3MSTOT
S4MSTOT
S5MSTOT
S6MSTOT
S7MSTOT
S8MSTOT
S9MSTOT
S10MSTOT
S11MSTOT
S12MSTOT
S13MSTOT
/*-- S_MWID   --*/
S1MWID
S2MWID
S3MWID
S4MWID
S5MWID
S6MWID
S7MWID
S8MWID
S9MWID
S10MWID
S11MWID
S12MWID
S13MWID
S14MWID
S15MWID
/*-- S_NHMDAY   --*/
S3NHMDAY
S4NHMDAY
S5NHMDAY
S6NHMDAY
S7NHMDAY
S8NHMDAY
S9NHMDAY
S10NHMDAY
S11NHMDAY
S12NHMDAY
S13NHMDAY
S14NHMDAY
S15NHMDAY
/*-- S_NHMLIV   --*/
S3NHMLIV
S4NHMLIV
S5NHMLIV
S6NHMLIV
S7NHMLIV
S8NHMLIV
S9NHMLIV
S10NHMLIV
S11NHMLIV
S12NHMLIV
S13NHMLIV
S14NHMLIV
S15NHMLIV
/*-- S_NHMMVM   --*/
S3NHMMVM
S4NHMMVM
S5NHMMVM
S6NHMMVM
S7NHMMVM
S8NHMMVM
S9NHMMVM
S10NHMMVM
S11NHMMVM
S12NHMMVM
S13NHMMVM
S14NHMMVM
S15NHMMVM
/*-- S_NHMMVY   --*/
S3NHMMVY
S4NHMMVY
S5NHMMVY
S6NHMMVY
S7NHMMVY
S8NHMMVY
S9NHMMVY
S10NHMMVY
S11NHMMVY
S12NHMMVY
S13NHMMVY
S14NHMMVY
S15NHMMVY
/*-- S_NOTICS   --*/
S4NOTICS
S5NOTICS
S6NOTICS
S7NOTICS
S8NOTICS
S9NOTICS
S10NOTICS
S11NOTICS
S12NOTICS
S13NOTICS
/*-- S_NOVOC   --*/
S7NOVOC
S8NOVOC
S9NOVOC
S10NOVOC
S11NOVOC
S12NOVOC
S13NOVOC
/*-- S_NRSHOM   --*/
S1NRSHOM
S2NRSHOM
S3NRSHOM
S4NRSHOM
S5NRSHOM
S6NRSHOM
S7NRSHOM
S8NRSHOM
S9NRSHOM
S10NRSHOM
S11NRSHOM
S12NRSHOM
S13NRSHOM
S14NRSHOM
S15NRSHOM
/*-- S_NRSNIT   --*/
S1NRSNIT
S2NRSNIT
S3NRSNIT
S4NRSNIT
S5NRSNIT
S6NRSNIT
S7NRSNIT
S8NRSNIT
S9NRSNIT
S10NRSNIT
S11NRSNIT
S12NRSNIT
S13NRSNIT
S14NRSNIT
S15NRSNIT
/*-- S_NRSTIM   --*/
S1NRSTIM
S2NRSTIM
S3NRSTIM
S4NRSTIM
S5NRSTIM
S6NRSTIM
S7NRSTIM
S8NRSTIM
S9NRSTIM
S10NRSTIM
S11NRSTIM
S12NRSTIM
S13NRSTIM
S14NRSTIM
S15NRSTIM
/*-- S_NSSCRE   --*/
S10NSSCRE
S11NSSCRE
S13NSSCRE
/*-- S_NSSCSE   --*/
S10NSSCSE
S11NSSCSE
S13NSSCSE
/*-- S_OAHDID   --*/
S1OAHDID
S2OAHDID
S3OAHDID
S4OAHDID
S5OAHDID
S6OAHDID
S7OAHDID
S8OAHDID
S9OAHDID
S10OAHDID
S11OAHDID
S12OAHDID
S13OAHDID
S14OAHDID
S15OAHDID
/*-- S_OHRSID   --*/
S1OHRSID
S2OHRSID
S3OHRSID
S4OHRSID
S5OHRSID
S6OHRSID
S7OHRSID
S8OHRSID
S9OHRSID
S10OHRSID
S11OHRSID
S12OHRSID
S13OHRSID
S14OHRSID
S15OHRSID
/*-- S_OOPMD   --*/
S2OOPMD
S3OOPMD
S4OOPMD
S5OOPMD
S6OOPMD
S7OOPMD
S8OOPMD
S9OOPMD
S10OOPMD
S11OOPMD
S12OOPMD
S13OOPMD
S14OOPMD
S15OOPMD
/*-- S_OOPMDF   --*/
S2OOPMDF
S3OOPMDF
S4OOPMDF
S5OOPMDF
S6OOPMDF
S7OOPMDF
S8OOPMDF
S9OOPMDF
S10OOPMDF
S11OOPMDF
S12OOPMDF
S13OOPMDF
S14OOPMDF
S15OOPMDF
/*-- S_OOPMDO   --*/
S10OOPMDO
S11OOPMDO
S12OOPMDO
S13OOPMDO
S14OOPMDO
S15OOPMDO
/*-- S_OOPMDOF   --*/
S10OOPMDOF
S11OOPMDOF
S12OOPMDOF
S13OOPMDOF
S14OOPMDOF
S15OOPMDOF
/*-- S_OUTPT   --*/
S2OUTPT
S3OUTPT
S4OUTPT
S5OUTPT
S6OUTPT
S7OUTPT
S8OUTPT
S9OUTPT
S10OUTPT
S11OUTPT
S12OUTPT
S13OUTPT
S14OUTPT
S15OUTPT
/*-- S_PAPSM   --*/
S3PAPSM
S4PAPSM
S5PAPSM
S6PAPSM
S7PAPSM
S8PAPSM
S9PAPSM
S10PAPSM
S11PAPSM
S12PAPSM
S13PAPSM
S14PAPSM
S15PAPSM
/*-- S_PARTD   --*/
S8PARTD
/*-- S_PENCT   --*/
S1PENCT
S2PENCT
S3PENCT
S4PENCT
S5PENCT
S6PENCT
S7PENCT
S8PENCT
S9PENCT
S10PENCT
S11PENCT
S12PENCT
S13PENCT
S14PENCT
S15PENCT
/*-- S_PENIC1   --*/
S2PENIC1
S3PENIC1
S4PENIC1
S5PENIC1
S6PENIC1
S7PENIC1
S8PENIC1
S9PENIC1
S10PENIC1
S11PENIC1
S12PENIC1
S13PENIC1
S14PENIC1
S15PENIC1
/*-- S_PENIC2   --*/
S2PENIC2
S3PENIC2
S4PENIC2
S5PENIC2
S6PENIC2
S7PENIC2
S8PENIC2
S9PENIC2
S10PENIC2
S11PENIC2
S12PENIC2
S13PENIC2
S14PENIC2
S15PENIC2
/*-- S_PENINC   --*/
S2PENINC
S3PENINC
S4PENINC
S5PENINC
S6PENINC
S7PENINC
S8PENINC
S9PENINC
S10PENINC
S11PENINC
S12PENINC
S13PENINC
S14PENINC
S15PENINC
/*-- S_PENI_N   --*/
S2PENI_N
S3PENI_N
S4PENI_N
S5PENI_N
S6PENI_N
S7PENI_N
S8PENI_N
S9PENI_N
S10PENI_N
S11PENI_N
S12PENI_N
S13PENI_N
S14PENI_N
S15PENI_N
/*-- S2_PHONE   --*/
S2PHONE
/*-- S_PHONE   --*/
S3PHONE
S4PHONE
S5PHONE
S6PHONE
S7PHONE
S8PHONE
S9PHONE
S10PHONE
S11PHONE
S12PHONE
S13PHONE
S14PHONE
S15PHONE
/*-- S_PHONEA   --*/
S2PHONEA
S3PHONEA
S4PHONEA
S5PHONEA
S6PHONEA
S7PHONEA
S8PHONEA
S9PHONEA
S10PHONEA
S11PHONEA
S12PHONEA
S13PHONEA
S14PHONEA
S15PHONEA
/*-- S_PHONEH   --*/
S3PHONEH
S4PHONEH
S5PHONEH
S6PHONEH
S7PHONEH
S8PHONEH
S9PHONEH
S10PHONEH
S11PHONEH
S12PHONEH
S13PHONEH
S14PHONEH
S15PHONEH
/*-- S_PHONER   --*/
S2PHONER
/*-- S_PMBMI   --*/
S8PMBMI
S9PMBMI
S10PMBMI
S11PMBMI
S12PMBMI
S13PMBMI
S14PMBMI
/*-- S_PMHGHT   --*/
S8PMHGHT
S9PMHGHT
S10PMHGHT
S11PMHGHT
S12PMHGHT
S13PMHGHT
S14PMHGHT
/*-- S_PMHGHTS   --*/
S8PMHGHTS
S9PMHGHTS
S10PMHGHTS
S11PMHGHTS
S12PMHGHTS
S13PMHGHTS
S14PMHGHTS
/*-- S_PMWAIST   --*/
S8PMWAIST
S9PMWAIST
S10PMWAIST
S11PMWAIST
S12PMWAIST
S13PMWAIST
S14PMWAIST
/*-- S_PMWAISTC   --*/
S8PMWAISTC
S9PMWAISTC
S10PMWAISTC
S11PMWAISTC
S12PMWAISTC
S13PMWAISTC
S14PMWAISTC
/*-- S_PMWGHT   --*/
S8PMWGHT
S9PMWGHT
S10PMWGHT
S11PMWGHT
S12PMWGHT
S13PMWGHT
S14PMWGHT
/*-- S_PMWGHTF   --*/
S8PMWGHTF
S9PMWGHTF
S10PMWGHTF
S11PMWGHTF
S12PMWGHTF
S13PMWGHTF
S14PMWGHTF
/*-- S_PMWGHTS   --*/
S8PMWGHTS
S9PMWGHTS
S10PMWGHTS
S11PMWGHTS
S12PMWGHTS
S13PMWGHTS
S14PMWGHTS
/*-- S_PNHM5Y   --*/
S4PNHM5Y
S5PNHM5Y
S6PNHM5Y
S7PNHM5Y
S8PNHM5Y
S9PNHM5Y
S10PNHM5Y
S11PNHM5Y
S12PNHM5Y
S13PNHM5Y
S14PNHM5Y
S15PNHM5Y
/*-- S_PRCHMEM   --*/
S4PRCHMEM
S5PRCHMEM
S6PRCHMEM
S7PRCHMEM
S8PRCHMEM
S9PRCHMEM
S10PRCHMEM
S11PRCHMEM
S12PRCHMEM
S13PRCHMEM
S14PRCHMEM
S15PRCHMEM
/*-- S_PRES   --*/
S2PRES
S3PRES
S4PRES
S5PRES
S6PRES
S7PRES
S8PRES
S9PRES
S10PRES
S11PRES
S12PRES
S13PRES
/*-- S_PRMEM   --*/
S2PRMEM
S3PRMEM
S4PRMEM
S5PRMEM
S6PRMEM
S7PRMEM
S8PRMEM
S9PRMEM
S10PRMEM
S11PRMEM
S12PRMEM
S13PRMEM
S14PRMEM
S15PRMEM
/*-- S_PROST   --*/
S3PROST
S4PROST
S5PROST
S6PROST
S7PROST
S8PROST
S9PROST
S10PROST
S11PROST
S12PROST
S13PROST
S14PROST
S15PROST
/*-- S_PROXY   --*/
S1PROXY
S2PROXY
S3PROXY
S4PROXY
S5PROXY
S6PROXY
S7PROXY
S8PROXY
S9PROXY
S10PROXY
S11PROXY
S12PROXY
S13PROXY
S14PROXY
S15PROXY
/*-- S_PRPCNT   --*/
S1PRPCNT
S2PRPCNT
S3PRPCNT
S4PRPCNT
S5PRPCNT
S6PRPCNT
S7PRPCNT
S8PRPCNT
S9PRPCNT
S10PRPCNT
S11PRPCNT
S12PRPCNT
S13PRPCNT
S14PRPCNT
S15PRPCNT
/*-- S_PRPRM1   --*/
S1PRPRM1
S2PRPRM1
S3PRPRM1
S4PRPRM1
S5PRPRM1
S6PRPRM1
S7PRPRM1
S8PRPRM1
S9PRPRM1
S10PRPRM1
S11PRPRM1
S12PRPRM1
S13PRPRM1
S14PRPRM1
S15PRPRM1
/*-- S_PRPRM2   --*/
S2PRPRM2
S3PRPRM2
S4PRPRM2
S5PRPRM2
S6PRPRM2
S7PRPRM2
S8PRPRM2
S9PRPRM2
S10PRPRM2
S11PRPRM2
S12PRPRM2
S13PRPRM2
S14PRPRM2
S15PRPRM2
/*-- S_PRPRM3   --*/
S2PRPRM3
S3PRPRM3
S6PRPRM3
S7PRPRM3
S8PRPRM3
S9PRPRM3
S10PRPRM3
S11PRPRM3
S12PRPRM3
S13PRPRM3
S14PRPRM3
S15PRPRM3
/*-- S_PRSRC1   --*/
S1PRSRC1
S2PRSRC1
S3PRSRC1
S4PRSRC1
S5PRSRC1
S6PRSRC1
S7PRSRC1
S8PRSRC1
S9PRSRC1
S10PRSRC1
S11PRSRC1
S12PRSRC1
S13PRSRC1
S14PRSRC1
S15PRSRC1
/*-- S_PRSRC2   --*/
S2PRSRC2
S3PRSRC2
S4PRSRC2
S5PRSRC2
S6PRSRC2
S7PRSRC2
S8PRSRC2
S9PRSRC2
S10PRSRC2
S11PRSRC2
S12PRSRC2
S13PRSRC2
S14PRSRC2
S15PRSRC2
/*-- S_PRSRC3   --*/
S2PRSRC3
S3PRSRC3
S6PRSRC3
S7PRSRC3
S8PRSRC3
S9PRSRC3
S10PRSRC3
S11PRSRC3
S12PRSRC3
S13PRSRC3
S14PRSRC3
S15PRSRC3
/*-- S_PSTMEM   --*/
S1PSTMEM
S2PSTMEM
S3PSTMEM
S4PSTMEM
S5PSTMEM
S6PSTMEM
S7PSTMEM
S8PSTMEM
S9PSTMEM
S10PSTMEM
S11PSTMEM
S12PSTMEM
S13PSTMEM
/*-- S_PSYCH   --*/
S1PSYCH
S2PSYCH
S3PSYCH
S4PSYCH
S5PSYCH
S6PSYCH
S7PSYCH
S8PSYCH
S9PSYCH
S10PSYCH
S11PSYCH
S12PSYCH
S13PSYCH
S14PSYCH
S15PSYCH
/*-- S_PSYCHE   --*/
S1PSYCHE
S2PSYCHE
S3PSYCHE
S4PSYCHE
S5PSYCHE
S6PSYCHE
S7PSYCHE
S8PSYCHE
S9PSYCHE
S10PSYCHE
S11PSYCHE
S12PSYCHE
S13PSYCHE
S14PSYCHE
S15PSYCHE
/*-- S_PSYCHEF   --*/
S1PSYCHEF
S2PSYCHEF
S3PSYCHEF
S4PSYCHEF
S5PSYCHEF
S6PSYCHEF
S7PSYCHEF
S8PSYCHEF
S9PSYCHEF
S10PSYCHEF
S11PSYCHEF
S12PSYCHEF
S13PSYCHEF
S14PSYCHEF
S15PSYCHEF
/*-- S_PSYCHF   --*/
S1PSYCHF
S2PSYCHF
S3PSYCHF
S4PSYCHF
S5PSYCHF
S6PSYCHF
S7PSYCHF
S8PSYCHF
S9PSYCHF
S10PSYCHF
S11PSYCHF
S12PSYCHF
S13PSYCHF
S14PSYCHF
S15PSYCHF
/*-- S_PSYCHQ   --*/
S1PSYCHQ
S2PSYCHQ
S3PSYCHQ
S4PSYCHQ
S5PSYCHQ
S6PSYCHQ
S7PSYCHQ
S8PSYCHQ
S9PSYCHQ
S10PSYCHQ
S11PSYCHQ
S12PSYCHQ
S13PSYCHQ
S14PSYCHQ
S15PSYCHQ
/*-- S_PSYCHS   --*/
S2PSYCHS
S3PSYCHS
S4PSYCHS
S5PSYCHS
S6PSYCHS
S7PSYCHS
S8PSYCHS
S9PSYCHS
S10PSYCHS
S11PSYCHS
S12PSYCHS
S13PSYCHS
S14PSYCHS
S15PSYCHS
/*-- S_PTYP1   --*/
S1PTYP1
S2PTYP1
S3PTYP1
S4PTYP1
S5PTYP1
S6PTYP1
S7PTYP1
S8PTYP1
S9PTYP1
S10PTYP1
S11PTYP1
S12PTYP1
S13PTYP1
S14PTYP1
S15PTYP1
/*-- S_PTYP2   --*/
S1PTYP2
S2PTYP2
S3PTYP2
S4PTYP2
S5PTYP2
S6PTYP2
S7PTYP2
S8PTYP2
S9PTYP2
S10PTYP2
S11PTYP2
S12PTYP2
S13PTYP2
S14PTYP2
S15PTYP2
/*-- S_PTYP3   --*/
S1PTYP3
S2PTYP3
S3PTYP3
S4PTYP3
S5PTYP3
S6PTYP3
S7PTYP3
S8PTYP3
S9PTYP3
S10PTYP3
S11PTYP3
S12PTYP3
S13PTYP3
S14PTYP3
S15PTYP3
/*-- S_PTYP4   --*/
S5PTYP4
S6PTYP4
S7PTYP4
S8PTYP4
S9PTYP4
S10PTYP4
S11PTYP4
S12PTYP4
S13PTYP4
S14PTYP4
S15PTYP4
/*-- S_PTYPD1   --*/
S9PTYPD1
S10PTYPD1
S11PTYPD1
S12PTYPD1
S13PTYPD1
S14PTYPD1
S15PTYPD1
/*-- S_PTYPD2   --*/
S9PTYPD2
S10PTYPD2
S11PTYPD2
S12PTYPD2
S13PTYPD2
S14PTYPD2
S15PTYPD2
/*-- S_PTYPD3   --*/
S9PTYPD3
S10PTYPD3
S11PTYPD3
S12PTYPD3
S13PTYPD3
S14PTYPD3
S15PTYPD3
/*-- S_PTYPD4   --*/
S9PTYPD4
S10PTYPD4
S11PTYPD4
S12PTYPD4
S13PTYPD4
S14PTYPD4
S15PTYPD4
/*-- S_PTYPF1   --*/
S9PTYPF1
S10PTYPF1
S11PTYPF1
S12PTYPF1
S13PTYPF1
S14PTYPF1
S15PTYPF1
/*-- S_PTYPF2   --*/
S9PTYPF2
S10PTYPF2
S11PTYPF2
S12PTYPF2
S13PTYPF2
S14PTYPF2
S15PTYPF2
/*-- S_PTYPF3   --*/
S9PTYPF3
S10PTYPF3
S11PTYPF3
S12PTYPF3
S13PTYPF3
S14PTYPF3
S15PTYPF3
/*-- S_PTYPF4   --*/
S9PTYPF4
S10PTYPF4
S11PTYPF4
S12PTYPF4
S13PTYPF4
S14PTYPF4
S15PTYPF4
/*-- S_PUFF   --*/
S8PUFF
S9PUFF
S10PUFF
S11PUFF
S12PUFF
S13PUFF
S14PUFF
/*-- S_PUFFPOS   --*/
S8PUFFPOS
S9PUFFPOS
S10PUFFPOS
S11PUFFPOS
S12PUFFPOS
S13PUFFPOS
S14PUFFPOS
/*-- S1_PUSH   --*/
S1PUSH
/*-- S2_PUSH   --*/
S2PUSH
/*-- S_PUSH   --*/
S3PUSH
S4PUSH
S5PUSH
S6PUSH
S7PUSH
S8PUSH
S9PUSH
S10PUSH
S11PUSH
S12PUSH
S13PUSH
S14PUSH
S15PUSH
/*-- S_PUSHA   --*/
S2PUSHA
S3PUSHA
S4PUSHA
S5PUSHA
S6PUSHA
S7PUSHA
S8PUSHA
S9PUSHA
S10PUSHA
S11PUSHA
S12PUSHA
S13PUSHA
S14PUSHA
S15PUSHA
/*-- S_PUSHW   --*/
S1PUSHW
/*-- S_RACEM   --*/
S1RACEM
S2RACEM
S3RACEM
S4RACEM
S5RACEM
S6RACEM
S7RACEM
S8RACEM
S9RACEM
S10RACEM
S11RACEM
S12RACEM
S13RACEM
S14RACEM
S15RACEM
/*-- S_RELIG   --*/
S1RELIG
S2RELIG
S3RELIG
S4RELIG
S5RELIG
S6RELIG
S7RELIG
S8RELIG
S9RELIG
S10RELIG
S11RELIG
S12RELIG
S13RELIG
S14RELIG
S15RELIG
/*-- S_RETDTWV   --*/
S1RETDTWV
S2RETDTWV
S3RETDTWV
S4RETDTWV
S5RETDTWV
S6RETDTWV
S7RETDTWV
S8RETDTWV
S9RETDTWV
S10RETDTWV
S11RETDTWV
S12RETDTWV
S13RETDTWV
S14RETDTWV
S15RETDTWV
/*-- S_RETEMP   --*/
S1RETEMP
S2RETEMP
S3RETEMP
S4RETEMP
S5RETEMP
S6RETEMP
S7RETEMP
S8RETEMP
S9RETEMP
S10RETEMP
S11RETEMP
S12RETEMP
S13RETEMP
S14RETEMP
S15RETEMP
/*-- S_RETINC   --*/
S1RETINC
/*-- S_RETLIV   --*/
S1RETLIV
/*-- S_RETMON   --*/
S1RETMON
S2RETMON
S3RETMON
S4RETMON
S5RETMON
S6RETMON
S7RETMON
S8RETMON
S9RETMON
S10RETMON
S11RETMON
S12RETMON
S13RETMON
S14RETMON
S15RETMON
/*-- S_RETSAT   --*/
S1RETSAT
S2RETSAT
S3RETSAT
S4RETSAT
S5RETSAT
S6RETSAT
S7RETSAT
S8RETSAT
S9RETSAT
S10RETSAT
S11RETSAT
S12RETSAT
S13RETSAT
S14RETSAT
S15RETSAT
/*-- S_RETWLT   --*/
S1RETWLT
/*-- S_RETWRK   --*/
S1RETWRK
/*-- S_RETWSP   --*/
S1RETWSP
/*-- S_RETYR   --*/
S1RETYR
S2RETYR
S3RETYR
S4RETYR
S5RETYR
S6RETYR
S7RETYR
S8RETYR
S9RETYR
S10RETYR
S11RETYR
S12RETYR
S13RETYR
S14RETYR
S15RETYR
/*-- S_RISK   --*/
S1RISK
S4RISK
S5RISK
S6RISK
S7RISK
S8RISK
/*-- S_RISK6   --*/
S4RISK6
S5RISK6
S6RISK6
S7RISK6
S8RISK6
/*-- S_RPLNYA   --*/
S1RPLNYA
S3RPLNYA
S4RPLNYA
S5RPLNYA
S6RPLNYA
S7RPLNYA
S8RPLNYA
S9RPLNYA
S10RPLNYA
S11RPLNYA
S12RPLNYA
S13RPLNYA
S14RPLNYA
S15RPLNYA
/*-- S_RPLNYR   --*/
S1RPLNYR
S2RPLNYR
S3RPLNYR
S4RPLNYR
S5RPLNYR
S6RPLNYR
S7RPLNYR
S8RPLNYR
S9RPLNYR
S10RPLNYR
S11RPLNYR
S12RPLNYR
S13RPLNYR
S14RPLNYR
S15RPLNYR
/*-- S_RXPREM   --*/
S8RXPREM
S9RXPREM
S10RXPREM
S11RXPREM
S12RXPREM
S13RXPREM
S14RXPREM
S15RXPREM
/*-- S_RYRCMP   --*/
S1RYRCMP
S2RYRCMP
S3RYRCMP
S4RYRCMP
S5RYRCMP
S6RYRCMP
S7RYRCMP
S8RYRCMP
S9RYRCMP
S10RYRCMP
S11RYRCMP
S12RYRCMP
S13RYRCMP
S14RYRCMP
S15RYRCMP
/*-- S_SADLF   --*/
S3SADLF
S4SADLF
S5SADLF
S6SADLF
S7SADLF
S8SADLF
S9SADLF
S10SADLF
S11SADLF
S12SADLF
S13SADLF
S14SADLF
S15SADLF
/*-- S_SAMEJOB   --*/
S2SAMEJOB
S3SAMEJOB
S4SAMEJOB
S5SAMEJOB
S6SAMEJOB
S7SAMEJOB
S8SAMEJOB
S9SAMEJOB
S10SAMEJOB
S11SAMEJOB
S12SAMEJOB
S13SAMEJOB
S14SAMEJOB
S15SAMEJOB
/*-- S_SAMEMP   --*/
S2SAMEMP
S3SAMEMP
S4SAMEMP
S5SAMEMP
S6SAMEMP
S7SAMEMP
S8SAMEMP
S9SAMEMP
S10SAMEMP
S11SAMEMP
S12SAMEMP
S13SAMEMP
S14SAMEMP
S15SAMEMP
/*-- S_SAYRET   --*/
S1SAYRET
S2SAYRET
S3SAYRET
S4SAYRET
S5SAYRET
S6SAYRET
S7SAYRET
S8SAYRET
S9SAYRET
S10SAYRET
S11SAYRET
S12SAYRET
S13SAYRET
S14SAYRET
S15SAYRET
/*-- S_SCIS   --*/
S2SCIS
S3SCIS
S4SCIS
S5SCIS
S6SCIS
S7SCIS
S8SCIS
S9SCIS
S10SCIS
S11SCIS
S12SCIS
S13SCIS
/*-- S_SDIAPL   --*/
S5SDIAPL
S6SDIAPL
S7SDIAPL
S8SDIAPL
S9SDIAPL
S10SDIAPL
S11SDIAPL
S12SDIAPL
S13SDIAPL
S14SDIAPL
S15SDIAPL
/*-- S_SDIAPLM   --*/
S5SDIAPLM
S6SDIAPLM
S7SDIAPLM
S8SDIAPLM
S9SDIAPLM
S10SDIAPLM
S11SDIAPLM
S12SDIAPLM
S13SDIAPLM
S14SDIAPLM
S15SDIAPLM
/*-- S_SDIAPLY   --*/
S5SDIAPLY
S6SDIAPLY
S7SDIAPLY
S8SDIAPLY
S9SDIAPLY
S10SDIAPLY
S11SDIAPLY
S12SDIAPLY
S13SDIAPLY
S14SDIAPLY
S15SDIAPLY
/*-- S_SDIAPP   --*/
S5SDIAPP
S6SDIAPP
S7SDIAPP
S8SDIAPP
S9SDIAPP
S10SDIAPP
S11SDIAPP
S12SDIAPP
S13SDIAPP
S14SDIAPP
S15SDIAPP
/*-- S_SDIAPPM   --*/
S5SDIAPPM
S6SDIAPPM
S7SDIAPPM
S8SDIAPPM
S9SDIAPPM
S10SDIAPPM
S11SDIAPPM
S12SDIAPPM
S13SDIAPPM
S14SDIAPPM
S15SDIAPPM
/*-- S_SDIAPPY   --*/
S5SDIAPPY
S6SDIAPPY
S7SDIAPPY
S8SDIAPPY
S9SDIAPPY
S10SDIAPPY
S11SDIAPPY
S12SDIAPPY
S13SDIAPPY
S14SDIAPPY
S15SDIAPPY
/*-- S_SDIDEN   --*/
S5SDIDEN
S6SDIDEN
S7SDIDEN
S8SDIDEN
S9SDIDEN
S10SDIDEN
S11SDIDEN
S12SDIDEN
S13SDIDEN
S14SDIDEN
S15SDIDEN
/*-- S_SDIREC   --*/
S5SDIREC
S6SDIREC
S7SDIREC
S8SDIREC
S9SDIREC
S10SDIREC
S11SDIREC
S12SDIREC
S13SDIREC
S14SDIREC
S15SDIREC
/*-- S_SDIRECM   --*/
S5SDIRECM
S6SDIRECM
S7SDIRECM
S8SDIRECM
S9SDIRECM
S10SDIRECM
S11SDIRECM
S12SDIRECM
S13SDIRECM
S14SDIRECM
S15SDIRECM
/*-- S_SDIRECY   --*/
S5SDIRECY
S6SDIRECY
S7SDIRECY
S8SDIRECY
S9SDIRECY
S10SDIRECY
S11SDIRECY
S12SDIRECY
S13SDIRECY
S14SDIRECY
S15SDIRECY
/*-- S_SDISTP   --*/
S5SDISTP
S6SDISTP
S7SDISTP
S8SDISTP
S9SDISTP
S10SDISTP
S11SDISTP
S12SDISTP
S13SDISTP
S14SDISTP
S15SDISTP
/*-- S_SDISTPM   --*/
S5SDISTPM
S6SDISTPM
S7SDISTPM
S8SDISTPM
S9SDISTPM
S10SDISTPM
S11SDISTPM
S12SDISTPM
S13SDISTPM
S14SDISTPM
S15SDISTPM
/*-- S_SDISTPY   --*/
S5SDISTPY
S6SDISTPY
S7SDISTPY
S8SDISTPY
S9SDISTPY
S10SDISTPY
S11SDISTPY
S12SDISTPY
S13SDISTPY
S14SDISTPY
S15SDISTPY
/*-- S_SER7   --*/
S2SER7
S3SER7
S4SER7
S5SER7
S6SER7
S7SER7
S8SER7
S9SER7
S10SER7
S11SER7
S12SER7
S13SER7
/*-- S_SHLT   --*/
S1SHLT
S2SHLT
S3SHLT
S4SHLT
S5SHLT
S6SHLT
S7SHLT
S8SHLT
S9SHLT
S10SHLT
S11SHLT
S12SHLT
S13SHLT
S14SHLT
S15SHLT
/*-- S_SHLTC   --*/
S2SHLTC
S3SHLTC
S4SHLTC
S5SHLTC
S6SHLTC
S7SHLTC
S8SHLTC
S9SHLTC
S10SHLTC
S11SHLTC
S12SHLTC
S13SHLTC
S14SHLTC
S15SHLTC
/*-- S_SHLTCF   --*/
S2SHLTCF
S3SHLTCF
S4SHLTCF
S5SHLTCF
S6SHLTCF
S7SHLTCF
S8SHLTCF
S9SHLTCF
S10SHLTCF
S11SHLTCF
S12SHLTCF
S13SHLTCF
S14SHLTCF
S15SHLTCF
/*-- S_SHOP   --*/
S3SHOP
S4SHOP
S5SHOP
S6SHOP
S7SHOP
S8SHOP
S9SHOP
S10SHOP
S11SHOP
S12SHOP
S13SHOP
S14SHOP
S15SHOP
/*-- S_SHOPA   --*/
S2SHOPA
S3SHOPA
S4SHOPA
S5SHOPA
S6SHOPA
S7SHOPA
S8SHOPA
S9SHOPA
S10SHOPA
S11SHOPA
S12SHOPA
S13SHOPA
S14SHOPA
S15SHOPA
/*-- S_SHOPH   --*/
S3SHOPH
S4SHOPH
S5SHOPH
S6SHOPH
S7SHOPH
S8SHOPH
S9SHOPH
S10SHOPH
S11SHOPH
S12SHOPH
S13SHOPH
S14SHOPH
S15SHOPH
/*-- S_SHOPR   --*/
S2SHOPR
/*-- S1_SIT   --*/
S1SIT
/*-- S2_SIT   --*/
S2SIT
/*-- S_SIT   --*/
S3SIT
S4SIT
S5SIT
S6SIT
S7SIT
S8SIT
S9SIT
S10SIT
S11SIT
S12SIT
S13SIT
S14SIT
S15SIT
/*-- S_SITA   --*/
S2SITA
S3SITA
S4SITA
S5SITA
S6SITA
S7SITA
S8SITA
S9SITA
S10SITA
S11SITA
S12SITA
S13SITA
S14SITA
S15SITA
/*-- S_SITW   --*/
S1SITW
/*-- S_SLEEP   --*/
S13SLEEP
S14SLEEP
S15SLEEP
/*-- S_SLEEPE   --*/
S13SLEEPE
S14SLEEPE
S15SLEEPE
/*-- S_SLEEPEF   --*/
S13SLEEPEF
S14SLEEPEF
S15SLEEPEF
/*-- S_SLEEPQ   --*/
S13SLEEPQ
S14SLEEPQ
S15SLEEPQ
/*-- S_SLEEPR   --*/
S2SLEEPR
S3SLEEPR
S4SLEEPR
S5SLEEPR
S6SLEEPR
S7SLEEPR
S8SLEEPR
S9SLEEPR
S10SLEEPR
S11SLEEPR
S12SLEEPR
S13SLEEPR
S14SLEEPR
S15SLEEPR
/*-- S_SLEEPS   --*/
S14SLEEPS
S15SLEEPS
/*-- S_SLEEPX   --*/
S1SLEEPX
/*-- S_SLFEMP   --*/
S1SLFEMP
S2SLFEMP
S3SLFEMP
S4SLFEMP
S5SLFEMP
S6SLFEMP
S7SLFEMP
S8SLFEMP
S9SLFEMP
S10SLFEMP
S11SLFEMP
S12SLFEMP
S13SLFEMP
S14SLFEMP
S15SLFEMP
/*-- S_SLFMEM   --*/
S1SLFMEM
S2SLFMEM
S3SLFMEM
S4SLFMEM
S5SLFMEM
S6SLFMEM
S7SLFMEM
S8SLFMEM
S9SLFMEM
S10SLFMEM
S11SLFMEM
S12SLFMEM
S13SLFMEM
/*-- S_SMOKEN   --*/
S1SMOKEN
S2SMOKEN
S3SMOKEN
S4SMOKEN
S5SMOKEN
S6SMOKEN
S7SMOKEN
S8SMOKEN
S9SMOKEN
S10SMOKEN
S11SMOKEN
S12SMOKEN
S13SMOKEN
S14SMOKEN
S15SMOKEN
/*-- S_SMOKEV   --*/
S1SMOKEV
S2SMOKEV
S3SMOKEV
S4SMOKEV
S5SMOKEV
S6SMOKEV
S7SMOKEV
S8SMOKEV
S9SMOKEV
S10SMOKEV
S11SMOKEV
S12SMOKEV
S13SMOKEV
S14SMOKEV
S15SMOKEV
/*-- S_SPCFAC   --*/
S2SPCFAC
S3SPCFAC
S4SPCFAC
S5SPCFAC
S6SPCFAC
S7SPCFAC
S8SPCFAC
S9SPCFAC
S10SPCFAC
S11SPCFAC
S12SPCFAC
S13SPCFAC
S14SPCFAC
S15SPCFAC
/*-- S_SSAPL   --*/
S2SSAPL
S3SSAPL
S4SSAPL
/*-- S_SSAPLM   --*/
S2SSAPLM
S3SSAPLM
S4SSAPLM
/*-- S_SSAPLY   --*/
S2SSAPLY
S3SSAPLY
S4SSAPLY
/*-- S_SSAPP   --*/
S2SSAPP
S3SSAPP
S4SSAPP
/*-- S_SSAPPM   --*/
S2SSAPPM
S3SSAPPM
S4SSAPPM
/*-- S_SSAPPY   --*/
S2SSAPPY
S3SSAPPY
S4SSAPPY
/*-- S_SSDEN   --*/
S2SSDEN
S3SSDEN
S4SSDEN
/*-- S_SSDI   --*/
S1SSDI
S2SSDI
S3SSDI
S4SSDI
S5SSDI
S6SSDI
S7SSDI
S8SSDI
S9SSDI
S10SSDI
S11SSDI
S12SSDI
S13SSDI
S14SSDI
S15SSDI
/*-- S_SSIAPL   --*/
S5SSIAPL
S6SSIAPL
S7SSIAPL
S8SSIAPL
S9SSIAPL
S10SSIAPL
S11SSIAPL
S12SSIAPL
S13SSIAPL
S14SSIAPL
S15SSIAPL
/*-- S_SSIAPLM   --*/
S5SSIAPLM
S6SSIAPLM
S7SSIAPLM
S8SSIAPLM
S9SSIAPLM
S10SSIAPLM
S11SSIAPLM
S12SSIAPLM
S13SSIAPLM
S14SSIAPLM
S15SSIAPLM
/*-- S_SSIAPLY   --*/
S5SSIAPLY
S6SSIAPLY
S7SSIAPLY
S8SSIAPLY
S9SSIAPLY
S10SSIAPLY
S11SSIAPLY
S12SSIAPLY
S13SSIAPLY
S14SSIAPLY
S15SSIAPLY
/*-- S_SSIAPP   --*/
S5SSIAPP
S6SSIAPP
S7SSIAPP
S8SSIAPP
S9SSIAPP
S10SSIAPP
S11SSIAPP
S12SSIAPP
S13SSIAPP
S14SSIAPP
S15SSIAPP
/*-- S_SSIAPPM   --*/
S5SSIAPPM
S6SSIAPPM
S7SSIAPPM
S8SSIAPPM
S9SSIAPPM
S10SSIAPPM
S11SSIAPPM
S12SSIAPPM
S13SSIAPPM
S14SSIAPPM
S15SSIAPPM
/*-- S_SSIAPPY   --*/
S5SSIAPPY
S6SSIAPPY
S7SSIAPPY
S8SSIAPPY
S9SSIAPPY
S10SSIAPPY
S11SSIAPPY
S12SSIAPPY
S13SSIAPPY
S14SSIAPPY
S15SSIAPPY
/*-- S_SSIDEN   --*/
S5SSIDEN
S6SSIDEN
S7SSIDEN
S8SSIDEN
S9SSIDEN
S10SSIDEN
S11SSIDEN
S12SSIDEN
S13SSIDEN
S14SSIDEN
S15SSIDEN
/*-- S_SSIREC   --*/
S5SSIREC
S6SSIREC
S7SSIREC
S8SSIREC
S9SSIREC
S10SSIREC
S11SSIREC
S12SSIREC
S13SSIREC
S14SSIREC
S15SSIREC
/*-- S_SSIRECM   --*/
S5SSIRECM
S6SSIRECM
S7SSIRECM
S8SSIRECM
S9SSIRECM
S10SSIRECM
S11SSIRECM
S12SSIRECM
S13SSIRECM
S14SSIRECM
S15SSIRECM
/*-- S_SSIRECY   --*/
S5SSIRECY
S6SSIRECY
S7SSIRECY
S8SSIRECY
S9SSIRECY
S10SSIRECY
S11SSIRECY
S12SSIRECY
S13SSIRECY
S14SSIRECY
S15SSIRECY
/*-- S_SSISTP   --*/
S5SSISTP
S6SSISTP
S7SSISTP
S8SSISTP
S9SSISTP
S10SSISTP
S11SSISTP
S12SSISTP
S13SSISTP
S14SSISTP
S15SSISTP
/*-- S_SSISTPM   --*/
S5SSISTPM
S6SSISTPM
S7SSISTPM
S8SSISTPM
S9SSISTPM
S10SSISTPM
S11SSISTPM
S12SSISTPM
S13SSISTPM
S14SSISTPM
S15SSISTPM
/*-- S_SSISTPY   --*/
S5SSISTPY
S6SSISTPY
S7SSISTPY
S8SSISTPY
S9SSISTPY
S10SSISTPY
S11SSISTPY
S12SSISTPY
S13SSISTPY
S14SSISTPY
S15SSISTPY
/*-- S_SSREC   --*/
S2SSREC
S3SSREC
S4SSREC
/*-- S_SSRECM   --*/
S2SSRECM
S3SSRECM
S4SSRECM
/*-- S_SSRECY   --*/
S2SSRECY
S3SSRECY
S4SSRECY
/*-- S_SSSTP   --*/
S2SSSTP
S3SSSTP
S4SSSTP
/*-- S_SSSTPM   --*/
S2SSSTPM
S3SSSTPM
S4SSSTPM
/*-- S_SSSTPY   --*/
S2SSSTPY
S3SSSTPY
S4SSSTPY
/*-- S_SSWRER   --*/
S1SSWRER
S4SSWRER
S7SSWRER
S10SSWRER
S13SSWRER
/*-- S_SSWRNR   --*/
S1SSWRNR
S4SSWRNR
S7SSWRNR
S10SSWRNR
S13SSWRNR
/*-- S_SSWRXA   --*/
S1SSWRXA
S4SSWRXA
S7SSWRXA
S10SSWRXA
S13SSWRXA
/*-- S_SSWSER   --*/
S10SSWSER
S13SSWSER
/*-- S_SSWSNR   --*/
S10SSWSNR
S13SSWSNR
/*-- S_SSWSXA   --*/
S10SSWSXA
S13SSWSXA
/*-- S_STATUS   --*/
S1STATUS
S2STATUS
S3STATUS
S4STATUS
S5STATUS
S6STATUS
S7STATUS
S8STATUS
S9STATUS
S10STATUS
S11STATUS
S12STATUS
S13STATUS
/*-- S1_STOOP   --*/
S1STOOP
/*-- S2_STOOP   --*/
S2STOOP
/*-- S_STOOP   --*/
S3STOOP
S4STOOP
S5STOOP
S6STOOP
S7STOOP
S8STOOP
S9STOOP
S10STOOP
S11STOOP
S12STOOP
S13STOOP
S14STOOP
S15STOOP
/*-- S_STOOPA   --*/
S2STOOPA
S3STOOPA
S4STOOPA
S5STOOPA
S6STOOPA
S7STOOPA
S8STOOPA
S9STOOPA
S10STOOPA
S11STOOPA
S12STOOPA
S13STOOPA
S14STOOPA
S15STOOPA
/*-- S_STOOPW   --*/
S1STOOPW
/*-- S_STROK   --*/
S1STROK
S2STROK
S3STROK
S4STROK
S5STROK
S6STROK
S7STROK
S8STROK
S9STROK
S10STROK
S11STROK
S12STROK
S13STROK
S14STROK
S15STROK
/*-- S_STROKE   --*/
S1STROKE
S2STROKE
S3STROKE
S4STROKE
S5STROKE
S6STROKE
S7STROKE
S8STROKE
S9STROKE
S10STROKE
S11STROKE
S12STROKE
S13STROKE
S14STROKE
S15STROKE
/*-- S_STROKEF   --*/
S1STROKEF
S2STROKEF
S3STROKEF
S4STROKEF
S5STROKEF
S6STROKEF
S7STROKEF
S8STROKEF
S9STROKEF
S10STROKEF
S11STROKEF
S12STROKEF
S13STROKEF
S14STROKEF
S15STROKEF
/*-- S_STROKF   --*/
S1STROKF
S2STROKF
S3STROKF
S4STROKF
S5STROKF
S6STROKF
S7STROKF
S8STROKF
S9STROKF
S10STROKF
S11STROKF
S12STROKF
S13STROKF
S14STROKF
S15STROKF
/*-- S_STROKQ   --*/
S1STROKQ
S2STROKQ
S3STROKQ
S4STROKQ
S5STROKQ
S6STROKQ
S7STROKQ
S8STROKQ
S9STROKQ
S10STROKQ
S11STROKQ
S12STROKQ
S13STROKQ
S14STROKQ
S15STROKQ
/*-- S_STROKS   --*/
S2STROKS
S3STROKS
S4STROKS
S5STROKS
S6STROKS
S7STROKS
S8STROKS
S9STROKS
S10STROKS
S11STROKS
S12STROKS
S13STROKS
S14STROKS
S15STROKS
/*-- S_TIMWLK   --*/
S8TIMWLK
S9TIMWLK
S10TIMWLK
S11TIMWLK
S12TIMWLK
S13TIMWLK
S14TIMWLK
/*-- S_TIMWLKA   --*/
S8TIMWLKA
S9TIMWLKA
S10TIMWLKA
S11TIMWLKA
S12TIMWLKA
S13TIMWLKA
S14TIMWLKA
/*-- S_TLIPRM   --*/
S1TLIPRM
S2TLIPRM
S3TLIPRM
/*-- S2_TOILT   --*/
S2TOILT
/*-- S_TOILT   --*/
S3TOILT
S4TOILT
S5TOILT
S6TOILT
S7TOILT
S8TOILT
S9TOILT
S10TOILT
S11TOILT
S12TOILT
S13TOILT
S14TOILT
S15TOILT
/*-- S_TOILTA   --*/
S2TOILTA
S3TOILTA
S4TOILTA
S5TOILTA
S6TOILTA
S7TOILTA
S8TOILTA
S9TOILTA
S10TOILTA
S11TOILTA
S12TOILTA
S13TOILTA
S14TOILTA
S15TOILTA
/*-- S2_TOILTH   --*/
S2TOILTH
/*-- S_TOILTH   --*/
S3TOILTH
S4TOILTH
S5TOILTH
S6TOILTH
S7TOILTH
S8TOILTH
S9TOILTH
S10TOILTH
S11TOILTH
S12TOILTH
S13TOILTH
S14TOILTH
S15TOILTH
/*-- S_TOTMBF   --*/
S3TOTMBF
S4TOTMBF
S5TOTMBF
S6TOTMBF
/*-- S_TOTMBI   --*/
S3TOTMBI
S4TOTMBI
S5TOTMBI
S6TOTMBI
/*-- S_TOTMD   --*/
S3TOTMD
/*-- S_TOTMDF   --*/
S3TOTMDF
/*-- S_TR20   --*/
S3TR20
S4TR20
S5TR20
S6TR20
S7TR20
S8TR20
S9TR20
S10TR20
S11TR20
S12TR20
S13TR20
/*-- S_TR40   --*/
S1TR40
/*-- S_TYLTC   --*/
S2TYLTC
S3TYLTC
S4TYLTC
S5TYLTC
S6TYLTC
S7TYLTC
S8TYLTC
S9TYLTC
S10TYLTC
S11TYLTC
S12TYLTC
S13TYLTC
S14TYLTC
S15TYLTC
/*-- S_ULCER   --*/
S1ULCER
S2ULCER
/*-- S_UNEMP   --*/
S1UNEMP
S2UNEMP
S3UNEMP
S4UNEMP
S5UNEMP
S6UNEMP
S7UNEMP
S8UNEMP
S9UNEMP
S10UNEMP
S11UNEMP
S12UNEMP
S13UNEMP
S14UNEMP
S15UNEMP
/*-- S_UNION   --*/
S1UNION
S2UNION
S3UNION
S4UNION
S5UNION
S6UNION
S7UNION
S8UNION
S9UNION
S10UNION
S11UNION
S12UNION
S13UNION
S14UNION
S15UNION
/*-- S_UNIONF   --*/
S2UNIONF
S3UNIONF
S4UNIONF
S5UNIONF
S6UNIONF
S7UNIONF
S8UNIONF
S9UNIONF
S10UNIONF
S11UNIONF
S12UNIONF
S13UNIONF
S14UNIONF
S15UNIONF
/*-- S_VETRN   --*/
S1VETRN
S2VETRN
S3VETRN
S4VETRN
S5VETRN
S6VETRN
S7VETRN
S8VETRN
S9VETRN
S10VETRN
S11VETRN
S12VETRN
S13VETRN
S14VETRN
S15VETRN
/*-- S_VGACTF   --*/
S1VGACTF
/*-- S_VGACTN   --*/
S2VGACTN
/*-- S_VGACTP   --*/
S2VGACTP
/*-- S_VGACTX   --*/
S7VGACTX
S8VGACTX
S9VGACTX
S10VGACTX
S11VGACTX
S12VGACTX
S13VGACTX
S14VGACTX
S15VGACTX
/*-- S_VIGACT   --*/
S1VIGACT
S2VIGACT
S3VIGACT
S4VIGACT
S5VIGACT
S6VIGACT
/*-- S_VOCAB   --*/
S3VOCAB
S4VOCAB
S5VOCAB
S6VOCAB
S7VOCAB
S8VOCAB
S9VOCAB
S10VOCAB
S11VOCAB
S12VOCAB
S13VOCAB
/*-- S_VP   --*/
S2VP
S3VP
S4VP
S5VP
S6VP
S7VP
S8VP
S9VP
S10VP
S11VP
S12VP
S13VP
/*-- S1_WALK1   --*/
S1WALK1
/*-- S2_WALK1   --*/
S2WALK1
/*-- S_WALK1   --*/
S3WALK1
S4WALK1
S5WALK1
S6WALK1
S7WALK1
S8WALK1
S9WALK1
S10WALK1
S11WALK1
S12WALK1
S13WALK1
S14WALK1
S15WALK1
/*-- S_WALK1A   --*/
S2WALK1A
S3WALK1A
S4WALK1A
S5WALK1A
S6WALK1A
S7WALK1A
S8WALK1A
S9WALK1A
S10WALK1A
S11WALK1A
S12WALK1A
S13WALK1A
S14WALK1A
S15WALK1A
/*-- S_WALK1W   --*/
S1WALK1W
/*-- S1_WALKR   --*/
S1WALKR
/*-- S2_WALKR   --*/
S2WALKR
/*-- S_WALKR   --*/
S3WALKR
S4WALKR
S5WALKR
S6WALKR
S7WALKR
S8WALKR
S9WALKR
S10WALKR
S11WALKR
S12WALKR
S13WALKR
S14WALKR
S15WALKR
/*-- S_WALKRA   --*/
S2WALKRA
S3WALKRA
S4WALKRA
S5WALKRA
S6WALKRA
S7WALKRA
S8WALKRA
S9WALKRA
S10WALKRA
S11WALKRA
S12WALKRA
S13WALKRA
S14WALKRA
S15WALKRA
/*-- S_WALKRE   --*/
S2WALKRE
S3WALKRE
S4WALKRE
S5WALKRE
S6WALKRE
S7WALKRE
S8WALKRE
S9WALKRE
S10WALKRE
S11WALKRE
S12WALKRE
S13WALKRE
S14WALKRE
S15WALKRE
/*-- S2_WALKRH   --*/
S2WALKRH
/*-- S_WALKRH   --*/
S3WALKRH
S4WALKRH
S5WALKRH
S6WALKRH
S7WALKRH
S8WALKRH
S9WALKRH
S10WALKRH
S11WALKRH
S12WALKRH
S13WALKRH
S14WALKRH
S15WALKRH
/*-- S_WALKRW   --*/
S1WALKRW
/*-- S1_WALKS   --*/
S1WALKS
/*-- S2_WALKS   --*/
S2WALKS
/*-- S_WALKS   --*/
S3WALKS
S4WALKS
S5WALKS
S6WALKS
S7WALKS
S8WALKS
S9WALKS
S10WALKS
S11WALKS
S12WALKS
S13WALKS
S14WALKS
S15WALKS
/*-- S_WALKSA   --*/
S2WALKSA
S3WALKSA
S4WALKSA
S5WALKSA
S6WALKSA
S7WALKSA
S8WALKSA
S9WALKSA
S10WALKSA
S11WALKSA
S12WALKSA
S13WALKSA
S14WALKSA
S15WALKSA
/*-- S_WALKSW   --*/
S1WALKSW
/*-- S_WANDER   --*/
S2WANDER
S3WANDER
S4WANDER
S5WANDER
S6WANDER
S7WANDER
S8WANDER
S9WANDER
S10WANDER
S11WANDER
S12WANDER
S13WANDER
S14WANDER
S15WANDER
/*-- S_WEIGHT   --*/
S1WEIGHT
S2WEIGHT
S3WEIGHT
S4WEIGHT
S5WEIGHT
S6WEIGHT
S7WEIGHT
S8WEIGHT
S9WEIGHT
S10WEIGHT
S11WEIGHT
S12WEIGHT
S13WEIGHT
S14WEIGHT
S15WEIGHT
/*-- S_WGFHR   --*/
S1WGFHR
S2WGFHR
S3WGFHR
S4WGFHR
S5WGFHR
S6WGFHR
S7WGFHR
S8WGFHR
S9WGFHR
S10WGFHR
S11WGFHR
S12WGFHR
S13WGFHR
S14WGFHR
S15WGFHR
/*-- S_WGFWK   --*/
S1WGFWK
S2WGFWK
S3WGFWK
S4WGFWK
S5WGFWK
S6WGFWK
S7WGFWK
S8WGFWK
S9WGFWK
S10WGFWK
S11WGFWK
S12WGFWK
S13WGFWK
S14WGFWK
S15WGFWK
/*-- S_WGIHR   --*/
S1WGIHR
S2WGIHR
S3WGIHR
S4WGIHR
S5WGIHR
S6WGIHR
S7WGIHR
S8WGIHR
S9WGIHR
S10WGIHR
S11WGIHR
S12WGIHR
S13WGIHR
S14WGIHR
S15WGIHR
/*-- S_WGIWK   --*/
S1WGIWK
S2WGIWK
S3WGIWK
S4WGIWK
S5WGIWK
S6WGIWK
S7WGIWK
S8WGIWK
S9WGIWK
S10WGIWK
S11WGIWK
S12WGIWK
S13WGIWK
S14WGIWK
S15WGIWK
/*-- S_WHAPPX   --*/
S1WHAPPX
/*-- S_WHAPPY   --*/
S2WHAPPY
S3WHAPPY
S4WHAPPY
S5WHAPPY
S6WHAPPY
S7WHAPPY
S8WHAPPY
S9WHAPPY
S10WHAPPY
S11WHAPPY
S12WHAPPY
S13WHAPPY
S14WHAPPY
S15WHAPPY
/*-- S_WLIPRM   --*/
S1WLIPRM
S2WLIPRM
S3WLIPRM
S5WLIPRM
S6WLIPRM
S7WLIPRM
S8WLIPRM
S9WLIPRM
S10WLIPRM
S11WLIPRM
S12WLIPRM
S13WLIPRM
S14WLIPRM
S15WLIPRM
/*-- S_WORK   --*/
S1WORK
S2WORK
S3WORK
S4WORK
S5WORK
S6WORK
S7WORK
S8WORK
S9WORK
S10WORK
S11WORK
S12WORK
S13WORK
S14WORK
S15WORK
/*-- S_WORK2   --*/
S1WORK2
S2WORK2
S3WORK2
S4WORK2
S5WORK2
S6WORK2
S7WORK2
S8WORK2
S9WORK2
S10WORK2
S11WORK2
S12WORK2
S13WORK2
S14WORK2
S15WORK2
/*-- S_WORK62   --*/
S1WORK62
S2WORK62
S3WORK62
S4WORK62
S5WORK62
S6WORK62
S7WORK62
S8WORK62
S9WORK62
S10WORK62
S11WORK62
S12WORK62
S13WORK62
S14WORK62
S15WORK62
/*-- S_WORK62F   --*/
S2WORK62F
S3WORK62F
S4WORK62F
S5WORK62F
S6WORK62F
S7WORK62F
S8WORK62F
S9WORK62F
S10WORK62F
S11WORK62F
S12WORK62F
S13WORK62F
S14WORK62F
S15WORK62F
/*-- S_WORK65   --*/
S1WORK65
S2WORK65
S3WORK65
S4WORK65
S5WORK65
S6WORK65
S7WORK65
S8WORK65
S9WORK65
S10WORK65
S11WORK65
S12WORK65
S13WORK65
S14WORK65
S15WORK65
/*-- S_WORK65F   --*/
S2WORK65F
S3WORK65F
S4WORK65F
S5WORK65F
S6WORK65F
S7WORK65F
S8WORK65F
S9WORK65F
S10WORK65F
S11WORK65F
S12WORK65F
S13WORK65F
S14WORK65F
S15WORK65F
/*-- S_WORK70   --*/
S11WORK70
S12WORK70
S13WORK70
S14WORK70
S15WORK70
/*-- S_WORK70A   --*/
S11WORK70A
S12WORK70A
S13WORK70A
S14WORK70A
S15WORK70A
/*-- S_WORK70AF   --*/
S11WORK70AF
S12WORK70AF
S13WORK70AF
S14WORK70AF
S15WORK70AF
/*-- S_WORK70F   --*/
S11WORK70F
S12WORK70F
S13WORK70F
S14WORK70F
S15WORK70F
/*-- S_WORKLM   --*/
S1WORKLM
S2WORKLM
S3WORKLM
S4WORKLM
S5WORKLM
S6WORKLM
/*-- S_WTCRNH   --*/
S1WTCRNH
S2WTCRNH
S3WTCRNH
S4WTCRNH
S5WTCRNH
S6WTCRNH
S7WTCRNH
S8WTCRNH
S9WTCRNH
S10WTCRNH
S11WTCRNH
S12WTCRNH
S13WTCRNH
S14WTCRNH
/*-- S_WTRESP   --*/
S1WTRESP
S2WTRESP
S3WTRESP
S4WTRESP
S5WTRESP
S6WTRESP
S7WTRESP
S8WTRESP
S9WTRESP
S10WTRESP
S11WTRESP
S12WTRESP
S13WTRESP
S14WTRESP
/*-- S_WTR_NH   --*/
S5WTR_NH
S6WTR_NH
S7WTR_NH
S8WTR_NH
S9WTR_NH
S10WTR_NH
S11WTR_NH
S12WTR_NH
S13WTR_NH
S14WTR_NH
/*-- S_YR   --*/
S2YR
S3YR
S4YR
S5YR
S6YR
S7YR
S8YR
S9YR
S10YR
S11YR
S12YR
S13YR
%mend readvar2_list;

/* Macro `process_data for `SLong` */
%macro process_data /*  -- Macro statement  */ ;
%put --- Slong table ;
%initvars ;
%put ---- Slong table ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
/* --- RAND variable:HHIDPN  included */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
/* --- RAND variable:HACOHORT  included */ ;
WAVE_NUMBER=1 ;
WAVE_NAME=  'hrs_wave'||strip(put(wave_number,3.))     /* --- Derived variable  */ ;
studyyr= hrs_studyyr(wave_number,
hacohort)     /* --- Derived variable  */ ;
CYEAR='yr1992' ;
H_HHID=H1HHID ;
H_HHIDC=H1HHIDC ;
SUBHH= substr(H_HHIDC,7)     /* --- Derived variable  */ ;
INW=INW1 ;
S_HHIDPN=S1HHIDPN ;
/* --- RAND variable:SASSAGEB  included */ ;
/* --- RAND variable:SASSAGEM  included */ ;
/* --- RAND variable:SASSRECV  included */ ;
/* Empty map cell for: S_ACGTOT      variable wave =  1*/ ;
/* Empty map cell for: S_ADL5A       variable wave =  1*/ ;
/* Empty map cell for: S_ADL5H       variable wave =  1*/ ;
/* Empty map cell for: S_ADL6A       variable wave =  1*/ ;
/* Empty map cell for: S_ADL6H       variable wave =  1*/ ;
/* Empty map cell for: S_ADLR10      variable wave =  1*/ ;
S_ADLW=S1ADLW ;
S_AGEM_B=S1AGEM_B ;
S_AGEM_E=S1AGEM_E ;
S_AGEM_M=S1AGEM_M ;
S_AGEY_B=S1AGEY_B ;
S_AGEY_E=S1AGEY_E ;
S_AGEY_M=S1AGEY_M ;
S_AHDSMP=S1AHDSMP ;
/* Empty map cell for: S_AIMR10      variable wave =  1*/ ;
/* Empty map cell for: S_ALONE       variable wave =  1*/ ;
/* Empty map cell for: S_ALZHE       variable wave =  1*/ ;
/* Empty map cell for: S_ALZHEE      variable wave =  1*/ ;
/* Empty map cell for: S_ALZHEEF     variable wave =  1*/ ;
/* Empty map cell for: S_ALZHEF      variable wave =  1*/ ;
/* Empty map cell for: S_ALZHEQ      variable wave =  1*/ ;
/* Empty map cell for: S_ALZHES      variable wave =  1*/ ;
/* Empty map cell for: S_AMSTOT      variable wave =  1*/ ;
/* Empty map cell for: S_ANS3PQ      variable wave =  1*/ ;
S1_ARMS=S1ARMS ;
/* Empty map cell for: S2_ARMS       variable wave =  1*/ ;
/* Empty map cell for: S_ARMS        variable wave =  1*/ ;
/* Empty map cell for: S_ARMSA       variable wave =  1*/ ;
S_ARMSW=S1ARMSW ;
S_ARTHR=S1ARTHR ;
S_ARTHRE=S1ARTHRE ;
S_ARTHREF=S1ARTHREF ;
S_ARTHRF=S1ARTHRF ;
S_ARTHRQ=S1ARTHRQ ;
/* Empty map cell for: S_ARTHRS      variable wave =  1*/ ;
/* Empty map cell for: S_ATR20       variable wave =  1*/ ;
S_BACK=S1BACK ;
/* Empty map cell for: S_BALFUL      variable wave =  1*/ ;
/* Empty map cell for: S_BALFULC     variable wave =  1*/ ;
/* Empty map cell for: S_BALFULT     variable wave =  1*/ ;
/* Empty map cell for: S_BALSBS      variable wave =  1*/ ;
/* Empty map cell for: S_BALSBSC     variable wave =  1*/ ;
/* Empty map cell for: S_BALSEMI     variable wave =  1*/ ;
/* Empty map cell for: S_BALSEMIC    variable wave =  1*/ ;
S1_BATH=S1BATH ;
/* Empty map cell for: S2_BATH       variable wave =  1*/ ;
/* Empty map cell for: S_BATH        variable wave =  1*/ ;
/* Empty map cell for: S_BATHA       variable wave =  1*/ ;
/* Empty map cell for: S2_BATHH      variable wave =  1*/ ;
/* Empty map cell for: S_BATHH       variable wave =  1*/ ;
S_BATHW=S1BATHW ;
S_BDATE=S1BDATE ;
S1_BED=S1BED ;
/* Empty map cell for: S2_BED        variable wave =  1*/ ;
/* Empty map cell for: S_BED         variable wave =  1*/ ;
/* Empty map cell for: S_BEDA        variable wave =  1*/ ;
/* Empty map cell for: S_BEDE        variable wave =  1*/ ;
/* Empty map cell for: S2_BEDH       variable wave =  1*/ ;
/* Empty map cell for: S_BEDH        variable wave =  1*/ ;
S_BEDW=S1BEDW ;
/* Empty map cell for: S_BEQ100      variable wave =  1*/ ;
/* Empty map cell for: S_BEQ10K      variable wave =  1*/ ;
/* Empty map cell for: S_BEQ500      variable wave =  1*/ ;
/* Empty map cell for: S_BEQANY      variable wave =  1*/ ;
S_BEQLRG=S1BEQLRG ;
S_BFLAG=S1BFLAG ;
S_BMI=S1BMI ;
S_BMONTH=S1BMONTH ;
/* Empty map cell for: S_BPDIA       variable wave =  1*/ ;
S_BPLACE=S1BPLACE ;
S_BPLACF=S1BPLACF ;
/* Empty map cell for: S_BPPOS       variable wave =  1*/ ;
/* Empty map cell for: S_BPPULS      variable wave =  1*/ ;
/* Empty map cell for: S_BPSYS       variable wave =  1*/ ;
/* Empty map cell for: S_BREAST      variable wave =  1*/ ;
/* Empty map cell for: S_BWC20       variable wave =  1*/ ;
/* Empty map cell for: S_BWC86       variable wave =  1*/ ;
S_BYEAR=S1BYEAR ;
/* Empty map cell for: S_CACT        variable wave =  1*/ ;
S1_CALC=S1CALC ;
/* Empty map cell for: S2_CALC       variable wave =  1*/ ;
/* Empty map cell for: S_CALCA       variable wave =  1*/ ;
S_CALCW=S1CALCW ;
S_CANCR=S1CANCR ;
S_CANCRE=S1CANCRE ;
S_CANCREF=S1CANCREF ;
S_CANCRF=S1CANCRF ;
S_CANCRQ=S1CANCRQ ;
/* Empty map cell for: S_CANCRS      variable wave =  1*/ ;
S_CENDIV=S1CENDIV ;
S_CENREG=S1CENREG ;
/* Empty map cell for: S_CESD        variable wave =  1*/ ;
S_CESDM=S1CESDM ;
S1_CHAIR=S1CHAIR ;
/* Empty map cell for: S2_CHAIR      variable wave =  1*/ ;
/* Empty map cell for: S_CHAIR       variable wave =  1*/ ;
/* Empty map cell for: S_CHAIRA      variable wave =  1*/ ;
S_CHAIRW=S1CHAIRW ;
/* Empty map cell for: S_CHOLST      variable wave =  1*/ ;
S_CLAIMED=S1CLAIMED ;
S1_CLIM1=S1CLIM1 ;
/* Empty map cell for: S2_CLIM1      variable wave =  1*/ ;
/* Empty map cell for: S_CLIM1       variable wave =  1*/ ;
/* Empty map cell for: S_CLIM1A      variable wave =  1*/ ;
S_CLIM1W=S1CLIM1W ;
S1_CLIMS=S1CLIMS ;
/* Empty map cell for: S2_CLIMS      variable wave =  1*/ ;
/* Empty map cell for: S_CLIMS       variable wave =  1*/ ;
/* Empty map cell for: S_CLIMSA      variable wave =  1*/ ;
S_CLIMSW=S1CLIMSW ;
/* Empty map cell for: S_COGTOT      variable wave =  1*/ ;
S_COHBYR=S1COHBYR ;
S_COHORT=S1COHORT ;
S_COMP=S1COMP ;
S_COMPW=S1COMPW ;
S_CONDE=S1CONDE ;
S_CONDEF=S1CONDEF ;
/* Empty map cell for: S_CONDS       variable wave =  1*/ ;
/* Empty map cell for: S_CONDSF      variable wave =  1*/ ;
/* Empty map cell for: S_CONDSP      variable wave =  1*/ ;
S_COVR=S1COVR ;
S_COVRT=S1COVRT ;
S_COVS=S1COVS ;
S_DADAGE=S1DADAGE ;
S_DADLIV=S1DADLIV ;
S_DAGE_M=S1DAGE_M ;
S_DAGE_Y=S1DAGE_Y ;
S_DCBAL1=S1DCBAL1 ;
S_DCBAL2=S1DCBAL2 ;
S_DCBAL3=S1DCBAL3 ;
/* Empty map cell for: S_DCBAL4      variable wave =  1*/ ;
S_DCBENE1=S1DCBENE1 ;
S_DCBENE2=S1DCBENE2 ;
S_DCBENE3=S1DCBENE3 ;
/* Empty map cell for: S_DCBENE4     variable wave =  1*/ ;
S_DCCONT1=S1DCCONT1 ;
S_DCCONT2=S1DCCONT2 ;
S_DCCONT3=S1DCCONT3 ;
/* Empty map cell for: S_DCCONT4     variable wave =  1*/ ;
S_DCMODE1=S1DCMODE1 ;
S_DCMODE2=S1DCMODE2 ;
S_DCMODE3=S1DCMODE3 ;
/* Empty map cell for: S_DCMODE4     variable wave =  1*/ ;
S_DCPCT1=S1DCPCT1 ;
S_DCPCT2=S1DCPCT2 ;
S_DCPCT3=S1DCPCT3 ;
/* Empty map cell for: S_DCPCT4      variable wave =  1*/ ;
S_DDATE=S1DDATE ;
/* Empty map cell for: S_DEMEN       variable wave =  1*/ ;
/* Empty map cell for: S_DEMENE      variable wave =  1*/ ;
/* Empty map cell for: S_DEMENEF     variable wave =  1*/ ;
/* Empty map cell for: S_DEMENF      variable wave =  1*/ ;
/* Empty map cell for: S_DEMENQ      variable wave =  1*/ ;
/* Empty map cell for: S_DEMENS      variable wave =  1*/ ;
/* Empty map cell for: S_DENTST      variable wave =  1*/ ;
/* Empty map cell for: S_DEPRES      variable wave =  1*/ ;
S_DEPREX=S1DEPREX ;
S_DIAB=S1DIAB ;
S_DIABE=S1DIABE ;
S_DIABEF=S1DIABEF ;
S_DIABF=S1DIABF ;
S_DIABQ=S1DIABQ ;
/* Empty map cell for: S_DIABS       variable wave =  1*/ ;
S1_DIME=S1DIME ;
/* Empty map cell for: S2_DIME       variable wave =  1*/ ;
/* Empty map cell for: S_DIME        variable wave =  1*/ ;
/* Empty map cell for: S_DIMEA       variable wave =  1*/ ;
S_DIMEW=S1DIMEW ;
/* Empty map cell for: S_DLRC        variable wave =  1*/ ;
S_DLRC20=S1DLRC20 ;
S_DMONTH=S1DMONTH ;
S_DOCTIM=S1DOCTIM ;
S_DOCTOR=S1DOCTOR ;
S1_DRESS=S1DRESS ;
/* Empty map cell for: S2_DRESS      variable wave =  1*/ ;
/* Empty map cell for: S_DRESS       variable wave =  1*/ ;
/* Empty map cell for: S_DRESSA      variable wave =  1*/ ;
/* Empty map cell for: S2_DRESSH     variable wave =  1*/ ;
/* Empty map cell for: S_DRESSH      variable wave =  1*/ ;
S_DRESSW=S1DRESSW ;
S_DRINK=S1DRINK ;
/* Empty map cell for: S_DRINKD      variable wave =  1*/ ;
/* Empty map cell for: S_DRINKN      variable wave =  1*/ ;
S_DRINKR=S1DRINKR ;
/* Empty map cell for: S_DRUGS       variable wave =  1*/ ;
/* Empty map cell for: S_DSIAMT      variable wave =  1*/ ;
S_DSRC=S1DSRC ;
/* Empty map cell for: S_DSSAMT      variable wave =  1*/ ;
S_DSTAT=S1DSTAT ;
S_DTIMTDTH=S1DTIMTDTH ;
/* Empty map cell for: S_DW          variable wave =  1*/ ;
/* Empty map cell for: S_DY          variable wave =  1*/ ;
S_DYEAR=S1DYEAR ;
S1_EAT=S1EAT ;
/* Empty map cell for: S2_EAT        variable wave =  1*/ ;
/* Empty map cell for: S_EAT         variable wave =  1*/ ;
/* Empty map cell for: S_EATA        variable wave =  1*/ ;
/* Empty map cell for: S2_EATH       variable wave =  1*/ ;
/* Empty map cell for: S_EATH        variable wave =  1*/ ;
S_EATW=S1EATW ;
S_EDEGRM=S1EDEGRM ;
S_EDUC=S1EDUC ;
S_EDYRS=S1EDYRS ;
/* Empty map cell for: S_EFFORT      variable wave =  1*/ ;
S_EFFORX=S1EFFORX ;
/* Empty map cell for: S_ENLIFE      variable wave =  1*/ ;
S_ENLIFX=S1ENLIFX ;
S_EVBRN=S1EVBRN ;
S_EVBRNF=S1EVBRNF ;
S_FAMR=S1FAMR ;
/* Empty map cell for: S_FBWC20      variable wave =  1*/ ;
/* Empty map cell for: S_FBWC86      variable wave =  1*/ ;
/* Empty map cell for: S_FCACT       variable wave =  1*/ ;
S_FDLRC=S1FDLRC ;
/* Empty map cell for: S_FDW         variable wave =  1*/ ;
/* Empty map cell for: S_FDY         variable wave =  1*/ ;
S_FEDUC=S1FEDUC ;
S_FIMRC=S1FIMRC ;
/* Empty map cell for: S_FINEA       variable wave =  1*/ ;
S_FINPLN=S1FINPLN ;
S_FINR=S1FINR ;
/* Empty map cell for: S_FLAG        variable wave =  1*/ ;
/* Empty map cell for: S_FLONE       variable wave =  1*/ ;
S_FLONEX=S1FLONEX ;
/* Empty map cell for: S_FLUSHT      variable wave =  1*/ ;
/* Empty map cell for: S_FMO         variable wave =  1*/ ;
/* Empty map cell for: S_FPRES       variable wave =  1*/ ;
S_FPSTME=S1FPSTME ;
/* Empty map cell for: S_FSAD        variable wave =  1*/ ;
S_FSADX=S1FSADX ;
/* Empty map cell for: S_FSCIS       variable wave =  1*/ ;
/* Empty map cell for: S_FSER7       variable wave =  1*/ ;
S_FSIZE=S1FSIZE ;
/* Empty map cell for: S_FSIZEF      variable wave =  1*/ ;
S_FSLFME=S1FSLFME ;
/* Empty map cell for: S_FVOCAB      variable wave =  1*/ ;
/* Empty map cell for: S_FVP         variable wave =  1*/ ;
/* Empty map cell for: S_FYR         variable wave =  1*/ ;
S_GENDER=S1GENDER ;
/* Empty map cell for: S_GOING       variable wave =  1*/ ;
S_GOINGX=S1GOINGX ;
S_GOVMD=S1GOVMD ;
S_GOVMR=S1GOVMR ;
S_GOVOT=S1GOVOT ;
S_GOVVA=S1GOVVA ;
/* Empty map cell for: S_GROSSA      variable wave =  1*/ ;
/* Empty map cell for: S_GRP         variable wave =  1*/ ;
/* Empty map cell for: S_GRPDOM      variable wave =  1*/ ;
/* Empty map cell for: S_GRPL        variable wave =  1*/ ;
/* Empty map cell for: S_GRPPOS      variable wave =  1*/ ;
/* Empty map cell for: S_GRPR        variable wave =  1*/ ;
/* Empty map cell for: S_HALUC       variable wave =  1*/ ;
/* Empty map cell for: S_HDLR20      variable wave =  1*/ ;
S_HEART=S1HEART ;
S_HEARTE=S1HEARTE ;
S_HEARTEF=S1HEARTEF ;
S_HEARTF=S1HEARTF ;
S_HEARTQ=S1HEARTQ ;
/* Empty map cell for: S_HEARTS      variable wave =  1*/ ;
S_HECOV1=S1HECOV1 ;
S_HECOV2=S1HECOV2 ;
/* Empty map cell for: S_HECOV3      variable wave =  1*/ ;
S_HEIGHT=S1HEIGHT ;
S_HENUM=S1HENUM ;
S_HERET=S1HERET ;
S_HERTR1=S1HERTR1 ;
S_HERTR2=S1HERTR2 ;
/* Empty map cell for: S_HERTR3      variable wave =  1*/ ;
S_HERTS1=S1HERTS1 ;
S_HERTS2=S1HERTS2 ;
/* Empty map cell for: S_HERTS3      variable wave =  1*/ ;
S_HESRC1=S1HESRC1 ;
S_HESRC2=S1HESRC2 ;
/* Empty map cell for: S_HESRC3      variable wave =  1*/ ;
S_HHIDPN=S1HHIDPN ;
S_HIBP=S1HIBP ;
S_HIBPE=S1HIBPE ;
S_HIBPEF=S1HIBPEF ;
S_HIBPF=S1HIBPF ;
S_HIBPQ=S1HIBPQ ;
/* Empty map cell for: S_HIBPS       variable wave =  1*/ ;
S_HIGOV=S1HIGOV ;
S_HILTC=S1HILTC ;
/* Empty map cell for: S_HIMR20      variable wave =  1*/ ;
S_HIOTHP=S1HIOTHP ;
S_HISPAN=S1HISPAN ;
/* Empty map cell for: S_HLPDYSF     variable wave =  1*/ ;
/* Empty map cell for: S_HLPDYSNF    variable wave =  1*/ ;
/* Empty map cell for: S_HLPDYSP     variable wave =  1*/ ;
/* Empty map cell for: S_HLPDYST     variable wave =  1*/ ;
/* Empty map cell for: S_HLPDYSU     variable wave =  1*/ ;
/* Empty map cell for: S_HLPHRSF     variable wave =  1*/ ;
/* Empty map cell for: S_HLPHRSNF    variable wave =  1*/ ;
/* Empty map cell for: S_HLPHRSP     variable wave =  1*/ ;
/* Empty map cell for: S_HLPHRST     variable wave =  1*/ ;
/* Empty map cell for: S_HLPHRSU     variable wave =  1*/ ;
/* Empty map cell for: S_HLPPDFA     variable wave =  1*/ ;
/* Empty map cell for: S_HLPPDFN     variable wave =  1*/ ;
/* Empty map cell for: S_HLPPDNFA    variable wave =  1*/ ;
/* Empty map cell for: S_HLPPDNFN    variable wave =  1*/ ;
/* Empty map cell for: S_HLPPDTA     variable wave =  1*/ ;
/* Empty map cell for: S_HLPPDTN     variable wave =  1*/ ;
/* Empty map cell for: S_HLPRFN      variable wave =  1*/ ;
/* Empty map cell for: S_HLPRNFN     variable wave =  1*/ ;
/* Empty map cell for: S_HLPRPN      variable wave =  1*/ ;
/* Empty map cell for: S_HLPRTN      variable wave =  1*/ ;
/* Empty map cell for: S_HLPRUN      variable wave =  1*/ ;
S_HLTC3=S1HLTC3 ;
S_HLTC5=S1HLTC5 ;
/* Empty map cell for: S_HLTC5F      variable wave =  1*/ ;
S_HLTHLM=S1HLTHLM ;
S_HOMCAR=S1HOMCAR ;
S_HOSP=S1HOSP ;
S_HRSAMP=S1HRSAMP ;
S_HSPNIT=S1HSPNIT ;
S_HSPTIM=S1HSPTIM ;
S_HSWRKF=S1HSWRKF ;
/* Empty map cell for: S_HTR40       variable wave =  1*/ ;
/* Empty map cell for: S_IADL5A      variable wave =  1*/ ;
/* Empty map cell for: S_IADL5H      variable wave =  1*/ ;
S_IANN=S1IANN ;
S_IEARN=S1IEARN ;
S_IFANN=S1IFANN ;
S_IFEARN=S1IFEARN ;
S_IFGXFR=S1IFGXFR ;
/* Empty map cell for: S_IFIRAW      variable wave =  1*/ ;
/* Empty map cell for: S_IFIRAWY1    variable wave =  1*/ ;
S_IFPEN=S1IFPEN ;
S_IFPENA=S1IFPENA ;
S_IFSDI=S1IFSDI ;
S_IFSRET=S1IFSRET ;
S1_IFSSDI=S1IFSSDI ;
/* Empty map cell for: S_IFSSDI      variable wave =  1*/ ;
S_IFSSI=S1IFSSI ;
S_IFUNEM=S1IFUNEM ;
S1_IFUNWC=S1IFUNWC ;
/* Empty map cell for: S2_IFUNWC     variable wave =  1*/ ;
S_IFWCMP=S1IFWCMP ;
S_IGXFR=S1IGXFR ;
/* Empty map cell for: S_IIRAW       variable wave =  1*/ ;
/* Empty map cell for: S_IIRAWY1     variable wave =  1*/ ;
/* Empty map cell for: S_IMRC        variable wave =  1*/ ;
S_IMRC20=S1IMRC20 ;
/* Empty map cell for: S_INHER       variable wave =  1*/ ;
/* Empty map cell for: S_INHPE       variable wave =  1*/ ;
/* Empty map cell for: S_INHPFN      variable wave =  1*/ ;
/* Empty map cell for: S_INHPNFN     variable wave =  1*/ ;
/* Empty map cell for: S_INHPPN      variable wave =  1*/ ;
/* Empty map cell for: S_INHPTN      variable wave =  1*/ ;
/* Empty map cell for: S_INHPUN      variable wave =  1*/ ;
S_INLBRF=S1INLBRF ;
S_IPEN=S1IPEN ;
S_IPENA=S1IPENA ;
S_ISDI=S1ISDI ;
S_ISRET=S1ISRET ;
S_ISSDI=S1ISSDI ;
S_ISSI=S1ISSI ;
S_IUNEM=S1IUNEM ;
S_IUNWC=S1IUNWC ;
S_IWBEG=S1IWBEG ;
S_IWBEGF=S1IWBEGF ;
S_IWCMP=S1IWCMP ;
S_IWEND=S1IWEND ;
S_IWENDF=S1IWENDF ;
S_IWENDM=S1IWENDM ;
S_IWENDY=S1IWENDY ;
S_IWMID=S1IWMID ;
S_IWMIDF=S1IWMIDF ;
S_IWSTAT=S1IWSTAT ;
S_JCIND=S1JCIND ;
/* Empty map cell for: S_JCINDB      variable wave =  1*/ ;
/* Empty map cell for: S_JCINDC      variable wave =  1*/ ;
S_JCOCC=S1JCOCC ;
/* Empty map cell for: S_JCOCCA      variable wave =  1*/ ;
/* Empty map cell for: S_JCOCCB      variable wave =  1*/ ;
/* Empty map cell for: S_JCOCCC      variable wave =  1*/ ;
S_JCPEN=S1JCPEN ;
S_JCPENF=S1JCPENF ;
S_JCTEN=S1JCTEN ;
S_JHOUR2=S1JHOUR2 ;
S_JHOURS=S1JHOURS ;
S_JJOBS=S1JJOBS ;
S_JLASTM=S1JLASTM ;
S_JLASTY=S1JLASTY ;
S_JLIFT=S1JLIFT ;
S_JLIND=S1JLIND ;
/* Empty map cell for: S_JLINDB      variable wave =  1*/ ;
/* Empty map cell for: S_JLINDC      variable wave =  1*/ ;
S_JLMIS=S1JLMIS ;
S_JLOCC=S1JLOCC ;
S_JLOCCA=S1JLOCCA ;
/* Empty map cell for: S_JLOCCB      variable wave =  1*/ ;
/* Empty map cell for: S_JLOCCC      variable wave =  1*/ ;
S_JLTEN=S1JLTEN ;
S_JLTENF=S1JLTENF ;
S_JMISS=S1JMISS ;
S_JNJOB=S1JNJOB ;
S_JNJOB5=S1JNJOB5 ;
S1_JOG=S1JOG ;
/* Empty map cell for: S2_JOG        variable wave =  1*/ ;
/* Empty map cell for: S_JOG         variable wave =  1*/ ;
/* Empty map cell for: S_JOGA        variable wave =  1*/ ;
S_JOGW=S1JOGW ;
S_JPHYS=S1JPHYS ;
S_JSIGHT=S1JSIGHT ;
S_JSTOOP=S1JSTOOP ;
S_JSTRES=S1JSTRES ;
S_JWEEK2=S1JWEEK2 ;
S_JWEEKS=S1JWEEKS ;
S_JYEARM=S1JYEARM ;
S_JYEARS=S1JYEARS ;
/* Empty map cell for: S_LBAGR       variable wave =  1*/ ;
/* Empty map cell for: S_LBASSISTPRB variable wave =  1*/ ;
/* Empty map cell for: S_LBCOMP      variable wave =  1*/ ;
/* Empty map cell for: S_LBCON10     variable wave =  1*/ ;
/* Empty map cell for: S_LBCON5      variable wave =  1*/ ;
/* Empty map cell for: S_LBELIG      variable wave =  1*/ ;
/* Empty map cell for: S_LBEXT       variable wave =  1*/ ;
/* Empty map cell for: S_LBFAMDRUGPRBvariable wave =  1*/ ;
/* Empty map cell for: S_LBFAMHLTHPRBvariable wave =  1*/ ;
/* Empty map cell for: S_LBFINPRB    variable wave =  1*/ ;
/* Empty map cell for: S_LBHLTHPRB   variable wave =  1*/ ;
/* Empty map cell for: S_LBHOUSEPRB  variable wave =  1*/ ;
/* Empty map cell for: S_LBLONELY11  variable wave =  1*/ ;
/* Empty map cell for: S_LBLONELY3   variable wave =  1*/ ;
/* Empty map cell for: S_LBNEGAFFECT variable wave =  1*/ ;
/* Empty map cell for: S_LBNEGAFFECT6variable wave =  1*/ ;
/* Empty map cell for: S_LBNEUR      variable wave =  1*/ ;
/* Empty map cell for: S_LBONCHRSTR  variable wave =  1*/ ;
/* Empty map cell for: S_LBOPEN      variable wave =  1*/ ;
/* Empty map cell for: S_LBPOSAFFECT variable wave =  1*/ ;
/* Empty map cell for: S_LBPOSAFFECT6variable wave =  1*/ ;
S_LBRF=S1LBRF ;
S_LBRFH=S1LBRFH ;
S_LBRFY=S1LBRFY ;
/* Empty map cell for: S_LBRLTNSHPRB variable wave =  1*/ ;
/* Empty map cell for: S_LBSATCITY   variable wave =  1*/ ;
/* Empty map cell for: S_LBSATFAM    variable wave =  1*/ ;
/* Empty map cell for: S_LBSATFIN    variable wave =  1*/ ;
/* Empty map cell for: S_LBSATHLTH   variable wave =  1*/ ;
/* Empty map cell for: S_LBSATHOME   variable wave =  1*/ ;
/* Empty map cell for: S_LBSATINC    variable wave =  1*/ ;
/* Empty map cell for: S_LBSATLEISUREvariable wave =  1*/ ;
/* Empty map cell for: S_LBSATLIFE   variable wave =  1*/ ;
/* Empty map cell for: S_LBSATWLF    variable wave =  1*/ ;
/* Empty map cell for: S_LBWGTR      variable wave =  1*/ ;
/* Empty map cell for: S_LBWORKPRB   variable wave =  1*/ ;
/* Empty map cell for: S_LGMUSA      variable wave =  1*/ ;
S_LGMUSW=S1LGMUSW ;
S_LHTACT=S1LHTACT ;
S_LIFEIN=S1LIFEIN ;
S1_LIFT=S1LIFT ;
/* Empty map cell for: S2_LIFT       variable wave =  1*/ ;
/* Empty map cell for: S_LIFT        variable wave =  1*/ ;
/* Empty map cell for: S_LIFTA       variable wave =  1*/ ;
S_LIFTW=S1LIFTW ;
/* Empty map cell for: S_LIV10       variable wave =  1*/ ;
/* Empty map cell for: S_LIV10A      variable wave =  1*/ ;
/* Empty map cell for: S_LIV10P      variable wave =  1*/ ;
/* Empty map cell for: S_LIV10R      variable wave =  1*/ ;
S_LIV75=S1LIV75 ;
/* Empty map cell for: S_LIV75C      variable wave =  1*/ ;
/* Empty map cell for: S_LIV75F      variable wave =  1*/ ;
S_LIV75P=S1LIV75P ;
S_LIV75R=S1LIV75R ;
S_LIV85=S1LIV85 ;
/* Empty map cell for: S_LIV85C      variable wave =  1*/ ;
/* Empty map cell for: S_LIV85F      variable wave =  1*/ ;
S_LIV85P=S1LIV85P ;
S_LIV85R=S1LIV85R ;
/* Empty map cell for: S_LIV8XC      variable wave =  1*/ ;
/* Empty map cell for: S_LIV8XF      variable wave =  1*/ ;
S_LIVBRO=S1LIVBRO ;
S_LIVPAR=S1LIVPAR ;
S_LIVSIB=S1LIVSIB ;
S_LIVSIS=S1LIVSIS ;
/* Empty map cell for: S_LOST        variable wave =  1*/ ;
S_LTACTF=S1LTACTF ;
/* Empty map cell for: S_LTACTN      variable wave =  1*/ ;
/* Empty map cell for: S_LTACTP      variable wave =  1*/ ;
/* Empty map cell for: S_LTACTX      variable wave =  1*/ ;
S_LTCPRM=S1LTCPRM ;
S_LUNG=S1LUNG ;
S_LUNGE=S1LUNGE ;
S_LUNGEF=S1LUNGEF ;
S_LUNGF=S1LUNGF ;
S_LUNGQ=S1LUNGQ ;
/* Empty map cell for: S_LUNGS       variable wave =  1*/ ;
/* Empty map cell for: S_MAMMOG      variable wave =  1*/ ;
S1_MAP=S1MAP ;
/* Empty map cell for: S2_MAP        variable wave =  1*/ ;
/* Empty map cell for: S_MAP         variable wave =  1*/ ;
/* Empty map cell for: S_MAPA        variable wave =  1*/ ;
S_MAPW=S1MAPW ;
S_MCURLN=S1MCURLN ;
S_MCWV=S1MCWV ;
S_MCWVW=S1MCWVW ;
/* Empty map cell for: S_MDACTX      variable wave =  1*/ ;
S_MDIV=S1MDIV ;
/* Empty map cell for: S_MEALS       variable wave =  1*/ ;
/* Empty map cell for: S_MEALSA      variable wave =  1*/ ;
/* Empty map cell for: S_MEALSH      variable wave =  1*/ ;
/* Empty map cell for: S_MEALSR      variable wave =  1*/ ;
/* Empty map cell for: S2_MEDS       variable wave =  1*/ ;
/* Empty map cell for: S_MEDS        variable wave =  1*/ ;
/* Empty map cell for: S_MEDSA       variable wave =  1*/ ;
/* Empty map cell for: S_MEDSH       variable wave =  1*/ ;
/* Empty map cell for: S_MEDSR       variable wave =  1*/ ;
S_MEDUC=S1MEDUC ;
/* Empty map cell for: S_MEMRY       variable wave =  1*/ ;
/* Empty map cell for: S_MEMRYE      variable wave =  1*/ ;
/* Empty map cell for: S_MEMRYEF     variable wave =  1*/ ;
/* Empty map cell for: S_MEMRYF      variable wave =  1*/ ;
/* Empty map cell for: S_MEMRYQ      variable wave =  1*/ ;
/* Empty map cell for: S_MEMRYS      variable wave =  1*/ ;
S_MEND=S1MEND ;
S_MLEN=S1MLEN ;
S_MLENM=S1MLENM ;
S_MNEV=S1MNEV ;
/* Empty map cell for: S_MO          variable wave =  1*/ ;
/* Empty map cell for: S_MOBILA      variable wave =  1*/ ;
S_MOBILW=S1MOBILW ;
S_MOMAGE=S1MOMAGE ;
S_MOMLIV=S1MOMLIV ;
/* Empty map cell for: S2_MONEY      variable wave =  1*/ ;
/* Empty map cell for: S_MONEY       variable wave =  1*/ ;
/* Empty map cell for: S_MONEYA      variable wave =  1*/ ;
/* Empty map cell for: S_MONEYH      variable wave =  1*/ ;
/* Empty map cell for: S_MONEYR      variable wave =  1*/ ;
S_MPART=S1MPART ;
S_MRCT=S1MRCT ;
/* Empty map cell for: S_MRPREM      variable wave =  1*/ ;
S_MSTAT=S1MSTAT ;
S_MSTATF=S1MSTATF ;
S_MSTATH=S1MSTATH ;
/* Empty map cell for: S_MSTOT       variable wave =  1*/ ;
S_MWID=S1MWID ;
/* Empty map cell for: S_NHMDAY      variable wave =  1*/ ;
/* Empty map cell for: S_NHMLIV      variable wave =  1*/ ;
/* Empty map cell for: S_NHMMVM      variable wave =  1*/ ;
/* Empty map cell for: S_NHMMVY      variable wave =  1*/ ;
/* Empty map cell for: S_NOTICS      variable wave =  1*/ ;
/* Empty map cell for: S_NOVOC       variable wave =  1*/ ;
S_NRSHOM=S1NRSHOM ;
S_NRSNIT=S1NRSNIT ;
S_NRSTIM=S1NRSTIM ;
/* Empty map cell for: S_NSSCRE      variable wave =  1*/ ;
/* Empty map cell for: S_NSSCSE      variable wave =  1*/ ;
S_OAHDID=S1OAHDID ;
S_OHRSID=S1OHRSID ;
/* Empty map cell for: S_OOPMD       variable wave =  1*/ ;
/* Empty map cell for: S_OOPMDF      variable wave =  1*/ ;
/* Empty map cell for: S_OOPMDO      variable wave =  1*/ ;
/* Empty map cell for: S_OOPMDOF     variable wave =  1*/ ;
/* Empty map cell for: S_OUTPT       variable wave =  1*/ ;
/* Empty map cell for: S_PAPSM       variable wave =  1*/ ;
/* Empty map cell for: S_PARTD       variable wave =  1*/ ;
S_PENCT=S1PENCT ;
/* Empty map cell for: S_PENIC1      variable wave =  1*/ ;
/* Empty map cell for: S_PENIC2      variable wave =  1*/ ;
/* Empty map cell for: S_PENINC      variable wave =  1*/ ;
/* Empty map cell for: S_PENI_N      variable wave =  1*/ ;
/* Empty map cell for: S2_PHONE      variable wave =  1*/ ;
/* Empty map cell for: S_PHONE       variable wave =  1*/ ;
/* Empty map cell for: S_PHONEA      variable wave =  1*/ ;
/* Empty map cell for: S_PHONEH      variable wave =  1*/ ;
/* Empty map cell for: S_PHONER      variable wave =  1*/ ;
/* Empty map cell for: S_PMBMI       variable wave =  1*/ ;
/* Empty map cell for: S_PMHGHT      variable wave =  1*/ ;
/* Empty map cell for: S_PMHGHTS     variable wave =  1*/ ;
/* Empty map cell for: S_PMWAIST     variable wave =  1*/ ;
/* Empty map cell for: S_PMWAISTC    variable wave =  1*/ ;
/* Empty map cell for: S_PMWGHT      variable wave =  1*/ ;
/* Empty map cell for: S_PMWGHTF     variable wave =  1*/ ;
/* Empty map cell for: S_PMWGHTS     variable wave =  1*/ ;
/* Empty map cell for: S_PNHM5Y      variable wave =  1*/ ;
/* Empty map cell for: S_PRCHMEM     variable wave =  1*/ ;
/* Empty map cell for: S_PRES        variable wave =  1*/ ;
/* Empty map cell for: S_PRMEM       variable wave =  1*/ ;
/* Empty map cell for: S_PROST       variable wave =  1*/ ;
S_PROXY=S1PROXY ;
S_PRPCNT=S1PRPCNT ;
S_PRPRM1=S1PRPRM1 ;
/* Empty map cell for: S_PRPRM2      variable wave =  1*/ ;
/* Empty map cell for: S_PRPRM3      variable wave =  1*/ ;
S_PRSRC1=S1PRSRC1 ;
/* Empty map cell for: S_PRSRC2      variable wave =  1*/ ;
/* Empty map cell for: S_PRSRC3      variable wave =  1*/ ;
S_PSTMEM=S1PSTMEM ;
S_PSYCH=S1PSYCH ;
S_PSYCHE=S1PSYCHE ;
S_PSYCHEF=S1PSYCHEF ;
S_PSYCHF=S1PSYCHF ;
S_PSYCHQ=S1PSYCHQ ;
/* Empty map cell for: S_PSYCHS      variable wave =  1*/ ;
S_PTYP1=S1PTYP1 ;
S_PTYP2=S1PTYP2 ;
S_PTYP3=S1PTYP3 ;
/* Empty map cell for: S_PTYP4       variable wave =  1*/ ;
/* Empty map cell for: S_PTYPD1      variable wave =  1*/ ;
/* Empty map cell for: S_PTYPD2      variable wave =  1*/ ;
/* Empty map cell for: S_PTYPD3      variable wave =  1*/ ;
/* Empty map cell for: S_PTYPD4      variable wave =  1*/ ;
/* Empty map cell for: S_PTYPF1      variable wave =  1*/ ;
/* Empty map cell for: S_PTYPF2      variable wave =  1*/ ;
/* Empty map cell for: S_PTYPF3      variable wave =  1*/ ;
/* Empty map cell for: S_PTYPF4      variable wave =  1*/ ;
/* Empty map cell for: S_PUFF        variable wave =  1*/ ;
/* Empty map cell for: S_PUFFPOS     variable wave =  1*/ ;
S1_PUSH=S1PUSH ;
/* Empty map cell for: S2_PUSH       variable wave =  1*/ ;
/* Empty map cell for: S_PUSH        variable wave =  1*/ ;
/* Empty map cell for: S_PUSHA       variable wave =  1*/ ;
S_PUSHW=S1PUSHW ;
S_RACEM=S1RACEM ;
S_RELIG=S1RELIG ;
S_RETDTWV=S1RETDTWV ;
S_RETEMP=S1RETEMP ;
S_RETINC=S1RETINC ;
S_RETLIV=S1RETLIV ;
S_RETMON=S1RETMON ;
S_RETSAT=S1RETSAT ;
S_RETWLT=S1RETWLT ;
S_RETWRK=S1RETWRK ;
S_RETWSP=S1RETWSP ;
S_RETYR=S1RETYR ;
S_RISK=S1RISK ;
/* Empty map cell for: S_RISK6       variable wave =  1*/ ;
S_RPLNYA=S1RPLNYA ;
S_RPLNYR=S1RPLNYR ;
/* Empty map cell for: S_RXPREM      variable wave =  1*/ ;
S_RYRCMP=S1RYRCMP ;
/* Empty map cell for: S_SADLF       variable wave =  1*/ ;
/* Empty map cell for: S_SAMEJOB     variable wave =  1*/ ;
/* Empty map cell for: S_SAMEMP      variable wave =  1*/ ;
S_SAYRET=S1SAYRET ;
/* Empty map cell for: S_SCIS        variable wave =  1*/ ;
/* Empty map cell for: S_SDIAPL      variable wave =  1*/ ;
/* Empty map cell for: S_SDIAPLM     variable wave =  1*/ ;
/* Empty map cell for: S_SDIAPLY     variable wave =  1*/ ;
/* Empty map cell for: S_SDIAPP      variable wave =  1*/ ;
/* Empty map cell for: S_SDIAPPM     variable wave =  1*/ ;
/* Empty map cell for: S_SDIAPPY     variable wave =  1*/ ;
/* Empty map cell for: S_SDIDEN      variable wave =  1*/ ;
/* Empty map cell for: S_SDIREC      variable wave =  1*/ ;
/* Empty map cell for: S_SDIRECM     variable wave =  1*/ ;
/* Empty map cell for: S_SDIRECY     variable wave =  1*/ ;
/* Empty map cell for: S_SDISTP      variable wave =  1*/ ;
/* Empty map cell for: S_SDISTPM     variable wave =  1*/ ;
/* Empty map cell for: S_SDISTPY     variable wave =  1*/ ;
/* Empty map cell for: S_SER7        variable wave =  1*/ ;
S_SHLT=S1SHLT ;
/* Empty map cell for: S_SHLTC       variable wave =  1*/ ;
/* Empty map cell for: S_SHLTCF      variable wave =  1*/ ;
/* Empty map cell for: S_SHOP        variable wave =  1*/ ;
/* Empty map cell for: S_SHOPA       variable wave =  1*/ ;
/* Empty map cell for: S_SHOPH       variable wave =  1*/ ;
/* Empty map cell for: S_SHOPR       variable wave =  1*/ ;
S1_SIT=S1SIT ;
/* Empty map cell for: S2_SIT        variable wave =  1*/ ;
/* Empty map cell for: S_SIT         variable wave =  1*/ ;
/* Empty map cell for: S_SITA        variable wave =  1*/ ;
S_SITW=S1SITW ;
/* Empty map cell for: S_SLEEP       variable wave =  1*/ ;
/* Empty map cell for: S_SLEEPE      variable wave =  1*/ ;
/* Empty map cell for: S_SLEEPEF     variable wave =  1*/ ;
/* Empty map cell for: S_SLEEPQ      variable wave =  1*/ ;
/* Empty map cell for: S_SLEEPR      variable wave =  1*/ ;
/* Empty map cell for: S_SLEEPS      variable wave =  1*/ ;
S_SLEEPX=S1SLEEPX ;
S_SLFEMP=S1SLFEMP ;
S_SLFMEM=S1SLFMEM ;
S_SMOKEN=S1SMOKEN ;
S_SMOKEV=S1SMOKEV ;
/* Empty map cell for: S_SPCFAC      variable wave =  1*/ ;
/* Empty map cell for: S_SSAPL       variable wave =  1*/ ;
/* Empty map cell for: S_SSAPLM      variable wave =  1*/ ;
/* Empty map cell for: S_SSAPLY      variable wave =  1*/ ;
/* Empty map cell for: S_SSAPP       variable wave =  1*/ ;
/* Empty map cell for: S_SSAPPM      variable wave =  1*/ ;
/* Empty map cell for: S_SSAPPY      variable wave =  1*/ ;
/* Empty map cell for: S_SSDEN       variable wave =  1*/ ;
S_SSDI=S1SSDI ;
/* Empty map cell for: S_SSIAPL      variable wave =  1*/ ;
/* Empty map cell for: S_SSIAPLM     variable wave =  1*/ ;
/* Empty map cell for: S_SSIAPLY     variable wave =  1*/ ;
/* Empty map cell for: S_SSIAPP      variable wave =  1*/ ;
/* Empty map cell for: S_SSIAPPM     variable wave =  1*/ ;
/* Empty map cell for: S_SSIAPPY     variable wave =  1*/ ;
/* Empty map cell for: S_SSIDEN      variable wave =  1*/ ;
/* Empty map cell for: S_SSIREC      variable wave =  1*/ ;
/* Empty map cell for: S_SSIRECM     variable wave =  1*/ ;
/* Empty map cell for: S_SSIRECY     variable wave =  1*/ ;
/* Empty map cell for: S_SSISTP      variable wave =  1*/ ;
/* Empty map cell for: S_SSISTPM     variable wave =  1*/ ;
/* Empty map cell for: S_SSISTPY     variable wave =  1*/ ;
/* Empty map cell for: S_SSREC       variable wave =  1*/ ;
/* Empty map cell for: S_SSRECM      variable wave =  1*/ ;
/* Empty map cell for: S_SSRECY      variable wave =  1*/ ;
/* Empty map cell for: S_SSSTP       variable wave =  1*/ ;
/* Empty map cell for: S_SSSTPM      variable wave =  1*/ ;
/* Empty map cell for: S_SSSTPY      variable wave =  1*/ ;
S_SSWRER=S1SSWRER ;
S_SSWRNR=S1SSWRNR ;
S_SSWRXA=S1SSWRXA ;
/* Empty map cell for: S_SSWSER      variable wave =  1*/ ;
/* Empty map cell for: S_SSWSNR      variable wave =  1*/ ;
/* Empty map cell for: S_SSWSXA      variable wave =  1*/ ;
S_STATUS=S1STATUS ;
S1_STOOP=S1STOOP ;
/* Empty map cell for: S2_STOOP      variable wave =  1*/ ;
/* Empty map cell for: S_STOOP       variable wave =  1*/ ;
/* Empty map cell for: S_STOOPA      variable wave =  1*/ ;
S_STOOPW=S1STOOPW ;
S_STROK=S1STROK ;
S_STROKE=S1STROKE ;
S_STROKEF=S1STROKEF ;
S_STROKF=S1STROKF ;
S_STROKQ=S1STROKQ ;
/* Empty map cell for: S_STROKS      variable wave =  1*/ ;
/* Empty map cell for: S_TIMWLK      variable wave =  1*/ ;
/* Empty map cell for: S_TIMWLKA     variable wave =  1*/ ;
S_TLIPRM=S1TLIPRM ;
/* Empty map cell for: S2_TOILT      variable wave =  1*/ ;
/* Empty map cell for: S_TOILT       variable wave =  1*/ ;
/* Empty map cell for: S_TOILTA      variable wave =  1*/ ;
/* Empty map cell for: S2_TOILTH     variable wave =  1*/ ;
/* Empty map cell for: S_TOILTH      variable wave =  1*/ ;
/* Empty map cell for: S_TOTMBF      variable wave =  1*/ ;
/* Empty map cell for: S_TOTMBI      variable wave =  1*/ ;
/* Empty map cell for: S_TOTMD       variable wave =  1*/ ;
/* Empty map cell for: S_TOTMDF      variable wave =  1*/ ;
/* Empty map cell for: S_TR20        variable wave =  1*/ ;
S_TR40=S1TR40 ;
/* Empty map cell for: S_TYLTC       variable wave =  1*/ ;
S_ULCER=S1ULCER ;
S_UNEMP=S1UNEMP ;
S_UNION=S1UNION ;
/* Empty map cell for: S_UNIONF      variable wave =  1*/ ;
S_VETRN=S1VETRN ;
S_VGACTF=S1VGACTF ;
/* Empty map cell for: S_VGACTN      variable wave =  1*/ ;
/* Empty map cell for: S_VGACTP      variable wave =  1*/ ;
/* Empty map cell for: S_VGACTX      variable wave =  1*/ ;
S_VIGACT=S1VIGACT ;
/* Empty map cell for: S_VOCAB       variable wave =  1*/ ;
/* Empty map cell for: S_VP          variable wave =  1*/ ;
S1_WALK1=S1WALK1 ;
/* Empty map cell for: S2_WALK1      variable wave =  1*/ ;
/* Empty map cell for: S_WALK1       variable wave =  1*/ ;
/* Empty map cell for: S_WALK1A      variable wave =  1*/ ;
S_WALK1W=S1WALK1W ;
S1_WALKR=S1WALKR ;
/* Empty map cell for: S2_WALKR      variable wave =  1*/ ;
/* Empty map cell for: S_WALKR       variable wave =  1*/ ;
/* Empty map cell for: S_WALKRA      variable wave =  1*/ ;
/* Empty map cell for: S_WALKRE      variable wave =  1*/ ;
/* Empty map cell for: S2_WALKRH     variable wave =  1*/ ;
/* Empty map cell for: S_WALKRH      variable wave =  1*/ ;
S_WALKRW=S1WALKRW ;
S1_WALKS=S1WALKS ;
/* Empty map cell for: S2_WALKS      variable wave =  1*/ ;
/* Empty map cell for: S_WALKS       variable wave =  1*/ ;
/* Empty map cell for: S_WALKSA      variable wave =  1*/ ;
S_WALKSW=S1WALKSW ;
/* Empty map cell for: S_WANDER      variable wave =  1*/ ;
S_WEIGHT=S1WEIGHT ;
S_WGFHR=S1WGFHR ;
S_WGFWK=S1WGFWK ;
S_WGIHR=S1WGIHR ;
S_WGIWK=S1WGIWK ;
S_WHAPPX=S1WHAPPX ;
/* Empty map cell for: S_WHAPPY      variable wave =  1*/ ;
S_WLIPRM=S1WLIPRM ;
S_WORK=S1WORK ;
S_WORK2=S1WORK2 ;
S_WORK62=S1WORK62 ;
/* Empty map cell for: S_WORK62F     variable wave =  1*/ ;
S_WORK65=S1WORK65 ;
/* Empty map cell for: S_WORK65F     variable wave =  1*/ ;
/* Empty map cell for: S_WORK70      variable wave =  1*/ ;
/* Empty map cell for: S_WORK70A     variable wave =  1*/ ;
/* Empty map cell for: S_WORK70AF    variable wave =  1*/ ;
/* Empty map cell for: S_WORK70F     variable wave =  1*/ ;
S_WORKLM=S1WORKLM ;
S_WTCRNH=S1WTCRNH ;
S_WTRESP=S1WTRESP ;
/* Empty map cell for: S_WTR_NH      variable wave =  1*/ ;
/* Empty map cell for: S_YR          variable wave =  1*/ ;
if inw=1 then output ;
%put --- Slong table ;
%initvars ;
%put ---- Slong table ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
/* --- RAND variable:HHIDPN  included */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
/* --- RAND variable:HACOHORT  included */ ;
WAVE_NUMBER=2 ;
WAVE_NAME=  'hrs_wave'||strip(put(wave_number,3.))     /* --- Derived variable  */ ;
studyyr= hrs_studyyr(wave_number,
hacohort)     /* --- Derived variable  */ ;
CYEAR='yr1993_94' ;
H_HHID=H2HHID ;
H_HHIDC=H2HHIDC ;
SUBHH= substr(H_HHIDC,7)     /* --- Derived variable  */ ;
INW=INW2 ;
S_HHIDPN=S2HHIDPN ;
/* --- RAND variable:SASSAGEB  included */ ;
/* --- RAND variable:SASSAGEM  included */ ;
/* --- RAND variable:SASSRECV  included */ ;
S_ACGTOT=S2ACGTOT ;
S_ADL5A=S2ADL5A ;
S_ADL5H=S2ADL5H ;
S_ADL6A=S2ADL6A ;
S_ADL6H=S2ADL6H ;
S_ADLR10=S2ADLR10 ;
/* Empty map cell for: S_ADLW        variable wave =  2*/ ;
S_AGEM_B=S2AGEM_B ;
S_AGEM_E=S2AGEM_E ;
S_AGEM_M=S2AGEM_M ;
S_AGEY_B=S2AGEY_B ;
S_AGEY_E=S2AGEY_E ;
S_AGEY_M=S2AGEY_M ;
S_AHDSMP=S2AHDSMP ;
S_AIMR10=S2AIMR10 ;
S_ALONE=S2ALONE ;
/* Empty map cell for: S_ALZHE       variable wave =  2*/ ;
/* Empty map cell for: S_ALZHEE      variable wave =  2*/ ;
/* Empty map cell for: S_ALZHEEF     variable wave =  2*/ ;
/* Empty map cell for: S_ALZHEF      variable wave =  2*/ ;
/* Empty map cell for: S_ALZHEQ      variable wave =  2*/ ;
/* Empty map cell for: S_ALZHES      variable wave =  2*/ ;
S_AMSTOT=S2AMSTOT ;
/* Empty map cell for: S_ANS3PQ      variable wave =  2*/ ;
/* Empty map cell for: S1_ARMS       variable wave =  2*/ ;
S2_ARMS=S2ARMS ;
/* Empty map cell for: S_ARMS        variable wave =  2*/ ;
S_ARMSA=S2ARMSA ;
/* Empty map cell for: S_ARMSW       variable wave =  2*/ ;
S_ARTHR=S2ARTHR ;
S_ARTHRE=S2ARTHRE ;
S_ARTHREF=S2ARTHREF ;
S_ARTHRF=S2ARTHRF ;
S_ARTHRQ=S2ARTHRQ ;
S_ARTHRS=S2ARTHRS ;
S_ATR20=S2ATR20 ;
S_BACK=S2BACK ;
/* Empty map cell for: S_BALFUL      variable wave =  2*/ ;
/* Empty map cell for: S_BALFULC     variable wave =  2*/ ;
/* Empty map cell for: S_BALFULT     variable wave =  2*/ ;
/* Empty map cell for: S_BALSBS      variable wave =  2*/ ;
/* Empty map cell for: S_BALSBSC     variable wave =  2*/ ;
/* Empty map cell for: S_BALSEMI     variable wave =  2*/ ;
/* Empty map cell for: S_BALSEMIC    variable wave =  2*/ ;
/* Empty map cell for: S1_BATH       variable wave =  2*/ ;
S2_BATH=S2BATH ;
/* Empty map cell for: S_BATH        variable wave =  2*/ ;
S_BATHA=S2BATHA ;
S2_BATHH=S2BATHH ;
/* Empty map cell for: S_BATHH       variable wave =  2*/ ;
/* Empty map cell for: S_BATHW       variable wave =  2*/ ;
S_BDATE=S2BDATE ;
/* Empty map cell for: S1_BED        variable wave =  2*/ ;
S2_BED=S2BED ;
/* Empty map cell for: S_BED         variable wave =  2*/ ;
S_BEDA=S2BEDA ;
S_BEDE=S2BEDE ;
S2_BEDH=S2BEDH ;
/* Empty map cell for: S_BEDH        variable wave =  2*/ ;
/* Empty map cell for: S_BEDW        variable wave =  2*/ ;
S_BEQ100=S2BEQ100 ;
S_BEQ10K=S2BEQ10K ;
/* Empty map cell for: S_BEQ500      variable wave =  2*/ ;
S_BEQANY=S2BEQANY ;
/* Empty map cell for: S_BEQLRG      variable wave =  2*/ ;
S_BFLAG=S2BFLAG ;
S_BMI=S2BMI ;
S_BMONTH=S2BMONTH ;
/* Empty map cell for: S_BPDIA       variable wave =  2*/ ;
S_BPLACE=S2BPLACE ;
S_BPLACF=S2BPLACF ;
/* Empty map cell for: S_BPPOS       variable wave =  2*/ ;
/* Empty map cell for: S_BPPULS      variable wave =  2*/ ;
/* Empty map cell for: S_BPSYS       variable wave =  2*/ ;
/* Empty map cell for: S_BREAST      variable wave =  2*/ ;
S_BWC20=S2BWC20 ;
/* Empty map cell for: S_BWC86       variable wave =  2*/ ;
S_BYEAR=S2BYEAR ;
S_CACT=S2CACT ;
/* Empty map cell for: S1_CALC       variable wave =  2*/ ;
S2_CALC=S2CALC ;
S_CALCA=S2CALCA ;
/* Empty map cell for: S_CALCW       variable wave =  2*/ ;
S_CANCR=S2CANCR ;
S_CANCRE=S2CANCRE ;
S_CANCREF=S2CANCREF ;
S_CANCRF=S2CANCRF ;
S_CANCRQ=S2CANCRQ ;
S_CANCRS=S2CANCRS ;
S_CENDIV=S2CENDIV ;
S_CENREG=S2CENREG ;
S_CESD=S2CESD ;
S_CESDM=S2CESDM ;
/* Empty map cell for: S1_CHAIR      variable wave =  2*/ ;
S2_CHAIR=S2CHAIR ;
/* Empty map cell for: S_CHAIR       variable wave =  2*/ ;
S_CHAIRA=S2CHAIRA ;
/* Empty map cell for: S_CHAIRW      variable wave =  2*/ ;
/* Empty map cell for: S_CHOLST      variable wave =  2*/ ;
/* Empty map cell for: S_CLAIMED     variable wave =  2*/ ;
/* Empty map cell for: S1_CLIM1      variable wave =  2*/ ;
S2_CLIM1=S2CLIM1 ;
/* Empty map cell for: S_CLIM1       variable wave =  2*/ ;
S_CLIM1A=S2CLIM1A ;
/* Empty map cell for: S_CLIM1W      variable wave =  2*/ ;
/* Empty map cell for: S1_CLIMS      variable wave =  2*/ ;
S2_CLIMS=S2CLIMS ;
/* Empty map cell for: S_CLIMS       variable wave =  2*/ ;
S_CLIMSA=S2CLIMSA ;
/* Empty map cell for: S_CLIMSW      variable wave =  2*/ ;
/* Empty map cell for: S_COGTOT      variable wave =  2*/ ;
S_COHBYR=S2COHBYR ;
S_COHORT=S2COHORT ;
/* Empty map cell for: S_COMP        variable wave =  2*/ ;
/* Empty map cell for: S_COMPW       variable wave =  2*/ ;
S_CONDE=S2CONDE ;
S_CONDEF=S2CONDEF ;
S_CONDS=S2CONDS ;
S_CONDSF=S2CONDSF ;
S_CONDSP=S2CONDSP ;
S_COVR=S2COVR ;
S_COVRT=S2COVRT ;
S_COVS=S2COVS ;
S_DADAGE=S2DADAGE ;
S_DADLIV=S2DADLIV ;
S_DAGE_M=S2DAGE_M ;
S_DAGE_Y=S2DAGE_Y ;
S_DCBAL1=S2DCBAL1 ;
S_DCBAL2=S2DCBAL2 ;
S_DCBAL3=S2DCBAL3 ;
/* Empty map cell for: S_DCBAL4      variable wave =  2*/ ;
S_DCBENE1=S2DCBENE1 ;
S_DCBENE2=S2DCBENE2 ;
S_DCBENE3=S2DCBENE3 ;
/* Empty map cell for: S_DCBENE4     variable wave =  2*/ ;
S_DCCONT1=S2DCCONT1 ;
S_DCCONT2=S2DCCONT2 ;
S_DCCONT3=S2DCCONT3 ;
/* Empty map cell for: S_DCCONT4     variable wave =  2*/ ;
S_DCMODE1=S2DCMODE1 ;
S_DCMODE2=S2DCMODE2 ;
S_DCMODE3=S2DCMODE3 ;
/* Empty map cell for: S_DCMODE4     variable wave =  2*/ ;
S_DCPCT1=S2DCPCT1 ;
S_DCPCT2=S2DCPCT2 ;
S_DCPCT3=S2DCPCT3 ;
/* Empty map cell for: S_DCPCT4      variable wave =  2*/ ;
S_DDATE=S2DDATE ;
/* Empty map cell for: S_DEMEN       variable wave =  2*/ ;
/* Empty map cell for: S_DEMENE      variable wave =  2*/ ;
/* Empty map cell for: S_DEMENEF     variable wave =  2*/ ;
/* Empty map cell for: S_DEMENF      variable wave =  2*/ ;
/* Empty map cell for: S_DEMENQ      variable wave =  2*/ ;
/* Empty map cell for: S_DEMENS      variable wave =  2*/ ;
S_DENTST=S2DENTST ;
S_DEPRES=S2DEPRES ;
/* Empty map cell for: S_DEPREX      variable wave =  2*/ ;
S_DIAB=S2DIAB ;
S_DIABE=S2DIABE ;
S_DIABEF=S2DIABEF ;
S_DIABF=S2DIABF ;
S_DIABQ=S2DIABQ ;
S_DIABS=S2DIABS ;
/* Empty map cell for: S1_DIME       variable wave =  2*/ ;
S2_DIME=S2DIME ;
/* Empty map cell for: S_DIME        variable wave =  2*/ ;
S_DIMEA=S2DIMEA ;
/* Empty map cell for: S_DIMEW       variable wave =  2*/ ;
/* Empty map cell for: S_DLRC        variable wave =  2*/ ;
/* Empty map cell for: S_DLRC20      variable wave =  2*/ ;
S_DMONTH=S2DMONTH ;
S_DOCTIM=S2DOCTIM ;
S_DOCTOR=S2DOCTOR ;
/* Empty map cell for: S1_DRESS      variable wave =  2*/ ;
S2_DRESS=S2DRESS ;
/* Empty map cell for: S_DRESS       variable wave =  2*/ ;
S_DRESSA=S2DRESSA ;
S2_DRESSH=S2DRESSH ;
/* Empty map cell for: S_DRESSH      variable wave =  2*/ ;
/* Empty map cell for: S_DRESSW      variable wave =  2*/ ;
S_DRINK=S2DRINK ;
/* Empty map cell for: S_DRINKD      variable wave =  2*/ ;
/* Empty map cell for: S_DRINKN      variable wave =  2*/ ;
S_DRINKR=S2DRINKR ;
S_DRUGS=S2DRUGS ;
/* Empty map cell for: S_DSIAMT      variable wave =  2*/ ;
S_DSRC=S2DSRC ;
/* Empty map cell for: S_DSSAMT      variable wave =  2*/ ;
S_DSTAT=S2DSTAT ;
S_DTIMTDTH=S2DTIMTDTH ;
S_DW=S2DW ;
S_DY=S2DY ;
S_DYEAR=S2DYEAR ;
/* Empty map cell for: S1_EAT        variable wave =  2*/ ;
S2_EAT=S2EAT ;
/* Empty map cell for: S_EAT         variable wave =  2*/ ;
S_EATA=S2EATA ;
S2_EATH=S2EATH ;
/* Empty map cell for: S_EATH        variable wave =  2*/ ;
/* Empty map cell for: S_EATW        variable wave =  2*/ ;
S_EDEGRM=S2EDEGRM ;
S_EDUC=S2EDUC ;
S_EDYRS=S2EDYRS ;
S_EFFORT=S2EFFORT ;
/* Empty map cell for: S_EFFORX      variable wave =  2*/ ;
S_ENLIFE=S2ENLIFE ;
/* Empty map cell for: S_ENLIFX      variable wave =  2*/ ;
S_EVBRN=S2EVBRN ;
S_EVBRNF=S2EVBRNF ;
S_FAMR=S2FAMR ;
S_FBWC20=S2FBWC20 ;
/* Empty map cell for: S_FBWC86      variable wave =  2*/ ;
S_FCACT=S2FCACT ;
S_FDLRC=S2FDLRC ;
S_FDW=S2FDW ;
S_FDY=S2FDY ;
S_FEDUC=S2FEDUC ;
S_FIMRC=S2FIMRC ;
S_FINEA=S2FINEA ;
/* Empty map cell for: S_FINPLN      variable wave =  2*/ ;
S_FINR=S2FINR ;
S_FLAG=S2FLAG ;
S_FLONE=S2FLONE ;
/* Empty map cell for: S_FLONEX      variable wave =  2*/ ;
/* Empty map cell for: S_FLUSHT      variable wave =  2*/ ;
S_FMO=S2FMO ;
S_FPRES=S2FPRES ;
S_FPSTME=S2FPSTME ;
S_FSAD=S2FSAD ;
/* Empty map cell for: S_FSADX       variable wave =  2*/ ;
S_FSCIS=S2FSCIS ;
S_FSER7=S2FSER7 ;
S_FSIZE=S2FSIZE ;
S_FSIZEF=S2FSIZEF ;
S_FSLFME=S2FSLFME ;
/* Empty map cell for: S_FVOCAB      variable wave =  2*/ ;
S_FVP=S2FVP ;
S_FYR=S2FYR ;
S_GENDER=S2GENDER ;
S_GOING=S2GOING ;
/* Empty map cell for: S_GOINGX      variable wave =  2*/ ;
S_GOVMD=S2GOVMD ;
S_GOVMR=S2GOVMR ;
S_GOVOT=S2GOVOT ;
S_GOVVA=S2GOVVA ;
S_GROSSA=S2GROSSA ;
/* Empty map cell for: S_GRP         variable wave =  2*/ ;
/* Empty map cell for: S_GRPDOM      variable wave =  2*/ ;
/* Empty map cell for: S_GRPL        variable wave =  2*/ ;
/* Empty map cell for: S_GRPPOS      variable wave =  2*/ ;
/* Empty map cell for: S_GRPR        variable wave =  2*/ ;
S_HALUC=S2HALUC ;
S_HDLR20=S2HDLR20 ;
S_HEART=S2HEART ;
S_HEARTE=S2HEARTE ;
S_HEARTEF=S2HEARTEF ;
S_HEARTF=S2HEARTF ;
S_HEARTQ=S2HEARTQ ;
S_HEARTS=S2HEARTS ;
S_HECOV1=S2HECOV1 ;
S_HECOV2=S2HECOV2 ;
/* Empty map cell for: S_HECOV3      variable wave =  2*/ ;
S_HEIGHT=S2HEIGHT ;
S_HENUM=S2HENUM ;
S_HERET=S2HERET ;
S_HERTR1=S2HERTR1 ;
S_HERTR2=S2HERTR2 ;
/* Empty map cell for: S_HERTR3      variable wave =  2*/ ;
S_HERTS1=S2HERTS1 ;
S_HERTS2=S2HERTS2 ;
/* Empty map cell for: S_HERTS3      variable wave =  2*/ ;
S_HESRC1=S2HESRC1 ;
S_HESRC2=S2HESRC2 ;
/* Empty map cell for: S_HESRC3      variable wave =  2*/ ;
S_HHIDPN=S2HHIDPN ;
S_HIBP=S2HIBP ;
S_HIBPE=S2HIBPE ;
S_HIBPEF=S2HIBPEF ;
S_HIBPF=S2HIBPF ;
S_HIBPQ=S2HIBPQ ;
S_HIBPS=S2HIBPS ;
S_HIGOV=S2HIGOV ;
S_HILTC=S2HILTC ;
S_HIMR20=S2HIMR20 ;
S_HIOTHP=S2HIOTHP ;
S_HISPAN=S2HISPAN ;
/* Empty map cell for: S_HLPDYSF     variable wave =  2*/ ;
/* Empty map cell for: S_HLPDYSNF    variable wave =  2*/ ;
/* Empty map cell for: S_HLPDYSP     variable wave =  2*/ ;
/* Empty map cell for: S_HLPDYST     variable wave =  2*/ ;
/* Empty map cell for: S_HLPDYSU     variable wave =  2*/ ;
/* Empty map cell for: S_HLPHRSF     variable wave =  2*/ ;
/* Empty map cell for: S_HLPHRSNF    variable wave =  2*/ ;
/* Empty map cell for: S_HLPHRSP     variable wave =  2*/ ;
/* Empty map cell for: S_HLPHRST     variable wave =  2*/ ;
/* Empty map cell for: S_HLPHRSU     variable wave =  2*/ ;
/* Empty map cell for: S_HLPPDFA     variable wave =  2*/ ;
/* Empty map cell for: S_HLPPDFN     variable wave =  2*/ ;
/* Empty map cell for: S_HLPPDNFA    variable wave =  2*/ ;
/* Empty map cell for: S_HLPPDNFN    variable wave =  2*/ ;
/* Empty map cell for: S_HLPPDTA     variable wave =  2*/ ;
/* Empty map cell for: S_HLPPDTN     variable wave =  2*/ ;
/* Empty map cell for: S_HLPRFN      variable wave =  2*/ ;
/* Empty map cell for: S_HLPRNFN     variable wave =  2*/ ;
/* Empty map cell for: S_HLPRPN      variable wave =  2*/ ;
/* Empty map cell for: S_HLPRTN      variable wave =  2*/ ;
/* Empty map cell for: S_HLPRUN      variable wave =  2*/ ;
S_HLTC3=S2HLTC3 ;
S_HLTC5=S2HLTC5 ;
/* Empty map cell for: S_HLTC5F      variable wave =  2*/ ;
S_HLTHLM=S2HLTHLM ;
S_HOMCAR=S2HOMCAR ;
S_HOSP=S2HOSP ;
S_HRSAMP=S2HRSAMP ;
S_HSPNIT=S2HSPNIT ;
S_HSPTIM=S2HSPTIM ;
/* Empty map cell for: S_HSWRKF      variable wave =  2*/ ;
S_HTR40=S2HTR40 ;
S_IADL5A=S2IADL5A ;
/* Empty map cell for: S_IADL5H      variable wave =  2*/ ;
S_IANN=S2IANN ;
S_IEARN=S2IEARN ;
S_IFANN=S2IFANN ;
S_IFEARN=S2IFEARN ;
S_IFGXFR=S2IFGXFR ;
/* Empty map cell for: S_IFIRAW      variable wave =  2*/ ;
S_IFIRAWY1=S2IFIRAWY1 ;
S_IFPEN=S2IFPEN ;
S_IFPENA=S2IFPENA ;
S_IFSDI=S2IFSDI ;
S_IFSRET=S2IFSRET ;
S1_IFSSDI=S2IFSSDI ;
/* Empty map cell for: S_IFSSDI      variable wave =  2*/ ;
S_IFSSI=S2IFSSI ;
S_IFUNEM=S2IFUNEM ;
/* Empty map cell for: S1_IFUNWC     variable wave =  2*/ ;
S2_IFUNWC=S2IFUNWC ;
S_IFWCMP=S2IFWCMP ;
S_IGXFR=S2IGXFR ;
/* Empty map cell for: S_IIRAW       variable wave =  2*/ ;
S_IIRAWY1=S2IIRAWY1 ;
/* Empty map cell for: S_IMRC        variable wave =  2*/ ;
/* Empty map cell for: S_IMRC20      variable wave =  2*/ ;
S_INHER=S2INHER ;
/* Empty map cell for: S_INHPE       variable wave =  2*/ ;
/* Empty map cell for: S_INHPFN      variable wave =  2*/ ;
/* Empty map cell for: S_INHPNFN     variable wave =  2*/ ;
/* Empty map cell for: S_INHPPN      variable wave =  2*/ ;
/* Empty map cell for: S_INHPTN      variable wave =  2*/ ;
/* Empty map cell for: S_INHPUN      variable wave =  2*/ ;
S_INLBRF=S2INLBRF ;
S_IPEN=S2IPEN ;
S_IPENA=S2IPENA ;
S_ISDI=S2ISDI ;
S_ISRET=S2ISRET ;
S_ISSDI=S2ISSDI ;
S_ISSI=S2ISSI ;
S_IUNEM=S2IUNEM ;
S_IUNWC=S2IUNWC ;
S_IWBEG=S2IWBEG ;
S_IWBEGF=S2IWBEGF ;
S_IWCMP=S2IWCMP ;
S_IWEND=S2IWEND ;
S_IWENDF=S2IWENDF ;
S_IWENDM=S2IWENDM ;
S_IWENDY=S2IWENDY ;
S_IWMID=S2IWMID ;
S_IWMIDF=S2IWMIDF ;
S_IWSTAT=S2IWSTAT ;
S_JCIND=S2JCIND ;
/* Empty map cell for: S_JCINDB      variable wave =  2*/ ;
/* Empty map cell for: S_JCINDC      variable wave =  2*/ ;
S_JCOCC=S2JCOCC ;
S_JCOCCA=S2JCOCCA ;
/* Empty map cell for: S_JCOCCB      variable wave =  2*/ ;
/* Empty map cell for: S_JCOCCC      variable wave =  2*/ ;
S_JCPEN=S2JCPEN ;
S_JCPENF=S2JCPENF ;
S_JCTEN=S2JCTEN ;
S_JHOUR2=S2JHOUR2 ;
S_JHOURS=S2JHOURS ;
S_JJOBS=S2JJOBS ;
S_JLASTM=S2JLASTM ;
S_JLASTY=S2JLASTY ;
S_JLIFT=S2JLIFT ;
S_JLIND=S2JLIND ;
/* Empty map cell for: S_JLINDB      variable wave =  2*/ ;
/* Empty map cell for: S_JLINDC      variable wave =  2*/ ;
S_JLMIS=S2JLMIS ;
S_JLOCC=S2JLOCC ;
S_JLOCCA=S2JLOCCA ;
/* Empty map cell for: S_JLOCCB      variable wave =  2*/ ;
/* Empty map cell for: S_JLOCCC      variable wave =  2*/ ;
S_JLTEN=S2JLTEN ;
S_JLTENF=S2JLTENF ;
S_JMISS=S2JMISS ;
S_JNJOB=S2JNJOB ;
S_JNJOB5=S2JNJOB5 ;
/* Empty map cell for: S1_JOG        variable wave =  2*/ ;
S2_JOG=S2JOG ;
/* Empty map cell for: S_JOG         variable wave =  2*/ ;
S_JOGA=S2JOGA ;
/* Empty map cell for: S_JOGW        variable wave =  2*/ ;
S_JPHYS=S2JPHYS ;
S_JSIGHT=S2JSIGHT ;
S_JSTOOP=S2JSTOOP ;
S_JSTRES=S2JSTRES ;
S_JWEEK2=S2JWEEK2 ;
S_JWEEKS=S2JWEEKS ;
S_JYEARM=S2JYEARM ;
S_JYEARS=S2JYEARS ;
/* Empty map cell for: S_LBAGR       variable wave =  2*/ ;
/* Empty map cell for: S_LBASSISTPRB variable wave =  2*/ ;
/* Empty map cell for: S_LBCOMP      variable wave =  2*/ ;
/* Empty map cell for: S_LBCON10     variable wave =  2*/ ;
/* Empty map cell for: S_LBCON5      variable wave =  2*/ ;
/* Empty map cell for: S_LBELIG      variable wave =  2*/ ;
/* Empty map cell for: S_LBEXT       variable wave =  2*/ ;
/* Empty map cell for: S_LBFAMDRUGPRBvariable wave =  2*/ ;
/* Empty map cell for: S_LBFAMHLTHPRBvariable wave =  2*/ ;
/* Empty map cell for: S_LBFINPRB    variable wave =  2*/ ;
/* Empty map cell for: S_LBHLTHPRB   variable wave =  2*/ ;
/* Empty map cell for: S_LBHOUSEPRB  variable wave =  2*/ ;
/* Empty map cell for: S_LBLONELY11  variable wave =  2*/ ;
/* Empty map cell for: S_LBLONELY3   variable wave =  2*/ ;
/* Empty map cell for: S_LBNEGAFFECT variable wave =  2*/ ;
/* Empty map cell for: S_LBNEGAFFECT6variable wave =  2*/ ;
/* Empty map cell for: S_LBNEUR      variable wave =  2*/ ;
/* Empty map cell for: S_LBONCHRSTR  variable wave =  2*/ ;
/* Empty map cell for: S_LBOPEN      variable wave =  2*/ ;
/* Empty map cell for: S_LBPOSAFFECT variable wave =  2*/ ;
/* Empty map cell for: S_LBPOSAFFECT6variable wave =  2*/ ;
S_LBRF=S2LBRF ;
S_LBRFH=S2LBRFH ;
S_LBRFY=S2LBRFY ;
/* Empty map cell for: S_LBRLTNSHPRB variable wave =  2*/ ;
/* Empty map cell for: S_LBSATCITY   variable wave =  2*/ ;
/* Empty map cell for: S_LBSATFAM    variable wave =  2*/ ;
/* Empty map cell for: S_LBSATFIN    variable wave =  2*/ ;
/* Empty map cell for: S_LBSATHLTH   variable wave =  2*/ ;
/* Empty map cell for: S_LBSATHOME   variable wave =  2*/ ;
/* Empty map cell for: S_LBSATINC    variable wave =  2*/ ;
/* Empty map cell for: S_LBSATLEISUREvariable wave =  2*/ ;
/* Empty map cell for: S_LBSATLIFE   variable wave =  2*/ ;
/* Empty map cell for: S_LBSATWLF    variable wave =  2*/ ;
/* Empty map cell for: S_LBWGTR      variable wave =  2*/ ;
/* Empty map cell for: S_LBWORKPRB   variable wave =  2*/ ;
S_LGMUSA=S2LGMUSA ;
/* Empty map cell for: S_LGMUSW      variable wave =  2*/ ;
S_LHTACT=S2LHTACT ;
S_LIFEIN=S2LIFEIN ;
/* Empty map cell for: S1_LIFT       variable wave =  2*/ ;
S2_LIFT=S2LIFT ;
/* Empty map cell for: S_LIFT        variable wave =  2*/ ;
S_LIFTA=S2LIFTA ;
/* Empty map cell for: S_LIFTW       variable wave =  2*/ ;
S_LIV10=S2LIV10 ;
S_LIV10A=S2LIV10A ;
S_LIV10P=S2LIV10P ;
S_LIV10R=S2LIV10R ;
S_LIV75=S2LIV75 ;
S_LIV75C=S2LIV75C ;
S_LIV75F=S2LIV75F ;
S_LIV75P=S2LIV75P ;
S_LIV75R=S2LIV75R ;
S_LIV85=S2LIV85 ;
S_LIV85C=S2LIV85C ;
S_LIV85F=S2LIV85F ;
S_LIV85P=S2LIV85P ;
S_LIV85R=S2LIV85R ;
S_LIV8XC=S2LIV8XC ;
S_LIV8XF=S2LIV8XF ;
S_LIVBRO=S2LIVBRO ;
S_LIVPAR=S2LIVPAR ;
S_LIVSIB=S2LIVSIB ;
S_LIVSIS=S2LIVSIS ;
S_LOST=S2LOST ;
/* Empty map cell for: S_LTACTF      variable wave =  2*/ ;
S_LTACTN=S2LTACTN ;
S_LTACTP=S2LTACTP ;
/* Empty map cell for: S_LTACTX      variable wave =  2*/ ;
S_LTCPRM=S2LTCPRM ;
S_LUNG=S2LUNG ;
S_LUNGE=S2LUNGE ;
S_LUNGEF=S2LUNGEF ;
S_LUNGF=S2LUNGF ;
S_LUNGQ=S2LUNGQ ;
S_LUNGS=S2LUNGS ;
/* Empty map cell for: S_MAMMOG      variable wave =  2*/ ;
/* Empty map cell for: S1_MAP        variable wave =  2*/ ;
S2_MAP=S2MAP ;
/* Empty map cell for: S_MAP         variable wave =  2*/ ;
S_MAPA=S2MAPA ;
/* Empty map cell for: S_MAPW        variable wave =  2*/ ;
S_MCURLN=S2MCURLN ;
/* Empty map cell for: S_MCWV        variable wave =  2*/ ;
/* Empty map cell for: S_MCWVW       variable wave =  2*/ ;
/* Empty map cell for: S_MDACTX      variable wave =  2*/ ;
S_MDIV=S2MDIV ;
/* Empty map cell for: S_MEALS       variable wave =  2*/ ;
S_MEALSA=S2MEALSA ;
/* Empty map cell for: S_MEALSH      variable wave =  2*/ ;
S_MEALSR=S2MEALSR ;
S2_MEDS=S2MEDS ;
/* Empty map cell for: S_MEDS        variable wave =  2*/ ;
S_MEDSA=S2MEDSA ;
/* Empty map cell for: S_MEDSH       variable wave =  2*/ ;
S_MEDSR=S2MEDSR ;
S_MEDUC=S2MEDUC ;
/* Empty map cell for: S_MEMRY       variable wave =  2*/ ;
/* Empty map cell for: S_MEMRYE      variable wave =  2*/ ;
/* Empty map cell for: S_MEMRYEF     variable wave =  2*/ ;
/* Empty map cell for: S_MEMRYF      variable wave =  2*/ ;
/* Empty map cell for: S_MEMRYQ      variable wave =  2*/ ;
/* Empty map cell for: S_MEMRYS      variable wave =  2*/ ;
S_MEND=S2MEND ;
S_MLEN=S2MLEN ;
S_MLENM=S2MLENM ;
S_MNEV=S2MNEV ;
S_MO=S2MO ;
S_MOBILA=S2MOBILA ;
/* Empty map cell for: S_MOBILW      variable wave =  2*/ ;
S_MOMAGE=S2MOMAGE ;
S_MOMLIV=S2MOMLIV ;
S2_MONEY=S2MONEY ;
/* Empty map cell for: S_MONEY       variable wave =  2*/ ;
S_MONEYA=S2MONEYA ;
/* Empty map cell for: S_MONEYH      variable wave =  2*/ ;
S_MONEYR=S2MONEYR ;
S_MPART=S2MPART ;
S_MRCT=S2MRCT ;
/* Empty map cell for: S_MRPREM      variable wave =  2*/ ;
S_MSTAT=S2MSTAT ;
S_MSTATF=S2MSTATF ;
S_MSTATH=S2MSTATH ;
/* Empty map cell for: S_MSTOT       variable wave =  2*/ ;
S_MWID=S2MWID ;
/* Empty map cell for: S_NHMDAY      variable wave =  2*/ ;
/* Empty map cell for: S_NHMLIV      variable wave =  2*/ ;
/* Empty map cell for: S_NHMMVM      variable wave =  2*/ ;
/* Empty map cell for: S_NHMMVY      variable wave =  2*/ ;
/* Empty map cell for: S_NOTICS      variable wave =  2*/ ;
/* Empty map cell for: S_NOVOC       variable wave =  2*/ ;
S_NRSHOM=S2NRSHOM ;
S_NRSNIT=S2NRSNIT ;
S_NRSTIM=S2NRSTIM ;
/* Empty map cell for: S_NSSCRE      variable wave =  2*/ ;
/* Empty map cell for: S_NSSCSE      variable wave =  2*/ ;
S_OAHDID=S2OAHDID ;
S_OHRSID=S2OHRSID ;
S_OOPMD=S2OOPMD ;
S_OOPMDF=S2OOPMDF ;
/* Empty map cell for: S_OOPMDO      variable wave =  2*/ ;
/* Empty map cell for: S_OOPMDOF     variable wave =  2*/ ;
S_OUTPT=S2OUTPT ;
/* Empty map cell for: S_PAPSM       variable wave =  2*/ ;
/* Empty map cell for: S_PARTD       variable wave =  2*/ ;
S_PENCT=S2PENCT ;
S_PENIC1=S2PENIC1 ;
S_PENIC2=S2PENIC2 ;
S_PENINC=S2PENINC ;
S_PENI_N=S2PENI_N ;
S2_PHONE=S2PHONE ;
/* Empty map cell for: S_PHONE       variable wave =  2*/ ;
S_PHONEA=S2PHONEA ;
/* Empty map cell for: S_PHONEH      variable wave =  2*/ ;
S_PHONER=S2PHONER ;
/* Empty map cell for: S_PMBMI       variable wave =  2*/ ;
/* Empty map cell for: S_PMHGHT      variable wave =  2*/ ;
/* Empty map cell for: S_PMHGHTS     variable wave =  2*/ ;
/* Empty map cell for: S_PMWAIST     variable wave =  2*/ ;
/* Empty map cell for: S_PMWAISTC    variable wave =  2*/ ;
/* Empty map cell for: S_PMWGHT      variable wave =  2*/ ;
/* Empty map cell for: S_PMWGHTF     variable wave =  2*/ ;
/* Empty map cell for: S_PMWGHTS     variable wave =  2*/ ;
/* Empty map cell for: S_PNHM5Y      variable wave =  2*/ ;
/* Empty map cell for: S_PRCHMEM     variable wave =  2*/ ;
S_PRES=S2PRES ;
S_PRMEM=S2PRMEM ;
/* Empty map cell for: S_PROST       variable wave =  2*/ ;
S_PROXY=S2PROXY ;
S_PRPCNT=S2PRPCNT ;
S_PRPRM1=S2PRPRM1 ;
S_PRPRM2=S2PRPRM2 ;
S_PRPRM3=S2PRPRM3 ;
S_PRSRC1=S2PRSRC1 ;
S_PRSRC2=S2PRSRC2 ;
S_PRSRC3=S2PRSRC3 ;
S_PSTMEM=S2PSTMEM ;
S_PSYCH=S2PSYCH ;
S_PSYCHE=S2PSYCHE ;
S_PSYCHEF=S2PSYCHEF ;
S_PSYCHF=S2PSYCHF ;
S_PSYCHQ=S2PSYCHQ ;
S_PSYCHS=S2PSYCHS ;
S_PTYP1=S2PTYP1 ;
S_PTYP2=S2PTYP2 ;
S_PTYP3=S2PTYP3 ;
/* Empty map cell for: S_PTYP4       variable wave =  2*/ ;
/* Empty map cell for: S_PTYPD1      variable wave =  2*/ ;
/* Empty map cell for: S_PTYPD2      variable wave =  2*/ ;
/* Empty map cell for: S_PTYPD3      variable wave =  2*/ ;
/* Empty map cell for: S_PTYPD4      variable wave =  2*/ ;
/* Empty map cell for: S_PTYPF1      variable wave =  2*/ ;
/* Empty map cell for: S_PTYPF2      variable wave =  2*/ ;
/* Empty map cell for: S_PTYPF3      variable wave =  2*/ ;
/* Empty map cell for: S_PTYPF4      variable wave =  2*/ ;
/* Empty map cell for: S_PUFF        variable wave =  2*/ ;
/* Empty map cell for: S_PUFFPOS     variable wave =  2*/ ;
/* Empty map cell for: S1_PUSH       variable wave =  2*/ ;
S2_PUSH=S2PUSH ;
/* Empty map cell for: S_PUSH        variable wave =  2*/ ;
S_PUSHA=S2PUSHA ;
/* Empty map cell for: S_PUSHW       variable wave =  2*/ ;
S_RACEM=S2RACEM ;
S_RELIG=S2RELIG ;
S_RETDTWV=S2RETDTWV ;
S_RETEMP=S2RETEMP ;
/* Empty map cell for: S_RETINC      variable wave =  2*/ ;
/* Empty map cell for: S_RETLIV      variable wave =  2*/ ;
S_RETMON=S2RETMON ;
S_RETSAT=S2RETSAT ;
/* Empty map cell for: S_RETWLT      variable wave =  2*/ ;
/* Empty map cell for: S_RETWRK      variable wave =  2*/ ;
/* Empty map cell for: S_RETWSP      variable wave =  2*/ ;
S_RETYR=S2RETYR ;
/* Empty map cell for: S_RISK        variable wave =  2*/ ;
/* Empty map cell for: S_RISK6       variable wave =  2*/ ;
/* Empty map cell for: S_RPLNYA      variable wave =  2*/ ;
S_RPLNYR=S2RPLNYR ;
/* Empty map cell for: S_RXPREM      variable wave =  2*/ ;
S_RYRCMP=S2RYRCMP ;
/* Empty map cell for: S_SADLF       variable wave =  2*/ ;
S_SAMEJOB=S2SAMEJOB ;
S_SAMEMP=S2SAMEMP ;
S_SAYRET=S2SAYRET ;
S_SCIS=S2SCIS ;
/* Empty map cell for: S_SDIAPL      variable wave =  2*/ ;
/* Empty map cell for: S_SDIAPLM     variable wave =  2*/ ;
/* Empty map cell for: S_SDIAPLY     variable wave =  2*/ ;
/* Empty map cell for: S_SDIAPP      variable wave =  2*/ ;
/* Empty map cell for: S_SDIAPPM     variable wave =  2*/ ;
/* Empty map cell for: S_SDIAPPY     variable wave =  2*/ ;
/* Empty map cell for: S_SDIDEN      variable wave =  2*/ ;
/* Empty map cell for: S_SDIREC      variable wave =  2*/ ;
/* Empty map cell for: S_SDIRECM     variable wave =  2*/ ;
/* Empty map cell for: S_SDIRECY     variable wave =  2*/ ;
/* Empty map cell for: S_SDISTP      variable wave =  2*/ ;
/* Empty map cell for: S_SDISTPM     variable wave =  2*/ ;
/* Empty map cell for: S_SDISTPY     variable wave =  2*/ ;
S_SER7=S2SER7 ;
S_SHLT=S2SHLT ;
S_SHLTC=S2SHLTC ;
S_SHLTCF=S2SHLTCF ;
/* Empty map cell for: S_SHOP        variable wave =  2*/ ;
S_SHOPA=S2SHOPA ;
/* Empty map cell for: S_SHOPH       variable wave =  2*/ ;
S_SHOPR=S2SHOPR ;
/* Empty map cell for: S1_SIT        variable wave =  2*/ ;
S2_SIT=S2SIT ;
/* Empty map cell for: S_SIT         variable wave =  2*/ ;
S_SITA=S2SITA ;
/* Empty map cell for: S_SITW        variable wave =  2*/ ;
/* Empty map cell for: S_SLEEP       variable wave =  2*/ ;
/* Empty map cell for: S_SLEEPE      variable wave =  2*/ ;
/* Empty map cell for: S_SLEEPEF     variable wave =  2*/ ;
/* Empty map cell for: S_SLEEPQ      variable wave =  2*/ ;
S_SLEEPR=S2SLEEPR ;
/* Empty map cell for: S_SLEEPS      variable wave =  2*/ ;
/* Empty map cell for: S_SLEEPX      variable wave =  2*/ ;
S_SLFEMP=S2SLFEMP ;
S_SLFMEM=S2SLFMEM ;
S_SMOKEN=S2SMOKEN ;
S_SMOKEV=S2SMOKEV ;
S_SPCFAC=S2SPCFAC ;
S_SSAPL=S2SSAPL ;
S_SSAPLM=S2SSAPLM ;
S_SSAPLY=S2SSAPLY ;
S_SSAPP=S2SSAPP ;
S_SSAPPM=S2SSAPPM ;
S_SSAPPY=S2SSAPPY ;
S_SSDEN=S2SSDEN ;
S_SSDI=S2SSDI ;
/* Empty map cell for: S_SSIAPL      variable wave =  2*/ ;
/* Empty map cell for: S_SSIAPLM     variable wave =  2*/ ;
/* Empty map cell for: S_SSIAPLY     variable wave =  2*/ ;
/* Empty map cell for: S_SSIAPP      variable wave =  2*/ ;
/* Empty map cell for: S_SSIAPPM     variable wave =  2*/ ;
/* Empty map cell for: S_SSIAPPY     variable wave =  2*/ ;
/* Empty map cell for: S_SSIDEN      variable wave =  2*/ ;
/* Empty map cell for: S_SSIREC      variable wave =  2*/ ;
/* Empty map cell for: S_SSIRECM     variable wave =  2*/ ;
/* Empty map cell for: S_SSIRECY     variable wave =  2*/ ;
/* Empty map cell for: S_SSISTP      variable wave =  2*/ ;
/* Empty map cell for: S_SSISTPM     variable wave =  2*/ ;
/* Empty map cell for: S_SSISTPY     variable wave =  2*/ ;
S_SSREC=S2SSREC ;
S_SSRECM=S2SSRECM ;
S_SSRECY=S2SSRECY ;
S_SSSTP=S2SSSTP ;
S_SSSTPM=S2SSSTPM ;
S_SSSTPY=S2SSSTPY ;
/* Empty map cell for: S_SSWRER      variable wave =  2*/ ;
/* Empty map cell for: S_SSWRNR      variable wave =  2*/ ;
/* Empty map cell for: S_SSWRXA      variable wave =  2*/ ;
/* Empty map cell for: S_SSWSER      variable wave =  2*/ ;
/* Empty map cell for: S_SSWSNR      variable wave =  2*/ ;
/* Empty map cell for: S_SSWSXA      variable wave =  2*/ ;
S_STATUS=S2STATUS ;
/* Empty map cell for: S1_STOOP      variable wave =  2*/ ;
S2_STOOP=S2STOOP ;
/* Empty map cell for: S_STOOP       variable wave =  2*/ ;
S_STOOPA=S2STOOPA ;
/* Empty map cell for: S_STOOPW      variable wave =  2*/ ;
S_STROK=S2STROK ;
S_STROKE=S2STROKE ;
S_STROKEF=S2STROKEF ;
S_STROKF=S2STROKF ;
S_STROKQ=S2STROKQ ;
S_STROKS=S2STROKS ;
/* Empty map cell for: S_TIMWLK      variable wave =  2*/ ;
/* Empty map cell for: S_TIMWLKA     variable wave =  2*/ ;
S_TLIPRM=S2TLIPRM ;
S2_TOILT=S2TOILT ;
/* Empty map cell for: S_TOILT       variable wave =  2*/ ;
S_TOILTA=S2TOILTA ;
S2_TOILTH=S2TOILTH ;
/* Empty map cell for: S_TOILTH      variable wave =  2*/ ;
/* Empty map cell for: S_TOTMBF      variable wave =  2*/ ;
/* Empty map cell for: S_TOTMBI      variable wave =  2*/ ;
/* Empty map cell for: S_TOTMD       variable wave =  2*/ ;
/* Empty map cell for: S_TOTMDF      variable wave =  2*/ ;
/* Empty map cell for: S_TR20        variable wave =  2*/ ;
/* Empty map cell for: S_TR40        variable wave =  2*/ ;
S_TYLTC=S2TYLTC ;
S_ULCER=S2ULCER ;
S_UNEMP=S2UNEMP ;
S_UNION=S2UNION ;
S_UNIONF=S2UNIONF ;
S_VETRN=S2VETRN ;
/* Empty map cell for: S_VGACTF      variable wave =  2*/ ;
S_VGACTN=S2VGACTN ;
S_VGACTP=S2VGACTP ;
/* Empty map cell for: S_VGACTX      variable wave =  2*/ ;
S_VIGACT=S2VIGACT ;
/* Empty map cell for: S_VOCAB       variable wave =  2*/ ;
S_VP=S2VP ;
/* Empty map cell for: S1_WALK1      variable wave =  2*/ ;
S2_WALK1=S2WALK1 ;
/* Empty map cell for: S_WALK1       variable wave =  2*/ ;
S_WALK1A=S2WALK1A ;
/* Empty map cell for: S_WALK1W      variable wave =  2*/ ;
/* Empty map cell for: S1_WALKR      variable wave =  2*/ ;
S2_WALKR=S2WALKR ;
/* Empty map cell for: S_WALKR       variable wave =  2*/ ;
S_WALKRA=S2WALKRA ;
S_WALKRE=S2WALKRE ;
S2_WALKRH=S2WALKRH ;
/* Empty map cell for: S_WALKRH      variable wave =  2*/ ;
/* Empty map cell for: S_WALKRW      variable wave =  2*/ ;
/* Empty map cell for: S1_WALKS      variable wave =  2*/ ;
S2_WALKS=S2WALKS ;
/* Empty map cell for: S_WALKS       variable wave =  2*/ ;
S_WALKSA=S2WALKSA ;
/* Empty map cell for: S_WALKSW      variable wave =  2*/ ;
S_WANDER=S2WANDER ;
S_WEIGHT=S2WEIGHT ;
S_WGFHR=S2WGFHR ;
S_WGFWK=S2WGFWK ;
S_WGIHR=S2WGIHR ;
S_WGIWK=S2WGIWK ;
/* Empty map cell for: S_WHAPPX      variable wave =  2*/ ;
S_WHAPPY=S2WHAPPY ;
S_WLIPRM=S2WLIPRM ;
S_WORK=S2WORK ;
S_WORK2=S2WORK2 ;
S_WORK62=S2WORK62 ;
S_WORK62F=S2WORK62F ;
S_WORK65=S2WORK65 ;
S_WORK65F=S2WORK65F ;
/* Empty map cell for: S_WORK70      variable wave =  2*/ ;
/* Empty map cell for: S_WORK70A     variable wave =  2*/ ;
/* Empty map cell for: S_WORK70AF    variable wave =  2*/ ;
/* Empty map cell for: S_WORK70F     variable wave =  2*/ ;
S_WORKLM=S2WORKLM ;
S_WTCRNH=S2WTCRNH ;
S_WTRESP=S2WTRESP ;
/* Empty map cell for: S_WTR_NH      variable wave =  2*/ ;
S_YR=S2YR ;
if inw=1 then output ;
%put --- Slong table ;
%initvars ;
%put ---- Slong table ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
/* --- RAND variable:HHIDPN  included */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
/* --- RAND variable:HACOHORT  included */ ;
WAVE_NUMBER=3 ;
WAVE_NAME=  'hrs_wave'||strip(put(wave_number,3.))     /* --- Derived variable  */ ;
studyyr= hrs_studyyr(wave_number,
hacohort)     /* --- Derived variable  */ ;
CYEAR='yr1995_96' ;
H_HHID=H3HHID ;
H_HHIDC=H3HHIDC ;
SUBHH= substr(H_HHIDC,7)     /* --- Derived variable  */ ;
INW=INW3 ;
S_HHIDPN=S3HHIDPN ;
/* --- RAND variable:SASSAGEB  included */ ;
/* --- RAND variable:SASSAGEM  included */ ;
/* --- RAND variable:SASSRECV  included */ ;
/* Empty map cell for: S_ACGTOT      variable wave =  3*/ ;
S_ADL5A=S3ADL5A ;
S_ADL5H=S3ADL5H ;
S_ADL6A=S3ADL6A ;
S_ADL6H=S3ADL6H ;
/* Empty map cell for: S_ADLR10      variable wave =  3*/ ;
/* Empty map cell for: S_ADLW        variable wave =  3*/ ;
S_AGEM_B=S3AGEM_B ;
S_AGEM_E=S3AGEM_E ;
S_AGEM_M=S3AGEM_M ;
S_AGEY_B=S3AGEY_B ;
S_AGEY_E=S3AGEY_E ;
S_AGEY_M=S3AGEY_M ;
S_AHDSMP=S3AHDSMP ;
/* Empty map cell for: S_AIMR10      variable wave =  3*/ ;
S_ALONE=S3ALONE ;
/* Empty map cell for: S_ALZHE       variable wave =  3*/ ;
/* Empty map cell for: S_ALZHEE      variable wave =  3*/ ;
/* Empty map cell for: S_ALZHEEF     variable wave =  3*/ ;
/* Empty map cell for: S_ALZHEF      variable wave =  3*/ ;
/* Empty map cell for: S_ALZHEQ      variable wave =  3*/ ;
/* Empty map cell for: S_ALZHES      variable wave =  3*/ ;
/* Empty map cell for: S_AMSTOT      variable wave =  3*/ ;
S_ANS3PQ=S3ANS3PQ ;
/* Empty map cell for: S1_ARMS       variable wave =  3*/ ;
/* Empty map cell for: S2_ARMS       variable wave =  3*/ ;
S_ARMS=S3ARMS ;
S_ARMSA=S3ARMSA ;
/* Empty map cell for: S_ARMSW       variable wave =  3*/ ;
S_ARTHR=S3ARTHR ;
S_ARTHRE=S3ARTHRE ;
S_ARTHREF=S3ARTHREF ;
S_ARTHRF=S3ARTHRF ;
S_ARTHRQ=S3ARTHRQ ;
S_ARTHRS=S3ARTHRS ;
/* Empty map cell for: S_ATR20       variable wave =  3*/ ;
S_BACK=S3BACK ;
/* Empty map cell for: S_BALFUL      variable wave =  3*/ ;
/* Empty map cell for: S_BALFULC     variable wave =  3*/ ;
/* Empty map cell for: S_BALFULT     variable wave =  3*/ ;
/* Empty map cell for: S_BALSBS      variable wave =  3*/ ;
/* Empty map cell for: S_BALSBSC     variable wave =  3*/ ;
/* Empty map cell for: S_BALSEMI     variable wave =  3*/ ;
/* Empty map cell for: S_BALSEMIC    variable wave =  3*/ ;
/* Empty map cell for: S1_BATH       variable wave =  3*/ ;
/* Empty map cell for: S2_BATH       variable wave =  3*/ ;
S_BATH=S3BATH ;
S_BATHA=S3BATHA ;
/* Empty map cell for: S2_BATHH      variable wave =  3*/ ;
S_BATHH=S3BATHH ;
/* Empty map cell for: S_BATHW       variable wave =  3*/ ;
S_BDATE=S3BDATE ;
/* Empty map cell for: S1_BED        variable wave =  3*/ ;
/* Empty map cell for: S2_BED        variable wave =  3*/ ;
S_BED=S3BED ;
S_BEDA=S3BEDA ;
S_BEDE=S3BEDE ;
/* Empty map cell for: S2_BEDH       variable wave =  3*/ ;
S_BEDH=S3BEDH ;
/* Empty map cell for: S_BEDW        variable wave =  3*/ ;
S_BEQ100=S3BEQ100 ;
S_BEQ10K=S3BEQ10K ;
/* Empty map cell for: S_BEQ500      variable wave =  3*/ ;
S_BEQANY=S3BEQANY ;
/* Empty map cell for: S_BEQLRG      variable wave =  3*/ ;
S_BFLAG=S3BFLAG ;
S_BMI=S3BMI ;
S_BMONTH=S3BMONTH ;
/* Empty map cell for: S_BPDIA       variable wave =  3*/ ;
S_BPLACE=S3BPLACE ;
S_BPLACF=S3BPLACF ;
/* Empty map cell for: S_BPPOS       variable wave =  3*/ ;
/* Empty map cell for: S_BPPULS      variable wave =  3*/ ;
/* Empty map cell for: S_BPSYS       variable wave =  3*/ ;
S_BREAST=S3BREAST ;
S_BWC20=S3BWC20 ;
S_BWC86=S3BWC86 ;
S_BYEAR=S3BYEAR ;
S_CACT=S3CACT ;
/* Empty map cell for: S1_CALC       variable wave =  3*/ ;
/* Empty map cell for: S2_CALC       variable wave =  3*/ ;
/* Empty map cell for: S_CALCA       variable wave =  3*/ ;
/* Empty map cell for: S_CALCW       variable wave =  3*/ ;
S_CANCR=S3CANCR ;
S_CANCRE=S3CANCRE ;
S_CANCREF=S3CANCREF ;
S_CANCRF=S3CANCRF ;
S_CANCRQ=S3CANCRQ ;
S_CANCRS=S3CANCRS ;
S_CENDIV=S3CENDIV ;
S_CENREG=S3CENREG ;
S_CESD=S3CESD ;
S_CESDM=S3CESDM ;
/* Empty map cell for: S1_CHAIR      variable wave =  3*/ ;
/* Empty map cell for: S2_CHAIR      variable wave =  3*/ ;
S_CHAIR=S3CHAIR ;
S_CHAIRA=S3CHAIRA ;
/* Empty map cell for: S_CHAIRW      variable wave =  3*/ ;
S_CHOLST=S3CHOLST ;
/* Empty map cell for: S_CLAIMED     variable wave =  3*/ ;
/* Empty map cell for: S1_CLIM1      variable wave =  3*/ ;
/* Empty map cell for: S2_CLIM1      variable wave =  3*/ ;
S_CLIM1=S3CLIM1 ;
S_CLIM1A=S3CLIM1A ;
/* Empty map cell for: S_CLIM1W      variable wave =  3*/ ;
/* Empty map cell for: S1_CLIMS      variable wave =  3*/ ;
/* Empty map cell for: S2_CLIMS      variable wave =  3*/ ;
S_CLIMS=S3CLIMS ;
S_CLIMSA=S3CLIMSA ;
/* Empty map cell for: S_CLIMSW      variable wave =  3*/ ;
S_COGTOT=S3COGTOT ;
S_COHBYR=S3COHBYR ;
S_COHORT=S3COHORT ;
/* Empty map cell for: S_COMP        variable wave =  3*/ ;
/* Empty map cell for: S_COMPW       variable wave =  3*/ ;
S_CONDE=S3CONDE ;
S_CONDEF=S3CONDEF ;
S_CONDS=S3CONDS ;
S_CONDSF=S3CONDSF ;
S_CONDSP=S3CONDSP ;
S_COVR=S3COVR ;
S_COVRT=S3COVRT ;
S_COVS=S3COVS ;
S_DADAGE=S3DADAGE ;
S_DADLIV=S3DADLIV ;
S_DAGE_M=S3DAGE_M ;
S_DAGE_Y=S3DAGE_Y ;
S_DCBAL1=S3DCBAL1 ;
S_DCBAL2=S3DCBAL2 ;
S_DCBAL3=S3DCBAL3 ;
/* Empty map cell for: S_DCBAL4      variable wave =  3*/ ;
S_DCBENE1=S3DCBENE1 ;
S_DCBENE2=S3DCBENE2 ;
S_DCBENE3=S3DCBENE3 ;
/* Empty map cell for: S_DCBENE4     variable wave =  3*/ ;
S_DCCONT1=S3DCCONT1 ;
S_DCCONT2=S3DCCONT2 ;
S_DCCONT3=S3DCCONT3 ;
/* Empty map cell for: S_DCCONT4     variable wave =  3*/ ;
S_DCMODE1=S3DCMODE1 ;
S_DCMODE2=S3DCMODE2 ;
S_DCMODE3=S3DCMODE3 ;
/* Empty map cell for: S_DCMODE4     variable wave =  3*/ ;
S_DCPCT1=S3DCPCT1 ;
S_DCPCT2=S3DCPCT2 ;
S_DCPCT3=S3DCPCT3 ;
/* Empty map cell for: S_DCPCT4      variable wave =  3*/ ;
S_DDATE=S3DDATE ;
/* Empty map cell for: S_DEMEN       variable wave =  3*/ ;
/* Empty map cell for: S_DEMENE      variable wave =  3*/ ;
/* Empty map cell for: S_DEMENEF     variable wave =  3*/ ;
/* Empty map cell for: S_DEMENF      variable wave =  3*/ ;
/* Empty map cell for: S_DEMENQ      variable wave =  3*/ ;
/* Empty map cell for: S_DEMENS      variable wave =  3*/ ;
S_DENTST=S3DENTST ;
S_DEPRES=S3DEPRES ;
/* Empty map cell for: S_DEPREX      variable wave =  3*/ ;
S_DIAB=S3DIAB ;
S_DIABE=S3DIABE ;
S_DIABEF=S3DIABEF ;
S_DIABF=S3DIABF ;
S_DIABQ=S3DIABQ ;
S_DIABS=S3DIABS ;
/* Empty map cell for: S1_DIME       variable wave =  3*/ ;
/* Empty map cell for: S2_DIME       variable wave =  3*/ ;
S_DIME=S3DIME ;
S_DIMEA=S3DIMEA ;
/* Empty map cell for: S_DIMEW       variable wave =  3*/ ;
S_DLRC=S3DLRC ;
/* Empty map cell for: S_DLRC20      variable wave =  3*/ ;
S_DMONTH=S3DMONTH ;
S_DOCTIM=S3DOCTIM ;
S_DOCTOR=S3DOCTOR ;
/* Empty map cell for: S1_DRESS      variable wave =  3*/ ;
/* Empty map cell for: S2_DRESS      variable wave =  3*/ ;
S_DRESS=S3DRESS ;
S_DRESSA=S3DRESSA ;
/* Empty map cell for: S2_DRESSH     variable wave =  3*/ ;
S_DRESSH=S3DRESSH ;
/* Empty map cell for: S_DRESSW      variable wave =  3*/ ;
S_DRINK=S3DRINK ;
S_DRINKD=S3DRINKD ;
S_DRINKN=S3DRINKN ;
/* Empty map cell for: S_DRINKR      variable wave =  3*/ ;
S_DRUGS=S3DRUGS ;
/* Empty map cell for: S_DSIAMT      variable wave =  3*/ ;
S_DSRC=S3DSRC ;
/* Empty map cell for: S_DSSAMT      variable wave =  3*/ ;
S_DSTAT=S3DSTAT ;
S_DTIMTDTH=S3DTIMTDTH ;
S_DW=S3DW ;
S_DY=S3DY ;
S_DYEAR=S3DYEAR ;
/* Empty map cell for: S1_EAT        variable wave =  3*/ ;
/* Empty map cell for: S2_EAT        variable wave =  3*/ ;
S_EAT=S3EAT ;
S_EATA=S3EATA ;
/* Empty map cell for: S2_EATH       variable wave =  3*/ ;
S_EATH=S3EATH ;
/* Empty map cell for: S_EATW        variable wave =  3*/ ;
S_EDEGRM=S3EDEGRM ;
S_EDUC=S3EDUC ;
S_EDYRS=S3EDYRS ;
S_EFFORT=S3EFFORT ;
/* Empty map cell for: S_EFFORX      variable wave =  3*/ ;
S_ENLIFE=S3ENLIFE ;
/* Empty map cell for: S_ENLIFX      variable wave =  3*/ ;
S_EVBRN=S3EVBRN ;
S_EVBRNF=S3EVBRNF ;
S_FAMR=S3FAMR ;
S_FBWC20=S3FBWC20 ;
S_FBWC86=S3FBWC86 ;
S_FCACT=S3FCACT ;
S_FDLRC=S3FDLRC ;
S_FDW=S3FDW ;
S_FDY=S3FDY ;
S_FEDUC=S3FEDUC ;
S_FIMRC=S3FIMRC ;
S_FINEA=S3FINEA ;
/* Empty map cell for: S_FINPLN      variable wave =  3*/ ;
S_FINR=S3FINR ;
S_FLAG=S3FLAG ;
S_FLONE=S3FLONE ;
/* Empty map cell for: S_FLONEX      variable wave =  3*/ ;
S_FLUSHT=S3FLUSHT ;
S_FMO=S3FMO ;
S_FPRES=S3FPRES ;
S_FPSTME=S3FPSTME ;
S_FSAD=S3FSAD ;
/* Empty map cell for: S_FSADX       variable wave =  3*/ ;
S_FSCIS=S3FSCIS ;
S_FSER7=S3FSER7 ;
S_FSIZE=S3FSIZE ;
S_FSIZEF=S3FSIZEF ;
S_FSLFME=S3FSLFME ;
S_FVOCAB=S3FVOCAB ;
S_FVP=S3FVP ;
S_FYR=S3FYR ;
S_GENDER=S3GENDER ;
S_GOING=S3GOING ;
/* Empty map cell for: S_GOINGX      variable wave =  3*/ ;
S_GOVMD=S3GOVMD ;
S_GOVMR=S3GOVMR ;
S_GOVOT=S3GOVOT ;
S_GOVVA=S3GOVVA ;
S_GROSSA=S3GROSSA ;
/* Empty map cell for: S_GRP         variable wave =  3*/ ;
/* Empty map cell for: S_GRPDOM      variable wave =  3*/ ;
/* Empty map cell for: S_GRPL        variable wave =  3*/ ;
/* Empty map cell for: S_GRPPOS      variable wave =  3*/ ;
/* Empty map cell for: S_GRPR        variable wave =  3*/ ;
S_HALUC=S3HALUC ;
/* Empty map cell for: S_HDLR20      variable wave =  3*/ ;
S_HEART=S3HEART ;
S_HEARTE=S3HEARTE ;
S_HEARTEF=S3HEARTEF ;
S_HEARTF=S3HEARTF ;
S_HEARTQ=S3HEARTQ ;
S_HEARTS=S3HEARTS ;
S_HECOV1=S3HECOV1 ;
S_HECOV2=S3HECOV2 ;
/* Empty map cell for: S_HECOV3      variable wave =  3*/ ;
S_HEIGHT=S3HEIGHT ;
S_HENUM=S3HENUM ;
S_HERET=S3HERET ;
/* Empty map cell for: S_HERTR1      variable wave =  3*/ ;
/* Empty map cell for: S_HERTR2      variable wave =  3*/ ;
/* Empty map cell for: S_HERTR3      variable wave =  3*/ ;
S_HERTS1=S3HERTS1 ;
S_HERTS2=S3HERTS2 ;
/* Empty map cell for: S_HERTS3      variable wave =  3*/ ;
S_HESRC1=S3HESRC1 ;
S_HESRC2=S3HESRC2 ;
/* Empty map cell for: S_HESRC3      variable wave =  3*/ ;
S_HHIDPN=S3HHIDPN ;
S_HIBP=S3HIBP ;
S_HIBPE=S3HIBPE ;
S_HIBPEF=S3HIBPEF ;
S_HIBPF=S3HIBPF ;
S_HIBPQ=S3HIBPQ ;
S_HIBPS=S3HIBPS ;
S_HIGOV=S3HIGOV ;
S_HILTC=S3HILTC ;
/* Empty map cell for: S_HIMR20      variable wave =  3*/ ;
S_HIOTHP=S3HIOTHP ;
S_HISPAN=S3HISPAN ;
S_HLPDYSF=S3HLPDYSF ;
S_HLPDYSNF=S3HLPDYSNF ;
S_HLPDYSP=S3HLPDYSP ;
S_HLPDYST=S3HLPDYST ;
S_HLPDYSU=S3HLPDYSU ;
S_HLPHRSF=S3HLPHRSF ;
S_HLPHRSNF=S3HLPHRSNF ;
S_HLPHRSP=S3HLPHRSP ;
S_HLPHRST=S3HLPHRST ;
S_HLPHRSU=S3HLPHRSU ;
S_HLPPDFA=S3HLPPDFA ;
S_HLPPDFN=S3HLPPDFN ;
S_HLPPDNFA=S3HLPPDNFA ;
S_HLPPDNFN=S3HLPPDNFN ;
S_HLPPDTA=S3HLPPDTA ;
S_HLPPDTN=S3HLPPDTN ;
S_HLPRFN=S3HLPRFN ;
S_HLPRNFN=S3HLPRNFN ;
S_HLPRPN=S3HLPRPN ;
S_HLPRTN=S3HLPRTN ;
S_HLPRUN=S3HLPRUN ;
S_HLTC3=S3HLTC3 ;
S_HLTC5=S3HLTC5 ;
S_HLTC5F=S3HLTC5F ;
S_HLTHLM=S3HLTHLM ;
S_HOMCAR=S3HOMCAR ;
S_HOSP=S3HOSP ;
S_HRSAMP=S3HRSAMP ;
S_HSPNIT=S3HSPNIT ;
S_HSPTIM=S3HSPTIM ;
/* Empty map cell for: S_HSWRKF      variable wave =  3*/ ;
/* Empty map cell for: S_HTR40       variable wave =  3*/ ;
S_IADL5A=S3IADL5A ;
S_IADL5H=S3IADL5H ;
S_IANN=S3IANN ;
S_IEARN=S3IEARN ;
S_IFANN=S3IFANN ;
S_IFEARN=S3IFEARN ;
S_IFGXFR=S3IFGXFR ;
/* Empty map cell for: S_IFIRAW      variable wave =  3*/ ;
/* Empty map cell for: S_IFIRAWY1    variable wave =  3*/ ;
S_IFPEN=S3IFPEN ;
S_IFPENA=S3IFPENA ;
S_IFSDI=S3IFSDI ;
S_IFSRET=S3IFSRET ;
S1_IFSSDI=S3IFSSDI ;
/* Empty map cell for: S_IFSSDI      variable wave =  3*/ ;
/* Empty map cell for: S_IFSSI       variable wave =  3*/ ;
S_IFUNEM=S3IFUNEM ;
/* Empty map cell for: S1_IFUNWC     variable wave =  3*/ ;
S2_IFUNWC=S3IFUNWC ;
S_IFWCMP=S3IFWCMP ;
S_IGXFR=S3IGXFR ;
/* Empty map cell for: S_IIRAW       variable wave =  3*/ ;
/* Empty map cell for: S_IIRAWY1     variable wave =  3*/ ;
S_IMRC=S3IMRC ;
/* Empty map cell for: S_IMRC20      variable wave =  3*/ ;
S_INHER=S3INHER ;
S_INHPE=S3INHPE ;
S_INHPFN=S3INHPFN ;
S_INHPNFN=S3INHPNFN ;
S_INHPPN=S3INHPPN ;
S_INHPTN=S3INHPTN ;
S_INHPUN=S3INHPUN ;
S_INLBRF=S3INLBRF ;
S_IPEN=S3IPEN ;
S_IPENA=S3IPENA ;
S_ISDI=S3ISDI ;
S_ISRET=S3ISRET ;
S_ISSDI=S3ISSDI ;
S_ISSI=S3ISSI ;
S_IUNEM=S3IUNEM ;
S_IUNWC=S3IUNWC ;
S_IWBEG=S3IWBEG ;
/* Empty map cell for: S_IWBEGF      variable wave =  3*/ ;
S_IWCMP=S3IWCMP ;
S_IWEND=S3IWEND ;
S_IWENDF=S3IWENDF ;
S_IWENDM=S3IWENDM ;
S_IWENDY=S3IWENDY ;
S_IWMID=S3IWMID ;
S_IWMIDF=S3IWMIDF ;
S_IWSTAT=S3IWSTAT ;
S_JCIND=S3JCIND ;
/* Empty map cell for: S_JCINDB      variable wave =  3*/ ;
/* Empty map cell for: S_JCINDC      variable wave =  3*/ ;
S_JCOCC=S3JCOCC ;
S_JCOCCA=S3JCOCCA ;
/* Empty map cell for: S_JCOCCB      variable wave =  3*/ ;
/* Empty map cell for: S_JCOCCC      variable wave =  3*/ ;
S_JCPEN=S3JCPEN ;
S_JCPENF=S3JCPENF ;
S_JCTEN=S3JCTEN ;
S_JHOUR2=S3JHOUR2 ;
S_JHOURS=S3JHOURS ;
S_JJOBS=S3JJOBS ;
S_JLASTM=S3JLASTM ;
S_JLASTY=S3JLASTY ;
S_JLIFT=S3JLIFT ;
S_JLIND=S3JLIND ;
/* Empty map cell for: S_JLINDB      variable wave =  3*/ ;
/* Empty map cell for: S_JLINDC      variable wave =  3*/ ;
S_JLMIS=S3JLMIS ;
S_JLOCC=S3JLOCC ;
S_JLOCCA=S3JLOCCA ;
/* Empty map cell for: S_JLOCCB      variable wave =  3*/ ;
/* Empty map cell for: S_JLOCCC      variable wave =  3*/ ;
S_JLTEN=S3JLTEN ;
S_JLTENF=S3JLTENF ;
S_JMISS=S3JMISS ;
S_JNJOB=S3JNJOB ;
S_JNJOB5=S3JNJOB5 ;
/* Empty map cell for: S1_JOG        variable wave =  3*/ ;
/* Empty map cell for: S2_JOG        variable wave =  3*/ ;
S_JOG=S3JOG ;
S_JOGA=S3JOGA ;
/* Empty map cell for: S_JOGW        variable wave =  3*/ ;
S_JPHYS=S3JPHYS ;
S_JSIGHT=S3JSIGHT ;
S_JSTOOP=S3JSTOOP ;
S_JSTRES=S3JSTRES ;
S_JWEEK2=S3JWEEK2 ;
S_JWEEKS=S3JWEEKS ;
S_JYEARM=S3JYEARM ;
S_JYEARS=S3JYEARS ;
/* Empty map cell for: S_LBAGR       variable wave =  3*/ ;
/* Empty map cell for: S_LBASSISTPRB variable wave =  3*/ ;
/* Empty map cell for: S_LBCOMP      variable wave =  3*/ ;
/* Empty map cell for: S_LBCON10     variable wave =  3*/ ;
/* Empty map cell for: S_LBCON5      variable wave =  3*/ ;
/* Empty map cell for: S_LBELIG      variable wave =  3*/ ;
/* Empty map cell for: S_LBEXT       variable wave =  3*/ ;
/* Empty map cell for: S_LBFAMDRUGPRBvariable wave =  3*/ ;
/* Empty map cell for: S_LBFAMHLTHPRBvariable wave =  3*/ ;
/* Empty map cell for: S_LBFINPRB    variable wave =  3*/ ;
/* Empty map cell for: S_LBHLTHPRB   variable wave =  3*/ ;
/* Empty map cell for: S_LBHOUSEPRB  variable wave =  3*/ ;
/* Empty map cell for: S_LBLONELY11  variable wave =  3*/ ;
/* Empty map cell for: S_LBLONELY3   variable wave =  3*/ ;
/* Empty map cell for: S_LBNEGAFFECT variable wave =  3*/ ;
/* Empty map cell for: S_LBNEGAFFECT6variable wave =  3*/ ;
/* Empty map cell for: S_LBNEUR      variable wave =  3*/ ;
/* Empty map cell for: S_LBONCHRSTR  variable wave =  3*/ ;
/* Empty map cell for: S_LBOPEN      variable wave =  3*/ ;
/* Empty map cell for: S_LBPOSAFFECT variable wave =  3*/ ;
/* Empty map cell for: S_LBPOSAFFECT6variable wave =  3*/ ;
S_LBRF=S3LBRF ;
S_LBRFH=S3LBRFH ;
S_LBRFY=S3LBRFY ;
/* Empty map cell for: S_LBRLTNSHPRB variable wave =  3*/ ;
/* Empty map cell for: S_LBSATCITY   variable wave =  3*/ ;
/* Empty map cell for: S_LBSATFAM    variable wave =  3*/ ;
/* Empty map cell for: S_LBSATFIN    variable wave =  3*/ ;
/* Empty map cell for: S_LBSATHLTH   variable wave =  3*/ ;
/* Empty map cell for: S_LBSATHOME   variable wave =  3*/ ;
/* Empty map cell for: S_LBSATINC    variable wave =  3*/ ;
/* Empty map cell for: S_LBSATLEISUREvariable wave =  3*/ ;
/* Empty map cell for: S_LBSATLIFE   variable wave =  3*/ ;
/* Empty map cell for: S_LBSATWLF    variable wave =  3*/ ;
/* Empty map cell for: S_LBWGTR      variable wave =  3*/ ;
/* Empty map cell for: S_LBWORKPRB   variable wave =  3*/ ;
S_LGMUSA=S3LGMUSA ;
/* Empty map cell for: S_LGMUSW      variable wave =  3*/ ;
/* Empty map cell for: S_LHTACT      variable wave =  3*/ ;
S_LIFEIN=S3LIFEIN ;
/* Empty map cell for: S1_LIFT       variable wave =  3*/ ;
/* Empty map cell for: S2_LIFT       variable wave =  3*/ ;
S_LIFT=S3LIFT ;
S_LIFTA=S3LIFTA ;
/* Empty map cell for: S_LIFTW       variable wave =  3*/ ;
S_LIV10=S3LIV10 ;
S_LIV10A=S3LIV10A ;
S_LIV10P=S3LIV10P ;
S_LIV10R=S3LIV10R ;
S_LIV75=S3LIV75 ;
S_LIV75C=S3LIV75C ;
S_LIV75F=S3LIV75F ;
S_LIV75P=S3LIV75P ;
S_LIV75R=S3LIV75R ;
S_LIV85=S3LIV85 ;
S_LIV85C=S3LIV85C ;
S_LIV85F=S3LIV85F ;
S_LIV85P=S3LIV85P ;
S_LIV85R=S3LIV85R ;
S_LIV8XC=S3LIV8XC ;
S_LIV8XF=S3LIV8XF ;
S_LIVBRO=S3LIVBRO ;
S_LIVPAR=S3LIVPAR ;
S_LIVSIB=S3LIVSIB ;
S_LIVSIS=S3LIVSIS ;
S_LOST=S3LOST ;
/* Empty map cell for: S_LTACTF      variable wave =  3*/ ;
/* Empty map cell for: S_LTACTN      variable wave =  3*/ ;
/* Empty map cell for: S_LTACTP      variable wave =  3*/ ;
/* Empty map cell for: S_LTACTX      variable wave =  3*/ ;
S_LTCPRM=S3LTCPRM ;
S_LUNG=S3LUNG ;
S_LUNGE=S3LUNGE ;
S_LUNGEF=S3LUNGEF ;
S_LUNGF=S3LUNGF ;
S_LUNGQ=S3LUNGQ ;
S_LUNGS=S3LUNGS ;
S_MAMMOG=S3MAMMOG ;
/* Empty map cell for: S1_MAP        variable wave =  3*/ ;
/* Empty map cell for: S2_MAP        variable wave =  3*/ ;
S_MAP=S3MAP ;
S_MAPA=S3MAPA ;
/* Empty map cell for: S_MAPW        variable wave =  3*/ ;
S_MCURLN=S3MCURLN ;
/* Empty map cell for: S_MCWV        variable wave =  3*/ ;
/* Empty map cell for: S_MCWVW       variable wave =  3*/ ;
/* Empty map cell for: S_MDACTX      variable wave =  3*/ ;
S_MDIV=S3MDIV ;
S_MEALS=S3MEALS ;
S_MEALSA=S3MEALSA ;
S_MEALSH=S3MEALSH ;
/* Empty map cell for: S_MEALSR      variable wave =  3*/ ;
/* Empty map cell for: S2_MEDS       variable wave =  3*/ ;
S_MEDS=S3MEDS ;
S_MEDSA=S3MEDSA ;
S_MEDSH=S3MEDSH ;
/* Empty map cell for: S_MEDSR       variable wave =  3*/ ;
S_MEDUC=S3MEDUC ;
/* Empty map cell for: S_MEMRY       variable wave =  3*/ ;
/* Empty map cell for: S_MEMRYE      variable wave =  3*/ ;
/* Empty map cell for: S_MEMRYEF     variable wave =  3*/ ;
/* Empty map cell for: S_MEMRYF      variable wave =  3*/ ;
/* Empty map cell for: S_MEMRYQ      variable wave =  3*/ ;
/* Empty map cell for: S_MEMRYS      variable wave =  3*/ ;
S_MEND=S3MEND ;
S_MLEN=S3MLEN ;
S_MLENM=S3MLENM ;
S_MNEV=S3MNEV ;
S_MO=S3MO ;
S_MOBILA=S3MOBILA ;
/* Empty map cell for: S_MOBILW      variable wave =  3*/ ;
S_MOMAGE=S3MOMAGE ;
S_MOMLIV=S3MOMLIV ;
/* Empty map cell for: S2_MONEY      variable wave =  3*/ ;
S_MONEY=S3MONEY ;
S_MONEYA=S3MONEYA ;
S_MONEYH=S3MONEYH ;
/* Empty map cell for: S_MONEYR      variable wave =  3*/ ;
S_MPART=S3MPART ;
S_MRCT=S3MRCT ;
S_MRPREM=S3MRPREM ;
S_MSTAT=S3MSTAT ;
S_MSTATF=S3MSTATF ;
S_MSTATH=S3MSTATH ;
S_MSTOT=S3MSTOT ;
S_MWID=S3MWID ;
S_NHMDAY=S3NHMDAY ;
S_NHMLIV=S3NHMLIV ;
S_NHMMVM=S3NHMMVM ;
S_NHMMVY=S3NHMMVY ;
/* Empty map cell for: S_NOTICS      variable wave =  3*/ ;
/* Empty map cell for: S_NOVOC       variable wave =  3*/ ;
S_NRSHOM=S3NRSHOM ;
S_NRSNIT=S3NRSNIT ;
S_NRSTIM=S3NRSTIM ;
/* Empty map cell for: S_NSSCRE      variable wave =  3*/ ;
/* Empty map cell for: S_NSSCSE      variable wave =  3*/ ;
S_OAHDID=S3OAHDID ;
S_OHRSID=S3OHRSID ;
S_OOPMD=S3OOPMD ;
S_OOPMDF=S3OOPMDF ;
/* Empty map cell for: S_OOPMDO      variable wave =  3*/ ;
/* Empty map cell for: S_OOPMDOF     variable wave =  3*/ ;
S_OUTPT=S3OUTPT ;
S_PAPSM=S3PAPSM ;
/* Empty map cell for: S_PARTD       variable wave =  3*/ ;
S_PENCT=S3PENCT ;
S_PENIC1=S3PENIC1 ;
S_PENIC2=S3PENIC2 ;
S_PENINC=S3PENINC ;
S_PENI_N=S3PENI_N ;
/* Empty map cell for: S2_PHONE      variable wave =  3*/ ;
S_PHONE=S3PHONE ;
S_PHONEA=S3PHONEA ;
S_PHONEH=S3PHONEH ;
/* Empty map cell for: S_PHONER      variable wave =  3*/ ;
/* Empty map cell for: S_PMBMI       variable wave =  3*/ ;
/* Empty map cell for: S_PMHGHT      variable wave =  3*/ ;
/* Empty map cell for: S_PMHGHTS     variable wave =  3*/ ;
/* Empty map cell for: S_PMWAIST     variable wave =  3*/ ;
/* Empty map cell for: S_PMWAISTC    variable wave =  3*/ ;
/* Empty map cell for: S_PMWGHT      variable wave =  3*/ ;
/* Empty map cell for: S_PMWGHTF     variable wave =  3*/ ;
/* Empty map cell for: S_PMWGHTS     variable wave =  3*/ ;
/* Empty map cell for: S_PNHM5Y      variable wave =  3*/ ;
/* Empty map cell for: S_PRCHMEM     variable wave =  3*/ ;
S_PRES=S3PRES ;
S_PRMEM=S3PRMEM ;
S_PROST=S3PROST ;
S_PROXY=S3PROXY ;
S_PRPCNT=S3PRPCNT ;
S_PRPRM1=S3PRPRM1 ;
S_PRPRM2=S3PRPRM2 ;
S_PRPRM3=S3PRPRM3 ;
S_PRSRC1=S3PRSRC1 ;
S_PRSRC2=S3PRSRC2 ;
S_PRSRC3=S3PRSRC3 ;
S_PSTMEM=S3PSTMEM ;
S_PSYCH=S3PSYCH ;
S_PSYCHE=S3PSYCHE ;
S_PSYCHEF=S3PSYCHEF ;
S_PSYCHF=S3PSYCHF ;
S_PSYCHQ=S3PSYCHQ ;
S_PSYCHS=S3PSYCHS ;
S_PTYP1=S3PTYP1 ;
S_PTYP2=S3PTYP2 ;
S_PTYP3=S3PTYP3 ;
/* Empty map cell for: S_PTYP4       variable wave =  3*/ ;
/* Empty map cell for: S_PTYPD1      variable wave =  3*/ ;
/* Empty map cell for: S_PTYPD2      variable wave =  3*/ ;
/* Empty map cell for: S_PTYPD3      variable wave =  3*/ ;
/* Empty map cell for: S_PTYPD4      variable wave =  3*/ ;
/* Empty map cell for: S_PTYPF1      variable wave =  3*/ ;
/* Empty map cell for: S_PTYPF2      variable wave =  3*/ ;
/* Empty map cell for: S_PTYPF3      variable wave =  3*/ ;
/* Empty map cell for: S_PTYPF4      variable wave =  3*/ ;
/* Empty map cell for: S_PUFF        variable wave =  3*/ ;
/* Empty map cell for: S_PUFFPOS     variable wave =  3*/ ;
/* Empty map cell for: S1_PUSH       variable wave =  3*/ ;
/* Empty map cell for: S2_PUSH       variable wave =  3*/ ;
S_PUSH=S3PUSH ;
S_PUSHA=S3PUSHA ;
/* Empty map cell for: S_PUSHW       variable wave =  3*/ ;
S_RACEM=S3RACEM ;
S_RELIG=S3RELIG ;
S_RETDTWV=S3RETDTWV ;
S_RETEMP=S3RETEMP ;
/* Empty map cell for: S_RETINC      variable wave =  3*/ ;
/* Empty map cell for: S_RETLIV      variable wave =  3*/ ;
S_RETMON=S3RETMON ;
S_RETSAT=S3RETSAT ;
/* Empty map cell for: S_RETWLT      variable wave =  3*/ ;
/* Empty map cell for: S_RETWRK      variable wave =  3*/ ;
/* Empty map cell for: S_RETWSP      variable wave =  3*/ ;
S_RETYR=S3RETYR ;
/* Empty map cell for: S_RISK        variable wave =  3*/ ;
/* Empty map cell for: S_RISK6       variable wave =  3*/ ;
S_RPLNYA=S3RPLNYA ;
S_RPLNYR=S3RPLNYR ;
/* Empty map cell for: S_RXPREM      variable wave =  3*/ ;
S_RYRCMP=S3RYRCMP ;
S_SADLF=S3SADLF ;
S_SAMEJOB=S3SAMEJOB ;
S_SAMEMP=S3SAMEMP ;
S_SAYRET=S3SAYRET ;
S_SCIS=S3SCIS ;
/* Empty map cell for: S_SDIAPL      variable wave =  3*/ ;
/* Empty map cell for: S_SDIAPLM     variable wave =  3*/ ;
/* Empty map cell for: S_SDIAPLY     variable wave =  3*/ ;
/* Empty map cell for: S_SDIAPP      variable wave =  3*/ ;
/* Empty map cell for: S_SDIAPPM     variable wave =  3*/ ;
/* Empty map cell for: S_SDIAPPY     variable wave =  3*/ ;
/* Empty map cell for: S_SDIDEN      variable wave =  3*/ ;
/* Empty map cell for: S_SDIREC      variable wave =  3*/ ;
/* Empty map cell for: S_SDIRECM     variable wave =  3*/ ;
/* Empty map cell for: S_SDIRECY     variable wave =  3*/ ;
/* Empty map cell for: S_SDISTP      variable wave =  3*/ ;
/* Empty map cell for: S_SDISTPM     variable wave =  3*/ ;
/* Empty map cell for: S_SDISTPY     variable wave =  3*/ ;
S_SER7=S3SER7 ;
S_SHLT=S3SHLT ;
S_SHLTC=S3SHLTC ;
S_SHLTCF=S3SHLTCF ;
S_SHOP=S3SHOP ;
S_SHOPA=S3SHOPA ;
S_SHOPH=S3SHOPH ;
/* Empty map cell for: S_SHOPR       variable wave =  3*/ ;
/* Empty map cell for: S1_SIT        variable wave =  3*/ ;
/* Empty map cell for: S2_SIT        variable wave =  3*/ ;
S_SIT=S3SIT ;
S_SITA=S3SITA ;
/* Empty map cell for: S_SITW        variable wave =  3*/ ;
/* Empty map cell for: S_SLEEP       variable wave =  3*/ ;
/* Empty map cell for: S_SLEEPE      variable wave =  3*/ ;
/* Empty map cell for: S_SLEEPEF     variable wave =  3*/ ;
/* Empty map cell for: S_SLEEPQ      variable wave =  3*/ ;
S_SLEEPR=S3SLEEPR ;
/* Empty map cell for: S_SLEEPS      variable wave =  3*/ ;
/* Empty map cell for: S_SLEEPX      variable wave =  3*/ ;
S_SLFEMP=S3SLFEMP ;
S_SLFMEM=S3SLFMEM ;
S_SMOKEN=S3SMOKEN ;
S_SMOKEV=S3SMOKEV ;
S_SPCFAC=S3SPCFAC ;
S_SSAPL=S3SSAPL ;
S_SSAPLM=S3SSAPLM ;
S_SSAPLY=S3SSAPLY ;
S_SSAPP=S3SSAPP ;
S_SSAPPM=S3SSAPPM ;
S_SSAPPY=S3SSAPPY ;
S_SSDEN=S3SSDEN ;
S_SSDI=S3SSDI ;
/* Empty map cell for: S_SSIAPL      variable wave =  3*/ ;
/* Empty map cell for: S_SSIAPLM     variable wave =  3*/ ;
/* Empty map cell for: S_SSIAPLY     variable wave =  3*/ ;
/* Empty map cell for: S_SSIAPP      variable wave =  3*/ ;
/* Empty map cell for: S_SSIAPPM     variable wave =  3*/ ;
/* Empty map cell for: S_SSIAPPY     variable wave =  3*/ ;
/* Empty map cell for: S_SSIDEN      variable wave =  3*/ ;
/* Empty map cell for: S_SSIREC      variable wave =  3*/ ;
/* Empty map cell for: S_SSIRECM     variable wave =  3*/ ;
/* Empty map cell for: S_SSIRECY     variable wave =  3*/ ;
/* Empty map cell for: S_SSISTP      variable wave =  3*/ ;
/* Empty map cell for: S_SSISTPM     variable wave =  3*/ ;
/* Empty map cell for: S_SSISTPY     variable wave =  3*/ ;
S_SSREC=S3SSREC ;
S_SSRECM=S3SSRECM ;
S_SSRECY=S3SSRECY ;
S_SSSTP=S3SSSTP ;
S_SSSTPM=S3SSSTPM ;
S_SSSTPY=S3SSSTPY ;
/* Empty map cell for: S_SSWRER      variable wave =  3*/ ;
/* Empty map cell for: S_SSWRNR      variable wave =  3*/ ;
/* Empty map cell for: S_SSWRXA      variable wave =  3*/ ;
/* Empty map cell for: S_SSWSER      variable wave =  3*/ ;
/* Empty map cell for: S_SSWSNR      variable wave =  3*/ ;
/* Empty map cell for: S_SSWSXA      variable wave =  3*/ ;
S_STATUS=S3STATUS ;
/* Empty map cell for: S1_STOOP      variable wave =  3*/ ;
/* Empty map cell for: S2_STOOP      variable wave =  3*/ ;
S_STOOP=S3STOOP ;
S_STOOPA=S3STOOPA ;
/* Empty map cell for: S_STOOPW      variable wave =  3*/ ;
S_STROK=S3STROK ;
S_STROKE=S3STROKE ;
S_STROKEF=S3STROKEF ;
S_STROKF=S3STROKF ;
S_STROKQ=S3STROKQ ;
S_STROKS=S3STROKS ;
/* Empty map cell for: S_TIMWLK      variable wave =  3*/ ;
/* Empty map cell for: S_TIMWLKA     variable wave =  3*/ ;
S_TLIPRM=S3TLIPRM ;
/* Empty map cell for: S2_TOILT      variable wave =  3*/ ;
S_TOILT=S3TOILT ;
S_TOILTA=S3TOILTA ;
/* Empty map cell for: S2_TOILTH     variable wave =  3*/ ;
S_TOILTH=S3TOILTH ;
S_TOTMBF=S3TOTMBF ;
S_TOTMBI=S3TOTMBI ;
S_TOTMD=S3TOTMD ;
S_TOTMDF=S3TOTMDF ;
S_TR20=S3TR20 ;
/* Empty map cell for: S_TR40        variable wave =  3*/ ;
S_TYLTC=S3TYLTC ;
/* Empty map cell for: S_ULCER       variable wave =  3*/ ;
S_UNEMP=S3UNEMP ;
S_UNION=S3UNION ;
S_UNIONF=S3UNIONF ;
S_VETRN=S3VETRN ;
/* Empty map cell for: S_VGACTF      variable wave =  3*/ ;
/* Empty map cell for: S_VGACTN      variable wave =  3*/ ;
/* Empty map cell for: S_VGACTP      variable wave =  3*/ ;
/* Empty map cell for: S_VGACTX      variable wave =  3*/ ;
S_VIGACT=S3VIGACT ;
S_VOCAB=S3VOCAB ;
S_VP=S3VP ;
/* Empty map cell for: S1_WALK1      variable wave =  3*/ ;
/* Empty map cell for: S2_WALK1      variable wave =  3*/ ;
S_WALK1=S3WALK1 ;
S_WALK1A=S3WALK1A ;
/* Empty map cell for: S_WALK1W      variable wave =  3*/ ;
/* Empty map cell for: S1_WALKR      variable wave =  3*/ ;
/* Empty map cell for: S2_WALKR      variable wave =  3*/ ;
S_WALKR=S3WALKR ;
S_WALKRA=S3WALKRA ;
S_WALKRE=S3WALKRE ;
/* Empty map cell for: S2_WALKRH     variable wave =  3*/ ;
S_WALKRH=S3WALKRH ;
/* Empty map cell for: S_WALKRW      variable wave =  3*/ ;
/* Empty map cell for: S1_WALKS      variable wave =  3*/ ;
/* Empty map cell for: S2_WALKS      variable wave =  3*/ ;
S_WALKS=S3WALKS ;
S_WALKSA=S3WALKSA ;
/* Empty map cell for: S_WALKSW      variable wave =  3*/ ;
S_WANDER=S3WANDER ;
S_WEIGHT=S3WEIGHT ;
S_WGFHR=S3WGFHR ;
S_WGFWK=S3WGFWK ;
S_WGIHR=S3WGIHR ;
S_WGIWK=S3WGIWK ;
/* Empty map cell for: S_WHAPPX      variable wave =  3*/ ;
S_WHAPPY=S3WHAPPY ;
S_WLIPRM=S3WLIPRM ;
S_WORK=S3WORK ;
S_WORK2=S3WORK2 ;
S_WORK62=S3WORK62 ;
S_WORK62F=S3WORK62F ;
S_WORK65=S3WORK65 ;
S_WORK65F=S3WORK65F ;
/* Empty map cell for: S_WORK70      variable wave =  3*/ ;
/* Empty map cell for: S_WORK70A     variable wave =  3*/ ;
/* Empty map cell for: S_WORK70AF    variable wave =  3*/ ;
/* Empty map cell for: S_WORK70F     variable wave =  3*/ ;
S_WORKLM=S3WORKLM ;
S_WTCRNH=S3WTCRNH ;
S_WTRESP=S3WTRESP ;
/* Empty map cell for: S_WTR_NH      variable wave =  3*/ ;
S_YR=S3YR ;
if inw=1 then output ;
%put --- Slong table ;
%initvars ;
%put ---- Slong table ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
/* --- RAND variable:HHIDPN  included */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
/* --- RAND variable:HACOHORT  included */ ;
WAVE_NUMBER=4 ;
WAVE_NAME=  'hrs_wave'||strip(put(wave_number,3.))     /* --- Derived variable  */ ;
studyyr= hrs_studyyr(wave_number,
hacohort)     /* --- Derived variable  */ ;
CYEAR='yr1998' ;
H_HHID=H4HHID ;
H_HHIDC=H4HHIDC ;
SUBHH= substr(H_HHIDC,7)     /* --- Derived variable  */ ;
INW=INW4 ;
S_HHIDPN=S4HHIDPN ;
/* --- RAND variable:SASSAGEB  included */ ;
/* --- RAND variable:SASSAGEM  included */ ;
/* --- RAND variable:SASSRECV  included */ ;
/* Empty map cell for: S_ACGTOT      variable wave =  4*/ ;
S_ADL5A=S4ADL5A ;
S_ADL5H=S4ADL5H ;
S_ADL6A=S4ADL6A ;
S_ADL6H=S4ADL6H ;
/* Empty map cell for: S_ADLR10      variable wave =  4*/ ;
/* Empty map cell for: S_ADLW        variable wave =  4*/ ;
S_AGEM_B=S4AGEM_B ;
S_AGEM_E=S4AGEM_E ;
S_AGEM_M=S4AGEM_M ;
S_AGEY_B=S4AGEY_B ;
S_AGEY_E=S4AGEY_E ;
S_AGEY_M=S4AGEY_M ;
S_AHDSMP=S4AHDSMP ;
/* Empty map cell for: S_AIMR10      variable wave =  4*/ ;
S_ALONE=S4ALONE ;
/* Empty map cell for: S_ALZHE       variable wave =  4*/ ;
/* Empty map cell for: S_ALZHEE      variable wave =  4*/ ;
/* Empty map cell for: S_ALZHEEF     variable wave =  4*/ ;
/* Empty map cell for: S_ALZHEF      variable wave =  4*/ ;
/* Empty map cell for: S_ALZHEQ      variable wave =  4*/ ;
/* Empty map cell for: S_ALZHES      variable wave =  4*/ ;
/* Empty map cell for: S_AMSTOT      variable wave =  4*/ ;
S_ANS3PQ=S4ANS3PQ ;
/* Empty map cell for: S1_ARMS       variable wave =  4*/ ;
/* Empty map cell for: S2_ARMS       variable wave =  4*/ ;
S_ARMS=S4ARMS ;
S_ARMSA=S4ARMSA ;
/* Empty map cell for: S_ARMSW       variable wave =  4*/ ;
S_ARTHR=S4ARTHR ;
S_ARTHRE=S4ARTHRE ;
S_ARTHREF=S4ARTHREF ;
S_ARTHRF=S4ARTHRF ;
S_ARTHRQ=S4ARTHRQ ;
S_ARTHRS=S4ARTHRS ;
/* Empty map cell for: S_ATR20       variable wave =  4*/ ;
S_BACK=S4BACK ;
/* Empty map cell for: S_BALFUL      variable wave =  4*/ ;
/* Empty map cell for: S_BALFULC     variable wave =  4*/ ;
/* Empty map cell for: S_BALFULT     variable wave =  4*/ ;
/* Empty map cell for: S_BALSBS      variable wave =  4*/ ;
/* Empty map cell for: S_BALSBSC     variable wave =  4*/ ;
/* Empty map cell for: S_BALSEMI     variable wave =  4*/ ;
/* Empty map cell for: S_BALSEMIC    variable wave =  4*/ ;
/* Empty map cell for: S1_BATH       variable wave =  4*/ ;
/* Empty map cell for: S2_BATH       variable wave =  4*/ ;
S_BATH=S4BATH ;
S_BATHA=S4BATHA ;
/* Empty map cell for: S2_BATHH      variable wave =  4*/ ;
S_BATHH=S4BATHH ;
/* Empty map cell for: S_BATHW       variable wave =  4*/ ;
S_BDATE=S4BDATE ;
/* Empty map cell for: S1_BED        variable wave =  4*/ ;
/* Empty map cell for: S2_BED        variable wave =  4*/ ;
S_BED=S4BED ;
S_BEDA=S4BEDA ;
S_BEDE=S4BEDE ;
/* Empty map cell for: S2_BEDH       variable wave =  4*/ ;
S_BEDH=S4BEDH ;
/* Empty map cell for: S_BEDW        variable wave =  4*/ ;
S_BEQ100=S4BEQ100 ;
S_BEQ10K=S4BEQ10K ;
/* Empty map cell for: S_BEQ500      variable wave =  4*/ ;
S_BEQANY=S4BEQANY ;
/* Empty map cell for: S_BEQLRG      variable wave =  4*/ ;
S_BFLAG=S4BFLAG ;
S_BMI=S4BMI ;
S_BMONTH=S4BMONTH ;
/* Empty map cell for: S_BPDIA       variable wave =  4*/ ;
S_BPLACE=S4BPLACE ;
S_BPLACF=S4BPLACF ;
/* Empty map cell for: S_BPPOS       variable wave =  4*/ ;
/* Empty map cell for: S_BPPULS      variable wave =  4*/ ;
/* Empty map cell for: S_BPSYS       variable wave =  4*/ ;
S_BREAST=S4BREAST ;
S_BWC20=S4BWC20 ;
S_BWC86=S4BWC86 ;
S_BYEAR=S4BYEAR ;
S_CACT=S4CACT ;
/* Empty map cell for: S1_CALC       variable wave =  4*/ ;
/* Empty map cell for: S2_CALC       variable wave =  4*/ ;
/* Empty map cell for: S_CALCA       variable wave =  4*/ ;
/* Empty map cell for: S_CALCW       variable wave =  4*/ ;
S_CANCR=S4CANCR ;
S_CANCRE=S4CANCRE ;
S_CANCREF=S4CANCREF ;
S_CANCRF=S4CANCRF ;
S_CANCRQ=S4CANCRQ ;
S_CANCRS=S4CANCRS ;
S_CENDIV=S4CENDIV ;
S_CENREG=S4CENREG ;
S_CESD=S4CESD ;
S_CESDM=S4CESDM ;
/* Empty map cell for: S1_CHAIR      variable wave =  4*/ ;
/* Empty map cell for: S2_CHAIR      variable wave =  4*/ ;
S_CHAIR=S4CHAIR ;
S_CHAIRA=S4CHAIRA ;
/* Empty map cell for: S_CHAIRW      variable wave =  4*/ ;
S_CHOLST=S4CHOLST ;
S_CLAIMED=S4CLAIMED ;
/* Empty map cell for: S1_CLIM1      variable wave =  4*/ ;
/* Empty map cell for: S2_CLIM1      variable wave =  4*/ ;
S_CLIM1=S4CLIM1 ;
S_CLIM1A=S4CLIM1A ;
/* Empty map cell for: S_CLIM1W      variable wave =  4*/ ;
/* Empty map cell for: S1_CLIMS      variable wave =  4*/ ;
/* Empty map cell for: S2_CLIMS      variable wave =  4*/ ;
S_CLIMS=S4CLIMS ;
S_CLIMSA=S4CLIMSA ;
/* Empty map cell for: S_CLIMSW      variable wave =  4*/ ;
S_COGTOT=S4COGTOT ;
S_COHBYR=S4COHBYR ;
S_COHORT=S4COHORT ;
/* Empty map cell for: S_COMP        variable wave =  4*/ ;
/* Empty map cell for: S_COMPW       variable wave =  4*/ ;
S_CONDE=S4CONDE ;
S_CONDEF=S4CONDEF ;
S_CONDS=S4CONDS ;
S_CONDSF=S4CONDSF ;
S_CONDSP=S4CONDSP ;
S_COVR=S4COVR ;
S_COVRT=S4COVRT ;
S_COVS=S4COVS ;
S_DADAGE=S4DADAGE ;
S_DADLIV=S4DADLIV ;
S_DAGE_M=S4DAGE_M ;
S_DAGE_Y=S4DAGE_Y ;
S_DCBAL1=S4DCBAL1 ;
S_DCBAL2=S4DCBAL2 ;
S_DCBAL3=S4DCBAL3 ;
/* Empty map cell for: S_DCBAL4      variable wave =  4*/ ;
S_DCBENE1=S4DCBENE1 ;
S_DCBENE2=S4DCBENE2 ;
S_DCBENE3=S4DCBENE3 ;
/* Empty map cell for: S_DCBENE4     variable wave =  4*/ ;
S_DCCONT1=S4DCCONT1 ;
S_DCCONT2=S4DCCONT2 ;
S_DCCONT3=S4DCCONT3 ;
/* Empty map cell for: S_DCCONT4     variable wave =  4*/ ;
S_DCMODE1=S4DCMODE1 ;
S_DCMODE2=S4DCMODE2 ;
S_DCMODE3=S4DCMODE3 ;
/* Empty map cell for: S_DCMODE4     variable wave =  4*/ ;
S_DCPCT1=S4DCPCT1 ;
S_DCPCT2=S4DCPCT2 ;
S_DCPCT3=S4DCPCT3 ;
/* Empty map cell for: S_DCPCT4      variable wave =  4*/ ;
S_DDATE=S4DDATE ;
/* Empty map cell for: S_DEMEN       variable wave =  4*/ ;
/* Empty map cell for: S_DEMENE      variable wave =  4*/ ;
/* Empty map cell for: S_DEMENEF     variable wave =  4*/ ;
/* Empty map cell for: S_DEMENF      variable wave =  4*/ ;
/* Empty map cell for: S_DEMENQ      variable wave =  4*/ ;
/* Empty map cell for: S_DEMENS      variable wave =  4*/ ;
S_DENTST=S4DENTST ;
S_DEPRES=S4DEPRES ;
/* Empty map cell for: S_DEPREX      variable wave =  4*/ ;
S_DIAB=S4DIAB ;
S_DIABE=S4DIABE ;
S_DIABEF=S4DIABEF ;
S_DIABF=S4DIABF ;
S_DIABQ=S4DIABQ ;
S_DIABS=S4DIABS ;
/* Empty map cell for: S1_DIME       variable wave =  4*/ ;
/* Empty map cell for: S2_DIME       variable wave =  4*/ ;
S_DIME=S4DIME ;
S_DIMEA=S4DIMEA ;
/* Empty map cell for: S_DIMEW       variable wave =  4*/ ;
S_DLRC=S4DLRC ;
/* Empty map cell for: S_DLRC20      variable wave =  4*/ ;
S_DMONTH=S4DMONTH ;
S_DOCTIM=S4DOCTIM ;
S_DOCTOR=S4DOCTOR ;
/* Empty map cell for: S1_DRESS      variable wave =  4*/ ;
/* Empty map cell for: S2_DRESS      variable wave =  4*/ ;
S_DRESS=S4DRESS ;
S_DRESSA=S4DRESSA ;
/* Empty map cell for: S2_DRESSH     variable wave =  4*/ ;
S_DRESSH=S4DRESSH ;
/* Empty map cell for: S_DRESSW      variable wave =  4*/ ;
S_DRINK=S4DRINK ;
S_DRINKD=S4DRINKD ;
S_DRINKN=S4DRINKN ;
/* Empty map cell for: S_DRINKR      variable wave =  4*/ ;
S_DRUGS=S4DRUGS ;
/* Empty map cell for: S_DSIAMT      variable wave =  4*/ ;
S_DSRC=S4DSRC ;
/* Empty map cell for: S_DSSAMT      variable wave =  4*/ ;
S_DSTAT=S4DSTAT ;
S_DTIMTDTH=S4DTIMTDTH ;
S_DW=S4DW ;
S_DY=S4DY ;
S_DYEAR=S4DYEAR ;
/* Empty map cell for: S1_EAT        variable wave =  4*/ ;
/* Empty map cell for: S2_EAT        variable wave =  4*/ ;
S_EAT=S4EAT ;
S_EATA=S4EATA ;
/* Empty map cell for: S2_EATH       variable wave =  4*/ ;
S_EATH=S4EATH ;
/* Empty map cell for: S_EATW        variable wave =  4*/ ;
S_EDEGRM=S4EDEGRM ;
S_EDUC=S4EDUC ;
S_EDYRS=S4EDYRS ;
S_EFFORT=S4EFFORT ;
/* Empty map cell for: S_EFFORX      variable wave =  4*/ ;
S_ENLIFE=S4ENLIFE ;
/* Empty map cell for: S_ENLIFX      variable wave =  4*/ ;
S_EVBRN=S4EVBRN ;
S_EVBRNF=S4EVBRNF ;
S_FAMR=S4FAMR ;
S_FBWC20=S4FBWC20 ;
S_FBWC86=S4FBWC86 ;
S_FCACT=S4FCACT ;
S_FDLRC=S4FDLRC ;
S_FDW=S4FDW ;
S_FDY=S4FDY ;
S_FEDUC=S4FEDUC ;
S_FIMRC=S4FIMRC ;
S_FINEA=S4FINEA ;
S_FINPLN=S4FINPLN ;
S_FINR=S4FINR ;
/* Empty map cell for: S_FLAG        variable wave =  4*/ ;
S_FLONE=S4FLONE ;
/* Empty map cell for: S_FLONEX      variable wave =  4*/ ;
S_FLUSHT=S4FLUSHT ;
S_FMO=S4FMO ;
S_FPRES=S4FPRES ;
S_FPSTME=S4FPSTME ;
S_FSAD=S4FSAD ;
/* Empty map cell for: S_FSADX       variable wave =  4*/ ;
S_FSCIS=S4FSCIS ;
S_FSER7=S4FSER7 ;
S_FSIZE=S4FSIZE ;
S_FSIZEF=S4FSIZEF ;
S_FSLFME=S4FSLFME ;
S_FVOCAB=S4FVOCAB ;
S_FVP=S4FVP ;
S_FYR=S4FYR ;
S_GENDER=S4GENDER ;
S_GOING=S4GOING ;
/* Empty map cell for: S_GOINGX      variable wave =  4*/ ;
S_GOVMD=S4GOVMD ;
S_GOVMR=S4GOVMR ;
/* Empty map cell for: S_GOVOT       variable wave =  4*/ ;
S_GOVVA=S4GOVVA ;
S_GROSSA=S4GROSSA ;
/* Empty map cell for: S_GRP         variable wave =  4*/ ;
/* Empty map cell for: S_GRPDOM      variable wave =  4*/ ;
/* Empty map cell for: S_GRPL        variable wave =  4*/ ;
/* Empty map cell for: S_GRPPOS      variable wave =  4*/ ;
/* Empty map cell for: S_GRPR        variable wave =  4*/ ;
S_HALUC=S4HALUC ;
/* Empty map cell for: S_HDLR20      variable wave =  4*/ ;
S_HEART=S4HEART ;
S_HEARTE=S4HEARTE ;
S_HEARTEF=S4HEARTEF ;
S_HEARTF=S4HEARTF ;
S_HEARTQ=S4HEARTQ ;
S_HEARTS=S4HEARTS ;
S_HECOV1=S4HECOV1 ;
/* Empty map cell for: S_HECOV2      variable wave =  4*/ ;
/* Empty map cell for: S_HECOV3      variable wave =  4*/ ;
S_HEIGHT=S4HEIGHT ;
S_HENUM=S4HENUM ;
S_HERET=S4HERET ;
/* Empty map cell for: S_HERTR1      variable wave =  4*/ ;
/* Empty map cell for: S_HERTR2      variable wave =  4*/ ;
/* Empty map cell for: S_HERTR3      variable wave =  4*/ ;
S_HERTS1=S4HERTS1 ;
/* Empty map cell for: S_HERTS2      variable wave =  4*/ ;
/* Empty map cell for: S_HERTS3      variable wave =  4*/ ;
S_HESRC1=S4HESRC1 ;
/* Empty map cell for: S_HESRC2      variable wave =  4*/ ;
/* Empty map cell for: S_HESRC3      variable wave =  4*/ ;
S_HHIDPN=S4HHIDPN ;
S_HIBP=S4HIBP ;
S_HIBPE=S4HIBPE ;
S_HIBPEF=S4HIBPEF ;
S_HIBPF=S4HIBPF ;
S_HIBPQ=S4HIBPQ ;
S_HIBPS=S4HIBPS ;
S_HIGOV=S4HIGOV ;
S_HILTC=S4HILTC ;
/* Empty map cell for: S_HIMR20      variable wave =  4*/ ;
S_HIOTHP=S4HIOTHP ;
S_HISPAN=S4HISPAN ;
S_HLPDYSF=S4HLPDYSF ;
S_HLPDYSNF=S4HLPDYSNF ;
S_HLPDYSP=S4HLPDYSP ;
S_HLPDYST=S4HLPDYST ;
S_HLPDYSU=S4HLPDYSU ;
S_HLPHRSF=S4HLPHRSF ;
S_HLPHRSNF=S4HLPHRSNF ;
S_HLPHRSP=S4HLPHRSP ;
S_HLPHRST=S4HLPHRST ;
S_HLPHRSU=S4HLPHRSU ;
S_HLPPDFA=S4HLPPDFA ;
S_HLPPDFN=S4HLPPDFN ;
S_HLPPDNFA=S4HLPPDNFA ;
S_HLPPDNFN=S4HLPPDNFN ;
S_HLPPDTA=S4HLPPDTA ;
S_HLPPDTN=S4HLPPDTN ;
S_HLPRFN=S4HLPRFN ;
S_HLPRNFN=S4HLPRNFN ;
S_HLPRPN=S4HLPRPN ;
S_HLPRTN=S4HLPRTN ;
S_HLPRUN=S4HLPRUN ;
S_HLTC3=S4HLTC3 ;
S_HLTC5=S4HLTC5 ;
S_HLTC5F=S4HLTC5F ;
S_HLTHLM=S4HLTHLM ;
S_HOMCAR=S4HOMCAR ;
S_HOSP=S4HOSP ;
S_HRSAMP=S4HRSAMP ;
S_HSPNIT=S4HSPNIT ;
S_HSPTIM=S4HSPTIM ;
/* Empty map cell for: S_HSWRKF      variable wave =  4*/ ;
/* Empty map cell for: S_HTR40       variable wave =  4*/ ;
S_IADL5A=S4IADL5A ;
S_IADL5H=S4IADL5H ;
S_IANN=S4IANN ;
S_IEARN=S4IEARN ;
S_IFANN=S4IFANN ;
S_IFEARN=S4IFEARN ;
S_IFGXFR=S4IFGXFR ;
/* Empty map cell for: S_IFIRAW      variable wave =  4*/ ;
/* Empty map cell for: S_IFIRAWY1    variable wave =  4*/ ;
S_IFPEN=S4IFPEN ;
S_IFPENA=S4IFPENA ;
S_IFSDI=S4IFSDI ;
S_IFSRET=S4IFSRET ;
/* Empty map cell for: S1_IFSSDI     variable wave =  4*/ ;
S_IFSSDI=S4IFSSDI ;
/* Empty map cell for: S_IFSSI       variable wave =  4*/ ;
S_IFUNEM=S4IFUNEM ;
S1_IFUNWC=S4IFUNWC ;
/* Empty map cell for: S2_IFUNWC     variable wave =  4*/ ;
S_IFWCMP=S4IFWCMP ;
S_IGXFR=S4IGXFR ;
/* Empty map cell for: S_IIRAW       variable wave =  4*/ ;
/* Empty map cell for: S_IIRAWY1     variable wave =  4*/ ;
S_IMRC=S4IMRC ;
/* Empty map cell for: S_IMRC20      variable wave =  4*/ ;
S_INHER=S4INHER ;
S_INHPE=S4INHPE ;
S_INHPFN=S4INHPFN ;
S_INHPNFN=S4INHPNFN ;
S_INHPPN=S4INHPPN ;
S_INHPTN=S4INHPTN ;
S_INHPUN=S4INHPUN ;
S_INLBRF=S4INLBRF ;
S_IPEN=S4IPEN ;
S_IPENA=S4IPENA ;
S_ISDI=S4ISDI ;
S_ISRET=S4ISRET ;
S_ISSDI=S4ISSDI ;
S_ISSI=S4ISSI ;
S_IUNEM=S4IUNEM ;
S_IUNWC=S4IUNWC ;
S_IWBEG=S4IWBEG ;
/* Empty map cell for: S_IWBEGF      variable wave =  4*/ ;
S_IWCMP=S4IWCMP ;
S_IWEND=S4IWEND ;
/* Empty map cell for: S_IWENDF      variable wave =  4*/ ;
S_IWENDM=S4IWENDM ;
S_IWENDY=S4IWENDY ;
S_IWMID=S4IWMID ;
S_IWMIDF=S4IWMIDF ;
S_IWSTAT=S4IWSTAT ;
S_JCIND=S4JCIND ;
/* Empty map cell for: S_JCINDB      variable wave =  4*/ ;
/* Empty map cell for: S_JCINDC      variable wave =  4*/ ;
S_JCOCC=S4JCOCC ;
S_JCOCCA=S4JCOCCA ;
/* Empty map cell for: S_JCOCCB      variable wave =  4*/ ;
/* Empty map cell for: S_JCOCCC      variable wave =  4*/ ;
S_JCPEN=S4JCPEN ;
S_JCPENF=S4JCPENF ;
S_JCTEN=S4JCTEN ;
S_JHOUR2=S4JHOUR2 ;
S_JHOURS=S4JHOURS ;
S_JJOBS=S4JJOBS ;
S_JLASTM=S4JLASTM ;
S_JLASTY=S4JLASTY ;
S_JLIFT=S4JLIFT ;
S_JLIND=S4JLIND ;
/* Empty map cell for: S_JLINDB      variable wave =  4*/ ;
/* Empty map cell for: S_JLINDC      variable wave =  4*/ ;
S_JLMIS=S4JLMIS ;
S_JLOCC=S4JLOCC ;
S_JLOCCA=S4JLOCCA ;
/* Empty map cell for: S_JLOCCB      variable wave =  4*/ ;
/* Empty map cell for: S_JLOCCC      variable wave =  4*/ ;
S_JLTEN=S4JLTEN ;
S_JLTENF=S4JLTENF ;
S_JMISS=S4JMISS ;
S_JNJOB=S4JNJOB ;
S_JNJOB5=S4JNJOB5 ;
/* Empty map cell for: S1_JOG        variable wave =  4*/ ;
/* Empty map cell for: S2_JOG        variable wave =  4*/ ;
S_JOG=S4JOG ;
S_JOGA=S4JOGA ;
/* Empty map cell for: S_JOGW        variable wave =  4*/ ;
S_JPHYS=S4JPHYS ;
S_JSIGHT=S4JSIGHT ;
S_JSTOOP=S4JSTOOP ;
S_JSTRES=S4JSTRES ;
S_JWEEK2=S4JWEEK2 ;
S_JWEEKS=S4JWEEKS ;
S_JYEARM=S4JYEARM ;
S_JYEARS=S4JYEARS ;
/* Empty map cell for: S_LBAGR       variable wave =  4*/ ;
/* Empty map cell for: S_LBASSISTPRB variable wave =  4*/ ;
/* Empty map cell for: S_LBCOMP      variable wave =  4*/ ;
/* Empty map cell for: S_LBCON10     variable wave =  4*/ ;
/* Empty map cell for: S_LBCON5      variable wave =  4*/ ;
/* Empty map cell for: S_LBELIG      variable wave =  4*/ ;
/* Empty map cell for: S_LBEXT       variable wave =  4*/ ;
/* Empty map cell for: S_LBFAMDRUGPRBvariable wave =  4*/ ;
/* Empty map cell for: S_LBFAMHLTHPRBvariable wave =  4*/ ;
/* Empty map cell for: S_LBFINPRB    variable wave =  4*/ ;
/* Empty map cell for: S_LBHLTHPRB   variable wave =  4*/ ;
/* Empty map cell for: S_LBHOUSEPRB  variable wave =  4*/ ;
/* Empty map cell for: S_LBLONELY11  variable wave =  4*/ ;
/* Empty map cell for: S_LBLONELY3   variable wave =  4*/ ;
/* Empty map cell for: S_LBNEGAFFECT variable wave =  4*/ ;
/* Empty map cell for: S_LBNEGAFFECT6variable wave =  4*/ ;
/* Empty map cell for: S_LBNEUR      variable wave =  4*/ ;
/* Empty map cell for: S_LBONCHRSTR  variable wave =  4*/ ;
/* Empty map cell for: S_LBOPEN      variable wave =  4*/ ;
/* Empty map cell for: S_LBPOSAFFECT variable wave =  4*/ ;
/* Empty map cell for: S_LBPOSAFFECT6variable wave =  4*/ ;
S_LBRF=S4LBRF ;
S_LBRFH=S4LBRFH ;
S_LBRFY=S4LBRFY ;
/* Empty map cell for: S_LBRLTNSHPRB variable wave =  4*/ ;
/* Empty map cell for: S_LBSATCITY   variable wave =  4*/ ;
/* Empty map cell for: S_LBSATFAM    variable wave =  4*/ ;
/* Empty map cell for: S_LBSATFIN    variable wave =  4*/ ;
/* Empty map cell for: S_LBSATHLTH   variable wave =  4*/ ;
/* Empty map cell for: S_LBSATHOME   variable wave =  4*/ ;
/* Empty map cell for: S_LBSATINC    variable wave =  4*/ ;
/* Empty map cell for: S_LBSATLEISUREvariable wave =  4*/ ;
/* Empty map cell for: S_LBSATLIFE   variable wave =  4*/ ;
/* Empty map cell for: S_LBSATWLF    variable wave =  4*/ ;
/* Empty map cell for: S_LBWGTR      variable wave =  4*/ ;
/* Empty map cell for: S_LBWORKPRB   variable wave =  4*/ ;
S_LGMUSA=S4LGMUSA ;
/* Empty map cell for: S_LGMUSW      variable wave =  4*/ ;
/* Empty map cell for: S_LHTACT      variable wave =  4*/ ;
S_LIFEIN=S4LIFEIN ;
/* Empty map cell for: S1_LIFT       variable wave =  4*/ ;
/* Empty map cell for: S2_LIFT       variable wave =  4*/ ;
S_LIFT=S4LIFT ;
S_LIFTA=S4LIFTA ;
/* Empty map cell for: S_LIFTW       variable wave =  4*/ ;
/* Empty map cell for: S_LIV10       variable wave =  4*/ ;
/* Empty map cell for: S_LIV10A      variable wave =  4*/ ;
/* Empty map cell for: S_LIV10P      variable wave =  4*/ ;
/* Empty map cell for: S_LIV10R      variable wave =  4*/ ;
S_LIV75=S4LIV75 ;
S_LIV75C=S4LIV75C ;
S_LIV75F=S4LIV75F ;
S_LIV75P=S4LIV75P ;
S_LIV75R=S4LIV75R ;
S_LIV85=S4LIV85 ;
S_LIV85C=S4LIV85C ;
S_LIV85F=S4LIV85F ;
S_LIV85P=S4LIV85P ;
S_LIV85R=S4LIV85R ;
S_LIV8XC=S4LIV8XC ;
S_LIV8XF=S4LIV8XF ;
S_LIVBRO=S4LIVBRO ;
S_LIVPAR=S4LIVPAR ;
S_LIVSIB=S4LIVSIB ;
S_LIVSIS=S4LIVSIS ;
S_LOST=S4LOST ;
/* Empty map cell for: S_LTACTF      variable wave =  4*/ ;
/* Empty map cell for: S_LTACTN      variable wave =  4*/ ;
/* Empty map cell for: S_LTACTP      variable wave =  4*/ ;
/* Empty map cell for: S_LTACTX      variable wave =  4*/ ;
S_LTCPRM=S4LTCPRM ;
S_LUNG=S4LUNG ;
S_LUNGE=S4LUNGE ;
S_LUNGEF=S4LUNGEF ;
S_LUNGF=S4LUNGF ;
S_LUNGQ=S4LUNGQ ;
S_LUNGS=S4LUNGS ;
S_MAMMOG=S4MAMMOG ;
/* Empty map cell for: S1_MAP        variable wave =  4*/ ;
/* Empty map cell for: S2_MAP        variable wave =  4*/ ;
S_MAP=S4MAP ;
S_MAPA=S4MAPA ;
/* Empty map cell for: S_MAPW        variable wave =  4*/ ;
S_MCURLN=S4MCURLN ;
/* Empty map cell for: S_MCWV        variable wave =  4*/ ;
/* Empty map cell for: S_MCWVW       variable wave =  4*/ ;
/* Empty map cell for: S_MDACTX      variable wave =  4*/ ;
S_MDIV=S4MDIV ;
S_MEALS=S4MEALS ;
S_MEALSA=S4MEALSA ;
S_MEALSH=S4MEALSH ;
/* Empty map cell for: S_MEALSR      variable wave =  4*/ ;
/* Empty map cell for: S2_MEDS       variable wave =  4*/ ;
S_MEDS=S4MEDS ;
S_MEDSA=S4MEDSA ;
S_MEDSH=S4MEDSH ;
/* Empty map cell for: S_MEDSR       variable wave =  4*/ ;
S_MEDUC=S4MEDUC ;
S_MEMRY=S4MEMRY ;
S_MEMRYE=S4MEMRYE ;
S_MEMRYEF=S4MEMRYEF ;
/* Empty map cell for: S_MEMRYF      variable wave =  4*/ ;
S_MEMRYQ=S4MEMRYQ ;
/* Empty map cell for: S_MEMRYS      variable wave =  4*/ ;
S_MEND=S4MEND ;
S_MLEN=S4MLEN ;
S_MLENM=S4MLENM ;
S_MNEV=S4MNEV ;
S_MO=S4MO ;
S_MOBILA=S4MOBILA ;
/* Empty map cell for: S_MOBILW      variable wave =  4*/ ;
S_MOMAGE=S4MOMAGE ;
S_MOMLIV=S4MOMLIV ;
/* Empty map cell for: S2_MONEY      variable wave =  4*/ ;
S_MONEY=S4MONEY ;
S_MONEYA=S4MONEYA ;
S_MONEYH=S4MONEYH ;
/* Empty map cell for: S_MONEYR      variable wave =  4*/ ;
S_MPART=S4MPART ;
S_MRCT=S4MRCT ;
S_MRPREM=S4MRPREM ;
S_MSTAT=S4MSTAT ;
S_MSTATF=S4MSTATF ;
S_MSTATH=S4MSTATH ;
S_MSTOT=S4MSTOT ;
S_MWID=S4MWID ;
S_NHMDAY=S4NHMDAY ;
S_NHMLIV=S4NHMLIV ;
S_NHMMVM=S4NHMMVM ;
S_NHMMVY=S4NHMMVY ;
S_NOTICS=S4NOTICS ;
/* Empty map cell for: S_NOVOC       variable wave =  4*/ ;
S_NRSHOM=S4NRSHOM ;
S_NRSNIT=S4NRSNIT ;
S_NRSTIM=S4NRSTIM ;
/* Empty map cell for: S_NSSCRE      variable wave =  4*/ ;
/* Empty map cell for: S_NSSCSE      variable wave =  4*/ ;
S_OAHDID=S4OAHDID ;
S_OHRSID=S4OHRSID ;
S_OOPMD=S4OOPMD ;
S_OOPMDF=S4OOPMDF ;
/* Empty map cell for: S_OOPMDO      variable wave =  4*/ ;
/* Empty map cell for: S_OOPMDOF     variable wave =  4*/ ;
S_OUTPT=S4OUTPT ;
S_PAPSM=S4PAPSM ;
/* Empty map cell for: S_PARTD       variable wave =  4*/ ;
S_PENCT=S4PENCT ;
S_PENIC1=S4PENIC1 ;
S_PENIC2=S4PENIC2 ;
S_PENINC=S4PENINC ;
S_PENI_N=S4PENI_N ;
/* Empty map cell for: S2_PHONE      variable wave =  4*/ ;
S_PHONE=S4PHONE ;
S_PHONEA=S4PHONEA ;
S_PHONEH=S4PHONEH ;
/* Empty map cell for: S_PHONER      variable wave =  4*/ ;
/* Empty map cell for: S_PMBMI       variable wave =  4*/ ;
/* Empty map cell for: S_PMHGHT      variable wave =  4*/ ;
/* Empty map cell for: S_PMHGHTS     variable wave =  4*/ ;
/* Empty map cell for: S_PMWAIST     variable wave =  4*/ ;
/* Empty map cell for: S_PMWAISTC    variable wave =  4*/ ;
/* Empty map cell for: S_PMWGHT      variable wave =  4*/ ;
/* Empty map cell for: S_PMWGHTF     variable wave =  4*/ ;
/* Empty map cell for: S_PMWGHTS     variable wave =  4*/ ;
S_PNHM5Y=S4PNHM5Y ;
S_PRCHMEM=S4PRCHMEM ;
S_PRES=S4PRES ;
S_PRMEM=S4PRMEM ;
S_PROST=S4PROST ;
S_PROXY=S4PROXY ;
S_PRPCNT=S4PRPCNT ;
S_PRPRM1=S4PRPRM1 ;
S_PRPRM2=S4PRPRM2 ;
/* Empty map cell for: S_PRPRM3      variable wave =  4*/ ;
S_PRSRC1=S4PRSRC1 ;
S_PRSRC2=S4PRSRC2 ;
/* Empty map cell for: S_PRSRC3      variable wave =  4*/ ;
S_PSTMEM=S4PSTMEM ;
S_PSYCH=S4PSYCH ;
S_PSYCHE=S4PSYCHE ;
S_PSYCHEF=S4PSYCHEF ;
S_PSYCHF=S4PSYCHF ;
S_PSYCHQ=S4PSYCHQ ;
S_PSYCHS=S4PSYCHS ;
S_PTYP1=S4PTYP1 ;
S_PTYP2=S4PTYP2 ;
S_PTYP3=S4PTYP3 ;
/* Empty map cell for: S_PTYP4       variable wave =  4*/ ;
/* Empty map cell for: S_PTYPD1      variable wave =  4*/ ;
/* Empty map cell for: S_PTYPD2      variable wave =  4*/ ;
/* Empty map cell for: S_PTYPD3      variable wave =  4*/ ;
/* Empty map cell for: S_PTYPD4      variable wave =  4*/ ;
/* Empty map cell for: S_PTYPF1      variable wave =  4*/ ;
/* Empty map cell for: S_PTYPF2      variable wave =  4*/ ;
/* Empty map cell for: S_PTYPF3      variable wave =  4*/ ;
/* Empty map cell for: S_PTYPF4      variable wave =  4*/ ;
/* Empty map cell for: S_PUFF        variable wave =  4*/ ;
/* Empty map cell for: S_PUFFPOS     variable wave =  4*/ ;
/* Empty map cell for: S1_PUSH       variable wave =  4*/ ;
/* Empty map cell for: S2_PUSH       variable wave =  4*/ ;
S_PUSH=S4PUSH ;
S_PUSHA=S4PUSHA ;
/* Empty map cell for: S_PUSHW       variable wave =  4*/ ;
S_RACEM=S4RACEM ;
S_RELIG=S4RELIG ;
S_RETDTWV=S4RETDTWV ;
S_RETEMP=S4RETEMP ;
/* Empty map cell for: S_RETINC      variable wave =  4*/ ;
/* Empty map cell for: S_RETLIV      variable wave =  4*/ ;
S_RETMON=S4RETMON ;
S_RETSAT=S4RETSAT ;
/* Empty map cell for: S_RETWLT      variable wave =  4*/ ;
/* Empty map cell for: S_RETWRK      variable wave =  4*/ ;
/* Empty map cell for: S_RETWSP      variable wave =  4*/ ;
S_RETYR=S4RETYR ;
S_RISK=S4RISK ;
S_RISK6=S4RISK6 ;
S_RPLNYA=S4RPLNYA ;
S_RPLNYR=S4RPLNYR ;
/* Empty map cell for: S_RXPREM      variable wave =  4*/ ;
S_RYRCMP=S4RYRCMP ;
S_SADLF=S4SADLF ;
S_SAMEJOB=S4SAMEJOB ;
S_SAMEMP=S4SAMEMP ;
S_SAYRET=S4SAYRET ;
S_SCIS=S4SCIS ;
/* Empty map cell for: S_SDIAPL      variable wave =  4*/ ;
/* Empty map cell for: S_SDIAPLM     variable wave =  4*/ ;
/* Empty map cell for: S_SDIAPLY     variable wave =  4*/ ;
/* Empty map cell for: S_SDIAPP      variable wave =  4*/ ;
/* Empty map cell for: S_SDIAPPM     variable wave =  4*/ ;
/* Empty map cell for: S_SDIAPPY     variable wave =  4*/ ;
/* Empty map cell for: S_SDIDEN      variable wave =  4*/ ;
/* Empty map cell for: S_SDIREC      variable wave =  4*/ ;
/* Empty map cell for: S_SDIRECM     variable wave =  4*/ ;
/* Empty map cell for: S_SDIRECY     variable wave =  4*/ ;
/* Empty map cell for: S_SDISTP      variable wave =  4*/ ;
/* Empty map cell for: S_SDISTPM     variable wave =  4*/ ;
/* Empty map cell for: S_SDISTPY     variable wave =  4*/ ;
S_SER7=S4SER7 ;
S_SHLT=S4SHLT ;
S_SHLTC=S4SHLTC ;
S_SHLTCF=S4SHLTCF ;
S_SHOP=S4SHOP ;
S_SHOPA=S4SHOPA ;
S_SHOPH=S4SHOPH ;
/* Empty map cell for: S_SHOPR       variable wave =  4*/ ;
/* Empty map cell for: S1_SIT        variable wave =  4*/ ;
/* Empty map cell for: S2_SIT        variable wave =  4*/ ;
S_SIT=S4SIT ;
S_SITA=S4SITA ;
/* Empty map cell for: S_SITW        variable wave =  4*/ ;
/* Empty map cell for: S_SLEEP       variable wave =  4*/ ;
/* Empty map cell for: S_SLEEPE      variable wave =  4*/ ;
/* Empty map cell for: S_SLEEPEF     variable wave =  4*/ ;
/* Empty map cell for: S_SLEEPQ      variable wave =  4*/ ;
S_SLEEPR=S4SLEEPR ;
/* Empty map cell for: S_SLEEPS      variable wave =  4*/ ;
/* Empty map cell for: S_SLEEPX      variable wave =  4*/ ;
S_SLFEMP=S4SLFEMP ;
S_SLFMEM=S4SLFMEM ;
S_SMOKEN=S4SMOKEN ;
S_SMOKEV=S4SMOKEV ;
S_SPCFAC=S4SPCFAC ;
S_SSAPL=S4SSAPL ;
S_SSAPLM=S4SSAPLM ;
S_SSAPLY=S4SSAPLY ;
S_SSAPP=S4SSAPP ;
S_SSAPPM=S4SSAPPM ;
S_SSAPPY=S4SSAPPY ;
S_SSDEN=S4SSDEN ;
S_SSDI=S4SSDI ;
/* Empty map cell for: S_SSIAPL      variable wave =  4*/ ;
/* Empty map cell for: S_SSIAPLM     variable wave =  4*/ ;
/* Empty map cell for: S_SSIAPLY     variable wave =  4*/ ;
/* Empty map cell for: S_SSIAPP      variable wave =  4*/ ;
/* Empty map cell for: S_SSIAPPM     variable wave =  4*/ ;
/* Empty map cell for: S_SSIAPPY     variable wave =  4*/ ;
/* Empty map cell for: S_SSIDEN      variable wave =  4*/ ;
/* Empty map cell for: S_SSIREC      variable wave =  4*/ ;
/* Empty map cell for: S_SSIRECM     variable wave =  4*/ ;
/* Empty map cell for: S_SSIRECY     variable wave =  4*/ ;
/* Empty map cell for: S_SSISTP      variable wave =  4*/ ;
/* Empty map cell for: S_SSISTPM     variable wave =  4*/ ;
/* Empty map cell for: S_SSISTPY     variable wave =  4*/ ;
S_SSREC=S4SSREC ;
S_SSRECM=S4SSRECM ;
S_SSRECY=S4SSRECY ;
S_SSSTP=S4SSSTP ;
S_SSSTPM=S4SSSTPM ;
S_SSSTPY=S4SSSTPY ;
S_SSWRER=S4SSWRER ;
S_SSWRNR=S4SSWRNR ;
S_SSWRXA=S4SSWRXA ;
/* Empty map cell for: S_SSWSER      variable wave =  4*/ ;
/* Empty map cell for: S_SSWSNR      variable wave =  4*/ ;
/* Empty map cell for: S_SSWSXA      variable wave =  4*/ ;
S_STATUS=S4STATUS ;
/* Empty map cell for: S1_STOOP      variable wave =  4*/ ;
/* Empty map cell for: S2_STOOP      variable wave =  4*/ ;
S_STOOP=S4STOOP ;
S_STOOPA=S4STOOPA ;
/* Empty map cell for: S_STOOPW      variable wave =  4*/ ;
S_STROK=S4STROK ;
S_STROKE=S4STROKE ;
S_STROKEF=S4STROKEF ;
S_STROKF=S4STROKF ;
S_STROKQ=S4STROKQ ;
S_STROKS=S4STROKS ;
/* Empty map cell for: S_TIMWLK      variable wave =  4*/ ;
/* Empty map cell for: S_TIMWLKA     variable wave =  4*/ ;
/* Empty map cell for: S_TLIPRM      variable wave =  4*/ ;
/* Empty map cell for: S2_TOILT      variable wave =  4*/ ;
S_TOILT=S4TOILT ;
S_TOILTA=S4TOILTA ;
/* Empty map cell for: S2_TOILTH     variable wave =  4*/ ;
S_TOILTH=S4TOILTH ;
S_TOTMBF=S4TOTMBF ;
S_TOTMBI=S4TOTMBI ;
/* Empty map cell for: S_TOTMD       variable wave =  4*/ ;
/* Empty map cell for: S_TOTMDF      variable wave =  4*/ ;
S_TR20=S4TR20 ;
/* Empty map cell for: S_TR40        variable wave =  4*/ ;
S_TYLTC=S4TYLTC ;
/* Empty map cell for: S_ULCER       variable wave =  4*/ ;
S_UNEMP=S4UNEMP ;
S_UNION=S4UNION ;
S_UNIONF=S4UNIONF ;
S_VETRN=S4VETRN ;
/* Empty map cell for: S_VGACTF      variable wave =  4*/ ;
/* Empty map cell for: S_VGACTN      variable wave =  4*/ ;
/* Empty map cell for: S_VGACTP      variable wave =  4*/ ;
/* Empty map cell for: S_VGACTX      variable wave =  4*/ ;
S_VIGACT=S4VIGACT ;
S_VOCAB=S4VOCAB ;
S_VP=S4VP ;
/* Empty map cell for: S1_WALK1      variable wave =  4*/ ;
/* Empty map cell for: S2_WALK1      variable wave =  4*/ ;
S_WALK1=S4WALK1 ;
S_WALK1A=S4WALK1A ;
/* Empty map cell for: S_WALK1W      variable wave =  4*/ ;
/* Empty map cell for: S1_WALKR      variable wave =  4*/ ;
/* Empty map cell for: S2_WALKR      variable wave =  4*/ ;
S_WALKR=S4WALKR ;
S_WALKRA=S4WALKRA ;
S_WALKRE=S4WALKRE ;
/* Empty map cell for: S2_WALKRH     variable wave =  4*/ ;
S_WALKRH=S4WALKRH ;
/* Empty map cell for: S_WALKRW      variable wave =  4*/ ;
/* Empty map cell for: S1_WALKS      variable wave =  4*/ ;
/* Empty map cell for: S2_WALKS      variable wave =  4*/ ;
S_WALKS=S4WALKS ;
S_WALKSA=S4WALKSA ;
/* Empty map cell for: S_WALKSW      variable wave =  4*/ ;
S_WANDER=S4WANDER ;
S_WEIGHT=S4WEIGHT ;
S_WGFHR=S4WGFHR ;
S_WGFWK=S4WGFWK ;
S_WGIHR=S4WGIHR ;
S_WGIWK=S4WGIWK ;
/* Empty map cell for: S_WHAPPX      variable wave =  4*/ ;
S_WHAPPY=S4WHAPPY ;
/* Empty map cell for: S_WLIPRM      variable wave =  4*/ ;
S_WORK=S4WORK ;
S_WORK2=S4WORK2 ;
S_WORK62=S4WORK62 ;
S_WORK62F=S4WORK62F ;
S_WORK65=S4WORK65 ;
S_WORK65F=S4WORK65F ;
/* Empty map cell for: S_WORK70      variable wave =  4*/ ;
/* Empty map cell for: S_WORK70A     variable wave =  4*/ ;
/* Empty map cell for: S_WORK70AF    variable wave =  4*/ ;
/* Empty map cell for: S_WORK70F     variable wave =  4*/ ;
S_WORKLM=S4WORKLM ;
S_WTCRNH=S4WTCRNH ;
S_WTRESP=S4WTRESP ;
/* Empty map cell for: S_WTR_NH      variable wave =  4*/ ;
S_YR=S4YR ;
if inw=1 then output ;
%put --- Slong table ;
%initvars ;
%put ---- Slong table ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
/* --- RAND variable:HHIDPN  included */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
/* --- RAND variable:HACOHORT  included */ ;
WAVE_NUMBER=5 ;
WAVE_NAME=  'hrs_wave'||strip(put(wave_number,3.))     /* --- Derived variable  */ ;
studyyr= hrs_studyyr(wave_number,
hacohort)     /* --- Derived variable  */ ;
CYEAR='yr2000' ;
H_HHID=H5HHID ;
H_HHIDC=H5HHIDC ;
SUBHH= substr(H_HHIDC,7)     /* --- Derived variable  */ ;
INW=INW5 ;
S_HHIDPN=S5HHIDPN ;
/* --- RAND variable:SASSAGEB  included */ ;
/* --- RAND variable:SASSAGEM  included */ ;
/* --- RAND variable:SASSRECV  included */ ;
/* Empty map cell for: S_ACGTOT      variable wave =  5*/ ;
S_ADL5A=S5ADL5A ;
S_ADL5H=S5ADL5H ;
S_ADL6A=S5ADL6A ;
S_ADL6H=S5ADL6H ;
/* Empty map cell for: S_ADLR10      variable wave =  5*/ ;
/* Empty map cell for: S_ADLW        variable wave =  5*/ ;
S_AGEM_B=S5AGEM_B ;
S_AGEM_E=S5AGEM_E ;
S_AGEM_M=S5AGEM_M ;
S_AGEY_B=S5AGEY_B ;
S_AGEY_E=S5AGEY_E ;
S_AGEY_M=S5AGEY_M ;
S_AHDSMP=S5AHDSMP ;
/* Empty map cell for: S_AIMR10      variable wave =  5*/ ;
S_ALONE=S5ALONE ;
/* Empty map cell for: S_ALZHE       variable wave =  5*/ ;
/* Empty map cell for: S_ALZHEE      variable wave =  5*/ ;
/* Empty map cell for: S_ALZHEEF     variable wave =  5*/ ;
/* Empty map cell for: S_ALZHEF      variable wave =  5*/ ;
/* Empty map cell for: S_ALZHEQ      variable wave =  5*/ ;
/* Empty map cell for: S_ALZHES      variable wave =  5*/ ;
/* Empty map cell for: S_AMSTOT      variable wave =  5*/ ;
S_ANS3PQ=S5ANS3PQ ;
/* Empty map cell for: S1_ARMS       variable wave =  5*/ ;
/* Empty map cell for: S2_ARMS       variable wave =  5*/ ;
S_ARMS=S5ARMS ;
S_ARMSA=S5ARMSA ;
/* Empty map cell for: S_ARMSW       variable wave =  5*/ ;
S_ARTHR=S5ARTHR ;
S_ARTHRE=S5ARTHRE ;
S_ARTHREF=S5ARTHREF ;
S_ARTHRF=S5ARTHRF ;
S_ARTHRQ=S5ARTHRQ ;
S_ARTHRS=S5ARTHRS ;
/* Empty map cell for: S_ATR20       variable wave =  5*/ ;
S_BACK=S5BACK ;
/* Empty map cell for: S_BALFUL      variable wave =  5*/ ;
/* Empty map cell for: S_BALFULC     variable wave =  5*/ ;
/* Empty map cell for: S_BALFULT     variable wave =  5*/ ;
/* Empty map cell for: S_BALSBS      variable wave =  5*/ ;
/* Empty map cell for: S_BALSBSC     variable wave =  5*/ ;
/* Empty map cell for: S_BALSEMI     variable wave =  5*/ ;
/* Empty map cell for: S_BALSEMIC    variable wave =  5*/ ;
/* Empty map cell for: S1_BATH       variable wave =  5*/ ;
/* Empty map cell for: S2_BATH       variable wave =  5*/ ;
S_BATH=S5BATH ;
S_BATHA=S5BATHA ;
/* Empty map cell for: S2_BATHH      variable wave =  5*/ ;
S_BATHH=S5BATHH ;
/* Empty map cell for: S_BATHW       variable wave =  5*/ ;
S_BDATE=S5BDATE ;
/* Empty map cell for: S1_BED        variable wave =  5*/ ;
/* Empty map cell for: S2_BED        variable wave =  5*/ ;
S_BED=S5BED ;
S_BEDA=S5BEDA ;
S_BEDE=S5BEDE ;
/* Empty map cell for: S2_BEDH       variable wave =  5*/ ;
S_BEDH=S5BEDH ;
/* Empty map cell for: S_BEDW        variable wave =  5*/ ;
S_BEQ100=S5BEQ100 ;
S_BEQ10K=S5BEQ10K ;
/* Empty map cell for: S_BEQ500      variable wave =  5*/ ;
S_BEQANY=S5BEQANY ;
/* Empty map cell for: S_BEQLRG      variable wave =  5*/ ;
S_BFLAG=S5BFLAG ;
S_BMI=S5BMI ;
S_BMONTH=S5BMONTH ;
/* Empty map cell for: S_BPDIA       variable wave =  5*/ ;
S_BPLACE=S5BPLACE ;
S_BPLACF=S5BPLACF ;
/* Empty map cell for: S_BPPOS       variable wave =  5*/ ;
/* Empty map cell for: S_BPPULS      variable wave =  5*/ ;
/* Empty map cell for: S_BPSYS       variable wave =  5*/ ;
S_BREAST=S5BREAST ;
S_BWC20=S5BWC20 ;
S_BWC86=S5BWC86 ;
S_BYEAR=S5BYEAR ;
S_CACT=S5CACT ;
/* Empty map cell for: S1_CALC       variable wave =  5*/ ;
/* Empty map cell for: S2_CALC       variable wave =  5*/ ;
/* Empty map cell for: S_CALCA       variable wave =  5*/ ;
/* Empty map cell for: S_CALCW       variable wave =  5*/ ;
S_CANCR=S5CANCR ;
S_CANCRE=S5CANCRE ;
S_CANCREF=S5CANCREF ;
S_CANCRF=S5CANCRF ;
S_CANCRQ=S5CANCRQ ;
S_CANCRS=S5CANCRS ;
S_CENDIV=S5CENDIV ;
S_CENREG=S5CENREG ;
S_CESD=S5CESD ;
S_CESDM=S5CESDM ;
/* Empty map cell for: S1_CHAIR      variable wave =  5*/ ;
/* Empty map cell for: S2_CHAIR      variable wave =  5*/ ;
S_CHAIR=S5CHAIR ;
S_CHAIRA=S5CHAIRA ;
/* Empty map cell for: S_CHAIRW      variable wave =  5*/ ;
S_CHOLST=S5CHOLST ;
/* Empty map cell for: S_CLAIMED     variable wave =  5*/ ;
/* Empty map cell for: S1_CLIM1      variable wave =  5*/ ;
/* Empty map cell for: S2_CLIM1      variable wave =  5*/ ;
S_CLIM1=S5CLIM1 ;
S_CLIM1A=S5CLIM1A ;
/* Empty map cell for: S_CLIM1W      variable wave =  5*/ ;
/* Empty map cell for: S1_CLIMS      variable wave =  5*/ ;
/* Empty map cell for: S2_CLIMS      variable wave =  5*/ ;
S_CLIMS=S5CLIMS ;
S_CLIMSA=S5CLIMSA ;
/* Empty map cell for: S_CLIMSW      variable wave =  5*/ ;
S_COGTOT=S5COGTOT ;
S_COHBYR=S5COHBYR ;
S_COHORT=S5COHORT ;
/* Empty map cell for: S_COMP        variable wave =  5*/ ;
/* Empty map cell for: S_COMPW       variable wave =  5*/ ;
S_CONDE=S5CONDE ;
S_CONDEF=S5CONDEF ;
S_CONDS=S5CONDS ;
S_CONDSF=S5CONDSF ;
S_CONDSP=S5CONDSP ;
S_COVR=S5COVR ;
S_COVRT=S5COVRT ;
S_COVS=S5COVS ;
S_DADAGE=S5DADAGE ;
S_DADLIV=S5DADLIV ;
S_DAGE_M=S5DAGE_M ;
S_DAGE_Y=S5DAGE_Y ;
S_DCBAL1=S5DCBAL1 ;
S_DCBAL2=S5DCBAL2 ;
S_DCBAL3=S5DCBAL3 ;
S_DCBAL4=S5DCBAL4 ;
S_DCBENE1=S5DCBENE1 ;
S_DCBENE2=S5DCBENE2 ;
S_DCBENE3=S5DCBENE3 ;
S_DCBENE4=S5DCBENE4 ;
S_DCCONT1=S5DCCONT1 ;
S_DCCONT2=S5DCCONT2 ;
S_DCCONT3=S5DCCONT3 ;
S_DCCONT4=S5DCCONT4 ;
S_DCMODE1=S5DCMODE1 ;
S_DCMODE2=S5DCMODE2 ;
S_DCMODE3=S5DCMODE3 ;
S_DCMODE4=S5DCMODE4 ;
S_DCPCT1=S5DCPCT1 ;
S_DCPCT2=S5DCPCT2 ;
S_DCPCT3=S5DCPCT3 ;
S_DCPCT4=S5DCPCT4 ;
S_DDATE=S5DDATE ;
/* Empty map cell for: S_DEMEN       variable wave =  5*/ ;
/* Empty map cell for: S_DEMENE      variable wave =  5*/ ;
/* Empty map cell for: S_DEMENEF     variable wave =  5*/ ;
/* Empty map cell for: S_DEMENF      variable wave =  5*/ ;
/* Empty map cell for: S_DEMENQ      variable wave =  5*/ ;
/* Empty map cell for: S_DEMENS      variable wave =  5*/ ;
S_DENTST=S5DENTST ;
S_DEPRES=S5DEPRES ;
/* Empty map cell for: S_DEPREX      variable wave =  5*/ ;
S_DIAB=S5DIAB ;
S_DIABE=S5DIABE ;
S_DIABEF=S5DIABEF ;
S_DIABF=S5DIABF ;
S_DIABQ=S5DIABQ ;
S_DIABS=S5DIABS ;
/* Empty map cell for: S1_DIME       variable wave =  5*/ ;
/* Empty map cell for: S2_DIME       variable wave =  5*/ ;
S_DIME=S5DIME ;
S_DIMEA=S5DIMEA ;
/* Empty map cell for: S_DIMEW       variable wave =  5*/ ;
S_DLRC=S5DLRC ;
/* Empty map cell for: S_DLRC20      variable wave =  5*/ ;
S_DMONTH=S5DMONTH ;
S_DOCTIM=S5DOCTIM ;
S_DOCTOR=S5DOCTOR ;
/* Empty map cell for: S1_DRESS      variable wave =  5*/ ;
/* Empty map cell for: S2_DRESS      variable wave =  5*/ ;
S_DRESS=S5DRESS ;
S_DRESSA=S5DRESSA ;
/* Empty map cell for: S2_DRESSH     variable wave =  5*/ ;
S_DRESSH=S5DRESSH ;
/* Empty map cell for: S_DRESSW      variable wave =  5*/ ;
S_DRINK=S5DRINK ;
S_DRINKD=S5DRINKD ;
S_DRINKN=S5DRINKN ;
/* Empty map cell for: S_DRINKR      variable wave =  5*/ ;
S_DRUGS=S5DRUGS ;
S_DSIAMT=S5DSIAMT ;
S_DSRC=S5DSRC ;
S_DSSAMT=S5DSSAMT ;
S_DSTAT=S5DSTAT ;
S_DTIMTDTH=S5DTIMTDTH ;
S_DW=S5DW ;
S_DY=S5DY ;
S_DYEAR=S5DYEAR ;
/* Empty map cell for: S1_EAT        variable wave =  5*/ ;
/* Empty map cell for: S2_EAT        variable wave =  5*/ ;
S_EAT=S5EAT ;
S_EATA=S5EATA ;
/* Empty map cell for: S2_EATH       variable wave =  5*/ ;
S_EATH=S5EATH ;
/* Empty map cell for: S_EATW        variable wave =  5*/ ;
S_EDEGRM=S5EDEGRM ;
S_EDUC=S5EDUC ;
S_EDYRS=S5EDYRS ;
S_EFFORT=S5EFFORT ;
/* Empty map cell for: S_EFFORX      variable wave =  5*/ ;
S_ENLIFE=S5ENLIFE ;
/* Empty map cell for: S_ENLIFX      variable wave =  5*/ ;
S_EVBRN=S5EVBRN ;
S_EVBRNF=S5EVBRNF ;
S_FAMR=S5FAMR ;
S_FBWC20=S5FBWC20 ;
S_FBWC86=S5FBWC86 ;
S_FCACT=S5FCACT ;
S_FDLRC=S5FDLRC ;
S_FDW=S5FDW ;
S_FDY=S5FDY ;
S_FEDUC=S5FEDUC ;
S_FIMRC=S5FIMRC ;
S_FINEA=S5FINEA ;
S_FINPLN=S5FINPLN ;
S_FINR=S5FINR ;
/* Empty map cell for: S_FLAG        variable wave =  5*/ ;
S_FLONE=S5FLONE ;
/* Empty map cell for: S_FLONEX      variable wave =  5*/ ;
S_FLUSHT=S5FLUSHT ;
S_FMO=S5FMO ;
S_FPRES=S5FPRES ;
S_FPSTME=S5FPSTME ;
S_FSAD=S5FSAD ;
/* Empty map cell for: S_FSADX       variable wave =  5*/ ;
S_FSCIS=S5FSCIS ;
S_FSER7=S5FSER7 ;
S_FSIZE=S5FSIZE ;
S_FSIZEF=S5FSIZEF ;
S_FSLFME=S5FSLFME ;
S_FVOCAB=S5FVOCAB ;
S_FVP=S5FVP ;
S_FYR=S5FYR ;
S_GENDER=S5GENDER ;
S_GOING=S5GOING ;
/* Empty map cell for: S_GOINGX      variable wave =  5*/ ;
S_GOVMD=S5GOVMD ;
S_GOVMR=S5GOVMR ;
/* Empty map cell for: S_GOVOT       variable wave =  5*/ ;
S_GOVVA=S5GOVVA ;
S_GROSSA=S5GROSSA ;
/* Empty map cell for: S_GRP         variable wave =  5*/ ;
/* Empty map cell for: S_GRPDOM      variable wave =  5*/ ;
/* Empty map cell for: S_GRPL        variable wave =  5*/ ;
/* Empty map cell for: S_GRPPOS      variable wave =  5*/ ;
/* Empty map cell for: S_GRPR        variable wave =  5*/ ;
S_HALUC=S5HALUC ;
/* Empty map cell for: S_HDLR20      variable wave =  5*/ ;
S_HEART=S5HEART ;
S_HEARTE=S5HEARTE ;
S_HEARTEF=S5HEARTEF ;
S_HEARTF=S5HEARTF ;
S_HEARTQ=S5HEARTQ ;
S_HEARTS=S5HEARTS ;
S_HECOV1=S5HECOV1 ;
/* Empty map cell for: S_HECOV2      variable wave =  5*/ ;
/* Empty map cell for: S_HECOV3      variable wave =  5*/ ;
S_HEIGHT=S5HEIGHT ;
S_HENUM=S5HENUM ;
S_HERET=S5HERET ;
S_HERTR1=S5HERTR1 ;
/* Empty map cell for: S_HERTR2      variable wave =  5*/ ;
/* Empty map cell for: S_HERTR3      variable wave =  5*/ ;
S_HERTS1=S5HERTS1 ;
/* Empty map cell for: S_HERTS2      variable wave =  5*/ ;
/* Empty map cell for: S_HERTS3      variable wave =  5*/ ;
S_HESRC1=S5HESRC1 ;
/* Empty map cell for: S_HESRC2      variable wave =  5*/ ;
/* Empty map cell for: S_HESRC3      variable wave =  5*/ ;
S_HHIDPN=S5HHIDPN ;
S_HIBP=S5HIBP ;
S_HIBPE=S5HIBPE ;
S_HIBPEF=S5HIBPEF ;
S_HIBPF=S5HIBPF ;
S_HIBPQ=S5HIBPQ ;
S_HIBPS=S5HIBPS ;
S_HIGOV=S5HIGOV ;
S_HILTC=S5HILTC ;
/* Empty map cell for: S_HIMR20      variable wave =  5*/ ;
S_HIOTHP=S5HIOTHP ;
S_HISPAN=S5HISPAN ;
S_HLPDYSF=S5HLPDYSF ;
S_HLPDYSNF=S5HLPDYSNF ;
S_HLPDYSP=S5HLPDYSP ;
S_HLPDYST=S5HLPDYST ;
S_HLPDYSU=S5HLPDYSU ;
S_HLPHRSF=S5HLPHRSF ;
S_HLPHRSNF=S5HLPHRSNF ;
S_HLPHRSP=S5HLPHRSP ;
S_HLPHRST=S5HLPHRST ;
S_HLPHRSU=S5HLPHRSU ;
S_HLPPDFA=S5HLPPDFA ;
S_HLPPDFN=S5HLPPDFN ;
S_HLPPDNFA=S5HLPPDNFA ;
S_HLPPDNFN=S5HLPPDNFN ;
S_HLPPDTA=S5HLPPDTA ;
S_HLPPDTN=S5HLPPDTN ;
S_HLPRFN=S5HLPRFN ;
S_HLPRNFN=S5HLPRNFN ;
S_HLPRPN=S5HLPRPN ;
S_HLPRTN=S5HLPRTN ;
S_HLPRUN=S5HLPRUN ;
S_HLTC3=S5HLTC3 ;
S_HLTC5=S5HLTC5 ;
S_HLTC5F=S5HLTC5F ;
S_HLTHLM=S5HLTHLM ;
S_HOMCAR=S5HOMCAR ;
S_HOSP=S5HOSP ;
S_HRSAMP=S5HRSAMP ;
S_HSPNIT=S5HSPNIT ;
S_HSPTIM=S5HSPTIM ;
/* Empty map cell for: S_HSWRKF      variable wave =  5*/ ;
/* Empty map cell for: S_HTR40       variable wave =  5*/ ;
S_IADL5A=S5IADL5A ;
S_IADL5H=S5IADL5H ;
S_IANN=S5IANN ;
S_IEARN=S5IEARN ;
S_IFANN=S5IFANN ;
S_IFEARN=S5IFEARN ;
S_IFGXFR=S5IFGXFR ;
S_IFIRAW=S5IFIRAW ;
/* Empty map cell for: S_IFIRAWY1    variable wave =  5*/ ;
S_IFPEN=S5IFPEN ;
S_IFPENA=S5IFPENA ;
S_IFSDI=S5IFSDI ;
S_IFSRET=S5IFSRET ;
S1_IFSSDI=S5IFSSDI ;
/* Empty map cell for: S_IFSSDI      variable wave =  5*/ ;
/* Empty map cell for: S_IFSSI       variable wave =  5*/ ;
S_IFUNEM=S5IFUNEM ;
S1_IFUNWC=S5IFUNWC ;
/* Empty map cell for: S2_IFUNWC     variable wave =  5*/ ;
S_IFWCMP=S5IFWCMP ;
S_IGXFR=S5IGXFR ;
S_IIRAW=S5IIRAW ;
S_IIRAWY1=S5IIRAWY1 ;
S_IMRC=S5IMRC ;
/* Empty map cell for: S_IMRC20      variable wave =  5*/ ;
S_INHER=S5INHER ;
S_INHPE=S5INHPE ;
S_INHPFN=S5INHPFN ;
S_INHPNFN=S5INHPNFN ;
S_INHPPN=S5INHPPN ;
S_INHPTN=S5INHPTN ;
S_INHPUN=S5INHPUN ;
S_INLBRF=S5INLBRF ;
S_IPEN=S5IPEN ;
S_IPENA=S5IPENA ;
S_ISDI=S5ISDI ;
S_ISRET=S5ISRET ;
S_ISSDI=S5ISSDI ;
S_ISSI=S5ISSI ;
S_IUNEM=S5IUNEM ;
S_IUNWC=S5IUNWC ;
S_IWBEG=S5IWBEG ;
/* Empty map cell for: S_IWBEGF      variable wave =  5*/ ;
S_IWCMP=S5IWCMP ;
S_IWEND=S5IWEND ;
/* Empty map cell for: S_IWENDF      variable wave =  5*/ ;
S_IWENDM=S5IWENDM ;
S_IWENDY=S5IWENDY ;
S_IWMID=S5IWMID ;
S_IWMIDF=S5IWMIDF ;
S_IWSTAT=S5IWSTAT ;
S_JCIND=S5JCIND ;
/* Empty map cell for: S_JCINDB      variable wave =  5*/ ;
/* Empty map cell for: S_JCINDC      variable wave =  5*/ ;
S_JCOCC=S5JCOCC ;
S_JCOCCA=S5JCOCCA ;
/* Empty map cell for: S_JCOCCB      variable wave =  5*/ ;
/* Empty map cell for: S_JCOCCC      variable wave =  5*/ ;
S_JCPEN=S5JCPEN ;
S_JCPENF=S5JCPENF ;
S_JCTEN=S5JCTEN ;
S_JHOUR2=S5JHOUR2 ;
S_JHOURS=S5JHOURS ;
S_JJOBS=S5JJOBS ;
S_JLASTM=S5JLASTM ;
S_JLASTY=S5JLASTY ;
S_JLIFT=S5JLIFT ;
S_JLIND=S5JLIND ;
/* Empty map cell for: S_JLINDB      variable wave =  5*/ ;
/* Empty map cell for: S_JLINDC      variable wave =  5*/ ;
S_JLMIS=S5JLMIS ;
S_JLOCC=S5JLOCC ;
S_JLOCCA=S5JLOCCA ;
/* Empty map cell for: S_JLOCCB      variable wave =  5*/ ;
/* Empty map cell for: S_JLOCCC      variable wave =  5*/ ;
S_JLTEN=S5JLTEN ;
S_JLTENF=S5JLTENF ;
S_JMISS=S5JMISS ;
S_JNJOB=S5JNJOB ;
S_JNJOB5=S5JNJOB5 ;
/* Empty map cell for: S1_JOG        variable wave =  5*/ ;
/* Empty map cell for: S2_JOG        variable wave =  5*/ ;
S_JOG=S5JOG ;
S_JOGA=S5JOGA ;
/* Empty map cell for: S_JOGW        variable wave =  5*/ ;
S_JPHYS=S5JPHYS ;
S_JSIGHT=S5JSIGHT ;
S_JSTOOP=S5JSTOOP ;
S_JSTRES=S5JSTRES ;
S_JWEEK2=S5JWEEK2 ;
S_JWEEKS=S5JWEEKS ;
S_JYEARM=S5JYEARM ;
S_JYEARS=S5JYEARS ;
/* Empty map cell for: S_LBAGR       variable wave =  5*/ ;
/* Empty map cell for: S_LBASSISTPRB variable wave =  5*/ ;
/* Empty map cell for: S_LBCOMP      variable wave =  5*/ ;
/* Empty map cell for: S_LBCON10     variable wave =  5*/ ;
/* Empty map cell for: S_LBCON5      variable wave =  5*/ ;
/* Empty map cell for: S_LBELIG      variable wave =  5*/ ;
/* Empty map cell for: S_LBEXT       variable wave =  5*/ ;
/* Empty map cell for: S_LBFAMDRUGPRBvariable wave =  5*/ ;
/* Empty map cell for: S_LBFAMHLTHPRBvariable wave =  5*/ ;
/* Empty map cell for: S_LBFINPRB    variable wave =  5*/ ;
/* Empty map cell for: S_LBHLTHPRB   variable wave =  5*/ ;
/* Empty map cell for: S_LBHOUSEPRB  variable wave =  5*/ ;
/* Empty map cell for: S_LBLONELY11  variable wave =  5*/ ;
/* Empty map cell for: S_LBLONELY3   variable wave =  5*/ ;
/* Empty map cell for: S_LBNEGAFFECT variable wave =  5*/ ;
/* Empty map cell for: S_LBNEGAFFECT6variable wave =  5*/ ;
/* Empty map cell for: S_LBNEUR      variable wave =  5*/ ;
/* Empty map cell for: S_LBONCHRSTR  variable wave =  5*/ ;
/* Empty map cell for: S_LBOPEN      variable wave =  5*/ ;
/* Empty map cell for: S_LBPOSAFFECT variable wave =  5*/ ;
/* Empty map cell for: S_LBPOSAFFECT6variable wave =  5*/ ;
S_LBRF=S5LBRF ;
S_LBRFH=S5LBRFH ;
S_LBRFY=S5LBRFY ;
/* Empty map cell for: S_LBRLTNSHPRB variable wave =  5*/ ;
/* Empty map cell for: S_LBSATCITY   variable wave =  5*/ ;
/* Empty map cell for: S_LBSATFAM    variable wave =  5*/ ;
/* Empty map cell for: S_LBSATFIN    variable wave =  5*/ ;
/* Empty map cell for: S_LBSATHLTH   variable wave =  5*/ ;
/* Empty map cell for: S_LBSATHOME   variable wave =  5*/ ;
/* Empty map cell for: S_LBSATINC    variable wave =  5*/ ;
/* Empty map cell for: S_LBSATLEISUREvariable wave =  5*/ ;
/* Empty map cell for: S_LBSATLIFE   variable wave =  5*/ ;
/* Empty map cell for: S_LBSATWLF    variable wave =  5*/ ;
/* Empty map cell for: S_LBWGTR      variable wave =  5*/ ;
/* Empty map cell for: S_LBWORKPRB   variable wave =  5*/ ;
S_LGMUSA=S5LGMUSA ;
/* Empty map cell for: S_LGMUSW      variable wave =  5*/ ;
/* Empty map cell for: S_LHTACT      variable wave =  5*/ ;
S_LIFEIN=S5LIFEIN ;
/* Empty map cell for: S1_LIFT       variable wave =  5*/ ;
/* Empty map cell for: S2_LIFT       variable wave =  5*/ ;
S_LIFT=S5LIFT ;
S_LIFTA=S5LIFTA ;
/* Empty map cell for: S_LIFTW       variable wave =  5*/ ;
S_LIV10=S5LIV10 ;
S_LIV10A=S5LIV10A ;
S_LIV10P=S5LIV10P ;
S_LIV10R=S5LIV10R ;
S_LIV75=S5LIV75 ;
S_LIV75C=S5LIV75C ;
S_LIV75F=S5LIV75F ;
S_LIV75P=S5LIV75P ;
S_LIV75R=S5LIV75R ;
/* Empty map cell for: S_LIV85       variable wave =  5*/ ;
/* Empty map cell for: S_LIV85C      variable wave =  5*/ ;
/* Empty map cell for: S_LIV85F      variable wave =  5*/ ;
/* Empty map cell for: S_LIV85P      variable wave =  5*/ ;
/* Empty map cell for: S_LIV85R      variable wave =  5*/ ;
S_LIV8XC=S5LIV8XC ;
S_LIV8XF=S5LIV8XF ;
S_LIVBRO=S5LIVBRO ;
S_LIVPAR=S5LIVPAR ;
S_LIVSIB=S5LIVSIB ;
S_LIVSIS=S5LIVSIS ;
S_LOST=S5LOST ;
/* Empty map cell for: S_LTACTF      variable wave =  5*/ ;
/* Empty map cell for: S_LTACTN      variable wave =  5*/ ;
/* Empty map cell for: S_LTACTP      variable wave =  5*/ ;
/* Empty map cell for: S_LTACTX      variable wave =  5*/ ;
S_LTCPRM=S5LTCPRM ;
S_LUNG=S5LUNG ;
S_LUNGE=S5LUNGE ;
S_LUNGEF=S5LUNGEF ;
S_LUNGF=S5LUNGF ;
S_LUNGQ=S5LUNGQ ;
S_LUNGS=S5LUNGS ;
S_MAMMOG=S5MAMMOG ;
/* Empty map cell for: S1_MAP        variable wave =  5*/ ;
/* Empty map cell for: S2_MAP        variable wave =  5*/ ;
S_MAP=S5MAP ;
S_MAPA=S5MAPA ;
/* Empty map cell for: S_MAPW        variable wave =  5*/ ;
S_MCURLN=S5MCURLN ;
/* Empty map cell for: S_MCWV        variable wave =  5*/ ;
/* Empty map cell for: S_MCWVW       variable wave =  5*/ ;
/* Empty map cell for: S_MDACTX      variable wave =  5*/ ;
S_MDIV=S5MDIV ;
S_MEALS=S5MEALS ;
S_MEALSA=S5MEALSA ;
S_MEALSH=S5MEALSH ;
/* Empty map cell for: S_MEALSR      variable wave =  5*/ ;
/* Empty map cell for: S2_MEDS       variable wave =  5*/ ;
S_MEDS=S5MEDS ;
S_MEDSA=S5MEDSA ;
S_MEDSH=S5MEDSH ;
/* Empty map cell for: S_MEDSR       variable wave =  5*/ ;
S_MEDUC=S5MEDUC ;
S_MEMRY=S5MEMRY ;
S_MEMRYE=S5MEMRYE ;
S_MEMRYEF=S5MEMRYEF ;
S_MEMRYF=S5MEMRYF ;
S_MEMRYQ=S5MEMRYQ ;
S_MEMRYS=S5MEMRYS ;
S_MEND=S5MEND ;
S_MLEN=S5MLEN ;
S_MLENM=S5MLENM ;
S_MNEV=S5MNEV ;
S_MO=S5MO ;
S_MOBILA=S5MOBILA ;
/* Empty map cell for: S_MOBILW      variable wave =  5*/ ;
S_MOMAGE=S5MOMAGE ;
S_MOMLIV=S5MOMLIV ;
/* Empty map cell for: S2_MONEY      variable wave =  5*/ ;
S_MONEY=S5MONEY ;
S_MONEYA=S5MONEYA ;
S_MONEYH=S5MONEYH ;
/* Empty map cell for: S_MONEYR      variable wave =  5*/ ;
S_MPART=S5MPART ;
S_MRCT=S5MRCT ;
S_MRPREM=S5MRPREM ;
S_MSTAT=S5MSTAT ;
S_MSTATF=S5MSTATF ;
S_MSTATH=S5MSTATH ;
S_MSTOT=S5MSTOT ;
S_MWID=S5MWID ;
S_NHMDAY=S5NHMDAY ;
S_NHMLIV=S5NHMLIV ;
S_NHMMVM=S5NHMMVM ;
S_NHMMVY=S5NHMMVY ;
S_NOTICS=S5NOTICS ;
/* Empty map cell for: S_NOVOC       variable wave =  5*/ ;
S_NRSHOM=S5NRSHOM ;
S_NRSNIT=S5NRSNIT ;
S_NRSTIM=S5NRSTIM ;
/* Empty map cell for: S_NSSCRE      variable wave =  5*/ ;
/* Empty map cell for: S_NSSCSE      variable wave =  5*/ ;
S_OAHDID=S5OAHDID ;
S_OHRSID=S5OHRSID ;
S_OOPMD=S5OOPMD ;
S_OOPMDF=S5OOPMDF ;
/* Empty map cell for: S_OOPMDO      variable wave =  5*/ ;
/* Empty map cell for: S_OOPMDOF     variable wave =  5*/ ;
S_OUTPT=S5OUTPT ;
S_PAPSM=S5PAPSM ;
/* Empty map cell for: S_PARTD       variable wave =  5*/ ;
S_PENCT=S5PENCT ;
S_PENIC1=S5PENIC1 ;
S_PENIC2=S5PENIC2 ;
S_PENINC=S5PENINC ;
S_PENI_N=S5PENI_N ;
/* Empty map cell for: S2_PHONE      variable wave =  5*/ ;
S_PHONE=S5PHONE ;
S_PHONEA=S5PHONEA ;
S_PHONEH=S5PHONEH ;
/* Empty map cell for: S_PHONER      variable wave =  5*/ ;
/* Empty map cell for: S_PMBMI       variable wave =  5*/ ;
/* Empty map cell for: S_PMHGHT      variable wave =  5*/ ;
/* Empty map cell for: S_PMHGHTS     variable wave =  5*/ ;
/* Empty map cell for: S_PMWAIST     variable wave =  5*/ ;
/* Empty map cell for: S_PMWAISTC    variable wave =  5*/ ;
/* Empty map cell for: S_PMWGHT      variable wave =  5*/ ;
/* Empty map cell for: S_PMWGHTF     variable wave =  5*/ ;
/* Empty map cell for: S_PMWGHTS     variable wave =  5*/ ;
S_PNHM5Y=S5PNHM5Y ;
S_PRCHMEM=S5PRCHMEM ;
S_PRES=S5PRES ;
S_PRMEM=S5PRMEM ;
S_PROST=S5PROST ;
S_PROXY=S5PROXY ;
S_PRPCNT=S5PRPCNT ;
S_PRPRM1=S5PRPRM1 ;
S_PRPRM2=S5PRPRM2 ;
/* Empty map cell for: S_PRPRM3      variable wave =  5*/ ;
S_PRSRC1=S5PRSRC1 ;
S_PRSRC2=S5PRSRC2 ;
/* Empty map cell for: S_PRSRC3      variable wave =  5*/ ;
S_PSTMEM=S5PSTMEM ;
S_PSYCH=S5PSYCH ;
S_PSYCHE=S5PSYCHE ;
S_PSYCHEF=S5PSYCHEF ;
S_PSYCHF=S5PSYCHF ;
S_PSYCHQ=S5PSYCHQ ;
S_PSYCHS=S5PSYCHS ;
S_PTYP1=S5PTYP1 ;
S_PTYP2=S5PTYP2 ;
S_PTYP3=S5PTYP3 ;
S_PTYP4=S5PTYP4 ;
/* Empty map cell for: S_PTYPD1      variable wave =  5*/ ;
/* Empty map cell for: S_PTYPD2      variable wave =  5*/ ;
/* Empty map cell for: S_PTYPD3      variable wave =  5*/ ;
/* Empty map cell for: S_PTYPD4      variable wave =  5*/ ;
/* Empty map cell for: S_PTYPF1      variable wave =  5*/ ;
/* Empty map cell for: S_PTYPF2      variable wave =  5*/ ;
/* Empty map cell for: S_PTYPF3      variable wave =  5*/ ;
/* Empty map cell for: S_PTYPF4      variable wave =  5*/ ;
/* Empty map cell for: S_PUFF        variable wave =  5*/ ;
/* Empty map cell for: S_PUFFPOS     variable wave =  5*/ ;
/* Empty map cell for: S1_PUSH       variable wave =  5*/ ;
/* Empty map cell for: S2_PUSH       variable wave =  5*/ ;
S_PUSH=S5PUSH ;
S_PUSHA=S5PUSHA ;
/* Empty map cell for: S_PUSHW       variable wave =  5*/ ;
S_RACEM=S5RACEM ;
S_RELIG=S5RELIG ;
S_RETDTWV=S5RETDTWV ;
S_RETEMP=S5RETEMP ;
/* Empty map cell for: S_RETINC      variable wave =  5*/ ;
/* Empty map cell for: S_RETLIV      variable wave =  5*/ ;
S_RETMON=S5RETMON ;
S_RETSAT=S5RETSAT ;
/* Empty map cell for: S_RETWLT      variable wave =  5*/ ;
/* Empty map cell for: S_RETWRK      variable wave =  5*/ ;
/* Empty map cell for: S_RETWSP      variable wave =  5*/ ;
S_RETYR=S5RETYR ;
S_RISK=S5RISK ;
S_RISK6=S5RISK6 ;
S_RPLNYA=S5RPLNYA ;
S_RPLNYR=S5RPLNYR ;
/* Empty map cell for: S_RXPREM      variable wave =  5*/ ;
S_RYRCMP=S5RYRCMP ;
S_SADLF=S5SADLF ;
S_SAMEJOB=S5SAMEJOB ;
S_SAMEMP=S5SAMEMP ;
S_SAYRET=S5SAYRET ;
S_SCIS=S5SCIS ;
S_SDIAPL=S5SDIAPL ;
S_SDIAPLM=S5SDIAPLM ;
S_SDIAPLY=S5SDIAPLY ;
S_SDIAPP=S5SDIAPP ;
S_SDIAPPM=S5SDIAPPM ;
S_SDIAPPY=S5SDIAPPY ;
S_SDIDEN=S5SDIDEN ;
S_SDIREC=S5SDIREC ;
S_SDIRECM=S5SDIRECM ;
S_SDIRECY=S5SDIRECY ;
S_SDISTP=S5SDISTP ;
S_SDISTPM=S5SDISTPM ;
S_SDISTPY=S5SDISTPY ;
S_SER7=S5SER7 ;
S_SHLT=S5SHLT ;
S_SHLTC=S5SHLTC ;
S_SHLTCF=S5SHLTCF ;
S_SHOP=S5SHOP ;
S_SHOPA=S5SHOPA ;
S_SHOPH=S5SHOPH ;
/* Empty map cell for: S_SHOPR       variable wave =  5*/ ;
/* Empty map cell for: S1_SIT        variable wave =  5*/ ;
/* Empty map cell for: S2_SIT        variable wave =  5*/ ;
S_SIT=S5SIT ;
S_SITA=S5SITA ;
/* Empty map cell for: S_SITW        variable wave =  5*/ ;
/* Empty map cell for: S_SLEEP       variable wave =  5*/ ;
/* Empty map cell for: S_SLEEPE      variable wave =  5*/ ;
/* Empty map cell for: S_SLEEPEF     variable wave =  5*/ ;
/* Empty map cell for: S_SLEEPQ      variable wave =  5*/ ;
S_SLEEPR=S5SLEEPR ;
/* Empty map cell for: S_SLEEPS      variable wave =  5*/ ;
/* Empty map cell for: S_SLEEPX      variable wave =  5*/ ;
S_SLFEMP=S5SLFEMP ;
S_SLFMEM=S5SLFMEM ;
S_SMOKEN=S5SMOKEN ;
S_SMOKEV=S5SMOKEV ;
S_SPCFAC=S5SPCFAC ;
/* Empty map cell for: S_SSAPL       variable wave =  5*/ ;
/* Empty map cell for: S_SSAPLM      variable wave =  5*/ ;
/* Empty map cell for: S_SSAPLY      variable wave =  5*/ ;
/* Empty map cell for: S_SSAPP       variable wave =  5*/ ;
/* Empty map cell for: S_SSAPPM      variable wave =  5*/ ;
/* Empty map cell for: S_SSAPPY      variable wave =  5*/ ;
/* Empty map cell for: S_SSDEN       variable wave =  5*/ ;
S_SSDI=S5SSDI ;
S_SSIAPL=S5SSIAPL ;
S_SSIAPLM=S5SSIAPLM ;
S_SSIAPLY=S5SSIAPLY ;
S_SSIAPP=S5SSIAPP ;
S_SSIAPPM=S5SSIAPPM ;
S_SSIAPPY=S5SSIAPPY ;
S_SSIDEN=S5SSIDEN ;
S_SSIREC=S5SSIREC ;
S_SSIRECM=S5SSIRECM ;
S_SSIRECY=S5SSIRECY ;
S_SSISTP=S5SSISTP ;
S_SSISTPM=S5SSISTPM ;
S_SSISTPY=S5SSISTPY ;
/* Empty map cell for: S_SSREC       variable wave =  5*/ ;
/* Empty map cell for: S_SSRECM      variable wave =  5*/ ;
/* Empty map cell for: S_SSRECY      variable wave =  5*/ ;
/* Empty map cell for: S_SSSTP       variable wave =  5*/ ;
/* Empty map cell for: S_SSSTPM      variable wave =  5*/ ;
/* Empty map cell for: S_SSSTPY      variable wave =  5*/ ;
/* Empty map cell for: S_SSWRER      variable wave =  5*/ ;
/* Empty map cell for: S_SSWRNR      variable wave =  5*/ ;
/* Empty map cell for: S_SSWRXA      variable wave =  5*/ ;
/* Empty map cell for: S_SSWSER      variable wave =  5*/ ;
/* Empty map cell for: S_SSWSNR      variable wave =  5*/ ;
/* Empty map cell for: S_SSWSXA      variable wave =  5*/ ;
S_STATUS=S5STATUS ;
/* Empty map cell for: S1_STOOP      variable wave =  5*/ ;
/* Empty map cell for: S2_STOOP      variable wave =  5*/ ;
S_STOOP=S5STOOP ;
S_STOOPA=S5STOOPA ;
/* Empty map cell for: S_STOOPW      variable wave =  5*/ ;
S_STROK=S5STROK ;
S_STROKE=S5STROKE ;
S_STROKEF=S5STROKEF ;
S_STROKF=S5STROKF ;
S_STROKQ=S5STROKQ ;
S_STROKS=S5STROKS ;
/* Empty map cell for: S_TIMWLK      variable wave =  5*/ ;
/* Empty map cell for: S_TIMWLKA     variable wave =  5*/ ;
/* Empty map cell for: S_TLIPRM      variable wave =  5*/ ;
/* Empty map cell for: S2_TOILT      variable wave =  5*/ ;
S_TOILT=S5TOILT ;
S_TOILTA=S5TOILTA ;
/* Empty map cell for: S2_TOILTH     variable wave =  5*/ ;
S_TOILTH=S5TOILTH ;
S_TOTMBF=S5TOTMBF ;
S_TOTMBI=S5TOTMBI ;
/* Empty map cell for: S_TOTMD       variable wave =  5*/ ;
/* Empty map cell for: S_TOTMDF      variable wave =  5*/ ;
S_TR20=S5TR20 ;
/* Empty map cell for: S_TR40        variable wave =  5*/ ;
S_TYLTC=S5TYLTC ;
/* Empty map cell for: S_ULCER       variable wave =  5*/ ;
S_UNEMP=S5UNEMP ;
S_UNION=S5UNION ;
S_UNIONF=S5UNIONF ;
S_VETRN=S5VETRN ;
/* Empty map cell for: S_VGACTF      variable wave =  5*/ ;
/* Empty map cell for: S_VGACTN      variable wave =  5*/ ;
/* Empty map cell for: S_VGACTP      variable wave =  5*/ ;
/* Empty map cell for: S_VGACTX      variable wave =  5*/ ;
S_VIGACT=S5VIGACT ;
S_VOCAB=S5VOCAB ;
S_VP=S5VP ;
/* Empty map cell for: S1_WALK1      variable wave =  5*/ ;
/* Empty map cell for: S2_WALK1      variable wave =  5*/ ;
S_WALK1=S5WALK1 ;
S_WALK1A=S5WALK1A ;
/* Empty map cell for: S_WALK1W      variable wave =  5*/ ;
/* Empty map cell for: S1_WALKR      variable wave =  5*/ ;
/* Empty map cell for: S2_WALKR      variable wave =  5*/ ;
S_WALKR=S5WALKR ;
S_WALKRA=S5WALKRA ;
S_WALKRE=S5WALKRE ;
/* Empty map cell for: S2_WALKRH     variable wave =  5*/ ;
S_WALKRH=S5WALKRH ;
/* Empty map cell for: S_WALKRW      variable wave =  5*/ ;
/* Empty map cell for: S1_WALKS      variable wave =  5*/ ;
/* Empty map cell for: S2_WALKS      variable wave =  5*/ ;
S_WALKS=S5WALKS ;
S_WALKSA=S5WALKSA ;
/* Empty map cell for: S_WALKSW      variable wave =  5*/ ;
S_WANDER=S5WANDER ;
S_WEIGHT=S5WEIGHT ;
S_WGFHR=S5WGFHR ;
S_WGFWK=S5WGFWK ;
S_WGIHR=S5WGIHR ;
S_WGIWK=S5WGIWK ;
/* Empty map cell for: S_WHAPPX      variable wave =  5*/ ;
S_WHAPPY=S5WHAPPY ;
S_WLIPRM=S5WLIPRM ;
S_WORK=S5WORK ;
S_WORK2=S5WORK2 ;
S_WORK62=S5WORK62 ;
S_WORK62F=S5WORK62F ;
S_WORK65=S5WORK65 ;
S_WORK65F=S5WORK65F ;
/* Empty map cell for: S_WORK70      variable wave =  5*/ ;
/* Empty map cell for: S_WORK70A     variable wave =  5*/ ;
/* Empty map cell for: S_WORK70AF    variable wave =  5*/ ;
/* Empty map cell for: S_WORK70F     variable wave =  5*/ ;
S_WORKLM=S5WORKLM ;
S_WTCRNH=S5WTCRNH ;
S_WTRESP=S5WTRESP ;
S_WTR_NH=S5WTR_NH ;
S_YR=S5YR ;
if inw=1 then output ;
%put --- Slong table ;
%initvars ;
%put ---- Slong table ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
/* --- RAND variable:HHIDPN  included */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
/* --- RAND variable:HACOHORT  included */ ;
WAVE_NUMBER=6 ;
WAVE_NAME=  'hrs_wave'||strip(put(wave_number,3.))     /* --- Derived variable  */ ;
studyyr= hrs_studyyr(wave_number,
hacohort)     /* --- Derived variable  */ ;
CYEAR='yr2002' ;
H_HHID=H6HHID ;
H_HHIDC=H6HHIDC ;
SUBHH= substr(H_HHIDC,7)     /* --- Derived variable  */ ;
INW=INW6 ;
S_HHIDPN=S6HHIDPN ;
/* --- RAND variable:SASSAGEB  included */ ;
/* --- RAND variable:SASSAGEM  included */ ;
/* --- RAND variable:SASSRECV  included */ ;
/* Empty map cell for: S_ACGTOT      variable wave =  6*/ ;
S_ADL5A=S6ADL5A ;
S_ADL5H=S6ADL5H ;
S_ADL6A=S6ADL6A ;
S_ADL6H=S6ADL6H ;
/* Empty map cell for: S_ADLR10      variable wave =  6*/ ;
/* Empty map cell for: S_ADLW        variable wave =  6*/ ;
S_AGEM_B=S6AGEM_B ;
S_AGEM_E=S6AGEM_E ;
S_AGEM_M=S6AGEM_M ;
S_AGEY_B=S6AGEY_B ;
S_AGEY_E=S6AGEY_E ;
S_AGEY_M=S6AGEY_M ;
S_AHDSMP=S6AHDSMP ;
/* Empty map cell for: S_AIMR10      variable wave =  6*/ ;
S_ALONE=S6ALONE ;
/* Empty map cell for: S_ALZHE       variable wave =  6*/ ;
/* Empty map cell for: S_ALZHEE      variable wave =  6*/ ;
/* Empty map cell for: S_ALZHEEF     variable wave =  6*/ ;
/* Empty map cell for: S_ALZHEF      variable wave =  6*/ ;
/* Empty map cell for: S_ALZHEQ      variable wave =  6*/ ;
/* Empty map cell for: S_ALZHES      variable wave =  6*/ ;
/* Empty map cell for: S_AMSTOT      variable wave =  6*/ ;
S_ANS3PQ=S6ANS3PQ ;
/* Empty map cell for: S1_ARMS       variable wave =  6*/ ;
/* Empty map cell for: S2_ARMS       variable wave =  6*/ ;
S_ARMS=S6ARMS ;
S_ARMSA=S6ARMSA ;
/* Empty map cell for: S_ARMSW       variable wave =  6*/ ;
S_ARTHR=S6ARTHR ;
S_ARTHRE=S6ARTHRE ;
S_ARTHREF=S6ARTHREF ;
S_ARTHRF=S6ARTHRF ;
S_ARTHRQ=S6ARTHRQ ;
S_ARTHRS=S6ARTHRS ;
/* Empty map cell for: S_ATR20       variable wave =  6*/ ;
S_BACK=S6BACK ;
/* Empty map cell for: S_BALFUL      variable wave =  6*/ ;
/* Empty map cell for: S_BALFULC     variable wave =  6*/ ;
/* Empty map cell for: S_BALFULT     variable wave =  6*/ ;
/* Empty map cell for: S_BALSBS      variable wave =  6*/ ;
/* Empty map cell for: S_BALSBSC     variable wave =  6*/ ;
/* Empty map cell for: S_BALSEMI     variable wave =  6*/ ;
/* Empty map cell for: S_BALSEMIC    variable wave =  6*/ ;
/* Empty map cell for: S1_BATH       variable wave =  6*/ ;
/* Empty map cell for: S2_BATH       variable wave =  6*/ ;
S_BATH=S6BATH ;
S_BATHA=S6BATHA ;
/* Empty map cell for: S2_BATHH      variable wave =  6*/ ;
S_BATHH=S6BATHH ;
/* Empty map cell for: S_BATHW       variable wave =  6*/ ;
S_BDATE=S6BDATE ;
/* Empty map cell for: S1_BED        variable wave =  6*/ ;
/* Empty map cell for: S2_BED        variable wave =  6*/ ;
S_BED=S6BED ;
S_BEDA=S6BEDA ;
S_BEDE=S6BEDE ;
/* Empty map cell for: S2_BEDH       variable wave =  6*/ ;
S_BEDH=S6BEDH ;
/* Empty map cell for: S_BEDW        variable wave =  6*/ ;
S_BEQ100=S6BEQ100 ;
S_BEQ10K=S6BEQ10K ;
S_BEQ500=S6BEQ500 ;
S_BEQANY=S6BEQANY ;
/* Empty map cell for: S_BEQLRG      variable wave =  6*/ ;
S_BFLAG=S6BFLAG ;
S_BMI=S6BMI ;
S_BMONTH=S6BMONTH ;
/* Empty map cell for: S_BPDIA       variable wave =  6*/ ;
S_BPLACE=S6BPLACE ;
S_BPLACF=S6BPLACF ;
/* Empty map cell for: S_BPPOS       variable wave =  6*/ ;
/* Empty map cell for: S_BPPULS      variable wave =  6*/ ;
/* Empty map cell for: S_BPSYS       variable wave =  6*/ ;
S_BREAST=S6BREAST ;
S_BWC20=S6BWC20 ;
S_BWC86=S6BWC86 ;
S_BYEAR=S6BYEAR ;
S_CACT=S6CACT ;
/* Empty map cell for: S1_CALC       variable wave =  6*/ ;
/* Empty map cell for: S2_CALC       variable wave =  6*/ ;
/* Empty map cell for: S_CALCA       variable wave =  6*/ ;
/* Empty map cell for: S_CALCW       variable wave =  6*/ ;
S_CANCR=S6CANCR ;
S_CANCRE=S6CANCRE ;
S_CANCREF=S6CANCREF ;
S_CANCRF=S6CANCRF ;
S_CANCRQ=S6CANCRQ ;
S_CANCRS=S6CANCRS ;
S_CENDIV=S6CENDIV ;
S_CENREG=S6CENREG ;
S_CESD=S6CESD ;
S_CESDM=S6CESDM ;
/* Empty map cell for: S1_CHAIR      variable wave =  6*/ ;
/* Empty map cell for: S2_CHAIR      variable wave =  6*/ ;
S_CHAIR=S6CHAIR ;
S_CHAIRA=S6CHAIRA ;
/* Empty map cell for: S_CHAIRW      variable wave =  6*/ ;
S_CHOLST=S6CHOLST ;
/* Empty map cell for: S_CLAIMED     variable wave =  6*/ ;
/* Empty map cell for: S1_CLIM1      variable wave =  6*/ ;
/* Empty map cell for: S2_CLIM1      variable wave =  6*/ ;
S_CLIM1=S6CLIM1 ;
S_CLIM1A=S6CLIM1A ;
/* Empty map cell for: S_CLIM1W      variable wave =  6*/ ;
/* Empty map cell for: S1_CLIMS      variable wave =  6*/ ;
/* Empty map cell for: S2_CLIMS      variable wave =  6*/ ;
S_CLIMS=S6CLIMS ;
S_CLIMSA=S6CLIMSA ;
/* Empty map cell for: S_CLIMSW      variable wave =  6*/ ;
S_COGTOT=S6COGTOT ;
S_COHBYR=S6COHBYR ;
S_COHORT=S6COHORT ;
/* Empty map cell for: S_COMP        variable wave =  6*/ ;
/* Empty map cell for: S_COMPW       variable wave =  6*/ ;
S_CONDE=S6CONDE ;
S_CONDEF=S6CONDEF ;
S_CONDS=S6CONDS ;
S_CONDSF=S6CONDSF ;
S_CONDSP=S6CONDSP ;
S_COVR=S6COVR ;
S_COVRT=S6COVRT ;
S_COVS=S6COVS ;
S_DADAGE=S6DADAGE ;
S_DADLIV=S6DADLIV ;
S_DAGE_M=S6DAGE_M ;
S_DAGE_Y=S6DAGE_Y ;
S_DCBAL1=S6DCBAL1 ;
S_DCBAL2=S6DCBAL2 ;
S_DCBAL3=S6DCBAL3 ;
S_DCBAL4=S6DCBAL4 ;
S_DCBENE1=S6DCBENE1 ;
S_DCBENE2=S6DCBENE2 ;
S_DCBENE3=S6DCBENE3 ;
S_DCBENE4=S6DCBENE4 ;
S_DCCONT1=S6DCCONT1 ;
S_DCCONT2=S6DCCONT2 ;
S_DCCONT3=S6DCCONT3 ;
S_DCCONT4=S6DCCONT4 ;
S_DCMODE1=S6DCMODE1 ;
S_DCMODE2=S6DCMODE2 ;
S_DCMODE3=S6DCMODE3 ;
S_DCMODE4=S6DCMODE4 ;
S_DCPCT1=S6DCPCT1 ;
S_DCPCT2=S6DCPCT2 ;
S_DCPCT3=S6DCPCT3 ;
S_DCPCT4=S6DCPCT4 ;
S_DDATE=S6DDATE ;
/* Empty map cell for: S_DEMEN       variable wave =  6*/ ;
/* Empty map cell for: S_DEMENE      variable wave =  6*/ ;
/* Empty map cell for: S_DEMENEF     variable wave =  6*/ ;
/* Empty map cell for: S_DEMENF      variable wave =  6*/ ;
/* Empty map cell for: S_DEMENQ      variable wave =  6*/ ;
/* Empty map cell for: S_DEMENS      variable wave =  6*/ ;
S_DENTST=S6DENTST ;
S_DEPRES=S6DEPRES ;
/* Empty map cell for: S_DEPREX      variable wave =  6*/ ;
S_DIAB=S6DIAB ;
S_DIABE=S6DIABE ;
S_DIABEF=S6DIABEF ;
S_DIABF=S6DIABF ;
S_DIABQ=S6DIABQ ;
S_DIABS=S6DIABS ;
/* Empty map cell for: S1_DIME       variable wave =  6*/ ;
/* Empty map cell for: S2_DIME       variable wave =  6*/ ;
S_DIME=S6DIME ;
S_DIMEA=S6DIMEA ;
/* Empty map cell for: S_DIMEW       variable wave =  6*/ ;
S_DLRC=S6DLRC ;
/* Empty map cell for: S_DLRC20      variable wave =  6*/ ;
S_DMONTH=S6DMONTH ;
S_DOCTIM=S6DOCTIM ;
S_DOCTOR=S6DOCTOR ;
/* Empty map cell for: S1_DRESS      variable wave =  6*/ ;
/* Empty map cell for: S2_DRESS      variable wave =  6*/ ;
S_DRESS=S6DRESS ;
S_DRESSA=S6DRESSA ;
/* Empty map cell for: S2_DRESSH     variable wave =  6*/ ;
S_DRESSH=S6DRESSH ;
/* Empty map cell for: S_DRESSW      variable wave =  6*/ ;
S_DRINK=S6DRINK ;
S_DRINKD=S6DRINKD ;
S_DRINKN=S6DRINKN ;
/* Empty map cell for: S_DRINKR      variable wave =  6*/ ;
S_DRUGS=S6DRUGS ;
S_DSIAMT=S6DSIAMT ;
S_DSRC=S6DSRC ;
S_DSSAMT=S6DSSAMT ;
S_DSTAT=S6DSTAT ;
S_DTIMTDTH=S6DTIMTDTH ;
S_DW=S6DW ;
S_DY=S6DY ;
S_DYEAR=S6DYEAR ;
/* Empty map cell for: S1_EAT        variable wave =  6*/ ;
/* Empty map cell for: S2_EAT        variable wave =  6*/ ;
S_EAT=S6EAT ;
S_EATA=S6EATA ;
/* Empty map cell for: S2_EATH       variable wave =  6*/ ;
S_EATH=S6EATH ;
/* Empty map cell for: S_EATW        variable wave =  6*/ ;
S_EDEGRM=S6EDEGRM ;
S_EDUC=S6EDUC ;
S_EDYRS=S6EDYRS ;
S_EFFORT=S6EFFORT ;
/* Empty map cell for: S_EFFORX      variable wave =  6*/ ;
S_ENLIFE=S6ENLIFE ;
/* Empty map cell for: S_ENLIFX      variable wave =  6*/ ;
S_EVBRN=S6EVBRN ;
S_EVBRNF=S6EVBRNF ;
S_FAMR=S6FAMR ;
S_FBWC20=S6FBWC20 ;
S_FBWC86=S6FBWC86 ;
S_FCACT=S6FCACT ;
S_FDLRC=S6FDLRC ;
S_FDW=S6FDW ;
S_FDY=S6FDY ;
S_FEDUC=S6FEDUC ;
S_FIMRC=S6FIMRC ;
S_FINEA=S6FINEA ;
S_FINPLN=S6FINPLN ;
S_FINR=S6FINR ;
/* Empty map cell for: S_FLAG        variable wave =  6*/ ;
S_FLONE=S6FLONE ;
/* Empty map cell for: S_FLONEX      variable wave =  6*/ ;
S_FLUSHT=S6FLUSHT ;
S_FMO=S6FMO ;
S_FPRES=S6FPRES ;
S_FPSTME=S6FPSTME ;
S_FSAD=S6FSAD ;
/* Empty map cell for: S_FSADX       variable wave =  6*/ ;
S_FSCIS=S6FSCIS ;
S_FSER7=S6FSER7 ;
S_FSIZE=S6FSIZE ;
S_FSIZEF=S6FSIZEF ;
S_FSLFME=S6FSLFME ;
S_FVOCAB=S6FVOCAB ;
S_FVP=S6FVP ;
S_FYR=S6FYR ;
S_GENDER=S6GENDER ;
S_GOING=S6GOING ;
/* Empty map cell for: S_GOINGX      variable wave =  6*/ ;
S_GOVMD=S6GOVMD ;
S_GOVMR=S6GOVMR ;
/* Empty map cell for: S_GOVOT       variable wave =  6*/ ;
S_GOVVA=S6GOVVA ;
S_GROSSA=S6GROSSA ;
/* Empty map cell for: S_GRP         variable wave =  6*/ ;
/* Empty map cell for: S_GRPDOM      variable wave =  6*/ ;
/* Empty map cell for: S_GRPL        variable wave =  6*/ ;
/* Empty map cell for: S_GRPPOS      variable wave =  6*/ ;
/* Empty map cell for: S_GRPR        variable wave =  6*/ ;
S_HALUC=S6HALUC ;
/* Empty map cell for: S_HDLR20      variable wave =  6*/ ;
S_HEART=S6HEART ;
S_HEARTE=S6HEARTE ;
S_HEARTEF=S6HEARTEF ;
S_HEARTF=S6HEARTF ;
S_HEARTQ=S6HEARTQ ;
S_HEARTS=S6HEARTS ;
S_HECOV1=S6HECOV1 ;
S_HECOV2=S6HECOV2 ;
S_HECOV3=S6HECOV3 ;
S_HEIGHT=S6HEIGHT ;
S_HENUM=S6HENUM ;
S_HERET=S6HERET ;
S_HERTR1=S6HERTR1 ;
S_HERTR2=S6HERTR2 ;
S_HERTR3=S6HERTR3 ;
S_HERTS1=S6HERTS1 ;
S_HERTS2=S6HERTS2 ;
S_HERTS3=S6HERTS3 ;
S_HESRC1=S6HESRC1 ;
S_HESRC2=S6HESRC2 ;
S_HESRC3=S6HESRC3 ;
S_HHIDPN=S6HHIDPN ;
S_HIBP=S6HIBP ;
S_HIBPE=S6HIBPE ;
S_HIBPEF=S6HIBPEF ;
S_HIBPF=S6HIBPF ;
S_HIBPQ=S6HIBPQ ;
S_HIBPS=S6HIBPS ;
S_HIGOV=S6HIGOV ;
S_HILTC=S6HILTC ;
/* Empty map cell for: S_HIMR20      variable wave =  6*/ ;
S_HIOTHP=S6HIOTHP ;
S_HISPAN=S6HISPAN ;
S_HLPDYSF=S6HLPDYSF ;
S_HLPDYSNF=S6HLPDYSNF ;
S_HLPDYSP=S6HLPDYSP ;
S_HLPDYST=S6HLPDYST ;
S_HLPDYSU=S6HLPDYSU ;
S_HLPHRSF=S6HLPHRSF ;
S_HLPHRSNF=S6HLPHRSNF ;
S_HLPHRSP=S6HLPHRSP ;
S_HLPHRST=S6HLPHRST ;
S_HLPHRSU=S6HLPHRSU ;
S_HLPPDFA=S6HLPPDFA ;
S_HLPPDFN=S6HLPPDFN ;
S_HLPPDNFA=S6HLPPDNFA ;
S_HLPPDNFN=S6HLPPDNFN ;
S_HLPPDTA=S6HLPPDTA ;
S_HLPPDTN=S6HLPPDTN ;
S_HLPRFN=S6HLPRFN ;
S_HLPRNFN=S6HLPRNFN ;
S_HLPRPN=S6HLPRPN ;
S_HLPRTN=S6HLPRTN ;
S_HLPRUN=S6HLPRUN ;
S_HLTC3=S6HLTC3 ;
S_HLTC5=S6HLTC5 ;
S_HLTC5F=S6HLTC5F ;
S_HLTHLM=S6HLTHLM ;
S_HOMCAR=S6HOMCAR ;
S_HOSP=S6HOSP ;
S_HRSAMP=S6HRSAMP ;
S_HSPNIT=S6HSPNIT ;
S_HSPTIM=S6HSPTIM ;
/* Empty map cell for: S_HSWRKF      variable wave =  6*/ ;
/* Empty map cell for: S_HTR40       variable wave =  6*/ ;
S_IADL5A=S6IADL5A ;
S_IADL5H=S6IADL5H ;
S_IANN=S6IANN ;
S_IEARN=S6IEARN ;
S_IFANN=S6IFANN ;
S_IFEARN=S6IFEARN ;
S_IFGXFR=S6IFGXFR ;
S_IFIRAW=S6IFIRAW ;
/* Empty map cell for: S_IFIRAWY1    variable wave =  6*/ ;
S_IFPEN=S6IFPEN ;
S_IFPENA=S6IFPENA ;
S_IFSDI=S6IFSDI ;
S_IFSRET=S6IFSRET ;
S1_IFSSDI=S6IFSSDI ;
/* Empty map cell for: S_IFSSDI      variable wave =  6*/ ;
/* Empty map cell for: S_IFSSI       variable wave =  6*/ ;
S_IFUNEM=S6IFUNEM ;
/* Empty map cell for: S1_IFUNWC     variable wave =  6*/ ;
S2_IFUNWC=S6IFUNWC ;
S_IFWCMP=S6IFWCMP ;
S_IGXFR=S6IGXFR ;
S_IIRAW=S6IIRAW ;
S_IIRAWY1=S6IIRAWY1 ;
S_IMRC=S6IMRC ;
/* Empty map cell for: S_IMRC20      variable wave =  6*/ ;
S_INHER=S6INHER ;
S_INHPE=S6INHPE ;
S_INHPFN=S6INHPFN ;
S_INHPNFN=S6INHPNFN ;
S_INHPPN=S6INHPPN ;
S_INHPTN=S6INHPTN ;
S_INHPUN=S6INHPUN ;
S_INLBRF=S6INLBRF ;
S_IPEN=S6IPEN ;
S_IPENA=S6IPENA ;
S_ISDI=S6ISDI ;
S_ISRET=S6ISRET ;
S_ISSDI=S6ISSDI ;
S_ISSI=S6ISSI ;
S_IUNEM=S6IUNEM ;
S_IUNWC=S6IUNWC ;
S_IWBEG=S6IWBEG ;
/* Empty map cell for: S_IWBEGF      variable wave =  6*/ ;
S_IWCMP=S6IWCMP ;
S_IWEND=S6IWEND ;
/* Empty map cell for: S_IWENDF      variable wave =  6*/ ;
S_IWENDM=S6IWENDM ;
S_IWENDY=S6IWENDY ;
S_IWMID=S6IWMID ;
S_IWMIDF=S6IWMIDF ;
S_IWSTAT=S6IWSTAT ;
S_JCIND=S6JCIND ;
/* Empty map cell for: S_JCINDB      variable wave =  6*/ ;
/* Empty map cell for: S_JCINDC      variable wave =  6*/ ;
S_JCOCC=S6JCOCC ;
S_JCOCCA=S6JCOCCA ;
/* Empty map cell for: S_JCOCCB      variable wave =  6*/ ;
/* Empty map cell for: S_JCOCCC      variable wave =  6*/ ;
S_JCPEN=S6JCPEN ;
S_JCPENF=S6JCPENF ;
S_JCTEN=S6JCTEN ;
S_JHOUR2=S6JHOUR2 ;
S_JHOURS=S6JHOURS ;
S_JJOBS=S6JJOBS ;
S_JLASTM=S6JLASTM ;
S_JLASTY=S6JLASTY ;
S_JLIFT=S6JLIFT ;
S_JLIND=S6JLIND ;
/* Empty map cell for: S_JLINDB      variable wave =  6*/ ;
/* Empty map cell for: S_JLINDC      variable wave =  6*/ ;
S_JLMIS=S6JLMIS ;
S_JLOCC=S6JLOCC ;
S_JLOCCA=S6JLOCCA ;
/* Empty map cell for: S_JLOCCB      variable wave =  6*/ ;
/* Empty map cell for: S_JLOCCC      variable wave =  6*/ ;
S_JLTEN=S6JLTEN ;
S_JLTENF=S6JLTENF ;
S_JMISS=S6JMISS ;
S_JNJOB=S6JNJOB ;
S_JNJOB5=S6JNJOB5 ;
/* Empty map cell for: S1_JOG        variable wave =  6*/ ;
/* Empty map cell for: S2_JOG        variable wave =  6*/ ;
S_JOG=S6JOG ;
S_JOGA=S6JOGA ;
/* Empty map cell for: S_JOGW        variable wave =  6*/ ;
S_JPHYS=S6JPHYS ;
S_JSIGHT=S6JSIGHT ;
S_JSTOOP=S6JSTOOP ;
S_JSTRES=S6JSTRES ;
S_JWEEK2=S6JWEEK2 ;
S_JWEEKS=S6JWEEKS ;
S_JYEARM=S6JYEARM ;
S_JYEARS=S6JYEARS ;
/* Empty map cell for: S_LBAGR       variable wave =  6*/ ;
/* Empty map cell for: S_LBASSISTPRB variable wave =  6*/ ;
/* Empty map cell for: S_LBCOMP      variable wave =  6*/ ;
/* Empty map cell for: S_LBCON10     variable wave =  6*/ ;
/* Empty map cell for: S_LBCON5      variable wave =  6*/ ;
/* Empty map cell for: S_LBELIG      variable wave =  6*/ ;
/* Empty map cell for: S_LBEXT       variable wave =  6*/ ;
/* Empty map cell for: S_LBFAMDRUGPRBvariable wave =  6*/ ;
/* Empty map cell for: S_LBFAMHLTHPRBvariable wave =  6*/ ;
/* Empty map cell for: S_LBFINPRB    variable wave =  6*/ ;
/* Empty map cell for: S_LBHLTHPRB   variable wave =  6*/ ;
/* Empty map cell for: S_LBHOUSEPRB  variable wave =  6*/ ;
/* Empty map cell for: S_LBLONELY11  variable wave =  6*/ ;
/* Empty map cell for: S_LBLONELY3   variable wave =  6*/ ;
/* Empty map cell for: S_LBNEGAFFECT variable wave =  6*/ ;
/* Empty map cell for: S_LBNEGAFFECT6variable wave =  6*/ ;
/* Empty map cell for: S_LBNEUR      variable wave =  6*/ ;
/* Empty map cell for: S_LBONCHRSTR  variable wave =  6*/ ;
/* Empty map cell for: S_LBOPEN      variable wave =  6*/ ;
/* Empty map cell for: S_LBPOSAFFECT variable wave =  6*/ ;
/* Empty map cell for: S_LBPOSAFFECT6variable wave =  6*/ ;
S_LBRF=S6LBRF ;
S_LBRFH=S6LBRFH ;
S_LBRFY=S6LBRFY ;
/* Empty map cell for: S_LBRLTNSHPRB variable wave =  6*/ ;
/* Empty map cell for: S_LBSATCITY   variable wave =  6*/ ;
/* Empty map cell for: S_LBSATFAM    variable wave =  6*/ ;
/* Empty map cell for: S_LBSATFIN    variable wave =  6*/ ;
/* Empty map cell for: S_LBSATHLTH   variable wave =  6*/ ;
/* Empty map cell for: S_LBSATHOME   variable wave =  6*/ ;
/* Empty map cell for: S_LBSATINC    variable wave =  6*/ ;
/* Empty map cell for: S_LBSATLEISUREvariable wave =  6*/ ;
/* Empty map cell for: S_LBSATLIFE   variable wave =  6*/ ;
/* Empty map cell for: S_LBSATWLF    variable wave =  6*/ ;
/* Empty map cell for: S_LBWGTR      variable wave =  6*/ ;
/* Empty map cell for: S_LBWORKPRB   variable wave =  6*/ ;
S_LGMUSA=S6LGMUSA ;
/* Empty map cell for: S_LGMUSW      variable wave =  6*/ ;
/* Empty map cell for: S_LHTACT      variable wave =  6*/ ;
S_LIFEIN=S6LIFEIN ;
/* Empty map cell for: S1_LIFT       variable wave =  6*/ ;
/* Empty map cell for: S2_LIFT       variable wave =  6*/ ;
S_LIFT=S6LIFT ;
S_LIFTA=S6LIFTA ;
/* Empty map cell for: S_LIFTW       variable wave =  6*/ ;
S_LIV10=S6LIV10 ;
S_LIV10A=S6LIV10A ;
S_LIV10P=S6LIV10P ;
S_LIV10R=S6LIV10R ;
S_LIV75=S6LIV75 ;
S_LIV75C=S6LIV75C ;
S_LIV75F=S6LIV75F ;
S_LIV75P=S6LIV75P ;
S_LIV75R=S6LIV75R ;
/* Empty map cell for: S_LIV85       variable wave =  6*/ ;
/* Empty map cell for: S_LIV85C      variable wave =  6*/ ;
/* Empty map cell for: S_LIV85F      variable wave =  6*/ ;
/* Empty map cell for: S_LIV85P      variable wave =  6*/ ;
/* Empty map cell for: S_LIV85R      variable wave =  6*/ ;
S_LIV8XC=S6LIV8XC ;
S_LIV8XF=S6LIV8XF ;
S_LIVBRO=S6LIVBRO ;
S_LIVPAR=S6LIVPAR ;
S_LIVSIB=S6LIVSIB ;
S_LIVSIS=S6LIVSIS ;
S_LOST=S6LOST ;
/* Empty map cell for: S_LTACTF      variable wave =  6*/ ;
/* Empty map cell for: S_LTACTN      variable wave =  6*/ ;
/* Empty map cell for: S_LTACTP      variable wave =  6*/ ;
/* Empty map cell for: S_LTACTX      variable wave =  6*/ ;
S_LTCPRM=S6LTCPRM ;
S_LUNG=S6LUNG ;
S_LUNGE=S6LUNGE ;
S_LUNGEF=S6LUNGEF ;
S_LUNGF=S6LUNGF ;
S_LUNGQ=S6LUNGQ ;
S_LUNGS=S6LUNGS ;
S_MAMMOG=S6MAMMOG ;
/* Empty map cell for: S1_MAP        variable wave =  6*/ ;
/* Empty map cell for: S2_MAP        variable wave =  6*/ ;
S_MAP=S6MAP ;
S_MAPA=S6MAPA ;
/* Empty map cell for: S_MAPW        variable wave =  6*/ ;
S_MCURLN=S6MCURLN ;
/* Empty map cell for: S_MCWV        variable wave =  6*/ ;
/* Empty map cell for: S_MCWVW       variable wave =  6*/ ;
/* Empty map cell for: S_MDACTX      variable wave =  6*/ ;
S_MDIV=S6MDIV ;
S_MEALS=S6MEALS ;
S_MEALSA=S6MEALSA ;
S_MEALSH=S6MEALSH ;
/* Empty map cell for: S_MEALSR      variable wave =  6*/ ;
/* Empty map cell for: S2_MEDS       variable wave =  6*/ ;
S_MEDS=S6MEDS ;
S_MEDSA=S6MEDSA ;
S_MEDSH=S6MEDSH ;
/* Empty map cell for: S_MEDSR       variable wave =  6*/ ;
S_MEDUC=S6MEDUC ;
S_MEMRY=S6MEMRY ;
S_MEMRYE=S6MEMRYE ;
S_MEMRYEF=S6MEMRYEF ;
S_MEMRYF=S6MEMRYF ;
S_MEMRYQ=S6MEMRYQ ;
S_MEMRYS=S6MEMRYS ;
S_MEND=S6MEND ;
S_MLEN=S6MLEN ;
S_MLENM=S6MLENM ;
S_MNEV=S6MNEV ;
S_MO=S6MO ;
S_MOBILA=S6MOBILA ;
/* Empty map cell for: S_MOBILW      variable wave =  6*/ ;
S_MOMAGE=S6MOMAGE ;
S_MOMLIV=S6MOMLIV ;
/* Empty map cell for: S2_MONEY      variable wave =  6*/ ;
S_MONEY=S6MONEY ;
S_MONEYA=S6MONEYA ;
S_MONEYH=S6MONEYH ;
/* Empty map cell for: S_MONEYR      variable wave =  6*/ ;
S_MPART=S6MPART ;
S_MRCT=S6MRCT ;
S_MRPREM=S6MRPREM ;
S_MSTAT=S6MSTAT ;
S_MSTATF=S6MSTATF ;
S_MSTATH=S6MSTATH ;
S_MSTOT=S6MSTOT ;
S_MWID=S6MWID ;
S_NHMDAY=S6NHMDAY ;
S_NHMLIV=S6NHMLIV ;
S_NHMMVM=S6NHMMVM ;
S_NHMMVY=S6NHMMVY ;
S_NOTICS=S6NOTICS ;
/* Empty map cell for: S_NOVOC       variable wave =  6*/ ;
S_NRSHOM=S6NRSHOM ;
S_NRSNIT=S6NRSNIT ;
S_NRSTIM=S6NRSTIM ;
/* Empty map cell for: S_NSSCRE      variable wave =  6*/ ;
/* Empty map cell for: S_NSSCSE      variable wave =  6*/ ;
S_OAHDID=S6OAHDID ;
S_OHRSID=S6OHRSID ;
S_OOPMD=S6OOPMD ;
S_OOPMDF=S6OOPMDF ;
/* Empty map cell for: S_OOPMDO      variable wave =  6*/ ;
/* Empty map cell for: S_OOPMDOF     variable wave =  6*/ ;
S_OUTPT=S6OUTPT ;
S_PAPSM=S6PAPSM ;
/* Empty map cell for: S_PARTD       variable wave =  6*/ ;
S_PENCT=S6PENCT ;
S_PENIC1=S6PENIC1 ;
S_PENIC2=S6PENIC2 ;
S_PENINC=S6PENINC ;
S_PENI_N=S6PENI_N ;
/* Empty map cell for: S2_PHONE      variable wave =  6*/ ;
S_PHONE=S6PHONE ;
S_PHONEA=S6PHONEA ;
S_PHONEH=S6PHONEH ;
/* Empty map cell for: S_PHONER      variable wave =  6*/ ;
/* Empty map cell for: S_PMBMI       variable wave =  6*/ ;
/* Empty map cell for: S_PMHGHT      variable wave =  6*/ ;
/* Empty map cell for: S_PMHGHTS     variable wave =  6*/ ;
/* Empty map cell for: S_PMWAIST     variable wave =  6*/ ;
/* Empty map cell for: S_PMWAISTC    variable wave =  6*/ ;
/* Empty map cell for: S_PMWGHT      variable wave =  6*/ ;
/* Empty map cell for: S_PMWGHTF     variable wave =  6*/ ;
/* Empty map cell for: S_PMWGHTS     variable wave =  6*/ ;
S_PNHM5Y=S6PNHM5Y ;
S_PRCHMEM=S6PRCHMEM ;
S_PRES=S6PRES ;
S_PRMEM=S6PRMEM ;
S_PROST=S6PROST ;
S_PROXY=S6PROXY ;
S_PRPCNT=S6PRPCNT ;
S_PRPRM1=S6PRPRM1 ;
S_PRPRM2=S6PRPRM2 ;
S_PRPRM3=S6PRPRM3 ;
S_PRSRC1=S6PRSRC1 ;
S_PRSRC2=S6PRSRC2 ;
S_PRSRC3=S6PRSRC3 ;
S_PSTMEM=S6PSTMEM ;
S_PSYCH=S6PSYCH ;
S_PSYCHE=S6PSYCHE ;
S_PSYCHEF=S6PSYCHEF ;
S_PSYCHF=S6PSYCHF ;
S_PSYCHQ=S6PSYCHQ ;
S_PSYCHS=S6PSYCHS ;
S_PTYP1=S6PTYP1 ;
S_PTYP2=S6PTYP2 ;
S_PTYP3=S6PTYP3 ;
S_PTYP4=S6PTYP4 ;
/* Empty map cell for: S_PTYPD1      variable wave =  6*/ ;
/* Empty map cell for: S_PTYPD2      variable wave =  6*/ ;
/* Empty map cell for: S_PTYPD3      variable wave =  6*/ ;
/* Empty map cell for: S_PTYPD4      variable wave =  6*/ ;
/* Empty map cell for: S_PTYPF1      variable wave =  6*/ ;
/* Empty map cell for: S_PTYPF2      variable wave =  6*/ ;
/* Empty map cell for: S_PTYPF3      variable wave =  6*/ ;
/* Empty map cell for: S_PTYPF4      variable wave =  6*/ ;
/* Empty map cell for: S_PUFF        variable wave =  6*/ ;
/* Empty map cell for: S_PUFFPOS     variable wave =  6*/ ;
/* Empty map cell for: S1_PUSH       variable wave =  6*/ ;
/* Empty map cell for: S2_PUSH       variable wave =  6*/ ;
S_PUSH=S6PUSH ;
S_PUSHA=S6PUSHA ;
/* Empty map cell for: S_PUSHW       variable wave =  6*/ ;
S_RACEM=S6RACEM ;
S_RELIG=S6RELIG ;
S_RETDTWV=S6RETDTWV ;
S_RETEMP=S6RETEMP ;
/* Empty map cell for: S_RETINC      variable wave =  6*/ ;
/* Empty map cell for: S_RETLIV      variable wave =  6*/ ;
S_RETMON=S6RETMON ;
S_RETSAT=S6RETSAT ;
/* Empty map cell for: S_RETWLT      variable wave =  6*/ ;
/* Empty map cell for: S_RETWRK      variable wave =  6*/ ;
/* Empty map cell for: S_RETWSP      variable wave =  6*/ ;
S_RETYR=S6RETYR ;
S_RISK=S6RISK ;
S_RISK6=S6RISK6 ;
S_RPLNYA=S6RPLNYA ;
S_RPLNYR=S6RPLNYR ;
/* Empty map cell for: S_RXPREM      variable wave =  6*/ ;
S_RYRCMP=S6RYRCMP ;
S_SADLF=S6SADLF ;
S_SAMEJOB=S6SAMEJOB ;
S_SAMEMP=S6SAMEMP ;
S_SAYRET=S6SAYRET ;
S_SCIS=S6SCIS ;
S_SDIAPL=S6SDIAPL ;
S_SDIAPLM=S6SDIAPLM ;
S_SDIAPLY=S6SDIAPLY ;
S_SDIAPP=S6SDIAPP ;
S_SDIAPPM=S6SDIAPPM ;
S_SDIAPPY=S6SDIAPPY ;
S_SDIDEN=S6SDIDEN ;
S_SDIREC=S6SDIREC ;
S_SDIRECM=S6SDIRECM ;
S_SDIRECY=S6SDIRECY ;
S_SDISTP=S6SDISTP ;
S_SDISTPM=S6SDISTPM ;
S_SDISTPY=S6SDISTPY ;
S_SER7=S6SER7 ;
S_SHLT=S6SHLT ;
S_SHLTC=S6SHLTC ;
S_SHLTCF=S6SHLTCF ;
S_SHOP=S6SHOP ;
S_SHOPA=S6SHOPA ;
S_SHOPH=S6SHOPH ;
/* Empty map cell for: S_SHOPR       variable wave =  6*/ ;
/* Empty map cell for: S1_SIT        variable wave =  6*/ ;
/* Empty map cell for: S2_SIT        variable wave =  6*/ ;
S_SIT=S6SIT ;
S_SITA=S6SITA ;
/* Empty map cell for: S_SITW        variable wave =  6*/ ;
/* Empty map cell for: S_SLEEP       variable wave =  6*/ ;
/* Empty map cell for: S_SLEEPE      variable wave =  6*/ ;
/* Empty map cell for: S_SLEEPEF     variable wave =  6*/ ;
/* Empty map cell for: S_SLEEPQ      variable wave =  6*/ ;
S_SLEEPR=S6SLEEPR ;
/* Empty map cell for: S_SLEEPS      variable wave =  6*/ ;
/* Empty map cell for: S_SLEEPX      variable wave =  6*/ ;
S_SLFEMP=S6SLFEMP ;
S_SLFMEM=S6SLFMEM ;
S_SMOKEN=S6SMOKEN ;
S_SMOKEV=S6SMOKEV ;
S_SPCFAC=S6SPCFAC ;
/* Empty map cell for: S_SSAPL       variable wave =  6*/ ;
/* Empty map cell for: S_SSAPLM      variable wave =  6*/ ;
/* Empty map cell for: S_SSAPLY      variable wave =  6*/ ;
/* Empty map cell for: S_SSAPP       variable wave =  6*/ ;
/* Empty map cell for: S_SSAPPM      variable wave =  6*/ ;
/* Empty map cell for: S_SSAPPY      variable wave =  6*/ ;
/* Empty map cell for: S_SSDEN       variable wave =  6*/ ;
S_SSDI=S6SSDI ;
S_SSIAPL=S6SSIAPL ;
S_SSIAPLM=S6SSIAPLM ;
S_SSIAPLY=S6SSIAPLY ;
S_SSIAPP=S6SSIAPP ;
S_SSIAPPM=S6SSIAPPM ;
S_SSIAPPY=S6SSIAPPY ;
S_SSIDEN=S6SSIDEN ;
S_SSIREC=S6SSIREC ;
S_SSIRECM=S6SSIRECM ;
S_SSIRECY=S6SSIRECY ;
S_SSISTP=S6SSISTP ;
S_SSISTPM=S6SSISTPM ;
S_SSISTPY=S6SSISTPY ;
/* Empty map cell for: S_SSREC       variable wave =  6*/ ;
/* Empty map cell for: S_SSRECM      variable wave =  6*/ ;
/* Empty map cell for: S_SSRECY      variable wave =  6*/ ;
/* Empty map cell for: S_SSSTP       variable wave =  6*/ ;
/* Empty map cell for: S_SSSTPM      variable wave =  6*/ ;
/* Empty map cell for: S_SSSTPY      variable wave =  6*/ ;
/* Empty map cell for: S_SSWRER      variable wave =  6*/ ;
/* Empty map cell for: S_SSWRNR      variable wave =  6*/ ;
/* Empty map cell for: S_SSWRXA      variable wave =  6*/ ;
/* Empty map cell for: S_SSWSER      variable wave =  6*/ ;
/* Empty map cell for: S_SSWSNR      variable wave =  6*/ ;
/* Empty map cell for: S_SSWSXA      variable wave =  6*/ ;
S_STATUS=S6STATUS ;
/* Empty map cell for: S1_STOOP      variable wave =  6*/ ;
/* Empty map cell for: S2_STOOP      variable wave =  6*/ ;
S_STOOP=S6STOOP ;
S_STOOPA=S6STOOPA ;
/* Empty map cell for: S_STOOPW      variable wave =  6*/ ;
S_STROK=S6STROK ;
S_STROKE=S6STROKE ;
S_STROKEF=S6STROKEF ;
S_STROKF=S6STROKF ;
S_STROKQ=S6STROKQ ;
S_STROKS=S6STROKS ;
/* Empty map cell for: S_TIMWLK      variable wave =  6*/ ;
/* Empty map cell for: S_TIMWLKA     variable wave =  6*/ ;
/* Empty map cell for: S_TLIPRM      variable wave =  6*/ ;
/* Empty map cell for: S2_TOILT      variable wave =  6*/ ;
S_TOILT=S6TOILT ;
S_TOILTA=S6TOILTA ;
/* Empty map cell for: S2_TOILTH     variable wave =  6*/ ;
S_TOILTH=S6TOILTH ;
S_TOTMBF=S6TOTMBF ;
S_TOTMBI=S6TOTMBI ;
/* Empty map cell for: S_TOTMD       variable wave =  6*/ ;
/* Empty map cell for: S_TOTMDF      variable wave =  6*/ ;
S_TR20=S6TR20 ;
/* Empty map cell for: S_TR40        variable wave =  6*/ ;
S_TYLTC=S6TYLTC ;
/* Empty map cell for: S_ULCER       variable wave =  6*/ ;
S_UNEMP=S6UNEMP ;
S_UNION=S6UNION ;
S_UNIONF=S6UNIONF ;
S_VETRN=S6VETRN ;
/* Empty map cell for: S_VGACTF      variable wave =  6*/ ;
/* Empty map cell for: S_VGACTN      variable wave =  6*/ ;
/* Empty map cell for: S_VGACTP      variable wave =  6*/ ;
/* Empty map cell for: S_VGACTX      variable wave =  6*/ ;
S_VIGACT=S6VIGACT ;
S_VOCAB=S6VOCAB ;
S_VP=S6VP ;
/* Empty map cell for: S1_WALK1      variable wave =  6*/ ;
/* Empty map cell for: S2_WALK1      variable wave =  6*/ ;
S_WALK1=S6WALK1 ;
S_WALK1A=S6WALK1A ;
/* Empty map cell for: S_WALK1W      variable wave =  6*/ ;
/* Empty map cell for: S1_WALKR      variable wave =  6*/ ;
/* Empty map cell for: S2_WALKR      variable wave =  6*/ ;
S_WALKR=S6WALKR ;
S_WALKRA=S6WALKRA ;
S_WALKRE=S6WALKRE ;
/* Empty map cell for: S2_WALKRH     variable wave =  6*/ ;
S_WALKRH=S6WALKRH ;
/* Empty map cell for: S_WALKRW      variable wave =  6*/ ;
/* Empty map cell for: S1_WALKS      variable wave =  6*/ ;
/* Empty map cell for: S2_WALKS      variable wave =  6*/ ;
S_WALKS=S6WALKS ;
S_WALKSA=S6WALKSA ;
/* Empty map cell for: S_WALKSW      variable wave =  6*/ ;
S_WANDER=S6WANDER ;
S_WEIGHT=S6WEIGHT ;
S_WGFHR=S6WGFHR ;
S_WGFWK=S6WGFWK ;
S_WGIHR=S6WGIHR ;
S_WGIWK=S6WGIWK ;
/* Empty map cell for: S_WHAPPX      variable wave =  6*/ ;
S_WHAPPY=S6WHAPPY ;
S_WLIPRM=S6WLIPRM ;
S_WORK=S6WORK ;
S_WORK2=S6WORK2 ;
S_WORK62=S6WORK62 ;
S_WORK62F=S6WORK62F ;
S_WORK65=S6WORK65 ;
S_WORK65F=S6WORK65F ;
/* Empty map cell for: S_WORK70      variable wave =  6*/ ;
/* Empty map cell for: S_WORK70A     variable wave =  6*/ ;
/* Empty map cell for: S_WORK70AF    variable wave =  6*/ ;
/* Empty map cell for: S_WORK70F     variable wave =  6*/ ;
S_WORKLM=S6WORKLM ;
S_WTCRNH=S6WTCRNH ;
S_WTRESP=S6WTRESP ;
S_WTR_NH=S6WTR_NH ;
S_YR=S6YR ;
if inw=1 then output ;
%put --- Slong table ;
%initvars ;
%put ---- Slong table ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
/* --- RAND variable:HHIDPN  included */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
/* --- RAND variable:HACOHORT  included */ ;
WAVE_NUMBER=7 ;
WAVE_NAME=  'hrs_wave'||strip(put(wave_number,3.))     /* --- Derived variable  */ ;
studyyr= hrs_studyyr(wave_number,
hacohort)     /* --- Derived variable  */ ;
CYEAR='yr2004' ;
H_HHID=H7HHID ;
H_HHIDC=H7HHIDC ;
SUBHH= substr(H_HHIDC,7)     /* --- Derived variable  */ ;
INW=INW7 ;
S_HHIDPN=S7HHIDPN ;
/* --- RAND variable:SASSAGEB  included */ ;
/* --- RAND variable:SASSAGEM  included */ ;
/* --- RAND variable:SASSRECV  included */ ;
/* Empty map cell for: S_ACGTOT      variable wave =  7*/ ;
S_ADL5A=S7ADL5A ;
S_ADL5H=S7ADL5H ;
S_ADL6A=S7ADL6A ;
S_ADL6H=S7ADL6H ;
/* Empty map cell for: S_ADLR10      variable wave =  7*/ ;
/* Empty map cell for: S_ADLW        variable wave =  7*/ ;
S_AGEM_B=S7AGEM_B ;
S_AGEM_E=S7AGEM_E ;
S_AGEM_M=S7AGEM_M ;
S_AGEY_B=S7AGEY_B ;
S_AGEY_E=S7AGEY_E ;
S_AGEY_M=S7AGEY_M ;
S_AHDSMP=S7AHDSMP ;
/* Empty map cell for: S_AIMR10      variable wave =  7*/ ;
S_ALONE=S7ALONE ;
/* Empty map cell for: S_ALZHE       variable wave =  7*/ ;
/* Empty map cell for: S_ALZHEE      variable wave =  7*/ ;
/* Empty map cell for: S_ALZHEEF     variable wave =  7*/ ;
/* Empty map cell for: S_ALZHEF      variable wave =  7*/ ;
/* Empty map cell for: S_ALZHEQ      variable wave =  7*/ ;
/* Empty map cell for: S_ALZHES      variable wave =  7*/ ;
/* Empty map cell for: S_AMSTOT      variable wave =  7*/ ;
S_ANS3PQ=S7ANS3PQ ;
/* Empty map cell for: S1_ARMS       variable wave =  7*/ ;
/* Empty map cell for: S2_ARMS       variable wave =  7*/ ;
S_ARMS=S7ARMS ;
S_ARMSA=S7ARMSA ;
/* Empty map cell for: S_ARMSW       variable wave =  7*/ ;
S_ARTHR=S7ARTHR ;
S_ARTHRE=S7ARTHRE ;
S_ARTHREF=S7ARTHREF ;
S_ARTHRF=S7ARTHRF ;
S_ARTHRQ=S7ARTHRQ ;
S_ARTHRS=S7ARTHRS ;
/* Empty map cell for: S_ATR20       variable wave =  7*/ ;
S_BACK=S7BACK ;
/* Empty map cell for: S_BALFUL      variable wave =  7*/ ;
/* Empty map cell for: S_BALFULC     variable wave =  7*/ ;
/* Empty map cell for: S_BALFULT     variable wave =  7*/ ;
/* Empty map cell for: S_BALSBS      variable wave =  7*/ ;
/* Empty map cell for: S_BALSBSC     variable wave =  7*/ ;
/* Empty map cell for: S_BALSEMI     variable wave =  7*/ ;
/* Empty map cell for: S_BALSEMIC    variable wave =  7*/ ;
/* Empty map cell for: S1_BATH       variable wave =  7*/ ;
/* Empty map cell for: S2_BATH       variable wave =  7*/ ;
S_BATH=S7BATH ;
S_BATHA=S7BATHA ;
/* Empty map cell for: S2_BATHH      variable wave =  7*/ ;
S_BATHH=S7BATHH ;
/* Empty map cell for: S_BATHW       variable wave =  7*/ ;
S_BDATE=S7BDATE ;
/* Empty map cell for: S1_BED        variable wave =  7*/ ;
/* Empty map cell for: S2_BED        variable wave =  7*/ ;
S_BED=S7BED ;
S_BEDA=S7BEDA ;
S_BEDE=S7BEDE ;
/* Empty map cell for: S2_BEDH       variable wave =  7*/ ;
S_BEDH=S7BEDH ;
/* Empty map cell for: S_BEDW        variable wave =  7*/ ;
S_BEQ100=S7BEQ100 ;
S_BEQ10K=S7BEQ10K ;
S_BEQ500=S7BEQ500 ;
S_BEQANY=S7BEQANY ;
/* Empty map cell for: S_BEQLRG      variable wave =  7*/ ;
S_BFLAG=S7BFLAG ;
S_BMI=S7BMI ;
S_BMONTH=S7BMONTH ;
/* Empty map cell for: S_BPDIA       variable wave =  7*/ ;
S_BPLACE=S7BPLACE ;
S_BPLACF=S7BPLACF ;
/* Empty map cell for: S_BPPOS       variable wave =  7*/ ;
/* Empty map cell for: S_BPPULS      variable wave =  7*/ ;
/* Empty map cell for: S_BPSYS       variable wave =  7*/ ;
S_BREAST=S7BREAST ;
S_BWC20=S7BWC20 ;
/* Empty map cell for: S_BWC86       variable wave =  7*/ ;
S_BYEAR=S7BYEAR ;
S_CACT=S7CACT ;
/* Empty map cell for: S1_CALC       variable wave =  7*/ ;
/* Empty map cell for: S2_CALC       variable wave =  7*/ ;
/* Empty map cell for: S_CALCA       variable wave =  7*/ ;
/* Empty map cell for: S_CALCW       variable wave =  7*/ ;
S_CANCR=S7CANCR ;
S_CANCRE=S7CANCRE ;
S_CANCREF=S7CANCREF ;
S_CANCRF=S7CANCRF ;
S_CANCRQ=S7CANCRQ ;
S_CANCRS=S7CANCRS ;
S_CENDIV=S7CENDIV ;
S_CENREG=S7CENREG ;
S_CESD=S7CESD ;
S_CESDM=S7CESDM ;
/* Empty map cell for: S1_CHAIR      variable wave =  7*/ ;
/* Empty map cell for: S2_CHAIR      variable wave =  7*/ ;
S_CHAIR=S7CHAIR ;
S_CHAIRA=S7CHAIRA ;
/* Empty map cell for: S_CHAIRW      variable wave =  7*/ ;
S_CHOLST=S7CHOLST ;
S_CLAIMED=S7CLAIMED ;
/* Empty map cell for: S1_CLIM1      variable wave =  7*/ ;
/* Empty map cell for: S2_CLIM1      variable wave =  7*/ ;
S_CLIM1=S7CLIM1 ;
S_CLIM1A=S7CLIM1A ;
/* Empty map cell for: S_CLIM1W      variable wave =  7*/ ;
/* Empty map cell for: S1_CLIMS      variable wave =  7*/ ;
/* Empty map cell for: S2_CLIMS      variable wave =  7*/ ;
S_CLIMS=S7CLIMS ;
S_CLIMSA=S7CLIMSA ;
/* Empty map cell for: S_CLIMSW      variable wave =  7*/ ;
S_COGTOT=S7COGTOT ;
S_COHBYR=S7COHBYR ;
S_COHORT=S7COHORT ;
/* Empty map cell for: S_COMP        variable wave =  7*/ ;
/* Empty map cell for: S_COMPW       variable wave =  7*/ ;
S_CONDE=S7CONDE ;
S_CONDEF=S7CONDEF ;
S_CONDS=S7CONDS ;
S_CONDSF=S7CONDSF ;
S_CONDSP=S7CONDSP ;
S_COVR=S7COVR ;
S_COVRT=S7COVRT ;
S_COVS=S7COVS ;
S_DADAGE=S7DADAGE ;
S_DADLIV=S7DADLIV ;
S_DAGE_M=S7DAGE_M ;
S_DAGE_Y=S7DAGE_Y ;
S_DCBAL1=S7DCBAL1 ;
S_DCBAL2=S7DCBAL2 ;
S_DCBAL3=S7DCBAL3 ;
S_DCBAL4=S7DCBAL4 ;
S_DCBENE1=S7DCBENE1 ;
S_DCBENE2=S7DCBENE2 ;
S_DCBENE3=S7DCBENE3 ;
S_DCBENE4=S7DCBENE4 ;
S_DCCONT1=S7DCCONT1 ;
S_DCCONT2=S7DCCONT2 ;
S_DCCONT3=S7DCCONT3 ;
S_DCCONT4=S7DCCONT4 ;
S_DCMODE1=S7DCMODE1 ;
S_DCMODE2=S7DCMODE2 ;
S_DCMODE3=S7DCMODE3 ;
S_DCMODE4=S7DCMODE4 ;
S_DCPCT1=S7DCPCT1 ;
S_DCPCT2=S7DCPCT2 ;
S_DCPCT3=S7DCPCT3 ;
S_DCPCT4=S7DCPCT4 ;
S_DDATE=S7DDATE ;
/* Empty map cell for: S_DEMEN       variable wave =  7*/ ;
/* Empty map cell for: S_DEMENE      variable wave =  7*/ ;
/* Empty map cell for: S_DEMENEF     variable wave =  7*/ ;
/* Empty map cell for: S_DEMENF      variable wave =  7*/ ;
/* Empty map cell for: S_DEMENQ      variable wave =  7*/ ;
/* Empty map cell for: S_DEMENS      variable wave =  7*/ ;
S_DENTST=S7DENTST ;
S_DEPRES=S7DEPRES ;
/* Empty map cell for: S_DEPREX      variable wave =  7*/ ;
S_DIAB=S7DIAB ;
S_DIABE=S7DIABE ;
S_DIABEF=S7DIABEF ;
S_DIABF=S7DIABF ;
S_DIABQ=S7DIABQ ;
S_DIABS=S7DIABS ;
/* Empty map cell for: S1_DIME       variable wave =  7*/ ;
/* Empty map cell for: S2_DIME       variable wave =  7*/ ;
S_DIME=S7DIME ;
S_DIMEA=S7DIMEA ;
/* Empty map cell for: S_DIMEW       variable wave =  7*/ ;
S_DLRC=S7DLRC ;
/* Empty map cell for: S_DLRC20      variable wave =  7*/ ;
S_DMONTH=S7DMONTH ;
S_DOCTIM=S7DOCTIM ;
S_DOCTOR=S7DOCTOR ;
/* Empty map cell for: S1_DRESS      variable wave =  7*/ ;
/* Empty map cell for: S2_DRESS      variable wave =  7*/ ;
S_DRESS=S7DRESS ;
S_DRESSA=S7DRESSA ;
/* Empty map cell for: S2_DRESSH     variable wave =  7*/ ;
S_DRESSH=S7DRESSH ;
/* Empty map cell for: S_DRESSW      variable wave =  7*/ ;
S_DRINK=S7DRINK ;
S_DRINKD=S7DRINKD ;
S_DRINKN=S7DRINKN ;
/* Empty map cell for: S_DRINKR      variable wave =  7*/ ;
S_DRUGS=S7DRUGS ;
S_DSIAMT=S7DSIAMT ;
S_DSRC=S7DSRC ;
S_DSSAMT=S7DSSAMT ;
S_DSTAT=S7DSTAT ;
S_DTIMTDTH=S7DTIMTDTH ;
S_DW=S7DW ;
S_DY=S7DY ;
S_DYEAR=S7DYEAR ;
/* Empty map cell for: S1_EAT        variable wave =  7*/ ;
/* Empty map cell for: S2_EAT        variable wave =  7*/ ;
S_EAT=S7EAT ;
S_EATA=S7EATA ;
/* Empty map cell for: S2_EATH       variable wave =  7*/ ;
S_EATH=S7EATH ;
/* Empty map cell for: S_EATW        variable wave =  7*/ ;
S_EDEGRM=S7EDEGRM ;
S_EDUC=S7EDUC ;
S_EDYRS=S7EDYRS ;
S_EFFORT=S7EFFORT ;
/* Empty map cell for: S_EFFORX      variable wave =  7*/ ;
S_ENLIFE=S7ENLIFE ;
/* Empty map cell for: S_ENLIFX      variable wave =  7*/ ;
S_EVBRN=S7EVBRN ;
S_EVBRNF=S7EVBRNF ;
S_FAMR=S7FAMR ;
S_FBWC20=S7FBWC20 ;
/* Empty map cell for: S_FBWC86      variable wave =  7*/ ;
S_FCACT=S7FCACT ;
S_FDLRC=S7FDLRC ;
S_FDW=S7FDW ;
S_FDY=S7FDY ;
S_FEDUC=S7FEDUC ;
S_FIMRC=S7FIMRC ;
S_FINEA=S7FINEA ;
S_FINPLN=S7FINPLN ;
S_FINR=S7FINR ;
/* Empty map cell for: S_FLAG        variable wave =  7*/ ;
S_FLONE=S7FLONE ;
/* Empty map cell for: S_FLONEX      variable wave =  7*/ ;
S_FLUSHT=S7FLUSHT ;
S_FMO=S7FMO ;
S_FPRES=S7FPRES ;
S_FPSTME=S7FPSTME ;
S_FSAD=S7FSAD ;
/* Empty map cell for: S_FSADX       variable wave =  7*/ ;
S_FSCIS=S7FSCIS ;
S_FSER7=S7FSER7 ;
S_FSIZE=S7FSIZE ;
S_FSIZEF=S7FSIZEF ;
S_FSLFME=S7FSLFME ;
S_FVOCAB=S7FVOCAB ;
S_FVP=S7FVP ;
S_FYR=S7FYR ;
S_GENDER=S7GENDER ;
S_GOING=S7GOING ;
/* Empty map cell for: S_GOINGX      variable wave =  7*/ ;
S_GOVMD=S7GOVMD ;
S_GOVMR=S7GOVMR ;
/* Empty map cell for: S_GOVOT       variable wave =  7*/ ;
S_GOVVA=S7GOVVA ;
S_GROSSA=S7GROSSA ;
/* Empty map cell for: S_GRP         variable wave =  7*/ ;
/* Empty map cell for: S_GRPDOM      variable wave =  7*/ ;
/* Empty map cell for: S_GRPL        variable wave =  7*/ ;
/* Empty map cell for: S_GRPPOS      variable wave =  7*/ ;
/* Empty map cell for: S_GRPR        variable wave =  7*/ ;
S_HALUC=S7HALUC ;
/* Empty map cell for: S_HDLR20      variable wave =  7*/ ;
S_HEART=S7HEART ;
S_HEARTE=S7HEARTE ;
S_HEARTEF=S7HEARTEF ;
S_HEARTF=S7HEARTF ;
S_HEARTQ=S7HEARTQ ;
S_HEARTS=S7HEARTS ;
S_HECOV1=S7HECOV1 ;
S_HECOV2=S7HECOV2 ;
S_HECOV3=S7HECOV3 ;
S_HEIGHT=S7HEIGHT ;
S_HENUM=S7HENUM ;
S_HERET=S7HERET ;
S_HERTR1=S7HERTR1 ;
S_HERTR2=S7HERTR2 ;
S_HERTR3=S7HERTR3 ;
S_HERTS1=S7HERTS1 ;
S_HERTS2=S7HERTS2 ;
S_HERTS3=S7HERTS3 ;
S_HESRC1=S7HESRC1 ;
S_HESRC2=S7HESRC2 ;
S_HESRC3=S7HESRC3 ;
S_HHIDPN=S7HHIDPN ;
S_HIBP=S7HIBP ;
S_HIBPE=S7HIBPE ;
S_HIBPEF=S7HIBPEF ;
S_HIBPF=S7HIBPF ;
S_HIBPQ=S7HIBPQ ;
S_HIBPS=S7HIBPS ;
S_HIGOV=S7HIGOV ;
S_HILTC=S7HILTC ;
/* Empty map cell for: S_HIMR20      variable wave =  7*/ ;
S_HIOTHP=S7HIOTHP ;
S_HISPAN=S7HISPAN ;
S_HLPDYSF=S7HLPDYSF ;
S_HLPDYSNF=S7HLPDYSNF ;
S_HLPDYSP=S7HLPDYSP ;
S_HLPDYST=S7HLPDYST ;
S_HLPDYSU=S7HLPDYSU ;
S_HLPHRSF=S7HLPHRSF ;
S_HLPHRSNF=S7HLPHRSNF ;
S_HLPHRSP=S7HLPHRSP ;
S_HLPHRST=S7HLPHRST ;
S_HLPHRSU=S7HLPHRSU ;
S_HLPPDFA=S7HLPPDFA ;
S_HLPPDFN=S7HLPPDFN ;
S_HLPPDNFA=S7HLPPDNFA ;
S_HLPPDNFN=S7HLPPDNFN ;
S_HLPPDTA=S7HLPPDTA ;
S_HLPPDTN=S7HLPPDTN ;
S_HLPRFN=S7HLPRFN ;
S_HLPRNFN=S7HLPRNFN ;
S_HLPRPN=S7HLPRPN ;
S_HLPRTN=S7HLPRTN ;
S_HLPRUN=S7HLPRUN ;
S_HLTC3=S7HLTC3 ;
/* Empty map cell for: S_HLTC5       variable wave =  7*/ ;
/* Empty map cell for: S_HLTC5F      variable wave =  7*/ ;
S_HLTHLM=S7HLTHLM ;
S_HOMCAR=S7HOMCAR ;
S_HOSP=S7HOSP ;
S_HRSAMP=S7HRSAMP ;
S_HSPNIT=S7HSPNIT ;
S_HSPTIM=S7HSPTIM ;
/* Empty map cell for: S_HSWRKF      variable wave =  7*/ ;
/* Empty map cell for: S_HTR40       variable wave =  7*/ ;
S_IADL5A=S7IADL5A ;
S_IADL5H=S7IADL5H ;
S_IANN=S7IANN ;
S_IEARN=S7IEARN ;
S_IFANN=S7IFANN ;
S_IFEARN=S7IFEARN ;
S_IFGXFR=S7IFGXFR ;
S_IFIRAW=S7IFIRAW ;
/* Empty map cell for: S_IFIRAWY1    variable wave =  7*/ ;
S_IFPEN=S7IFPEN ;
S_IFPENA=S7IFPENA ;
S_IFSDI=S7IFSDI ;
S_IFSRET=S7IFSRET ;
S1_IFSSDI=S7IFSSDI ;
/* Empty map cell for: S_IFSSDI      variable wave =  7*/ ;
/* Empty map cell for: S_IFSSI       variable wave =  7*/ ;
S_IFUNEM=S7IFUNEM ;
S1_IFUNWC=S7IFUNWC ;
/* Empty map cell for: S2_IFUNWC     variable wave =  7*/ ;
S_IFWCMP=S7IFWCMP ;
S_IGXFR=S7IGXFR ;
S_IIRAW=S7IIRAW ;
S_IIRAWY1=S7IIRAWY1 ;
S_IMRC=S7IMRC ;
/* Empty map cell for: S_IMRC20      variable wave =  7*/ ;
S_INHER=S7INHER ;
S_INHPE=S7INHPE ;
S_INHPFN=S7INHPFN ;
S_INHPNFN=S7INHPNFN ;
S_INHPPN=S7INHPPN ;
S_INHPTN=S7INHPTN ;
S_INHPUN=S7INHPUN ;
S_INLBRF=S7INLBRF ;
S_IPEN=S7IPEN ;
S_IPENA=S7IPENA ;
S_ISDI=S7ISDI ;
S_ISRET=S7ISRET ;
S_ISSDI=S7ISSDI ;
S_ISSI=S7ISSI ;
S_IUNEM=S7IUNEM ;
S_IUNWC=S7IUNWC ;
S_IWBEG=S7IWBEG ;
/* Empty map cell for: S_IWBEGF      variable wave =  7*/ ;
S_IWCMP=S7IWCMP ;
S_IWEND=S7IWEND ;
/* Empty map cell for: S_IWENDF      variable wave =  7*/ ;
S_IWENDM=S7IWENDM ;
S_IWENDY=S7IWENDY ;
S_IWMID=S7IWMID ;
S_IWMIDF=S7IWMIDF ;
S_IWSTAT=S7IWSTAT ;
S_JCIND=S7JCIND ;
S_JCINDB=S7JCINDB ;
/* Empty map cell for: S_JCINDC      variable wave =  7*/ ;
S_JCOCC=S7JCOCC ;
S_JCOCCA=S7JCOCCA ;
S_JCOCCB=S7JCOCCB ;
/* Empty map cell for: S_JCOCCC      variable wave =  7*/ ;
S_JCPEN=S7JCPEN ;
S_JCPENF=S7JCPENF ;
S_JCTEN=S7JCTEN ;
S_JHOUR2=S7JHOUR2 ;
S_JHOURS=S7JHOURS ;
S_JJOBS=S7JJOBS ;
S_JLASTM=S7JLASTM ;
S_JLASTY=S7JLASTY ;
S_JLIFT=S7JLIFT ;
S_JLIND=S7JLIND ;
S_JLINDB=S7JLINDB ;
/* Empty map cell for: S_JLINDC      variable wave =  7*/ ;
S_JLMIS=S7JLMIS ;
S_JLOCC=S7JLOCC ;
S_JLOCCA=S7JLOCCA ;
S_JLOCCB=S7JLOCCB ;
/* Empty map cell for: S_JLOCCC      variable wave =  7*/ ;
S_JLTEN=S7JLTEN ;
S_JLTENF=S7JLTENF ;
S_JMISS=S7JMISS ;
S_JNJOB=S7JNJOB ;
S_JNJOB5=S7JNJOB5 ;
/* Empty map cell for: S1_JOG        variable wave =  7*/ ;
/* Empty map cell for: S2_JOG        variable wave =  7*/ ;
S_JOG=S7JOG ;
S_JOGA=S7JOGA ;
/* Empty map cell for: S_JOGW        variable wave =  7*/ ;
S_JPHYS=S7JPHYS ;
S_JSIGHT=S7JSIGHT ;
S_JSTOOP=S7JSTOOP ;
S_JSTRES=S7JSTRES ;
S_JWEEK2=S7JWEEK2 ;
S_JWEEKS=S7JWEEKS ;
S_JYEARM=S7JYEARM ;
S_JYEARS=S7JYEARS ;
/* Empty map cell for: S_LBAGR       variable wave =  7*/ ;
/* Empty map cell for: S_LBASSISTPRB variable wave =  7*/ ;
/* Empty map cell for: S_LBCOMP      variable wave =  7*/ ;
/* Empty map cell for: S_LBCON10     variable wave =  7*/ ;
/* Empty map cell for: S_LBCON5      variable wave =  7*/ ;
/* Empty map cell for: S_LBELIG      variable wave =  7*/ ;
/* Empty map cell for: S_LBEXT       variable wave =  7*/ ;
/* Empty map cell for: S_LBFAMDRUGPRBvariable wave =  7*/ ;
/* Empty map cell for: S_LBFAMHLTHPRBvariable wave =  7*/ ;
/* Empty map cell for: S_LBFINPRB    variable wave =  7*/ ;
/* Empty map cell for: S_LBHLTHPRB   variable wave =  7*/ ;
/* Empty map cell for: S_LBHOUSEPRB  variable wave =  7*/ ;
/* Empty map cell for: S_LBLONELY11  variable wave =  7*/ ;
/* Empty map cell for: S_LBLONELY3   variable wave =  7*/ ;
/* Empty map cell for: S_LBNEGAFFECT variable wave =  7*/ ;
/* Empty map cell for: S_LBNEGAFFECT6variable wave =  7*/ ;
/* Empty map cell for: S_LBNEUR      variable wave =  7*/ ;
/* Empty map cell for: S_LBONCHRSTR  variable wave =  7*/ ;
/* Empty map cell for: S_LBOPEN      variable wave =  7*/ ;
/* Empty map cell for: S_LBPOSAFFECT variable wave =  7*/ ;
/* Empty map cell for: S_LBPOSAFFECT6variable wave =  7*/ ;
S_LBRF=S7LBRF ;
S_LBRFH=S7LBRFH ;
S_LBRFY=S7LBRFY ;
/* Empty map cell for: S_LBRLTNSHPRB variable wave =  7*/ ;
/* Empty map cell for: S_LBSATCITY   variable wave =  7*/ ;
/* Empty map cell for: S_LBSATFAM    variable wave =  7*/ ;
/* Empty map cell for: S_LBSATFIN    variable wave =  7*/ ;
/* Empty map cell for: S_LBSATHLTH   variable wave =  7*/ ;
/* Empty map cell for: S_LBSATHOME   variable wave =  7*/ ;
/* Empty map cell for: S_LBSATINC    variable wave =  7*/ ;
/* Empty map cell for: S_LBSATLEISUREvariable wave =  7*/ ;
/* Empty map cell for: S_LBSATLIFE   variable wave =  7*/ ;
/* Empty map cell for: S_LBSATWLF    variable wave =  7*/ ;
/* Empty map cell for: S_LBWGTR      variable wave =  7*/ ;
/* Empty map cell for: S_LBWORKPRB   variable wave =  7*/ ;
S_LGMUSA=S7LGMUSA ;
/* Empty map cell for: S_LGMUSW      variable wave =  7*/ ;
/* Empty map cell for: S_LHTACT      variable wave =  7*/ ;
S_LIFEIN=S7LIFEIN ;
/* Empty map cell for: S1_LIFT       variable wave =  7*/ ;
/* Empty map cell for: S2_LIFT       variable wave =  7*/ ;
S_LIFT=S7LIFT ;
S_LIFTA=S7LIFTA ;
/* Empty map cell for: S_LIFTW       variable wave =  7*/ ;
S_LIV10=S7LIV10 ;
S_LIV10A=S7LIV10A ;
S_LIV10P=S7LIV10P ;
S_LIV10R=S7LIV10R ;
S_LIV75=S7LIV75 ;
S_LIV75C=S7LIV75C ;
S_LIV75F=S7LIV75F ;
S_LIV75P=S7LIV75P ;
S_LIV75R=S7LIV75R ;
/* Empty map cell for: S_LIV85       variable wave =  7*/ ;
/* Empty map cell for: S_LIV85C      variable wave =  7*/ ;
/* Empty map cell for: S_LIV85F      variable wave =  7*/ ;
/* Empty map cell for: S_LIV85P      variable wave =  7*/ ;
/* Empty map cell for: S_LIV85R      variable wave =  7*/ ;
S_LIV8XC=S7LIV8XC ;
S_LIV8XF=S7LIV8XF ;
S_LIVBRO=S7LIVBRO ;
S_LIVPAR=S7LIVPAR ;
S_LIVSIB=S7LIVSIB ;
S_LIVSIS=S7LIVSIS ;
S_LOST=S7LOST ;
/* Empty map cell for: S_LTACTF      variable wave =  7*/ ;
/* Empty map cell for: S_LTACTN      variable wave =  7*/ ;
/* Empty map cell for: S_LTACTP      variable wave =  7*/ ;
S_LTACTX=S7LTACTX ;
S_LTCPRM=S7LTCPRM ;
S_LUNG=S7LUNG ;
S_LUNGE=S7LUNGE ;
S_LUNGEF=S7LUNGEF ;
S_LUNGF=S7LUNGF ;
S_LUNGQ=S7LUNGQ ;
S_LUNGS=S7LUNGS ;
S_MAMMOG=S7MAMMOG ;
/* Empty map cell for: S1_MAP        variable wave =  7*/ ;
/* Empty map cell for: S2_MAP        variable wave =  7*/ ;
S_MAP=S7MAP ;
S_MAPA=S7MAPA ;
/* Empty map cell for: S_MAPW        variable wave =  7*/ ;
S_MCURLN=S7MCURLN ;
/* Empty map cell for: S_MCWV        variable wave =  7*/ ;
/* Empty map cell for: S_MCWVW       variable wave =  7*/ ;
S_MDACTX=S7MDACTX ;
S_MDIV=S7MDIV ;
S_MEALS=S7MEALS ;
S_MEALSA=S7MEALSA ;
S_MEALSH=S7MEALSH ;
/* Empty map cell for: S_MEALSR      variable wave =  7*/ ;
/* Empty map cell for: S2_MEDS       variable wave =  7*/ ;
S_MEDS=S7MEDS ;
S_MEDSA=S7MEDSA ;
S_MEDSH=S7MEDSH ;
/* Empty map cell for: S_MEDSR       variable wave =  7*/ ;
S_MEDUC=S7MEDUC ;
S_MEMRY=S7MEMRY ;
S_MEMRYE=S7MEMRYE ;
S_MEMRYEF=S7MEMRYEF ;
S_MEMRYF=S7MEMRYF ;
S_MEMRYQ=S7MEMRYQ ;
S_MEMRYS=S7MEMRYS ;
S_MEND=S7MEND ;
S_MLEN=S7MLEN ;
S_MLENM=S7MLENM ;
S_MNEV=S7MNEV ;
S_MO=S7MO ;
S_MOBILA=S7MOBILA ;
/* Empty map cell for: S_MOBILW      variable wave =  7*/ ;
S_MOMAGE=S7MOMAGE ;
S_MOMLIV=S7MOMLIV ;
/* Empty map cell for: S2_MONEY      variable wave =  7*/ ;
S_MONEY=S7MONEY ;
S_MONEYA=S7MONEYA ;
S_MONEYH=S7MONEYH ;
/* Empty map cell for: S_MONEYR      variable wave =  7*/ ;
S_MPART=S7MPART ;
S_MRCT=S7MRCT ;
S_MRPREM=S7MRPREM ;
S_MSTAT=S7MSTAT ;
S_MSTATF=S7MSTATF ;
S_MSTATH=S7MSTATH ;
S_MSTOT=S7MSTOT ;
S_MWID=S7MWID ;
S_NHMDAY=S7NHMDAY ;
S_NHMLIV=S7NHMLIV ;
S_NHMMVM=S7NHMMVM ;
S_NHMMVY=S7NHMMVY ;
S_NOTICS=S7NOTICS ;
S_NOVOC=S7NOVOC ;
S_NRSHOM=S7NRSHOM ;
S_NRSNIT=S7NRSNIT ;
S_NRSTIM=S7NRSTIM ;
/* Empty map cell for: S_NSSCRE      variable wave =  7*/ ;
/* Empty map cell for: S_NSSCSE      variable wave =  7*/ ;
S_OAHDID=S7OAHDID ;
S_OHRSID=S7OHRSID ;
S_OOPMD=S7OOPMD ;
S_OOPMDF=S7OOPMDF ;
/* Empty map cell for: S_OOPMDO      variable wave =  7*/ ;
/* Empty map cell for: S_OOPMDOF     variable wave =  7*/ ;
S_OUTPT=S7OUTPT ;
S_PAPSM=S7PAPSM ;
/* Empty map cell for: S_PARTD       variable wave =  7*/ ;
S_PENCT=S7PENCT ;
S_PENIC1=S7PENIC1 ;
S_PENIC2=S7PENIC2 ;
S_PENINC=S7PENINC ;
S_PENI_N=S7PENI_N ;
/* Empty map cell for: S2_PHONE      variable wave =  7*/ ;
S_PHONE=S7PHONE ;
S_PHONEA=S7PHONEA ;
S_PHONEH=S7PHONEH ;
/* Empty map cell for: S_PHONER      variable wave =  7*/ ;
/* Empty map cell for: S_PMBMI       variable wave =  7*/ ;
/* Empty map cell for: S_PMHGHT      variable wave =  7*/ ;
/* Empty map cell for: S_PMHGHTS     variable wave =  7*/ ;
/* Empty map cell for: S_PMWAIST     variable wave =  7*/ ;
/* Empty map cell for: S_PMWAISTC    variable wave =  7*/ ;
/* Empty map cell for: S_PMWGHT      variable wave =  7*/ ;
/* Empty map cell for: S_PMWGHTF     variable wave =  7*/ ;
/* Empty map cell for: S_PMWGHTS     variable wave =  7*/ ;
S_PNHM5Y=S7PNHM5Y ;
S_PRCHMEM=S7PRCHMEM ;
S_PRES=S7PRES ;
S_PRMEM=S7PRMEM ;
S_PROST=S7PROST ;
S_PROXY=S7PROXY ;
S_PRPCNT=S7PRPCNT ;
S_PRPRM1=S7PRPRM1 ;
S_PRPRM2=S7PRPRM2 ;
S_PRPRM3=S7PRPRM3 ;
S_PRSRC1=S7PRSRC1 ;
S_PRSRC2=S7PRSRC2 ;
S_PRSRC3=S7PRSRC3 ;
S_PSTMEM=S7PSTMEM ;
S_PSYCH=S7PSYCH ;
S_PSYCHE=S7PSYCHE ;
S_PSYCHEF=S7PSYCHEF ;
S_PSYCHF=S7PSYCHF ;
S_PSYCHQ=S7PSYCHQ ;
S_PSYCHS=S7PSYCHS ;
S_PTYP1=S7PTYP1 ;
S_PTYP2=S7PTYP2 ;
S_PTYP3=S7PTYP3 ;
S_PTYP4=S7PTYP4 ;
/* Empty map cell for: S_PTYPD1      variable wave =  7*/ ;
/* Empty map cell for: S_PTYPD2      variable wave =  7*/ ;
/* Empty map cell for: S_PTYPD3      variable wave =  7*/ ;
/* Empty map cell for: S_PTYPD4      variable wave =  7*/ ;
/* Empty map cell for: S_PTYPF1      variable wave =  7*/ ;
/* Empty map cell for: S_PTYPF2      variable wave =  7*/ ;
/* Empty map cell for: S_PTYPF3      variable wave =  7*/ ;
/* Empty map cell for: S_PTYPF4      variable wave =  7*/ ;
/* Empty map cell for: S_PUFF        variable wave =  7*/ ;
/* Empty map cell for: S_PUFFPOS     variable wave =  7*/ ;
/* Empty map cell for: S1_PUSH       variable wave =  7*/ ;
/* Empty map cell for: S2_PUSH       variable wave =  7*/ ;
S_PUSH=S7PUSH ;
S_PUSHA=S7PUSHA ;
/* Empty map cell for: S_PUSHW       variable wave =  7*/ ;
S_RACEM=S7RACEM ;
S_RELIG=S7RELIG ;
S_RETDTWV=S7RETDTWV ;
S_RETEMP=S7RETEMP ;
/* Empty map cell for: S_RETINC      variable wave =  7*/ ;
/* Empty map cell for: S_RETLIV      variable wave =  7*/ ;
S_RETMON=S7RETMON ;
S_RETSAT=S7RETSAT ;
/* Empty map cell for: S_RETWLT      variable wave =  7*/ ;
/* Empty map cell for: S_RETWRK      variable wave =  7*/ ;
/* Empty map cell for: S_RETWSP      variable wave =  7*/ ;
S_RETYR=S7RETYR ;
S_RISK=S7RISK ;
S_RISK6=S7RISK6 ;
S_RPLNYA=S7RPLNYA ;
S_RPLNYR=S7RPLNYR ;
/* Empty map cell for: S_RXPREM      variable wave =  7*/ ;
S_RYRCMP=S7RYRCMP ;
S_SADLF=S7SADLF ;
S_SAMEJOB=S7SAMEJOB ;
S_SAMEMP=S7SAMEMP ;
S_SAYRET=S7SAYRET ;
S_SCIS=S7SCIS ;
S_SDIAPL=S7SDIAPL ;
S_SDIAPLM=S7SDIAPLM ;
S_SDIAPLY=S7SDIAPLY ;
S_SDIAPP=S7SDIAPP ;
S_SDIAPPM=S7SDIAPPM ;
S_SDIAPPY=S7SDIAPPY ;
S_SDIDEN=S7SDIDEN ;
S_SDIREC=S7SDIREC ;
S_SDIRECM=S7SDIRECM ;
S_SDIRECY=S7SDIRECY ;
S_SDISTP=S7SDISTP ;
S_SDISTPM=S7SDISTPM ;
S_SDISTPY=S7SDISTPY ;
S_SER7=S7SER7 ;
S_SHLT=S7SHLT ;
S_SHLTC=S7SHLTC ;
S_SHLTCF=S7SHLTCF ;
S_SHOP=S7SHOP ;
S_SHOPA=S7SHOPA ;
S_SHOPH=S7SHOPH ;
/* Empty map cell for: S_SHOPR       variable wave =  7*/ ;
/* Empty map cell for: S1_SIT        variable wave =  7*/ ;
/* Empty map cell for: S2_SIT        variable wave =  7*/ ;
S_SIT=S7SIT ;
S_SITA=S7SITA ;
/* Empty map cell for: S_SITW        variable wave =  7*/ ;
/* Empty map cell for: S_SLEEP       variable wave =  7*/ ;
/* Empty map cell for: S_SLEEPE      variable wave =  7*/ ;
/* Empty map cell for: S_SLEEPEF     variable wave =  7*/ ;
/* Empty map cell for: S_SLEEPQ      variable wave =  7*/ ;
S_SLEEPR=S7SLEEPR ;
/* Empty map cell for: S_SLEEPS      variable wave =  7*/ ;
/* Empty map cell for: S_SLEEPX      variable wave =  7*/ ;
S_SLFEMP=S7SLFEMP ;
S_SLFMEM=S7SLFMEM ;
S_SMOKEN=S7SMOKEN ;
S_SMOKEV=S7SMOKEV ;
S_SPCFAC=S7SPCFAC ;
/* Empty map cell for: S_SSAPL       variable wave =  7*/ ;
/* Empty map cell for: S_SSAPLM      variable wave =  7*/ ;
/* Empty map cell for: S_SSAPLY      variable wave =  7*/ ;
/* Empty map cell for: S_SSAPP       variable wave =  7*/ ;
/* Empty map cell for: S_SSAPPM      variable wave =  7*/ ;
/* Empty map cell for: S_SSAPPY      variable wave =  7*/ ;
/* Empty map cell for: S_SSDEN       variable wave =  7*/ ;
S_SSDI=S7SSDI ;
S_SSIAPL=S7SSIAPL ;
S_SSIAPLM=S7SSIAPLM ;
S_SSIAPLY=S7SSIAPLY ;
S_SSIAPP=S7SSIAPP ;
S_SSIAPPM=S7SSIAPPM ;
S_SSIAPPY=S7SSIAPPY ;
S_SSIDEN=S7SSIDEN ;
S_SSIREC=S7SSIREC ;
S_SSIRECM=S7SSIRECM ;
S_SSIRECY=S7SSIRECY ;
S_SSISTP=S7SSISTP ;
S_SSISTPM=S7SSISTPM ;
S_SSISTPY=S7SSISTPY ;
/* Empty map cell for: S_SSREC       variable wave =  7*/ ;
/* Empty map cell for: S_SSRECM      variable wave =  7*/ ;
/* Empty map cell for: S_SSRECY      variable wave =  7*/ ;
/* Empty map cell for: S_SSSTP       variable wave =  7*/ ;
/* Empty map cell for: S_SSSTPM      variable wave =  7*/ ;
/* Empty map cell for: S_SSSTPY      variable wave =  7*/ ;
S_SSWRER=S7SSWRER ;
S_SSWRNR=S7SSWRNR ;
S_SSWRXA=S7SSWRXA ;
/* Empty map cell for: S_SSWSER      variable wave =  7*/ ;
/* Empty map cell for: S_SSWSNR      variable wave =  7*/ ;
/* Empty map cell for: S_SSWSXA      variable wave =  7*/ ;
S_STATUS=S7STATUS ;
/* Empty map cell for: S1_STOOP      variable wave =  7*/ ;
/* Empty map cell for: S2_STOOP      variable wave =  7*/ ;
S_STOOP=S7STOOP ;
S_STOOPA=S7STOOPA ;
/* Empty map cell for: S_STOOPW      variable wave =  7*/ ;
S_STROK=S7STROK ;
S_STROKE=S7STROKE ;
S_STROKEF=S7STROKEF ;
S_STROKF=S7STROKF ;
S_STROKQ=S7STROKQ ;
S_STROKS=S7STROKS ;
/* Empty map cell for: S_TIMWLK      variable wave =  7*/ ;
/* Empty map cell for: S_TIMWLKA     variable wave =  7*/ ;
/* Empty map cell for: S_TLIPRM      variable wave =  7*/ ;
/* Empty map cell for: S2_TOILT      variable wave =  7*/ ;
S_TOILT=S7TOILT ;
S_TOILTA=S7TOILTA ;
/* Empty map cell for: S2_TOILTH     variable wave =  7*/ ;
S_TOILTH=S7TOILTH ;
/* Empty map cell for: S_TOTMBF      variable wave =  7*/ ;
/* Empty map cell for: S_TOTMBI      variable wave =  7*/ ;
/* Empty map cell for: S_TOTMD       variable wave =  7*/ ;
/* Empty map cell for: S_TOTMDF      variable wave =  7*/ ;
S_TR20=S7TR20 ;
/* Empty map cell for: S_TR40        variable wave =  7*/ ;
S_TYLTC=S7TYLTC ;
/* Empty map cell for: S_ULCER       variable wave =  7*/ ;
S_UNEMP=S7UNEMP ;
S_UNION=S7UNION ;
S_UNIONF=S7UNIONF ;
S_VETRN=S7VETRN ;
/* Empty map cell for: S_VGACTF      variable wave =  7*/ ;
/* Empty map cell for: S_VGACTN      variable wave =  7*/ ;
/* Empty map cell for: S_VGACTP      variable wave =  7*/ ;
S_VGACTX=S7VGACTX ;
/* Empty map cell for: S_VIGACT      variable wave =  7*/ ;
S_VOCAB=S7VOCAB ;
S_VP=S7VP ;
/* Empty map cell for: S1_WALK1      variable wave =  7*/ ;
/* Empty map cell for: S2_WALK1      variable wave =  7*/ ;
S_WALK1=S7WALK1 ;
S_WALK1A=S7WALK1A ;
/* Empty map cell for: S_WALK1W      variable wave =  7*/ ;
/* Empty map cell for: S1_WALKR      variable wave =  7*/ ;
/* Empty map cell for: S2_WALKR      variable wave =  7*/ ;
S_WALKR=S7WALKR ;
S_WALKRA=S7WALKRA ;
S_WALKRE=S7WALKRE ;
/* Empty map cell for: S2_WALKRH     variable wave =  7*/ ;
S_WALKRH=S7WALKRH ;
/* Empty map cell for: S_WALKRW      variable wave =  7*/ ;
/* Empty map cell for: S1_WALKS      variable wave =  7*/ ;
/* Empty map cell for: S2_WALKS      variable wave =  7*/ ;
S_WALKS=S7WALKS ;
S_WALKSA=S7WALKSA ;
/* Empty map cell for: S_WALKSW      variable wave =  7*/ ;
S_WANDER=S7WANDER ;
S_WEIGHT=S7WEIGHT ;
S_WGFHR=S7WGFHR ;
S_WGFWK=S7WGFWK ;
S_WGIHR=S7WGIHR ;
S_WGIWK=S7WGIWK ;
/* Empty map cell for: S_WHAPPX      variable wave =  7*/ ;
S_WHAPPY=S7WHAPPY ;
S_WLIPRM=S7WLIPRM ;
S_WORK=S7WORK ;
S_WORK2=S7WORK2 ;
S_WORK62=S7WORK62 ;
S_WORK62F=S7WORK62F ;
S_WORK65=S7WORK65 ;
S_WORK65F=S7WORK65F ;
/* Empty map cell for: S_WORK70      variable wave =  7*/ ;
/* Empty map cell for: S_WORK70A     variable wave =  7*/ ;
/* Empty map cell for: S_WORK70AF    variable wave =  7*/ ;
/* Empty map cell for: S_WORK70F     variable wave =  7*/ ;
/* Empty map cell for: S_WORKLM      variable wave =  7*/ ;
S_WTCRNH=S7WTCRNH ;
S_WTRESP=S7WTRESP ;
S_WTR_NH=S7WTR_NH ;
S_YR=S7YR ;
if inw=1 then output ;
%put --- Slong table ;
%initvars ;
%put ---- Slong table ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
/* --- RAND variable:HHIDPN  included */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
/* --- RAND variable:HACOHORT  included */ ;
WAVE_NUMBER=8 ;
WAVE_NAME=  'hrs_wave'||strip(put(wave_number,3.))     /* --- Derived variable  */ ;
studyyr= hrs_studyyr(wave_number,
hacohort)     /* --- Derived variable  */ ;
CYEAR='yr2006' ;
H_HHID=H8HHID ;
H_HHIDC=H8HHIDC ;
SUBHH= substr(H_HHIDC,7)     /* --- Derived variable  */ ;
INW=INW8 ;
S_HHIDPN=S8HHIDPN ;
/* --- RAND variable:SASSAGEB  included */ ;
/* --- RAND variable:SASSAGEM  included */ ;
/* --- RAND variable:SASSRECV  included */ ;
/* Empty map cell for: S_ACGTOT      variable wave =  8*/ ;
S_ADL5A=S8ADL5A ;
S_ADL5H=S8ADL5H ;
S_ADL6A=S8ADL6A ;
S_ADL6H=S8ADL6H ;
/* Empty map cell for: S_ADLR10      variable wave =  8*/ ;
/* Empty map cell for: S_ADLW        variable wave =  8*/ ;
S_AGEM_B=S8AGEM_B ;
S_AGEM_E=S8AGEM_E ;
S_AGEM_M=S8AGEM_M ;
S_AGEY_B=S8AGEY_B ;
S_AGEY_E=S8AGEY_E ;
S_AGEY_M=S8AGEY_M ;
S_AHDSMP=S8AHDSMP ;
/* Empty map cell for: S_AIMR10      variable wave =  8*/ ;
S_ALONE=S8ALONE ;
/* Empty map cell for: S_ALZHE       variable wave =  8*/ ;
/* Empty map cell for: S_ALZHEE      variable wave =  8*/ ;
/* Empty map cell for: S_ALZHEEF     variable wave =  8*/ ;
/* Empty map cell for: S_ALZHEF      variable wave =  8*/ ;
/* Empty map cell for: S_ALZHEQ      variable wave =  8*/ ;
/* Empty map cell for: S_ALZHES      variable wave =  8*/ ;
/* Empty map cell for: S_AMSTOT      variable wave =  8*/ ;
S_ANS3PQ=S8ANS3PQ ;
/* Empty map cell for: S1_ARMS       variable wave =  8*/ ;
/* Empty map cell for: S2_ARMS       variable wave =  8*/ ;
S_ARMS=S8ARMS ;
S_ARMSA=S8ARMSA ;
/* Empty map cell for: S_ARMSW       variable wave =  8*/ ;
S_ARTHR=S8ARTHR ;
S_ARTHRE=S8ARTHRE ;
S_ARTHREF=S8ARTHREF ;
S_ARTHRF=S8ARTHRF ;
S_ARTHRQ=S8ARTHRQ ;
S_ARTHRS=S8ARTHRS ;
/* Empty map cell for: S_ATR20       variable wave =  8*/ ;
S_BACK=S8BACK ;
S_BALFUL=S8BALFUL ;
S_BALFULC=S8BALFULC ;
S_BALFULT=S8BALFULT ;
S_BALSBS=S8BALSBS ;
S_BALSBSC=S8BALSBSC ;
S_BALSEMI=S8BALSEMI ;
S_BALSEMIC=S8BALSEMIC ;
/* Empty map cell for: S1_BATH       variable wave =  8*/ ;
/* Empty map cell for: S2_BATH       variable wave =  8*/ ;
S_BATH=S8BATH ;
S_BATHA=S8BATHA ;
/* Empty map cell for: S2_BATHH      variable wave =  8*/ ;
S_BATHH=S8BATHH ;
/* Empty map cell for: S_BATHW       variable wave =  8*/ ;
S_BDATE=S8BDATE ;
/* Empty map cell for: S1_BED        variable wave =  8*/ ;
/* Empty map cell for: S2_BED        variable wave =  8*/ ;
S_BED=S8BED ;
S_BEDA=S8BEDA ;
S_BEDE=S8BEDE ;
/* Empty map cell for: S2_BEDH       variable wave =  8*/ ;
S_BEDH=S8BEDH ;
/* Empty map cell for: S_BEDW        variable wave =  8*/ ;
S_BEQ100=S8BEQ100 ;
S_BEQ10K=S8BEQ10K ;
S_BEQ500=S8BEQ500 ;
S_BEQANY=S8BEQANY ;
/* Empty map cell for: S_BEQLRG      variable wave =  8*/ ;
S_BFLAG=S8BFLAG ;
S_BMI=S8BMI ;
S_BMONTH=S8BMONTH ;
S_BPDIA=S8BPDIA ;
S_BPLACE=S8BPLACE ;
S_BPLACF=S8BPLACF ;
S_BPPOS=S8BPPOS ;
S_BPPULS=S8BPPULS ;
S_BPSYS=S8BPSYS ;
S_BREAST=S8BREAST ;
S_BWC20=S8BWC20 ;
/* Empty map cell for: S_BWC86       variable wave =  8*/ ;
S_BYEAR=S8BYEAR ;
S_CACT=S8CACT ;
/* Empty map cell for: S1_CALC       variable wave =  8*/ ;
/* Empty map cell for: S2_CALC       variable wave =  8*/ ;
/* Empty map cell for: S_CALCA       variable wave =  8*/ ;
/* Empty map cell for: S_CALCW       variable wave =  8*/ ;
S_CANCR=S8CANCR ;
S_CANCRE=S8CANCRE ;
S_CANCREF=S8CANCREF ;
S_CANCRF=S8CANCRF ;
S_CANCRQ=S8CANCRQ ;
S_CANCRS=S8CANCRS ;
S_CENDIV=S8CENDIV ;
S_CENREG=S8CENREG ;
S_CESD=S8CESD ;
S_CESDM=S8CESDM ;
/* Empty map cell for: S1_CHAIR      variable wave =  8*/ ;
/* Empty map cell for: S2_CHAIR      variable wave =  8*/ ;
S_CHAIR=S8CHAIR ;
S_CHAIRA=S8CHAIRA ;
/* Empty map cell for: S_CHAIRW      variable wave =  8*/ ;
S_CHOLST=S8CHOLST ;
/* Empty map cell for: S_CLAIMED     variable wave =  8*/ ;
/* Empty map cell for: S1_CLIM1      variable wave =  8*/ ;
/* Empty map cell for: S2_CLIM1      variable wave =  8*/ ;
S_CLIM1=S8CLIM1 ;
S_CLIM1A=S8CLIM1A ;
/* Empty map cell for: S_CLIM1W      variable wave =  8*/ ;
/* Empty map cell for: S1_CLIMS      variable wave =  8*/ ;
/* Empty map cell for: S2_CLIMS      variable wave =  8*/ ;
S_CLIMS=S8CLIMS ;
S_CLIMSA=S8CLIMSA ;
/* Empty map cell for: S_CLIMSW      variable wave =  8*/ ;
S_COGTOT=S8COGTOT ;
S_COHBYR=S8COHBYR ;
S_COHORT=S8COHORT ;
/* Empty map cell for: S_COMP        variable wave =  8*/ ;
/* Empty map cell for: S_COMPW       variable wave =  8*/ ;
S_CONDE=S8CONDE ;
S_CONDEF=S8CONDEF ;
S_CONDS=S8CONDS ;
S_CONDSF=S8CONDSF ;
S_CONDSP=S8CONDSP ;
S_COVR=S8COVR ;
S_COVRT=S8COVRT ;
S_COVS=S8COVS ;
S_DADAGE=S8DADAGE ;
S_DADLIV=S8DADLIV ;
S_DAGE_M=S8DAGE_M ;
S_DAGE_Y=S8DAGE_Y ;
S_DCBAL1=S8DCBAL1 ;
S_DCBAL2=S8DCBAL2 ;
S_DCBAL3=S8DCBAL3 ;
S_DCBAL4=S8DCBAL4 ;
S_DCBENE1=S8DCBENE1 ;
S_DCBENE2=S8DCBENE2 ;
S_DCBENE3=S8DCBENE3 ;
S_DCBENE4=S8DCBENE4 ;
S_DCCONT1=S8DCCONT1 ;
S_DCCONT2=S8DCCONT2 ;
S_DCCONT3=S8DCCONT3 ;
S_DCCONT4=S8DCCONT4 ;
S_DCMODE1=S8DCMODE1 ;
S_DCMODE2=S8DCMODE2 ;
S_DCMODE3=S8DCMODE3 ;
S_DCMODE4=S8DCMODE4 ;
S_DCPCT1=S8DCPCT1 ;
S_DCPCT2=S8DCPCT2 ;
S_DCPCT3=S8DCPCT3 ;
S_DCPCT4=S8DCPCT4 ;
S_DDATE=S8DDATE ;
/* Empty map cell for: S_DEMEN       variable wave =  8*/ ;
/* Empty map cell for: S_DEMENE      variable wave =  8*/ ;
/* Empty map cell for: S_DEMENEF     variable wave =  8*/ ;
/* Empty map cell for: S_DEMENF      variable wave =  8*/ ;
/* Empty map cell for: S_DEMENQ      variable wave =  8*/ ;
/* Empty map cell for: S_DEMENS      variable wave =  8*/ ;
S_DENTST=S8DENTST ;
S_DEPRES=S8DEPRES ;
/* Empty map cell for: S_DEPREX      variable wave =  8*/ ;
S_DIAB=S8DIAB ;
S_DIABE=S8DIABE ;
S_DIABEF=S8DIABEF ;
S_DIABF=S8DIABF ;
S_DIABQ=S8DIABQ ;
S_DIABS=S8DIABS ;
/* Empty map cell for: S1_DIME       variable wave =  8*/ ;
/* Empty map cell for: S2_DIME       variable wave =  8*/ ;
S_DIME=S8DIME ;
S_DIMEA=S8DIMEA ;
/* Empty map cell for: S_DIMEW       variable wave =  8*/ ;
S_DLRC=S8DLRC ;
/* Empty map cell for: S_DLRC20      variable wave =  8*/ ;
S_DMONTH=S8DMONTH ;
S_DOCTIM=S8DOCTIM ;
S_DOCTOR=S8DOCTOR ;
/* Empty map cell for: S1_DRESS      variable wave =  8*/ ;
/* Empty map cell for: S2_DRESS      variable wave =  8*/ ;
S_DRESS=S8DRESS ;
S_DRESSA=S8DRESSA ;
/* Empty map cell for: S2_DRESSH     variable wave =  8*/ ;
S_DRESSH=S8DRESSH ;
/* Empty map cell for: S_DRESSW      variable wave =  8*/ ;
S_DRINK=S8DRINK ;
S_DRINKD=S8DRINKD ;
S_DRINKN=S8DRINKN ;
/* Empty map cell for: S_DRINKR      variable wave =  8*/ ;
S_DRUGS=S8DRUGS ;
S_DSIAMT=S8DSIAMT ;
S_DSRC=S8DSRC ;
S_DSSAMT=S8DSSAMT ;
S_DSTAT=S8DSTAT ;
S_DTIMTDTH=S8DTIMTDTH ;
S_DW=S8DW ;
S_DY=S8DY ;
S_DYEAR=S8DYEAR ;
/* Empty map cell for: S1_EAT        variable wave =  8*/ ;
/* Empty map cell for: S2_EAT        variable wave =  8*/ ;
S_EAT=S8EAT ;
S_EATA=S8EATA ;
/* Empty map cell for: S2_EATH       variable wave =  8*/ ;
S_EATH=S8EATH ;
/* Empty map cell for: S_EATW        variable wave =  8*/ ;
S_EDEGRM=S8EDEGRM ;
S_EDUC=S8EDUC ;
S_EDYRS=S8EDYRS ;
S_EFFORT=S8EFFORT ;
/* Empty map cell for: S_EFFORX      variable wave =  8*/ ;
S_ENLIFE=S8ENLIFE ;
/* Empty map cell for: S_ENLIFX      variable wave =  8*/ ;
S_EVBRN=S8EVBRN ;
S_EVBRNF=S8EVBRNF ;
S_FAMR=S8FAMR ;
S_FBWC20=S8FBWC20 ;
/* Empty map cell for: S_FBWC86      variable wave =  8*/ ;
S_FCACT=S8FCACT ;
S_FDLRC=S8FDLRC ;
S_FDW=S8FDW ;
S_FDY=S8FDY ;
S_FEDUC=S8FEDUC ;
S_FIMRC=S8FIMRC ;
S_FINEA=S8FINEA ;
S_FINPLN=S8FINPLN ;
S_FINR=S8FINR ;
/* Empty map cell for: S_FLAG        variable wave =  8*/ ;
S_FLONE=S8FLONE ;
/* Empty map cell for: S_FLONEX      variable wave =  8*/ ;
S_FLUSHT=S8FLUSHT ;
S_FMO=S8FMO ;
S_FPRES=S8FPRES ;
S_FPSTME=S8FPSTME ;
S_FSAD=S8FSAD ;
/* Empty map cell for: S_FSADX       variable wave =  8*/ ;
S_FSCIS=S8FSCIS ;
S_FSER7=S8FSER7 ;
S_FSIZE=S8FSIZE ;
S_FSIZEF=S8FSIZEF ;
S_FSLFME=S8FSLFME ;
S_FVOCAB=S8FVOCAB ;
S_FVP=S8FVP ;
S_FYR=S8FYR ;
S_GENDER=S8GENDER ;
S_GOING=S8GOING ;
/* Empty map cell for: S_GOINGX      variable wave =  8*/ ;
S_GOVMD=S8GOVMD ;
S_GOVMR=S8GOVMR ;
/* Empty map cell for: S_GOVOT       variable wave =  8*/ ;
S_GOVVA=S8GOVVA ;
S_GROSSA=S8GROSSA ;
S_GRP=S8GRP ;
S_GRPDOM=S8GRPDOM ;
S_GRPL=S8GRPL ;
S_GRPPOS=S8GRPPOS ;
S_GRPR=S8GRPR ;
S_HALUC=S8HALUC ;
/* Empty map cell for: S_HDLR20      variable wave =  8*/ ;
S_HEART=S8HEART ;
S_HEARTE=S8HEARTE ;
S_HEARTEF=S8HEARTEF ;
S_HEARTF=S8HEARTF ;
S_HEARTQ=S8HEARTQ ;
S_HEARTS=S8HEARTS ;
S_HECOV1=S8HECOV1 ;
S_HECOV2=S8HECOV2 ;
S_HECOV3=S8HECOV3 ;
S_HEIGHT=S8HEIGHT ;
S_HENUM=S8HENUM ;
S_HERET=S8HERET ;
S_HERTR1=S8HERTR1 ;
S_HERTR2=S8HERTR2 ;
S_HERTR3=S8HERTR3 ;
S_HERTS1=S8HERTS1 ;
S_HERTS2=S8HERTS2 ;
S_HERTS3=S8HERTS3 ;
S_HESRC1=S8HESRC1 ;
S_HESRC2=S8HESRC2 ;
S_HESRC3=S8HESRC3 ;
S_HHIDPN=S8HHIDPN ;
S_HIBP=S8HIBP ;
S_HIBPE=S8HIBPE ;
S_HIBPEF=S8HIBPEF ;
S_HIBPF=S8HIBPF ;
S_HIBPQ=S8HIBPQ ;
S_HIBPS=S8HIBPS ;
S_HIGOV=S8HIGOV ;
S_HILTC=S8HILTC ;
/* Empty map cell for: S_HIMR20      variable wave =  8*/ ;
S_HIOTHP=S8HIOTHP ;
S_HISPAN=S8HISPAN ;
S_HLPDYSF=S8HLPDYSF ;
S_HLPDYSNF=S8HLPDYSNF ;
S_HLPDYSP=S8HLPDYSP ;
S_HLPDYST=S8HLPDYST ;
S_HLPDYSU=S8HLPDYSU ;
S_HLPHRSF=S8HLPHRSF ;
S_HLPHRSNF=S8HLPHRSNF ;
S_HLPHRSP=S8HLPHRSP ;
S_HLPHRST=S8HLPHRST ;
S_HLPHRSU=S8HLPHRSU ;
S_HLPPDFA=S8HLPPDFA ;
S_HLPPDFN=S8HLPPDFN ;
S_HLPPDNFA=S8HLPPDNFA ;
S_HLPPDNFN=S8HLPPDNFN ;
S_HLPPDTA=S8HLPPDTA ;
S_HLPPDTN=S8HLPPDTN ;
S_HLPRFN=S8HLPRFN ;
S_HLPRNFN=S8HLPRNFN ;
S_HLPRPN=S8HLPRPN ;
S_HLPRTN=S8HLPRTN ;
S_HLPRUN=S8HLPRUN ;
S_HLTC3=S8HLTC3 ;
/* Empty map cell for: S_HLTC5       variable wave =  8*/ ;
/* Empty map cell for: S_HLTC5F      variable wave =  8*/ ;
S_HLTHLM=S8HLTHLM ;
S_HOMCAR=S8HOMCAR ;
S_HOSP=S8HOSP ;
S_HRSAMP=S8HRSAMP ;
S_HSPNIT=S8HSPNIT ;
S_HSPTIM=S8HSPTIM ;
/* Empty map cell for: S_HSWRKF      variable wave =  8*/ ;
/* Empty map cell for: S_HTR40       variable wave =  8*/ ;
S_IADL5A=S8IADL5A ;
S_IADL5H=S8IADL5H ;
S_IANN=S8IANN ;
S_IEARN=S8IEARN ;
S_IFANN=S8IFANN ;
S_IFEARN=S8IFEARN ;
S_IFGXFR=S8IFGXFR ;
S_IFIRAW=S8IFIRAW ;
/* Empty map cell for: S_IFIRAWY1    variable wave =  8*/ ;
S_IFPEN=S8IFPEN ;
S_IFPENA=S8IFPENA ;
S_IFSDI=S8IFSDI ;
S_IFSRET=S8IFSRET ;
S1_IFSSDI=S8IFSSDI ;
/* Empty map cell for: S_IFSSDI      variable wave =  8*/ ;
/* Empty map cell for: S_IFSSI       variable wave =  8*/ ;
S_IFUNEM=S8IFUNEM ;
S1_IFUNWC=S8IFUNWC ;
/* Empty map cell for: S2_IFUNWC     variable wave =  8*/ ;
S_IFWCMP=S8IFWCMP ;
S_IGXFR=S8IGXFR ;
S_IIRAW=S8IIRAW ;
S_IIRAWY1=S8IIRAWY1 ;
S_IMRC=S8IMRC ;
/* Empty map cell for: S_IMRC20      variable wave =  8*/ ;
S_INHER=S8INHER ;
S_INHPE=S8INHPE ;
S_INHPFN=S8INHPFN ;
S_INHPNFN=S8INHPNFN ;
S_INHPPN=S8INHPPN ;
S_INHPTN=S8INHPTN ;
S_INHPUN=S8INHPUN ;
S_INLBRF=S8INLBRF ;
S_IPEN=S8IPEN ;
S_IPENA=S8IPENA ;
S_ISDI=S8ISDI ;
S_ISRET=S8ISRET ;
S_ISSDI=S8ISSDI ;
S_ISSI=S8ISSI ;
S_IUNEM=S8IUNEM ;
S_IUNWC=S8IUNWC ;
S_IWBEG=S8IWBEG ;
/* Empty map cell for: S_IWBEGF      variable wave =  8*/ ;
S_IWCMP=S8IWCMP ;
S_IWEND=S8IWEND ;
/* Empty map cell for: S_IWENDF      variable wave =  8*/ ;
S_IWENDM=S8IWENDM ;
S_IWENDY=S8IWENDY ;
S_IWMID=S8IWMID ;
S_IWMIDF=S8IWMIDF ;
S_IWSTAT=S8IWSTAT ;
S_JCIND=S8JCIND ;
S_JCINDB=S8JCINDB ;
/* Empty map cell for: S_JCINDC      variable wave =  8*/ ;
S_JCOCC=S8JCOCC ;
S_JCOCCA=S8JCOCCA ;
S_JCOCCB=S8JCOCCB ;
/* Empty map cell for: S_JCOCCC      variable wave =  8*/ ;
S_JCPEN=S8JCPEN ;
S_JCPENF=S8JCPENF ;
S_JCTEN=S8JCTEN ;
S_JHOUR2=S8JHOUR2 ;
S_JHOURS=S8JHOURS ;
S_JJOBS=S8JJOBS ;
S_JLASTM=S8JLASTM ;
S_JLASTY=S8JLASTY ;
S_JLIFT=S8JLIFT ;
S_JLIND=S8JLIND ;
S_JLINDB=S8JLINDB ;
/* Empty map cell for: S_JLINDC      variable wave =  8*/ ;
S_JLMIS=S8JLMIS ;
S_JLOCC=S8JLOCC ;
S_JLOCCA=S8JLOCCA ;
S_JLOCCB=S8JLOCCB ;
/* Empty map cell for: S_JLOCCC      variable wave =  8*/ ;
S_JLTEN=S8JLTEN ;
S_JLTENF=S8JLTENF ;
S_JMISS=S8JMISS ;
S_JNJOB=S8JNJOB ;
S_JNJOB5=S8JNJOB5 ;
/* Empty map cell for: S1_JOG        variable wave =  8*/ ;
/* Empty map cell for: S2_JOG        variable wave =  8*/ ;
S_JOG=S8JOG ;
S_JOGA=S8JOGA ;
/* Empty map cell for: S_JOGW        variable wave =  8*/ ;
S_JPHYS=S8JPHYS ;
S_JSIGHT=S8JSIGHT ;
S_JSTOOP=S8JSTOOP ;
S_JSTRES=S8JSTRES ;
S_JWEEK2=S8JWEEK2 ;
S_JWEEKS=S8JWEEKS ;
S_JYEARM=S8JYEARM ;
S_JYEARS=S8JYEARS ;
S_LBAGR=S8LBAGR ;
S_LBASSISTPRB=S8LBASSISTPRB ;
S_LBCOMP=S8LBCOMP ;
/* Empty map cell for: S_LBCON10     variable wave =  8*/ ;
S_LBCON5=S8LBCON5 ;
S_LBELIG=S8LBELIG ;
S_LBEXT=S8LBEXT ;
S_LBFAMDRUGPRB=S8LBFAMDRUGPRB ;
S_LBFAMHLTHPRB=S8LBFAMHLTHPRB ;
S_LBFINPRB=S8LBFINPRB ;
S_LBHLTHPRB=S8LBHLTHPRB ;
S_LBHOUSEPRB=S8LBHOUSEPRB ;
/* Empty map cell for: S_LBLONELY11  variable wave =  8*/ ;
S_LBLONELY3=S8LBLONELY3 ;
/* Empty map cell for: S_LBNEGAFFECT variable wave =  8*/ ;
S_LBNEGAFFECT6=S8LBNEGAFFECT6 ;
S_LBNEUR=S8LBNEUR ;
S_LBONCHRSTR=S8LBONCHRSTR ;
S_LBOPEN=S8LBOPEN ;
/* Empty map cell for: S_LBPOSAFFECT variable wave =  8*/ ;
S_LBPOSAFFECT6=S8LBPOSAFFECT6 ;
S_LBRF=S8LBRF ;
S_LBRFH=S8LBRFH ;
S_LBRFY=S8LBRFY ;
S_LBRLTNSHPRB=S8LBRLTNSHPRB ;
/* Empty map cell for: S_LBSATCITY   variable wave =  8*/ ;
/* Empty map cell for: S_LBSATFAM    variable wave =  8*/ ;
S_LBSATFIN=S8LBSATFIN ;
/* Empty map cell for: S_LBSATHLTH   variable wave =  8*/ ;
/* Empty map cell for: S_LBSATHOME   variable wave =  8*/ ;
/* Empty map cell for: S_LBSATINC    variable wave =  8*/ ;
/* Empty map cell for: S_LBSATLEISUREvariable wave =  8*/ ;
/* Empty map cell for: S_LBSATLIFE   variable wave =  8*/ ;
S_LBSATWLF=S8LBSATWLF ;
S_LBWGTR=S8LBWGTR ;
S_LBWORKPRB=S8LBWORKPRB ;
S_LGMUSA=S8LGMUSA ;
/* Empty map cell for: S_LGMUSW      variable wave =  8*/ ;
/* Empty map cell for: S_LHTACT      variable wave =  8*/ ;
S_LIFEIN=S8LIFEIN ;
/* Empty map cell for: S1_LIFT       variable wave =  8*/ ;
/* Empty map cell for: S2_LIFT       variable wave =  8*/ ;
S_LIFT=S8LIFT ;
S_LIFTA=S8LIFTA ;
/* Empty map cell for: S_LIFTW       variable wave =  8*/ ;
S_LIV10=S8LIV10 ;
S_LIV10A=S8LIV10A ;
S_LIV10P=S8LIV10P ;
S_LIV10R=S8LIV10R ;
S_LIV75=S8LIV75 ;
S_LIV75C=S8LIV75C ;
S_LIV75F=S8LIV75F ;
S_LIV75P=S8LIV75P ;
S_LIV75R=S8LIV75R ;
/* Empty map cell for: S_LIV85       variable wave =  8*/ ;
/* Empty map cell for: S_LIV85C      variable wave =  8*/ ;
/* Empty map cell for: S_LIV85F      variable wave =  8*/ ;
/* Empty map cell for: S_LIV85P      variable wave =  8*/ ;
/* Empty map cell for: S_LIV85R      variable wave =  8*/ ;
S_LIV8XC=S8LIV8XC ;
S_LIV8XF=S8LIV8XF ;
S_LIVBRO=S8LIVBRO ;
S_LIVPAR=S8LIVPAR ;
S_LIVSIB=S8LIVSIB ;
S_LIVSIS=S8LIVSIS ;
S_LOST=S8LOST ;
/* Empty map cell for: S_LTACTF      variable wave =  8*/ ;
/* Empty map cell for: S_LTACTN      variable wave =  8*/ ;
/* Empty map cell for: S_LTACTP      variable wave =  8*/ ;
S_LTACTX=S8LTACTX ;
S_LTCPRM=S8LTCPRM ;
S_LUNG=S8LUNG ;
S_LUNGE=S8LUNGE ;
S_LUNGEF=S8LUNGEF ;
S_LUNGF=S8LUNGF ;
S_LUNGQ=S8LUNGQ ;
S_LUNGS=S8LUNGS ;
S_MAMMOG=S8MAMMOG ;
/* Empty map cell for: S1_MAP        variable wave =  8*/ ;
/* Empty map cell for: S2_MAP        variable wave =  8*/ ;
S_MAP=S8MAP ;
S_MAPA=S8MAPA ;
/* Empty map cell for: S_MAPW        variable wave =  8*/ ;
S_MCURLN=S8MCURLN ;
/* Empty map cell for: S_MCWV        variable wave =  8*/ ;
/* Empty map cell for: S_MCWVW       variable wave =  8*/ ;
S_MDACTX=S8MDACTX ;
S_MDIV=S8MDIV ;
S_MEALS=S8MEALS ;
S_MEALSA=S8MEALSA ;
S_MEALSH=S8MEALSH ;
/* Empty map cell for: S_MEALSR      variable wave =  8*/ ;
/* Empty map cell for: S2_MEDS       variable wave =  8*/ ;
S_MEDS=S8MEDS ;
S_MEDSA=S8MEDSA ;
S_MEDSH=S8MEDSH ;
/* Empty map cell for: S_MEDSR       variable wave =  8*/ ;
S_MEDUC=S8MEDUC ;
S_MEMRY=S8MEMRY ;
S_MEMRYE=S8MEMRYE ;
S_MEMRYEF=S8MEMRYEF ;
S_MEMRYF=S8MEMRYF ;
S_MEMRYQ=S8MEMRYQ ;
S_MEMRYS=S8MEMRYS ;
S_MEND=S8MEND ;
S_MLEN=S8MLEN ;
S_MLENM=S8MLENM ;
S_MNEV=S8MNEV ;
S_MO=S8MO ;
S_MOBILA=S8MOBILA ;
/* Empty map cell for: S_MOBILW      variable wave =  8*/ ;
S_MOMAGE=S8MOMAGE ;
S_MOMLIV=S8MOMLIV ;
/* Empty map cell for: S2_MONEY      variable wave =  8*/ ;
S_MONEY=S8MONEY ;
S_MONEYA=S8MONEYA ;
S_MONEYH=S8MONEYH ;
/* Empty map cell for: S_MONEYR      variable wave =  8*/ ;
S_MPART=S8MPART ;
S_MRCT=S8MRCT ;
S_MRPREM=S8MRPREM ;
S_MSTAT=S8MSTAT ;
S_MSTATF=S8MSTATF ;
S_MSTATH=S8MSTATH ;
S_MSTOT=S8MSTOT ;
S_MWID=S8MWID ;
S_NHMDAY=S8NHMDAY ;
S_NHMLIV=S8NHMLIV ;
S_NHMMVM=S8NHMMVM ;
S_NHMMVY=S8NHMMVY ;
S_NOTICS=S8NOTICS ;
S_NOVOC=S8NOVOC ;
S_NRSHOM=S8NRSHOM ;
S_NRSNIT=S8NRSNIT ;
S_NRSTIM=S8NRSTIM ;
/* Empty map cell for: S_NSSCRE      variable wave =  8*/ ;
/* Empty map cell for: S_NSSCSE      variable wave =  8*/ ;
S_OAHDID=S8OAHDID ;
S_OHRSID=S8OHRSID ;
S_OOPMD=S8OOPMD ;
S_OOPMDF=S8OOPMDF ;
/* Empty map cell for: S_OOPMDO      variable wave =  8*/ ;
/* Empty map cell for: S_OOPMDOF     variable wave =  8*/ ;
S_OUTPT=S8OUTPT ;
S_PAPSM=S8PAPSM ;
S_PARTD=S8PARTD ;
S_PENCT=S8PENCT ;
S_PENIC1=S8PENIC1 ;
S_PENIC2=S8PENIC2 ;
S_PENINC=S8PENINC ;
S_PENI_N=S8PENI_N ;
/* Empty map cell for: S2_PHONE      variable wave =  8*/ ;
S_PHONE=S8PHONE ;
S_PHONEA=S8PHONEA ;
S_PHONEH=S8PHONEH ;
/* Empty map cell for: S_PHONER      variable wave =  8*/ ;
S_PMBMI=S8PMBMI ;
S_PMHGHT=S8PMHGHT ;
S_PMHGHTS=S8PMHGHTS ;
S_PMWAIST=S8PMWAIST ;
S_PMWAISTC=S8PMWAISTC ;
S_PMWGHT=S8PMWGHT ;
S_PMWGHTF=S8PMWGHTF ;
S_PMWGHTS=S8PMWGHTS ;
S_PNHM5Y=S8PNHM5Y ;
S_PRCHMEM=S8PRCHMEM ;
S_PRES=S8PRES ;
S_PRMEM=S8PRMEM ;
S_PROST=S8PROST ;
S_PROXY=S8PROXY ;
S_PRPCNT=S8PRPCNT ;
S_PRPRM1=S8PRPRM1 ;
S_PRPRM2=S8PRPRM2 ;
S_PRPRM3=S8PRPRM3 ;
S_PRSRC1=S8PRSRC1 ;
S_PRSRC2=S8PRSRC2 ;
S_PRSRC3=S8PRSRC3 ;
S_PSTMEM=S8PSTMEM ;
S_PSYCH=S8PSYCH ;
S_PSYCHE=S8PSYCHE ;
S_PSYCHEF=S8PSYCHEF ;
S_PSYCHF=S8PSYCHF ;
S_PSYCHQ=S8PSYCHQ ;
S_PSYCHS=S8PSYCHS ;
S_PTYP1=S8PTYP1 ;
S_PTYP2=S8PTYP2 ;
S_PTYP3=S8PTYP3 ;
S_PTYP4=S8PTYP4 ;
/* Empty map cell for: S_PTYPD1      variable wave =  8*/ ;
/* Empty map cell for: S_PTYPD2      variable wave =  8*/ ;
/* Empty map cell for: S_PTYPD3      variable wave =  8*/ ;
/* Empty map cell for: S_PTYPD4      variable wave =  8*/ ;
/* Empty map cell for: S_PTYPF1      variable wave =  8*/ ;
/* Empty map cell for: S_PTYPF2      variable wave =  8*/ ;
/* Empty map cell for: S_PTYPF3      variable wave =  8*/ ;
/* Empty map cell for: S_PTYPF4      variable wave =  8*/ ;
S_PUFF=S8PUFF ;
S_PUFFPOS=S8PUFFPOS ;
/* Empty map cell for: S1_PUSH       variable wave =  8*/ ;
/* Empty map cell for: S2_PUSH       variable wave =  8*/ ;
S_PUSH=S8PUSH ;
S_PUSHA=S8PUSHA ;
/* Empty map cell for: S_PUSHW       variable wave =  8*/ ;
S_RACEM=S8RACEM ;
S_RELIG=S8RELIG ;
S_RETDTWV=S8RETDTWV ;
S_RETEMP=S8RETEMP ;
/* Empty map cell for: S_RETINC      variable wave =  8*/ ;
/* Empty map cell for: S_RETLIV      variable wave =  8*/ ;
S_RETMON=S8RETMON ;
S_RETSAT=S8RETSAT ;
/* Empty map cell for: S_RETWLT      variable wave =  8*/ ;
/* Empty map cell for: S_RETWRK      variable wave =  8*/ ;
/* Empty map cell for: S_RETWSP      variable wave =  8*/ ;
S_RETYR=S8RETYR ;
S_RISK=S8RISK ;
S_RISK6=S8RISK6 ;
S_RPLNYA=S8RPLNYA ;
S_RPLNYR=S8RPLNYR ;
S_RXPREM=S8RXPREM ;
S_RYRCMP=S8RYRCMP ;
S_SADLF=S8SADLF ;
S_SAMEJOB=S8SAMEJOB ;
S_SAMEMP=S8SAMEMP ;
S_SAYRET=S8SAYRET ;
S_SCIS=S8SCIS ;
S_SDIAPL=S8SDIAPL ;
S_SDIAPLM=S8SDIAPLM ;
S_SDIAPLY=S8SDIAPLY ;
S_SDIAPP=S8SDIAPP ;
S_SDIAPPM=S8SDIAPPM ;
S_SDIAPPY=S8SDIAPPY ;
S_SDIDEN=S8SDIDEN ;
S_SDIREC=S8SDIREC ;
S_SDIRECM=S8SDIRECM ;
S_SDIRECY=S8SDIRECY ;
S_SDISTP=S8SDISTP ;
S_SDISTPM=S8SDISTPM ;
S_SDISTPY=S8SDISTPY ;
S_SER7=S8SER7 ;
S_SHLT=S8SHLT ;
S_SHLTC=S8SHLTC ;
S_SHLTCF=S8SHLTCF ;
S_SHOP=S8SHOP ;
S_SHOPA=S8SHOPA ;
S_SHOPH=S8SHOPH ;
/* Empty map cell for: S_SHOPR       variable wave =  8*/ ;
/* Empty map cell for: S1_SIT        variable wave =  8*/ ;
/* Empty map cell for: S2_SIT        variable wave =  8*/ ;
S_SIT=S8SIT ;
S_SITA=S8SITA ;
/* Empty map cell for: S_SITW        variable wave =  8*/ ;
/* Empty map cell for: S_SLEEP       variable wave =  8*/ ;
/* Empty map cell for: S_SLEEPE      variable wave =  8*/ ;
/* Empty map cell for: S_SLEEPEF     variable wave =  8*/ ;
/* Empty map cell for: S_SLEEPQ      variable wave =  8*/ ;
S_SLEEPR=S8SLEEPR ;
/* Empty map cell for: S_SLEEPS      variable wave =  8*/ ;
/* Empty map cell for: S_SLEEPX      variable wave =  8*/ ;
S_SLFEMP=S8SLFEMP ;
S_SLFMEM=S8SLFMEM ;
S_SMOKEN=S8SMOKEN ;
S_SMOKEV=S8SMOKEV ;
S_SPCFAC=S8SPCFAC ;
/* Empty map cell for: S_SSAPL       variable wave =  8*/ ;
/* Empty map cell for: S_SSAPLM      variable wave =  8*/ ;
/* Empty map cell for: S_SSAPLY      variable wave =  8*/ ;
/* Empty map cell for: S_SSAPP       variable wave =  8*/ ;
/* Empty map cell for: S_SSAPPM      variable wave =  8*/ ;
/* Empty map cell for: S_SSAPPY      variable wave =  8*/ ;
/* Empty map cell for: S_SSDEN       variable wave =  8*/ ;
S_SSDI=S8SSDI ;
S_SSIAPL=S8SSIAPL ;
S_SSIAPLM=S8SSIAPLM ;
S_SSIAPLY=S8SSIAPLY ;
S_SSIAPP=S8SSIAPP ;
S_SSIAPPM=S8SSIAPPM ;
S_SSIAPPY=S8SSIAPPY ;
S_SSIDEN=S8SSIDEN ;
S_SSIREC=S8SSIREC ;
S_SSIRECM=S8SSIRECM ;
S_SSIRECY=S8SSIRECY ;
S_SSISTP=S8SSISTP ;
S_SSISTPM=S8SSISTPM ;
S_SSISTPY=S8SSISTPY ;
/* Empty map cell for: S_SSREC       variable wave =  8*/ ;
/* Empty map cell for: S_SSRECM      variable wave =  8*/ ;
/* Empty map cell for: S_SSRECY      variable wave =  8*/ ;
/* Empty map cell for: S_SSSTP       variable wave =  8*/ ;
/* Empty map cell for: S_SSSTPM      variable wave =  8*/ ;
/* Empty map cell for: S_SSSTPY      variable wave =  8*/ ;
/* Empty map cell for: S_SSWRER      variable wave =  8*/ ;
/* Empty map cell for: S_SSWRNR      variable wave =  8*/ ;
/* Empty map cell for: S_SSWRXA      variable wave =  8*/ ;
/* Empty map cell for: S_SSWSER      variable wave =  8*/ ;
/* Empty map cell for: S_SSWSNR      variable wave =  8*/ ;
/* Empty map cell for: S_SSWSXA      variable wave =  8*/ ;
S_STATUS=S8STATUS ;
/* Empty map cell for: S1_STOOP      variable wave =  8*/ ;
/* Empty map cell for: S2_STOOP      variable wave =  8*/ ;
S_STOOP=S8STOOP ;
S_STOOPA=S8STOOPA ;
/* Empty map cell for: S_STOOPW      variable wave =  8*/ ;
S_STROK=S8STROK ;
S_STROKE=S8STROKE ;
S_STROKEF=S8STROKEF ;
S_STROKF=S8STROKF ;
S_STROKQ=S8STROKQ ;
S_STROKS=S8STROKS ;
S_TIMWLK=S8TIMWLK ;
S_TIMWLKA=S8TIMWLKA ;
/* Empty map cell for: S_TLIPRM      variable wave =  8*/ ;
/* Empty map cell for: S2_TOILT      variable wave =  8*/ ;
S_TOILT=S8TOILT ;
S_TOILTA=S8TOILTA ;
/* Empty map cell for: S2_TOILTH     variable wave =  8*/ ;
S_TOILTH=S8TOILTH ;
/* Empty map cell for: S_TOTMBF      variable wave =  8*/ ;
/* Empty map cell for: S_TOTMBI      variable wave =  8*/ ;
/* Empty map cell for: S_TOTMD       variable wave =  8*/ ;
/* Empty map cell for: S_TOTMDF      variable wave =  8*/ ;
S_TR20=S8TR20 ;
/* Empty map cell for: S_TR40        variable wave =  8*/ ;
S_TYLTC=S8TYLTC ;
/* Empty map cell for: S_ULCER       variable wave =  8*/ ;
S_UNEMP=S8UNEMP ;
S_UNION=S8UNION ;
S_UNIONF=S8UNIONF ;
S_VETRN=S8VETRN ;
/* Empty map cell for: S_VGACTF      variable wave =  8*/ ;
/* Empty map cell for: S_VGACTN      variable wave =  8*/ ;
/* Empty map cell for: S_VGACTP      variable wave =  8*/ ;
S_VGACTX=S8VGACTX ;
/* Empty map cell for: S_VIGACT      variable wave =  8*/ ;
S_VOCAB=S8VOCAB ;
S_VP=S8VP ;
/* Empty map cell for: S1_WALK1      variable wave =  8*/ ;
/* Empty map cell for: S2_WALK1      variable wave =  8*/ ;
S_WALK1=S8WALK1 ;
S_WALK1A=S8WALK1A ;
/* Empty map cell for: S_WALK1W      variable wave =  8*/ ;
/* Empty map cell for: S1_WALKR      variable wave =  8*/ ;
/* Empty map cell for: S2_WALKR      variable wave =  8*/ ;
S_WALKR=S8WALKR ;
S_WALKRA=S8WALKRA ;
S_WALKRE=S8WALKRE ;
/* Empty map cell for: S2_WALKRH     variable wave =  8*/ ;
S_WALKRH=S8WALKRH ;
/* Empty map cell for: S_WALKRW      variable wave =  8*/ ;
/* Empty map cell for: S1_WALKS      variable wave =  8*/ ;
/* Empty map cell for: S2_WALKS      variable wave =  8*/ ;
S_WALKS=S8WALKS ;
S_WALKSA=S8WALKSA ;
/* Empty map cell for: S_WALKSW      variable wave =  8*/ ;
S_WANDER=S8WANDER ;
S_WEIGHT=S8WEIGHT ;
S_WGFHR=S8WGFHR ;
S_WGFWK=S8WGFWK ;
S_WGIHR=S8WGIHR ;
S_WGIWK=S8WGIWK ;
/* Empty map cell for: S_WHAPPX      variable wave =  8*/ ;
S_WHAPPY=S8WHAPPY ;
S_WLIPRM=S8WLIPRM ;
S_WORK=S8WORK ;
S_WORK2=S8WORK2 ;
S_WORK62=S8WORK62 ;
S_WORK62F=S8WORK62F ;
S_WORK65=S8WORK65 ;
S_WORK65F=S8WORK65F ;
/* Empty map cell for: S_WORK70      variable wave =  8*/ ;
/* Empty map cell for: S_WORK70A     variable wave =  8*/ ;
/* Empty map cell for: S_WORK70AF    variable wave =  8*/ ;
/* Empty map cell for: S_WORK70F     variable wave =  8*/ ;
/* Empty map cell for: S_WORKLM      variable wave =  8*/ ;
S_WTCRNH=S8WTCRNH ;
S_WTRESP=S8WTRESP ;
S_WTR_NH=S8WTR_NH ;
S_YR=S8YR ;
if inw=1 then output ;
%put --- Slong table ;
%initvars ;
%put ---- Slong table ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
/* --- RAND variable:HHIDPN  included */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
/* --- RAND variable:HACOHORT  included */ ;
WAVE_NUMBER=9 ;
WAVE_NAME=  'hrs_wave'||strip(put(wave_number,3.))     /* --- Derived variable  */ ;
studyyr= hrs_studyyr(wave_number,
hacohort)     /* --- Derived variable  */ ;
CYEAR='yr2008' ;
H_HHID=H9HHID ;
H_HHIDC=H9HHIDC ;
SUBHH= substr(H_HHIDC,7)     /* --- Derived variable  */ ;
INW=INW9 ;
S_HHIDPN=S9HHIDPN ;
/* --- RAND variable:SASSAGEB  included */ ;
/* --- RAND variable:SASSAGEM  included */ ;
/* --- RAND variable:SASSRECV  included */ ;
/* Empty map cell for: S_ACGTOT      variable wave =  9*/ ;
S_ADL5A=S9ADL5A ;
S_ADL5H=S9ADL5H ;
S_ADL6A=S9ADL6A ;
S_ADL6H=S9ADL6H ;
/* Empty map cell for: S_ADLR10      variable wave =  9*/ ;
/* Empty map cell for: S_ADLW        variable wave =  9*/ ;
S_AGEM_B=S9AGEM_B ;
S_AGEM_E=S9AGEM_E ;
S_AGEM_M=S9AGEM_M ;
S_AGEY_B=S9AGEY_B ;
S_AGEY_E=S9AGEY_E ;
S_AGEY_M=S9AGEY_M ;
S_AHDSMP=S9AHDSMP ;
/* Empty map cell for: S_AIMR10      variable wave =  9*/ ;
S_ALONE=S9ALONE ;
/* Empty map cell for: S_ALZHE       variable wave =  9*/ ;
/* Empty map cell for: S_ALZHEE      variable wave =  9*/ ;
/* Empty map cell for: S_ALZHEEF     variable wave =  9*/ ;
/* Empty map cell for: S_ALZHEF      variable wave =  9*/ ;
/* Empty map cell for: S_ALZHEQ      variable wave =  9*/ ;
/* Empty map cell for: S_ALZHES      variable wave =  9*/ ;
/* Empty map cell for: S_AMSTOT      variable wave =  9*/ ;
S_ANS3PQ=S9ANS3PQ ;
/* Empty map cell for: S1_ARMS       variable wave =  9*/ ;
/* Empty map cell for: S2_ARMS       variable wave =  9*/ ;
S_ARMS=S9ARMS ;
S_ARMSA=S9ARMSA ;
/* Empty map cell for: S_ARMSW       variable wave =  9*/ ;
S_ARTHR=S9ARTHR ;
S_ARTHRE=S9ARTHRE ;
S_ARTHREF=S9ARTHREF ;
S_ARTHRF=S9ARTHRF ;
S_ARTHRQ=S9ARTHRQ ;
S_ARTHRS=S9ARTHRS ;
/* Empty map cell for: S_ATR20       variable wave =  9*/ ;
S_BACK=S9BACK ;
S_BALFUL=S9BALFUL ;
S_BALFULC=S9BALFULC ;
S_BALFULT=S9BALFULT ;
S_BALSBS=S9BALSBS ;
S_BALSBSC=S9BALSBSC ;
S_BALSEMI=S9BALSEMI ;
S_BALSEMIC=S9BALSEMIC ;
/* Empty map cell for: S1_BATH       variable wave =  9*/ ;
/* Empty map cell for: S2_BATH       variable wave =  9*/ ;
S_BATH=S9BATH ;
S_BATHA=S9BATHA ;
/* Empty map cell for: S2_BATHH      variable wave =  9*/ ;
S_BATHH=S9BATHH ;
/* Empty map cell for: S_BATHW       variable wave =  9*/ ;
S_BDATE=S9BDATE ;
/* Empty map cell for: S1_BED        variable wave =  9*/ ;
/* Empty map cell for: S2_BED        variable wave =  9*/ ;
S_BED=S9BED ;
S_BEDA=S9BEDA ;
S_BEDE=S9BEDE ;
/* Empty map cell for: S2_BEDH       variable wave =  9*/ ;
S_BEDH=S9BEDH ;
/* Empty map cell for: S_BEDW        variable wave =  9*/ ;
S_BEQ100=S9BEQ100 ;
S_BEQ10K=S9BEQ10K ;
S_BEQ500=S9BEQ500 ;
S_BEQANY=S9BEQANY ;
/* Empty map cell for: S_BEQLRG      variable wave =  9*/ ;
S_BFLAG=S9BFLAG ;
S_BMI=S9BMI ;
S_BMONTH=S9BMONTH ;
S_BPDIA=S9BPDIA ;
S_BPLACE=S9BPLACE ;
S_BPLACF=S9BPLACF ;
S_BPPOS=S9BPPOS ;
S_BPPULS=S9BPPULS ;
S_BPSYS=S9BPSYS ;
S_BREAST=S9BREAST ;
S_BWC20=S9BWC20 ;
/* Empty map cell for: S_BWC86       variable wave =  9*/ ;
S_BYEAR=S9BYEAR ;
S_CACT=S9CACT ;
/* Empty map cell for: S1_CALC       variable wave =  9*/ ;
/* Empty map cell for: S2_CALC       variable wave =  9*/ ;
/* Empty map cell for: S_CALCA       variable wave =  9*/ ;
/* Empty map cell for: S_CALCW       variable wave =  9*/ ;
S_CANCR=S9CANCR ;
S_CANCRE=S9CANCRE ;
S_CANCREF=S9CANCREF ;
S_CANCRF=S9CANCRF ;
S_CANCRQ=S9CANCRQ ;
S_CANCRS=S9CANCRS ;
S_CENDIV=S9CENDIV ;
S_CENREG=S9CENREG ;
S_CESD=S9CESD ;
S_CESDM=S9CESDM ;
/* Empty map cell for: S1_CHAIR      variable wave =  9*/ ;
/* Empty map cell for: S2_CHAIR      variable wave =  9*/ ;
S_CHAIR=S9CHAIR ;
S_CHAIRA=S9CHAIRA ;
/* Empty map cell for: S_CHAIRW      variable wave =  9*/ ;
S_CHOLST=S9CHOLST ;
/* Empty map cell for: S_CLAIMED     variable wave =  9*/ ;
/* Empty map cell for: S1_CLIM1      variable wave =  9*/ ;
/* Empty map cell for: S2_CLIM1      variable wave =  9*/ ;
S_CLIM1=S9CLIM1 ;
S_CLIM1A=S9CLIM1A ;
/* Empty map cell for: S_CLIM1W      variable wave =  9*/ ;
/* Empty map cell for: S1_CLIMS      variable wave =  9*/ ;
/* Empty map cell for: S2_CLIMS      variable wave =  9*/ ;
S_CLIMS=S9CLIMS ;
S_CLIMSA=S9CLIMSA ;
/* Empty map cell for: S_CLIMSW      variable wave =  9*/ ;
S_COGTOT=S9COGTOT ;
S_COHBYR=S9COHBYR ;
S_COHORT=S9COHORT ;
/* Empty map cell for: S_COMP        variable wave =  9*/ ;
/* Empty map cell for: S_COMPW       variable wave =  9*/ ;
S_CONDE=S9CONDE ;
S_CONDEF=S9CONDEF ;
S_CONDS=S9CONDS ;
S_CONDSF=S9CONDSF ;
S_CONDSP=S9CONDSP ;
S_COVR=S9COVR ;
S_COVRT=S9COVRT ;
S_COVS=S9COVS ;
S_DADAGE=S9DADAGE ;
S_DADLIV=S9DADLIV ;
S_DAGE_M=S9DAGE_M ;
S_DAGE_Y=S9DAGE_Y ;
S_DCBAL1=S9DCBAL1 ;
S_DCBAL2=S9DCBAL2 ;
S_DCBAL3=S9DCBAL3 ;
S_DCBAL4=S9DCBAL4 ;
S_DCBENE1=S9DCBENE1 ;
S_DCBENE2=S9DCBENE2 ;
S_DCBENE3=S9DCBENE3 ;
S_DCBENE4=S9DCBENE4 ;
S_DCCONT1=S9DCCONT1 ;
S_DCCONT2=S9DCCONT2 ;
S_DCCONT3=S9DCCONT3 ;
S_DCCONT4=S9DCCONT4 ;
S_DCMODE1=S9DCMODE1 ;
S_DCMODE2=S9DCMODE2 ;
S_DCMODE3=S9DCMODE3 ;
S_DCMODE4=S9DCMODE4 ;
S_DCPCT1=S9DCPCT1 ;
S_DCPCT2=S9DCPCT2 ;
S_DCPCT3=S9DCPCT3 ;
S_DCPCT4=S9DCPCT4 ;
S_DDATE=S9DDATE ;
/* Empty map cell for: S_DEMEN       variable wave =  9*/ ;
/* Empty map cell for: S_DEMENE      variable wave =  9*/ ;
/* Empty map cell for: S_DEMENEF     variable wave =  9*/ ;
/* Empty map cell for: S_DEMENF      variable wave =  9*/ ;
/* Empty map cell for: S_DEMENQ      variable wave =  9*/ ;
/* Empty map cell for: S_DEMENS      variable wave =  9*/ ;
S_DENTST=S9DENTST ;
S_DEPRES=S9DEPRES ;
/* Empty map cell for: S_DEPREX      variable wave =  9*/ ;
S_DIAB=S9DIAB ;
S_DIABE=S9DIABE ;
S_DIABEF=S9DIABEF ;
S_DIABF=S9DIABF ;
S_DIABQ=S9DIABQ ;
S_DIABS=S9DIABS ;
/* Empty map cell for: S1_DIME       variable wave =  9*/ ;
/* Empty map cell for: S2_DIME       variable wave =  9*/ ;
S_DIME=S9DIME ;
S_DIMEA=S9DIMEA ;
/* Empty map cell for: S_DIMEW       variable wave =  9*/ ;
S_DLRC=S9DLRC ;
/* Empty map cell for: S_DLRC20      variable wave =  9*/ ;
S_DMONTH=S9DMONTH ;
S_DOCTIM=S9DOCTIM ;
S_DOCTOR=S9DOCTOR ;
/* Empty map cell for: S1_DRESS      variable wave =  9*/ ;
/* Empty map cell for: S2_DRESS      variable wave =  9*/ ;
S_DRESS=S9DRESS ;
S_DRESSA=S9DRESSA ;
/* Empty map cell for: S2_DRESSH     variable wave =  9*/ ;
S_DRESSH=S9DRESSH ;
/* Empty map cell for: S_DRESSW      variable wave =  9*/ ;
S_DRINK=S9DRINK ;
S_DRINKD=S9DRINKD ;
S_DRINKN=S9DRINKN ;
/* Empty map cell for: S_DRINKR      variable wave =  9*/ ;
S_DRUGS=S9DRUGS ;
S_DSIAMT=S9DSIAMT ;
S_DSRC=S9DSRC ;
S_DSSAMT=S9DSSAMT ;
S_DSTAT=S9DSTAT ;
S_DTIMTDTH=S9DTIMTDTH ;
S_DW=S9DW ;
S_DY=S9DY ;
S_DYEAR=S9DYEAR ;
/* Empty map cell for: S1_EAT        variable wave =  9*/ ;
/* Empty map cell for: S2_EAT        variable wave =  9*/ ;
S_EAT=S9EAT ;
S_EATA=S9EATA ;
/* Empty map cell for: S2_EATH       variable wave =  9*/ ;
S_EATH=S9EATH ;
/* Empty map cell for: S_EATW        variable wave =  9*/ ;
S_EDEGRM=S9EDEGRM ;
S_EDUC=S9EDUC ;
S_EDYRS=S9EDYRS ;
S_EFFORT=S9EFFORT ;
/* Empty map cell for: S_EFFORX      variable wave =  9*/ ;
S_ENLIFE=S9ENLIFE ;
/* Empty map cell for: S_ENLIFX      variable wave =  9*/ ;
S_EVBRN=S9EVBRN ;
S_EVBRNF=S9EVBRNF ;
S_FAMR=S9FAMR ;
S_FBWC20=S9FBWC20 ;
/* Empty map cell for: S_FBWC86      variable wave =  9*/ ;
S_FCACT=S9FCACT ;
S_FDLRC=S9FDLRC ;
S_FDW=S9FDW ;
S_FDY=S9FDY ;
S_FEDUC=S9FEDUC ;
S_FIMRC=S9FIMRC ;
S_FINEA=S9FINEA ;
/* Empty map cell for: S_FINPLN      variable wave =  9*/ ;
S_FINR=S9FINR ;
/* Empty map cell for: S_FLAG        variable wave =  9*/ ;
S_FLONE=S9FLONE ;
/* Empty map cell for: S_FLONEX      variable wave =  9*/ ;
S_FLUSHT=S9FLUSHT ;
S_FMO=S9FMO ;
S_FPRES=S9FPRES ;
S_FPSTME=S9FPSTME ;
S_FSAD=S9FSAD ;
/* Empty map cell for: S_FSADX       variable wave =  9*/ ;
S_FSCIS=S9FSCIS ;
S_FSER7=S9FSER7 ;
S_FSIZE=S9FSIZE ;
S_FSIZEF=S9FSIZEF ;
S_FSLFME=S9FSLFME ;
S_FVOCAB=S9FVOCAB ;
S_FVP=S9FVP ;
S_FYR=S9FYR ;
S_GENDER=S9GENDER ;
S_GOING=S9GOING ;
/* Empty map cell for: S_GOINGX      variable wave =  9*/ ;
S_GOVMD=S9GOVMD ;
S_GOVMR=S9GOVMR ;
/* Empty map cell for: S_GOVOT       variable wave =  9*/ ;
S_GOVVA=S9GOVVA ;
S_GROSSA=S9GROSSA ;
S_GRP=S9GRP ;
S_GRPDOM=S9GRPDOM ;
S_GRPL=S9GRPL ;
S_GRPPOS=S9GRPPOS ;
S_GRPR=S9GRPR ;
S_HALUC=S9HALUC ;
/* Empty map cell for: S_HDLR20      variable wave =  9*/ ;
S_HEART=S9HEART ;
S_HEARTE=S9HEARTE ;
S_HEARTEF=S9HEARTEF ;
S_HEARTF=S9HEARTF ;
S_HEARTQ=S9HEARTQ ;
S_HEARTS=S9HEARTS ;
S_HECOV1=S9HECOV1 ;
S_HECOV2=S9HECOV2 ;
S_HECOV3=S9HECOV3 ;
S_HEIGHT=S9HEIGHT ;
S_HENUM=S9HENUM ;
S_HERET=S9HERET ;
S_HERTR1=S9HERTR1 ;
S_HERTR2=S9HERTR2 ;
S_HERTR3=S9HERTR3 ;
S_HERTS1=S9HERTS1 ;
S_HERTS2=S9HERTS2 ;
S_HERTS3=S9HERTS3 ;
S_HESRC1=S9HESRC1 ;
S_HESRC2=S9HESRC2 ;
S_HESRC3=S9HESRC3 ;
S_HHIDPN=S9HHIDPN ;
S_HIBP=S9HIBP ;
S_HIBPE=S9HIBPE ;
S_HIBPEF=S9HIBPEF ;
S_HIBPF=S9HIBPF ;
S_HIBPQ=S9HIBPQ ;
S_HIBPS=S9HIBPS ;
S_HIGOV=S9HIGOV ;
S_HILTC=S9HILTC ;
/* Empty map cell for: S_HIMR20      variable wave =  9*/ ;
S_HIOTHP=S9HIOTHP ;
S_HISPAN=S9HISPAN ;
S_HLPDYSF=S9HLPDYSF ;
S_HLPDYSNF=S9HLPDYSNF ;
S_HLPDYSP=S9HLPDYSP ;
S_HLPDYST=S9HLPDYST ;
S_HLPDYSU=S9HLPDYSU ;
S_HLPHRSF=S9HLPHRSF ;
S_HLPHRSNF=S9HLPHRSNF ;
S_HLPHRSP=S9HLPHRSP ;
S_HLPHRST=S9HLPHRST ;
S_HLPHRSU=S9HLPHRSU ;
S_HLPPDFA=S9HLPPDFA ;
S_HLPPDFN=S9HLPPDFN ;
S_HLPPDNFA=S9HLPPDNFA ;
S_HLPPDNFN=S9HLPPDNFN ;
S_HLPPDTA=S9HLPPDTA ;
S_HLPPDTN=S9HLPPDTN ;
S_HLPRFN=S9HLPRFN ;
S_HLPRNFN=S9HLPRNFN ;
S_HLPRPN=S9HLPRPN ;
S_HLPRTN=S9HLPRTN ;
S_HLPRUN=S9HLPRUN ;
S_HLTC3=S9HLTC3 ;
/* Empty map cell for: S_HLTC5       variable wave =  9*/ ;
/* Empty map cell for: S_HLTC5F      variable wave =  9*/ ;
S_HLTHLM=S9HLTHLM ;
S_HOMCAR=S9HOMCAR ;
S_HOSP=S9HOSP ;
S_HRSAMP=S9HRSAMP ;
S_HSPNIT=S9HSPNIT ;
S_HSPTIM=S9HSPTIM ;
/* Empty map cell for: S_HSWRKF      variable wave =  9*/ ;
/* Empty map cell for: S_HTR40       variable wave =  9*/ ;
S_IADL5A=S9IADL5A ;
S_IADL5H=S9IADL5H ;
S_IANN=S9IANN ;
S_IEARN=S9IEARN ;
S_IFANN=S9IFANN ;
S_IFEARN=S9IFEARN ;
S_IFGXFR=S9IFGXFR ;
S_IFIRAW=S9IFIRAW ;
/* Empty map cell for: S_IFIRAWY1    variable wave =  9*/ ;
S_IFPEN=S9IFPEN ;
S_IFPENA=S9IFPENA ;
S_IFSDI=S9IFSDI ;
S_IFSRET=S9IFSRET ;
S1_IFSSDI=S9IFSSDI ;
/* Empty map cell for: S_IFSSDI      variable wave =  9*/ ;
/* Empty map cell for: S_IFSSI       variable wave =  9*/ ;
S_IFUNEM=S9IFUNEM ;
S1_IFUNWC=S9IFUNWC ;
/* Empty map cell for: S2_IFUNWC     variable wave =  9*/ ;
S_IFWCMP=S9IFWCMP ;
S_IGXFR=S9IGXFR ;
S_IIRAW=S9IIRAW ;
S_IIRAWY1=S9IIRAWY1 ;
S_IMRC=S9IMRC ;
/* Empty map cell for: S_IMRC20      variable wave =  9*/ ;
/* Empty map cell for: S_INHER       variable wave =  9*/ ;
S_INHPE=S9INHPE ;
S_INHPFN=S9INHPFN ;
S_INHPNFN=S9INHPNFN ;
S_INHPPN=S9INHPPN ;
S_INHPTN=S9INHPTN ;
S_INHPUN=S9INHPUN ;
S_INLBRF=S9INLBRF ;
S_IPEN=S9IPEN ;
S_IPENA=S9IPENA ;
S_ISDI=S9ISDI ;
S_ISRET=S9ISRET ;
S_ISSDI=S9ISSDI ;
S_ISSI=S9ISSI ;
S_IUNEM=S9IUNEM ;
S_IUNWC=S9IUNWC ;
S_IWBEG=S9IWBEG ;
/* Empty map cell for: S_IWBEGF      variable wave =  9*/ ;
S_IWCMP=S9IWCMP ;
S_IWEND=S9IWEND ;
/* Empty map cell for: S_IWENDF      variable wave =  9*/ ;
S_IWENDM=S9IWENDM ;
S_IWENDY=S9IWENDY ;
S_IWMID=S9IWMID ;
S_IWMIDF=S9IWMIDF ;
S_IWSTAT=S9IWSTAT ;
S_JCIND=S9JCIND ;
S_JCINDB=S9JCINDB ;
/* Empty map cell for: S_JCINDC      variable wave =  9*/ ;
S_JCOCC=S9JCOCC ;
S_JCOCCA=S9JCOCCA ;
S_JCOCCB=S9JCOCCB ;
/* Empty map cell for: S_JCOCCC      variable wave =  9*/ ;
S_JCPEN=S9JCPEN ;
/* Empty map cell for: S_JCPENF      variable wave =  9*/ ;
S_JCTEN=S9JCTEN ;
S_JHOUR2=S9JHOUR2 ;
S_JHOURS=S9JHOURS ;
S_JJOBS=S9JJOBS ;
S_JLASTM=S9JLASTM ;
S_JLASTY=S9JLASTY ;
S_JLIFT=S9JLIFT ;
S_JLIND=S9JLIND ;
S_JLINDB=S9JLINDB ;
/* Empty map cell for: S_JLINDC      variable wave =  9*/ ;
S_JLMIS=S9JLMIS ;
S_JLOCC=S9JLOCC ;
S_JLOCCA=S9JLOCCA ;
S_JLOCCB=S9JLOCCB ;
/* Empty map cell for: S_JLOCCC      variable wave =  9*/ ;
S_JLTEN=S9JLTEN ;
S_JLTENF=S9JLTENF ;
S_JMISS=S9JMISS ;
S_JNJOB=S9JNJOB ;
S_JNJOB5=S9JNJOB5 ;
/* Empty map cell for: S1_JOG        variable wave =  9*/ ;
/* Empty map cell for: S2_JOG        variable wave =  9*/ ;
S_JOG=S9JOG ;
S_JOGA=S9JOGA ;
/* Empty map cell for: S_JOGW        variable wave =  9*/ ;
S_JPHYS=S9JPHYS ;
S_JSIGHT=S9JSIGHT ;
S_JSTOOP=S9JSTOOP ;
S_JSTRES=S9JSTRES ;
S_JWEEK2=S9JWEEK2 ;
S_JWEEKS=S9JWEEKS ;
S_JYEARM=S9JYEARM ;
S_JYEARS=S9JYEARS ;
S_LBAGR=S9LBAGR ;
/* Empty map cell for: S_LBASSISTPRB variable wave =  9*/ ;
S_LBCOMP=S9LBCOMP ;
/* Empty map cell for: S_LBCON10     variable wave =  9*/ ;
S_LBCON5=S9LBCON5 ;
S_LBELIG=S9LBELIG ;
S_LBEXT=S9LBEXT ;
/* Empty map cell for: S_LBFAMDRUGPRBvariable wave =  9*/ ;
/* Empty map cell for: S_LBFAMHLTHPRBvariable wave =  9*/ ;
/* Empty map cell for: S_LBFINPRB    variable wave =  9*/ ;
/* Empty map cell for: S_LBHLTHPRB   variable wave =  9*/ ;
/* Empty map cell for: S_LBHOUSEPRB  variable wave =  9*/ ;
S_LBLONELY11=S9LBLONELY11 ;
S_LBLONELY3=S9LBLONELY3 ;
S_LBNEGAFFECT=S9LBNEGAFFECT ;
/* Empty map cell for: S_LBNEGAFFECT6variable wave =  9*/ ;
S_LBNEUR=S9LBNEUR ;
/* Empty map cell for: S_LBONCHRSTR  variable wave =  9*/ ;
S_LBOPEN=S9LBOPEN ;
S_LBPOSAFFECT=S9LBPOSAFFECT ;
/* Empty map cell for: S_LBPOSAFFECT6variable wave =  9*/ ;
S_LBRF=S9LBRF ;
S_LBRFH=S9LBRFH ;
S_LBRFY=S9LBRFY ;
/* Empty map cell for: S_LBRLTNSHPRB variable wave =  9*/ ;
S_LBSATCITY=S9LBSATCITY ;
S_LBSATFAM=S9LBSATFAM ;
S_LBSATFIN=S9LBSATFIN ;
S_LBSATHLTH=S9LBSATHLTH ;
S_LBSATHOME=S9LBSATHOME ;
/* Empty map cell for: S_LBSATINC    variable wave =  9*/ ;
S_LBSATLEISURE=S9LBSATLEISURE ;
S_LBSATLIFE=S9LBSATLIFE ;
S_LBSATWLF=S9LBSATWLF ;
S_LBWGTR=S9LBWGTR ;
/* Empty map cell for: S_LBWORKPRB   variable wave =  9*/ ;
S_LGMUSA=S9LGMUSA ;
/* Empty map cell for: S_LGMUSW      variable wave =  9*/ ;
/* Empty map cell for: S_LHTACT      variable wave =  9*/ ;
S_LIFEIN=S9LIFEIN ;
/* Empty map cell for: S1_LIFT       variable wave =  9*/ ;
/* Empty map cell for: S2_LIFT       variable wave =  9*/ ;
S_LIFT=S9LIFT ;
S_LIFTA=S9LIFTA ;
/* Empty map cell for: S_LIFTW       variable wave =  9*/ ;
S_LIV10=S9LIV10 ;
S_LIV10A=S9LIV10A ;
S_LIV10P=S9LIV10P ;
S_LIV10R=S9LIV10R ;
S_LIV75=S9LIV75 ;
S_LIV75C=S9LIV75C ;
S_LIV75F=S9LIV75F ;
S_LIV75P=S9LIV75P ;
S_LIV75R=S9LIV75R ;
/* Empty map cell for: S_LIV85       variable wave =  9*/ ;
/* Empty map cell for: S_LIV85C      variable wave =  9*/ ;
/* Empty map cell for: S_LIV85F      variable wave =  9*/ ;
/* Empty map cell for: S_LIV85P      variable wave =  9*/ ;
/* Empty map cell for: S_LIV85R      variable wave =  9*/ ;
S_LIV8XC=S9LIV8XC ;
S_LIV8XF=S9LIV8XF ;
S_LIVBRO=S9LIVBRO ;
S_LIVPAR=S9LIVPAR ;
S_LIVSIB=S9LIVSIB ;
S_LIVSIS=S9LIVSIS ;
S_LOST=S9LOST ;
/* Empty map cell for: S_LTACTF      variable wave =  9*/ ;
/* Empty map cell for: S_LTACTN      variable wave =  9*/ ;
/* Empty map cell for: S_LTACTP      variable wave =  9*/ ;
S_LTACTX=S9LTACTX ;
S_LTCPRM=S9LTCPRM ;
S_LUNG=S9LUNG ;
S_LUNGE=S9LUNGE ;
S_LUNGEF=S9LUNGEF ;
S_LUNGF=S9LUNGF ;
S_LUNGQ=S9LUNGQ ;
S_LUNGS=S9LUNGS ;
S_MAMMOG=S9MAMMOG ;
/* Empty map cell for: S1_MAP        variable wave =  9*/ ;
/* Empty map cell for: S2_MAP        variable wave =  9*/ ;
S_MAP=S9MAP ;
S_MAPA=S9MAPA ;
/* Empty map cell for: S_MAPW        variable wave =  9*/ ;
S_MCURLN=S9MCURLN ;
/* Empty map cell for: S_MCWV        variable wave =  9*/ ;
/* Empty map cell for: S_MCWVW       variable wave =  9*/ ;
S_MDACTX=S9MDACTX ;
S_MDIV=S9MDIV ;
S_MEALS=S9MEALS ;
S_MEALSA=S9MEALSA ;
S_MEALSH=S9MEALSH ;
/* Empty map cell for: S_MEALSR      variable wave =  9*/ ;
/* Empty map cell for: S2_MEDS       variable wave =  9*/ ;
S_MEDS=S9MEDS ;
S_MEDSA=S9MEDSA ;
S_MEDSH=S9MEDSH ;
/* Empty map cell for: S_MEDSR       variable wave =  9*/ ;
S_MEDUC=S9MEDUC ;
S_MEMRY=S9MEMRY ;
S_MEMRYE=S9MEMRYE ;
S_MEMRYEF=S9MEMRYEF ;
S_MEMRYF=S9MEMRYF ;
S_MEMRYQ=S9MEMRYQ ;
S_MEMRYS=S9MEMRYS ;
S_MEND=S9MEND ;
S_MLEN=S9MLEN ;
S_MLENM=S9MLENM ;
S_MNEV=S9MNEV ;
S_MO=S9MO ;
S_MOBILA=S9MOBILA ;
/* Empty map cell for: S_MOBILW      variable wave =  9*/ ;
S_MOMAGE=S9MOMAGE ;
S_MOMLIV=S9MOMLIV ;
/* Empty map cell for: S2_MONEY      variable wave =  9*/ ;
S_MONEY=S9MONEY ;
S_MONEYA=S9MONEYA ;
S_MONEYH=S9MONEYH ;
/* Empty map cell for: S_MONEYR      variable wave =  9*/ ;
S_MPART=S9MPART ;
S_MRCT=S9MRCT ;
S_MRPREM=S9MRPREM ;
S_MSTAT=S9MSTAT ;
S_MSTATF=S9MSTATF ;
S_MSTATH=S9MSTATH ;
S_MSTOT=S9MSTOT ;
S_MWID=S9MWID ;
S_NHMDAY=S9NHMDAY ;
S_NHMLIV=S9NHMLIV ;
S_NHMMVM=S9NHMMVM ;
S_NHMMVY=S9NHMMVY ;
S_NOTICS=S9NOTICS ;
S_NOVOC=S9NOVOC ;
S_NRSHOM=S9NRSHOM ;
S_NRSNIT=S9NRSNIT ;
S_NRSTIM=S9NRSTIM ;
/* Empty map cell for: S_NSSCRE      variable wave =  9*/ ;
/* Empty map cell for: S_NSSCSE      variable wave =  9*/ ;
S_OAHDID=S9OAHDID ;
S_OHRSID=S9OHRSID ;
S_OOPMD=S9OOPMD ;
S_OOPMDF=S9OOPMDF ;
/* Empty map cell for: S_OOPMDO      variable wave =  9*/ ;
/* Empty map cell for: S_OOPMDOF     variable wave =  9*/ ;
S_OUTPT=S9OUTPT ;
S_PAPSM=S9PAPSM ;
/* Empty map cell for: S_PARTD       variable wave =  9*/ ;
S_PENCT=S9PENCT ;
S_PENIC1=S9PENIC1 ;
S_PENIC2=S9PENIC2 ;
S_PENINC=S9PENINC ;
S_PENI_N=S9PENI_N ;
/* Empty map cell for: S2_PHONE      variable wave =  9*/ ;
S_PHONE=S9PHONE ;
S_PHONEA=S9PHONEA ;
S_PHONEH=S9PHONEH ;
/* Empty map cell for: S_PHONER      variable wave =  9*/ ;
S_PMBMI=S9PMBMI ;
S_PMHGHT=S9PMHGHT ;
S_PMHGHTS=S9PMHGHTS ;
S_PMWAIST=S9PMWAIST ;
S_PMWAISTC=S9PMWAISTC ;
S_PMWGHT=S9PMWGHT ;
S_PMWGHTF=S9PMWGHTF ;
S_PMWGHTS=S9PMWGHTS ;
S_PNHM5Y=S9PNHM5Y ;
S_PRCHMEM=S9PRCHMEM ;
S_PRES=S9PRES ;
S_PRMEM=S9PRMEM ;
S_PROST=S9PROST ;
S_PROXY=S9PROXY ;
S_PRPCNT=S9PRPCNT ;
S_PRPRM1=S9PRPRM1 ;
S_PRPRM2=S9PRPRM2 ;
S_PRPRM3=S9PRPRM3 ;
S_PRSRC1=S9PRSRC1 ;
S_PRSRC2=S9PRSRC2 ;
S_PRSRC3=S9PRSRC3 ;
S_PSTMEM=S9PSTMEM ;
S_PSYCH=S9PSYCH ;
S_PSYCHE=S9PSYCHE ;
S_PSYCHEF=S9PSYCHEF ;
S_PSYCHF=S9PSYCHF ;
S_PSYCHQ=S9PSYCHQ ;
S_PSYCHS=S9PSYCHS ;
S_PTYP1=S9PTYP1 ;
S_PTYP2=S9PTYP2 ;
S_PTYP3=S9PTYP3 ;
S_PTYP4=S9PTYP4 ;
S_PTYPD1=S9PTYPD1 ;
S_PTYPD2=S9PTYPD2 ;
S_PTYPD3=S9PTYPD3 ;
S_PTYPD4=S9PTYPD4 ;
S_PTYPF1=S9PTYPF1 ;
S_PTYPF2=S9PTYPF2 ;
S_PTYPF3=S9PTYPF3 ;
S_PTYPF4=S9PTYPF4 ;
S_PUFF=S9PUFF ;
S_PUFFPOS=S9PUFFPOS ;
/* Empty map cell for: S1_PUSH       variable wave =  9*/ ;
/* Empty map cell for: S2_PUSH       variable wave =  9*/ ;
S_PUSH=S9PUSH ;
S_PUSHA=S9PUSHA ;
/* Empty map cell for: S_PUSHW       variable wave =  9*/ ;
S_RACEM=S9RACEM ;
S_RELIG=S9RELIG ;
S_RETDTWV=S9RETDTWV ;
S_RETEMP=S9RETEMP ;
/* Empty map cell for: S_RETINC      variable wave =  9*/ ;
/* Empty map cell for: S_RETLIV      variable wave =  9*/ ;
S_RETMON=S9RETMON ;
S_RETSAT=S9RETSAT ;
/* Empty map cell for: S_RETWLT      variable wave =  9*/ ;
/* Empty map cell for: S_RETWRK      variable wave =  9*/ ;
/* Empty map cell for: S_RETWSP      variable wave =  9*/ ;
S_RETYR=S9RETYR ;
/* Empty map cell for: S_RISK        variable wave =  9*/ ;
/* Empty map cell for: S_RISK6       variable wave =  9*/ ;
S_RPLNYA=S9RPLNYA ;
S_RPLNYR=S9RPLNYR ;
S_RXPREM=S9RXPREM ;
S_RYRCMP=S9RYRCMP ;
S_SADLF=S9SADLF ;
S_SAMEJOB=S9SAMEJOB ;
S_SAMEMP=S9SAMEMP ;
S_SAYRET=S9SAYRET ;
S_SCIS=S9SCIS ;
S_SDIAPL=S9SDIAPL ;
S_SDIAPLM=S9SDIAPLM ;
S_SDIAPLY=S9SDIAPLY ;
S_SDIAPP=S9SDIAPP ;
S_SDIAPPM=S9SDIAPPM ;
S_SDIAPPY=S9SDIAPPY ;
S_SDIDEN=S9SDIDEN ;
S_SDIREC=S9SDIREC ;
S_SDIRECM=S9SDIRECM ;
S_SDIRECY=S9SDIRECY ;
S_SDISTP=S9SDISTP ;
S_SDISTPM=S9SDISTPM ;
S_SDISTPY=S9SDISTPY ;
S_SER7=S9SER7 ;
S_SHLT=S9SHLT ;
S_SHLTC=S9SHLTC ;
S_SHLTCF=S9SHLTCF ;
S_SHOP=S9SHOP ;
S_SHOPA=S9SHOPA ;
S_SHOPH=S9SHOPH ;
/* Empty map cell for: S_SHOPR       variable wave =  9*/ ;
/* Empty map cell for: S1_SIT        variable wave =  9*/ ;
/* Empty map cell for: S2_SIT        variable wave =  9*/ ;
S_SIT=S9SIT ;
S_SITA=S9SITA ;
/* Empty map cell for: S_SITW        variable wave =  9*/ ;
/* Empty map cell for: S_SLEEP       variable wave =  9*/ ;
/* Empty map cell for: S_SLEEPE      variable wave =  9*/ ;
/* Empty map cell for: S_SLEEPEF     variable wave =  9*/ ;
/* Empty map cell for: S_SLEEPQ      variable wave =  9*/ ;
S_SLEEPR=S9SLEEPR ;
/* Empty map cell for: S_SLEEPS      variable wave =  9*/ ;
/* Empty map cell for: S_SLEEPX      variable wave =  9*/ ;
S_SLFEMP=S9SLFEMP ;
S_SLFMEM=S9SLFMEM ;
S_SMOKEN=S9SMOKEN ;
S_SMOKEV=S9SMOKEV ;
S_SPCFAC=S9SPCFAC ;
/* Empty map cell for: S_SSAPL       variable wave =  9*/ ;
/* Empty map cell for: S_SSAPLM      variable wave =  9*/ ;
/* Empty map cell for: S_SSAPLY      variable wave =  9*/ ;
/* Empty map cell for: S_SSAPP       variable wave =  9*/ ;
/* Empty map cell for: S_SSAPPM      variable wave =  9*/ ;
/* Empty map cell for: S_SSAPPY      variable wave =  9*/ ;
/* Empty map cell for: S_SSDEN       variable wave =  9*/ ;
S_SSDI=S9SSDI ;
S_SSIAPL=S9SSIAPL ;
S_SSIAPLM=S9SSIAPLM ;
S_SSIAPLY=S9SSIAPLY ;
S_SSIAPP=S9SSIAPP ;
S_SSIAPPM=S9SSIAPPM ;
S_SSIAPPY=S9SSIAPPY ;
S_SSIDEN=S9SSIDEN ;
S_SSIREC=S9SSIREC ;
S_SSIRECM=S9SSIRECM ;
S_SSIRECY=S9SSIRECY ;
S_SSISTP=S9SSISTP ;
S_SSISTPM=S9SSISTPM ;
S_SSISTPY=S9SSISTPY ;
/* Empty map cell for: S_SSREC       variable wave =  9*/ ;
/* Empty map cell for: S_SSRECM      variable wave =  9*/ ;
/* Empty map cell for: S_SSRECY      variable wave =  9*/ ;
/* Empty map cell for: S_SSSTP       variable wave =  9*/ ;
/* Empty map cell for: S_SSSTPM      variable wave =  9*/ ;
/* Empty map cell for: S_SSSTPY      variable wave =  9*/ ;
/* Empty map cell for: S_SSWRER      variable wave =  9*/ ;
/* Empty map cell for: S_SSWRNR      variable wave =  9*/ ;
/* Empty map cell for: S_SSWRXA      variable wave =  9*/ ;
/* Empty map cell for: S_SSWSER      variable wave =  9*/ ;
/* Empty map cell for: S_SSWSNR      variable wave =  9*/ ;
/* Empty map cell for: S_SSWSXA      variable wave =  9*/ ;
S_STATUS=S9STATUS ;
/* Empty map cell for: S1_STOOP      variable wave =  9*/ ;
/* Empty map cell for: S2_STOOP      variable wave =  9*/ ;
S_STOOP=S9STOOP ;
S_STOOPA=S9STOOPA ;
/* Empty map cell for: S_STOOPW      variable wave =  9*/ ;
S_STROK=S9STROK ;
S_STROKE=S9STROKE ;
S_STROKEF=S9STROKEF ;
S_STROKF=S9STROKF ;
S_STROKQ=S9STROKQ ;
S_STROKS=S9STROKS ;
S_TIMWLK=S9TIMWLK ;
S_TIMWLKA=S9TIMWLKA ;
/* Empty map cell for: S_TLIPRM      variable wave =  9*/ ;
/* Empty map cell for: S2_TOILT      variable wave =  9*/ ;
S_TOILT=S9TOILT ;
S_TOILTA=S9TOILTA ;
/* Empty map cell for: S2_TOILTH     variable wave =  9*/ ;
S_TOILTH=S9TOILTH ;
/* Empty map cell for: S_TOTMBF      variable wave =  9*/ ;
/* Empty map cell for: S_TOTMBI      variable wave =  9*/ ;
/* Empty map cell for: S_TOTMD       variable wave =  9*/ ;
/* Empty map cell for: S_TOTMDF      variable wave =  9*/ ;
S_TR20=S9TR20 ;
/* Empty map cell for: S_TR40        variable wave =  9*/ ;
S_TYLTC=S9TYLTC ;
/* Empty map cell for: S_ULCER       variable wave =  9*/ ;
S_UNEMP=S9UNEMP ;
S_UNION=S9UNION ;
S_UNIONF=S9UNIONF ;
S_VETRN=S9VETRN ;
/* Empty map cell for: S_VGACTF      variable wave =  9*/ ;
/* Empty map cell for: S_VGACTN      variable wave =  9*/ ;
/* Empty map cell for: S_VGACTP      variable wave =  9*/ ;
S_VGACTX=S9VGACTX ;
/* Empty map cell for: S_VIGACT      variable wave =  9*/ ;
S_VOCAB=S9VOCAB ;
S_VP=S9VP ;
/* Empty map cell for: S1_WALK1      variable wave =  9*/ ;
/* Empty map cell for: S2_WALK1      variable wave =  9*/ ;
S_WALK1=S9WALK1 ;
S_WALK1A=S9WALK1A ;
/* Empty map cell for: S_WALK1W      variable wave =  9*/ ;
/* Empty map cell for: S1_WALKR      variable wave =  9*/ ;
/* Empty map cell for: S2_WALKR      variable wave =  9*/ ;
S_WALKR=S9WALKR ;
S_WALKRA=S9WALKRA ;
S_WALKRE=S9WALKRE ;
/* Empty map cell for: S2_WALKRH     variable wave =  9*/ ;
S_WALKRH=S9WALKRH ;
/* Empty map cell for: S_WALKRW      variable wave =  9*/ ;
/* Empty map cell for: S1_WALKS      variable wave =  9*/ ;
/* Empty map cell for: S2_WALKS      variable wave =  9*/ ;
S_WALKS=S9WALKS ;
S_WALKSA=S9WALKSA ;
/* Empty map cell for: S_WALKSW      variable wave =  9*/ ;
S_WANDER=S9WANDER ;
S_WEIGHT=S9WEIGHT ;
S_WGFHR=S9WGFHR ;
S_WGFWK=S9WGFWK ;
S_WGIHR=S9WGIHR ;
S_WGIWK=S9WGIWK ;
/* Empty map cell for: S_WHAPPX      variable wave =  9*/ ;
S_WHAPPY=S9WHAPPY ;
S_WLIPRM=S9WLIPRM ;
S_WORK=S9WORK ;
S_WORK2=S9WORK2 ;
S_WORK62=S9WORK62 ;
S_WORK62F=S9WORK62F ;
S_WORK65=S9WORK65 ;
S_WORK65F=S9WORK65F ;
/* Empty map cell for: S_WORK70      variable wave =  9*/ ;
/* Empty map cell for: S_WORK70A     variable wave =  9*/ ;
/* Empty map cell for: S_WORK70AF    variable wave =  9*/ ;
/* Empty map cell for: S_WORK70F     variable wave =  9*/ ;
/* Empty map cell for: S_WORKLM      variable wave =  9*/ ;
S_WTCRNH=S9WTCRNH ;
S_WTRESP=S9WTRESP ;
S_WTR_NH=S9WTR_NH ;
S_YR=S9YR ;
if inw=1 then output ;
%put --- Slong table ;
%initvars ;
%put ---- Slong table ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
/* --- RAND variable:HHIDPN  included */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
/* --- RAND variable:HACOHORT  included */ ;
WAVE_NUMBER=10 ;
WAVE_NAME=  'hrs_wave'||strip(put(wave_number,3.))     /* --- Derived variable  */ ;
studyyr= hrs_studyyr(wave_number,
hacohort)     /* --- Derived variable  */ ;
CYEAR='yr2010' ;
H_HHID=H10HHID ;
H_HHIDC=H10HHIDC ;
SUBHH= substr(H_HHIDC,7)     /* --- Derived variable  */ ;
INW=INW10 ;
S_HHIDPN=S10HHIDPN ;
/* --- RAND variable:SASSAGEB  included */ ;
/* --- RAND variable:SASSAGEM  included */ ;
/* --- RAND variable:SASSRECV  included */ ;
/* Empty map cell for: S_ACGTOT      variable wave = 10*/ ;
S_ADL5A=S10ADL5A ;
S_ADL5H=S10ADL5H ;
S_ADL6A=S10ADL6A ;
S_ADL6H=S10ADL6H ;
/* Empty map cell for: S_ADLR10      variable wave = 10*/ ;
/* Empty map cell for: S_ADLW        variable wave = 10*/ ;
S_AGEM_B=S10AGEM_B ;
S_AGEM_E=S10AGEM_E ;
S_AGEM_M=S10AGEM_M ;
S_AGEY_B=S10AGEY_B ;
S_AGEY_E=S10AGEY_E ;
S_AGEY_M=S10AGEY_M ;
S_AHDSMP=S10AHDSMP ;
/* Empty map cell for: S_AIMR10      variable wave = 10*/ ;
S_ALONE=S10ALONE ;
S_ALZHE=S10ALZHE ;
S_ALZHEE=S10ALZHEE ;
S_ALZHEEF=S10ALZHEEF ;
/* Empty map cell for: S_ALZHEF      variable wave = 10*/ ;
S_ALZHEQ=S10ALZHEQ ;
/* Empty map cell for: S_ALZHES      variable wave = 10*/ ;
/* Empty map cell for: S_AMSTOT      variable wave = 10*/ ;
S_ANS3PQ=S10ANS3PQ ;
/* Empty map cell for: S1_ARMS       variable wave = 10*/ ;
/* Empty map cell for: S2_ARMS       variable wave = 10*/ ;
S_ARMS=S10ARMS ;
S_ARMSA=S10ARMSA ;
/* Empty map cell for: S_ARMSW       variable wave = 10*/ ;
S_ARTHR=S10ARTHR ;
S_ARTHRE=S10ARTHRE ;
S_ARTHREF=S10ARTHREF ;
S_ARTHRF=S10ARTHRF ;
S_ARTHRQ=S10ARTHRQ ;
S_ARTHRS=S10ARTHRS ;
/* Empty map cell for: S_ATR20       variable wave = 10*/ ;
S_BACK=S10BACK ;
S_BALFUL=S10BALFUL ;
S_BALFULC=S10BALFULC ;
S_BALFULT=S10BALFULT ;
S_BALSBS=S10BALSBS ;
S_BALSBSC=S10BALSBSC ;
S_BALSEMI=S10BALSEMI ;
S_BALSEMIC=S10BALSEMIC ;
/* Empty map cell for: S1_BATH       variable wave = 10*/ ;
/* Empty map cell for: S2_BATH       variable wave = 10*/ ;
S_BATH=S10BATH ;
S_BATHA=S10BATHA ;
/* Empty map cell for: S2_BATHH      variable wave = 10*/ ;
S_BATHH=S10BATHH ;
/* Empty map cell for: S_BATHW       variable wave = 10*/ ;
S_BDATE=S10BDATE ;
/* Empty map cell for: S1_BED        variable wave = 10*/ ;
/* Empty map cell for: S2_BED        variable wave = 10*/ ;
S_BED=S10BED ;
S_BEDA=S10BEDA ;
S_BEDE=S10BEDE ;
/* Empty map cell for: S2_BEDH       variable wave = 10*/ ;
S_BEDH=S10BEDH ;
/* Empty map cell for: S_BEDW        variable wave = 10*/ ;
S_BEQ100=S10BEQ100 ;
S_BEQ10K=S10BEQ10K ;
S_BEQ500=S10BEQ500 ;
S_BEQANY=S10BEQANY ;
/* Empty map cell for: S_BEQLRG      variable wave = 10*/ ;
S_BFLAG=S10BFLAG ;
S_BMI=S10BMI ;
S_BMONTH=S10BMONTH ;
S_BPDIA=S10BPDIA ;
S_BPLACE=S10BPLACE ;
S_BPLACF=S10BPLACF ;
S_BPPOS=S10BPPOS ;
S_BPPULS=S10BPPULS ;
S_BPSYS=S10BPSYS ;
S_BREAST=S10BREAST ;
S_BWC20=S10BWC20 ;
/* Empty map cell for: S_BWC86       variable wave = 10*/ ;
S_BYEAR=S10BYEAR ;
S_CACT=S10CACT ;
/* Empty map cell for: S1_CALC       variable wave = 10*/ ;
/* Empty map cell for: S2_CALC       variable wave = 10*/ ;
/* Empty map cell for: S_CALCA       variable wave = 10*/ ;
/* Empty map cell for: S_CALCW       variable wave = 10*/ ;
S_CANCR=S10CANCR ;
S_CANCRE=S10CANCRE ;
S_CANCREF=S10CANCREF ;
S_CANCRF=S10CANCRF ;
S_CANCRQ=S10CANCRQ ;
S_CANCRS=S10CANCRS ;
S_CENDIV=S10CENDIV ;
S_CENREG=S10CENREG ;
S_CESD=S10CESD ;
S_CESDM=S10CESDM ;
/* Empty map cell for: S1_CHAIR      variable wave = 10*/ ;
/* Empty map cell for: S2_CHAIR      variable wave = 10*/ ;
S_CHAIR=S10CHAIR ;
S_CHAIRA=S10CHAIRA ;
/* Empty map cell for: S_CHAIRW      variable wave = 10*/ ;
S_CHOLST=S10CHOLST ;
S_CLAIMED=S10CLAIMED ;
/* Empty map cell for: S1_CLIM1      variable wave = 10*/ ;
/* Empty map cell for: S2_CLIM1      variable wave = 10*/ ;
S_CLIM1=S10CLIM1 ;
S_CLIM1A=S10CLIM1A ;
/* Empty map cell for: S_CLIM1W      variable wave = 10*/ ;
/* Empty map cell for: S1_CLIMS      variable wave = 10*/ ;
/* Empty map cell for: S2_CLIMS      variable wave = 10*/ ;
S_CLIMS=S10CLIMS ;
S_CLIMSA=S10CLIMSA ;
/* Empty map cell for: S_CLIMSW      variable wave = 10*/ ;
S_COGTOT=S10COGTOT ;
S_COHBYR=S10COHBYR ;
S_COHORT=S10COHORT ;
/* Empty map cell for: S_COMP        variable wave = 10*/ ;
/* Empty map cell for: S_COMPW       variable wave = 10*/ ;
S_CONDE=S10CONDE ;
S_CONDEF=S10CONDEF ;
S_CONDS=S10CONDS ;
S_CONDSF=S10CONDSF ;
S_CONDSP=S10CONDSP ;
S_COVR=S10COVR ;
S_COVRT=S10COVRT ;
S_COVS=S10COVS ;
S_DADAGE=S10DADAGE ;
S_DADLIV=S10DADLIV ;
S_DAGE_M=S10DAGE_M ;
S_DAGE_Y=S10DAGE_Y ;
S_DCBAL1=S10DCBAL1 ;
S_DCBAL2=S10DCBAL2 ;
S_DCBAL3=S10DCBAL3 ;
S_DCBAL4=S10DCBAL4 ;
S_DCBENE1=S10DCBENE1 ;
S_DCBENE2=S10DCBENE2 ;
S_DCBENE3=S10DCBENE3 ;
S_DCBENE4=S10DCBENE4 ;
S_DCCONT1=S10DCCONT1 ;
S_DCCONT2=S10DCCONT2 ;
S_DCCONT3=S10DCCONT3 ;
S_DCCONT4=S10DCCONT4 ;
S_DCMODE1=S10DCMODE1 ;
S_DCMODE2=S10DCMODE2 ;
S_DCMODE3=S10DCMODE3 ;
S_DCMODE4=S10DCMODE4 ;
S_DCPCT1=S10DCPCT1 ;
S_DCPCT2=S10DCPCT2 ;
S_DCPCT3=S10DCPCT3 ;
S_DCPCT4=S10DCPCT4 ;
S_DDATE=S10DDATE ;
S_DEMEN=S10DEMEN ;
S_DEMENE=S10DEMENE ;
S_DEMENEF=S10DEMENEF ;
/* Empty map cell for: S_DEMENF      variable wave = 10*/ ;
S_DEMENQ=S10DEMENQ ;
/* Empty map cell for: S_DEMENS      variable wave = 10*/ ;
S_DENTST=S10DENTST ;
S_DEPRES=S10DEPRES ;
/* Empty map cell for: S_DEPREX      variable wave = 10*/ ;
S_DIAB=S10DIAB ;
S_DIABE=S10DIABE ;
S_DIABEF=S10DIABEF ;
S_DIABF=S10DIABF ;
S_DIABQ=S10DIABQ ;
S_DIABS=S10DIABS ;
/* Empty map cell for: S1_DIME       variable wave = 10*/ ;
/* Empty map cell for: S2_DIME       variable wave = 10*/ ;
S_DIME=S10DIME ;
S_DIMEA=S10DIMEA ;
/* Empty map cell for: S_DIMEW       variable wave = 10*/ ;
S_DLRC=S10DLRC ;
/* Empty map cell for: S_DLRC20      variable wave = 10*/ ;
S_DMONTH=S10DMONTH ;
S_DOCTIM=S10DOCTIM ;
S_DOCTOR=S10DOCTOR ;
/* Empty map cell for: S1_DRESS      variable wave = 10*/ ;
/* Empty map cell for: S2_DRESS      variable wave = 10*/ ;
S_DRESS=S10DRESS ;
S_DRESSA=S10DRESSA ;
/* Empty map cell for: S2_DRESSH     variable wave = 10*/ ;
S_DRESSH=S10DRESSH ;
/* Empty map cell for: S_DRESSW      variable wave = 10*/ ;
S_DRINK=S10DRINK ;
S_DRINKD=S10DRINKD ;
S_DRINKN=S10DRINKN ;
/* Empty map cell for: S_DRINKR      variable wave = 10*/ ;
S_DRUGS=S10DRUGS ;
S_DSIAMT=S10DSIAMT ;
S_DSRC=S10DSRC ;
S_DSSAMT=S10DSSAMT ;
S_DSTAT=S10DSTAT ;
S_DTIMTDTH=S10DTIMTDTH ;
S_DW=S10DW ;
S_DY=S10DY ;
S_DYEAR=S10DYEAR ;
/* Empty map cell for: S1_EAT        variable wave = 10*/ ;
/* Empty map cell for: S2_EAT        variable wave = 10*/ ;
S_EAT=S10EAT ;
S_EATA=S10EATA ;
/* Empty map cell for: S2_EATH       variable wave = 10*/ ;
S_EATH=S10EATH ;
/* Empty map cell for: S_EATW        variable wave = 10*/ ;
S_EDEGRM=S10EDEGRM ;
S_EDUC=S10EDUC ;
S_EDYRS=S10EDYRS ;
S_EFFORT=S10EFFORT ;
/* Empty map cell for: S_EFFORX      variable wave = 10*/ ;
S_ENLIFE=S10ENLIFE ;
/* Empty map cell for: S_ENLIFX      variable wave = 10*/ ;
S_EVBRN=S10EVBRN ;
S_EVBRNF=S10EVBRNF ;
S_FAMR=S10FAMR ;
S_FBWC20=S10FBWC20 ;
/* Empty map cell for: S_FBWC86      variable wave = 10*/ ;
S_FCACT=S10FCACT ;
S_FDLRC=S10FDLRC ;
S_FDW=S10FDW ;
S_FDY=S10FDY ;
S_FEDUC=S10FEDUC ;
S_FIMRC=S10FIMRC ;
S_FINEA=S10FINEA ;
/* Empty map cell for: S_FINPLN      variable wave = 10*/ ;
S_FINR=S10FINR ;
/* Empty map cell for: S_FLAG        variable wave = 10*/ ;
S_FLONE=S10FLONE ;
/* Empty map cell for: S_FLONEX      variable wave = 10*/ ;
S_FLUSHT=S10FLUSHT ;
S_FMO=S10FMO ;
S_FPRES=S10FPRES ;
S_FPSTME=S10FPSTME ;
S_FSAD=S10FSAD ;
/* Empty map cell for: S_FSADX       variable wave = 10*/ ;
S_FSCIS=S10FSCIS ;
S_FSER7=S10FSER7 ;
S_FSIZE=S10FSIZE ;
S_FSIZEF=S10FSIZEF ;
S_FSLFME=S10FSLFME ;
S_FVOCAB=S10FVOCAB ;
S_FVP=S10FVP ;
S_FYR=S10FYR ;
S_GENDER=S10GENDER ;
S_GOING=S10GOING ;
/* Empty map cell for: S_GOINGX      variable wave = 10*/ ;
S_GOVMD=S10GOVMD ;
S_GOVMR=S10GOVMR ;
/* Empty map cell for: S_GOVOT       variable wave = 10*/ ;
S_GOVVA=S10GOVVA ;
S_GROSSA=S10GROSSA ;
S_GRP=S10GRP ;
S_GRPDOM=S10GRPDOM ;
S_GRPL=S10GRPL ;
S_GRPPOS=S10GRPPOS ;
S_GRPR=S10GRPR ;
S_HALUC=S10HALUC ;
/* Empty map cell for: S_HDLR20      variable wave = 10*/ ;
S_HEART=S10HEART ;
S_HEARTE=S10HEARTE ;
S_HEARTEF=S10HEARTEF ;
S_HEARTF=S10HEARTF ;
S_HEARTQ=S10HEARTQ ;
S_HEARTS=S10HEARTS ;
S_HECOV1=S10HECOV1 ;
S_HECOV2=S10HECOV2 ;
S_HECOV3=S10HECOV3 ;
S_HEIGHT=S10HEIGHT ;
S_HENUM=S10HENUM ;
S_HERET=S10HERET ;
S_HERTR1=S10HERTR1 ;
S_HERTR2=S10HERTR2 ;
S_HERTR3=S10HERTR3 ;
S_HERTS1=S10HERTS1 ;
S_HERTS2=S10HERTS2 ;
S_HERTS3=S10HERTS3 ;
S_HESRC1=S10HESRC1 ;
S_HESRC2=S10HESRC2 ;
S_HESRC3=S10HESRC3 ;
S_HHIDPN=S10HHIDPN ;
S_HIBP=S10HIBP ;
S_HIBPE=S10HIBPE ;
S_HIBPEF=S10HIBPEF ;
S_HIBPF=S10HIBPF ;
S_HIBPQ=S10HIBPQ ;
S_HIBPS=S10HIBPS ;
S_HIGOV=S10HIGOV ;
S_HILTC=S10HILTC ;
/* Empty map cell for: S_HIMR20      variable wave = 10*/ ;
S_HIOTHP=S10HIOTHP ;
S_HISPAN=S10HISPAN ;
S_HLPDYSF=S10HLPDYSF ;
S_HLPDYSNF=S10HLPDYSNF ;
S_HLPDYSP=S10HLPDYSP ;
S_HLPDYST=S10HLPDYST ;
S_HLPDYSU=S10HLPDYSU ;
S_HLPHRSF=S10HLPHRSF ;
S_HLPHRSNF=S10HLPHRSNF ;
S_HLPHRSP=S10HLPHRSP ;
S_HLPHRST=S10HLPHRST ;
S_HLPHRSU=S10HLPHRSU ;
S_HLPPDFA=S10HLPPDFA ;
S_HLPPDFN=S10HLPPDFN ;
S_HLPPDNFA=S10HLPPDNFA ;
S_HLPPDNFN=S10HLPPDNFN ;
S_HLPPDTA=S10HLPPDTA ;
S_HLPPDTN=S10HLPPDTN ;
S_HLPRFN=S10HLPRFN ;
S_HLPRNFN=S10HLPRNFN ;
S_HLPRPN=S10HLPRPN ;
S_HLPRTN=S10HLPRTN ;
S_HLPRUN=S10HLPRUN ;
S_HLTC3=S10HLTC3 ;
/* Empty map cell for: S_HLTC5       variable wave = 10*/ ;
/* Empty map cell for: S_HLTC5F      variable wave = 10*/ ;
S_HLTHLM=S10HLTHLM ;
S_HOMCAR=S10HOMCAR ;
S_HOSP=S10HOSP ;
S_HRSAMP=S10HRSAMP ;
S_HSPNIT=S10HSPNIT ;
S_HSPTIM=S10HSPTIM ;
/* Empty map cell for: S_HSWRKF      variable wave = 10*/ ;
/* Empty map cell for: S_HTR40       variable wave = 10*/ ;
S_IADL5A=S10IADL5A ;
S_IADL5H=S10IADL5H ;
S_IANN=S10IANN ;
S_IEARN=S10IEARN ;
S_IFANN=S10IFANN ;
S_IFEARN=S10IFEARN ;
S_IFGXFR=S10IFGXFR ;
S_IFIRAW=S10IFIRAW ;
/* Empty map cell for: S_IFIRAWY1    variable wave = 10*/ ;
S_IFPEN=S10IFPEN ;
S_IFPENA=S10IFPENA ;
S_IFSDI=S10IFSDI ;
S_IFSRET=S10IFSRET ;
S1_IFSSDI=S10IFSSDI ;
/* Empty map cell for: S_IFSSDI      variable wave = 10*/ ;
/* Empty map cell for: S_IFSSI       variable wave = 10*/ ;
S_IFUNEM=S10IFUNEM ;
S1_IFUNWC=S10IFUNWC ;
/* Empty map cell for: S2_IFUNWC     variable wave = 10*/ ;
S_IFWCMP=S10IFWCMP ;
S_IGXFR=S10IGXFR ;
S_IIRAW=S10IIRAW ;
S_IIRAWY1=S10IIRAWY1 ;
S_IMRC=S10IMRC ;
/* Empty map cell for: S_IMRC20      variable wave = 10*/ ;
/* Empty map cell for: S_INHER       variable wave = 10*/ ;
S_INHPE=S10INHPE ;
S_INHPFN=S10INHPFN ;
S_INHPNFN=S10INHPNFN ;
S_INHPPN=S10INHPPN ;
S_INHPTN=S10INHPTN ;
S_INHPUN=S10INHPUN ;
S_INLBRF=S10INLBRF ;
S_IPEN=S10IPEN ;
S_IPENA=S10IPENA ;
S_ISDI=S10ISDI ;
S_ISRET=S10ISRET ;
S_ISSDI=S10ISSDI ;
S_ISSI=S10ISSI ;
S_IUNEM=S10IUNEM ;
S_IUNWC=S10IUNWC ;
S_IWBEG=S10IWBEG ;
/* Empty map cell for: S_IWBEGF      variable wave = 10*/ ;
S_IWCMP=S10IWCMP ;
S_IWEND=S10IWEND ;
/* Empty map cell for: S_IWENDF      variable wave = 10*/ ;
S_IWENDM=S10IWENDM ;
S_IWENDY=S10IWENDY ;
S_IWMID=S10IWMID ;
S_IWMIDF=S10IWMIDF ;
S_IWSTAT=S10IWSTAT ;
S_JCIND=S10JCIND ;
S_JCINDB=S10JCINDB ;
S_JCINDC=S10JCINDC ;
S_JCOCC=S10JCOCC ;
S_JCOCCA=S10JCOCCA ;
S_JCOCCB=S10JCOCCB ;
S_JCOCCC=S10JCOCCC ;
S_JCPEN=S10JCPEN ;
/* Empty map cell for: S_JCPENF      variable wave = 10*/ ;
S_JCTEN=S10JCTEN ;
S_JHOUR2=S10JHOUR2 ;
S_JHOURS=S10JHOURS ;
S_JJOBS=S10JJOBS ;
S_JLASTM=S10JLASTM ;
S_JLASTY=S10JLASTY ;
S_JLIFT=S10JLIFT ;
S_JLIND=S10JLIND ;
S_JLINDB=S10JLINDB ;
S_JLINDC=S10JLINDC ;
S_JLMIS=S10JLMIS ;
S_JLOCC=S10JLOCC ;
S_JLOCCA=S10JLOCCA ;
S_JLOCCB=S10JLOCCB ;
S_JLOCCC=S10JLOCCC ;
S_JLTEN=S10JLTEN ;
S_JLTENF=S10JLTENF ;
S_JMISS=S10JMISS ;
S_JNJOB=S10JNJOB ;
S_JNJOB5=S10JNJOB5 ;
/* Empty map cell for: S1_JOG        variable wave = 10*/ ;
/* Empty map cell for: S2_JOG        variable wave = 10*/ ;
S_JOG=S10JOG ;
S_JOGA=S10JOGA ;
/* Empty map cell for: S_JOGW        variable wave = 10*/ ;
S_JPHYS=S10JPHYS ;
S_JSIGHT=S10JSIGHT ;
S_JSTOOP=S10JSTOOP ;
S_JSTRES=S10JSTRES ;
S_JWEEK2=S10JWEEK2 ;
S_JWEEKS=S10JWEEKS ;
S_JYEARM=S10JYEARM ;
S_JYEARS=S10JYEARS ;
S_LBAGR=S10LBAGR ;
S_LBASSISTPRB=S10LBASSISTPRB ;
S_LBCOMP=S10LBCOMP ;
S_LBCON10=S10LBCON10 ;
S_LBCON5=S10LBCON5 ;
S_LBELIG=S10LBELIG ;
S_LBEXT=S10LBEXT ;
S_LBFAMDRUGPRB=S10LBFAMDRUGPRB ;
S_LBFAMHLTHPRB=S10LBFAMHLTHPRB ;
S_LBFINPRB=S10LBFINPRB ;
S_LBHLTHPRB=S10LBHLTHPRB ;
S_LBHOUSEPRB=S10LBHOUSEPRB ;
S_LBLONELY11=S10LBLONELY11 ;
S_LBLONELY3=S10LBLONELY3 ;
S_LBNEGAFFECT=S10LBNEGAFFECT ;
/* Empty map cell for: S_LBNEGAFFECT6variable wave = 10*/ ;
S_LBNEUR=S10LBNEUR ;
S_LBONCHRSTR=S10LBONCHRSTR ;
S_LBOPEN=S10LBOPEN ;
S_LBPOSAFFECT=S10LBPOSAFFECT ;
/* Empty map cell for: S_LBPOSAFFECT6variable wave = 10*/ ;
S_LBRF=S10LBRF ;
S_LBRFH=S10LBRFH ;
S_LBRFY=S10LBRFY ;
S_LBRLTNSHPRB=S10LBRLTNSHPRB ;
S_LBSATCITY=S10LBSATCITY ;
S_LBSATFAM=S10LBSATFAM ;
S_LBSATFIN=S10LBSATFIN ;
S_LBSATHLTH=S10LBSATHLTH ;
S_LBSATHOME=S10LBSATHOME ;
S_LBSATINC=S10LBSATINC ;
S_LBSATLEISURE=S10LBSATLEISURE ;
S_LBSATLIFE=S10LBSATLIFE ;
S_LBSATWLF=S10LBSATWLF ;
S_LBWGTR=S10LBWGTR ;
S_LBWORKPRB=S10LBWORKPRB ;
S_LGMUSA=S10LGMUSA ;
/* Empty map cell for: S_LGMUSW      variable wave = 10*/ ;
/* Empty map cell for: S_LHTACT      variable wave = 10*/ ;
S_LIFEIN=S10LIFEIN ;
/* Empty map cell for: S1_LIFT       variable wave = 10*/ ;
/* Empty map cell for: S2_LIFT       variable wave = 10*/ ;
S_LIFT=S10LIFT ;
S_LIFTA=S10LIFTA ;
/* Empty map cell for: S_LIFTW       variable wave = 10*/ ;
S_LIV10=S10LIV10 ;
S_LIV10A=S10LIV10A ;
S_LIV10P=S10LIV10P ;
S_LIV10R=S10LIV10R ;
S_LIV75=S10LIV75 ;
S_LIV75C=S10LIV75C ;
S_LIV75F=S10LIV75F ;
S_LIV75P=S10LIV75P ;
S_LIV75R=S10LIV75R ;
/* Empty map cell for: S_LIV85       variable wave = 10*/ ;
/* Empty map cell for: S_LIV85C      variable wave = 10*/ ;
/* Empty map cell for: S_LIV85F      variable wave = 10*/ ;
/* Empty map cell for: S_LIV85P      variable wave = 10*/ ;
/* Empty map cell for: S_LIV85R      variable wave = 10*/ ;
S_LIV8XC=S10LIV8XC ;
S_LIV8XF=S10LIV8XF ;
S_LIVBRO=S10LIVBRO ;
S_LIVPAR=S10LIVPAR ;
S_LIVSIB=S10LIVSIB ;
S_LIVSIS=S10LIVSIS ;
S_LOST=S10LOST ;
/* Empty map cell for: S_LTACTF      variable wave = 10*/ ;
/* Empty map cell for: S_LTACTN      variable wave = 10*/ ;
/* Empty map cell for: S_LTACTP      variable wave = 10*/ ;
S_LTACTX=S10LTACTX ;
S_LTCPRM=S10LTCPRM ;
S_LUNG=S10LUNG ;
S_LUNGE=S10LUNGE ;
S_LUNGEF=S10LUNGEF ;
S_LUNGF=S10LUNGF ;
S_LUNGQ=S10LUNGQ ;
S_LUNGS=S10LUNGS ;
S_MAMMOG=S10MAMMOG ;
/* Empty map cell for: S1_MAP        variable wave = 10*/ ;
/* Empty map cell for: S2_MAP        variable wave = 10*/ ;
S_MAP=S10MAP ;
S_MAPA=S10MAPA ;
/* Empty map cell for: S_MAPW        variable wave = 10*/ ;
S_MCURLN=S10MCURLN ;
/* Empty map cell for: S_MCWV        variable wave = 10*/ ;
/* Empty map cell for: S_MCWVW       variable wave = 10*/ ;
S_MDACTX=S10MDACTX ;
S_MDIV=S10MDIV ;
S_MEALS=S10MEALS ;
S_MEALSA=S10MEALSA ;
S_MEALSH=S10MEALSH ;
/* Empty map cell for: S_MEALSR      variable wave = 10*/ ;
/* Empty map cell for: S2_MEDS       variable wave = 10*/ ;
S_MEDS=S10MEDS ;
S_MEDSA=S10MEDSA ;
S_MEDSH=S10MEDSH ;
/* Empty map cell for: S_MEDSR       variable wave = 10*/ ;
S_MEDUC=S10MEDUC ;
/* Empty map cell for: S_MEMRY       variable wave = 10*/ ;
/* Empty map cell for: S_MEMRYE      variable wave = 10*/ ;
/* Empty map cell for: S_MEMRYEF     variable wave = 10*/ ;
/* Empty map cell for: S_MEMRYF      variable wave = 10*/ ;
/* Empty map cell for: S_MEMRYQ      variable wave = 10*/ ;
/* Empty map cell for: S_MEMRYS      variable wave = 10*/ ;
S_MEND=S10MEND ;
S_MLEN=S10MLEN ;
S_MLENM=S10MLENM ;
S_MNEV=S10MNEV ;
S_MO=S10MO ;
S_MOBILA=S10MOBILA ;
/* Empty map cell for: S_MOBILW      variable wave = 10*/ ;
S_MOMAGE=S10MOMAGE ;
S_MOMLIV=S10MOMLIV ;
/* Empty map cell for: S2_MONEY      variable wave = 10*/ ;
S_MONEY=S10MONEY ;
S_MONEYA=S10MONEYA ;
S_MONEYH=S10MONEYH ;
/* Empty map cell for: S_MONEYR      variable wave = 10*/ ;
S_MPART=S10MPART ;
S_MRCT=S10MRCT ;
S_MRPREM=S10MRPREM ;
S_MSTAT=S10MSTAT ;
S_MSTATF=S10MSTATF ;
S_MSTATH=S10MSTATH ;
S_MSTOT=S10MSTOT ;
S_MWID=S10MWID ;
S_NHMDAY=S10NHMDAY ;
S_NHMLIV=S10NHMLIV ;
S_NHMMVM=S10NHMMVM ;
S_NHMMVY=S10NHMMVY ;
S_NOTICS=S10NOTICS ;
S_NOVOC=S10NOVOC ;
S_NRSHOM=S10NRSHOM ;
S_NRSNIT=S10NRSNIT ;
S_NRSTIM=S10NRSTIM ;
S_NSSCRE=S10NSSCRE ;
S_NSSCSE=S10NSSCSE ;
S_OAHDID=S10OAHDID ;
S_OHRSID=S10OHRSID ;
S_OOPMD=S10OOPMD ;
S_OOPMDF=S10OOPMDF ;
S_OOPMDO=S10OOPMDO ;
S_OOPMDOF=S10OOPMDOF ;
S_OUTPT=S10OUTPT ;
S_PAPSM=S10PAPSM ;
/* Empty map cell for: S_PARTD       variable wave = 10*/ ;
S_PENCT=S10PENCT ;
S_PENIC1=S10PENIC1 ;
S_PENIC2=S10PENIC2 ;
S_PENINC=S10PENINC ;
S_PENI_N=S10PENI_N ;
/* Empty map cell for: S2_PHONE      variable wave = 10*/ ;
S_PHONE=S10PHONE ;
S_PHONEA=S10PHONEA ;
S_PHONEH=S10PHONEH ;
/* Empty map cell for: S_PHONER      variable wave = 10*/ ;
S_PMBMI=S10PMBMI ;
S_PMHGHT=S10PMHGHT ;
S_PMHGHTS=S10PMHGHTS ;
S_PMWAIST=S10PMWAIST ;
S_PMWAISTC=S10PMWAISTC ;
S_PMWGHT=S10PMWGHT ;
S_PMWGHTF=S10PMWGHTF ;
S_PMWGHTS=S10PMWGHTS ;
S_PNHM5Y=S10PNHM5Y ;
S_PRCHMEM=S10PRCHMEM ;
S_PRES=S10PRES ;
S_PRMEM=S10PRMEM ;
S_PROST=S10PROST ;
S_PROXY=S10PROXY ;
S_PRPCNT=S10PRPCNT ;
S_PRPRM1=S10PRPRM1 ;
S_PRPRM2=S10PRPRM2 ;
S_PRPRM3=S10PRPRM3 ;
S_PRSRC1=S10PRSRC1 ;
S_PRSRC2=S10PRSRC2 ;
S_PRSRC3=S10PRSRC3 ;
S_PSTMEM=S10PSTMEM ;
S_PSYCH=S10PSYCH ;
S_PSYCHE=S10PSYCHE ;
S_PSYCHEF=S10PSYCHEF ;
S_PSYCHF=S10PSYCHF ;
S_PSYCHQ=S10PSYCHQ ;
S_PSYCHS=S10PSYCHS ;
S_PTYP1=S10PTYP1 ;
S_PTYP2=S10PTYP2 ;
S_PTYP3=S10PTYP3 ;
S_PTYP4=S10PTYP4 ;
S_PTYPD1=S10PTYPD1 ;
S_PTYPD2=S10PTYPD2 ;
S_PTYPD3=S10PTYPD3 ;
S_PTYPD4=S10PTYPD4 ;
S_PTYPF1=S10PTYPF1 ;
S_PTYPF2=S10PTYPF2 ;
S_PTYPF3=S10PTYPF3 ;
S_PTYPF4=S10PTYPF4 ;
S_PUFF=S10PUFF ;
S_PUFFPOS=S10PUFFPOS ;
/* Empty map cell for: S1_PUSH       variable wave = 10*/ ;
/* Empty map cell for: S2_PUSH       variable wave = 10*/ ;
S_PUSH=S10PUSH ;
S_PUSHA=S10PUSHA ;
/* Empty map cell for: S_PUSHW       variable wave = 10*/ ;
S_RACEM=S10RACEM ;
S_RELIG=S10RELIG ;
S_RETDTWV=S10RETDTWV ;
S_RETEMP=S10RETEMP ;
/* Empty map cell for: S_RETINC      variable wave = 10*/ ;
/* Empty map cell for: S_RETLIV      variable wave = 10*/ ;
S_RETMON=S10RETMON ;
S_RETSAT=S10RETSAT ;
/* Empty map cell for: S_RETWLT      variable wave = 10*/ ;
/* Empty map cell for: S_RETWRK      variable wave = 10*/ ;
/* Empty map cell for: S_RETWSP      variable wave = 10*/ ;
S_RETYR=S10RETYR ;
/* Empty map cell for: S_RISK        variable wave = 10*/ ;
/* Empty map cell for: S_RISK6       variable wave = 10*/ ;
S_RPLNYA=S10RPLNYA ;
S_RPLNYR=S10RPLNYR ;
S_RXPREM=S10RXPREM ;
S_RYRCMP=S10RYRCMP ;
S_SADLF=S10SADLF ;
S_SAMEJOB=S10SAMEJOB ;
S_SAMEMP=S10SAMEMP ;
S_SAYRET=S10SAYRET ;
S_SCIS=S10SCIS ;
S_SDIAPL=S10SDIAPL ;
S_SDIAPLM=S10SDIAPLM ;
S_SDIAPLY=S10SDIAPLY ;
S_SDIAPP=S10SDIAPP ;
S_SDIAPPM=S10SDIAPPM ;
S_SDIAPPY=S10SDIAPPY ;
S_SDIDEN=S10SDIDEN ;
S_SDIREC=S10SDIREC ;
S_SDIRECM=S10SDIRECM ;
S_SDIRECY=S10SDIRECY ;
S_SDISTP=S10SDISTP ;
S_SDISTPM=S10SDISTPM ;
S_SDISTPY=S10SDISTPY ;
S_SER7=S10SER7 ;
S_SHLT=S10SHLT ;
S_SHLTC=S10SHLTC ;
S_SHLTCF=S10SHLTCF ;
S_SHOP=S10SHOP ;
S_SHOPA=S10SHOPA ;
S_SHOPH=S10SHOPH ;
/* Empty map cell for: S_SHOPR       variable wave = 10*/ ;
/* Empty map cell for: S1_SIT        variable wave = 10*/ ;
/* Empty map cell for: S2_SIT        variable wave = 10*/ ;
S_SIT=S10SIT ;
S_SITA=S10SITA ;
/* Empty map cell for: S_SITW        variable wave = 10*/ ;
/* Empty map cell for: S_SLEEP       variable wave = 10*/ ;
/* Empty map cell for: S_SLEEPE      variable wave = 10*/ ;
/* Empty map cell for: S_SLEEPEF     variable wave = 10*/ ;
/* Empty map cell for: S_SLEEPQ      variable wave = 10*/ ;
S_SLEEPR=S10SLEEPR ;
/* Empty map cell for: S_SLEEPS      variable wave = 10*/ ;
/* Empty map cell for: S_SLEEPX      variable wave = 10*/ ;
S_SLFEMP=S10SLFEMP ;
S_SLFMEM=S10SLFMEM ;
S_SMOKEN=S10SMOKEN ;
S_SMOKEV=S10SMOKEV ;
S_SPCFAC=S10SPCFAC ;
/* Empty map cell for: S_SSAPL       variable wave = 10*/ ;
/* Empty map cell for: S_SSAPLM      variable wave = 10*/ ;
/* Empty map cell for: S_SSAPLY      variable wave = 10*/ ;
/* Empty map cell for: S_SSAPP       variable wave = 10*/ ;
/* Empty map cell for: S_SSAPPM      variable wave = 10*/ ;
/* Empty map cell for: S_SSAPPY      variable wave = 10*/ ;
/* Empty map cell for: S_SSDEN       variable wave = 10*/ ;
S_SSDI=S10SSDI ;
S_SSIAPL=S10SSIAPL ;
S_SSIAPLM=S10SSIAPLM ;
S_SSIAPLY=S10SSIAPLY ;
S_SSIAPP=S10SSIAPP ;
S_SSIAPPM=S10SSIAPPM ;
S_SSIAPPY=S10SSIAPPY ;
S_SSIDEN=S10SSIDEN ;
S_SSIREC=S10SSIREC ;
S_SSIRECM=S10SSIRECM ;
S_SSIRECY=S10SSIRECY ;
S_SSISTP=S10SSISTP ;
S_SSISTPM=S10SSISTPM ;
S_SSISTPY=S10SSISTPY ;
/* Empty map cell for: S_SSREC       variable wave = 10*/ ;
/* Empty map cell for: S_SSRECM      variable wave = 10*/ ;
/* Empty map cell for: S_SSRECY      variable wave = 10*/ ;
/* Empty map cell for: S_SSSTP       variable wave = 10*/ ;
/* Empty map cell for: S_SSSTPM      variable wave = 10*/ ;
/* Empty map cell for: S_SSSTPY      variable wave = 10*/ ;
S_SSWRER=S10SSWRER ;
S_SSWRNR=S10SSWRNR ;
S_SSWRXA=S10SSWRXA ;
S_SSWSER=S10SSWSER ;
S_SSWSNR=S10SSWSNR ;
S_SSWSXA=S10SSWSXA ;
S_STATUS=S10STATUS ;
/* Empty map cell for: S1_STOOP      variable wave = 10*/ ;
/* Empty map cell for: S2_STOOP      variable wave = 10*/ ;
S_STOOP=S10STOOP ;
S_STOOPA=S10STOOPA ;
/* Empty map cell for: S_STOOPW      variable wave = 10*/ ;
S_STROK=S10STROK ;
S_STROKE=S10STROKE ;
S_STROKEF=S10STROKEF ;
S_STROKF=S10STROKF ;
S_STROKQ=S10STROKQ ;
S_STROKS=S10STROKS ;
S_TIMWLK=S10TIMWLK ;
S_TIMWLKA=S10TIMWLKA ;
/* Empty map cell for: S_TLIPRM      variable wave = 10*/ ;
/* Empty map cell for: S2_TOILT      variable wave = 10*/ ;
S_TOILT=S10TOILT ;
S_TOILTA=S10TOILTA ;
/* Empty map cell for: S2_TOILTH     variable wave = 10*/ ;
S_TOILTH=S10TOILTH ;
/* Empty map cell for: S_TOTMBF      variable wave = 10*/ ;
/* Empty map cell for: S_TOTMBI      variable wave = 10*/ ;
/* Empty map cell for: S_TOTMD       variable wave = 10*/ ;
/* Empty map cell for: S_TOTMDF      variable wave = 10*/ ;
S_TR20=S10TR20 ;
/* Empty map cell for: S_TR40        variable wave = 10*/ ;
S_TYLTC=S10TYLTC ;
/* Empty map cell for: S_ULCER       variable wave = 10*/ ;
S_UNEMP=S10UNEMP ;
S_UNION=S10UNION ;
S_UNIONF=S10UNIONF ;
S_VETRN=S10VETRN ;
/* Empty map cell for: S_VGACTF      variable wave = 10*/ ;
/* Empty map cell for: S_VGACTN      variable wave = 10*/ ;
/* Empty map cell for: S_VGACTP      variable wave = 10*/ ;
S_VGACTX=S10VGACTX ;
/* Empty map cell for: S_VIGACT      variable wave = 10*/ ;
S_VOCAB=S10VOCAB ;
S_VP=S10VP ;
/* Empty map cell for: S1_WALK1      variable wave = 10*/ ;
/* Empty map cell for: S2_WALK1      variable wave = 10*/ ;
S_WALK1=S10WALK1 ;
S_WALK1A=S10WALK1A ;
/* Empty map cell for: S_WALK1W      variable wave = 10*/ ;
/* Empty map cell for: S1_WALKR      variable wave = 10*/ ;
/* Empty map cell for: S2_WALKR      variable wave = 10*/ ;
S_WALKR=S10WALKR ;
S_WALKRA=S10WALKRA ;
S_WALKRE=S10WALKRE ;
/* Empty map cell for: S2_WALKRH     variable wave = 10*/ ;
S_WALKRH=S10WALKRH ;
/* Empty map cell for: S_WALKRW      variable wave = 10*/ ;
/* Empty map cell for: S1_WALKS      variable wave = 10*/ ;
/* Empty map cell for: S2_WALKS      variable wave = 10*/ ;
S_WALKS=S10WALKS ;
S_WALKSA=S10WALKSA ;
/* Empty map cell for: S_WALKSW      variable wave = 10*/ ;
S_WANDER=S10WANDER ;
S_WEIGHT=S10WEIGHT ;
S_WGFHR=S10WGFHR ;
S_WGFWK=S10WGFWK ;
S_WGIHR=S10WGIHR ;
S_WGIWK=S10WGIWK ;
/* Empty map cell for: S_WHAPPX      variable wave = 10*/ ;
S_WHAPPY=S10WHAPPY ;
S_WLIPRM=S10WLIPRM ;
S_WORK=S10WORK ;
S_WORK2=S10WORK2 ;
S_WORK62=S10WORK62 ;
S_WORK62F=S10WORK62F ;
S_WORK65=S10WORK65 ;
S_WORK65F=S10WORK65F ;
/* Empty map cell for: S_WORK70      variable wave = 10*/ ;
/* Empty map cell for: S_WORK70A     variable wave = 10*/ ;
/* Empty map cell for: S_WORK70AF    variable wave = 10*/ ;
/* Empty map cell for: S_WORK70F     variable wave = 10*/ ;
/* Empty map cell for: S_WORKLM      variable wave = 10*/ ;
S_WTCRNH=S10WTCRNH ;
S_WTRESP=S10WTRESP ;
S_WTR_NH=S10WTR_NH ;
S_YR=S10YR ;
if inw=1 then output ;
%put --- Slong table ;
%initvars ;
%put ---- Slong table ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
/* --- RAND variable:HHIDPN  included */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
/* --- RAND variable:HACOHORT  included */ ;
WAVE_NUMBER=11 ;
WAVE_NAME=  'hrs_wave'||strip(put(wave_number,3.))     /* --- Derived variable  */ ;
studyyr= hrs_studyyr(wave_number,
hacohort)     /* --- Derived variable  */ ;
CYEAR='yr2012' ;
H_HHID=H11HHID ;
H_HHIDC=H11HHIDC ;
SUBHH= substr(H_HHIDC,7)     /* --- Derived variable  */ ;
INW=INW11 ;
S_HHIDPN=S11HHIDPN ;
/* --- RAND variable:SASSAGEB  included */ ;
/* --- RAND variable:SASSAGEM  included */ ;
/* --- RAND variable:SASSRECV  included */ ;
/* Empty map cell for: S_ACGTOT      variable wave = 11*/ ;
S_ADL5A=S11ADL5A ;
S_ADL5H=S11ADL5H ;
S_ADL6A=S11ADL6A ;
S_ADL6H=S11ADL6H ;
/* Empty map cell for: S_ADLR10      variable wave = 11*/ ;
/* Empty map cell for: S_ADLW        variable wave = 11*/ ;
S_AGEM_B=S11AGEM_B ;
S_AGEM_E=S11AGEM_E ;
S_AGEM_M=S11AGEM_M ;
S_AGEY_B=S11AGEY_B ;
S_AGEY_E=S11AGEY_E ;
S_AGEY_M=S11AGEY_M ;
S_AHDSMP=S11AHDSMP ;
/* Empty map cell for: S_AIMR10      variable wave = 11*/ ;
S_ALONE=S11ALONE ;
S_ALZHE=S11ALZHE ;
S_ALZHEE=S11ALZHEE ;
S_ALZHEEF=S11ALZHEEF ;
S_ALZHEF=S11ALZHEF ;
S_ALZHEQ=S11ALZHEQ ;
S_ALZHES=S11ALZHES ;
/* Empty map cell for: S_AMSTOT      variable wave = 11*/ ;
S_ANS3PQ=S11ANS3PQ ;
/* Empty map cell for: S1_ARMS       variable wave = 11*/ ;
/* Empty map cell for: S2_ARMS       variable wave = 11*/ ;
S_ARMS=S11ARMS ;
S_ARMSA=S11ARMSA ;
/* Empty map cell for: S_ARMSW       variable wave = 11*/ ;
S_ARTHR=S11ARTHR ;
S_ARTHRE=S11ARTHRE ;
S_ARTHREF=S11ARTHREF ;
S_ARTHRF=S11ARTHRF ;
S_ARTHRQ=S11ARTHRQ ;
S_ARTHRS=S11ARTHRS ;
/* Empty map cell for: S_ATR20       variable wave = 11*/ ;
S_BACK=S11BACK ;
S_BALFUL=S11BALFUL ;
S_BALFULC=S11BALFULC ;
S_BALFULT=S11BALFULT ;
S_BALSBS=S11BALSBS ;
S_BALSBSC=S11BALSBSC ;
S_BALSEMI=S11BALSEMI ;
S_BALSEMIC=S11BALSEMIC ;
/* Empty map cell for: S1_BATH       variable wave = 11*/ ;
/* Empty map cell for: S2_BATH       variable wave = 11*/ ;
S_BATH=S11BATH ;
S_BATHA=S11BATHA ;
/* Empty map cell for: S2_BATHH      variable wave = 11*/ ;
S_BATHH=S11BATHH ;
/* Empty map cell for: S_BATHW       variable wave = 11*/ ;
S_BDATE=S11BDATE ;
/* Empty map cell for: S1_BED        variable wave = 11*/ ;
/* Empty map cell for: S2_BED        variable wave = 11*/ ;
S_BED=S11BED ;
S_BEDA=S11BEDA ;
S_BEDE=S11BEDE ;
/* Empty map cell for: S2_BEDH       variable wave = 11*/ ;
S_BEDH=S11BEDH ;
/* Empty map cell for: S_BEDW        variable wave = 11*/ ;
S_BEQ100=S11BEQ100 ;
S_BEQ10K=S11BEQ10K ;
S_BEQ500=S11BEQ500 ;
S_BEQANY=S11BEQANY ;
/* Empty map cell for: S_BEQLRG      variable wave = 11*/ ;
S_BFLAG=S11BFLAG ;
S_BMI=S11BMI ;
S_BMONTH=S11BMONTH ;
S_BPDIA=S11BPDIA ;
S_BPLACE=S11BPLACE ;
S_BPLACF=S11BPLACF ;
S_BPPOS=S11BPPOS ;
S_BPPULS=S11BPPULS ;
S_BPSYS=S11BPSYS ;
/* Empty map cell for: S_BREAST      variable wave = 11*/ ;
S_BWC20=S11BWC20 ;
/* Empty map cell for: S_BWC86       variable wave = 11*/ ;
S_BYEAR=S11BYEAR ;
S_CACT=S11CACT ;
/* Empty map cell for: S1_CALC       variable wave = 11*/ ;
/* Empty map cell for: S2_CALC       variable wave = 11*/ ;
/* Empty map cell for: S_CALCA       variable wave = 11*/ ;
/* Empty map cell for: S_CALCW       variable wave = 11*/ ;
S_CANCR=S11CANCR ;
S_CANCRE=S11CANCRE ;
S_CANCREF=S11CANCREF ;
S_CANCRF=S11CANCRF ;
S_CANCRQ=S11CANCRQ ;
S_CANCRS=S11CANCRS ;
S_CENDIV=S11CENDIV ;
S_CENREG=S11CENREG ;
S_CESD=S11CESD ;
S_CESDM=S11CESDM ;
/* Empty map cell for: S1_CHAIR      variable wave = 11*/ ;
/* Empty map cell for: S2_CHAIR      variable wave = 11*/ ;
S_CHAIR=S11CHAIR ;
S_CHAIRA=S11CHAIRA ;
/* Empty map cell for: S_CHAIRW      variable wave = 11*/ ;
S_CHOLST=S11CHOLST ;
/* Empty map cell for: S_CLAIMED     variable wave = 11*/ ;
/* Empty map cell for: S1_CLIM1      variable wave = 11*/ ;
/* Empty map cell for: S2_CLIM1      variable wave = 11*/ ;
S_CLIM1=S11CLIM1 ;
S_CLIM1A=S11CLIM1A ;
/* Empty map cell for: S_CLIM1W      variable wave = 11*/ ;
/* Empty map cell for: S1_CLIMS      variable wave = 11*/ ;
/* Empty map cell for: S2_CLIMS      variable wave = 11*/ ;
S_CLIMS=S11CLIMS ;
S_CLIMSA=S11CLIMSA ;
/* Empty map cell for: S_CLIMSW      variable wave = 11*/ ;
S_COGTOT=S11COGTOT ;
S_COHBYR=S11COHBYR ;
S_COHORT=S11COHORT ;
/* Empty map cell for: S_COMP        variable wave = 11*/ ;
/* Empty map cell for: S_COMPW       variable wave = 11*/ ;
S_CONDE=S11CONDE ;
S_CONDEF=S11CONDEF ;
S_CONDS=S11CONDS ;
S_CONDSF=S11CONDSF ;
S_CONDSP=S11CONDSP ;
S_COVR=S11COVR ;
S_COVRT=S11COVRT ;
S_COVS=S11COVS ;
S_DADAGE=S11DADAGE ;
S_DADLIV=S11DADLIV ;
S_DAGE_M=S11DAGE_M ;
S_DAGE_Y=S11DAGE_Y ;
S_DCBAL1=S11DCBAL1 ;
S_DCBAL2=S11DCBAL2 ;
S_DCBAL3=S11DCBAL3 ;
S_DCBAL4=S11DCBAL4 ;
S_DCBENE1=S11DCBENE1 ;
S_DCBENE2=S11DCBENE2 ;
S_DCBENE3=S11DCBENE3 ;
S_DCBENE4=S11DCBENE4 ;
S_DCCONT1=S11DCCONT1 ;
S_DCCONT2=S11DCCONT2 ;
S_DCCONT3=S11DCCONT3 ;
S_DCCONT4=S11DCCONT4 ;
S_DCMODE1=S11DCMODE1 ;
S_DCMODE2=S11DCMODE2 ;
S_DCMODE3=S11DCMODE3 ;
S_DCMODE4=S11DCMODE4 ;
S_DCPCT1=S11DCPCT1 ;
S_DCPCT2=S11DCPCT2 ;
S_DCPCT3=S11DCPCT3 ;
S_DCPCT4=S11DCPCT4 ;
S_DDATE=S11DDATE ;
S_DEMEN=S11DEMEN ;
S_DEMENE=S11DEMENE ;
S_DEMENEF=S11DEMENEF ;
S_DEMENF=S11DEMENF ;
S_DEMENQ=S11DEMENQ ;
S_DEMENS=S11DEMENS ;
S_DENTST=S11DENTST ;
S_DEPRES=S11DEPRES ;
/* Empty map cell for: S_DEPREX      variable wave = 11*/ ;
S_DIAB=S11DIAB ;
S_DIABE=S11DIABE ;
S_DIABEF=S11DIABEF ;
S_DIABF=S11DIABF ;
S_DIABQ=S11DIABQ ;
S_DIABS=S11DIABS ;
/* Empty map cell for: S1_DIME       variable wave = 11*/ ;
/* Empty map cell for: S2_DIME       variable wave = 11*/ ;
S_DIME=S11DIME ;
S_DIMEA=S11DIMEA ;
/* Empty map cell for: S_DIMEW       variable wave = 11*/ ;
S_DLRC=S11DLRC ;
/* Empty map cell for: S_DLRC20      variable wave = 11*/ ;
S_DMONTH=S11DMONTH ;
S_DOCTIM=S11DOCTIM ;
S_DOCTOR=S11DOCTOR ;
/* Empty map cell for: S1_DRESS      variable wave = 11*/ ;
/* Empty map cell for: S2_DRESS      variable wave = 11*/ ;
S_DRESS=S11DRESS ;
S_DRESSA=S11DRESSA ;
/* Empty map cell for: S2_DRESSH     variable wave = 11*/ ;
S_DRESSH=S11DRESSH ;
/* Empty map cell for: S_DRESSW      variable wave = 11*/ ;
S_DRINK=S11DRINK ;
S_DRINKD=S11DRINKD ;
S_DRINKN=S11DRINKN ;
/* Empty map cell for: S_DRINKR      variable wave = 11*/ ;
S_DRUGS=S11DRUGS ;
S_DSIAMT=S11DSIAMT ;
S_DSRC=S11DSRC ;
S_DSSAMT=S11DSSAMT ;
S_DSTAT=S11DSTAT ;
S_DTIMTDTH=S11DTIMTDTH ;
S_DW=S11DW ;
S_DY=S11DY ;
S_DYEAR=S11DYEAR ;
/* Empty map cell for: S1_EAT        variable wave = 11*/ ;
/* Empty map cell for: S2_EAT        variable wave = 11*/ ;
S_EAT=S11EAT ;
S_EATA=S11EATA ;
/* Empty map cell for: S2_EATH       variable wave = 11*/ ;
S_EATH=S11EATH ;
/* Empty map cell for: S_EATW        variable wave = 11*/ ;
S_EDEGRM=S11EDEGRM ;
S_EDUC=S11EDUC ;
S_EDYRS=S11EDYRS ;
S_EFFORT=S11EFFORT ;
/* Empty map cell for: S_EFFORX      variable wave = 11*/ ;
S_ENLIFE=S11ENLIFE ;
/* Empty map cell for: S_ENLIFX      variable wave = 11*/ ;
S_EVBRN=S11EVBRN ;
S_EVBRNF=S11EVBRNF ;
S_FAMR=S11FAMR ;
S_FBWC20=S11FBWC20 ;
/* Empty map cell for: S_FBWC86      variable wave = 11*/ ;
S_FCACT=S11FCACT ;
S_FDLRC=S11FDLRC ;
S_FDW=S11FDW ;
S_FDY=S11FDY ;
S_FEDUC=S11FEDUC ;
S_FIMRC=S11FIMRC ;
S_FINEA=S11FINEA ;
S_FINPLN=S11FINPLN ;
S_FINR=S11FINR ;
/* Empty map cell for: S_FLAG        variable wave = 11*/ ;
S_FLONE=S11FLONE ;
/* Empty map cell for: S_FLONEX      variable wave = 11*/ ;
S_FLUSHT=S11FLUSHT ;
S_FMO=S11FMO ;
S_FPRES=S11FPRES ;
S_FPSTME=S11FPSTME ;
S_FSAD=S11FSAD ;
/* Empty map cell for: S_FSADX       variable wave = 11*/ ;
S_FSCIS=S11FSCIS ;
S_FSER7=S11FSER7 ;
S_FSIZE=S11FSIZE ;
S_FSIZEF=S11FSIZEF ;
S_FSLFME=S11FSLFME ;
S_FVOCAB=S11FVOCAB ;
S_FVP=S11FVP ;
S_FYR=S11FYR ;
S_GENDER=S11GENDER ;
S_GOING=S11GOING ;
/* Empty map cell for: S_GOINGX      variable wave = 11*/ ;
S_GOVMD=S11GOVMD ;
S_GOVMR=S11GOVMR ;
/* Empty map cell for: S_GOVOT       variable wave = 11*/ ;
S_GOVVA=S11GOVVA ;
S_GROSSA=S11GROSSA ;
S_GRP=S11GRP ;
S_GRPDOM=S11GRPDOM ;
S_GRPL=S11GRPL ;
S_GRPPOS=S11GRPPOS ;
S_GRPR=S11GRPR ;
S_HALUC=S11HALUC ;
/* Empty map cell for: S_HDLR20      variable wave = 11*/ ;
S_HEART=S11HEART ;
S_HEARTE=S11HEARTE ;
S_HEARTEF=S11HEARTEF ;
S_HEARTF=S11HEARTF ;
S_HEARTQ=S11HEARTQ ;
S_HEARTS=S11HEARTS ;
S_HECOV1=S11HECOV1 ;
S_HECOV2=S11HECOV2 ;
S_HECOV3=S11HECOV3 ;
S_HEIGHT=S11HEIGHT ;
S_HENUM=S11HENUM ;
S_HERET=S11HERET ;
S_HERTR1=S11HERTR1 ;
S_HERTR2=S11HERTR2 ;
S_HERTR3=S11HERTR3 ;
S_HERTS1=S11HERTS1 ;
S_HERTS2=S11HERTS2 ;
S_HERTS3=S11HERTS3 ;
S_HESRC1=S11HESRC1 ;
S_HESRC2=S11HESRC2 ;
S_HESRC3=S11HESRC3 ;
S_HHIDPN=S11HHIDPN ;
S_HIBP=S11HIBP ;
S_HIBPE=S11HIBPE ;
S_HIBPEF=S11HIBPEF ;
S_HIBPF=S11HIBPF ;
S_HIBPQ=S11HIBPQ ;
S_HIBPS=S11HIBPS ;
S_HIGOV=S11HIGOV ;
S_HILTC=S11HILTC ;
/* Empty map cell for: S_HIMR20      variable wave = 11*/ ;
S_HIOTHP=S11HIOTHP ;
S_HISPAN=S11HISPAN ;
S_HLPDYSF=S11HLPDYSF ;
S_HLPDYSNF=S11HLPDYSNF ;
S_HLPDYSP=S11HLPDYSP ;
S_HLPDYST=S11HLPDYST ;
S_HLPDYSU=S11HLPDYSU ;
S_HLPHRSF=S11HLPHRSF ;
S_HLPHRSNF=S11HLPHRSNF ;
S_HLPHRSP=S11HLPHRSP ;
S_HLPHRST=S11HLPHRST ;
S_HLPHRSU=S11HLPHRSU ;
S_HLPPDFA=S11HLPPDFA ;
S_HLPPDFN=S11HLPPDFN ;
S_HLPPDNFA=S11HLPPDNFA ;
S_HLPPDNFN=S11HLPPDNFN ;
S_HLPPDTA=S11HLPPDTA ;
S_HLPPDTN=S11HLPPDTN ;
S_HLPRFN=S11HLPRFN ;
S_HLPRNFN=S11HLPRNFN ;
S_HLPRPN=S11HLPRPN ;
S_HLPRTN=S11HLPRTN ;
S_HLPRUN=S11HLPRUN ;
S_HLTC3=S11HLTC3 ;
/* Empty map cell for: S_HLTC5       variable wave = 11*/ ;
/* Empty map cell for: S_HLTC5F      variable wave = 11*/ ;
S_HLTHLM=S11HLTHLM ;
S_HOMCAR=S11HOMCAR ;
S_HOSP=S11HOSP ;
S_HRSAMP=S11HRSAMP ;
S_HSPNIT=S11HSPNIT ;
S_HSPTIM=S11HSPTIM ;
/* Empty map cell for: S_HSWRKF      variable wave = 11*/ ;
/* Empty map cell for: S_HTR40       variable wave = 11*/ ;
S_IADL5A=S11IADL5A ;
S_IADL5H=S11IADL5H ;
S_IANN=S11IANN ;
S_IEARN=S11IEARN ;
S_IFANN=S11IFANN ;
S_IFEARN=S11IFEARN ;
S_IFGXFR=S11IFGXFR ;
S_IFIRAW=S11IFIRAW ;
/* Empty map cell for: S_IFIRAWY1    variable wave = 11*/ ;
S_IFPEN=S11IFPEN ;
S_IFPENA=S11IFPENA ;
S_IFSDI=S11IFSDI ;
S_IFSRET=S11IFSRET ;
S1_IFSSDI=S11IFSSDI ;
/* Empty map cell for: S_IFSSDI      variable wave = 11*/ ;
/* Empty map cell for: S_IFSSI       variable wave = 11*/ ;
S_IFUNEM=S11IFUNEM ;
S1_IFUNWC=S11IFUNWC ;
/* Empty map cell for: S2_IFUNWC     variable wave = 11*/ ;
S_IFWCMP=S11IFWCMP ;
S_IGXFR=S11IGXFR ;
S_IIRAW=S11IIRAW ;
S_IIRAWY1=S11IIRAWY1 ;
S_IMRC=S11IMRC ;
/* Empty map cell for: S_IMRC20      variable wave = 11*/ ;
/* Empty map cell for: S_INHER       variable wave = 11*/ ;
S_INHPE=S11INHPE ;
S_INHPFN=S11INHPFN ;
S_INHPNFN=S11INHPNFN ;
S_INHPPN=S11INHPPN ;
S_INHPTN=S11INHPTN ;
S_INHPUN=S11INHPUN ;
S_INLBRF=S11INLBRF ;
S_IPEN=S11IPEN ;
S_IPENA=S11IPENA ;
S_ISDI=S11ISDI ;
S_ISRET=S11ISRET ;
S_ISSDI=S11ISSDI ;
S_ISSI=S11ISSI ;
S_IUNEM=S11IUNEM ;
S_IUNWC=S11IUNWC ;
S_IWBEG=S11IWBEG ;
/* Empty map cell for: S_IWBEGF      variable wave = 11*/ ;
S_IWCMP=S11IWCMP ;
S_IWEND=S11IWEND ;
/* Empty map cell for: S_IWENDF      variable wave = 11*/ ;
S_IWENDM=S11IWENDM ;
S_IWENDY=S11IWENDY ;
S_IWMID=S11IWMID ;
S_IWMIDF=S11IWMIDF ;
S_IWSTAT=S11IWSTAT ;
S_JCIND=S11JCIND ;
S_JCINDB=S11JCINDB ;
S_JCINDC=S11JCINDC ;
S_JCOCC=S11JCOCC ;
S_JCOCCA=S11JCOCCA ;
S_JCOCCB=S11JCOCCB ;
S_JCOCCC=S11JCOCCC ;
S_JCPEN=S11JCPEN ;
/* Empty map cell for: S_JCPENF      variable wave = 11*/ ;
S_JCTEN=S11JCTEN ;
S_JHOUR2=S11JHOUR2 ;
S_JHOURS=S11JHOURS ;
S_JJOBS=S11JJOBS ;
S_JLASTM=S11JLASTM ;
S_JLASTY=S11JLASTY ;
S_JLIFT=S11JLIFT ;
S_JLIND=S11JLIND ;
S_JLINDB=S11JLINDB ;
S_JLINDC=S11JLINDC ;
S_JLMIS=S11JLMIS ;
S_JLOCC=S11JLOCC ;
S_JLOCCA=S11JLOCCA ;
S_JLOCCB=S11JLOCCB ;
S_JLOCCC=S11JLOCCC ;
S_JLTEN=S11JLTEN ;
S_JLTENF=S11JLTENF ;
S_JMISS=S11JMISS ;
S_JNJOB=S11JNJOB ;
S_JNJOB5=S11JNJOB5 ;
/* Empty map cell for: S1_JOG        variable wave = 11*/ ;
/* Empty map cell for: S2_JOG        variable wave = 11*/ ;
S_JOG=S11JOG ;
S_JOGA=S11JOGA ;
/* Empty map cell for: S_JOGW        variable wave = 11*/ ;
S_JPHYS=S11JPHYS ;
S_JSIGHT=S11JSIGHT ;
S_JSTOOP=S11JSTOOP ;
S_JSTRES=S11JSTRES ;
S_JWEEK2=S11JWEEK2 ;
S_JWEEKS=S11JWEEKS ;
S_JYEARM=S11JYEARM ;
S_JYEARS=S11JYEARS ;
S_LBAGR=S11LBAGR ;
S_LBASSISTPRB=S11LBASSISTPRB ;
S_LBCOMP=S11LBCOMP ;
S_LBCON10=S11LBCON10 ;
S_LBCON5=S11LBCON5 ;
S_LBELIG=S11LBELIG ;
S_LBEXT=S11LBEXT ;
S_LBFAMDRUGPRB=S11LBFAMDRUGPRB ;
S_LBFAMHLTHPRB=S11LBFAMHLTHPRB ;
S_LBFINPRB=S11LBFINPRB ;
S_LBHLTHPRB=S11LBHLTHPRB ;
S_LBHOUSEPRB=S11LBHOUSEPRB ;
S_LBLONELY11=S11LBLONELY11 ;
S_LBLONELY3=S11LBLONELY3 ;
S_LBNEGAFFECT=S11LBNEGAFFECT ;
/* Empty map cell for: S_LBNEGAFFECT6variable wave = 11*/ ;
S_LBNEUR=S11LBNEUR ;
S_LBONCHRSTR=S11LBONCHRSTR ;
S_LBOPEN=S11LBOPEN ;
S_LBPOSAFFECT=S11LBPOSAFFECT ;
/* Empty map cell for: S_LBPOSAFFECT6variable wave = 11*/ ;
S_LBRF=S11LBRF ;
S_LBRFH=S11LBRFH ;
S_LBRFY=S11LBRFY ;
S_LBRLTNSHPRB=S11LBRLTNSHPRB ;
S_LBSATCITY=S11LBSATCITY ;
S_LBSATFAM=S11LBSATFAM ;
S_LBSATFIN=S11LBSATFIN ;
S_LBSATHLTH=S11LBSATHLTH ;
S_LBSATHOME=S11LBSATHOME ;
S_LBSATINC=S11LBSATINC ;
S_LBSATLEISURE=S11LBSATLEISURE ;
S_LBSATLIFE=S11LBSATLIFE ;
S_LBSATWLF=S11LBSATWLF ;
S_LBWGTR=S11LBWGTR ;
S_LBWORKPRB=S11LBWORKPRB ;
S_LGMUSA=S11LGMUSA ;
/* Empty map cell for: S_LGMUSW      variable wave = 11*/ ;
/* Empty map cell for: S_LHTACT      variable wave = 11*/ ;
S_LIFEIN=S11LIFEIN ;
/* Empty map cell for: S1_LIFT       variable wave = 11*/ ;
/* Empty map cell for: S2_LIFT       variable wave = 11*/ ;
S_LIFT=S11LIFT ;
S_LIFTA=S11LIFTA ;
/* Empty map cell for: S_LIFTW       variable wave = 11*/ ;
S_LIV10=S11LIV10 ;
S_LIV10A=S11LIV10A ;
S_LIV10P=S11LIV10P ;
S_LIV10R=S11LIV10R ;
S_LIV75=S11LIV75 ;
S_LIV75C=S11LIV75C ;
S_LIV75F=S11LIV75F ;
S_LIV75P=S11LIV75P ;
S_LIV75R=S11LIV75R ;
/* Empty map cell for: S_LIV85       variable wave = 11*/ ;
/* Empty map cell for: S_LIV85C      variable wave = 11*/ ;
/* Empty map cell for: S_LIV85F      variable wave = 11*/ ;
/* Empty map cell for: S_LIV85P      variable wave = 11*/ ;
/* Empty map cell for: S_LIV85R      variable wave = 11*/ ;
S_LIV8XC=S11LIV8XC ;
S_LIV8XF=S11LIV8XF ;
S_LIVBRO=S11LIVBRO ;
S_LIVPAR=S11LIVPAR ;
S_LIVSIB=S11LIVSIB ;
S_LIVSIS=S11LIVSIS ;
S_LOST=S11LOST ;
/* Empty map cell for: S_LTACTF      variable wave = 11*/ ;
/* Empty map cell for: S_LTACTN      variable wave = 11*/ ;
/* Empty map cell for: S_LTACTP      variable wave = 11*/ ;
S_LTACTX=S11LTACTX ;
S_LTCPRM=S11LTCPRM ;
S_LUNG=S11LUNG ;
S_LUNGE=S11LUNGE ;
S_LUNGEF=S11LUNGEF ;
S_LUNGF=S11LUNGF ;
S_LUNGQ=S11LUNGQ ;
S_LUNGS=S11LUNGS ;
S_MAMMOG=S11MAMMOG ;
/* Empty map cell for: S1_MAP        variable wave = 11*/ ;
/* Empty map cell for: S2_MAP        variable wave = 11*/ ;
S_MAP=S11MAP ;
S_MAPA=S11MAPA ;
/* Empty map cell for: S_MAPW        variable wave = 11*/ ;
S_MCURLN=S11MCURLN ;
/* Empty map cell for: S_MCWV        variable wave = 11*/ ;
/* Empty map cell for: S_MCWVW       variable wave = 11*/ ;
S_MDACTX=S11MDACTX ;
S_MDIV=S11MDIV ;
S_MEALS=S11MEALS ;
S_MEALSA=S11MEALSA ;
S_MEALSH=S11MEALSH ;
/* Empty map cell for: S_MEALSR      variable wave = 11*/ ;
/* Empty map cell for: S2_MEDS       variable wave = 11*/ ;
S_MEDS=S11MEDS ;
S_MEDSA=S11MEDSA ;
S_MEDSH=S11MEDSH ;
/* Empty map cell for: S_MEDSR       variable wave = 11*/ ;
S_MEDUC=S11MEDUC ;
/* Empty map cell for: S_MEMRY       variable wave = 11*/ ;
/* Empty map cell for: S_MEMRYE      variable wave = 11*/ ;
/* Empty map cell for: S_MEMRYEF     variable wave = 11*/ ;
/* Empty map cell for: S_MEMRYF      variable wave = 11*/ ;
/* Empty map cell for: S_MEMRYQ      variable wave = 11*/ ;
/* Empty map cell for: S_MEMRYS      variable wave = 11*/ ;
S_MEND=S11MEND ;
S_MLEN=S11MLEN ;
S_MLENM=S11MLENM ;
S_MNEV=S11MNEV ;
S_MO=S11MO ;
S_MOBILA=S11MOBILA ;
/* Empty map cell for: S_MOBILW      variable wave = 11*/ ;
S_MOMAGE=S11MOMAGE ;
S_MOMLIV=S11MOMLIV ;
/* Empty map cell for: S2_MONEY      variable wave = 11*/ ;
S_MONEY=S11MONEY ;
S_MONEYA=S11MONEYA ;
S_MONEYH=S11MONEYH ;
/* Empty map cell for: S_MONEYR      variable wave = 11*/ ;
S_MPART=S11MPART ;
S_MRCT=S11MRCT ;
S_MRPREM=S11MRPREM ;
S_MSTAT=S11MSTAT ;
S_MSTATF=S11MSTATF ;
S_MSTATH=S11MSTATH ;
S_MSTOT=S11MSTOT ;
S_MWID=S11MWID ;
S_NHMDAY=S11NHMDAY ;
S_NHMLIV=S11NHMLIV ;
S_NHMMVM=S11NHMMVM ;
S_NHMMVY=S11NHMMVY ;
S_NOTICS=S11NOTICS ;
S_NOVOC=S11NOVOC ;
S_NRSHOM=S11NRSHOM ;
S_NRSNIT=S11NRSNIT ;
S_NRSTIM=S11NRSTIM ;
S_NSSCRE=S11NSSCRE ;
S_NSSCSE=S11NSSCSE ;
S_OAHDID=S11OAHDID ;
S_OHRSID=S11OHRSID ;
S_OOPMD=S11OOPMD ;
S_OOPMDF=S11OOPMDF ;
S_OOPMDO=S11OOPMDO ;
S_OOPMDOF=S11OOPMDOF ;
S_OUTPT=S11OUTPT ;
S_PAPSM=S11PAPSM ;
/* Empty map cell for: S_PARTD       variable wave = 11*/ ;
S_PENCT=S11PENCT ;
S_PENIC1=S11PENIC1 ;
S_PENIC2=S11PENIC2 ;
S_PENINC=S11PENINC ;
S_PENI_N=S11PENI_N ;
/* Empty map cell for: S2_PHONE      variable wave = 11*/ ;
S_PHONE=S11PHONE ;
S_PHONEA=S11PHONEA ;
S_PHONEH=S11PHONEH ;
/* Empty map cell for: S_PHONER      variable wave = 11*/ ;
S_PMBMI=S11PMBMI ;
S_PMHGHT=S11PMHGHT ;
S_PMHGHTS=S11PMHGHTS ;
S_PMWAIST=S11PMWAIST ;
S_PMWAISTC=S11PMWAISTC ;
S_PMWGHT=S11PMWGHT ;
S_PMWGHTF=S11PMWGHTF ;
S_PMWGHTS=S11PMWGHTS ;
S_PNHM5Y=S11PNHM5Y ;
S_PRCHMEM=S11PRCHMEM ;
S_PRES=S11PRES ;
S_PRMEM=S11PRMEM ;
S_PROST=S11PROST ;
S_PROXY=S11PROXY ;
S_PRPCNT=S11PRPCNT ;
S_PRPRM1=S11PRPRM1 ;
S_PRPRM2=S11PRPRM2 ;
S_PRPRM3=S11PRPRM3 ;
S_PRSRC1=S11PRSRC1 ;
S_PRSRC2=S11PRSRC2 ;
S_PRSRC3=S11PRSRC3 ;
S_PSTMEM=S11PSTMEM ;
S_PSYCH=S11PSYCH ;
S_PSYCHE=S11PSYCHE ;
S_PSYCHEF=S11PSYCHEF ;
S_PSYCHF=S11PSYCHF ;
S_PSYCHQ=S11PSYCHQ ;
S_PSYCHS=S11PSYCHS ;
S_PTYP1=S11PTYP1 ;
S_PTYP2=S11PTYP2 ;
S_PTYP3=S11PTYP3 ;
S_PTYP4=S11PTYP4 ;
S_PTYPD1=S11PTYPD1 ;
S_PTYPD2=S11PTYPD2 ;
S_PTYPD3=S11PTYPD3 ;
S_PTYPD4=S11PTYPD4 ;
S_PTYPF1=S11PTYPF1 ;
S_PTYPF2=S11PTYPF2 ;
S_PTYPF3=S11PTYPF3 ;
S_PTYPF4=S11PTYPF4 ;
S_PUFF=S11PUFF ;
S_PUFFPOS=S11PUFFPOS ;
/* Empty map cell for: S1_PUSH       variable wave = 11*/ ;
/* Empty map cell for: S2_PUSH       variable wave = 11*/ ;
S_PUSH=S11PUSH ;
S_PUSHA=S11PUSHA ;
/* Empty map cell for: S_PUSHW       variable wave = 11*/ ;
S_RACEM=S11RACEM ;
S_RELIG=S11RELIG ;
S_RETDTWV=S11RETDTWV ;
S_RETEMP=S11RETEMP ;
/* Empty map cell for: S_RETINC      variable wave = 11*/ ;
/* Empty map cell for: S_RETLIV      variable wave = 11*/ ;
S_RETMON=S11RETMON ;
S_RETSAT=S11RETSAT ;
/* Empty map cell for: S_RETWLT      variable wave = 11*/ ;
/* Empty map cell for: S_RETWRK      variable wave = 11*/ ;
/* Empty map cell for: S_RETWSP      variable wave = 11*/ ;
S_RETYR=S11RETYR ;
/* Empty map cell for: S_RISK        variable wave = 11*/ ;
/* Empty map cell for: S_RISK6       variable wave = 11*/ ;
S_RPLNYA=S11RPLNYA ;
S_RPLNYR=S11RPLNYR ;
S_RXPREM=S11RXPREM ;
S_RYRCMP=S11RYRCMP ;
S_SADLF=S11SADLF ;
S_SAMEJOB=S11SAMEJOB ;
S_SAMEMP=S11SAMEMP ;
S_SAYRET=S11SAYRET ;
S_SCIS=S11SCIS ;
S_SDIAPL=S11SDIAPL ;
S_SDIAPLM=S11SDIAPLM ;
S_SDIAPLY=S11SDIAPLY ;
S_SDIAPP=S11SDIAPP ;
S_SDIAPPM=S11SDIAPPM ;
S_SDIAPPY=S11SDIAPPY ;
S_SDIDEN=S11SDIDEN ;
S_SDIREC=S11SDIREC ;
S_SDIRECM=S11SDIRECM ;
S_SDIRECY=S11SDIRECY ;
S_SDISTP=S11SDISTP ;
S_SDISTPM=S11SDISTPM ;
S_SDISTPY=S11SDISTPY ;
S_SER7=S11SER7 ;
S_SHLT=S11SHLT ;
S_SHLTC=S11SHLTC ;
S_SHLTCF=S11SHLTCF ;
S_SHOP=S11SHOP ;
S_SHOPA=S11SHOPA ;
S_SHOPH=S11SHOPH ;
/* Empty map cell for: S_SHOPR       variable wave = 11*/ ;
/* Empty map cell for: S1_SIT        variable wave = 11*/ ;
/* Empty map cell for: S2_SIT        variable wave = 11*/ ;
S_SIT=S11SIT ;
S_SITA=S11SITA ;
/* Empty map cell for: S_SITW        variable wave = 11*/ ;
/* Empty map cell for: S_SLEEP       variable wave = 11*/ ;
/* Empty map cell for: S_SLEEPE      variable wave = 11*/ ;
/* Empty map cell for: S_SLEEPEF     variable wave = 11*/ ;
/* Empty map cell for: S_SLEEPQ      variable wave = 11*/ ;
S_SLEEPR=S11SLEEPR ;
/* Empty map cell for: S_SLEEPS      variable wave = 11*/ ;
/* Empty map cell for: S_SLEEPX      variable wave = 11*/ ;
S_SLFEMP=S11SLFEMP ;
S_SLFMEM=S11SLFMEM ;
S_SMOKEN=S11SMOKEN ;
S_SMOKEV=S11SMOKEV ;
S_SPCFAC=S11SPCFAC ;
/* Empty map cell for: S_SSAPL       variable wave = 11*/ ;
/* Empty map cell for: S_SSAPLM      variable wave = 11*/ ;
/* Empty map cell for: S_SSAPLY      variable wave = 11*/ ;
/* Empty map cell for: S_SSAPP       variable wave = 11*/ ;
/* Empty map cell for: S_SSAPPM      variable wave = 11*/ ;
/* Empty map cell for: S_SSAPPY      variable wave = 11*/ ;
/* Empty map cell for: S_SSDEN       variable wave = 11*/ ;
S_SSDI=S11SSDI ;
S_SSIAPL=S11SSIAPL ;
S_SSIAPLM=S11SSIAPLM ;
S_SSIAPLY=S11SSIAPLY ;
S_SSIAPP=S11SSIAPP ;
S_SSIAPPM=S11SSIAPPM ;
S_SSIAPPY=S11SSIAPPY ;
S_SSIDEN=S11SSIDEN ;
S_SSIREC=S11SSIREC ;
S_SSIRECM=S11SSIRECM ;
S_SSIRECY=S11SSIRECY ;
S_SSISTP=S11SSISTP ;
S_SSISTPM=S11SSISTPM ;
S_SSISTPY=S11SSISTPY ;
/* Empty map cell for: S_SSREC       variable wave = 11*/ ;
/* Empty map cell for: S_SSRECM      variable wave = 11*/ ;
/* Empty map cell for: S_SSRECY      variable wave = 11*/ ;
/* Empty map cell for: S_SSSTP       variable wave = 11*/ ;
/* Empty map cell for: S_SSSTPM      variable wave = 11*/ ;
/* Empty map cell for: S_SSSTPY      variable wave = 11*/ ;
/* Empty map cell for: S_SSWRER      variable wave = 11*/ ;
/* Empty map cell for: S_SSWRNR      variable wave = 11*/ ;
/* Empty map cell for: S_SSWRXA      variable wave = 11*/ ;
/* Empty map cell for: S_SSWSER      variable wave = 11*/ ;
/* Empty map cell for: S_SSWSNR      variable wave = 11*/ ;
/* Empty map cell for: S_SSWSXA      variable wave = 11*/ ;
S_STATUS=S11STATUS ;
/* Empty map cell for: S1_STOOP      variable wave = 11*/ ;
/* Empty map cell for: S2_STOOP      variable wave = 11*/ ;
S_STOOP=S11STOOP ;
S_STOOPA=S11STOOPA ;
/* Empty map cell for: S_STOOPW      variable wave = 11*/ ;
S_STROK=S11STROK ;
S_STROKE=S11STROKE ;
S_STROKEF=S11STROKEF ;
S_STROKF=S11STROKF ;
S_STROKQ=S11STROKQ ;
S_STROKS=S11STROKS ;
S_TIMWLK=S11TIMWLK ;
S_TIMWLKA=S11TIMWLKA ;
/* Empty map cell for: S_TLIPRM      variable wave = 11*/ ;
/* Empty map cell for: S2_TOILT      variable wave = 11*/ ;
S_TOILT=S11TOILT ;
S_TOILTA=S11TOILTA ;
/* Empty map cell for: S2_TOILTH     variable wave = 11*/ ;
S_TOILTH=S11TOILTH ;
/* Empty map cell for: S_TOTMBF      variable wave = 11*/ ;
/* Empty map cell for: S_TOTMBI      variable wave = 11*/ ;
/* Empty map cell for: S_TOTMD       variable wave = 11*/ ;
/* Empty map cell for: S_TOTMDF      variable wave = 11*/ ;
S_TR20=S11TR20 ;
/* Empty map cell for: S_TR40        variable wave = 11*/ ;
S_TYLTC=S11TYLTC ;
/* Empty map cell for: S_ULCER       variable wave = 11*/ ;
S_UNEMP=S11UNEMP ;
S_UNION=S11UNION ;
S_UNIONF=S11UNIONF ;
S_VETRN=S11VETRN ;
/* Empty map cell for: S_VGACTF      variable wave = 11*/ ;
/* Empty map cell for: S_VGACTN      variable wave = 11*/ ;
/* Empty map cell for: S_VGACTP      variable wave = 11*/ ;
S_VGACTX=S11VGACTX ;
/* Empty map cell for: S_VIGACT      variable wave = 11*/ ;
S_VOCAB=S11VOCAB ;
S_VP=S11VP ;
/* Empty map cell for: S1_WALK1      variable wave = 11*/ ;
/* Empty map cell for: S2_WALK1      variable wave = 11*/ ;
S_WALK1=S11WALK1 ;
S_WALK1A=S11WALK1A ;
/* Empty map cell for: S_WALK1W      variable wave = 11*/ ;
/* Empty map cell for: S1_WALKR      variable wave = 11*/ ;
/* Empty map cell for: S2_WALKR      variable wave = 11*/ ;
S_WALKR=S11WALKR ;
S_WALKRA=S11WALKRA ;
S_WALKRE=S11WALKRE ;
/* Empty map cell for: S2_WALKRH     variable wave = 11*/ ;
S_WALKRH=S11WALKRH ;
/* Empty map cell for: S_WALKRW      variable wave = 11*/ ;
/* Empty map cell for: S1_WALKS      variable wave = 11*/ ;
/* Empty map cell for: S2_WALKS      variable wave = 11*/ ;
S_WALKS=S11WALKS ;
S_WALKSA=S11WALKSA ;
/* Empty map cell for: S_WALKSW      variable wave = 11*/ ;
S_WANDER=S11WANDER ;
S_WEIGHT=S11WEIGHT ;
S_WGFHR=S11WGFHR ;
S_WGFWK=S11WGFWK ;
S_WGIHR=S11WGIHR ;
S_WGIWK=S11WGIWK ;
/* Empty map cell for: S_WHAPPX      variable wave = 11*/ ;
S_WHAPPY=S11WHAPPY ;
S_WLIPRM=S11WLIPRM ;
S_WORK=S11WORK ;
S_WORK2=S11WORK2 ;
S_WORK62=S11WORK62 ;
S_WORK62F=S11WORK62F ;
S_WORK65=S11WORK65 ;
S_WORK65F=S11WORK65F ;
S_WORK70=S11WORK70 ;
S_WORK70A=S11WORK70A ;
S_WORK70AF=S11WORK70AF ;
S_WORK70F=S11WORK70F ;
/* Empty map cell for: S_WORKLM      variable wave = 11*/ ;
S_WTCRNH=S11WTCRNH ;
S_WTRESP=S11WTRESP ;
S_WTR_NH=S11WTR_NH ;
S_YR=S11YR ;
if inw=1 then output ;
%put --- Slong table ;
%initvars ;
%put ---- Slong table ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
/* --- RAND variable:HHIDPN  included */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
/* --- RAND variable:HACOHORT  included */ ;
WAVE_NUMBER=12 ;
WAVE_NAME=  'hrs_wave'||strip(put(wave_number,3.))     /* --- Derived variable  */ ;
studyyr= hrs_studyyr(wave_number,
hacohort)     /* --- Derived variable  */ ;
CYEAR='yr2014' ;
H_HHID=H12HHID ;
H_HHIDC=H12HHIDC ;
SUBHH= substr(H_HHIDC,7)     /* --- Derived variable  */ ;
INW=INW12 ;
S_HHIDPN=S12HHIDPN ;
/* --- RAND variable:SASSAGEB  included */ ;
/* --- RAND variable:SASSAGEM  included */ ;
/* --- RAND variable:SASSRECV  included */ ;
/* Empty map cell for: S_ACGTOT      variable wave = 12*/ ;
S_ADL5A=S12ADL5A ;
S_ADL5H=S12ADL5H ;
S_ADL6A=S12ADL6A ;
S_ADL6H=S12ADL6H ;
/* Empty map cell for: S_ADLR10      variable wave = 12*/ ;
/* Empty map cell for: S_ADLW        variable wave = 12*/ ;
S_AGEM_B=S12AGEM_B ;
S_AGEM_E=S12AGEM_E ;
S_AGEM_M=S12AGEM_M ;
S_AGEY_B=S12AGEY_B ;
S_AGEY_E=S12AGEY_E ;
S_AGEY_M=S12AGEY_M ;
S_AHDSMP=S12AHDSMP ;
/* Empty map cell for: S_AIMR10      variable wave = 12*/ ;
S_ALONE=S12ALONE ;
S_ALZHE=S12ALZHE ;
S_ALZHEE=S12ALZHEE ;
S_ALZHEEF=S12ALZHEEF ;
S_ALZHEF=S12ALZHEF ;
S_ALZHEQ=S12ALZHEQ ;
S_ALZHES=S12ALZHES ;
/* Empty map cell for: S_AMSTOT      variable wave = 12*/ ;
S_ANS3PQ=S12ANS3PQ ;
/* Empty map cell for: S1_ARMS       variable wave = 12*/ ;
/* Empty map cell for: S2_ARMS       variable wave = 12*/ ;
S_ARMS=S12ARMS ;
S_ARMSA=S12ARMSA ;
/* Empty map cell for: S_ARMSW       variable wave = 12*/ ;
S_ARTHR=S12ARTHR ;
S_ARTHRE=S12ARTHRE ;
S_ARTHREF=S12ARTHREF ;
S_ARTHRF=S12ARTHRF ;
S_ARTHRQ=S12ARTHRQ ;
S_ARTHRS=S12ARTHRS ;
/* Empty map cell for: S_ATR20       variable wave = 12*/ ;
S_BACK=S12BACK ;
S_BALFUL=S12BALFUL ;
S_BALFULC=S12BALFULC ;
S_BALFULT=S12BALFULT ;
S_BALSBS=S12BALSBS ;
S_BALSBSC=S12BALSBSC ;
S_BALSEMI=S12BALSEMI ;
S_BALSEMIC=S12BALSEMIC ;
/* Empty map cell for: S1_BATH       variable wave = 12*/ ;
/* Empty map cell for: S2_BATH       variable wave = 12*/ ;
S_BATH=S12BATH ;
S_BATHA=S12BATHA ;
/* Empty map cell for: S2_BATHH      variable wave = 12*/ ;
S_BATHH=S12BATHH ;
/* Empty map cell for: S_BATHW       variable wave = 12*/ ;
S_BDATE=S12BDATE ;
/* Empty map cell for: S1_BED        variable wave = 12*/ ;
/* Empty map cell for: S2_BED        variable wave = 12*/ ;
S_BED=S12BED ;
S_BEDA=S12BEDA ;
S_BEDE=S12BEDE ;
/* Empty map cell for: S2_BEDH       variable wave = 12*/ ;
S_BEDH=S12BEDH ;
/* Empty map cell for: S_BEDW        variable wave = 12*/ ;
S_BEQ100=S12BEQ100 ;
S_BEQ10K=S12BEQ10K ;
S_BEQ500=S12BEQ500 ;
S_BEQANY=S12BEQANY ;
/* Empty map cell for: S_BEQLRG      variable wave = 12*/ ;
S_BFLAG=S12BFLAG ;
S_BMI=S12BMI ;
S_BMONTH=S12BMONTH ;
S_BPDIA=S12BPDIA ;
S_BPLACE=S12BPLACE ;
S_BPLACF=S12BPLACF ;
S_BPPOS=S12BPPOS ;
S_BPPULS=S12BPPULS ;
S_BPSYS=S12BPSYS ;
/* Empty map cell for: S_BREAST      variable wave = 12*/ ;
S_BWC20=S12BWC20 ;
/* Empty map cell for: S_BWC86       variable wave = 12*/ ;
S_BYEAR=S12BYEAR ;
S_CACT=S12CACT ;
/* Empty map cell for: S1_CALC       variable wave = 12*/ ;
/* Empty map cell for: S2_CALC       variable wave = 12*/ ;
/* Empty map cell for: S_CALCA       variable wave = 12*/ ;
/* Empty map cell for: S_CALCW       variable wave = 12*/ ;
S_CANCR=S12CANCR ;
S_CANCRE=S12CANCRE ;
S_CANCREF=S12CANCREF ;
S_CANCRF=S12CANCRF ;
S_CANCRQ=S12CANCRQ ;
S_CANCRS=S12CANCRS ;
S_CENDIV=S12CENDIV ;
S_CENREG=S12CENREG ;
S_CESD=S12CESD ;
S_CESDM=S12CESDM ;
/* Empty map cell for: S1_CHAIR      variable wave = 12*/ ;
/* Empty map cell for: S2_CHAIR      variable wave = 12*/ ;
S_CHAIR=S12CHAIR ;
S_CHAIRA=S12CHAIRA ;
/* Empty map cell for: S_CHAIRW      variable wave = 12*/ ;
S_CHOLST=S12CHOLST ;
/* Empty map cell for: S_CLAIMED     variable wave = 12*/ ;
/* Empty map cell for: S1_CLIM1      variable wave = 12*/ ;
/* Empty map cell for: S2_CLIM1      variable wave = 12*/ ;
S_CLIM1=S12CLIM1 ;
S_CLIM1A=S12CLIM1A ;
/* Empty map cell for: S_CLIM1W      variable wave = 12*/ ;
/* Empty map cell for: S1_CLIMS      variable wave = 12*/ ;
/* Empty map cell for: S2_CLIMS      variable wave = 12*/ ;
S_CLIMS=S12CLIMS ;
S_CLIMSA=S12CLIMSA ;
/* Empty map cell for: S_CLIMSW      variable wave = 12*/ ;
S_COGTOT=S12COGTOT ;
S_COHBYR=S12COHBYR ;
S_COHORT=S12COHORT ;
/* Empty map cell for: S_COMP        variable wave = 12*/ ;
/* Empty map cell for: S_COMPW       variable wave = 12*/ ;
S_CONDE=S12CONDE ;
S_CONDEF=S12CONDEF ;
S_CONDS=S12CONDS ;
S_CONDSF=S12CONDSF ;
S_CONDSP=S12CONDSP ;
S_COVR=S12COVR ;
S_COVRT=S12COVRT ;
S_COVS=S12COVS ;
S_DADAGE=S12DADAGE ;
S_DADLIV=S12DADLIV ;
S_DAGE_M=S12DAGE_M ;
S_DAGE_Y=S12DAGE_Y ;
S_DCBAL1=S12DCBAL1 ;
S_DCBAL2=S12DCBAL2 ;
S_DCBAL3=S12DCBAL3 ;
S_DCBAL4=S12DCBAL4 ;
S_DCBENE1=S12DCBENE1 ;
S_DCBENE2=S12DCBENE2 ;
S_DCBENE3=S12DCBENE3 ;
S_DCBENE4=S12DCBENE4 ;
S_DCCONT1=S12DCCONT1 ;
S_DCCONT2=S12DCCONT2 ;
S_DCCONT3=S12DCCONT3 ;
S_DCCONT4=S12DCCONT4 ;
S_DCMODE1=S12DCMODE1 ;
S_DCMODE2=S12DCMODE2 ;
S_DCMODE3=S12DCMODE3 ;
S_DCMODE4=S12DCMODE4 ;
S_DCPCT1=S12DCPCT1 ;
S_DCPCT2=S12DCPCT2 ;
S_DCPCT3=S12DCPCT3 ;
S_DCPCT4=S12DCPCT4 ;
S_DDATE=S12DDATE ;
S_DEMEN=S12DEMEN ;
S_DEMENE=S12DEMENE ;
S_DEMENEF=S12DEMENEF ;
S_DEMENF=S12DEMENF ;
S_DEMENQ=S12DEMENQ ;
S_DEMENS=S12DEMENS ;
S_DENTST=S12DENTST ;
S_DEPRES=S12DEPRES ;
/* Empty map cell for: S_DEPREX      variable wave = 12*/ ;
S_DIAB=S12DIAB ;
S_DIABE=S12DIABE ;
S_DIABEF=S12DIABEF ;
S_DIABF=S12DIABF ;
S_DIABQ=S12DIABQ ;
S_DIABS=S12DIABS ;
/* Empty map cell for: S1_DIME       variable wave = 12*/ ;
/* Empty map cell for: S2_DIME       variable wave = 12*/ ;
S_DIME=S12DIME ;
S_DIMEA=S12DIMEA ;
/* Empty map cell for: S_DIMEW       variable wave = 12*/ ;
S_DLRC=S12DLRC ;
/* Empty map cell for: S_DLRC20      variable wave = 12*/ ;
S_DMONTH=S12DMONTH ;
S_DOCTIM=S12DOCTIM ;
S_DOCTOR=S12DOCTOR ;
/* Empty map cell for: S1_DRESS      variable wave = 12*/ ;
/* Empty map cell for: S2_DRESS      variable wave = 12*/ ;
S_DRESS=S12DRESS ;
S_DRESSA=S12DRESSA ;
/* Empty map cell for: S2_DRESSH     variable wave = 12*/ ;
S_DRESSH=S12DRESSH ;
/* Empty map cell for: S_DRESSW      variable wave = 12*/ ;
S_DRINK=S12DRINK ;
S_DRINKD=S12DRINKD ;
S_DRINKN=S12DRINKN ;
/* Empty map cell for: S_DRINKR      variable wave = 12*/ ;
S_DRUGS=S12DRUGS ;
S_DSIAMT=S12DSIAMT ;
S_DSRC=S12DSRC ;
S_DSSAMT=S12DSSAMT ;
S_DSTAT=S12DSTAT ;
S_DTIMTDTH=S12DTIMTDTH ;
S_DW=S12DW ;
S_DY=S12DY ;
S_DYEAR=S12DYEAR ;
/* Empty map cell for: S1_EAT        variable wave = 12*/ ;
/* Empty map cell for: S2_EAT        variable wave = 12*/ ;
S_EAT=S12EAT ;
S_EATA=S12EATA ;
/* Empty map cell for: S2_EATH       variable wave = 12*/ ;
S_EATH=S12EATH ;
/* Empty map cell for: S_EATW        variable wave = 12*/ ;
S_EDEGRM=S12EDEGRM ;
S_EDUC=S12EDUC ;
S_EDYRS=S12EDYRS ;
S_EFFORT=S12EFFORT ;
/* Empty map cell for: S_EFFORX      variable wave = 12*/ ;
S_ENLIFE=S12ENLIFE ;
/* Empty map cell for: S_ENLIFX      variable wave = 12*/ ;
S_EVBRN=S12EVBRN ;
S_EVBRNF=S12EVBRNF ;
S_FAMR=S12FAMR ;
S_FBWC20=S12FBWC20 ;
/* Empty map cell for: S_FBWC86      variable wave = 12*/ ;
S_FCACT=S12FCACT ;
S_FDLRC=S12FDLRC ;
S_FDW=S12FDW ;
S_FDY=S12FDY ;
S_FEDUC=S12FEDUC ;
S_FIMRC=S12FIMRC ;
S_FINEA=S12FINEA ;
S_FINPLN=S12FINPLN ;
S_FINR=S12FINR ;
/* Empty map cell for: S_FLAG        variable wave = 12*/ ;
S_FLONE=S12FLONE ;
/* Empty map cell for: S_FLONEX      variable wave = 12*/ ;
S_FLUSHT=S12FLUSHT ;
S_FMO=S12FMO ;
S_FPRES=S12FPRES ;
S_FPSTME=S12FPSTME ;
S_FSAD=S12FSAD ;
/* Empty map cell for: S_FSADX       variable wave = 12*/ ;
S_FSCIS=S12FSCIS ;
S_FSER7=S12FSER7 ;
S_FSIZE=S12FSIZE ;
S_FSIZEF=S12FSIZEF ;
S_FSLFME=S12FSLFME ;
S_FVOCAB=S12FVOCAB ;
S_FVP=S12FVP ;
S_FYR=S12FYR ;
S_GENDER=S12GENDER ;
S_GOING=S12GOING ;
/* Empty map cell for: S_GOINGX      variable wave = 12*/ ;
S_GOVMD=S12GOVMD ;
S_GOVMR=S12GOVMR ;
/* Empty map cell for: S_GOVOT       variable wave = 12*/ ;
S_GOVVA=S12GOVVA ;
S_GROSSA=S12GROSSA ;
S_GRP=S12GRP ;
S_GRPDOM=S12GRPDOM ;
S_GRPL=S12GRPL ;
S_GRPPOS=S12GRPPOS ;
S_GRPR=S12GRPR ;
S_HALUC=S12HALUC ;
/* Empty map cell for: S_HDLR20      variable wave = 12*/ ;
S_HEART=S12HEART ;
S_HEARTE=S12HEARTE ;
S_HEARTEF=S12HEARTEF ;
S_HEARTF=S12HEARTF ;
S_HEARTQ=S12HEARTQ ;
S_HEARTS=S12HEARTS ;
S_HECOV1=S12HECOV1 ;
S_HECOV2=S12HECOV2 ;
S_HECOV3=S12HECOV3 ;
S_HEIGHT=S12HEIGHT ;
S_HENUM=S12HENUM ;
S_HERET=S12HERET ;
S_HERTR1=S12HERTR1 ;
S_HERTR2=S12HERTR2 ;
S_HERTR3=S12HERTR3 ;
S_HERTS1=S12HERTS1 ;
S_HERTS2=S12HERTS2 ;
S_HERTS3=S12HERTS3 ;
S_HESRC1=S12HESRC1 ;
S_HESRC2=S12HESRC2 ;
S_HESRC3=S12HESRC3 ;
S_HHIDPN=S12HHIDPN ;
S_HIBP=S12HIBP ;
S_HIBPE=S12HIBPE ;
S_HIBPEF=S12HIBPEF ;
S_HIBPF=S12HIBPF ;
S_HIBPQ=S12HIBPQ ;
S_HIBPS=S12HIBPS ;
S_HIGOV=S12HIGOV ;
S_HILTC=S12HILTC ;
/* Empty map cell for: S_HIMR20      variable wave = 12*/ ;
S_HIOTHP=S12HIOTHP ;
S_HISPAN=S12HISPAN ;
S_HLPDYSF=S12HLPDYSF ;
S_HLPDYSNF=S12HLPDYSNF ;
S_HLPDYSP=S12HLPDYSP ;
S_HLPDYST=S12HLPDYST ;
S_HLPDYSU=S12HLPDYSU ;
S_HLPHRSF=S12HLPHRSF ;
S_HLPHRSNF=S12HLPHRSNF ;
S_HLPHRSP=S12HLPHRSP ;
S_HLPHRST=S12HLPHRST ;
S_HLPHRSU=S12HLPHRSU ;
S_HLPPDFA=S12HLPPDFA ;
S_HLPPDFN=S12HLPPDFN ;
S_HLPPDNFA=S12HLPPDNFA ;
S_HLPPDNFN=S12HLPPDNFN ;
S_HLPPDTA=S12HLPPDTA ;
S_HLPPDTN=S12HLPPDTN ;
S_HLPRFN=S12HLPRFN ;
S_HLPRNFN=S12HLPRNFN ;
S_HLPRPN=S12HLPRPN ;
S_HLPRTN=S12HLPRTN ;
S_HLPRUN=S12HLPRUN ;
S_HLTC3=S12HLTC3 ;
/* Empty map cell for: S_HLTC5       variable wave = 12*/ ;
/* Empty map cell for: S_HLTC5F      variable wave = 12*/ ;
S_HLTHLM=S12HLTHLM ;
S_HOMCAR=S12HOMCAR ;
S_HOSP=S12HOSP ;
S_HRSAMP=S12HRSAMP ;
S_HSPNIT=S12HSPNIT ;
S_HSPTIM=S12HSPTIM ;
/* Empty map cell for: S_HSWRKF      variable wave = 12*/ ;
/* Empty map cell for: S_HTR40       variable wave = 12*/ ;
S_IADL5A=S12IADL5A ;
S_IADL5H=S12IADL5H ;
S_IANN=S12IANN ;
S_IEARN=S12IEARN ;
S_IFANN=S12IFANN ;
S_IFEARN=S12IFEARN ;
S_IFGXFR=S12IFGXFR ;
S_IFIRAW=S12IFIRAW ;
/* Empty map cell for: S_IFIRAWY1    variable wave = 12*/ ;
S_IFPEN=S12IFPEN ;
S_IFPENA=S12IFPENA ;
S_IFSDI=S12IFSDI ;
S_IFSRET=S12IFSRET ;
S1_IFSSDI=S12IFSSDI ;
/* Empty map cell for: S_IFSSDI      variable wave = 12*/ ;
/* Empty map cell for: S_IFSSI       variable wave = 12*/ ;
S_IFUNEM=S12IFUNEM ;
S1_IFUNWC=S12IFUNWC ;
/* Empty map cell for: S2_IFUNWC     variable wave = 12*/ ;
S_IFWCMP=S12IFWCMP ;
S_IGXFR=S12IGXFR ;
S_IIRAW=S12IIRAW ;
S_IIRAWY1=S12IIRAWY1 ;
S_IMRC=S12IMRC ;
/* Empty map cell for: S_IMRC20      variable wave = 12*/ ;
/* Empty map cell for: S_INHER       variable wave = 12*/ ;
S_INHPE=S12INHPE ;
S_INHPFN=S12INHPFN ;
S_INHPNFN=S12INHPNFN ;
S_INHPPN=S12INHPPN ;
S_INHPTN=S12INHPTN ;
S_INHPUN=S12INHPUN ;
S_INLBRF=S12INLBRF ;
S_IPEN=S12IPEN ;
S_IPENA=S12IPENA ;
S_ISDI=S12ISDI ;
S_ISRET=S12ISRET ;
S_ISSDI=S12ISSDI ;
S_ISSI=S12ISSI ;
S_IUNEM=S12IUNEM ;
S_IUNWC=S12IUNWC ;
S_IWBEG=S12IWBEG ;
/* Empty map cell for: S_IWBEGF      variable wave = 12*/ ;
S_IWCMP=S12IWCMP ;
S_IWEND=S12IWEND ;
/* Empty map cell for: S_IWENDF      variable wave = 12*/ ;
S_IWENDM=S12IWENDM ;
S_IWENDY=S12IWENDY ;
S_IWMID=S12IWMID ;
S_IWMIDF=S12IWMIDF ;
S_IWSTAT=S12IWSTAT ;
S_JCIND=S12JCIND ;
S_JCINDB=S12JCINDB ;
S_JCINDC=S12JCINDC ;
S_JCOCC=S12JCOCC ;
S_JCOCCA=S12JCOCCA ;
S_JCOCCB=S12JCOCCB ;
S_JCOCCC=S12JCOCCC ;
S_JCPEN=S12JCPEN ;
/* Empty map cell for: S_JCPENF      variable wave = 12*/ ;
S_JCTEN=S12JCTEN ;
S_JHOUR2=S12JHOUR2 ;
S_JHOURS=S12JHOURS ;
S_JJOBS=S12JJOBS ;
S_JLASTM=S12JLASTM ;
S_JLASTY=S12JLASTY ;
S_JLIFT=S12JLIFT ;
S_JLIND=S12JLIND ;
S_JLINDB=S12JLINDB ;
S_JLINDC=S12JLINDC ;
S_JLMIS=S12JLMIS ;
S_JLOCC=S12JLOCC ;
S_JLOCCA=S12JLOCCA ;
S_JLOCCB=S12JLOCCB ;
S_JLOCCC=S12JLOCCC ;
S_JLTEN=S12JLTEN ;
S_JLTENF=S12JLTENF ;
S_JMISS=S12JMISS ;
S_JNJOB=S12JNJOB ;
S_JNJOB5=S12JNJOB5 ;
/* Empty map cell for: S1_JOG        variable wave = 12*/ ;
/* Empty map cell for: S2_JOG        variable wave = 12*/ ;
S_JOG=S12JOG ;
S_JOGA=S12JOGA ;
/* Empty map cell for: S_JOGW        variable wave = 12*/ ;
S_JPHYS=S12JPHYS ;
S_JSIGHT=S12JSIGHT ;
S_JSTOOP=S12JSTOOP ;
S_JSTRES=S12JSTRES ;
S_JWEEK2=S12JWEEK2 ;
S_JWEEKS=S12JWEEKS ;
S_JYEARM=S12JYEARM ;
S_JYEARS=S12JYEARS ;
S_LBAGR=S12LBAGR ;
S_LBASSISTPRB=S12LBASSISTPRB ;
S_LBCOMP=S12LBCOMP ;
S_LBCON10=S12LBCON10 ;
S_LBCON5=S12LBCON5 ;
S_LBELIG=S12LBELIG ;
S_LBEXT=S12LBEXT ;
S_LBFAMDRUGPRB=S12LBFAMDRUGPRB ;
S_LBFAMHLTHPRB=S12LBFAMHLTHPRB ;
S_LBFINPRB=S12LBFINPRB ;
S_LBHLTHPRB=S12LBHLTHPRB ;
S_LBHOUSEPRB=S12LBHOUSEPRB ;
S_LBLONELY11=S12LBLONELY11 ;
S_LBLONELY3=S12LBLONELY3 ;
S_LBNEGAFFECT=S12LBNEGAFFECT ;
/* Empty map cell for: S_LBNEGAFFECT6variable wave = 12*/ ;
S_LBNEUR=S12LBNEUR ;
S_LBONCHRSTR=S12LBONCHRSTR ;
S_LBOPEN=S12LBOPEN ;
S_LBPOSAFFECT=S12LBPOSAFFECT ;
/* Empty map cell for: S_LBPOSAFFECT6variable wave = 12*/ ;
S_LBRF=S12LBRF ;
S_LBRFH=S12LBRFH ;
S_LBRFY=S12LBRFY ;
S_LBRLTNSHPRB=S12LBRLTNSHPRB ;
S_LBSATCITY=S12LBSATCITY ;
S_LBSATFAM=S12LBSATFAM ;
S_LBSATFIN=S12LBSATFIN ;
S_LBSATHLTH=S12LBSATHLTH ;
S_LBSATHOME=S12LBSATHOME ;
S_LBSATINC=S12LBSATINC ;
S_LBSATLEISURE=S12LBSATLEISURE ;
/* Empty map cell for: S_LBSATLIFE   variable wave = 12*/ ;
S_LBSATWLF=S12LBSATWLF ;
S_LBWGTR=S12LBWGTR ;
S_LBWORKPRB=S12LBWORKPRB ;
S_LGMUSA=S12LGMUSA ;
/* Empty map cell for: S_LGMUSW      variable wave = 12*/ ;
/* Empty map cell for: S_LHTACT      variable wave = 12*/ ;
S_LIFEIN=S12LIFEIN ;
/* Empty map cell for: S1_LIFT       variable wave = 12*/ ;
/* Empty map cell for: S2_LIFT       variable wave = 12*/ ;
S_LIFT=S12LIFT ;
S_LIFTA=S12LIFTA ;
/* Empty map cell for: S_LIFTW       variable wave = 12*/ ;
S_LIV10=S12LIV10 ;
S_LIV10A=S12LIV10A ;
S_LIV10P=S12LIV10P ;
S_LIV10R=S12LIV10R ;
S_LIV75=S12LIV75 ;
S_LIV75C=S12LIV75C ;
S_LIV75F=S12LIV75F ;
S_LIV75P=S12LIV75P ;
S_LIV75R=S12LIV75R ;
/* Empty map cell for: S_LIV85       variable wave = 12*/ ;
/* Empty map cell for: S_LIV85C      variable wave = 12*/ ;
/* Empty map cell for: S_LIV85F      variable wave = 12*/ ;
/* Empty map cell for: S_LIV85P      variable wave = 12*/ ;
/* Empty map cell for: S_LIV85R      variable wave = 12*/ ;
S_LIV8XC=S12LIV8XC ;
S_LIV8XF=S12LIV8XF ;
S_LIVBRO=S12LIVBRO ;
S_LIVPAR=S12LIVPAR ;
S_LIVSIB=S12LIVSIB ;
S_LIVSIS=S12LIVSIS ;
S_LOST=S12LOST ;
/* Empty map cell for: S_LTACTF      variable wave = 12*/ ;
/* Empty map cell for: S_LTACTN      variable wave = 12*/ ;
/* Empty map cell for: S_LTACTP      variable wave = 12*/ ;
S_LTACTX=S12LTACTX ;
S_LTCPRM=S12LTCPRM ;
S_LUNG=S12LUNG ;
S_LUNGE=S12LUNGE ;
S_LUNGEF=S12LUNGEF ;
S_LUNGF=S12LUNGF ;
S_LUNGQ=S12LUNGQ ;
S_LUNGS=S12LUNGS ;
S_MAMMOG=S12MAMMOG ;
/* Empty map cell for: S1_MAP        variable wave = 12*/ ;
/* Empty map cell for: S2_MAP        variable wave = 12*/ ;
S_MAP=S12MAP ;
S_MAPA=S12MAPA ;
/* Empty map cell for: S_MAPW        variable wave = 12*/ ;
S_MCURLN=S12MCURLN ;
/* Empty map cell for: S_MCWV        variable wave = 12*/ ;
/* Empty map cell for: S_MCWVW       variable wave = 12*/ ;
S_MDACTX=S12MDACTX ;
S_MDIV=S12MDIV ;
S_MEALS=S12MEALS ;
S_MEALSA=S12MEALSA ;
S_MEALSH=S12MEALSH ;
/* Empty map cell for: S_MEALSR      variable wave = 12*/ ;
/* Empty map cell for: S2_MEDS       variable wave = 12*/ ;
S_MEDS=S12MEDS ;
S_MEDSA=S12MEDSA ;
S_MEDSH=S12MEDSH ;
/* Empty map cell for: S_MEDSR       variable wave = 12*/ ;
S_MEDUC=S12MEDUC ;
/* Empty map cell for: S_MEMRY       variable wave = 12*/ ;
/* Empty map cell for: S_MEMRYE      variable wave = 12*/ ;
/* Empty map cell for: S_MEMRYEF     variable wave = 12*/ ;
/* Empty map cell for: S_MEMRYF      variable wave = 12*/ ;
/* Empty map cell for: S_MEMRYQ      variable wave = 12*/ ;
/* Empty map cell for: S_MEMRYS      variable wave = 12*/ ;
S_MEND=S12MEND ;
S_MLEN=S12MLEN ;
S_MLENM=S12MLENM ;
S_MNEV=S12MNEV ;
S_MO=S12MO ;
S_MOBILA=S12MOBILA ;
/* Empty map cell for: S_MOBILW      variable wave = 12*/ ;
S_MOMAGE=S12MOMAGE ;
S_MOMLIV=S12MOMLIV ;
/* Empty map cell for: S2_MONEY      variable wave = 12*/ ;
S_MONEY=S12MONEY ;
S_MONEYA=S12MONEYA ;
S_MONEYH=S12MONEYH ;
/* Empty map cell for: S_MONEYR      variable wave = 12*/ ;
S_MPART=S12MPART ;
S_MRCT=S12MRCT ;
S_MRPREM=S12MRPREM ;
S_MSTAT=S12MSTAT ;
S_MSTATF=S12MSTATF ;
S_MSTATH=S12MSTATH ;
S_MSTOT=S12MSTOT ;
S_MWID=S12MWID ;
S_NHMDAY=S12NHMDAY ;
S_NHMLIV=S12NHMLIV ;
S_NHMMVM=S12NHMMVM ;
S_NHMMVY=S12NHMMVY ;
S_NOTICS=S12NOTICS ;
S_NOVOC=S12NOVOC ;
S_NRSHOM=S12NRSHOM ;
S_NRSNIT=S12NRSNIT ;
S_NRSTIM=S12NRSTIM ;
/* Empty map cell for: S_NSSCRE      variable wave = 12*/ ;
/* Empty map cell for: S_NSSCSE      variable wave = 12*/ ;
S_OAHDID=S12OAHDID ;
S_OHRSID=S12OHRSID ;
S_OOPMD=S12OOPMD ;
S_OOPMDF=S12OOPMDF ;
S_OOPMDO=S12OOPMDO ;
S_OOPMDOF=S12OOPMDOF ;
S_OUTPT=S12OUTPT ;
S_PAPSM=S12PAPSM ;
/* Empty map cell for: S_PARTD       variable wave = 12*/ ;
S_PENCT=S12PENCT ;
S_PENIC1=S12PENIC1 ;
S_PENIC2=S12PENIC2 ;
S_PENINC=S12PENINC ;
S_PENI_N=S12PENI_N ;
/* Empty map cell for: S2_PHONE      variable wave = 12*/ ;
S_PHONE=S12PHONE ;
S_PHONEA=S12PHONEA ;
S_PHONEH=S12PHONEH ;
/* Empty map cell for: S_PHONER      variable wave = 12*/ ;
S_PMBMI=S12PMBMI ;
S_PMHGHT=S12PMHGHT ;
S_PMHGHTS=S12PMHGHTS ;
S_PMWAIST=S12PMWAIST ;
S_PMWAISTC=S12PMWAISTC ;
S_PMWGHT=S12PMWGHT ;
S_PMWGHTF=S12PMWGHTF ;
S_PMWGHTS=S12PMWGHTS ;
S_PNHM5Y=S12PNHM5Y ;
S_PRCHMEM=S12PRCHMEM ;
S_PRES=S12PRES ;
S_PRMEM=S12PRMEM ;
S_PROST=S12PROST ;
S_PROXY=S12PROXY ;
S_PRPCNT=S12PRPCNT ;
S_PRPRM1=S12PRPRM1 ;
S_PRPRM2=S12PRPRM2 ;
S_PRPRM3=S12PRPRM3 ;
S_PRSRC1=S12PRSRC1 ;
S_PRSRC2=S12PRSRC2 ;
S_PRSRC3=S12PRSRC3 ;
S_PSTMEM=S12PSTMEM ;
S_PSYCH=S12PSYCH ;
S_PSYCHE=S12PSYCHE ;
S_PSYCHEF=S12PSYCHEF ;
S_PSYCHF=S12PSYCHF ;
S_PSYCHQ=S12PSYCHQ ;
S_PSYCHS=S12PSYCHS ;
S_PTYP1=S12PTYP1 ;
S_PTYP2=S12PTYP2 ;
S_PTYP3=S12PTYP3 ;
S_PTYP4=S12PTYP4 ;
S_PTYPD1=S12PTYPD1 ;
S_PTYPD2=S12PTYPD2 ;
S_PTYPD3=S12PTYPD3 ;
S_PTYPD4=S12PTYPD4 ;
S_PTYPF1=S12PTYPF1 ;
S_PTYPF2=S12PTYPF2 ;
S_PTYPF3=S12PTYPF3 ;
S_PTYPF4=S12PTYPF4 ;
S_PUFF=S12PUFF ;
S_PUFFPOS=S12PUFFPOS ;
/* Empty map cell for: S1_PUSH       variable wave = 12*/ ;
/* Empty map cell for: S2_PUSH       variable wave = 12*/ ;
S_PUSH=S12PUSH ;
S_PUSHA=S12PUSHA ;
/* Empty map cell for: S_PUSHW       variable wave = 12*/ ;
S_RACEM=S12RACEM ;
S_RELIG=S12RELIG ;
S_RETDTWV=S12RETDTWV ;
S_RETEMP=S12RETEMP ;
/* Empty map cell for: S_RETINC      variable wave = 12*/ ;
/* Empty map cell for: S_RETLIV      variable wave = 12*/ ;
S_RETMON=S12RETMON ;
S_RETSAT=S12RETSAT ;
/* Empty map cell for: S_RETWLT      variable wave = 12*/ ;
/* Empty map cell for: S_RETWRK      variable wave = 12*/ ;
/* Empty map cell for: S_RETWSP      variable wave = 12*/ ;
S_RETYR=S12RETYR ;
/* Empty map cell for: S_RISK        variable wave = 12*/ ;
/* Empty map cell for: S_RISK6       variable wave = 12*/ ;
S_RPLNYA=S12RPLNYA ;
S_RPLNYR=S12RPLNYR ;
S_RXPREM=S12RXPREM ;
S_RYRCMP=S12RYRCMP ;
S_SADLF=S12SADLF ;
S_SAMEJOB=S12SAMEJOB ;
S_SAMEMP=S12SAMEMP ;
S_SAYRET=S12SAYRET ;
S_SCIS=S12SCIS ;
S_SDIAPL=S12SDIAPL ;
S_SDIAPLM=S12SDIAPLM ;
S_SDIAPLY=S12SDIAPLY ;
S_SDIAPP=S12SDIAPP ;
S_SDIAPPM=S12SDIAPPM ;
S_SDIAPPY=S12SDIAPPY ;
S_SDIDEN=S12SDIDEN ;
S_SDIREC=S12SDIREC ;
S_SDIRECM=S12SDIRECM ;
S_SDIRECY=S12SDIRECY ;
S_SDISTP=S12SDISTP ;
S_SDISTPM=S12SDISTPM ;
S_SDISTPY=S12SDISTPY ;
S_SER7=S12SER7 ;
S_SHLT=S12SHLT ;
S_SHLTC=S12SHLTC ;
S_SHLTCF=S12SHLTCF ;
S_SHOP=S12SHOP ;
S_SHOPA=S12SHOPA ;
S_SHOPH=S12SHOPH ;
/* Empty map cell for: S_SHOPR       variable wave = 12*/ ;
/* Empty map cell for: S1_SIT        variable wave = 12*/ ;
/* Empty map cell for: S2_SIT        variable wave = 12*/ ;
S_SIT=S12SIT ;
S_SITA=S12SITA ;
/* Empty map cell for: S_SITW        variable wave = 12*/ ;
/* Empty map cell for: S_SLEEP       variable wave = 12*/ ;
/* Empty map cell for: S_SLEEPE      variable wave = 12*/ ;
/* Empty map cell for: S_SLEEPEF     variable wave = 12*/ ;
/* Empty map cell for: S_SLEEPQ      variable wave = 12*/ ;
S_SLEEPR=S12SLEEPR ;
/* Empty map cell for: S_SLEEPS      variable wave = 12*/ ;
/* Empty map cell for: S_SLEEPX      variable wave = 12*/ ;
S_SLFEMP=S12SLFEMP ;
S_SLFMEM=S12SLFMEM ;
S_SMOKEN=S12SMOKEN ;
S_SMOKEV=S12SMOKEV ;
S_SPCFAC=S12SPCFAC ;
/* Empty map cell for: S_SSAPL       variable wave = 12*/ ;
/* Empty map cell for: S_SSAPLM      variable wave = 12*/ ;
/* Empty map cell for: S_SSAPLY      variable wave = 12*/ ;
/* Empty map cell for: S_SSAPP       variable wave = 12*/ ;
/* Empty map cell for: S_SSAPPM      variable wave = 12*/ ;
/* Empty map cell for: S_SSAPPY      variable wave = 12*/ ;
/* Empty map cell for: S_SSDEN       variable wave = 12*/ ;
S_SSDI=S12SSDI ;
S_SSIAPL=S12SSIAPL ;
S_SSIAPLM=S12SSIAPLM ;
S_SSIAPLY=S12SSIAPLY ;
S_SSIAPP=S12SSIAPP ;
S_SSIAPPM=S12SSIAPPM ;
S_SSIAPPY=S12SSIAPPY ;
S_SSIDEN=S12SSIDEN ;
S_SSIREC=S12SSIREC ;
S_SSIRECM=S12SSIRECM ;
S_SSIRECY=S12SSIRECY ;
S_SSISTP=S12SSISTP ;
S_SSISTPM=S12SSISTPM ;
S_SSISTPY=S12SSISTPY ;
/* Empty map cell for: S_SSREC       variable wave = 12*/ ;
/* Empty map cell for: S_SSRECM      variable wave = 12*/ ;
/* Empty map cell for: S_SSRECY      variable wave = 12*/ ;
/* Empty map cell for: S_SSSTP       variable wave = 12*/ ;
/* Empty map cell for: S_SSSTPM      variable wave = 12*/ ;
/* Empty map cell for: S_SSSTPY      variable wave = 12*/ ;
/* Empty map cell for: S_SSWRER      variable wave = 12*/ ;
/* Empty map cell for: S_SSWRNR      variable wave = 12*/ ;
/* Empty map cell for: S_SSWRXA      variable wave = 12*/ ;
/* Empty map cell for: S_SSWSER      variable wave = 12*/ ;
/* Empty map cell for: S_SSWSNR      variable wave = 12*/ ;
/* Empty map cell for: S_SSWSXA      variable wave = 12*/ ;
S_STATUS=S12STATUS ;
/* Empty map cell for: S1_STOOP      variable wave = 12*/ ;
/* Empty map cell for: S2_STOOP      variable wave = 12*/ ;
S_STOOP=S12STOOP ;
S_STOOPA=S12STOOPA ;
/* Empty map cell for: S_STOOPW      variable wave = 12*/ ;
S_STROK=S12STROK ;
S_STROKE=S12STROKE ;
S_STROKEF=S12STROKEF ;
S_STROKF=S12STROKF ;
S_STROKQ=S12STROKQ ;
S_STROKS=S12STROKS ;
S_TIMWLK=S12TIMWLK ;
S_TIMWLKA=S12TIMWLKA ;
/* Empty map cell for: S_TLIPRM      variable wave = 12*/ ;
/* Empty map cell for: S2_TOILT      variable wave = 12*/ ;
S_TOILT=S12TOILT ;
S_TOILTA=S12TOILTA ;
/* Empty map cell for: S2_TOILTH     variable wave = 12*/ ;
S_TOILTH=S12TOILTH ;
/* Empty map cell for: S_TOTMBF      variable wave = 12*/ ;
/* Empty map cell for: S_TOTMBI      variable wave = 12*/ ;
/* Empty map cell for: S_TOTMD       variable wave = 12*/ ;
/* Empty map cell for: S_TOTMDF      variable wave = 12*/ ;
S_TR20=S12TR20 ;
/* Empty map cell for: S_TR40        variable wave = 12*/ ;
S_TYLTC=S12TYLTC ;
/* Empty map cell for: S_ULCER       variable wave = 12*/ ;
S_UNEMP=S12UNEMP ;
S_UNION=S12UNION ;
S_UNIONF=S12UNIONF ;
S_VETRN=S12VETRN ;
/* Empty map cell for: S_VGACTF      variable wave = 12*/ ;
/* Empty map cell for: S_VGACTN      variable wave = 12*/ ;
/* Empty map cell for: S_VGACTP      variable wave = 12*/ ;
S_VGACTX=S12VGACTX ;
/* Empty map cell for: S_VIGACT      variable wave = 12*/ ;
S_VOCAB=S12VOCAB ;
S_VP=S12VP ;
/* Empty map cell for: S1_WALK1      variable wave = 12*/ ;
/* Empty map cell for: S2_WALK1      variable wave = 12*/ ;
S_WALK1=S12WALK1 ;
S_WALK1A=S12WALK1A ;
/* Empty map cell for: S_WALK1W      variable wave = 12*/ ;
/* Empty map cell for: S1_WALKR      variable wave = 12*/ ;
/* Empty map cell for: S2_WALKR      variable wave = 12*/ ;
S_WALKR=S12WALKR ;
S_WALKRA=S12WALKRA ;
S_WALKRE=S12WALKRE ;
/* Empty map cell for: S2_WALKRH     variable wave = 12*/ ;
S_WALKRH=S12WALKRH ;
/* Empty map cell for: S_WALKRW      variable wave = 12*/ ;
/* Empty map cell for: S1_WALKS      variable wave = 12*/ ;
/* Empty map cell for: S2_WALKS      variable wave = 12*/ ;
S_WALKS=S12WALKS ;
S_WALKSA=S12WALKSA ;
/* Empty map cell for: S_WALKSW      variable wave = 12*/ ;
S_WANDER=S12WANDER ;
S_WEIGHT=S12WEIGHT ;
S_WGFHR=S12WGFHR ;
S_WGFWK=S12WGFWK ;
S_WGIHR=S12WGIHR ;
S_WGIWK=S12WGIWK ;
/* Empty map cell for: S_WHAPPX      variable wave = 12*/ ;
S_WHAPPY=S12WHAPPY ;
S_WLIPRM=S12WLIPRM ;
S_WORK=S12WORK ;
S_WORK2=S12WORK2 ;
S_WORK62=S12WORK62 ;
S_WORK62F=S12WORK62F ;
S_WORK65=S12WORK65 ;
S_WORK65F=S12WORK65F ;
S_WORK70=S12WORK70 ;
S_WORK70A=S12WORK70A ;
S_WORK70AF=S12WORK70AF ;
S_WORK70F=S12WORK70F ;
/* Empty map cell for: S_WORKLM      variable wave = 12*/ ;
S_WTCRNH=S12WTCRNH ;
S_WTRESP=S12WTRESP ;
S_WTR_NH=S12WTR_NH ;
S_YR=S12YR ;
if inw=1 then output ;
%put --- Slong table ;
%initvars ;
%put ---- Slong table ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
/* --- RAND variable:HHIDPN  included */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
/* --- RAND variable:HACOHORT  included */ ;
WAVE_NUMBER=13 ;
WAVE_NAME=  'hrs_wave'||strip(put(wave_number,3.))     /* --- Derived variable  */ ;
studyyr= hrs_studyyr(wave_number,
hacohort)     /* --- Derived variable  */ ;
CYEAR='yr2016' ;
H_HHID=H13HHID ;
H_HHIDC=H13HHIDC ;
SUBHH= substr(H_HHIDC,7)     /* --- Derived variable  */ ;
INW=INW13 ;
S_HHIDPN=S13HHIDPN ;
/* --- RAND variable:SASSAGEB  included */ ;
/* --- RAND variable:SASSAGEM  included */ ;
/* --- RAND variable:SASSRECV  included */ ;
/* Empty map cell for: S_ACGTOT      variable wave = 13*/ ;
S_ADL5A=S13ADL5A ;
S_ADL5H=S13ADL5H ;
S_ADL6A=S13ADL6A ;
S_ADL6H=S13ADL6H ;
/* Empty map cell for: S_ADLR10      variable wave = 13*/ ;
/* Empty map cell for: S_ADLW        variable wave = 13*/ ;
S_AGEM_B=S13AGEM_B ;
S_AGEM_E=S13AGEM_E ;
S_AGEM_M=S13AGEM_M ;
S_AGEY_B=S13AGEY_B ;
S_AGEY_E=S13AGEY_E ;
S_AGEY_M=S13AGEY_M ;
S_AHDSMP=S13AHDSMP ;
/* Empty map cell for: S_AIMR10      variable wave = 13*/ ;
S_ALONE=S13ALONE ;
S_ALZHE=S13ALZHE ;
S_ALZHEE=S13ALZHEE ;
S_ALZHEEF=S13ALZHEEF ;
S_ALZHEF=S13ALZHEF ;
S_ALZHEQ=S13ALZHEQ ;
S_ALZHES=S13ALZHES ;
/* Empty map cell for: S_AMSTOT      variable wave = 13*/ ;
S_ANS3PQ=S13ANS3PQ ;
/* Empty map cell for: S1_ARMS       variable wave = 13*/ ;
/* Empty map cell for: S2_ARMS       variable wave = 13*/ ;
S_ARMS=S13ARMS ;
S_ARMSA=S13ARMSA ;
/* Empty map cell for: S_ARMSW       variable wave = 13*/ ;
S_ARTHR=S13ARTHR ;
S_ARTHRE=S13ARTHRE ;
S_ARTHREF=S13ARTHREF ;
S_ARTHRF=S13ARTHRF ;
S_ARTHRQ=S13ARTHRQ ;
S_ARTHRS=S13ARTHRS ;
/* Empty map cell for: S_ATR20       variable wave = 13*/ ;
S_BACK=S13BACK ;
S_BALFUL=S13BALFUL ;
S_BALFULC=S13BALFULC ;
S_BALFULT=S13BALFULT ;
S_BALSBS=S13BALSBS ;
S_BALSBSC=S13BALSBSC ;
S_BALSEMI=S13BALSEMI ;
S_BALSEMIC=S13BALSEMIC ;
/* Empty map cell for: S1_BATH       variable wave = 13*/ ;
/* Empty map cell for: S2_BATH       variable wave = 13*/ ;
S_BATH=S13BATH ;
S_BATHA=S13BATHA ;
/* Empty map cell for: S2_BATHH      variable wave = 13*/ ;
S_BATHH=S13BATHH ;
/* Empty map cell for: S_BATHW       variable wave = 13*/ ;
S_BDATE=S13BDATE ;
/* Empty map cell for: S1_BED        variable wave = 13*/ ;
/* Empty map cell for: S2_BED        variable wave = 13*/ ;
S_BED=S13BED ;
S_BEDA=S13BEDA ;
S_BEDE=S13BEDE ;
/* Empty map cell for: S2_BEDH       variable wave = 13*/ ;
S_BEDH=S13BEDH ;
/* Empty map cell for: S_BEDW        variable wave = 13*/ ;
S_BEQ100=S13BEQ100 ;
S_BEQ10K=S13BEQ10K ;
S_BEQ500=S13BEQ500 ;
S_BEQANY=S13BEQANY ;
/* Empty map cell for: S_BEQLRG      variable wave = 13*/ ;
S_BFLAG=S13BFLAG ;
S_BMI=S13BMI ;
S_BMONTH=S13BMONTH ;
S_BPDIA=S13BPDIA ;
S_BPLACE=S13BPLACE ;
S_BPLACF=S13BPLACF ;
S_BPPOS=S13BPPOS ;
S_BPPULS=S13BPPULS ;
S_BPSYS=S13BPSYS ;
/* Empty map cell for: S_BREAST      variable wave = 13*/ ;
S_BWC20=S13BWC20 ;
/* Empty map cell for: S_BWC86       variable wave = 13*/ ;
S_BYEAR=S13BYEAR ;
S_CACT=S13CACT ;
/* Empty map cell for: S1_CALC       variable wave = 13*/ ;
/* Empty map cell for: S2_CALC       variable wave = 13*/ ;
/* Empty map cell for: S_CALCA       variable wave = 13*/ ;
/* Empty map cell for: S_CALCW       variable wave = 13*/ ;
S_CANCR=S13CANCR ;
S_CANCRE=S13CANCRE ;
S_CANCREF=S13CANCREF ;
S_CANCRF=S13CANCRF ;
S_CANCRQ=S13CANCRQ ;
S_CANCRS=S13CANCRS ;
S_CENDIV=S13CENDIV ;
S_CENREG=S13CENREG ;
S_CESD=S13CESD ;
S_CESDM=S13CESDM ;
/* Empty map cell for: S1_CHAIR      variable wave = 13*/ ;
/* Empty map cell for: S2_CHAIR      variable wave = 13*/ ;
S_CHAIR=S13CHAIR ;
S_CHAIRA=S13CHAIRA ;
/* Empty map cell for: S_CHAIRW      variable wave = 13*/ ;
S_CHOLST=S13CHOLST ;
S_CLAIMED=S13CLAIMED ;
/* Empty map cell for: S1_CLIM1      variable wave = 13*/ ;
/* Empty map cell for: S2_CLIM1      variable wave = 13*/ ;
S_CLIM1=S13CLIM1 ;
S_CLIM1A=S13CLIM1A ;
/* Empty map cell for: S_CLIM1W      variable wave = 13*/ ;
/* Empty map cell for: S1_CLIMS      variable wave = 13*/ ;
/* Empty map cell for: S2_CLIMS      variable wave = 13*/ ;
S_CLIMS=S13CLIMS ;
S_CLIMSA=S13CLIMSA ;
/* Empty map cell for: S_CLIMSW      variable wave = 13*/ ;
S_COGTOT=S13COGTOT ;
S_COHBYR=S13COHBYR ;
S_COHORT=S13COHORT ;
/* Empty map cell for: S_COMP        variable wave = 13*/ ;
/* Empty map cell for: S_COMPW       variable wave = 13*/ ;
S_CONDE=S13CONDE ;
S_CONDEF=S13CONDEF ;
S_CONDS=S13CONDS ;
S_CONDSF=S13CONDSF ;
S_CONDSP=S13CONDSP ;
S_COVR=S13COVR ;
S_COVRT=S13COVRT ;
S_COVS=S13COVS ;
S_DADAGE=S13DADAGE ;
S_DADLIV=S13DADLIV ;
S_DAGE_M=S13DAGE_M ;
S_DAGE_Y=S13DAGE_Y ;
S_DCBAL1=S13DCBAL1 ;
S_DCBAL2=S13DCBAL2 ;
S_DCBAL3=S13DCBAL3 ;
S_DCBAL4=S13DCBAL4 ;
S_DCBENE1=S13DCBENE1 ;
S_DCBENE2=S13DCBENE2 ;
S_DCBENE3=S13DCBENE3 ;
S_DCBENE4=S13DCBENE4 ;
S_DCCONT1=S13DCCONT1 ;
S_DCCONT2=S13DCCONT2 ;
S_DCCONT3=S13DCCONT3 ;
S_DCCONT4=S13DCCONT4 ;
S_DCMODE1=S13DCMODE1 ;
S_DCMODE2=S13DCMODE2 ;
S_DCMODE3=S13DCMODE3 ;
S_DCMODE4=S13DCMODE4 ;
S_DCPCT1=S13DCPCT1 ;
S_DCPCT2=S13DCPCT2 ;
S_DCPCT3=S13DCPCT3 ;
S_DCPCT4=S13DCPCT4 ;
S_DDATE=S13DDATE ;
S_DEMEN=S13DEMEN ;
S_DEMENE=S13DEMENE ;
S_DEMENEF=S13DEMENEF ;
S_DEMENF=S13DEMENF ;
S_DEMENQ=S13DEMENQ ;
S_DEMENS=S13DEMENS ;
S_DENTST=S13DENTST ;
S_DEPRES=S13DEPRES ;
/* Empty map cell for: S_DEPREX      variable wave = 13*/ ;
S_DIAB=S13DIAB ;
S_DIABE=S13DIABE ;
S_DIABEF=S13DIABEF ;
S_DIABF=S13DIABF ;
S_DIABQ=S13DIABQ ;
S_DIABS=S13DIABS ;
/* Empty map cell for: S1_DIME       variable wave = 13*/ ;
/* Empty map cell for: S2_DIME       variable wave = 13*/ ;
S_DIME=S13DIME ;
S_DIMEA=S13DIMEA ;
/* Empty map cell for: S_DIMEW       variable wave = 13*/ ;
S_DLRC=S13DLRC ;
/* Empty map cell for: S_DLRC20      variable wave = 13*/ ;
S_DMONTH=S13DMONTH ;
S_DOCTIM=S13DOCTIM ;
S_DOCTOR=S13DOCTOR ;
/* Empty map cell for: S1_DRESS      variable wave = 13*/ ;
/* Empty map cell for: S2_DRESS      variable wave = 13*/ ;
S_DRESS=S13DRESS ;
S_DRESSA=S13DRESSA ;
/* Empty map cell for: S2_DRESSH     variable wave = 13*/ ;
S_DRESSH=S13DRESSH ;
/* Empty map cell for: S_DRESSW      variable wave = 13*/ ;
S_DRINK=S13DRINK ;
S_DRINKD=S13DRINKD ;
S_DRINKN=S13DRINKN ;
/* Empty map cell for: S_DRINKR      variable wave = 13*/ ;
S_DRUGS=S13DRUGS ;
S_DSIAMT=S13DSIAMT ;
S_DSRC=S13DSRC ;
S_DSSAMT=S13DSSAMT ;
S_DSTAT=S13DSTAT ;
S_DTIMTDTH=S13DTIMTDTH ;
S_DW=S13DW ;
S_DY=S13DY ;
S_DYEAR=S13DYEAR ;
/* Empty map cell for: S1_EAT        variable wave = 13*/ ;
/* Empty map cell for: S2_EAT        variable wave = 13*/ ;
S_EAT=S13EAT ;
S_EATA=S13EATA ;
/* Empty map cell for: S2_EATH       variable wave = 13*/ ;
S_EATH=S13EATH ;
/* Empty map cell for: S_EATW        variable wave = 13*/ ;
S_EDEGRM=S13EDEGRM ;
S_EDUC=S13EDUC ;
S_EDYRS=S13EDYRS ;
S_EFFORT=S13EFFORT ;
/* Empty map cell for: S_EFFORX      variable wave = 13*/ ;
S_ENLIFE=S13ENLIFE ;
/* Empty map cell for: S_ENLIFX      variable wave = 13*/ ;
S_EVBRN=S13EVBRN ;
S_EVBRNF=S13EVBRNF ;
S_FAMR=S13FAMR ;
S_FBWC20=S13FBWC20 ;
/* Empty map cell for: S_FBWC86      variable wave = 13*/ ;
S_FCACT=S13FCACT ;
S_FDLRC=S13FDLRC ;
S_FDW=S13FDW ;
S_FDY=S13FDY ;
S_FEDUC=S13FEDUC ;
S_FIMRC=S13FIMRC ;
S_FINEA=S13FINEA ;
S_FINPLN=S13FINPLN ;
S_FINR=S13FINR ;
/* Empty map cell for: S_FLAG        variable wave = 13*/ ;
S_FLONE=S13FLONE ;
/* Empty map cell for: S_FLONEX      variable wave = 13*/ ;
S_FLUSHT=S13FLUSHT ;
S_FMO=S13FMO ;
S_FPRES=S13FPRES ;
S_FPSTME=S13FPSTME ;
S_FSAD=S13FSAD ;
/* Empty map cell for: S_FSADX       variable wave = 13*/ ;
S_FSCIS=S13FSCIS ;
S_FSER7=S13FSER7 ;
S_FSIZE=S13FSIZE ;
S_FSIZEF=S13FSIZEF ;
S_FSLFME=S13FSLFME ;
S_FVOCAB=S13FVOCAB ;
S_FVP=S13FVP ;
S_FYR=S13FYR ;
S_GENDER=S13GENDER ;
S_GOING=S13GOING ;
/* Empty map cell for: S_GOINGX      variable wave = 13*/ ;
S_GOVMD=S13GOVMD ;
S_GOVMR=S13GOVMR ;
/* Empty map cell for: S_GOVOT       variable wave = 13*/ ;
S_GOVVA=S13GOVVA ;
S_GROSSA=S13GROSSA ;
S_GRP=S13GRP ;
S_GRPDOM=S13GRPDOM ;
S_GRPL=S13GRPL ;
S_GRPPOS=S13GRPPOS ;
S_GRPR=S13GRPR ;
S_HALUC=S13HALUC ;
/* Empty map cell for: S_HDLR20      variable wave = 13*/ ;
S_HEART=S13HEART ;
S_HEARTE=S13HEARTE ;
S_HEARTEF=S13HEARTEF ;
S_HEARTF=S13HEARTF ;
S_HEARTQ=S13HEARTQ ;
S_HEARTS=S13HEARTS ;
S_HECOV1=S13HECOV1 ;
S_HECOV2=S13HECOV2 ;
S_HECOV3=S13HECOV3 ;
S_HEIGHT=S13HEIGHT ;
S_HENUM=S13HENUM ;
S_HERET=S13HERET ;
S_HERTR1=S13HERTR1 ;
S_HERTR2=S13HERTR2 ;
S_HERTR3=S13HERTR3 ;
S_HERTS1=S13HERTS1 ;
S_HERTS2=S13HERTS2 ;
S_HERTS3=S13HERTS3 ;
S_HESRC1=S13HESRC1 ;
S_HESRC2=S13HESRC2 ;
S_HESRC3=S13HESRC3 ;
S_HHIDPN=S13HHIDPN ;
S_HIBP=S13HIBP ;
S_HIBPE=S13HIBPE ;
S_HIBPEF=S13HIBPEF ;
S_HIBPF=S13HIBPF ;
S_HIBPQ=S13HIBPQ ;
S_HIBPS=S13HIBPS ;
S_HIGOV=S13HIGOV ;
S_HILTC=S13HILTC ;
/* Empty map cell for: S_HIMR20      variable wave = 13*/ ;
S_HIOTHP=S13HIOTHP ;
S_HISPAN=S13HISPAN ;
S_HLPDYSF=S13HLPDYSF ;
S_HLPDYSNF=S13HLPDYSNF ;
S_HLPDYSP=S13HLPDYSP ;
S_HLPDYST=S13HLPDYST ;
S_HLPDYSU=S13HLPDYSU ;
S_HLPHRSF=S13HLPHRSF ;
S_HLPHRSNF=S13HLPHRSNF ;
S_HLPHRSP=S13HLPHRSP ;
S_HLPHRST=S13HLPHRST ;
S_HLPHRSU=S13HLPHRSU ;
S_HLPPDFA=S13HLPPDFA ;
S_HLPPDFN=S13HLPPDFN ;
S_HLPPDNFA=S13HLPPDNFA ;
S_HLPPDNFN=S13HLPPDNFN ;
S_HLPPDTA=S13HLPPDTA ;
S_HLPPDTN=S13HLPPDTN ;
S_HLPRFN=S13HLPRFN ;
S_HLPRNFN=S13HLPRNFN ;
S_HLPRPN=S13HLPRPN ;
S_HLPRTN=S13HLPRTN ;
S_HLPRUN=S13HLPRUN ;
S_HLTC3=S13HLTC3 ;
/* Empty map cell for: S_HLTC5       variable wave = 13*/ ;
/* Empty map cell for: S_HLTC5F      variable wave = 13*/ ;
S_HLTHLM=S13HLTHLM ;
S_HOMCAR=S13HOMCAR ;
S_HOSP=S13HOSP ;
S_HRSAMP=S13HRSAMP ;
S_HSPNIT=S13HSPNIT ;
S_HSPTIM=S13HSPTIM ;
/* Empty map cell for: S_HSWRKF      variable wave = 13*/ ;
/* Empty map cell for: S_HTR40       variable wave = 13*/ ;
S_IADL5A=S13IADL5A ;
S_IADL5H=S13IADL5H ;
S_IANN=S13IANN ;
S_IEARN=S13IEARN ;
S_IFANN=S13IFANN ;
S_IFEARN=S13IFEARN ;
S_IFGXFR=S13IFGXFR ;
S_IFIRAW=S13IFIRAW ;
/* Empty map cell for: S_IFIRAWY1    variable wave = 13*/ ;
S_IFPEN=S13IFPEN ;
S_IFPENA=S13IFPENA ;
S_IFSDI=S13IFSDI ;
S_IFSRET=S13IFSRET ;
S1_IFSSDI=S13IFSSDI ;
/* Empty map cell for: S_IFSSDI      variable wave = 13*/ ;
/* Empty map cell for: S_IFSSI       variable wave = 13*/ ;
S_IFUNEM=S13IFUNEM ;
S1_IFUNWC=S13IFUNWC ;
/* Empty map cell for: S2_IFUNWC     variable wave = 13*/ ;
S_IFWCMP=S13IFWCMP ;
S_IGXFR=S13IGXFR ;
S_IIRAW=S13IIRAW ;
S_IIRAWY1=S13IIRAWY1 ;
S_IMRC=S13IMRC ;
/* Empty map cell for: S_IMRC20      variable wave = 13*/ ;
/* Empty map cell for: S_INHER       variable wave = 13*/ ;
S_INHPE=S13INHPE ;
S_INHPFN=S13INHPFN ;
S_INHPNFN=S13INHPNFN ;
S_INHPPN=S13INHPPN ;
S_INHPTN=S13INHPTN ;
S_INHPUN=S13INHPUN ;
S_INLBRF=S13INLBRF ;
S_IPEN=S13IPEN ;
S_IPENA=S13IPENA ;
S_ISDI=S13ISDI ;
S_ISRET=S13ISRET ;
S_ISSDI=S13ISSDI ;
S_ISSI=S13ISSI ;
S_IUNEM=S13IUNEM ;
S_IUNWC=S13IUNWC ;
S_IWBEG=S13IWBEG ;
/* Empty map cell for: S_IWBEGF      variable wave = 13*/ ;
S_IWCMP=S13IWCMP ;
S_IWEND=S13IWEND ;
/* Empty map cell for: S_IWENDF      variable wave = 13*/ ;
S_IWENDM=S13IWENDM ;
S_IWENDY=S13IWENDY ;
S_IWMID=S13IWMID ;
S_IWMIDF=S13IWMIDF ;
S_IWSTAT=S13IWSTAT ;
S_JCIND=S13JCIND ;
S_JCINDB=S13JCINDB ;
S_JCINDC=S13JCINDC ;
S_JCOCC=S13JCOCC ;
S_JCOCCA=S13JCOCCA ;
S_JCOCCB=S13JCOCCB ;
S_JCOCCC=S13JCOCCC ;
S_JCPEN=S13JCPEN ;
/* Empty map cell for: S_JCPENF      variable wave = 13*/ ;
S_JCTEN=S13JCTEN ;
S_JHOUR2=S13JHOUR2 ;
S_JHOURS=S13JHOURS ;
S_JJOBS=S13JJOBS ;
S_JLASTM=S13JLASTM ;
S_JLASTY=S13JLASTY ;
S_JLIFT=S13JLIFT ;
S_JLIND=S13JLIND ;
S_JLINDB=S13JLINDB ;
S_JLINDC=S13JLINDC ;
S_JLMIS=S13JLMIS ;
S_JLOCC=S13JLOCC ;
S_JLOCCA=S13JLOCCA ;
S_JLOCCB=S13JLOCCB ;
S_JLOCCC=S13JLOCCC ;
S_JLTEN=S13JLTEN ;
S_JLTENF=S13JLTENF ;
S_JMISS=S13JMISS ;
S_JNJOB=S13JNJOB ;
S_JNJOB5=S13JNJOB5 ;
/* Empty map cell for: S1_JOG        variable wave = 13*/ ;
/* Empty map cell for: S2_JOG        variable wave = 13*/ ;
S_JOG=S13JOG ;
S_JOGA=S13JOGA ;
/* Empty map cell for: S_JOGW        variable wave = 13*/ ;
S_JPHYS=S13JPHYS ;
S_JSIGHT=S13JSIGHT ;
S_JSTOOP=S13JSTOOP ;
S_JSTRES=S13JSTRES ;
S_JWEEK2=S13JWEEK2 ;
S_JWEEKS=S13JWEEKS ;
S_JYEARM=S13JYEARM ;
S_JYEARS=S13JYEARS ;
S_LBAGR=S13LBAGR ;
S_LBASSISTPRB=S13LBASSISTPRB ;
S_LBCOMP=S13LBCOMP ;
S_LBCON10=S13LBCON10 ;
S_LBCON5=S13LBCON5 ;
S_LBELIG=S13LBELIG ;
S_LBEXT=S13LBEXT ;
S_LBFAMDRUGPRB=S13LBFAMDRUGPRB ;
S_LBFAMHLTHPRB=S13LBFAMHLTHPRB ;
S_LBFINPRB=S13LBFINPRB ;
S_LBHLTHPRB=S13LBHLTHPRB ;
S_LBHOUSEPRB=S13LBHOUSEPRB ;
S_LBLONELY11=S13LBLONELY11 ;
S_LBLONELY3=S13LBLONELY3 ;
S_LBNEGAFFECT=S13LBNEGAFFECT ;
/* Empty map cell for: S_LBNEGAFFECT6variable wave = 13*/ ;
S_LBNEUR=S13LBNEUR ;
S_LBONCHRSTR=S13LBONCHRSTR ;
S_LBOPEN=S13LBOPEN ;
S_LBPOSAFFECT=S13LBPOSAFFECT ;
/* Empty map cell for: S_LBPOSAFFECT6variable wave = 13*/ ;
S_LBRF=S13LBRF ;
S_LBRFH=S13LBRFH ;
S_LBRFY=S13LBRFY ;
S_LBRLTNSHPRB=S13LBRLTNSHPRB ;
S_LBSATCITY=S13LBSATCITY ;
S_LBSATFAM=S13LBSATFAM ;
S_LBSATFIN=S13LBSATFIN ;
S_LBSATHLTH=S13LBSATHLTH ;
S_LBSATHOME=S13LBSATHOME ;
S_LBSATINC=S13LBSATINC ;
S_LBSATLEISURE=S13LBSATLEISURE ;
/* Empty map cell for: S_LBSATLIFE   variable wave = 13*/ ;
S_LBSATWLF=S13LBSATWLF ;
S_LBWGTR=S13LBWGTR ;
S_LBWORKPRB=S13LBWORKPRB ;
S_LGMUSA=S13LGMUSA ;
/* Empty map cell for: S_LGMUSW      variable wave = 13*/ ;
/* Empty map cell for: S_LHTACT      variable wave = 13*/ ;
S_LIFEIN=S13LIFEIN ;
/* Empty map cell for: S1_LIFT       variable wave = 13*/ ;
/* Empty map cell for: S2_LIFT       variable wave = 13*/ ;
S_LIFT=S13LIFT ;
S_LIFTA=S13LIFTA ;
/* Empty map cell for: S_LIFTW       variable wave = 13*/ ;
S_LIV10=S13LIV10 ;
S_LIV10A=S13LIV10A ;
S_LIV10P=S13LIV10P ;
S_LIV10R=S13LIV10R ;
S_LIV75=S13LIV75 ;
S_LIV75C=S13LIV75C ;
S_LIV75F=S13LIV75F ;
S_LIV75P=S13LIV75P ;
S_LIV75R=S13LIV75R ;
/* Empty map cell for: S_LIV85       variable wave = 13*/ ;
/* Empty map cell for: S_LIV85C      variable wave = 13*/ ;
/* Empty map cell for: S_LIV85F      variable wave = 13*/ ;
/* Empty map cell for: S_LIV85P      variable wave = 13*/ ;
/* Empty map cell for: S_LIV85R      variable wave = 13*/ ;
S_LIV8XC=S13LIV8XC ;
S_LIV8XF=S13LIV8XF ;
S_LIVBRO=S13LIVBRO ;
S_LIVPAR=S13LIVPAR ;
S_LIVSIB=S13LIVSIB ;
S_LIVSIS=S13LIVSIS ;
S_LOST=S13LOST ;
/* Empty map cell for: S_LTACTF      variable wave = 13*/ ;
/* Empty map cell for: S_LTACTN      variable wave = 13*/ ;
/* Empty map cell for: S_LTACTP      variable wave = 13*/ ;
S_LTACTX=S13LTACTX ;
S_LTCPRM=S13LTCPRM ;
S_LUNG=S13LUNG ;
S_LUNGE=S13LUNGE ;
S_LUNGEF=S13LUNGEF ;
S_LUNGF=S13LUNGF ;
S_LUNGQ=S13LUNGQ ;
S_LUNGS=S13LUNGS ;
S_MAMMOG=S13MAMMOG ;
/* Empty map cell for: S1_MAP        variable wave = 13*/ ;
/* Empty map cell for: S2_MAP        variable wave = 13*/ ;
S_MAP=S13MAP ;
S_MAPA=S13MAPA ;
/* Empty map cell for: S_MAPW        variable wave = 13*/ ;
S_MCURLN=S13MCURLN ;
/* Empty map cell for: S_MCWV        variable wave = 13*/ ;
/* Empty map cell for: S_MCWVW       variable wave = 13*/ ;
S_MDACTX=S13MDACTX ;
S_MDIV=S13MDIV ;
S_MEALS=S13MEALS ;
S_MEALSA=S13MEALSA ;
S_MEALSH=S13MEALSH ;
/* Empty map cell for: S_MEALSR      variable wave = 13*/ ;
/* Empty map cell for: S2_MEDS       variable wave = 13*/ ;
S_MEDS=S13MEDS ;
S_MEDSA=S13MEDSA ;
S_MEDSH=S13MEDSH ;
/* Empty map cell for: S_MEDSR       variable wave = 13*/ ;
S_MEDUC=S13MEDUC ;
/* Empty map cell for: S_MEMRY       variable wave = 13*/ ;
/* Empty map cell for: S_MEMRYE      variable wave = 13*/ ;
/* Empty map cell for: S_MEMRYEF     variable wave = 13*/ ;
/* Empty map cell for: S_MEMRYF      variable wave = 13*/ ;
/* Empty map cell for: S_MEMRYQ      variable wave = 13*/ ;
/* Empty map cell for: S_MEMRYS      variable wave = 13*/ ;
S_MEND=S13MEND ;
S_MLEN=S13MLEN ;
S_MLENM=S13MLENM ;
S_MNEV=S13MNEV ;
S_MO=S13MO ;
S_MOBILA=S13MOBILA ;
/* Empty map cell for: S_MOBILW      variable wave = 13*/ ;
S_MOMAGE=S13MOMAGE ;
S_MOMLIV=S13MOMLIV ;
/* Empty map cell for: S2_MONEY      variable wave = 13*/ ;
S_MONEY=S13MONEY ;
S_MONEYA=S13MONEYA ;
S_MONEYH=S13MONEYH ;
/* Empty map cell for: S_MONEYR      variable wave = 13*/ ;
S_MPART=S13MPART ;
S_MRCT=S13MRCT ;
S_MRPREM=S13MRPREM ;
S_MSTAT=S13MSTAT ;
S_MSTATF=S13MSTATF ;
S_MSTATH=S13MSTATH ;
S_MSTOT=S13MSTOT ;
S_MWID=S13MWID ;
S_NHMDAY=S13NHMDAY ;
S_NHMLIV=S13NHMLIV ;
S_NHMMVM=S13NHMMVM ;
S_NHMMVY=S13NHMMVY ;
S_NOTICS=S13NOTICS ;
S_NOVOC=S13NOVOC ;
S_NRSHOM=S13NRSHOM ;
S_NRSNIT=S13NRSNIT ;
S_NRSTIM=S13NRSTIM ;
S_NSSCRE=S13NSSCRE ;
S_NSSCSE=S13NSSCSE ;
S_OAHDID=S13OAHDID ;
S_OHRSID=S13OHRSID ;
S_OOPMD=S13OOPMD ;
S_OOPMDF=S13OOPMDF ;
S_OOPMDO=S13OOPMDO ;
S_OOPMDOF=S13OOPMDOF ;
S_OUTPT=S13OUTPT ;
S_PAPSM=S13PAPSM ;
/* Empty map cell for: S_PARTD       variable wave = 13*/ ;
S_PENCT=S13PENCT ;
S_PENIC1=S13PENIC1 ;
S_PENIC2=S13PENIC2 ;
S_PENINC=S13PENINC ;
S_PENI_N=S13PENI_N ;
/* Empty map cell for: S2_PHONE      variable wave = 13*/ ;
S_PHONE=S13PHONE ;
S_PHONEA=S13PHONEA ;
S_PHONEH=S13PHONEH ;
/* Empty map cell for: S_PHONER      variable wave = 13*/ ;
S_PMBMI=S13PMBMI ;
S_PMHGHT=S13PMHGHT ;
S_PMHGHTS=S13PMHGHTS ;
S_PMWAIST=S13PMWAIST ;
S_PMWAISTC=S13PMWAISTC ;
S_PMWGHT=S13PMWGHT ;
S_PMWGHTF=S13PMWGHTF ;
S_PMWGHTS=S13PMWGHTS ;
S_PNHM5Y=S13PNHM5Y ;
S_PRCHMEM=S13PRCHMEM ;
S_PRES=S13PRES ;
S_PRMEM=S13PRMEM ;
S_PROST=S13PROST ;
S_PROXY=S13PROXY ;
S_PRPCNT=S13PRPCNT ;
S_PRPRM1=S13PRPRM1 ;
S_PRPRM2=S13PRPRM2 ;
S_PRPRM3=S13PRPRM3 ;
S_PRSRC1=S13PRSRC1 ;
S_PRSRC2=S13PRSRC2 ;
S_PRSRC3=S13PRSRC3 ;
S_PSTMEM=S13PSTMEM ;
S_PSYCH=S13PSYCH ;
S_PSYCHE=S13PSYCHE ;
S_PSYCHEF=S13PSYCHEF ;
S_PSYCHF=S13PSYCHF ;
S_PSYCHQ=S13PSYCHQ ;
S_PSYCHS=S13PSYCHS ;
S_PTYP1=S13PTYP1 ;
S_PTYP2=S13PTYP2 ;
S_PTYP3=S13PTYP3 ;
S_PTYP4=S13PTYP4 ;
S_PTYPD1=S13PTYPD1 ;
S_PTYPD2=S13PTYPD2 ;
S_PTYPD3=S13PTYPD3 ;
S_PTYPD4=S13PTYPD4 ;
S_PTYPF1=S13PTYPF1 ;
S_PTYPF2=S13PTYPF2 ;
S_PTYPF3=S13PTYPF3 ;
S_PTYPF4=S13PTYPF4 ;
S_PUFF=S13PUFF ;
S_PUFFPOS=S13PUFFPOS ;
/* Empty map cell for: S1_PUSH       variable wave = 13*/ ;
/* Empty map cell for: S2_PUSH       variable wave = 13*/ ;
S_PUSH=S13PUSH ;
S_PUSHA=S13PUSHA ;
/* Empty map cell for: S_PUSHW       variable wave = 13*/ ;
S_RACEM=S13RACEM ;
S_RELIG=S13RELIG ;
S_RETDTWV=S13RETDTWV ;
S_RETEMP=S13RETEMP ;
/* Empty map cell for: S_RETINC      variable wave = 13*/ ;
/* Empty map cell for: S_RETLIV      variable wave = 13*/ ;
S_RETMON=S13RETMON ;
S_RETSAT=S13RETSAT ;
/* Empty map cell for: S_RETWLT      variable wave = 13*/ ;
/* Empty map cell for: S_RETWRK      variable wave = 13*/ ;
/* Empty map cell for: S_RETWSP      variable wave = 13*/ ;
S_RETYR=S13RETYR ;
/* Empty map cell for: S_RISK        variable wave = 13*/ ;
/* Empty map cell for: S_RISK6       variable wave = 13*/ ;
S_RPLNYA=S13RPLNYA ;
S_RPLNYR=S13RPLNYR ;
S_RXPREM=S13RXPREM ;
S_RYRCMP=S13RYRCMP ;
S_SADLF=S13SADLF ;
S_SAMEJOB=S13SAMEJOB ;
S_SAMEMP=S13SAMEMP ;
S_SAYRET=S13SAYRET ;
S_SCIS=S13SCIS ;
S_SDIAPL=S13SDIAPL ;
S_SDIAPLM=S13SDIAPLM ;
S_SDIAPLY=S13SDIAPLY ;
S_SDIAPP=S13SDIAPP ;
S_SDIAPPM=S13SDIAPPM ;
S_SDIAPPY=S13SDIAPPY ;
S_SDIDEN=S13SDIDEN ;
S_SDIREC=S13SDIREC ;
S_SDIRECM=S13SDIRECM ;
S_SDIRECY=S13SDIRECY ;
S_SDISTP=S13SDISTP ;
S_SDISTPM=S13SDISTPM ;
S_SDISTPY=S13SDISTPY ;
S_SER7=S13SER7 ;
S_SHLT=S13SHLT ;
S_SHLTC=S13SHLTC ;
S_SHLTCF=S13SHLTCF ;
S_SHOP=S13SHOP ;
S_SHOPA=S13SHOPA ;
S_SHOPH=S13SHOPH ;
/* Empty map cell for: S_SHOPR       variable wave = 13*/ ;
/* Empty map cell for: S1_SIT        variable wave = 13*/ ;
/* Empty map cell for: S2_SIT        variable wave = 13*/ ;
S_SIT=S13SIT ;
S_SITA=S13SITA ;
/* Empty map cell for: S_SITW        variable wave = 13*/ ;
S_SLEEP=S13SLEEP ;
S_SLEEPE=S13SLEEPE ;
S_SLEEPEF=S13SLEEPEF ;
S_SLEEPQ=S13SLEEPQ ;
S_SLEEPR=S13SLEEPR ;
/* Empty map cell for: S_SLEEPS      variable wave = 13*/ ;
/* Empty map cell for: S_SLEEPX      variable wave = 13*/ ;
S_SLFEMP=S13SLFEMP ;
S_SLFMEM=S13SLFMEM ;
S_SMOKEN=S13SMOKEN ;
S_SMOKEV=S13SMOKEV ;
S_SPCFAC=S13SPCFAC ;
/* Empty map cell for: S_SSAPL       variable wave = 13*/ ;
/* Empty map cell for: S_SSAPLM      variable wave = 13*/ ;
/* Empty map cell for: S_SSAPLY      variable wave = 13*/ ;
/* Empty map cell for: S_SSAPP       variable wave = 13*/ ;
/* Empty map cell for: S_SSAPPM      variable wave = 13*/ ;
/* Empty map cell for: S_SSAPPY      variable wave = 13*/ ;
/* Empty map cell for: S_SSDEN       variable wave = 13*/ ;
S_SSDI=S13SSDI ;
S_SSIAPL=S13SSIAPL ;
S_SSIAPLM=S13SSIAPLM ;
S_SSIAPLY=S13SSIAPLY ;
S_SSIAPP=S13SSIAPP ;
S_SSIAPPM=S13SSIAPPM ;
S_SSIAPPY=S13SSIAPPY ;
S_SSIDEN=S13SSIDEN ;
S_SSIREC=S13SSIREC ;
S_SSIRECM=S13SSIRECM ;
S_SSIRECY=S13SSIRECY ;
S_SSISTP=S13SSISTP ;
S_SSISTPM=S13SSISTPM ;
S_SSISTPY=S13SSISTPY ;
/* Empty map cell for: S_SSREC       variable wave = 13*/ ;
/* Empty map cell for: S_SSRECM      variable wave = 13*/ ;
/* Empty map cell for: S_SSRECY      variable wave = 13*/ ;
/* Empty map cell for: S_SSSTP       variable wave = 13*/ ;
/* Empty map cell for: S_SSSTPM      variable wave = 13*/ ;
/* Empty map cell for: S_SSSTPY      variable wave = 13*/ ;
S_SSWRER=S13SSWRER ;
S_SSWRNR=S13SSWRNR ;
S_SSWRXA=S13SSWRXA ;
S_SSWSER=S13SSWSER ;
S_SSWSNR=S13SSWSNR ;
S_SSWSXA=S13SSWSXA ;
S_STATUS=S13STATUS ;
/* Empty map cell for: S1_STOOP      variable wave = 13*/ ;
/* Empty map cell for: S2_STOOP      variable wave = 13*/ ;
S_STOOP=S13STOOP ;
S_STOOPA=S13STOOPA ;
/* Empty map cell for: S_STOOPW      variable wave = 13*/ ;
S_STROK=S13STROK ;
S_STROKE=S13STROKE ;
S_STROKEF=S13STROKEF ;
S_STROKF=S13STROKF ;
S_STROKQ=S13STROKQ ;
S_STROKS=S13STROKS ;
S_TIMWLK=S13TIMWLK ;
S_TIMWLKA=S13TIMWLKA ;
/* Empty map cell for: S_TLIPRM      variable wave = 13*/ ;
/* Empty map cell for: S2_TOILT      variable wave = 13*/ ;
S_TOILT=S13TOILT ;
S_TOILTA=S13TOILTA ;
/* Empty map cell for: S2_TOILTH     variable wave = 13*/ ;
S_TOILTH=S13TOILTH ;
/* Empty map cell for: S_TOTMBF      variable wave = 13*/ ;
/* Empty map cell for: S_TOTMBI      variable wave = 13*/ ;
/* Empty map cell for: S_TOTMD       variable wave = 13*/ ;
/* Empty map cell for: S_TOTMDF      variable wave = 13*/ ;
S_TR20=S13TR20 ;
/* Empty map cell for: S_TR40        variable wave = 13*/ ;
S_TYLTC=S13TYLTC ;
/* Empty map cell for: S_ULCER       variable wave = 13*/ ;
S_UNEMP=S13UNEMP ;
S_UNION=S13UNION ;
S_UNIONF=S13UNIONF ;
S_VETRN=S13VETRN ;
/* Empty map cell for: S_VGACTF      variable wave = 13*/ ;
/* Empty map cell for: S_VGACTN      variable wave = 13*/ ;
/* Empty map cell for: S_VGACTP      variable wave = 13*/ ;
S_VGACTX=S13VGACTX ;
/* Empty map cell for: S_VIGACT      variable wave = 13*/ ;
S_VOCAB=S13VOCAB ;
S_VP=S13VP ;
/* Empty map cell for: S1_WALK1      variable wave = 13*/ ;
/* Empty map cell for: S2_WALK1      variable wave = 13*/ ;
S_WALK1=S13WALK1 ;
S_WALK1A=S13WALK1A ;
/* Empty map cell for: S_WALK1W      variable wave = 13*/ ;
/* Empty map cell for: S1_WALKR      variable wave = 13*/ ;
/* Empty map cell for: S2_WALKR      variable wave = 13*/ ;
S_WALKR=S13WALKR ;
S_WALKRA=S13WALKRA ;
S_WALKRE=S13WALKRE ;
/* Empty map cell for: S2_WALKRH     variable wave = 13*/ ;
S_WALKRH=S13WALKRH ;
/* Empty map cell for: S_WALKRW      variable wave = 13*/ ;
/* Empty map cell for: S1_WALKS      variable wave = 13*/ ;
/* Empty map cell for: S2_WALKS      variable wave = 13*/ ;
S_WALKS=S13WALKS ;
S_WALKSA=S13WALKSA ;
/* Empty map cell for: S_WALKSW      variable wave = 13*/ ;
S_WANDER=S13WANDER ;
S_WEIGHT=S13WEIGHT ;
S_WGFHR=S13WGFHR ;
S_WGFWK=S13WGFWK ;
S_WGIHR=S13WGIHR ;
S_WGIWK=S13WGIWK ;
/* Empty map cell for: S_WHAPPX      variable wave = 13*/ ;
S_WHAPPY=S13WHAPPY ;
S_WLIPRM=S13WLIPRM ;
S_WORK=S13WORK ;
S_WORK2=S13WORK2 ;
S_WORK62=S13WORK62 ;
S_WORK62F=S13WORK62F ;
S_WORK65=S13WORK65 ;
S_WORK65F=S13WORK65F ;
S_WORK70=S13WORK70 ;
S_WORK70A=S13WORK70A ;
S_WORK70AF=S13WORK70AF ;
S_WORK70F=S13WORK70F ;
/* Empty map cell for: S_WORKLM      variable wave = 13*/ ;
S_WTCRNH=S13WTCRNH ;
S_WTRESP=S13WTRESP ;
S_WTR_NH=S13WTR_NH ;
S_YR=S13YR ;
if inw=1 then output ;
%put --- Slong table ;
%initvars ;
%put ---- Slong table ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
/* --- RAND variable:HHIDPN  included */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
/* --- RAND variable:HACOHORT  included */ ;
WAVE_NUMBER=14 ;
WAVE_NAME=  'hrs_wave'||strip(put(wave_number,3.))     /* --- Derived variable  */ ;
studyyr= hrs_studyyr(wave_number,
hacohort)     /* --- Derived variable  */ ;
CYEAR='yr2018' ;
H_HHID=H14HHID ;
H_HHIDC=H14HHIDC ;
SUBHH= substr(H_HHIDC,7)     /* --- Derived variable  */ ;
INW=INW14 ;
S_HHIDPN=S14HHIDPN ;
/* --- RAND variable:SASSAGEB  included */ ;
/* --- RAND variable:SASSAGEM  included */ ;
/* --- RAND variable:SASSRECV  included */ ;
/* Empty map cell for: S_ACGTOT      variable wave = 14*/ ;
S_ADL5A=S14ADL5A ;
S_ADL5H=S14ADL5H ;
S_ADL6A=S14ADL6A ;
S_ADL6H=S14ADL6H ;
/* Empty map cell for: S_ADLR10      variable wave = 14*/ ;
/* Empty map cell for: S_ADLW        variable wave = 14*/ ;
S_AGEM_B=S14AGEM_B ;
S_AGEM_E=S14AGEM_E ;
S_AGEM_M=S14AGEM_M ;
S_AGEY_B=S14AGEY_B ;
S_AGEY_E=S14AGEY_E ;
S_AGEY_M=S14AGEY_M ;
S_AHDSMP=S14AHDSMP ;
/* Empty map cell for: S_AIMR10      variable wave = 14*/ ;
S_ALONE=S14ALONE ;
S_ALZHE=S14ALZHE ;
S_ALZHEE=S14ALZHEE ;
S_ALZHEEF=S14ALZHEEF ;
S_ALZHEF=S14ALZHEF ;
S_ALZHEQ=S14ALZHEQ ;
S_ALZHES=S14ALZHES ;
/* Empty map cell for: S_AMSTOT      variable wave = 14*/ ;
S_ANS3PQ=S14ANS3PQ ;
/* Empty map cell for: S1_ARMS       variable wave = 14*/ ;
/* Empty map cell for: S2_ARMS       variable wave = 14*/ ;
S_ARMS=S14ARMS ;
S_ARMSA=S14ARMSA ;
/* Empty map cell for: S_ARMSW       variable wave = 14*/ ;
S_ARTHR=S14ARTHR ;
S_ARTHRE=S14ARTHRE ;
S_ARTHREF=S14ARTHREF ;
S_ARTHRF=S14ARTHRF ;
S_ARTHRQ=S14ARTHRQ ;
S_ARTHRS=S14ARTHRS ;
/* Empty map cell for: S_ATR20       variable wave = 14*/ ;
S_BACK=S14BACK ;
S_BALFUL=S14BALFUL ;
S_BALFULC=S14BALFULC ;
S_BALFULT=S14BALFULT ;
S_BALSBS=S14BALSBS ;
S_BALSBSC=S14BALSBSC ;
S_BALSEMI=S14BALSEMI ;
S_BALSEMIC=S14BALSEMIC ;
/* Empty map cell for: S1_BATH       variable wave = 14*/ ;
/* Empty map cell for: S2_BATH       variable wave = 14*/ ;
S_BATH=S14BATH ;
S_BATHA=S14BATHA ;
/* Empty map cell for: S2_BATHH      variable wave = 14*/ ;
S_BATHH=S14BATHH ;
/* Empty map cell for: S_BATHW       variable wave = 14*/ ;
S_BDATE=S14BDATE ;
/* Empty map cell for: S1_BED        variable wave = 14*/ ;
/* Empty map cell for: S2_BED        variable wave = 14*/ ;
S_BED=S14BED ;
S_BEDA=S14BEDA ;
S_BEDE=S14BEDE ;
/* Empty map cell for: S2_BEDH       variable wave = 14*/ ;
S_BEDH=S14BEDH ;
/* Empty map cell for: S_BEDW        variable wave = 14*/ ;
S_BEQ100=S14BEQ100 ;
S_BEQ10K=S14BEQ10K ;
S_BEQ500=S14BEQ500 ;
S_BEQANY=S14BEQANY ;
/* Empty map cell for: S_BEQLRG      variable wave = 14*/ ;
S_BFLAG=S14BFLAG ;
S_BMI=S14BMI ;
S_BMONTH=S14BMONTH ;
S_BPDIA=S14BPDIA ;
S_BPLACE=S14BPLACE ;
S_BPLACF=S14BPLACF ;
S_BPPOS=S14BPPOS ;
S_BPPULS=S14BPPULS ;
S_BPSYS=S14BPSYS ;
/* Empty map cell for: S_BREAST      variable wave = 14*/ ;
/* Empty map cell for: S_BWC20       variable wave = 14*/ ;
/* Empty map cell for: S_BWC86       variable wave = 14*/ ;
S_BYEAR=S14BYEAR ;
/* Empty map cell for: S_CACT        variable wave = 14*/ ;
/* Empty map cell for: S1_CALC       variable wave = 14*/ ;
/* Empty map cell for: S2_CALC       variable wave = 14*/ ;
/* Empty map cell for: S_CALCA       variable wave = 14*/ ;
/* Empty map cell for: S_CALCW       variable wave = 14*/ ;
S_CANCR=S14CANCR ;
S_CANCRE=S14CANCRE ;
S_CANCREF=S14CANCREF ;
S_CANCRF=S14CANCRF ;
S_CANCRQ=S14CANCRQ ;
S_CANCRS=S14CANCRS ;
S_CENDIV=S14CENDIV ;
S_CENREG=S14CENREG ;
S_CESD=S14CESD ;
S_CESDM=S14CESDM ;
/* Empty map cell for: S1_CHAIR      variable wave = 14*/ ;
/* Empty map cell for: S2_CHAIR      variable wave = 14*/ ;
S_CHAIR=S14CHAIR ;
S_CHAIRA=S14CHAIRA ;
/* Empty map cell for: S_CHAIRW      variable wave = 14*/ ;
S_CHOLST=S14CHOLST ;
/* Empty map cell for: S_CLAIMED     variable wave = 14*/ ;
/* Empty map cell for: S1_CLIM1      variable wave = 14*/ ;
/* Empty map cell for: S2_CLIM1      variable wave = 14*/ ;
S_CLIM1=S14CLIM1 ;
S_CLIM1A=S14CLIM1A ;
/* Empty map cell for: S_CLIM1W      variable wave = 14*/ ;
/* Empty map cell for: S1_CLIMS      variable wave = 14*/ ;
/* Empty map cell for: S2_CLIMS      variable wave = 14*/ ;
S_CLIMS=S14CLIMS ;
S_CLIMSA=S14CLIMSA ;
/* Empty map cell for: S_CLIMSW      variable wave = 14*/ ;
/* Empty map cell for: S_COGTOT      variable wave = 14*/ ;
S_COHBYR=S14COHBYR ;
S_COHORT=S14COHORT ;
/* Empty map cell for: S_COMP        variable wave = 14*/ ;
/* Empty map cell for: S_COMPW       variable wave = 14*/ ;
S_CONDE=S14CONDE ;
S_CONDEF=S14CONDEF ;
S_CONDS=S14CONDS ;
S_CONDSF=S14CONDSF ;
S_CONDSP=S14CONDSP ;
S_COVR=S14COVR ;
S_COVRT=S14COVRT ;
S_COVS=S14COVS ;
S_DADAGE=S14DADAGE ;
S_DADLIV=S14DADLIV ;
S_DAGE_M=S14DAGE_M ;
S_DAGE_Y=S14DAGE_Y ;
S_DCBAL1=S14DCBAL1 ;
S_DCBAL2=S14DCBAL2 ;
S_DCBAL3=S14DCBAL3 ;
S_DCBAL4=S14DCBAL4 ;
S_DCBENE1=S14DCBENE1 ;
S_DCBENE2=S14DCBENE2 ;
S_DCBENE3=S14DCBENE3 ;
S_DCBENE4=S14DCBENE4 ;
S_DCCONT1=S14DCCONT1 ;
S_DCCONT2=S14DCCONT2 ;
S_DCCONT3=S14DCCONT3 ;
S_DCCONT4=S14DCCONT4 ;
S_DCMODE1=S14DCMODE1 ;
S_DCMODE2=S14DCMODE2 ;
S_DCMODE3=S14DCMODE3 ;
S_DCMODE4=S14DCMODE4 ;
S_DCPCT1=S14DCPCT1 ;
S_DCPCT2=S14DCPCT2 ;
S_DCPCT3=S14DCPCT3 ;
S_DCPCT4=S14DCPCT4 ;
S_DDATE=S14DDATE ;
S_DEMEN=S14DEMEN ;
S_DEMENE=S14DEMENE ;
S_DEMENEF=S14DEMENEF ;
S_DEMENF=S14DEMENF ;
S_DEMENQ=S14DEMENQ ;
S_DEMENS=S14DEMENS ;
S_DENTST=S14DENTST ;
S_DEPRES=S14DEPRES ;
/* Empty map cell for: S_DEPREX      variable wave = 14*/ ;
S_DIAB=S14DIAB ;
S_DIABE=S14DIABE ;
S_DIABEF=S14DIABEF ;
S_DIABF=S14DIABF ;
S_DIABQ=S14DIABQ ;
S_DIABS=S14DIABS ;
/* Empty map cell for: S1_DIME       variable wave = 14*/ ;
/* Empty map cell for: S2_DIME       variable wave = 14*/ ;
S_DIME=S14DIME ;
S_DIMEA=S14DIMEA ;
/* Empty map cell for: S_DIMEW       variable wave = 14*/ ;
/* Empty map cell for: S_DLRC        variable wave = 14*/ ;
/* Empty map cell for: S_DLRC20      variable wave = 14*/ ;
S_DMONTH=S14DMONTH ;
S_DOCTIM=S14DOCTIM ;
S_DOCTOR=S14DOCTOR ;
/* Empty map cell for: S1_DRESS      variable wave = 14*/ ;
/* Empty map cell for: S2_DRESS      variable wave = 14*/ ;
S_DRESS=S14DRESS ;
S_DRESSA=S14DRESSA ;
/* Empty map cell for: S2_DRESSH     variable wave = 14*/ ;
S_DRESSH=S14DRESSH ;
/* Empty map cell for: S_DRESSW      variable wave = 14*/ ;
S_DRINK=S14DRINK ;
S_DRINKD=S14DRINKD ;
S_DRINKN=S14DRINKN ;
/* Empty map cell for: S_DRINKR      variable wave = 14*/ ;
S_DRUGS=S14DRUGS ;
S_DSIAMT=S14DSIAMT ;
S_DSRC=S14DSRC ;
S_DSSAMT=S14DSSAMT ;
S_DSTAT=S14DSTAT ;
S_DTIMTDTH=S14DTIMTDTH ;
/* Empty map cell for: S_DW          variable wave = 14*/ ;
/* Empty map cell for: S_DY          variable wave = 14*/ ;
S_DYEAR=S14DYEAR ;
/* Empty map cell for: S1_EAT        variable wave = 14*/ ;
/* Empty map cell for: S2_EAT        variable wave = 14*/ ;
S_EAT=S14EAT ;
S_EATA=S14EATA ;
/* Empty map cell for: S2_EATH       variable wave = 14*/ ;
S_EATH=S14EATH ;
/* Empty map cell for: S_EATW        variable wave = 14*/ ;
S_EDEGRM=S14EDEGRM ;
S_EDUC=S14EDUC ;
S_EDYRS=S14EDYRS ;
S_EFFORT=S14EFFORT ;
/* Empty map cell for: S_EFFORX      variable wave = 14*/ ;
S_ENLIFE=S14ENLIFE ;
/* Empty map cell for: S_ENLIFX      variable wave = 14*/ ;
S_EVBRN=S14EVBRN ;
S_EVBRNF=S14EVBRNF ;
S_FAMR=S14FAMR ;
/* Empty map cell for: S_FBWC20      variable wave = 14*/ ;
/* Empty map cell for: S_FBWC86      variable wave = 14*/ ;
/* Empty map cell for: S_FCACT       variable wave = 14*/ ;
/* Empty map cell for: S_FDLRC       variable wave = 14*/ ;
/* Empty map cell for: S_FDW         variable wave = 14*/ ;
/* Empty map cell for: S_FDY         variable wave = 14*/ ;
S_FEDUC=S14FEDUC ;
/* Empty map cell for: S_FIMRC       variable wave = 14*/ ;
S_FINEA=S14FINEA ;
S_FINPLN=S14FINPLN ;
S_FINR=S14FINR ;
/* Empty map cell for: S_FLAG        variable wave = 14*/ ;
S_FLONE=S14FLONE ;
/* Empty map cell for: S_FLONEX      variable wave = 14*/ ;
S_FLUSHT=S14FLUSHT ;
/* Empty map cell for: S_FMO         variable wave = 14*/ ;
/* Empty map cell for: S_FPRES       variable wave = 14*/ ;
/* Empty map cell for: S_FPSTME      variable wave = 14*/ ;
S_FSAD=S14FSAD ;
/* Empty map cell for: S_FSADX       variable wave = 14*/ ;
/* Empty map cell for: S_FSCIS       variable wave = 14*/ ;
/* Empty map cell for: S_FSER7       variable wave = 14*/ ;
S_FSIZE=S14FSIZE ;
S_FSIZEF=S14FSIZEF ;
/* Empty map cell for: S_FSLFME      variable wave = 14*/ ;
/* Empty map cell for: S_FVOCAB      variable wave = 14*/ ;
/* Empty map cell for: S_FVP         variable wave = 14*/ ;
/* Empty map cell for: S_FYR         variable wave = 14*/ ;
S_GENDER=S14GENDER ;
S_GOING=S14GOING ;
/* Empty map cell for: S_GOINGX      variable wave = 14*/ ;
S_GOVMD=S14GOVMD ;
S_GOVMR=S14GOVMR ;
/* Empty map cell for: S_GOVOT       variable wave = 14*/ ;
S_GOVVA=S14GOVVA ;
S_GROSSA=S14GROSSA ;
S_GRP=S14GRP ;
S_GRPDOM=S14GRPDOM ;
S_GRPL=S14GRPL ;
S_GRPPOS=S14GRPPOS ;
S_GRPR=S14GRPR ;
S_HALUC=S14HALUC ;
/* Empty map cell for: S_HDLR20      variable wave = 14*/ ;
S_HEART=S14HEART ;
S_HEARTE=S14HEARTE ;
S_HEARTEF=S14HEARTEF ;
S_HEARTF=S14HEARTF ;
S_HEARTQ=S14HEARTQ ;
S_HEARTS=S14HEARTS ;
S_HECOV1=S14HECOV1 ;
S_HECOV2=S14HECOV2 ;
S_HECOV3=S14HECOV3 ;
S_HEIGHT=S14HEIGHT ;
S_HENUM=S14HENUM ;
S_HERET=S14HERET ;
S_HERTR1=S14HERTR1 ;
S_HERTR2=S14HERTR2 ;
S_HERTR3=S14HERTR3 ;
S_HERTS1=S14HERTS1 ;
S_HERTS2=S14HERTS2 ;
S_HERTS3=S14HERTS3 ;
S_HESRC1=S14HESRC1 ;
S_HESRC2=S14HESRC2 ;
S_HESRC3=S14HESRC3 ;
S_HHIDPN=S14HHIDPN ;
S_HIBP=S14HIBP ;
S_HIBPE=S14HIBPE ;
S_HIBPEF=S14HIBPEF ;
S_HIBPF=S14HIBPF ;
S_HIBPQ=S14HIBPQ ;
S_HIBPS=S14HIBPS ;
S_HIGOV=S14HIGOV ;
S_HILTC=S14HILTC ;
/* Empty map cell for: S_HIMR20      variable wave = 14*/ ;
S_HIOTHP=S14HIOTHP ;
S_HISPAN=S14HISPAN ;
S_HLPDYSF=S14HLPDYSF ;
S_HLPDYSNF=S14HLPDYSNF ;
S_HLPDYSP=S14HLPDYSP ;
S_HLPDYST=S14HLPDYST ;
S_HLPDYSU=S14HLPDYSU ;
S_HLPHRSF=S14HLPHRSF ;
S_HLPHRSNF=S14HLPHRSNF ;
S_HLPHRSP=S14HLPHRSP ;
S_HLPHRST=S14HLPHRST ;
S_HLPHRSU=S14HLPHRSU ;
S_HLPPDFA=S14HLPPDFA ;
S_HLPPDFN=S14HLPPDFN ;
S_HLPPDNFA=S14HLPPDNFA ;
S_HLPPDNFN=S14HLPPDNFN ;
S_HLPPDTA=S14HLPPDTA ;
S_HLPPDTN=S14HLPPDTN ;
S_HLPRFN=S14HLPRFN ;
S_HLPRNFN=S14HLPRNFN ;
S_HLPRPN=S14HLPRPN ;
S_HLPRTN=S14HLPRTN ;
S_HLPRUN=S14HLPRUN ;
S_HLTC3=S14HLTC3 ;
/* Empty map cell for: S_HLTC5       variable wave = 14*/ ;
/* Empty map cell for: S_HLTC5F      variable wave = 14*/ ;
S_HLTHLM=S14HLTHLM ;
S_HOMCAR=S14HOMCAR ;
S_HOSP=S14HOSP ;
S_HRSAMP=S14HRSAMP ;
S_HSPNIT=S14HSPNIT ;
S_HSPTIM=S14HSPTIM ;
/* Empty map cell for: S_HSWRKF      variable wave = 14*/ ;
/* Empty map cell for: S_HTR40       variable wave = 14*/ ;
S_IADL5A=S14IADL5A ;
S_IADL5H=S14IADL5H ;
S_IANN=S14IANN ;
S_IEARN=S14IEARN ;
S_IFANN=S14IFANN ;
S_IFEARN=S14IFEARN ;
S_IFGXFR=S14IFGXFR ;
S_IFIRAW=S14IFIRAW ;
/* Empty map cell for: S_IFIRAWY1    variable wave = 14*/ ;
S_IFPEN=S14IFPEN ;
S_IFPENA=S14IFPENA ;
S_IFSDI=S14IFSDI ;
S_IFSRET=S14IFSRET ;
S1_IFSSDI=S14IFSSDI ;
/* Empty map cell for: S_IFSSDI      variable wave = 14*/ ;
/* Empty map cell for: S_IFSSI       variable wave = 14*/ ;
S_IFUNEM=S14IFUNEM ;
S1_IFUNWC=S14IFUNWC ;
/* Empty map cell for: S2_IFUNWC     variable wave = 14*/ ;
S_IFWCMP=S14IFWCMP ;
S_IGXFR=S14IGXFR ;
S_IIRAW=S14IIRAW ;
S_IIRAWY1=S14IIRAWY1 ;
/* Empty map cell for: S_IMRC        variable wave = 14*/ ;
/* Empty map cell for: S_IMRC20      variable wave = 14*/ ;
/* Empty map cell for: S_INHER       variable wave = 14*/ ;
S_INHPE=S14INHPE ;
S_INHPFN=S14INHPFN ;
S_INHPNFN=S14INHPNFN ;
S_INHPPN=S14INHPPN ;
S_INHPTN=S14INHPTN ;
S_INHPUN=S14INHPUN ;
S_INLBRF=S14INLBRF ;
S_IPEN=S14IPEN ;
S_IPENA=S14IPENA ;
S_ISDI=S14ISDI ;
S_ISRET=S14ISRET ;
S_ISSDI=S14ISSDI ;
S_ISSI=S14ISSI ;
S_IUNEM=S14IUNEM ;
S_IUNWC=S14IUNWC ;
S_IWBEG=S14IWBEG ;
/* Empty map cell for: S_IWBEGF      variable wave = 14*/ ;
S_IWCMP=S14IWCMP ;
S_IWEND=S14IWEND ;
/* Empty map cell for: S_IWENDF      variable wave = 14*/ ;
S_IWENDM=S14IWENDM ;
S_IWENDY=S14IWENDY ;
S_IWMID=S14IWMID ;
S_IWMIDF=S14IWMIDF ;
S_IWSTAT=S14IWSTAT ;
S_JCIND=S14JCIND ;
S_JCINDB=S14JCINDB ;
S_JCINDC=S14JCINDC ;
S_JCOCC=S14JCOCC ;
S_JCOCCA=S14JCOCCA ;
S_JCOCCB=S14JCOCCB ;
S_JCOCCC=S14JCOCCC ;
S_JCPEN=S14JCPEN ;
/* Empty map cell for: S_JCPENF      variable wave = 14*/ ;
S_JCTEN=S14JCTEN ;
S_JHOUR2=S14JHOUR2 ;
S_JHOURS=S14JHOURS ;
S_JJOBS=S14JJOBS ;
S_JLASTM=S14JLASTM ;
S_JLASTY=S14JLASTY ;
S_JLIFT=S14JLIFT ;
S_JLIND=S14JLIND ;
S_JLINDB=S14JLINDB ;
S_JLINDC=S14JLINDC ;
S_JLMIS=S14JLMIS ;
S_JLOCC=S14JLOCC ;
S_JLOCCA=S14JLOCCA ;
S_JLOCCB=S14JLOCCB ;
S_JLOCCC=S14JLOCCC ;
S_JLTEN=S14JLTEN ;
S_JLTENF=S14JLTENF ;
S_JMISS=S14JMISS ;
S_JNJOB=S14JNJOB ;
S_JNJOB5=S14JNJOB5 ;
/* Empty map cell for: S1_JOG        variable wave = 14*/ ;
/* Empty map cell for: S2_JOG        variable wave = 14*/ ;
S_JOG=S14JOG ;
S_JOGA=S14JOGA ;
/* Empty map cell for: S_JOGW        variable wave = 14*/ ;
S_JPHYS=S14JPHYS ;
S_JSIGHT=S14JSIGHT ;
S_JSTOOP=S14JSTOOP ;
S_JSTRES=S14JSTRES ;
S_JWEEK2=S14JWEEK2 ;
S_JWEEKS=S14JWEEKS ;
S_JYEARM=S14JYEARM ;
S_JYEARS=S14JYEARS ;
S_LBAGR=S14LBAGR ;
S_LBASSISTPRB=S14LBASSISTPRB ;
S_LBCOMP=S14LBCOMP ;
S_LBCON10=S14LBCON10 ;
S_LBCON5=S14LBCON5 ;
S_LBELIG=S14LBELIG ;
S_LBEXT=S14LBEXT ;
S_LBFAMDRUGPRB=S14LBFAMDRUGPRB ;
S_LBFAMHLTHPRB=S14LBFAMHLTHPRB ;
S_LBFINPRB=S14LBFINPRB ;
S_LBHLTHPRB=S14LBHLTHPRB ;
S_LBHOUSEPRB=S14LBHOUSEPRB ;
S_LBLONELY11=S14LBLONELY11 ;
S_LBLONELY3=S14LBLONELY3 ;
S_LBNEGAFFECT=S14LBNEGAFFECT ;
/* Empty map cell for: S_LBNEGAFFECT6variable wave = 14*/ ;
S_LBNEUR=S14LBNEUR ;
S_LBONCHRSTR=S14LBONCHRSTR ;
S_LBOPEN=S14LBOPEN ;
S_LBPOSAFFECT=S14LBPOSAFFECT ;
/* Empty map cell for: S_LBPOSAFFECT6variable wave = 14*/ ;
S_LBRF=S14LBRF ;
S_LBRFH=S14LBRFH ;
S_LBRFY=S14LBRFY ;
S_LBRLTNSHPRB=S14LBRLTNSHPRB ;
S_LBSATCITY=S14LBSATCITY ;
S_LBSATFAM=S14LBSATFAM ;
S_LBSATFIN=S14LBSATFIN ;
S_LBSATHLTH=S14LBSATHLTH ;
S_LBSATHOME=S14LBSATHOME ;
S_LBSATINC=S14LBSATINC ;
S_LBSATLEISURE=S14LBSATLEISURE ;
/* Empty map cell for: S_LBSATLIFE   variable wave = 14*/ ;
S_LBSATWLF=S14LBSATWLF ;
S_LBWGTR=S14LBWGTR ;
S_LBWORKPRB=S14LBWORKPRB ;
S_LGMUSA=S14LGMUSA ;
/* Empty map cell for: S_LGMUSW      variable wave = 14*/ ;
/* Empty map cell for: S_LHTACT      variable wave = 14*/ ;
S_LIFEIN=S14LIFEIN ;
/* Empty map cell for: S1_LIFT       variable wave = 14*/ ;
/* Empty map cell for: S2_LIFT       variable wave = 14*/ ;
S_LIFT=S14LIFT ;
S_LIFTA=S14LIFTA ;
/* Empty map cell for: S_LIFTW       variable wave = 14*/ ;
S_LIV10=S14LIV10 ;
S_LIV10A=S14LIV10A ;
S_LIV10P=S14LIV10P ;
S_LIV10R=S14LIV10R ;
S_LIV75=S14LIV75 ;
S_LIV75C=S14LIV75C ;
S_LIV75F=S14LIV75F ;
S_LIV75P=S14LIV75P ;
S_LIV75R=S14LIV75R ;
/* Empty map cell for: S_LIV85       variable wave = 14*/ ;
/* Empty map cell for: S_LIV85C      variable wave = 14*/ ;
/* Empty map cell for: S_LIV85F      variable wave = 14*/ ;
/* Empty map cell for: S_LIV85P      variable wave = 14*/ ;
/* Empty map cell for: S_LIV85R      variable wave = 14*/ ;
S_LIV8XC=S14LIV8XC ;
S_LIV8XF=S14LIV8XF ;
S_LIVBRO=S14LIVBRO ;
S_LIVPAR=S14LIVPAR ;
S_LIVSIB=S14LIVSIB ;
S_LIVSIS=S14LIVSIS ;
S_LOST=S14LOST ;
/* Empty map cell for: S_LTACTF      variable wave = 14*/ ;
/* Empty map cell for: S_LTACTN      variable wave = 14*/ ;
/* Empty map cell for: S_LTACTP      variable wave = 14*/ ;
S_LTACTX=S14LTACTX ;
S_LTCPRM=S14LTCPRM ;
S_LUNG=S14LUNG ;
S_LUNGE=S14LUNGE ;
S_LUNGEF=S14LUNGEF ;
S_LUNGF=S14LUNGF ;
S_LUNGQ=S14LUNGQ ;
S_LUNGS=S14LUNGS ;
S_MAMMOG=S14MAMMOG ;
/* Empty map cell for: S1_MAP        variable wave = 14*/ ;
/* Empty map cell for: S2_MAP        variable wave = 14*/ ;
S_MAP=S14MAP ;
S_MAPA=S14MAPA ;
/* Empty map cell for: S_MAPW        variable wave = 14*/ ;
S_MCURLN=S14MCURLN ;
/* Empty map cell for: S_MCWV        variable wave = 14*/ ;
/* Empty map cell for: S_MCWVW       variable wave = 14*/ ;
S_MDACTX=S14MDACTX ;
S_MDIV=S14MDIV ;
S_MEALS=S14MEALS ;
S_MEALSA=S14MEALSA ;
S_MEALSH=S14MEALSH ;
/* Empty map cell for: S_MEALSR      variable wave = 14*/ ;
/* Empty map cell for: S2_MEDS       variable wave = 14*/ ;
S_MEDS=S14MEDS ;
S_MEDSA=S14MEDSA ;
S_MEDSH=S14MEDSH ;
/* Empty map cell for: S_MEDSR       variable wave = 14*/ ;
S_MEDUC=S14MEDUC ;
/* Empty map cell for: S_MEMRY       variable wave = 14*/ ;
/* Empty map cell for: S_MEMRYE      variable wave = 14*/ ;
/* Empty map cell for: S_MEMRYEF     variable wave = 14*/ ;
/* Empty map cell for: S_MEMRYF      variable wave = 14*/ ;
/* Empty map cell for: S_MEMRYQ      variable wave = 14*/ ;
/* Empty map cell for: S_MEMRYS      variable wave = 14*/ ;
S_MEND=S14MEND ;
S_MLEN=S14MLEN ;
S_MLENM=S14MLENM ;
S_MNEV=S14MNEV ;
/* Empty map cell for: S_MO          variable wave = 14*/ ;
S_MOBILA=S14MOBILA ;
/* Empty map cell for: S_MOBILW      variable wave = 14*/ ;
S_MOMAGE=S14MOMAGE ;
S_MOMLIV=S14MOMLIV ;
/* Empty map cell for: S2_MONEY      variable wave = 14*/ ;
S_MONEY=S14MONEY ;
S_MONEYA=S14MONEYA ;
S_MONEYH=S14MONEYH ;
/* Empty map cell for: S_MONEYR      variable wave = 14*/ ;
S_MPART=S14MPART ;
S_MRCT=S14MRCT ;
S_MRPREM=S14MRPREM ;
S_MSTAT=S14MSTAT ;
S_MSTATF=S14MSTATF ;
S_MSTATH=S14MSTATH ;
/* Empty map cell for: S_MSTOT       variable wave = 14*/ ;
S_MWID=S14MWID ;
S_NHMDAY=S14NHMDAY ;
S_NHMLIV=S14NHMLIV ;
S_NHMMVM=S14NHMMVM ;
S_NHMMVY=S14NHMMVY ;
/* Empty map cell for: S_NOTICS      variable wave = 14*/ ;
/* Empty map cell for: S_NOVOC       variable wave = 14*/ ;
S_NRSHOM=S14NRSHOM ;
S_NRSNIT=S14NRSNIT ;
S_NRSTIM=S14NRSTIM ;
/* Empty map cell for: S_NSSCRE      variable wave = 14*/ ;
/* Empty map cell for: S_NSSCSE      variable wave = 14*/ ;
S_OAHDID=S14OAHDID ;
S_OHRSID=S14OHRSID ;
S_OOPMD=S14OOPMD ;
S_OOPMDF=S14OOPMDF ;
S_OOPMDO=S14OOPMDO ;
S_OOPMDOF=S14OOPMDOF ;
S_OUTPT=S14OUTPT ;
S_PAPSM=S14PAPSM ;
/* Empty map cell for: S_PARTD       variable wave = 14*/ ;
S_PENCT=S14PENCT ;
S_PENIC1=S14PENIC1 ;
S_PENIC2=S14PENIC2 ;
S_PENINC=S14PENINC ;
S_PENI_N=S14PENI_N ;
/* Empty map cell for: S2_PHONE      variable wave = 14*/ ;
S_PHONE=S14PHONE ;
S_PHONEA=S14PHONEA ;
S_PHONEH=S14PHONEH ;
/* Empty map cell for: S_PHONER      variable wave = 14*/ ;
S_PMBMI=S14PMBMI ;
S_PMHGHT=S14PMHGHT ;
S_PMHGHTS=S14PMHGHTS ;
S_PMWAIST=S14PMWAIST ;
S_PMWAISTC=S14PMWAISTC ;
S_PMWGHT=S14PMWGHT ;
S_PMWGHTF=S14PMWGHTF ;
S_PMWGHTS=S14PMWGHTS ;
S_PNHM5Y=S14PNHM5Y ;
S_PRCHMEM=S14PRCHMEM ;
/* Empty map cell for: S_PRES        variable wave = 14*/ ;
S_PRMEM=S14PRMEM ;
S_PROST=S14PROST ;
S_PROXY=S14PROXY ;
S_PRPCNT=S14PRPCNT ;
S_PRPRM1=S14PRPRM1 ;
S_PRPRM2=S14PRPRM2 ;
S_PRPRM3=S14PRPRM3 ;
S_PRSRC1=S14PRSRC1 ;
S_PRSRC2=S14PRSRC2 ;
S_PRSRC3=S14PRSRC3 ;
/* Empty map cell for: S_PSTMEM      variable wave = 14*/ ;
S_PSYCH=S14PSYCH ;
S_PSYCHE=S14PSYCHE ;
S_PSYCHEF=S14PSYCHEF ;
S_PSYCHF=S14PSYCHF ;
S_PSYCHQ=S14PSYCHQ ;
S_PSYCHS=S14PSYCHS ;
S_PTYP1=S14PTYP1 ;
S_PTYP2=S14PTYP2 ;
S_PTYP3=S14PTYP3 ;
S_PTYP4=S14PTYP4 ;
S_PTYPD1=S14PTYPD1 ;
S_PTYPD2=S14PTYPD2 ;
S_PTYPD3=S14PTYPD3 ;
S_PTYPD4=S14PTYPD4 ;
S_PTYPF1=S14PTYPF1 ;
S_PTYPF2=S14PTYPF2 ;
S_PTYPF3=S14PTYPF3 ;
S_PTYPF4=S14PTYPF4 ;
S_PUFF=S14PUFF ;
S_PUFFPOS=S14PUFFPOS ;
/* Empty map cell for: S1_PUSH       variable wave = 14*/ ;
/* Empty map cell for: S2_PUSH       variable wave = 14*/ ;
S_PUSH=S14PUSH ;
S_PUSHA=S14PUSHA ;
/* Empty map cell for: S_PUSHW       variable wave = 14*/ ;
S_RACEM=S14RACEM ;
S_RELIG=S14RELIG ;
S_RETDTWV=S14RETDTWV ;
S_RETEMP=S14RETEMP ;
/* Empty map cell for: S_RETINC      variable wave = 14*/ ;
/* Empty map cell for: S_RETLIV      variable wave = 14*/ ;
S_RETMON=S14RETMON ;
S_RETSAT=S14RETSAT ;
/* Empty map cell for: S_RETWLT      variable wave = 14*/ ;
/* Empty map cell for: S_RETWRK      variable wave = 14*/ ;
/* Empty map cell for: S_RETWSP      variable wave = 14*/ ;
S_RETYR=S14RETYR ;
/* Empty map cell for: S_RISK        variable wave = 14*/ ;
/* Empty map cell for: S_RISK6       variable wave = 14*/ ;
S_RPLNYA=S14RPLNYA ;
S_RPLNYR=S14RPLNYR ;
S_RXPREM=S14RXPREM ;
S_RYRCMP=S14RYRCMP ;
S_SADLF=S14SADLF ;
S_SAMEJOB=S14SAMEJOB ;
S_SAMEMP=S14SAMEMP ;
S_SAYRET=S14SAYRET ;
/* Empty map cell for: S_SCIS        variable wave = 14*/ ;
S_SDIAPL=S14SDIAPL ;
S_SDIAPLM=S14SDIAPLM ;
S_SDIAPLY=S14SDIAPLY ;
S_SDIAPP=S14SDIAPP ;
S_SDIAPPM=S14SDIAPPM ;
S_SDIAPPY=S14SDIAPPY ;
S_SDIDEN=S14SDIDEN ;
S_SDIREC=S14SDIREC ;
S_SDIRECM=S14SDIRECM ;
S_SDIRECY=S14SDIRECY ;
S_SDISTP=S14SDISTP ;
S_SDISTPM=S14SDISTPM ;
S_SDISTPY=S14SDISTPY ;
/* Empty map cell for: S_SER7        variable wave = 14*/ ;
S_SHLT=S14SHLT ;
S_SHLTC=S14SHLTC ;
S_SHLTCF=S14SHLTCF ;
S_SHOP=S14SHOP ;
S_SHOPA=S14SHOPA ;
S_SHOPH=S14SHOPH ;
/* Empty map cell for: S_SHOPR       variable wave = 14*/ ;
/* Empty map cell for: S1_SIT        variable wave = 14*/ ;
/* Empty map cell for: S2_SIT        variable wave = 14*/ ;
S_SIT=S14SIT ;
S_SITA=S14SITA ;
/* Empty map cell for: S_SITW        variable wave = 14*/ ;
S_SLEEP=S14SLEEP ;
S_SLEEPE=S14SLEEPE ;
S_SLEEPEF=S14SLEEPEF ;
S_SLEEPQ=S14SLEEPQ ;
S_SLEEPR=S14SLEEPR ;
S_SLEEPS=S14SLEEPS ;
/* Empty map cell for: S_SLEEPX      variable wave = 14*/ ;
S_SLFEMP=S14SLFEMP ;
/* Empty map cell for: S_SLFMEM      variable wave = 14*/ ;
S_SMOKEN=S14SMOKEN ;
S_SMOKEV=S14SMOKEV ;
S_SPCFAC=S14SPCFAC ;
/* Empty map cell for: S_SSAPL       variable wave = 14*/ ;
/* Empty map cell for: S_SSAPLM      variable wave = 14*/ ;
/* Empty map cell for: S_SSAPLY      variable wave = 14*/ ;
/* Empty map cell for: S_SSAPP       variable wave = 14*/ ;
/* Empty map cell for: S_SSAPPM      variable wave = 14*/ ;
/* Empty map cell for: S_SSAPPY      variable wave = 14*/ ;
/* Empty map cell for: S_SSDEN       variable wave = 14*/ ;
S_SSDI=S14SSDI ;
S_SSIAPL=S14SSIAPL ;
S_SSIAPLM=S14SSIAPLM ;
S_SSIAPLY=S14SSIAPLY ;
S_SSIAPP=S14SSIAPP ;
S_SSIAPPM=S14SSIAPPM ;
S_SSIAPPY=S14SSIAPPY ;
S_SSIDEN=S14SSIDEN ;
S_SSIREC=S14SSIREC ;
S_SSIRECM=S14SSIRECM ;
S_SSIRECY=S14SSIRECY ;
S_SSISTP=S14SSISTP ;
S_SSISTPM=S14SSISTPM ;
S_SSISTPY=S14SSISTPY ;
/* Empty map cell for: S_SSREC       variable wave = 14*/ ;
/* Empty map cell for: S_SSRECM      variable wave = 14*/ ;
/* Empty map cell for: S_SSRECY      variable wave = 14*/ ;
/* Empty map cell for: S_SSSTP       variable wave = 14*/ ;
/* Empty map cell for: S_SSSTPM      variable wave = 14*/ ;
/* Empty map cell for: S_SSSTPY      variable wave = 14*/ ;
/* Empty map cell for: S_SSWRER      variable wave = 14*/ ;
/* Empty map cell for: S_SSWRNR      variable wave = 14*/ ;
/* Empty map cell for: S_SSWRXA      variable wave = 14*/ ;
/* Empty map cell for: S_SSWSER      variable wave = 14*/ ;
/* Empty map cell for: S_SSWSNR      variable wave = 14*/ ;
/* Empty map cell for: S_SSWSXA      variable wave = 14*/ ;
/* Empty map cell for: S_STATUS      variable wave = 14*/ ;
/* Empty map cell for: S1_STOOP      variable wave = 14*/ ;
/* Empty map cell for: S2_STOOP      variable wave = 14*/ ;
S_STOOP=S14STOOP ;
S_STOOPA=S14STOOPA ;
/* Empty map cell for: S_STOOPW      variable wave = 14*/ ;
S_STROK=S14STROK ;
S_STROKE=S14STROKE ;
S_STROKEF=S14STROKEF ;
S_STROKF=S14STROKF ;
S_STROKQ=S14STROKQ ;
S_STROKS=S14STROKS ;
S_TIMWLK=S14TIMWLK ;
S_TIMWLKA=S14TIMWLKA ;
/* Empty map cell for: S_TLIPRM      variable wave = 14*/ ;
/* Empty map cell for: S2_TOILT      variable wave = 14*/ ;
S_TOILT=S14TOILT ;
S_TOILTA=S14TOILTA ;
/* Empty map cell for: S2_TOILTH     variable wave = 14*/ ;
S_TOILTH=S14TOILTH ;
/* Empty map cell for: S_TOTMBF      variable wave = 14*/ ;
/* Empty map cell for: S_TOTMBI      variable wave = 14*/ ;
/* Empty map cell for: S_TOTMD       variable wave = 14*/ ;
/* Empty map cell for: S_TOTMDF      variable wave = 14*/ ;
/* Empty map cell for: S_TR20        variable wave = 14*/ ;
/* Empty map cell for: S_TR40        variable wave = 14*/ ;
S_TYLTC=S14TYLTC ;
/* Empty map cell for: S_ULCER       variable wave = 14*/ ;
S_UNEMP=S14UNEMP ;
S_UNION=S14UNION ;
S_UNIONF=S14UNIONF ;
S_VETRN=S14VETRN ;
/* Empty map cell for: S_VGACTF      variable wave = 14*/ ;
/* Empty map cell for: S_VGACTN      variable wave = 14*/ ;
/* Empty map cell for: S_VGACTP      variable wave = 14*/ ;
S_VGACTX=S14VGACTX ;
/* Empty map cell for: S_VIGACT      variable wave = 14*/ ;
/* Empty map cell for: S_VOCAB       variable wave = 14*/ ;
/* Empty map cell for: S_VP          variable wave = 14*/ ;
/* Empty map cell for: S1_WALK1      variable wave = 14*/ ;
/* Empty map cell for: S2_WALK1      variable wave = 14*/ ;
S_WALK1=S14WALK1 ;
S_WALK1A=S14WALK1A ;
/* Empty map cell for: S_WALK1W      variable wave = 14*/ ;
/* Empty map cell for: S1_WALKR      variable wave = 14*/ ;
/* Empty map cell for: S2_WALKR      variable wave = 14*/ ;
S_WALKR=S14WALKR ;
S_WALKRA=S14WALKRA ;
S_WALKRE=S14WALKRE ;
/* Empty map cell for: S2_WALKRH     variable wave = 14*/ ;
S_WALKRH=S14WALKRH ;
/* Empty map cell for: S_WALKRW      variable wave = 14*/ ;
/* Empty map cell for: S1_WALKS      variable wave = 14*/ ;
/* Empty map cell for: S2_WALKS      variable wave = 14*/ ;
S_WALKS=S14WALKS ;
S_WALKSA=S14WALKSA ;
/* Empty map cell for: S_WALKSW      variable wave = 14*/ ;
S_WANDER=S14WANDER ;
S_WEIGHT=S14WEIGHT ;
S_WGFHR=S14WGFHR ;
S_WGFWK=S14WGFWK ;
S_WGIHR=S14WGIHR ;
S_WGIWK=S14WGIWK ;
/* Empty map cell for: S_WHAPPX      variable wave = 14*/ ;
S_WHAPPY=S14WHAPPY ;
S_WLIPRM=S14WLIPRM ;
S_WORK=S14WORK ;
S_WORK2=S14WORK2 ;
S_WORK62=S14WORK62 ;
S_WORK62F=S14WORK62F ;
S_WORK65=S14WORK65 ;
S_WORK65F=S14WORK65F ;
S_WORK70=S14WORK70 ;
S_WORK70A=S14WORK70A ;
S_WORK70AF=S14WORK70AF ;
S_WORK70F=S14WORK70F ;
/* Empty map cell for: S_WORKLM      variable wave = 14*/ ;
S_WTCRNH=S14WTCRNH ;
S_WTRESP=S14WTRESP ;
S_WTR_NH=S14WTR_NH ;
/* Empty map cell for: S_YR          variable wave = 14*/ ;
if inw=1 then output ;
%put --- Slong table ;
%initvars ;
%put ---- Slong table ;
/* --- RAND variable:HHID  included */ ;
/* --- RAND variable:PN  included */ ;
/* --- RAND variable:HHIDPN  included */ ;
/* --- RAND variable:RAHHIDPN  included */ ;
/* --- RAND variable:HACOHORT  included */ ;
WAVE_NUMBER=15 ;
WAVE_NAME=  'hrs_wave'||strip(put(wave_number,3.))     /* --- Derived variable  */ ;
studyyr= hrs_studyyr(wave_number,
hacohort)     /* --- Derived variable  */ ;
CYEAR='yr2020' ;
H_HHID=H15HHID ;
H_HHIDC=H15HHIDC ;
SUBHH= substr(H_HHIDC,7)     /* --- Derived variable  */ ;
INW=INW15 ;
S_HHIDPN=S15HHIDPN ;
/* --- RAND variable:SASSAGEB  included */ ;
/* --- RAND variable:SASSAGEM  included */ ;
/* --- RAND variable:SASSRECV  included */ ;
/* Empty map cell for: S_ACGTOT      variable wave = 15*/ ;
S_ADL5A=S15ADL5A ;
S_ADL5H=S15ADL5H ;
S_ADL6A=S15ADL6A ;
S_ADL6H=S15ADL6H ;
/* Empty map cell for: S_ADLR10      variable wave = 15*/ ;
/* Empty map cell for: S_ADLW        variable wave = 15*/ ;
S_AGEM_B=S15AGEM_B ;
S_AGEM_E=S15AGEM_E ;
S_AGEM_M=S15AGEM_M ;
S_AGEY_B=S15AGEY_B ;
S_AGEY_E=S15AGEY_E ;
S_AGEY_M=S15AGEY_M ;
S_AHDSMP=S15AHDSMP ;
/* Empty map cell for: S_AIMR10      variable wave = 15*/ ;
S_ALONE=S15ALONE ;
S_ALZHE=S15ALZHE ;
S_ALZHEE=S15ALZHEE ;
S_ALZHEEF=S15ALZHEEF ;
S_ALZHEF=S15ALZHEF ;
S_ALZHEQ=S15ALZHEQ ;
S_ALZHES=S15ALZHES ;
/* Empty map cell for: S_AMSTOT      variable wave = 15*/ ;
S_ANS3PQ=S15ANS3PQ ;
/* Empty map cell for: S1_ARMS       variable wave = 15*/ ;
/* Empty map cell for: S2_ARMS       variable wave = 15*/ ;
S_ARMS=S15ARMS ;
S_ARMSA=S15ARMSA ;
/* Empty map cell for: S_ARMSW       variable wave = 15*/ ;
S_ARTHR=S15ARTHR ;
S_ARTHRE=S15ARTHRE ;
S_ARTHREF=S15ARTHREF ;
S_ARTHRF=S15ARTHRF ;
S_ARTHRQ=S15ARTHRQ ;
S_ARTHRS=S15ARTHRS ;
/* Empty map cell for: S_ATR20       variable wave = 15*/ ;
S_BACK=S15BACK ;
/* Empty map cell for: S_BALFUL      variable wave = 15*/ ;
/* Empty map cell for: S_BALFULC     variable wave = 15*/ ;
/* Empty map cell for: S_BALFULT     variable wave = 15*/ ;
/* Empty map cell for: S_BALSBS      variable wave = 15*/ ;
/* Empty map cell for: S_BALSBSC     variable wave = 15*/ ;
/* Empty map cell for: S_BALSEMI     variable wave = 15*/ ;
/* Empty map cell for: S_BALSEMIC    variable wave = 15*/ ;
/* Empty map cell for: S1_BATH       variable wave = 15*/ ;
/* Empty map cell for: S2_BATH       variable wave = 15*/ ;
S_BATH=S15BATH ;
S_BATHA=S15BATHA ;
/* Empty map cell for: S2_BATHH      variable wave = 15*/ ;
S_BATHH=S15BATHH ;
/* Empty map cell for: S_BATHW       variable wave = 15*/ ;
S_BDATE=S15BDATE ;
/* Empty map cell for: S1_BED        variable wave = 15*/ ;
/* Empty map cell for: S2_BED        variable wave = 15*/ ;
S_BED=S15BED ;
S_BEDA=S15BEDA ;
S_BEDE=S15BEDE ;
/* Empty map cell for: S2_BEDH       variable wave = 15*/ ;
S_BEDH=S15BEDH ;
/* Empty map cell for: S_BEDW        variable wave = 15*/ ;
S_BEQ100=S15BEQ100 ;
S_BEQ10K=S15BEQ10K ;
S_BEQ500=S15BEQ500 ;
S_BEQANY=S15BEQANY ;
/* Empty map cell for: S_BEQLRG      variable wave = 15*/ ;
S_BFLAG=S15BFLAG ;
S_BMI=S15BMI ;
S_BMONTH=S15BMONTH ;
/* Empty map cell for: S_BPDIA       variable wave = 15*/ ;
S_BPLACE=S15BPLACE ;
S_BPLACF=S15BPLACF ;
/* Empty map cell for: S_BPPOS       variable wave = 15*/ ;
/* Empty map cell for: S_BPPULS      variable wave = 15*/ ;
/* Empty map cell for: S_BPSYS       variable wave = 15*/ ;
/* Empty map cell for: S_BREAST      variable wave = 15*/ ;
/* Empty map cell for: S_BWC20       variable wave = 15*/ ;
/* Empty map cell for: S_BWC86       variable wave = 15*/ ;
S_BYEAR=S15BYEAR ;
/* Empty map cell for: S_CACT        variable wave = 15*/ ;
/* Empty map cell for: S1_CALC       variable wave = 15*/ ;
/* Empty map cell for: S2_CALC       variable wave = 15*/ ;
/* Empty map cell for: S_CALCA       variable wave = 15*/ ;
/* Empty map cell for: S_CALCW       variable wave = 15*/ ;
S_CANCR=S15CANCR ;
S_CANCRE=S15CANCRE ;
S_CANCREF=S15CANCREF ;
S_CANCRF=S15CANCRF ;
S_CANCRQ=S15CANCRQ ;
S_CANCRS=S15CANCRS ;
S_CENDIV=S15CENDIV ;
S_CENREG=S15CENREG ;
S_CESD=S15CESD ;
S_CESDM=S15CESDM ;
/* Empty map cell for: S1_CHAIR      variable wave = 15*/ ;
/* Empty map cell for: S2_CHAIR      variable wave = 15*/ ;
S_CHAIR=S15CHAIR ;
S_CHAIRA=S15CHAIRA ;
/* Empty map cell for: S_CHAIRW      variable wave = 15*/ ;
S_CHOLST=S15CHOLST ;
/* Empty map cell for: S_CLAIMED     variable wave = 15*/ ;
/* Empty map cell for: S1_CLIM1      variable wave = 15*/ ;
/* Empty map cell for: S2_CLIM1      variable wave = 15*/ ;
S_CLIM1=S15CLIM1 ;
S_CLIM1A=S15CLIM1A ;
/* Empty map cell for: S_CLIM1W      variable wave = 15*/ ;
/* Empty map cell for: S1_CLIMS      variable wave = 15*/ ;
/* Empty map cell for: S2_CLIMS      variable wave = 15*/ ;
S_CLIMS=S15CLIMS ;
S_CLIMSA=S15CLIMSA ;
/* Empty map cell for: S_CLIMSW      variable wave = 15*/ ;
/* Empty map cell for: S_COGTOT      variable wave = 15*/ ;
S_COHBYR=S15COHBYR ;
S_COHORT=S15COHORT ;
/* Empty map cell for: S_COMP        variable wave = 15*/ ;
/* Empty map cell for: S_COMPW       variable wave = 15*/ ;
S_CONDE=S15CONDE ;
S_CONDEF=S15CONDEF ;
S_CONDS=S15CONDS ;
S_CONDSF=S15CONDSF ;
S_CONDSP=S15CONDSP ;
S_COVR=S15COVR ;
S_COVRT=S15COVRT ;
S_COVS=S15COVS ;
S_DADAGE=S15DADAGE ;
S_DADLIV=S15DADLIV ;
S_DAGE_M=S15DAGE_M ;
S_DAGE_Y=S15DAGE_Y ;
S_DCBAL1=S15DCBAL1 ;
S_DCBAL2=S15DCBAL2 ;
S_DCBAL3=S15DCBAL3 ;
S_DCBAL4=S15DCBAL4 ;
S_DCBENE1=S15DCBENE1 ;
S_DCBENE2=S15DCBENE2 ;
S_DCBENE3=S15DCBENE3 ;
S_DCBENE4=S15DCBENE4 ;
S_DCCONT1=S15DCCONT1 ;
S_DCCONT2=S15DCCONT2 ;
S_DCCONT3=S15DCCONT3 ;
S_DCCONT4=S15DCCONT4 ;
S_DCMODE1=S15DCMODE1 ;
S_DCMODE2=S15DCMODE2 ;
S_DCMODE3=S15DCMODE3 ;
S_DCMODE4=S15DCMODE4 ;
S_DCPCT1=S15DCPCT1 ;
S_DCPCT2=S15DCPCT2 ;
S_DCPCT3=S15DCPCT3 ;
S_DCPCT4=S15DCPCT4 ;
S_DDATE=S15DDATE ;
S_DEMEN=S15DEMEN ;
S_DEMENE=S15DEMENE ;
S_DEMENEF=S15DEMENEF ;
S_DEMENF=S15DEMENF ;
S_DEMENQ=S15DEMENQ ;
S_DEMENS=S15DEMENS ;
S_DENTST=S15DENTST ;
S_DEPRES=S15DEPRES ;
/* Empty map cell for: S_DEPREX      variable wave = 15*/ ;
S_DIAB=S15DIAB ;
S_DIABE=S15DIABE ;
S_DIABEF=S15DIABEF ;
S_DIABF=S15DIABF ;
S_DIABQ=S15DIABQ ;
S_DIABS=S15DIABS ;
/* Empty map cell for: S1_DIME       variable wave = 15*/ ;
/* Empty map cell for: S2_DIME       variable wave = 15*/ ;
S_DIME=S15DIME ;
S_DIMEA=S15DIMEA ;
/* Empty map cell for: S_DIMEW       variable wave = 15*/ ;
/* Empty map cell for: S_DLRC        variable wave = 15*/ ;
/* Empty map cell for: S_DLRC20      variable wave = 15*/ ;
S_DMONTH=S15DMONTH ;
S_DOCTIM=S15DOCTIM ;
S_DOCTOR=S15DOCTOR ;
/* Empty map cell for: S1_DRESS      variable wave = 15*/ ;
/* Empty map cell for: S2_DRESS      variable wave = 15*/ ;
S_DRESS=S15DRESS ;
S_DRESSA=S15DRESSA ;
/* Empty map cell for: S2_DRESSH     variable wave = 15*/ ;
S_DRESSH=S15DRESSH ;
/* Empty map cell for: S_DRESSW      variable wave = 15*/ ;
S_DRINK=S15DRINK ;
S_DRINKD=S15DRINKD ;
S_DRINKN=S15DRINKN ;
/* Empty map cell for: S_DRINKR      variable wave = 15*/ ;
S_DRUGS=S15DRUGS ;
S_DSIAMT=S15DSIAMT ;
S_DSRC=S15DSRC ;
S_DSSAMT=S15DSSAMT ;
S_DSTAT=S15DSTAT ;
S_DTIMTDTH=S15DTIMTDTH ;
/* Empty map cell for: S_DW          variable wave = 15*/ ;
/* Empty map cell for: S_DY          variable wave = 15*/ ;
S_DYEAR=S15DYEAR ;
/* Empty map cell for: S1_EAT        variable wave = 15*/ ;
/* Empty map cell for: S2_EAT        variable wave = 15*/ ;
S_EAT=S15EAT ;
S_EATA=S15EATA ;
/* Empty map cell for: S2_EATH       variable wave = 15*/ ;
S_EATH=S15EATH ;
/* Empty map cell for: S_EATW        variable wave = 15*/ ;
S_EDEGRM=S15EDEGRM ;
S_EDUC=S15EDUC ;
S_EDYRS=S15EDYRS ;
S_EFFORT=S15EFFORT ;
/* Empty map cell for: S_EFFORX      variable wave = 15*/ ;
S_ENLIFE=S15ENLIFE ;
/* Empty map cell for: S_ENLIFX      variable wave = 15*/ ;
S_EVBRN=S15EVBRN ;
S_EVBRNF=S15EVBRNF ;
S_FAMR=S15FAMR ;
/* Empty map cell for: S_FBWC20      variable wave = 15*/ ;
/* Empty map cell for: S_FBWC86      variable wave = 15*/ ;
/* Empty map cell for: S_FCACT       variable wave = 15*/ ;
/* Empty map cell for: S_FDLRC       variable wave = 15*/ ;
/* Empty map cell for: S_FDW         variable wave = 15*/ ;
/* Empty map cell for: S_FDY         variable wave = 15*/ ;
S_FEDUC=S15FEDUC ;
/* Empty map cell for: S_FIMRC       variable wave = 15*/ ;
S_FINEA=S15FINEA ;
S_FINPLN=S15FINPLN ;
S_FINR=S15FINR ;
/* Empty map cell for: S_FLAG        variable wave = 15*/ ;
S_FLONE=S15FLONE ;
/* Empty map cell for: S_FLONEX      variable wave = 15*/ ;
S_FLUSHT=S15FLUSHT ;
/* Empty map cell for: S_FMO         variable wave = 15*/ ;
/* Empty map cell for: S_FPRES       variable wave = 15*/ ;
/* Empty map cell for: S_FPSTME      variable wave = 15*/ ;
S_FSAD=S15FSAD ;
/* Empty map cell for: S_FSADX       variable wave = 15*/ ;
/* Empty map cell for: S_FSCIS       variable wave = 15*/ ;
/* Empty map cell for: S_FSER7       variable wave = 15*/ ;
S_FSIZE=S15FSIZE ;
S_FSIZEF=S15FSIZEF ;
/* Empty map cell for: S_FSLFME      variable wave = 15*/ ;
/* Empty map cell for: S_FVOCAB      variable wave = 15*/ ;
/* Empty map cell for: S_FVP         variable wave = 15*/ ;
/* Empty map cell for: S_FYR         variable wave = 15*/ ;
S_GENDER=S15GENDER ;
S_GOING=S15GOING ;
/* Empty map cell for: S_GOINGX      variable wave = 15*/ ;
S_GOVMD=S15GOVMD ;
S_GOVMR=S15GOVMR ;
/* Empty map cell for: S_GOVOT       variable wave = 15*/ ;
S_GOVVA=S15GOVVA ;
S_GROSSA=S15GROSSA ;
/* Empty map cell for: S_GRP         variable wave = 15*/ ;
/* Empty map cell for: S_GRPDOM      variable wave = 15*/ ;
/* Empty map cell for: S_GRPL        variable wave = 15*/ ;
/* Empty map cell for: S_GRPPOS      variable wave = 15*/ ;
/* Empty map cell for: S_GRPR        variable wave = 15*/ ;
S_HALUC=S15HALUC ;
/* Empty map cell for: S_HDLR20      variable wave = 15*/ ;
S_HEART=S15HEART ;
S_HEARTE=S15HEARTE ;
S_HEARTEF=S15HEARTEF ;
S_HEARTF=S15HEARTF ;
S_HEARTQ=S15HEARTQ ;
S_HEARTS=S15HEARTS ;
S_HECOV1=S15HECOV1 ;
S_HECOV2=S15HECOV2 ;
S_HECOV3=S15HECOV3 ;
S_HEIGHT=S15HEIGHT ;
S_HENUM=S15HENUM ;
S_HERET=S15HERET ;
S_HERTR1=S15HERTR1 ;
S_HERTR2=S15HERTR2 ;
S_HERTR3=S15HERTR3 ;
S_HERTS1=S15HERTS1 ;
S_HERTS2=S15HERTS2 ;
S_HERTS3=S15HERTS3 ;
S_HESRC1=S15HESRC1 ;
S_HESRC2=S15HESRC2 ;
S_HESRC3=S15HESRC3 ;
S_HHIDPN=S15HHIDPN ;
S_HIBP=S15HIBP ;
S_HIBPE=S15HIBPE ;
S_HIBPEF=S15HIBPEF ;
S_HIBPF=S15HIBPF ;
S_HIBPQ=S15HIBPQ ;
S_HIBPS=S15HIBPS ;
S_HIGOV=S15HIGOV ;
S_HILTC=S15HILTC ;
/* Empty map cell for: S_HIMR20      variable wave = 15*/ ;
S_HIOTHP=S15HIOTHP ;
S_HISPAN=S15HISPAN ;
S_HLPDYSF=S15HLPDYSF ;
S_HLPDYSNF=S15HLPDYSNF ;
S_HLPDYSP=S15HLPDYSP ;
S_HLPDYST=S15HLPDYST ;
S_HLPDYSU=S15HLPDYSU ;
S_HLPHRSF=S15HLPHRSF ;
S_HLPHRSNF=S15HLPHRSNF ;
S_HLPHRSP=S15HLPHRSP ;
S_HLPHRST=S15HLPHRST ;
S_HLPHRSU=S15HLPHRSU ;
S_HLPPDFA=S15HLPPDFA ;
S_HLPPDFN=S15HLPPDFN ;
S_HLPPDNFA=S15HLPPDNFA ;
S_HLPPDNFN=S15HLPPDNFN ;
S_HLPPDTA=S15HLPPDTA ;
S_HLPPDTN=S15HLPPDTN ;
S_HLPRFN=S15HLPRFN ;
S_HLPRNFN=S15HLPRNFN ;
S_HLPRPN=S15HLPRPN ;
S_HLPRTN=S15HLPRTN ;
S_HLPRUN=S15HLPRUN ;
S_HLTC3=S15HLTC3 ;
/* Empty map cell for: S_HLTC5       variable wave = 15*/ ;
/* Empty map cell for: S_HLTC5F      variable wave = 15*/ ;
S_HLTHLM=S15HLTHLM ;
S_HOMCAR=S15HOMCAR ;
S_HOSP=S15HOSP ;
S_HRSAMP=S15HRSAMP ;
S_HSPNIT=S15HSPNIT ;
S_HSPTIM=S15HSPTIM ;
/* Empty map cell for: S_HSWRKF      variable wave = 15*/ ;
/* Empty map cell for: S_HTR40       variable wave = 15*/ ;
S_IADL5A=S15IADL5A ;
S_IADL5H=S15IADL5H ;
S_IANN=S15IANN ;
S_IEARN=S15IEARN ;
S_IFANN=S15IFANN ;
S_IFEARN=S15IFEARN ;
S_IFGXFR=S15IFGXFR ;
S_IFIRAW=S15IFIRAW ;
/* Empty map cell for: S_IFIRAWY1    variable wave = 15*/ ;
S_IFPEN=S15IFPEN ;
S_IFPENA=S15IFPENA ;
S_IFSDI=S15IFSDI ;
S_IFSRET=S15IFSRET ;
S1_IFSSDI=S15IFSSDI ;
/* Empty map cell for: S_IFSSDI      variable wave = 15*/ ;
/* Empty map cell for: S_IFSSI       variable wave = 15*/ ;
S_IFUNEM=S15IFUNEM ;
S1_IFUNWC=S15IFUNWC ;
/* Empty map cell for: S2_IFUNWC     variable wave = 15*/ ;
S_IFWCMP=S15IFWCMP ;
S_IGXFR=S15IGXFR ;
S_IIRAW=S15IIRAW ;
S_IIRAWY1=S15IIRAWY1 ;
/* Empty map cell for: S_IMRC        variable wave = 15*/ ;
/* Empty map cell for: S_IMRC20      variable wave = 15*/ ;
/* Empty map cell for: S_INHER       variable wave = 15*/ ;
S_INHPE=S15INHPE ;
S_INHPFN=S15INHPFN ;
S_INHPNFN=S15INHPNFN ;
S_INHPPN=S15INHPPN ;
S_INHPTN=S15INHPTN ;
S_INHPUN=S15INHPUN ;
S_INLBRF=S15INLBRF ;
S_IPEN=S15IPEN ;
S_IPENA=S15IPENA ;
S_ISDI=S15ISDI ;
S_ISRET=S15ISRET ;
S_ISSDI=S15ISSDI ;
S_ISSI=S15ISSI ;
S_IUNEM=S15IUNEM ;
S_IUNWC=S15IUNWC ;
S_IWBEG=S15IWBEG ;
/* Empty map cell for: S_IWBEGF      variable wave = 15*/ ;
S_IWCMP=S15IWCMP ;
S_IWEND=S15IWEND ;
/* Empty map cell for: S_IWENDF      variable wave = 15*/ ;
S_IWENDM=S15IWENDM ;
S_IWENDY=S15IWENDY ;
S_IWMID=S15IWMID ;
S_IWMIDF=S15IWMIDF ;
S_IWSTAT=S15IWSTAT ;
S_JCIND=S15JCIND ;
S_JCINDB=S15JCINDB ;
S_JCINDC=S15JCINDC ;
S_JCOCC=S15JCOCC ;
S_JCOCCA=S15JCOCCA ;
S_JCOCCB=S15JCOCCB ;
S_JCOCCC=S15JCOCCC ;
S_JCPEN=S15JCPEN ;
/* Empty map cell for: S_JCPENF      variable wave = 15*/ ;
S_JCTEN=S15JCTEN ;
S_JHOUR2=S15JHOUR2 ;
S_JHOURS=S15JHOURS ;
S_JJOBS=S15JJOBS ;
S_JLASTM=S15JLASTM ;
S_JLASTY=S15JLASTY ;
S_JLIFT=S15JLIFT ;
S_JLIND=S15JLIND ;
S_JLINDB=S15JLINDB ;
S_JLINDC=S15JLINDC ;
S_JLMIS=S15JLMIS ;
S_JLOCC=S15JLOCC ;
S_JLOCCA=S15JLOCCA ;
S_JLOCCB=S15JLOCCB ;
S_JLOCCC=S15JLOCCC ;
S_JLTEN=S15JLTEN ;
S_JLTENF=S15JLTENF ;
S_JMISS=S15JMISS ;
S_JNJOB=S15JNJOB ;
S_JNJOB5=S15JNJOB5 ;
/* Empty map cell for: S1_JOG        variable wave = 15*/ ;
/* Empty map cell for: S2_JOG        variable wave = 15*/ ;
S_JOG=S15JOG ;
S_JOGA=S15JOGA ;
/* Empty map cell for: S_JOGW        variable wave = 15*/ ;
S_JPHYS=S15JPHYS ;
S_JSIGHT=S15JSIGHT ;
S_JSTOOP=S15JSTOOP ;
S_JSTRES=S15JSTRES ;
S_JWEEK2=S15JWEEK2 ;
S_JWEEKS=S15JWEEKS ;
S_JYEARM=S15JYEARM ;
S_JYEARS=S15JYEARS ;
S_LBAGR=S15LBAGR ;
S_LBASSISTPRB=S15LBASSISTPRB ;
S_LBCOMP=S15LBCOMP ;
S_LBCON10=S15LBCON10 ;
S_LBCON5=S15LBCON5 ;
S_LBELIG=S15LBELIG ;
S_LBEXT=S15LBEXT ;
S_LBFAMDRUGPRB=S15LBFAMDRUGPRB ;
S_LBFAMHLTHPRB=S15LBFAMHLTHPRB ;
S_LBFINPRB=S15LBFINPRB ;
S_LBHLTHPRB=S15LBHLTHPRB ;
S_LBHOUSEPRB=S15LBHOUSEPRB ;
S_LBLONELY11=S15LBLONELY11 ;
S_LBLONELY3=S15LBLONELY3 ;
S_LBNEGAFFECT=S15LBNEGAFFECT ;
/* Empty map cell for: S_LBNEGAFFECT6variable wave = 15*/ ;
S_LBNEUR=S15LBNEUR ;
S_LBONCHRSTR=S15LBONCHRSTR ;
S_LBOPEN=S15LBOPEN ;
S_LBPOSAFFECT=S15LBPOSAFFECT ;
/* Empty map cell for: S_LBPOSAFFECT6variable wave = 15*/ ;
S_LBRF=S15LBRF ;
S_LBRFH=S15LBRFH ;
S_LBRFY=S15LBRFY ;
S_LBRLTNSHPRB=S15LBRLTNSHPRB ;
S_LBSATCITY=S15LBSATCITY ;
S_LBSATFAM=S15LBSATFAM ;
S_LBSATFIN=S15LBSATFIN ;
S_LBSATHLTH=S15LBSATHLTH ;
S_LBSATHOME=S15LBSATHOME ;
S_LBSATINC=S15LBSATINC ;
S_LBSATLEISURE=S15LBSATLEISURE ;
/* Empty map cell for: S_LBSATLIFE   variable wave = 15*/ ;
S_LBSATWLF=S15LBSATWLF ;
/* Empty map cell for: S_LBWGTR      variable wave = 15*/ ;
S_LBWORKPRB=S15LBWORKPRB ;
S_LGMUSA=S15LGMUSA ;
/* Empty map cell for: S_LGMUSW      variable wave = 15*/ ;
/* Empty map cell for: S_LHTACT      variable wave = 15*/ ;
S_LIFEIN=S15LIFEIN ;
/* Empty map cell for: S1_LIFT       variable wave = 15*/ ;
/* Empty map cell for: S2_LIFT       variable wave = 15*/ ;
S_LIFT=S15LIFT ;
S_LIFTA=S15LIFTA ;
/* Empty map cell for: S_LIFTW       variable wave = 15*/ ;
S_LIV10=S15LIV10 ;
S_LIV10A=S15LIV10A ;
S_LIV10P=S15LIV10P ;
S_LIV10R=S15LIV10R ;
S_LIV75=S15LIV75 ;
S_LIV75C=S15LIV75C ;
S_LIV75F=S15LIV75F ;
S_LIV75P=S15LIV75P ;
S_LIV75R=S15LIV75R ;
/* Empty map cell for: S_LIV85       variable wave = 15*/ ;
/* Empty map cell for: S_LIV85C      variable wave = 15*/ ;
/* Empty map cell for: S_LIV85F      variable wave = 15*/ ;
/* Empty map cell for: S_LIV85P      variable wave = 15*/ ;
/* Empty map cell for: S_LIV85R      variable wave = 15*/ ;
S_LIV8XC=S15LIV8XC ;
S_LIV8XF=S15LIV8XF ;
S_LIVBRO=S15LIVBRO ;
S_LIVPAR=S15LIVPAR ;
S_LIVSIB=S15LIVSIB ;
S_LIVSIS=S15LIVSIS ;
S_LOST=S15LOST ;
/* Empty map cell for: S_LTACTF      variable wave = 15*/ ;
/* Empty map cell for: S_LTACTN      variable wave = 15*/ ;
/* Empty map cell for: S_LTACTP      variable wave = 15*/ ;
S_LTACTX=S15LTACTX ;
S_LTCPRM=S15LTCPRM ;
S_LUNG=S15LUNG ;
S_LUNGE=S15LUNGE ;
S_LUNGEF=S15LUNGEF ;
S_LUNGF=S15LUNGF ;
S_LUNGQ=S15LUNGQ ;
S_LUNGS=S15LUNGS ;
S_MAMMOG=S15MAMMOG ;
/* Empty map cell for: S1_MAP        variable wave = 15*/ ;
/* Empty map cell for: S2_MAP        variable wave = 15*/ ;
S_MAP=S15MAP ;
S_MAPA=S15MAPA ;
/* Empty map cell for: S_MAPW        variable wave = 15*/ ;
S_MCURLN=S15MCURLN ;
/* Empty map cell for: S_MCWV        variable wave = 15*/ ;
/* Empty map cell for: S_MCWVW       variable wave = 15*/ ;
S_MDACTX=S15MDACTX ;
S_MDIV=S15MDIV ;
S_MEALS=S15MEALS ;
S_MEALSA=S15MEALSA ;
S_MEALSH=S15MEALSH ;
/* Empty map cell for: S_MEALSR      variable wave = 15*/ ;
/* Empty map cell for: S2_MEDS       variable wave = 15*/ ;
S_MEDS=S15MEDS ;
S_MEDSA=S15MEDSA ;
S_MEDSH=S15MEDSH ;
/* Empty map cell for: S_MEDSR       variable wave = 15*/ ;
S_MEDUC=S15MEDUC ;
/* Empty map cell for: S_MEMRY       variable wave = 15*/ ;
/* Empty map cell for: S_MEMRYE      variable wave = 15*/ ;
/* Empty map cell for: S_MEMRYEF     variable wave = 15*/ ;
/* Empty map cell for: S_MEMRYF      variable wave = 15*/ ;
/* Empty map cell for: S_MEMRYQ      variable wave = 15*/ ;
/* Empty map cell for: S_MEMRYS      variable wave = 15*/ ;
S_MEND=S15MEND ;
S_MLEN=S15MLEN ;
S_MLENM=S15MLENM ;
S_MNEV=S15MNEV ;
/* Empty map cell for: S_MO          variable wave = 15*/ ;
S_MOBILA=S15MOBILA ;
/* Empty map cell for: S_MOBILW      variable wave = 15*/ ;
S_MOMAGE=S15MOMAGE ;
S_MOMLIV=S15MOMLIV ;
/* Empty map cell for: S2_MONEY      variable wave = 15*/ ;
S_MONEY=S15MONEY ;
S_MONEYA=S15MONEYA ;
S_MONEYH=S15MONEYH ;
/* Empty map cell for: S_MONEYR      variable wave = 15*/ ;
S_MPART=S15MPART ;
S_MRCT=S15MRCT ;
S_MRPREM=S15MRPREM ;
S_MSTAT=S15MSTAT ;
S_MSTATF=S15MSTATF ;
S_MSTATH=S15MSTATH ;
/* Empty map cell for: S_MSTOT       variable wave = 15*/ ;
S_MWID=S15MWID ;
S_NHMDAY=S15NHMDAY ;
S_NHMLIV=S15NHMLIV ;
S_NHMMVM=S15NHMMVM ;
S_NHMMVY=S15NHMMVY ;
/* Empty map cell for: S_NOTICS      variable wave = 15*/ ;
/* Empty map cell for: S_NOVOC       variable wave = 15*/ ;
S_NRSHOM=S15NRSHOM ;
S_NRSNIT=S15NRSNIT ;
S_NRSTIM=S15NRSTIM ;
/* Empty map cell for: S_NSSCRE      variable wave = 15*/ ;
/* Empty map cell for: S_NSSCSE      variable wave = 15*/ ;
S_OAHDID=S15OAHDID ;
S_OHRSID=S15OHRSID ;
S_OOPMD=S15OOPMD ;
S_OOPMDF=S15OOPMDF ;
S_OOPMDO=S15OOPMDO ;
S_OOPMDOF=S15OOPMDOF ;
S_OUTPT=S15OUTPT ;
S_PAPSM=S15PAPSM ;
/* Empty map cell for: S_PARTD       variable wave = 15*/ ;
S_PENCT=S15PENCT ;
S_PENIC1=S15PENIC1 ;
S_PENIC2=S15PENIC2 ;
S_PENINC=S15PENINC ;
S_PENI_N=S15PENI_N ;
/* Empty map cell for: S2_PHONE      variable wave = 15*/ ;
S_PHONE=S15PHONE ;
S_PHONEA=S15PHONEA ;
S_PHONEH=S15PHONEH ;
/* Empty map cell for: S_PHONER      variable wave = 15*/ ;
/* Empty map cell for: S_PMBMI       variable wave = 15*/ ;
/* Empty map cell for: S_PMHGHT      variable wave = 15*/ ;
/* Empty map cell for: S_PMHGHTS     variable wave = 15*/ ;
/* Empty map cell for: S_PMWAIST     variable wave = 15*/ ;
/* Empty map cell for: S_PMWAISTC    variable wave = 15*/ ;
/* Empty map cell for: S_PMWGHT      variable wave = 15*/ ;
/* Empty map cell for: S_PMWGHTF     variable wave = 15*/ ;
/* Empty map cell for: S_PMWGHTS     variable wave = 15*/ ;
S_PNHM5Y=S15PNHM5Y ;
S_PRCHMEM=S15PRCHMEM ;
/* Empty map cell for: S_PRES        variable wave = 15*/ ;
S_PRMEM=S15PRMEM ;
S_PROST=S15PROST ;
S_PROXY=S15PROXY ;
S_PRPCNT=S15PRPCNT ;
S_PRPRM1=S15PRPRM1 ;
S_PRPRM2=S15PRPRM2 ;
S_PRPRM3=S15PRPRM3 ;
S_PRSRC1=S15PRSRC1 ;
S_PRSRC2=S15PRSRC2 ;
S_PRSRC3=S15PRSRC3 ;
/* Empty map cell for: S_PSTMEM      variable wave = 15*/ ;
S_PSYCH=S15PSYCH ;
S_PSYCHE=S15PSYCHE ;
S_PSYCHEF=S15PSYCHEF ;
S_PSYCHF=S15PSYCHF ;
S_PSYCHQ=S15PSYCHQ ;
S_PSYCHS=S15PSYCHS ;
S_PTYP1=S15PTYP1 ;
S_PTYP2=S15PTYP2 ;
S_PTYP3=S15PTYP3 ;
S_PTYP4=S15PTYP4 ;
S_PTYPD1=S15PTYPD1 ;
S_PTYPD2=S15PTYPD2 ;
S_PTYPD3=S15PTYPD3 ;
S_PTYPD4=S15PTYPD4 ;
S_PTYPF1=S15PTYPF1 ;
S_PTYPF2=S15PTYPF2 ;
S_PTYPF3=S15PTYPF3 ;
S_PTYPF4=S15PTYPF4 ;
/* Empty map cell for: S_PUFF        variable wave = 15*/ ;
/* Empty map cell for: S_PUFFPOS     variable wave = 15*/ ;
/* Empty map cell for: S1_PUSH       variable wave = 15*/ ;
/* Empty map cell for: S2_PUSH       variable wave = 15*/ ;
S_PUSH=S15PUSH ;
S_PUSHA=S15PUSHA ;
/* Empty map cell for: S_PUSHW       variable wave = 15*/ ;
S_RACEM=S15RACEM ;
S_RELIG=S15RELIG ;
S_RETDTWV=S15RETDTWV ;
S_RETEMP=S15RETEMP ;
/* Empty map cell for: S_RETINC      variable wave = 15*/ ;
/* Empty map cell for: S_RETLIV      variable wave = 15*/ ;
S_RETMON=S15RETMON ;
S_RETSAT=S15RETSAT ;
/* Empty map cell for: S_RETWLT      variable wave = 15*/ ;
/* Empty map cell for: S_RETWRK      variable wave = 15*/ ;
/* Empty map cell for: S_RETWSP      variable wave = 15*/ ;
S_RETYR=S15RETYR ;
/* Empty map cell for: S_RISK        variable wave = 15*/ ;
/* Empty map cell for: S_RISK6       variable wave = 15*/ ;
S_RPLNYA=S15RPLNYA ;
S_RPLNYR=S15RPLNYR ;
S_RXPREM=S15RXPREM ;
S_RYRCMP=S15RYRCMP ;
S_SADLF=S15SADLF ;
S_SAMEJOB=S15SAMEJOB ;
S_SAMEMP=S15SAMEMP ;
S_SAYRET=S15SAYRET ;
/* Empty map cell for: S_SCIS        variable wave = 15*/ ;
S_SDIAPL=S15SDIAPL ;
S_SDIAPLM=S15SDIAPLM ;
S_SDIAPLY=S15SDIAPLY ;
S_SDIAPP=S15SDIAPP ;
S_SDIAPPM=S15SDIAPPM ;
S_SDIAPPY=S15SDIAPPY ;
S_SDIDEN=S15SDIDEN ;
S_SDIREC=S15SDIREC ;
S_SDIRECM=S15SDIRECM ;
S_SDIRECY=S15SDIRECY ;
S_SDISTP=S15SDISTP ;
S_SDISTPM=S15SDISTPM ;
S_SDISTPY=S15SDISTPY ;
/* Empty map cell for: S_SER7        variable wave = 15*/ ;
S_SHLT=S15SHLT ;
S_SHLTC=S15SHLTC ;
S_SHLTCF=S15SHLTCF ;
S_SHOP=S15SHOP ;
S_SHOPA=S15SHOPA ;
S_SHOPH=S15SHOPH ;
/* Empty map cell for: S_SHOPR       variable wave = 15*/ ;
/* Empty map cell for: S1_SIT        variable wave = 15*/ ;
/* Empty map cell for: S2_SIT        variable wave = 15*/ ;
S_SIT=S15SIT ;
S_SITA=S15SITA ;
/* Empty map cell for: S_SITW        variable wave = 15*/ ;
S_SLEEP=S15SLEEP ;
S_SLEEPE=S15SLEEPE ;
S_SLEEPEF=S15SLEEPEF ;
S_SLEEPQ=S15SLEEPQ ;
S_SLEEPR=S15SLEEPR ;
S_SLEEPS=S15SLEEPS ;
/* Empty map cell for: S_SLEEPX      variable wave = 15*/ ;
S_SLFEMP=S15SLFEMP ;
/* Empty map cell for: S_SLFMEM      variable wave = 15*/ ;
S_SMOKEN=S15SMOKEN ;
S_SMOKEV=S15SMOKEV ;
S_SPCFAC=S15SPCFAC ;
/* Empty map cell for: S_SSAPL       variable wave = 15*/ ;
/* Empty map cell for: S_SSAPLM      variable wave = 15*/ ;
/* Empty map cell for: S_SSAPLY      variable wave = 15*/ ;
/* Empty map cell for: S_SSAPP       variable wave = 15*/ ;
/* Empty map cell for: S_SSAPPM      variable wave = 15*/ ;
/* Empty map cell for: S_SSAPPY      variable wave = 15*/ ;
/* Empty map cell for: S_SSDEN       variable wave = 15*/ ;
S_SSDI=S15SSDI ;
S_SSIAPL=S15SSIAPL ;
S_SSIAPLM=S15SSIAPLM ;
S_SSIAPLY=S15SSIAPLY ;
S_SSIAPP=S15SSIAPP ;
S_SSIAPPM=S15SSIAPPM ;
S_SSIAPPY=S15SSIAPPY ;
S_SSIDEN=S15SSIDEN ;
S_SSIREC=S15SSIREC ;
S_SSIRECM=S15SSIRECM ;
S_SSIRECY=S15SSIRECY ;
S_SSISTP=S15SSISTP ;
S_SSISTPM=S15SSISTPM ;
S_SSISTPY=S15SSISTPY ;
/* Empty map cell for: S_SSREC       variable wave = 15*/ ;
/* Empty map cell for: S_SSRECM      variable wave = 15*/ ;
/* Empty map cell for: S_SSRECY      variable wave = 15*/ ;
/* Empty map cell for: S_SSSTP       variable wave = 15*/ ;
/* Empty map cell for: S_SSSTPM      variable wave = 15*/ ;
/* Empty map cell for: S_SSSTPY      variable wave = 15*/ ;
/* Empty map cell for: S_SSWRER      variable wave = 15*/ ;
/* Empty map cell for: S_SSWRNR      variable wave = 15*/ ;
/* Empty map cell for: S_SSWRXA      variable wave = 15*/ ;
/* Empty map cell for: S_SSWSER      variable wave = 15*/ ;
/* Empty map cell for: S_SSWSNR      variable wave = 15*/ ;
/* Empty map cell for: S_SSWSXA      variable wave = 15*/ ;
/* Empty map cell for: S_STATUS      variable wave = 15*/ ;
/* Empty map cell for: S1_STOOP      variable wave = 15*/ ;
/* Empty map cell for: S2_STOOP      variable wave = 15*/ ;
S_STOOP=S15STOOP ;
S_STOOPA=S15STOOPA ;
/* Empty map cell for: S_STOOPW      variable wave = 15*/ ;
S_STROK=S15STROK ;
S_STROKE=S15STROKE ;
S_STROKEF=S15STROKEF ;
S_STROKF=S15STROKF ;
S_STROKQ=S15STROKQ ;
S_STROKS=S15STROKS ;
/* Empty map cell for: S_TIMWLK      variable wave = 15*/ ;
/* Empty map cell for: S_TIMWLKA     variable wave = 15*/ ;
/* Empty map cell for: S_TLIPRM      variable wave = 15*/ ;
/* Empty map cell for: S2_TOILT      variable wave = 15*/ ;
S_TOILT=S15TOILT ;
S_TOILTA=S15TOILTA ;
/* Empty map cell for: S2_TOILTH     variable wave = 15*/ ;
S_TOILTH=S15TOILTH ;
/* Empty map cell for: S_TOTMBF      variable wave = 15*/ ;
/* Empty map cell for: S_TOTMBI      variable wave = 15*/ ;
/* Empty map cell for: S_TOTMD       variable wave = 15*/ ;
/* Empty map cell for: S_TOTMDF      variable wave = 15*/ ;
/* Empty map cell for: S_TR20        variable wave = 15*/ ;
/* Empty map cell for: S_TR40        variable wave = 15*/ ;
S_TYLTC=S15TYLTC ;
/* Empty map cell for: S_ULCER       variable wave = 15*/ ;
S_UNEMP=S15UNEMP ;
S_UNION=S15UNION ;
S_UNIONF=S15UNIONF ;
S_VETRN=S15VETRN ;
/* Empty map cell for: S_VGACTF      variable wave = 15*/ ;
/* Empty map cell for: S_VGACTN      variable wave = 15*/ ;
/* Empty map cell for: S_VGACTP      variable wave = 15*/ ;
S_VGACTX=S15VGACTX ;
/* Empty map cell for: S_VIGACT      variable wave = 15*/ ;
/* Empty map cell for: S_VOCAB       variable wave = 15*/ ;
/* Empty map cell for: S_VP          variable wave = 15*/ ;
/* Empty map cell for: S1_WALK1      variable wave = 15*/ ;
/* Empty map cell for: S2_WALK1      variable wave = 15*/ ;
S_WALK1=S15WALK1 ;
S_WALK1A=S15WALK1A ;
/* Empty map cell for: S_WALK1W      variable wave = 15*/ ;
/* Empty map cell for: S1_WALKR      variable wave = 15*/ ;
/* Empty map cell for: S2_WALKR      variable wave = 15*/ ;
S_WALKR=S15WALKR ;
S_WALKRA=S15WALKRA ;
S_WALKRE=S15WALKRE ;
/* Empty map cell for: S2_WALKRH     variable wave = 15*/ ;
S_WALKRH=S15WALKRH ;
/* Empty map cell for: S_WALKRW      variable wave = 15*/ ;
/* Empty map cell for: S1_WALKS      variable wave = 15*/ ;
/* Empty map cell for: S2_WALKS      variable wave = 15*/ ;
S_WALKS=S15WALKS ;
S_WALKSA=S15WALKSA ;
/* Empty map cell for: S_WALKSW      variable wave = 15*/ ;
S_WANDER=S15WANDER ;
S_WEIGHT=S15WEIGHT ;
S_WGFHR=S15WGFHR ;
S_WGFWK=S15WGFWK ;
S_WGIHR=S15WGIHR ;
S_WGIWK=S15WGIWK ;
/* Empty map cell for: S_WHAPPX      variable wave = 15*/ ;
S_WHAPPY=S15WHAPPY ;
S_WLIPRM=S15WLIPRM ;
S_WORK=S15WORK ;
S_WORK2=S15WORK2 ;
S_WORK62=S15WORK62 ;
S_WORK62F=S15WORK62F ;
S_WORK65=S15WORK65 ;
S_WORK65F=S15WORK65F ;
S_WORK70=S15WORK70 ;
S_WORK70A=S15WORK70A ;
S_WORK70AF=S15WORK70AF ;
S_WORK70F=S15WORK70F ;
/* Empty map cell for: S_WORKLM      variable wave = 15*/ ;
/* Empty map cell for: S_WTCRNH      variable wave = 15*/ ;
/* Empty map cell for: S_WTRESP      variable wave = 15*/ ;
/* Empty map cell for: S_WTR_NH      variable wave = 15*/ ;
/* Empty map cell for: S_YR          variable wave = 15*/ ;
if inw=1 then output ;
%mend process_data /*  -- mend statement  */ ;
