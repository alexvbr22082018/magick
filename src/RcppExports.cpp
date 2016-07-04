// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// convert_to
Rcpp::RawVector convert_to(Rcpp::RawVector x, Rcpp::String format);
RcppExport SEXP magick_convert_to(SEXP xSEXP, SEXP formatSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::RawVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::String >::type format(formatSEXP);
    __result = Rcpp::wrap(convert_to(x, format));
    return __result;
END_RCPP
}
// magick_coder_info
Rcpp::List magick_coder_info(Rcpp::String format);
RcppExport SEXP magick_magick_coder_info(SEXP formatSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::String >::type format(formatSEXP);
    __result = Rcpp::wrap(magick_coder_info(format));
    return __result;
END_RCPP
}
