// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// SharkKMeansTrain
List SharkKMeansTrain(NumericMatrix X, ssize_t k);
RcppExport SEXP LearningRcppShark_SharkKMeansTrain(SEXP XSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< ssize_t >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(SharkKMeansTrain(X, k));
    return rcpp_result_gen;
END_RCPP
}
// SharkKMeansPredict
NumericVector SharkKMeansPredict(NumericMatrix X, NumericMatrix centroids);
RcppExport SEXP LearningRcppShark_SharkKMeansPredict(SEXP XSEXP, SEXP centroidsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type centroids(centroidsSEXP);
    rcpp_result_gen = Rcpp::wrap(SharkKMeansPredict(X, centroids));
    return rcpp_result_gen;
END_RCPP
}