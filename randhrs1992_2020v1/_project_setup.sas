%macro _project_setup;
/* Macro vars `repo_name`, `repo_path`, `prj_name`, `dir_name` defined in `_project_auto.inc` */
%put ===> `_project_setup` macro STARTS here;

/* Declare global macro variables */
%global repo_path repo_name prj_name dir_name;
%global xlsx_path xlsx_name xlsx_nickname dir_path table_version;
%global datain formats_cntlin wide_datain;
%global fcmp_src_path;
%global HRSpkg_path;

%let HRSpkg_path=S:\Jin\DDBC\HRS_package;

%let prj_path = &repo_path\&prj_name;

/*------ Excel file multiple maps ------*/
%let xlsx_nickname = _1992_2020v1_maps;   /* _1992_2020v1_maps or test3_maps */
%let xlsx_date =22MAR2024;
%let xlsx_path = \\maize.umhsnas.med.umich.edu\Geriatrics-HRS\External Drive\AHead_hrs_c\randhrs1992_2020v1_SAS;
%let xlsx_name =&xlsx_nickname&xlsx_date;       /* === Full xlsx name with mapping info ===*/
%let table_version = &repo_version-&xlsx_date;  /* Auxiliary */


/*--------- RAND and cntlin datasets in `LIBIN` libref    -----------*/

libname LIBIN "\\maize.umhsnas.med.umich.edu\Geriatrics-HRS\External Drive\AHead_hrs_c\randhrs1992_2020v1_SAS" access=readonly;

%let DATAIN = randhrs1992_2020v1;
%let wide_datain = libin.&datain;
%let formats_cntlin = libin.sasfmts;


%put --- Global macro vars defined in `project_setup.inc`;
%put repo_version    := &repo_version;
%put repo_path       := &repo_path;
%put HRSpkg_path     := &HRSpkg_path;
%put prj_name        := &prj_name;
%put;

%put xlsx_nickname   := &xlsx_nickname;
%put xlsx_date       := &xlsx_date;
%put xlsx_name       := &xlsx_name;
%put xlsx_path       := &xlsx_path;
%put xlsx_name       := &xlsx_name;
%put table_version   := &table_version;
%put; 
%put libin_path      := %sysfunc(pathname(libin,L));
%put DATAIN          := &datain;
%put formats_cntlin  := &formats_cntlin;
%put fcmp_src_path   := &fcmp_src_path;
%put --- `project_setup` macro ENDS here`;
%put; 
%mend _project_setup;






