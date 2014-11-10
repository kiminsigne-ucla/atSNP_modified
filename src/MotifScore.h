#ifndef _csnet_RCPP_HELLO_WORLD_H
#define _csnet_RCPP_HELLO_WORLD_H

#include <Rcpp.h>

/*
 * note : RcppExport is an alias to `extern "C"` defined by Rcpp.
 *
 * It gives C calling convention to the rcpp_hello_world function so that 
 * it can be called from .Call in R. Otherwise, the C++ compiler mangles the 
 * name of the function and .Call can't find it.
 *
 * It is only useful to use RcppExport when the function is intended to be called
 * by .Call. See the thread http://thread.gmane.org/gmane.comp.lang.r.rcpp/649/focus=672
 * on Rcpp-devel for a misuse of RcppExport
 */
using namespace Rcpp;
RcppExport SEXP motif_score(SEXP, SEXP);
int find_best_match(NumericMatrix, IntegerVector);
double pwm_log_prob(NumericMatrix, IntegerVector, int);
RcppExport SEXP transition_matrix(SEXP);
RcppExport SEXP test_max_log_prob(SEXP, SEXP);

NumericMatrix p_value(NumericMatrix, NumericVector, NumericMatrix, NumericMatrix, double);
double func_delta(NumericMatrix, NumericVector, NumericMatrix, double);
double find_theta(NumericMatrix, NumericVector, NumericMatrix, double);
IntegerVector importance_sample(NumericMatrix, NumericVector, NumericMatrix, NumericMatrix, double);
NumericVector compute_sample_score(NumericMatrix, IntegerVector, int);
double find_percentile(NumericMatrix, double);
RcppExport SEXP test_find_percentile(SEXP, SEXP);
RcppExport SEXP test_p_value(SEXP, SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP test_find_theta(SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP test_func_delta(SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP test_importance_sample(SEXP, SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP test_compute_sample_score(SEXP, SEXP, SEXP);

NumericVector p_value_diff(NumericMatrix, NumericMatrix, NumericMatrix, NumericVector, NumericMatrix, NumericMatrix, double);
double func_delta_diff(NumericMatrix, NumericMatrix, NumericVector, NumericMatrix, double);
double find_theta_diff(NumericMatrix, NumericMatrix, NumericVector, NumericMatrix, double);
IntegerVector importance_sample_diff(NumericMatrix, NumericVector, NumericMatrix, NumericMatrix, double);
NumericVector compute_sample_score_diff(NumericMatrix, NumericMatrix, NumericMatrix, IntegerVector, int, double);
double find_percentile_diff(NumericMatrix, double);
RcppExport SEXP test_find_percentile_diff(SEXP, SEXP);
RcppExport SEXP test_p_value_diff(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP test_find_theta_diff(SEXP, SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP test_func_delta_diff(SEXP, SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP test_importance_sample_diff(SEXP, SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP test_compute_sample_score_diff(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);



#endif