#ifndef C4_S21_MATH_1_SRC_S21_MATH_H_
#define C4_S21_MATH_1_SRC_S21_MATH_H_

#define isInf __builtin_isinf
#define isNan __builtin_isnan
#define s21_PI 3.1415926535897932384626
#define s21_P_2 1.57079632679489661923
#define PRECISION 1E-17
#define LnLongDouble 709.0895657
#define s21_NaN (0.0 / 0.0)
#define s21_Inf (1.0 / 0.0)
#define LN2 0.693147180559945309417232
#define PRECISION_DOUBLE 1E-14

union double_and_int {
  unsigned long long int int_num;
  double double_num;
};

union un {
  double x;
  unsigned long long y;
};

int s21_abs(int x);

long double s21_acos(double x);

long double s21_asin(double x);

long double s21_atan(double x);

long double s21_ceil(double x);

long double s21_cos(double x);

long double s21_exp(double x);

long double s21_fabs(double x);

long double s21_fmod(double x, double y);

long double s21_floor(double x);

long double s21_log(double x);

long double s21_pow(double base, double exp);

long double s21_sin(double x);

long double s21_sqrt(double x);

long double s21_tan(double x);

#endif  // C4_S21_MATH_1_SRC_S21_MATH_H_
