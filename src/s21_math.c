#include "s21_math.h"

void setbit(unsigned long long *x, int i, int bit);
void setbit_int(int *x, int i, int bit);
int get_bit(unsigned long long x, int i);
double get_ipart(double x);
long double s21_ldabs(long double x);
long double s21_ln(double x);
int ostatokotdeleniya(int a, int d);
int signforexp(double exp);
long double mypow_exppoz(double base, double expv);
long double mypow_baseexppoz(double base, double expv);

int s21_abs(int x) { return x < 0 ? -x : x; }

long double s21_acos(double x) {
  long double result = 0;
  if (s21_fabs(x) > 1) {
    result = __builtin_nan("");
  } else if (x > 0.707107) {
    result = s21_asin(s21_sqrt(1 - x * x));
  } else if (x < -0.707107) {
    result = s21_PI - s21_asin(s21_sqrt(1 - x * x));
  } else {
    result = s21_P_2 - s21_asin(x);
  }
  return result;
}

long double s21_asin(double x) {
  long double result = x;
  if (s21_fabs(x) > 1) {
    result = __builtin_nan("");
  } else if (x > 0.707107) {
    result = s21_acos(s21_sqrt(1 - x * x));
  } else if (x < -0.707107) {
    result = -s21_acos(s21_sqrt(1 - x * x));
  } else {
    long double term = x;
    long double coefficient = 0;
    long double n = 1L;
    while (s21_ldabs(term) > PRECISION) {
      coefficient = (2 * n - 1) * (2 * n - 1) / ((2 * n) * (2 * n + 1));
      term *= coefficient * x * x;
      result += term;
      n++;
    }
  }

  return result;
}

long double s21_atan(double x) {
  long double result = 0;
  if (s21_fabs(x) > 0.4 && s21_fabs(x) < 10) {
    result = s21_asin(x * s21_sqrt(1 / (1 + x * x)));
  } else {
    int direct = (s21_fabs(x) < 1);
    x = direct ? x : 1 / x;
    long double term = direct ? x : -x;
    result = term + (direct ? 0 : (x > 0 ? s21_P_2 : -s21_P_2));
    long double coefficient = 1L;
    long double n = 1L;
    while (s21_ldabs(coefficient * term) > PRECISION && n < 20) {
      coefficient = 1.0L / (2 * n + 1);
      term *= -x * x;
      result += coefficient * term;
      n++;
    }
  }
  return result;
}

long double s21_ceil(double x) {
  long double result = 0;

  if (isInf(x) || isNan(x)) {
    result = x;
  } else {
    int sign = x > 0 ? 0 : 1;
    double temp = s21_fabs(x);
    double ipart = get_ipart(temp);
    double fpart = temp - ipart;
    result = (long double)ipart;
    if (sign) result *= -1;
    if (fpart > 0 && !sign) {
      result = result + 1.0;
    }
  }
  return result;
}

long double s21_cos(double x) {
  double cos_res = 0;
  if (isInf(x) || isNan(x)) {
    cos_res = s21_NaN;
  } else {
    x = s21_fmod(x, 2 * 3.14159265358979323846);
    double counter = 1, divindent = 0, divider = 0, div_res = 1;
    cos_res = 1;
    while (s21_fabs(div_res) > 1e-6l) {
      divindent = -x * x;
      divider = ((2 * counter - 1) * (2 * counter));
      div_res *= divindent / divider;
      cos_res += div_res;
      counter++;
    }
  }
  return cos_res;
}

long double s21_exp(double x) {
  long double summ = 0;
  if (x > LnLongDouble) {
    summ = s21_Inf;
  } else if (x > -LnLongDouble) {
    unsigned short isnegativ = (x < 0);
    if (isnegativ) x *= (-1);
    summ = 1;
    long double chis = 1, znam = 1, chlen = 1;
    int i = 0;
    while (s21_ldabs(chlen) > PRECISION) {
      chis *= x;
      znam *= (++i);
      summ += (chlen = chis / znam);
    }
    if (isnegativ && s21_ldabs(summ) > 0) summ = 1 / summ;
  }
  return summ;
}

long double s21_fabs(double x) {
  union double_and_int temp = {0};
  temp.double_num = x;
  temp.int_num <<= 1;
  temp.int_num >>= 1;
  return temp.double_num;
}

long double s21_fmod(double x, double y) {
  long double result = 0;
  if (isInf(x)) {
    result = s21_NaN;
  } else if (isInf(y)) {
    result = x;
  } else {
    int flag_neg = 0;
    if (x < 0) {
      flag_neg = 1;
      x = (double)s21_fabs(x);
    }
    if (y < 0) y = (double)s21_fabs(y);
    double quotient = x / y;
    double ipart = get_ipart(quotient);
    result = x - ipart * y;
    if (flag_neg) result *= -1;
  }
  return result;
}

long double s21_floor(double x) {
  long double result = 0;
  if (isInf(x) || isNan(x)) {
    result = x;
  } else {
    int sign = x > 0 ? 0 : 1;
    double temp = s21_fabs(x);
    double ipart = get_ipart(temp);
    double fpart = temp - ipart;
    result = (long double)ipart;
    if (sign) result *= -1;
    if (fpart > 0 && sign) {
      result = result - 1.0;
    }
  }
  return result;
}

long double s21_log(double x) {
  long double rez = 0;
  if ((0 < x) && (x < 1))
    rez = -s21_ln(1 / x);
  else if (x >= 1)
    rez = s21_ln(x);
  else if (x < 0)
    rez = s21_NaN;
  else
    rez = -s21_Inf;
  return rez;
}

long double s21_pow(double base, double exp) {
  long double rez = 1; /*or 0 as that is in <math.h>*/
  if (exp > 0)
    rez = mypow_exppoz(base, exp);
  else if ((exp < 0) && (s21_fabs(base) > PRECISION))
    rez = 1 / mypow_exppoz(base, -exp);
  return rez;
}

long double s21_sin(double x) {
  x = s21_fmod(x, 2 * 3.14159265358979323846);
  int counter = 1;
  double sin_res = x, dividend = x, divider = 1, div_res = 1;
  do {
    dividend = dividend * -1 * x * x;
    divider = divider * ((counter << 1) * ((counter << 1) + 1));
    div_res = dividend / divider;
    sin_res += div_res;
    counter++;
  } while (s21_fabs(div_res) > 1e-6l);
  return sin_res;
}

long double s21_sqrt(double x) {
  long double rez = 0;
  if (x < 0)
    rez = s21_NaN;
  else if (x > 0)
    rez = s21_pow(x, 0.5);
  return rez;
}

long double s21_tan(double x) {
  long double res;
  if (isNan(x) || isInf(x)) {
    res = __builtin_nan("");
  } else {
    res = s21_sin(x) / s21_cos(x);
  }
  return res;
}

void setbit(unsigned long long *x, int i, int bit) {
  unsigned long long one = 1;
  unsigned long long y = one << i;
  *x = bit ? *x | y : *x & (~y);
}

void setbit_int(int *x, int i, int bit) {
  int one = 1;
  int y = one << i;
  *x = bit ? *x | y : *x & (~y);
}

int get_bit(unsigned long long x, int i) {
  unsigned long long one = 1;
  unsigned long long y = one << i;
  return (x & y) ? 1 : 0;
}

double get_ipart(double x) {
  double ipart = 0;
  if (s21_fabs(x) >= 1) {
    unsigned long long l = *((long long *)&x);
    union un converter_ipart = {0};
    int exp = 0;
    for (int i = 52, j = 0; i < 64; i++, j++) {
      int bit = get_bit(l, i);
      setbit_int(&exp, j, bit);
    }
    exp -= 1023;
    for (int i = 0; i < 52 - exp; i++) {
      setbit(&l, i, 0);
    }
    converter_ipart.y = l;
    ipart = converter_ipart.x;
  }
  return ipart;
}

long double s21_ldabs(long double x) { return x > 0 ? x : -x; }

long double s21_ln(double x) {
  long double summ = 0;
  if (x < 1) {
    summ = -s21_Inf;
  } else if (x > 1) {
    unsigned int k = 0;
    while (x >= 2) {
      x = x / 2;
      k++;
    }
    x -= 1;
    long double chis = x, znam = 1, chlen = x;
    summ = x;
    while (s21_ldabs(chlen) > PRECISION) {
      chis *= -x;
      znam++;
      chlen = chis / znam;
      summ += chlen;
    }
    summ += (k * LN2);
  }
  return summ;
}

int ostatokotdeleniya(int a, int d) {
  int n = 0, temp = a;
  for (; temp >= d; n++) temp -= d;
  return a - n * d;
}

int signforexp(double exp) {
  int sign = ostatokotdeleniya(exp, 2) ? -1 : 1;
  double drobn = exp - (int)exp;
  if (drobn > PRECISION_DOUBLE) drobn = 1 / drobn;
  int round = (int)(drobn + 0.5);
  sign *= ostatokotdeleniya(round, 2) ? -1 : 1;
  if (s21_ldabs(drobn - round) > PRECISION_DOUBLE) sign = 0;
  return sign;
}

long double mypow_exppoz(double base, double expv) {
  long double rez = 0;
  if (base > 0) {
    rez = 0.5 * (s21_exp(expv * s21_log(base)) + mypow_baseexppoz(base, expv));
  } else if (base < 0) {
    if ((rez = signforexp(expv)) != 0)
      rez = 0.5 *
            (s21_exp(expv * s21_log(-base)) + mypow_baseexppoz(-base, expv));
    else
      rez = s21_NaN;
  }
  return rez;
}

long double mypow_baseexppoz(double base, double expv) {
  unsigned short issmall = (0 < base) && (base < 1);
  if (issmall) base = 1 / base;
  long double e1 = s21_exp(1);
  int n = 0;
  for (; base >= 2; n++) base /= e1;
  long double mult = s21_exp(n * expv);
  double x = base - 1;
  unsigned int k = 0;
  long double chis = 1, znam = 1, chlen = 1, summ = 1;
  while (s21_ldabs(chlen) > PRECISION) {
    k++;
    chis *= x * (expv + 1 - k);
    znam *= k;
    summ += (chlen = chis / znam);
  }
  summ *= mult;
  if (issmall) summ = 1 / summ;
  return summ;
}
