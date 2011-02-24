#include <iostream>
#include <string>
#include <math.h> 
using namespace std;
#include <algorithm>
#include <ctime>
#include <cmath>
#include <vector>
#include <map>
#include "tree.hh"
#include <R.h>
#include <Rdefines.h>
#include <R_ext/Rdynload.h>

/* Entry points called from the R functions */
extern "C" 
{
	SEXP mrnet_adapted(SEXP data, SEXP maxparents, SEXP nvar, SEXP nsample, SEXP predn, SEXP npredn, SEXP threshold);
	SEXP mrmr_ensemble(SEXP data, SEXP maxparents, SEXP nvar, SEXP nsample, SEXP predn, SEXP npredn, SEXP rep_boot, SEXP maxnsol);

}

double get_correlation(double data [],int ind_x, int ind_y, int size);
void build_mim_subset(double mim[],double data[],int nvar,int nsample, int subset [],int size_subset);
