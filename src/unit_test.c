#include <check.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "s21_math.h"

double my_inf = 1.0 / 0.0;
double my_min_inf = -1.0 / 0.0;
double my_nan = 0.0 / 0.0;
double min_nan = -0.0 / 0.0;
double zero = 0;
double min_zero = 0;
double small_num = 1;
double min_small_num = -1;
double num = 100;
double min_num = -100;
double big_num = 666666;
double min_big_num = -666665;
double zf = 0.5;
double mzf = -0.5;
double tf = 2.5;
double mtf = -2.5;
double big_float = 1234.456789;
double min_big_float = -1234.456789;
double small = 0.0000001;
double min_small = -0.0000001;
double long_double = 0.3425443513423432432432;
double min_long_double = -0.3425443513423432432432;
int flag = 0;
double x;
double y;
char str1[100] = {'\0'};
char str2[100] = {'\0'};

START_TEST(abs_test1) {
  ck_assert_int_eq(s21_abs((int)my_inf), abs((int)my_inf));
}
END_TEST

Suite *test_suite_abs_test1() {
  Suite *s = suite_create("abs_test1");
  TCase *tc = tcase_create("abs_test1");
  tcase_add_test(tc, abs_test1);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(abs_test2) {
  ck_assert_int_eq(s21_abs((int)my_min_inf), abs((int)my_min_inf));
}
END_TEST

Suite *test_suite_abs_test2() {
  Suite *s = suite_create("abs_test2");
  TCase *tc = tcase_create("abs_test2");
  tcase_add_test(tc, abs_test2);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(abs_test3) {
  ck_assert_int_eq(s21_abs((int)my_nan), abs((int)my_nan));
}
END_TEST

Suite *test_suite_abs_test3() {
  Suite *s = suite_create("abs_test3");
  TCase *tc = tcase_create("abs_test3");
  tcase_add_test(tc, abs_test3);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(abs_test4) {
  ck_assert_int_eq(s21_abs((int)min_nan), abs((int)min_nan));
}
END_TEST

Suite *test_suite_abs_test4() {
  Suite *s = suite_create("abs_test4");
  TCase *tc = tcase_create("abs_test4");
  tcase_add_test(tc, abs_test4);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(abs_test5) { ck_assert_int_eq(s21_abs((int)zero), abs((int)zero)); }
END_TEST

Suite *test_suite_abs_test5() {
  Suite *s = suite_create("abs_test5");
  TCase *tc = tcase_create("abs_test5");
  tcase_add_test(tc, abs_test5);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(abs_test6) {
  ck_assert_int_eq(s21_abs((int)min_zero), abs((int)min_zero));
}
END_TEST

Suite *test_suite_abs_test6() {
  Suite *s = suite_create("abs_test6");
  TCase *tc = tcase_create("abs_test6");
  tcase_add_test(tc, abs_test6);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(abs_test7) {
  ck_assert_int_eq(s21_abs((int)big_num), abs((int)big_num));
}
END_TEST

Suite *test_suite_abs_test7() {
  Suite *s = suite_create("abs_test7");
  TCase *tc = tcase_create("abs_test7");
  tcase_add_test(tc, abs_test7);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(abs_test8) {
  ck_assert_int_eq(s21_abs((int)min_big_num), abs((int)min_big_num));
}
END_TEST

Suite *test_suite_abs_test8() {
  Suite *s = suite_create("abs_test8");
  TCase *tc = tcase_create("abs_test8");
  tcase_add_test(tc, abs_test8);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(abs_test9) { ck_assert_int_eq(s21_abs((int)num), abs((int)num)); }
END_TEST

Suite *test_suite_abs_test9() {
  Suite *s = suite_create("abs_test9");
  TCase *tc = tcase_create("abs_test9");
  tcase_add_test(tc, abs_test9);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(abs_test10) {
  ck_assert_int_eq(s21_abs((int)min_num), abs((int)min_num));
}
END_TEST

Suite *test_suite_abs_test10() {
  Suite *s = suite_create("abs_test10");
  TCase *tc = tcase_create("abs_test10");
  tcase_add_test(tc, abs_test10);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(abs_test11) {
  ck_assert_int_eq(s21_abs((int)min_num), abs((int)min_num));
}
END_TEST

Suite *test_suite_abs_test11() {
  Suite *s = suite_create("abs_test11");
  TCase *tc = tcase_create("abs_test11");
  tcase_add_test(tc, abs_test11);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(abs_test12) {
  ck_assert_int_eq(s21_abs((int)small_num), abs((int)small_num));
}
END_TEST

Suite *test_suite_abs_test12() {
  Suite *s = suite_create("abs_test12");
  TCase *tc = tcase_create("abs_test12");
  tcase_add_test(tc, abs_test12);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(abs_test13) {
  ck_assert_int_eq(s21_abs((int)min_small_num), abs((int)min_small_num));
}
END_TEST

Suite *test_suite_abs_test13() {
  Suite *s = suite_create("abs_test13");
  TCase *tc = tcase_create("abs_test13");
  tcase_add_test(tc, abs_test13);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(fabs_test1) {
  if (s21_fabs(my_inf) == fabs(my_inf)) flag = 1;
  ck_assert_int_eq(flag, 1);
}
END_TEST

Suite *test_suite_fabs_test1() {
  Suite *s = suite_create("fabs_test1");
  TCase *tc = tcase_create("fabs_test1");
  tcase_add_test(tc, fabs_test1);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(fabs_test2) {
  flag = 0;
  if (s21_fabs(my_min_inf) == fabs(my_min_inf)) flag = 1;
  ck_assert_int_eq(flag, 1);
}
END_TEST

Suite *test_suite_fabs_test2() {
  Suite *s = suite_create("fabs_test2");
  TCase *tc = tcase_create("fabs_test2");
  tcase_add_test(tc, fabs_test2);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(fabs_test3) { ck_assert_int_eq(s21_fabs(my_nan), fabs(my_nan)); }
END_TEST

Suite *test_suite_fabs_test3() {
  Suite *s = suite_create("fabs_test3");
  TCase *tc = tcase_create("fabs_test3");
  tcase_add_test(tc, fabs_test3);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(fabs_test4) { ck_assert_int_eq(s21_fabs(min_nan), fabs(min_nan)); }
END_TEST

Suite *test_suite_fabs_test4() {
  Suite *s = suite_create("fabs_test4");
  TCase *tc = tcase_create("fabs_test4");
  tcase_add_test(tc, fabs_test4);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(fabs_test5) { ck_assert_int_eq(s21_fabs(zero), fabs(zero)); }
END_TEST

Suite *test_suite_fabs_test5() {
  Suite *s = suite_create("fabs_test5");
  TCase *tc = tcase_create("fabs_test5");
  tcase_add_test(tc, fabs_test5);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(fabs_test6) { ck_assert_int_eq(s21_fabs(min_zero), fabs(min_zero)); }
END_TEST

Suite *test_suite_fabs_test6() {
  Suite *s = suite_create("fabs_test6");
  TCase *tc = tcase_create("fabs_test6");
  tcase_add_test(tc, fabs_test6);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(fabs_test7) {
  flag = 0;
  if (s21_fabs(small_num) == fabs(small_num)) flag = 1;
  ck_assert_int_eq(flag, 1);
}
END_TEST

Suite *test_suite_fabs_test7() {
  Suite *s = suite_create("fabs_test7");
  TCase *tc = tcase_create("fabs_test7");
  tcase_add_test(tc, fabs_test7);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(fabs_test8) {
  flag = 0;
  if (s21_fabs(min_small_num) == fabs(min_small_num)) flag = 1;
  ck_assert_int_eq(flag, 1);
}
END_TEST

Suite *test_suite_fabs_test8() {
  Suite *s = suite_create("fabs_test8");
  TCase *tc = tcase_create("fabs_test8");
  tcase_add_test(tc, fabs_test8);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(fabs_test9) {
  flag = 0;
  if (s21_fabs(num) == fabs(num)) flag = 1;
  ck_assert_int_eq(flag, 1);
}
END_TEST

Suite *test_suite_fabs_test9() {
  Suite *s = suite_create("fabs_test9");
  TCase *tc = tcase_create("fabs_test9");
  tcase_add_test(tc, fabs_test9);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(fabs_test10) {
  flag = 0;
  if (s21_fabs(min_num) == fabs(min_num)) flag = 1;
  ck_assert_int_eq(flag, 1);
}
END_TEST

Suite *test_suite_fabs_test10() {
  Suite *s = suite_create("fabs_test10");
  TCase *tc = tcase_create("fabs_test10");
  tcase_add_test(tc, fabs_test10);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(fabs_test11) {
  flag = 0;
  if (s21_fabs(big_num) == fabs(big_num)) flag = 1;
  ck_assert_int_eq(flag, 1);
}
END_TEST

Suite *test_suite_fabs_test11() {
  Suite *s = suite_create("fabs_test11");
  TCase *tc = tcase_create("fabs_test11");
  tcase_add_test(tc, fabs_test11);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(fabs_test12) {
  flag = 0;
  if (s21_fabs(min_big_num) == fabs(min_big_num)) flag = 1;
  ck_assert_int_eq(flag, 1);
}
END_TEST

Suite *test_suite_fabs_test12() {
  Suite *s = suite_create("fabs_test12");
  TCase *tc = tcase_create("fabs_test12");
  tcase_add_test(tc, fabs_test12);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(fabs_test13) {
  flag = 0;
  if (s21_fabs(zf) == fabs(zf)) flag = 1;
  ck_assert_int_eq(flag, 1);
}
END_TEST

Suite *test_suite_fabs_test13() {
  Suite *s = suite_create("fabs_test13");
  TCase *tc = tcase_create("fabs_test13");
  tcase_add_test(tc, fabs_test13);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(fabs_test14) {
  flag = 0;
  if (s21_fabs(mzf) == fabs(mzf)) flag = 1;
  ck_assert_int_eq(flag, 1);
}
END_TEST

Suite *test_suite_fabs_test14() {
  Suite *s = suite_create("fabs_test14");
  TCase *tc = tcase_create("fabs_test14");
  tcase_add_test(tc, fabs_test14);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(fabs_test15) {
  flag = 0;
  if (s21_fabs(tf) == fabs(tf)) flag = 1;
  ck_assert_int_eq(flag, 1);
}
END_TEST

Suite *test_suite_fabs_test15() {
  Suite *s = suite_create("fabs_test15");
  TCase *tc = tcase_create("fabs_test15");
  tcase_add_test(tc, fabs_test15);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(fabs_test16) {
  flag = 0;
  if (s21_fabs(mtf) == fabs(mtf)) flag = 1;
  ck_assert_int_eq(flag, 1);
}
END_TEST

Suite *test_suite_fabs_test16() {
  Suite *s = suite_create("fabs_test16");
  TCase *tc = tcase_create("fabs_test16");
  tcase_add_test(tc, fabs_test16);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(fabs_test17) {
  flag = 0;
  if (s21_fabs(big_float) == fabs(big_float)) flag = 1;
  ck_assert_int_eq(flag, 1);
}
END_TEST

Suite *test_suite_fabs_test17() {
  Suite *s = suite_create("fabs_test17");
  TCase *tc = tcase_create("fabs_test17");
  tcase_add_test(tc, fabs_test17);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(fabs_test18) {
  flag = 0;
  if (s21_fabs(min_big_float) == fabs(min_big_float)) flag = 1;
  ck_assert_int_eq(flag, 1);
}
END_TEST

Suite *test_suite_fabs_test18() {
  Suite *s = suite_create("fabs_test18");
  TCase *tc = tcase_create("fabs_test18");
  tcase_add_test(tc, fabs_test18);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(fabs_test19) {
  flag = 0;
  if (s21_fabs(small) == fabs(small)) flag = 1;
  ck_assert_int_eq(flag, 1);
}
END_TEST

Suite *test_suite_fabs_test19() {
  Suite *s = suite_create("fabs_test19");
  TCase *tc = tcase_create("fabs_test19");
  tcase_add_test(tc, fabs_test19);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(fabs_test20) {
  flag = 0;
  if (s21_fabs(min_small) == fabs(min_small)) flag = 1;
  ck_assert_int_eq(flag, 1);
}
END_TEST

Suite *test_suite_fabs_test20() {
  Suite *s = suite_create("fabs_test20");
  TCase *tc = tcase_create("fabs_test20");
  tcase_add_test(tc, fabs_test20);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(fabs_test21) {
  flag = 0;
  if (s21_fabs(long_double) == fabs(long_double)) flag = 1;
  ck_assert_int_eq(flag, 1);
}
END_TEST

Suite *test_suite_fabs_test21() {
  Suite *s = suite_create("fabs_test21");
  TCase *tc = tcase_create("fabs_test21");
  tcase_add_test(tc, fabs_test21);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(fabs_test22) {
  flag = 0;
  if (s21_fabs(min_long_double) == fabs(min_long_double)) flag = 1;
  ck_assert_int_eq(flag, 1);
  flag = 0;
}
END_TEST

Suite *test_suite_fabs_test22() {
  Suite *s = suite_create("fabs_test22");
  TCase *tc = tcase_create("fabs_test22");
  tcase_add_test(tc, fabs_test22);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(floor_test1) {
  if ((double)s21_floor(my_inf) == floor(my_inf)) flag = 1;
  ck_assert_int_eq(flag, 1);
}
END_TEST

Suite *test_suite_floor_test1() {
  Suite *s = suite_create("floor_test1");
  TCase *tc = tcase_create("floor_test1");
  tcase_add_test(tc, floor_test1);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(floor_test2) {
  flag = 0;
  if ((double)s21_floor(my_min_inf) == floor(my_min_inf)) flag = 1;
  ck_assert_int_eq(flag, 1);
  flag = 0;
}
END_TEST

Suite *test_suite_floor_test2() {
  Suite *s = suite_create("floor_test2");
  TCase *tc = tcase_create("floor_test2");
  tcase_add_test(tc, floor_test2);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(floor_test3) {
  ck_assert_int_eq((double)s21_floor(my_nan), floor(my_nan));
}
END_TEST

Suite *test_suite_floor_test3() {
  Suite *s = suite_create("floor_test3");
  TCase *tc = tcase_create("floor_test3");
  tcase_add_test(tc, floor_test3);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(floor_test4) {
  ck_assert_int_eq((double)s21_floor(min_nan), floor(min_nan));
}
END_TEST

Suite *test_suite_floor_test4() {
  Suite *s = suite_create("floor_test4");
  TCase *tc = tcase_create("floor_test4");
  tcase_add_test(tc, floor_test4);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(floor_test5) {
  ck_assert_int_eq((double)s21_floor(zero), floor(zero));
}
END_TEST

Suite *test_suite_floor_test5() {
  Suite *s = suite_create("floor_test5");
  TCase *tc = tcase_create("floor_test5");
  tcase_add_test(tc, floor_test5);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(floor_test6) {
  ck_assert_int_eq((double)s21_floor(min_zero), floor(min_zero));
}
END_TEST

Suite *test_suite_floor_test6() {
  Suite *s = suite_create("floor_test6");
  TCase *tc = tcase_create("floor_test6");
  tcase_add_test(tc, floor_test6);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(floor_test7) {
  if ((double)s21_floor(small_num) == floor(small_num)) flag = 1;
  ck_assert_int_eq(flag, 1);
  flag = 0;
}
END_TEST

Suite *test_suite_floor_test7() {
  Suite *s = suite_create("floor_test7");
  TCase *tc = tcase_create("floor_test7");
  tcase_add_test(tc, floor_test7);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(floor_test8) {
  if ((double)s21_floor(min_small_num) == floor(min_small_num)) flag = 1;
  ck_assert_int_eq(flag, 1);
  flag = 0;
}
END_TEST

Suite *test_suite_floor_test8() {
  Suite *s = suite_create("floor_test8");
  TCase *tc = tcase_create("floor_test8");
  tcase_add_test(tc, floor_test8);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(floor_test9) {
  if ((double)s21_floor(num) == floor(num)) flag = 1;
  ck_assert_int_eq(flag, 1);
  flag = 0;
}
END_TEST

Suite *test_suite_floor_test9() {
  Suite *s = suite_create("floor_test9");
  TCase *tc = tcase_create("floor_test9");
  tcase_add_test(tc, floor_test9);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(floor_test10) {
  if ((double)s21_floor(min_num) == floor(min_num)) flag = 1;
  ck_assert_int_eq(flag, 1);
  flag = 0;
}
END_TEST

Suite *test_suite_floor_test10() {
  Suite *s = suite_create("floor_test10");
  TCase *tc = tcase_create("floor_test10");
  tcase_add_test(tc, floor_test10);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(floor_test11) {
  if ((double)s21_floor(big_num) == floor(big_num)) flag = 1;
  ck_assert_int_eq(flag, 1);
  flag = 0;
}
END_TEST

Suite *test_suite_floor_test11() {
  Suite *s = suite_create("floor_test11");
  TCase *tc = tcase_create("floor_test11");
  tcase_add_test(tc, floor_test11);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(floor_test12) {
  if ((double)s21_floor(min_big_num) == floor(min_big_num)) flag = 1;
  ck_assert_int_eq(flag, 1);
  flag = 0;
}
END_TEST

Suite *test_suite_floor_test12() {
  Suite *s = suite_create("floor_test12");
  TCase *tc = tcase_create("floor_test12");
  tcase_add_test(tc, floor_test12);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(floor_test13) {
  if ((double)s21_floor(zf) == floor(zf)) flag = 1;
  ck_assert_int_eq(flag, 1);
  flag = 0;
}
END_TEST

Suite *test_suite_floor_test13() {
  Suite *s = suite_create("floor_test13");
  TCase *tc = tcase_create("floor_test13");
  tcase_add_test(tc, floor_test13);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(floor_test14) {
  if ((double)s21_floor(mzf) == floor(mzf)) flag = 1;
  ck_assert_int_eq(flag, 1);
  flag = 0;
}
END_TEST

Suite *test_suite_floor_test14() {
  Suite *s = suite_create("floor_test14");
  TCase *tc = tcase_create("floor_test14");
  tcase_add_test(tc, floor_test14);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(floor_test15) {
  if ((double)s21_floor(tf) == floor(tf)) flag = 1;
  ck_assert_int_eq(flag, 1);
  flag = 0;
}
END_TEST

Suite *test_suite_floor_test15() {
  Suite *s = suite_create("floor_test15");
  TCase *tc = tcase_create("floor_test15");
  tcase_add_test(tc, floor_test15);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(floor_test16) {
  if ((double)s21_floor(mtf) == floor(mtf)) flag = 1;
  ck_assert_int_eq(flag, 1);
  flag = 0;
}
END_TEST

Suite *test_suite_floor_test16() {
  Suite *s = suite_create("floor_test16");
  TCase *tc = tcase_create("floor_test16");
  tcase_add_test(tc, floor_test16);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(floor_test17) {
  if ((double)s21_floor(min_big_float) == floor(min_big_float)) flag = 1;
  ck_assert_int_eq(flag, 1);
  flag = 0;
}
END_TEST

Suite *test_suite_floor_test17() {
  Suite *s = suite_create("floor_test17");
  TCase *tc = tcase_create("floor_test17");
  tcase_add_test(tc, floor_test17);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(floor_test18) {
  if ((double)s21_floor(small) == floor(small)) flag = 1;
  ck_assert_int_eq(flag, 1);
  flag = 0;
}
END_TEST

Suite *test_suite_floor_test18() {
  Suite *s = suite_create("floor_test18");
  TCase *tc = tcase_create("floor_test18");
  tcase_add_test(tc, floor_test18);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(floor_test19) {
  if ((double)s21_floor(min_small) == floor(min_small)) flag = 1;
  ck_assert_int_eq(flag, 1);
  flag = 0;
}
END_TEST

Suite *test_suite_floor_test19() {
  Suite *s = suite_create("floor_test19");
  TCase *tc = tcase_create("floor_test19");
  tcase_add_test(tc, floor_test19);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(floor_test20) {
  if ((double)s21_floor(long_double) == floor(long_double)) flag = 1;
  ck_assert_int_eq(flag, 1);
  flag = 0;
}
END_TEST

Suite *test_suite_floor_test20() {
  Suite *s = suite_create("floor_test20");
  TCase *tc = tcase_create("floor_test20");
  tcase_add_test(tc, floor_test20);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(floor_test21) {
  if ((double)s21_floor(min_long_double) == floor(min_long_double)) flag = 1;
  ck_assert_int_eq(flag, 1);
  flag = 0;
}
END_TEST

Suite *test_suite_floor_test21() {
  Suite *s = suite_create("floor_test21");
  TCase *tc = tcase_create("floor_test21");
  tcase_add_test(tc, floor_test21);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(ceil_test1) {
  if (s21_ceil(my_inf) == ceil(my_inf)) flag = 1;
  ck_assert_int_eq(flag, 1);
  flag = 0;
}
END_TEST

Suite *test_suite_ceil_test1() {
  Suite *s = suite_create("ceil_test1");
  TCase *tc = tcase_create("ceil_test1");
  tcase_add_test(tc, ceil_test1);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(ceil_test2) {
  if (s21_ceil(my_min_inf) == ceil(my_min_inf)) flag = 1;
  ck_assert_int_eq(flag, 1);
  flag = 0;
}
END_TEST

Suite *test_suite_ceil_test2() {
  Suite *s = suite_create("ceil_test2");
  TCase *tc = tcase_create("ceil_test2");
  tcase_add_test(tc, ceil_test2);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(ceil_test3) { ck_assert_int_eq(s21_ceil(my_nan), ceil(my_nan)); }
END_TEST

Suite *test_suite_ceil_test3() {
  Suite *s = suite_create("ceil_test3");
  TCase *tc = tcase_create("ceil_test3");
  tcase_add_test(tc, ceil_test3);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(ceil_test4) { ck_assert_int_eq(s21_ceil(min_nan), ceil(min_nan)); }
END_TEST

Suite *test_suite_ceil_test4() {
  Suite *s = suite_create("ceil_test4");
  TCase *tc = tcase_create("ceil_test4");
  tcase_add_test(tc, ceil_test4);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(ceil_test5) { ck_assert_int_eq(s21_ceil(zero), ceil(zero)); }
END_TEST

Suite *test_suite_ceil_test5() {
  Suite *s = suite_create("ceil_test5");
  TCase *tc = tcase_create("ceil_test5");
  tcase_add_test(tc, ceil_test5);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(ceil_test6) { ck_assert_int_eq(s21_ceil(min_zero), ceil(min_zero)); }
END_TEST

Suite *test_suite_ceil_test6() {
  Suite *s = suite_create("ceil_test6");
  TCase *tc = tcase_create("ceil_test6");
  tcase_add_test(tc, ceil_test6);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(ceil_test7) {
  if (s21_ceil(small_num) == ceil(small_num)) flag = 1;
  ck_assert_int_eq(flag, 1);
  flag = 0;
}
END_TEST

Suite *test_suite_ceil_test7() {
  Suite *s = suite_create("ceil_test7");
  TCase *tc = tcase_create("ceil_test7");
  tcase_add_test(tc, ceil_test7);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(ceil_test8) {
  if (s21_ceil(min_small_num) == ceil(min_small_num)) flag = 1;
  ck_assert_int_eq(flag, 1);
  flag = 0;
}
END_TEST

Suite *test_suite_ceil_test8() {
  Suite *s = suite_create("ceil_test8");
  TCase *tc = tcase_create("ceil_test8");
  tcase_add_test(tc, ceil_test8);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(ceil_test9) {
  if (s21_ceil(num) == ceil(num)) flag = 1;
  ck_assert_int_eq(flag, 1);
  flag = 0;
}
END_TEST

Suite *test_suite_ceil_test9() {
  Suite *s = suite_create("ceil_test9");
  TCase *tc = tcase_create("ceil_test9");
  tcase_add_test(tc, ceil_test9);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(ceil_test10) {
  if (s21_ceil(min_num) == ceil(min_num)) flag = 1;
  ck_assert_int_eq(flag, 1);
  flag = 0;
}
END_TEST

Suite *test_suite_ceil_test10() {
  Suite *s = suite_create("ceil_test10");
  TCase *tc = tcase_create("ceil_test10");
  tcase_add_test(tc, ceil_test10);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(ceil_test11) {
  if (s21_ceil(big_num) == ceil(big_num)) flag = 1;
  ck_assert_int_eq(flag, 1);
  flag = 0;
}
END_TEST

Suite *test_suite_ceil_test11() {
  Suite *s = suite_create("ceil_test11");
  TCase *tc = tcase_create("ceil_test11");
  tcase_add_test(tc, ceil_test11);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(ceil_test12) {
  if (s21_ceil(min_big_num) == ceil(min_big_num)) flag = 1;
  ck_assert_int_eq(flag, 1);
  flag = 0;
}
END_TEST

Suite *test_suite_ceil_test12() {
  Suite *s = suite_create("ceil_test12");
  TCase *tc = tcase_create("ceil_test12");
  tcase_add_test(tc, ceil_test12);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(ceil_test13) {
  if (s21_ceil(zf) == ceil(zf)) flag = 1;
  ck_assert_int_eq(flag, 1);
  flag = 0;
}
END_TEST

Suite *test_suite_ceil_test13() {
  Suite *s = suite_create("ceil_test13");
  TCase *tc = tcase_create("ceil_test13");
  tcase_add_test(tc, ceil_test13);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(ceil_test14) {
  if (s21_ceil(mzf) == ceil(mzf)) flag = 1;
  ck_assert_int_eq(flag, 1);
  flag = 0;
}
END_TEST

Suite *test_suite_ceil_test14() {
  Suite *s = suite_create("ceil_test14");
  TCase *tc = tcase_create("ceil_test14");
  tcase_add_test(tc, ceil_test14);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(ceil_test15) {
  if (s21_ceil(tf) == ceil(tf)) flag = 1;
  ck_assert_int_eq(flag, 1);
  flag = 0;
}
END_TEST

Suite *test_suite_ceil_test15() {
  Suite *s = suite_create("ceil_test15");
  TCase *tc = tcase_create("ceil_test15");
  tcase_add_test(tc, ceil_test15);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(ceil_test16) {
  if (s21_ceil(mtf) == ceil(mtf)) flag = 1;
  ck_assert_int_eq(flag, 1);
  flag = 0;
}
END_TEST

Suite *test_suite_ceil_test16() {
  Suite *s = suite_create("ceil_test16");
  TCase *tc = tcase_create("ceil_test16");
  tcase_add_test(tc, ceil_test16);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(ceil_test17) {
  if (s21_ceil(big_float) == ceil(big_float)) flag = 1;
  ck_assert_int_eq(flag, 1);
  flag = 0;
}
END_TEST

Suite *test_suite_ceil_test17() {
  Suite *s = suite_create("ceil_test17");
  TCase *tc = tcase_create("ceil_test17");
  tcase_add_test(tc, ceil_test17);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(ceil_test18) {
  if (s21_ceil(min_big_float) == ceil(min_big_float)) flag = 1;
  ck_assert_int_eq(flag, 1);
  flag = 0;
}
END_TEST

Suite *test_suite_ceil_test18() {
  Suite *s = suite_create("ceil_test18");
  TCase *tc = tcase_create("ceil_test18");
  tcase_add_test(tc, ceil_test18);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(ceil_test19) {
  if (s21_ceil(small) == ceil(small)) flag = 1;
  ck_assert_int_eq(flag, 1);
  flag = 0;
}
END_TEST

Suite *test_suite_ceil_test19() {
  Suite *s = suite_create("ceil_test19");
  TCase *tc = tcase_create("ceil_test19");
  tcase_add_test(tc, ceil_test19);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(ceil_test20) {
  if (s21_ceil(min_small) == ceil(min_small)) flag = 1;
  ck_assert_int_eq(flag, 1);
  flag = 0;
}
END_TEST

Suite *test_suite_ceil_test20() {
  Suite *s = suite_create("ceil_test20");
  TCase *tc = tcase_create("ceil_test20");
  tcase_add_test(tc, ceil_test20);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(ceil_test21) {
  if (s21_ceil(long_double) == ceil(long_double)) flag = 1;
  ck_assert_int_eq(flag, 1);
  flag = 0;
  if (s21_ceil(min_long_double) == ceil(min_long_double)) flag = 1;
  ck_assert_int_eq(flag, 1);
  flag = 0;
}
END_TEST

Suite *test_suite_ceil_test21() {
  Suite *s = suite_create("ceil_test21");
  TCase *tc = tcase_create("ceil_test21");
  tcase_add_test(tc, ceil_test21);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(ceil_test22) {
  if (s21_ceil(min_long_double) == ceil(min_long_double)) flag = 1;
  ck_assert_int_eq(flag, 1);
  flag = 0;
}
END_TEST

Suite *test_suite_ceil_test22() {
  Suite *s = suite_create("ceil_test22");
  TCase *tc = tcase_create("ceil_test22");
  tcase_add_test(tc, ceil_test22);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(exp_test1) { ck_assert_int_eq((double)s21_exp(zero), exp(zero)); }
END_TEST

Suite *test_suite_exp_test1() {
  Suite *s = suite_create("exp_test1");
  TCase *tc = tcase_create("exp_test1");
  tcase_add_test(tc, exp_test1);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(exp_test2) {
  ck_assert_int_eq((double)s21_exp(min_zero), exp(min_zero));
}
END_TEST

Suite *test_suite_exp_test2() {
  Suite *s = suite_create("exp_test2");
  TCase *tc = tcase_create("exp_test2");
  tcase_add_test(tc, exp_test2);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(exp_test3) {
  x = (double)s21_exp(small_num);
  y = exp(small_num);
  if (x == y) flag = 1;
  ck_assert_int_eq(flag, 1);
}
END_TEST

Suite *test_suite_exp_test3() {
  Suite *s = suite_create("exp_test3");
  TCase *tc = tcase_create("exp_test3");
  tcase_add_test(tc, exp_test3);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(exp_test4) {
  flag = 0;
  x = (double)s21_exp(min_small_num);
  y = exp(min_small_num);
  if (x == y) flag = 1;
  ck_assert_int_eq(flag, 1);
  flag = 0;
}
END_TEST

Suite *test_suite_exp_test4() {
  Suite *s = suite_create("exp_test4");
  TCase *tc = tcase_create("exp_test4");
  tcase_add_test(tc, exp_test4);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(exp_test5) {
  x = (double)s21_exp(big_num);
  y = exp(big_num);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_exp_test5() {
  Suite *s = suite_create("exp_test5");
  TCase *tc = tcase_create("exp_test5");
  tcase_add_test(tc, exp_test5);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(exp_test6) {
  x = (double)s21_exp(min_big_num);
  y = exp(min_big_num);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_exp_test6() {
  Suite *s = suite_create("exp_test6");
  TCase *tc = tcase_create("exp_test6");
  tcase_add_test(tc, exp_test6);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(exp_test7) {
  x = (double)s21_exp(zf);
  y = exp(zf);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_exp_test7() {
  Suite *s = suite_create("exp_test7");
  TCase *tc = tcase_create("exp_test7");
  tcase_add_test(tc, exp_test7);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(exp_test8) {
  x = (double)s21_exp(mzf);
  y = exp(mzf);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_exp_test8() {
  Suite *s = suite_create("exp_test8");
  TCase *tc = tcase_create("exp_test8");
  tcase_add_test(tc, exp_test8);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(exp_test9) {
  x = (double)s21_exp(tf);
  y = exp(tf);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_exp_test9() {
  Suite *s = suite_create("exp_test9");
  TCase *tc = tcase_create("exp_test9");
  tcase_add_test(tc, exp_test9);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(exp_test10) {
  x = (double)s21_exp(mtf);
  y = exp(mtf);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_exp_test10() {
  Suite *s = suite_create("exp_test10");
  TCase *tc = tcase_create("exp_test10");
  tcase_add_test(tc, exp_test10);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(exp_test11) {
  x = (double)s21_exp(big_float);
  y = exp(big_float);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_exp_test11() {
  Suite *s = suite_create("exp_test11");
  TCase *tc = tcase_create("exp_test11");
  tcase_add_test(tc, exp_test11);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(exp_test12) {
  x = (double)s21_exp(min_big_float);
  y = exp(min_big_float);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_exp_test12() {
  Suite *s = suite_create("exp_test12");
  TCase *tc = tcase_create("exp_test12");
  tcase_add_test(tc, exp_test12);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(exp_test13) {
  x = (double)s21_exp(small);
  y = exp(small);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_exp_test13() {
  Suite *s = suite_create("exp_test13");
  TCase *tc = tcase_create("exp_test13");
  tcase_add_test(tc, exp_test13);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(exp_test14) {
  x = (double)s21_exp(min_small);
  y = exp(min_small);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_exp_test14() {
  Suite *s = suite_create("exp_test14");
  TCase *tc = tcase_create("exp_test14");
  tcase_add_test(tc, exp_test14);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(exp_test15) {
  x = (double)s21_exp(long_double);
  y = exp(long_double);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_exp_test15() {
  Suite *s = suite_create("exp_test15");
  TCase *tc = tcase_create("exp_test15");
  tcase_add_test(tc, exp_test15);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(exp_test16) {
  x = (double)s21_exp(min_long_double);
  y = exp(min_long_double);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_exp_test16() {
  Suite *s = suite_create("exp_test16");
  TCase *tc = tcase_create("exp_test16");
  tcase_add_test(tc, exp_test16);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(pow_test1) { ck_assert_str_eq(str1, str2); }
END_TEST

Suite *test_suite_pow_test1() {
  Suite *s = suite_create("pow_test1");
  TCase *tc = tcase_create("pow_test1");
  tcase_add_test(tc, pow_test1);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(pow_test2) {
  x = s21_pow(zero, 2);
  y = pow(zero, 2);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_pow_test2() {
  Suite *s = suite_create("pow_test2");
  TCase *tc = tcase_create("pow_test2");
  tcase_add_test(tc, pow_test2);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(pow_test3) {
  x = s21_pow(min_zero, 2);
  y = pow(min_zero, 2);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_pow_test3() {
  Suite *s = suite_create("pow_test3");
  TCase *tc = tcase_create("pow_test3");
  tcase_add_test(tc, pow_test3);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(pow_test4) {
  x = s21_pow(small_num, 2);
  y = pow(small_num, 2);
  if (x == y) flag = 1;
  ck_assert_int_eq(flag, 1);
}
END_TEST

Suite *test_suite_pow_test4() {
  Suite *s = suite_create("pow_test4");
  TCase *tc = tcase_create("pow_test4");
  tcase_add_test(tc, pow_test4);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(pow_test5) {
  flag = 0;
  x = s21_pow(min_small_num, 2);
  y = pow(min_small_num, 2);
  if (x == y) flag = 1;
  ck_assert_int_eq(flag, 1);
}
END_TEST

Suite *test_suite_pow_test5() {
  Suite *s = suite_create("pow_test5");
  TCase *tc = tcase_create("pow_test5");
  tcase_add_test(tc, pow_test5);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(pow_test6) {
  flag = 0;
  x = s21_pow(num, 2);
  y = pow(num, 2);
  snprintf(str1, sizeof(str1), "%16.6lf", x);
  snprintf(str2, sizeof(str1), "%16.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_pow_test6() {
  Suite *s = suite_create("pow_test6");
  TCase *tc = tcase_create("pow_test6");
  tcase_add_test(tc, pow_test6);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(pow_test7) {
  x = s21_pow(min_num, 2);
  y = pow(min_num, 2);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_pow_test7() {
  Suite *s = suite_create("pow_test7");
  TCase *tc = tcase_create("pow_test7");
  tcase_add_test(tc, pow_test7);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(pow_test8) {
  x = s21_pow(8222.3, 2.1);
  y = pow(8222.3, 2.1);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_pow_test8() {
  Suite *s = suite_create("pow_test8");
  TCase *tc = tcase_create("pow_test8");
  tcase_add_test(tc, pow_test8);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(pow_test9) {
  x = s21_pow(min_big_num, 2);
  y = pow(min_big_num, 2);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_pow_test9() {
  Suite *s = suite_create("pow_test9");
  TCase *tc = tcase_create("pow_test9");
  tcase_add_test(tc, pow_test9);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(pow_test10) {
  x = s21_pow(zf, 2);
  y = pow(zf, 2);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_pow_test10() {
  Suite *s = suite_create("pow_test10");
  TCase *tc = tcase_create("pow_test10");
  tcase_add_test(tc, pow_test10);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(pow_test11) {
  x = s21_pow(mzf, 2);
  y = pow(mzf, 2);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_pow_test11() {
  Suite *s = suite_create("pow_test11");
  TCase *tc = tcase_create("pow_test11");
  tcase_add_test(tc, pow_test11);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(pow_test12) {
  x = s21_pow(tf, 2);
  y = pow(tf, 2);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_pow_test12() {
  Suite *s = suite_create("pow_test12");
  TCase *tc = tcase_create("pow_test12");
  tcase_add_test(tc, pow_test12);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(pow_test13) {
  x = s21_pow(mtf, 2);
  y = pow(mtf, 2);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_pow_test13() {
  Suite *s = suite_create("pow_test13");
  TCase *tc = tcase_create("pow_test13");
  tcase_add_test(tc, pow_test13);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(pow_test14) {
  x = s21_pow(big_float, 2);
  y = pow(big_float, 2);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_pow_test14() {
  Suite *s = suite_create("pow_test14");
  TCase *tc = tcase_create("pow_test14");
  tcase_add_test(tc, pow_test14);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(pow_test15) {
  x = s21_pow(min_big_float, 2);
  y = pow(min_big_float, 2);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_pow_test15() {
  Suite *s = suite_create("pow_test15");
  TCase *tc = tcase_create("pow_test15");
  tcase_add_test(tc, pow_test15);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(pow_test16) {
  x = s21_pow(small, 2);
  y = pow(small, 2);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_pow_test16() {
  Suite *s = suite_create("pow_test16");
  TCase *tc = tcase_create("pow_test16");
  tcase_add_test(tc, pow_test16);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(pow_test17) {
  x = s21_pow(min_small, 2);
  y = pow(min_small, 2);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_pow_test17() {
  Suite *s = suite_create("pow_test17");
  TCase *tc = tcase_create("pow_test17");
  tcase_add_test(tc, pow_test17);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(pow_test18) {
  x = s21_pow(long_double, 2);
  y = pow(long_double, 2);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_pow_test18() {
  Suite *s = suite_create("pow_test18");
  TCase *tc = tcase_create("pow_test18");
  tcase_add_test(tc, pow_test18);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(pow_test19) {
  x = s21_pow(min_long_double, 2);
  y = pow(min_long_double, 2);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_pow_test19() {
  Suite *s = suite_create("pow_test19");
  TCase *tc = tcase_create("pow_test19");
  tcase_add_test(tc, pow_test19);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(sqrt_test1) { ck_assert_int_eq(s21_sqrt(zero), sqrt(zero)); }
END_TEST

Suite *test_suite_sqrt_test1() {
  Suite *s = suite_create("sqrt_test1");
  TCase *tc = tcase_create("sqrt_test1");
  tcase_add_test(tc, sqrt_test1);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(sqrt_test2) { ck_assert_int_eq(s21_sqrt(min_zero), sqrt(min_zero)); }
END_TEST

Suite *test_suite_sqrt_test2() {
  Suite *s = suite_create("sqrt_test2");
  TCase *tc = tcase_create("sqrt_test2");
  tcase_add_test(tc, sqrt_test2);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(sqrt_test3) {
  x = s21_sqrt(small_num);
  y = sqrt(small_num);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_sqrt_test3() {
  Suite *s = suite_create("sqrt_test3");
  TCase *tc = tcase_create("sqrt_test3");
  tcase_add_test(tc, sqrt_test3);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(sqrt_test4) {
  x = s21_sqrt(min_small_num);
  y = sqrt(min_small_num);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_sqrt_test4() {
  Suite *s = suite_create("sqrt_test4");
  TCase *tc = tcase_create("sqrt_test4");
  tcase_add_test(tc, sqrt_test4);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(sqrt_test5) {
  x = s21_sqrt(num);
  y = sqrt(num);
  snprintf(str1, sizeof(str1), "%16.6lf", x);
  snprintf(str2, sizeof(str1), "%16.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_sqrt_test5() {
  Suite *s = suite_create("sqrt_test5");
  TCase *tc = tcase_create("sqrt_test5");
  tcase_add_test(tc, sqrt_test5);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(sqrt_test6) {
  x = s21_sqrt(min_num);
  y = sqrt(min_num);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_sqrt_test6() {
  Suite *s = suite_create("sqrt_test6");
  TCase *tc = tcase_create("sqrt_test6");
  tcase_add_test(tc, sqrt_test6);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(sqrt_test7) {
  x = s21_sqrt(big_num);
  y = sqrt(big_num);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_sqrt_test7() {
  Suite *s = suite_create("sqrt_test7");
  TCase *tc = tcase_create("sqrt_test7");
  tcase_add_test(tc, sqrt_test7);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(sqrt_test8) {
  x = s21_sqrt(min_big_num);
  y = sqrt(min_big_num);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_sqrt_test8() {
  Suite *s = suite_create("sqrt_test8");
  TCase *tc = tcase_create("sqrt_test8");
  tcase_add_test(tc, sqrt_test8);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(sqrt_test9) {
  x = s21_sqrt(zf);
  y = sqrt(zf);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_sqrt_test9() {
  Suite *s = suite_create("sqrt_test9");
  TCase *tc = tcase_create("sqrt_test9");
  tcase_add_test(tc, sqrt_test9);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(sqrt_test10) {
  x = s21_sqrt(mzf);
  y = sqrt(mzf);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_sqrt_test10() {
  Suite *s = suite_create("sqrt_test10");
  TCase *tc = tcase_create("sqrt_test10");
  tcase_add_test(tc, sqrt_test10);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(sqrt_test11) {
  x = s21_sqrt(tf);
  y = sqrt(tf);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_sqrt_test11() {
  Suite *s = suite_create("sqrt_test11");
  TCase *tc = tcase_create("sqrt_test11");
  tcase_add_test(tc, sqrt_test11);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(sqrt_test12) {
  x = s21_sqrt(mtf);
  y = sqrt(mtf);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_sqrt_test12() {
  Suite *s = suite_create("sqrt_test12");
  TCase *tc = tcase_create("sqrt_test12");
  tcase_add_test(tc, sqrt_test12);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(sqrt_test13) {
  x = s21_sqrt(big_float);
  y = sqrt(big_float);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_sqrt_test13() {
  Suite *s = suite_create("sqrt_test13");
  TCase *tc = tcase_create("sqrt_test13");
  tcase_add_test(tc, sqrt_test13);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(sqrt_test14) {
  x = s21_sqrt(min_big_float);
  y = sqrt(min_big_float);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_sqrt_test14() {
  Suite *s = suite_create("sqrt_test14");
  TCase *tc = tcase_create("sqrt_test14");
  tcase_add_test(tc, sqrt_test14);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(sqrt_test15) {
  x = s21_sqrt(small);
  y = sqrt(small);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_sqrt_test15() {
  Suite *s = suite_create("sqrt_test15");
  TCase *tc = tcase_create("sqrt_test15");
  tcase_add_test(tc, sqrt_test15);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(sqrt_test16) {
  x = s21_sqrt(min_small);
  y = sqrt(min_small);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_sqrt_test16() {
  Suite *s = suite_create("sqrt_test16");
  TCase *tc = tcase_create("sqrt_test16");
  tcase_add_test(tc, sqrt_test16);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(sqrt_test17) {
  x = s21_sqrt(long_double);
  y = sqrt(long_double);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_sqrt_test17() {
  Suite *s = suite_create("sqrt_test17");
  TCase *tc = tcase_create("sqrt_test17");
  tcase_add_test(tc, sqrt_test17);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(sqrt_test18) {
  x = s21_sqrt(min_long_double);
  y = sqrt(min_long_double);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_sqrt_test18() {
  Suite *s = suite_create("sqrt_test18");
  TCase *tc = tcase_create("sqrt_test18");
  tcase_add_test(tc, sqrt_test18);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(fmod_test1) {
  x = s21_fmod(my_inf, 3);
  y = fmod(my_inf, 3);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_fmod_test1() {
  Suite *s = suite_create("fmod_test1");
  TCase *tc = tcase_create("fmod_test1");
  tcase_add_test(tc, fmod_test1);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(fmod_test2) {
  x = s21_fmod(my_min_inf, 3);
  y = fmod(my_min_inf, 3);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_fmod_test2() {
  Suite *s = suite_create("fmod_test2");
  TCase *tc = tcase_create("fmod_test2");
  tcase_add_test(tc, fmod_test2);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(fmod_test3) {
  x = s21_fmod(my_nan, 3);
  y = fmod(my_nan, 3);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_fmod_test3() {
  Suite *s = suite_create("fmod_test3");
  TCase *tc = tcase_create("fmod_test3");
  tcase_add_test(tc, fmod_test3);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(fmod_test4) {
  x = s21_fmod(min_nan, 3);
  y = fmod(min_nan, 3);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_fmod_test4() {
  Suite *s = suite_create("fmod_test4");
  TCase *tc = tcase_create("fmod_test4");
  tcase_add_test(tc, fmod_test4);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(fmod_test5) {
  x = s21_fmod(zero, 3);
  y = fmod(zero, 3);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_fmod_test5() {
  Suite *s = suite_create("fmod_test5");
  TCase *tc = tcase_create("fmod_test5");
  tcase_add_test(tc, fmod_test5);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(fmod_test6) {
  x = s21_fmod(min_zero, 3);
  y = fmod(min_zero, 3);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_fmod_test6() {
  Suite *s = suite_create("fmod_test6");
  TCase *tc = tcase_create("fmod_test6");
  tcase_add_test(tc, fmod_test6);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(fmod_test7) {
  x = s21_fmod(small_num, 3);
  y = fmod(small_num, 3);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_fmod_test7() {
  Suite *s = suite_create("fmod_test7");
  TCase *tc = tcase_create("fmod_test7");
  tcase_add_test(tc, fmod_test7);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(fmod_test8) {
  x = s21_fmod(min_small_num, 3);
  y = fmod(min_small_num, 3);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_fmod_test8() {
  Suite *s = suite_create("fmod_test8");
  TCase *tc = tcase_create("fmod_test8");
  tcase_add_test(tc, fmod_test8);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(fmod_test9) {
  x = s21_fmod(num, 3);
  y = fmod(num, 3);
  snprintf(str1, sizeof(str1), "%16.6lf", x);
  snprintf(str2, sizeof(str1), "%16.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_fmod_test9() {
  Suite *s = suite_create("fmod_test9");
  TCase *tc = tcase_create("fmod_test9");
  tcase_add_test(tc, fmod_test9);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(fmod_test10) {
  x = s21_fmod(min_num, 3);
  y = fmod(min_num, 3);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_fmod_test10() {
  Suite *s = suite_create("fmod_test10");
  TCase *tc = tcase_create("fmod_test10");
  tcase_add_test(tc, fmod_test10);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(fmod_test11) {
  x = s21_fmod(big_num, 3);
  y = fmod(big_num, 3);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_fmod_test11() {
  Suite *s = suite_create("fmod_test11");
  TCase *tc = tcase_create("fmod_test11");
  tcase_add_test(tc, fmod_test11);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(fmod_test12) {
  x = s21_fmod(-22222.3, 3);
  y = fmod(-22222.3, 3);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_fmod_test12() {
  Suite *s = suite_create("fmod_test12");
  TCase *tc = tcase_create("fmod_test12");
  tcase_add_test(tc, fmod_test12);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(fmod_test13) {
  x = s21_fmod(zf, 3);
  y = fmod(zf, 3);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_fmod_test13() {
  Suite *s = suite_create("fmod_test13");
  TCase *tc = tcase_create("fmod_test13");
  tcase_add_test(tc, fmod_test13);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(fmod_test14) {
  x = s21_fmod(mzf, 3);
  y = fmod(mzf, 3);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_fmod_test14() {
  Suite *s = suite_create("fmod_test14");
  TCase *tc = tcase_create("fmod_test14");
  tcase_add_test(tc, fmod_test14);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(fmod_test15) {
  x = s21_fmod(tf, 3);
  y = fmod(tf, 3);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_fmod_test15() {
  Suite *s = suite_create("fmod_test15");
  TCase *tc = tcase_create("fmod_test15");
  tcase_add_test(tc, fmod_test15);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(fmod_test16) {
  x = s21_fmod(mtf, 3);
  y = fmod(mtf, 3);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_fmod_test16() {
  Suite *s = suite_create("fmod_test16");
  TCase *tc = tcase_create("fmod_test16");
  tcase_add_test(tc, fmod_test16);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(fmod_test17) {
  x = s21_fmod(big_float, 3);
  y = fmod(big_float, 3);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_fmod_test17() {
  Suite *s = suite_create("fmod_test17");
  TCase *tc = tcase_create("fmod_test17");
  tcase_add_test(tc, fmod_test17);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(fmod_test18) {
  x = s21_fmod(min_big_float, 3);
  y = fmod(min_big_float, 3);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_fmod_test18() {
  Suite *s = suite_create("fmod_test18");
  TCase *tc = tcase_create("fmod_test18");
  tcase_add_test(tc, fmod_test18);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(fmod_test19) {
  x = s21_fmod(small, 3);
  y = fmod(small, 3);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_fmod_test19() {
  Suite *s = suite_create("fmod_test19");
  TCase *tc = tcase_create("fmod_test19");
  tcase_add_test(tc, fmod_test19);
  suite_add_tcase(s, tc);
  return s;
}
START_TEST(fmod_test20) {
  x = s21_fmod(min_small, 3);
  y = fmod(min_small, 3);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_fmod_test20() {
  Suite *s = suite_create("fmod_test20");
  TCase *tc = tcase_create("fmod_test20");
  tcase_add_test(tc, fmod_test20);
  suite_add_tcase(s, tc);
  return s;
}
START_TEST(fmod_test21) {
  x = s21_fmod(long_double, 3);
  y = fmod(long_double, 3);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_fmod_test21() {
  Suite *s = suite_create("fmod_test21");
  TCase *tc = tcase_create("fmod_test21");
  tcase_add_test(tc, fmod_test21);
  suite_add_tcase(s, tc);
  return s;
}
START_TEST(fmod_test22) {
  x = s21_fmod(min_long_double, 3);
  y = fmod(min_long_double, 3);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_fmod_test22() {
  Suite *s = suite_create("fmod_test22");
  TCase *tc = tcase_create("fmod_test22");
  tcase_add_test(tc, fmod_test22);
  suite_add_tcase(s, tc);
  return s;
}
START_TEST(fmod_test23) {
  x = s21_fmod(my_inf, 2.5);
  y = fmod(my_inf, 2.5);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_fmod_test23() {
  Suite *s = suite_create("fmod_test23");
  TCase *tc = tcase_create("fmod_test23");
  tcase_add_test(tc, fmod_test23);
  suite_add_tcase(s, tc);
  return s;
}
START_TEST(fmod_test24) {
  x = s21_fmod(my_min_inf, 2.5);
  y = fmod(my_min_inf, 2.5);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_fmod_test24() {
  Suite *s = suite_create("fmod_test24");
  TCase *tc = tcase_create("fmod_test24");
  tcase_add_test(tc, fmod_test24);
  suite_add_tcase(s, tc);
  return s;
}
START_TEST(fmod_test25) {
  x = s21_fmod(my_nan, 2.5);
  y = fmod(my_nan, 2.5);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_fmod_test25() {
  Suite *s = suite_create("fmod_test25");
  TCase *tc = tcase_create("fmod_test25");
  tcase_add_test(tc, fmod_test25);
  suite_add_tcase(s, tc);
  return s;
}
START_TEST(fmod_test26) {
  x = s21_fmod(min_nan, 2.5);
  y = fmod(min_nan, 2.5);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_fmod_test26() {
  Suite *s = suite_create("fmod_test26");
  TCase *tc = tcase_create("fmod_test26");
  tcase_add_test(tc, fmod_test26);
  suite_add_tcase(s, tc);
  return s;
}
START_TEST(fmod_test27) {
  x = s21_fmod(zero, 2.5);
  y = fmod(zero, 2.5);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_fmod_test27() {
  Suite *s = suite_create("fmod_test27");
  TCase *tc = tcase_create("fmod_test27");
  tcase_add_test(tc, fmod_test27);
  suite_add_tcase(s, tc);
  return s;
}
START_TEST(fmod_test28) {
  x = s21_fmod(min_zero, 2.5);
  y = fmod(min_zero, 2.5);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_fmod_test28() {
  Suite *s = suite_create("fmod_test28");
  TCase *tc = tcase_create("fmod_test28");
  tcase_add_test(tc, fmod_test28);
  suite_add_tcase(s, tc);
  return s;
}
START_TEST(fmod_test29) {
  x = s21_fmod(small_num, 2.5);
  y = fmod(small_num, 2.5);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_fmod_test29() {
  Suite *s = suite_create("fmod_test29");
  TCase *tc = tcase_create("fmod_test29");
  tcase_add_test(tc, fmod_test29);
  suite_add_tcase(s, tc);
  return s;
}
START_TEST(fmod_test30) {
  x = s21_fmod(min_small_num, 2.5);
  y = fmod(min_small_num, 2.5);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_fmod_test30() {
  Suite *s = suite_create("fmod_test30");
  TCase *tc = tcase_create("fmod_test30");
  tcase_add_test(tc, fmod_test30);
  suite_add_tcase(s, tc);
  return s;
}
START_TEST(fmod_test31) {
  x = s21_fmod(num, 2.5);
  y = fmod(num, 2.5);
  snprintf(str1, sizeof(str1), "%16.6lf", x);
  snprintf(str2, sizeof(str1), "%16.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_fmod_test31() {
  Suite *s = suite_create("fmod_test31");
  TCase *tc = tcase_create("fmod_test31");
  tcase_add_test(tc, fmod_test31);
  suite_add_tcase(s, tc);
  return s;
}
START_TEST(fmod_test32) {
  x = s21_fmod(num, 2.5);
  y = fmod(num, 2.5);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_fmod_test32() {
  Suite *s = suite_create("fmod_test32");
  TCase *tc = tcase_create("fmod_test32");
  tcase_add_test(tc, fmod_test32);
  suite_add_tcase(s, tc);
  return s;
}
START_TEST(fmod_test33) {
  x = s21_fmod(big_num, 2.5);
  y = fmod(big_num, 2.5);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_fmod_test33() {
  Suite *s = suite_create("fmod_test33");
  TCase *tc = tcase_create("fmod_test33");
  tcase_add_test(tc, fmod_test33);
  suite_add_tcase(s, tc);
  return s;
}
START_TEST(fmod_test34) {
  x = s21_fmod(min_big_num, 2.5);
  y = fmod(min_big_num, 2.5);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_fmod_test34() {
  Suite *s = suite_create("fmod_test34");
  TCase *tc = tcase_create("fmod_test34");
  tcase_add_test(tc, fmod_test34);
  suite_add_tcase(s, tc);
  return s;
}
START_TEST(fmod_test35) {
  x = s21_fmod(zf, 2.5);
  y = fmod(zf, 2.5);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_fmod_test35() {
  Suite *s = suite_create("fmod_test35");
  TCase *tc = tcase_create("fmod_test35");
  tcase_add_test(tc, fmod_test35);
  suite_add_tcase(s, tc);
  return s;
}
START_TEST(fmod_test36) {
  x = s21_fmod(mzf, 2.5);
  y = fmod(mzf, 2.5);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_fmod_test36() {
  Suite *s = suite_create("fmod_test36");
  TCase *tc = tcase_create("fmod_test36");
  tcase_add_test(tc, fmod_test36);
  suite_add_tcase(s, tc);
  return s;
}
START_TEST(fmod_test37) {
  x = s21_fmod(tf, 2.5);
  y = fmod(tf, 2.5);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_fmod_test37() {
  Suite *s = suite_create("fmod_test37");
  TCase *tc = tcase_create("fmod_test37");
  tcase_add_test(tc, fmod_test37);
  suite_add_tcase(s, tc);
  return s;
}
START_TEST(fmod_test38) {
  x = s21_fmod(0.5, 2.5);
  y = fmod(0.5, 2.5);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_fmod_test38() {
  Suite *s = suite_create("fmod_test38");
  TCase *tc = tcase_create("fmod_test38");
  tcase_add_test(tc, fmod_test38);
  suite_add_tcase(s, tc);
  return s;
}
START_TEST(fmod_test39) {
  x = s21_fmod(big_float, 2.5);
  y = fmod(big_float, 2.5);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_fmod_test39() {
  Suite *s = suite_create("fmod_test39");
  TCase *tc = tcase_create("fmod_test39");
  tcase_add_test(tc, fmod_test39);
  suite_add_tcase(s, tc);
  return s;
}
START_TEST(fmod_test40) {
  x = s21_fmod(min_big_float, 2.5);
  y = fmod(min_big_float, 2.5);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_fmod_test40() {
  Suite *s = suite_create("fmod_test40");
  TCase *tc = tcase_create("fmod_test40");
  tcase_add_test(tc, fmod_test40);
  suite_add_tcase(s, tc);
  return s;
}
START_TEST(fmod_test41) {
  x = s21_fmod(small, 2.5);
  y = fmod(small, 2.5);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_fmod_test41() {
  Suite *s = suite_create("fmod_test41");
  TCase *tc = tcase_create("fmod_test41");
  tcase_add_test(tc, fmod_test41);
  suite_add_tcase(s, tc);
  return s;
}
START_TEST(fmod_test42) {
  x = s21_fmod(min_small, 2.5);
  y = fmod(min_small, 2.5);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_fmod_test42() {
  Suite *s = suite_create("fmod_test42");
  TCase *tc = tcase_create("fmod_test42");
  tcase_add_test(tc, fmod_test42);
  suite_add_tcase(s, tc);
  return s;
}
START_TEST(fmod_test43) {
  x = s21_fmod(long_double, 2.5);
  y = fmod(long_double, 2.5);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_fmod_test43() {
  Suite *s = suite_create("fmod_test43");
  TCase *tc = tcase_create("fmod_test43");
  tcase_add_test(tc, fmod_test43);
  suite_add_tcase(s, tc);
  return s;
}
START_TEST(fmod_test44) {
  x = s21_fmod(min_long_double, 2.5);
  y = fmod(min_long_double, 2.5);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_fmod_test44() {
  Suite *s = suite_create("fmod_test44");
  TCase *tc = tcase_create("fmod_test44");
  tcase_add_test(tc, fmod_test44);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(log_test1) {
  x = s21_log(zero);
  y = log(zero);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_log_test1() {
  Suite *s = suite_create("log_test1");
  TCase *tc = tcase_create("log_test1");
  tcase_add_test(tc, log_test1);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(log_test2) {
  x = s21_log(min_zero);
  y = log(min_zero);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_log_test2() {
  Suite *s = suite_create("log_test2");
  TCase *tc = tcase_create("log_test2");
  tcase_add_test(tc, log_test2);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(log_test3) {
  x = s21_log(small_num);
  y = log(small_num);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_log_test3() {
  Suite *s = suite_create("log_test3");
  TCase *tc = tcase_create("log_test3");
  tcase_add_test(tc, log_test3);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(log_test4) {
  x = s21_log(min_small_num);
  y = log(min_small_num);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_log_test4() {
  Suite *s = suite_create("log_test4");
  TCase *tc = tcase_create("log_test4");
  tcase_add_test(tc, log_test4);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(log_test5) {
  x = s21_log(num);
  y = log(num);
  snprintf(str1, sizeof(str1), "%16.6lf", x);
  snprintf(str2, sizeof(str1), "%16.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_log_test5() {
  Suite *s = suite_create("log_test5");
  TCase *tc = tcase_create("log_test5");
  tcase_add_test(tc, log_test5);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(log_test6) {
  x = s21_log(min_num);
  y = log(min_num);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_log_test6() {
  Suite *s = suite_create("log_test6");
  TCase *tc = tcase_create("log_test6");
  tcase_add_test(tc, log_test6);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(log_test7) {
  x = s21_log(big_num);
  y = log(big_num);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_log_test7() {
  Suite *s = suite_create("log_test7");
  TCase *tc = tcase_create("log_test7");
  tcase_add_test(tc, log_test7);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(log_test8) {
  x = s21_log(min_big_num);
  y = log(min_big_num);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_log_test8() {
  Suite *s = suite_create("log_test8");
  TCase *tc = tcase_create("log_test8");
  tcase_add_test(tc, log_test8);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(log_test9) {
  x = s21_log(zf);
  y = log(zf);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_log_test9() {
  Suite *s = suite_create("log_test9");
  TCase *tc = tcase_create("log_test9");
  tcase_add_test(tc, log_test9);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(log_test10) {
  x = s21_log(mzf);
  y = log(mzf);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_log_test10() {
  Suite *s = suite_create("log_test10");
  TCase *tc = tcase_create("log_test10");
  tcase_add_test(tc, log_test10);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(log_test11) {
  x = s21_log(tf);
  y = log(tf);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_log_test11() {
  Suite *s = suite_create("log_test11");
  TCase *tc = tcase_create("log_test11");
  tcase_add_test(tc, log_test11);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(log_test12) {
  x = s21_log(mtf);
  y = log(mtf);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_log_test12() {
  Suite *s = suite_create("log_test12");
  TCase *tc = tcase_create("log_test12");
  tcase_add_test(tc, log_test12);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(log_test13) {
  x = s21_log(big_float);
  y = log(big_float);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_log_test13() {
  Suite *s = suite_create("log_test13");
  TCase *tc = tcase_create("log_test13");
  tcase_add_test(tc, log_test13);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(log_test14) {
  x = s21_log(min_big_float);
  y = log(min_big_float);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_log_test14() {
  Suite *s = suite_create("log_test14");
  TCase *tc = tcase_create("log_test14");
  tcase_add_test(tc, log_test14);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(log_test15) {
  x = s21_log(small);
  y = log(small);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_log_test15() {
  Suite *s = suite_create("log_test15");
  TCase *tc = tcase_create("log_test15");
  tcase_add_test(tc, log_test15);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(log_test16) {
  x = s21_log(min_small);
  y = log(min_small);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_log_test16() {
  Suite *s = suite_create("log_test16");
  TCase *tc = tcase_create("log_test16");
  tcase_add_test(tc, log_test16);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(log_test17) {
  x = s21_log(long_double);
  y = log(long_double);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_log_test17() {
  Suite *s = suite_create("log_test17");
  TCase *tc = tcase_create("log_test17");
  tcase_add_test(tc, log_test17);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(log_test18) {
  x = s21_log(min_long_double);
  y = log(min_long_double);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_log_test18() {
  Suite *s = suite_create("log_test18");
  TCase *tc = tcase_create("log_test18");
  tcase_add_test(tc, log_test18);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(sin_test1) {
  x = s21_sin(zero);
  y = sin(zero);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_sin_test1() {
  Suite *s = suite_create("sin_test1");
  TCase *tc = tcase_create("sin_test1");
  tcase_add_test(tc, sin_test1);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(sin_test2) {
  x = s21_sin(min_zero);
  y = sin(min_zero);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_sin_test2() {
  Suite *s = suite_create("sin_test2");
  TCase *tc = tcase_create("sin_test2");
  tcase_add_test(tc, sin_test2);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(sin_test3) {
  x = s21_sin(small_num);
  y = sin(small_num);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_sin_test3() {
  Suite *s = suite_create("sin_test3");
  TCase *tc = tcase_create("sin_test3");
  tcase_add_test(tc, sin_test3);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(sin_test4) {
  x = s21_sin(min_small_num);
  y = sin(min_small_num);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_sin_test4() {
  Suite *s = suite_create("sin_test4");
  TCase *tc = tcase_create("sin_test4");
  tcase_add_test(tc, sin_test4);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(sin_test5) {
  x = s21_sin(num);
  y = sin(num);
  snprintf(str1, sizeof(str1), "%16.6lf", x);
  snprintf(str2, sizeof(str1), "%16.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_sin_test5() {
  Suite *s = suite_create("sin_test5");
  TCase *tc = tcase_create("sin_test5");
  tcase_add_test(tc, sin_test5);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(sin_test6) {
  x = s21_sin(min_num);
  y = sin(min_num);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_sin_test6() {
  Suite *s = suite_create("sin_test6");
  TCase *tc = tcase_create("sin_test6");
  tcase_add_test(tc, sin_test6);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(sin_test7) {
  x = s21_sin(big_num);
  y = sin(big_num);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_sin_test7() {
  Suite *s = suite_create("sin_test7");
  TCase *tc = tcase_create("sin_test7");
  tcase_add_test(tc, sin_test7);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(sin_test8) {
  x = s21_sin(min_big_num);
  y = sin(min_big_num);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_sin_test8() {
  Suite *s = suite_create("sin_test8");
  TCase *tc = tcase_create("sin_test8");
  tcase_add_test(tc, sin_test8);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(sin_test9) {
  x = s21_sin(zf);
  y = sin(zf);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_sin_test9() {
  Suite *s = suite_create("sin_test9");
  TCase *tc = tcase_create("sin_test9");
  tcase_add_test(tc, sin_test9);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(sin_test10) {
  x = s21_sin(mzf);
  y = sin(mzf);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_sin_test10() {
  Suite *s = suite_create("sin_test10");
  TCase *tc = tcase_create("sin_test10");
  tcase_add_test(tc, sin_test10);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(sin_test11) {
  x = s21_sin(tf);
  y = sin(tf);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_sin_test11() {
  Suite *s = suite_create("sin_test11");
  TCase *tc = tcase_create("sin_test11");
  tcase_add_test(tc, sin_test11);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(sin_test12) {
  x = s21_sin(mtf);
  y = sin(mtf);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_sin_test12() {
  Suite *s = suite_create("sin_test12");
  TCase *tc = tcase_create("sin_test12");
  tcase_add_test(tc, sin_test12);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(sin_test13) {
  x = s21_sin(big_float);
  y = sin(big_float);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_sin_test13() {
  Suite *s = suite_create("sin_test13");
  TCase *tc = tcase_create("sin_test13");
  tcase_add_test(tc, sin_test13);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(sin_test14) {
  x = s21_sin(min_big_float);
  y = sin(min_big_float);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_sin_test14() {
  Suite *s = suite_create("sin_test14");
  TCase *tc = tcase_create("sin_test14");
  tcase_add_test(tc, sin_test14);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(sin_test15) {
  x = s21_sin(small);
  y = sin(small);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_sin_test15() {
  Suite *s = suite_create("sin_test15");
  TCase *tc = tcase_create("sin_test15");
  tcase_add_test(tc, sin_test15);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(sin_test16) {
  x = s21_sin(min_small);
  y = sin(min_small);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_sin_test16() {
  Suite *s = suite_create("sin_test16");
  TCase *tc = tcase_create("sin_test16");
  tcase_add_test(tc, sin_test16);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(sin_test17) {
  x = s21_sin(long_double);
  y = sin(long_double);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_sin_test17() {
  Suite *s = suite_create("sin_test17");
  TCase *tc = tcase_create("sin_test17");
  tcase_add_test(tc, sin_test17);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(sin_test18) {
  x = s21_sin(min_long_double);
  y = sin(min_long_double);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_sin_test18() {
  Suite *s = suite_create("sin_test18");
  TCase *tc = tcase_create("sin_test18");
  tcase_add_test(tc, sin_test18);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(cos_test1) {
  x = s21_cos(zero);
  y = cos(zero);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_cos_test1() {
  Suite *s = suite_create("cos_test1");
  TCase *tc = tcase_create("cos_test1");
  tcase_add_test(tc, cos_test1);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(cos_test2) {
  x = s21_cos(min_zero);
  y = cos(min_zero);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_cos_test2() {
  Suite *s = suite_create("cos_test2");
  TCase *tc = tcase_create("cos_test2");
  tcase_add_test(tc, cos_test2);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(cos_test3) {
  x = s21_cos(small_num);
  y = cos(small_num);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_cos_test3() {
  Suite *s = suite_create("cos_test3");
  TCase *tc = tcase_create("cos_test3");
  tcase_add_test(tc, cos_test3);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(cos_test4) {
  x = s21_cos(min_small_num);
  y = cos(min_small_num);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_cos_test4() {
  Suite *s = suite_create("cos_test4");
  TCase *tc = tcase_create("cos_test4");
  tcase_add_test(tc, cos_test4);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(cos_test5) {
  x = s21_cos(num);
  y = cos(num);
  snprintf(str1, sizeof(str1), "%16.6lf", x);
  snprintf(str2, sizeof(str1), "%16.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_cos_test5() {
  Suite *s = suite_create("cos_test5");
  TCase *tc = tcase_create("cos_test5");
  tcase_add_test(tc, cos_test5);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(cos_test6) {
  x = s21_cos(min_num);
  y = cos(min_num);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_cos_test6() {
  Suite *s = suite_create("cos_test6");
  TCase *tc = tcase_create("cos_test6");
  tcase_add_test(tc, cos_test6);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(cos_test7) {
  x = s21_cos(big_num);
  y = cos(big_num);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_cos_test7() {
  Suite *s = suite_create("cos_test7");
  TCase *tc = tcase_create("cos_test7");
  tcase_add_test(tc, cos_test7);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(cos_test8) {
  x = s21_cos(min_big_num);
  y = cos(min_big_num);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_cos_test8() {
  Suite *s = suite_create("cos_test8");
  TCase *tc = tcase_create("cos_test8");
  tcase_add_test(tc, cos_test8);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(cos_test9) {
  x = s21_cos(zf);
  y = cos(zf);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_cos_test9() {
  Suite *s = suite_create("cos_test9");
  TCase *tc = tcase_create("cos_test9");
  tcase_add_test(tc, cos_test9);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(cos_test10) {
  x = s21_cos(mzf);
  y = cos(mzf);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_cos_test10() {
  Suite *s = suite_create("cos_test10");
  TCase *tc = tcase_create("cos_test10");
  tcase_add_test(tc, cos_test10);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(cos_test11) {
  x = s21_cos(tf);
  y = cos(tf);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_cos_test11() {
  Suite *s = suite_create("cos_test11");
  TCase *tc = tcase_create("cos_test11");
  tcase_add_test(tc, cos_test11);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(cos_test12) {
  x = s21_cos(mtf);
  y = cos(mtf);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_cos_test12() {
  Suite *s = suite_create("cos_test12");
  TCase *tc = tcase_create("cos_test12");
  tcase_add_test(tc, cos_test12);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(cos_test13) {
  x = s21_cos(big_float);
  y = cos(big_float);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_cos_test13() {
  Suite *s = suite_create("cos_test13");
  TCase *tc = tcase_create("cos_test13");
  tcase_add_test(tc, cos_test13);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(cos_test14) {
  x = s21_cos(min_big_float);
  y = cos(min_big_float);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_cos_test14() {
  Suite *s = suite_create("cos_test14");
  TCase *tc = tcase_create("cos_test14");
  tcase_add_test(tc, cos_test14);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(cos_test15) {
  x = s21_cos(small);
  y = cos(small);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_cos_test15() {
  Suite *s = suite_create("cos_test15");
  TCase *tc = tcase_create("cos_test15");
  tcase_add_test(tc, cos_test15);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(cos_test16) {
  x = s21_cos(min_small);
  y = cos(min_small);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_cos_test16() {
  Suite *s = suite_create("cos_test16");
  TCase *tc = tcase_create("cos_test16");
  tcase_add_test(tc, cos_test16);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(cos_test17) {
  x = s21_cos(long_double);
  y = cos(long_double);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_cos_test17() {
  Suite *s = suite_create("cos_test17");
  TCase *tc = tcase_create("cos_test17");
  tcase_add_test(tc, cos_test17);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(cos_test18) {
  x = s21_cos(min_long_double);
  y = cos(min_long_double);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_cos_test18() {
  Suite *s = suite_create("cos_test18");
  TCase *tc = tcase_create("cos_test18");
  tcase_add_test(tc, cos_test18);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(tan_test1) {
  x = s21_tan(zero);
  y = tan(zero);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_tan_test1() {
  Suite *s = suite_create("tan_test1");
  TCase *tc = tcase_create("tan_test1");
  tcase_add_test(tc, tan_test1);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(tan_test2) {
  x = s21_tan(min_zero);
  y = tan(min_zero);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_tan_test2() {
  Suite *s = suite_create("tan_test2");
  TCase *tc = tcase_create("tan_test2");
  tcase_add_test(tc, tan_test2);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(tan_test3) {
  x = s21_tan(small_num);
  y = tan(small_num);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_tan_test3() {
  Suite *s = suite_create("tan_test3");
  TCase *tc = tcase_create("tan_test3");
  tcase_add_test(tc, tan_test3);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(tan_test4) {
  x = s21_tan(min_small_num);
  y = tan(min_small_num);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_tan_test4() {
  Suite *s = suite_create("tan_test4");
  TCase *tc = tcase_create("tan_test4");
  tcase_add_test(tc, tan_test4);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(tan_test5) {
  x = s21_tan(num);
  y = tan(num);
  snprintf(str1, sizeof(str1), "%16.6lf", x);
  snprintf(str2, sizeof(str1), "%16.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_tan_test5() {
  Suite *s = suite_create("tan_test5");
  TCase *tc = tcase_create("tan_test5");
  tcase_add_test(tc, tan_test5);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(tan_test6) {
  x = s21_tan(min_num);
  y = tan(min_num);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_tan_test6() {
  Suite *s = suite_create("tan_test6");
  TCase *tc = tcase_create("tan_test6");
  tcase_add_test(tc, tan_test6);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(tan_test7) {
  x = s21_tan(big_num);
  y = tan(big_num);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_tan_test7() {
  Suite *s = suite_create("tan_test7");
  TCase *tc = tcase_create("tan_test7");
  tcase_add_test(tc, tan_test7);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(tan_test8) {
  x = s21_tan(min_big_num);
  y = tan(min_big_num);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_tan_test8() {
  Suite *s = suite_create("tan_test8");
  TCase *tc = tcase_create("tan_test8");
  tcase_add_test(tc, tan_test8);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(tan_test9) {
  x = s21_tan(zf);
  y = tan(zf);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_tan_test9() {
  Suite *s = suite_create("tan_test9");
  TCase *tc = tcase_create("tan_test9");
  tcase_add_test(tc, tan_test9);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(tan_test10) {
  x = s21_tan(mzf);
  y = tan(mzf);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_tan_test10() {
  Suite *s = suite_create("tan_test10");
  TCase *tc = tcase_create("tan_test10");
  tcase_add_test(tc, tan_test10);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(tan_test11) {
  x = s21_tan(tf);
  y = tan(tf);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_tan_test11() {
  Suite *s = suite_create("tan_test11");
  TCase *tc = tcase_create("tan_test11");
  tcase_add_test(tc, tan_test11);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(tan_test12) {
  x = s21_tan(mtf);
  y = tan(mtf);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_tan_test12() {
  Suite *s = suite_create("tan_test12");
  TCase *tc = tcase_create("tan_test12");
  tcase_add_test(tc, tan_test12);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(tan_test13) {
  x = s21_tan(big_float);
  y = tan(big_float);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_tan_test13() {
  Suite *s = suite_create("tan_test13");
  TCase *tc = tcase_create("tan_test13");
  tcase_add_test(tc, tan_test13);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(tan_test14) {
  x = s21_tan(min_big_float);
  y = tan(min_big_float);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_tan_test14() {
  Suite *s = suite_create("tan_test14");
  TCase *tc = tcase_create("tan_test14");
  tcase_add_test(tc, tan_test14);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(tan_test15) {
  x = s21_tan(small);
  y = tan(small);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_tan_test15() {
  Suite *s = suite_create("tan_test15");
  TCase *tc = tcase_create("tan_test15");
  tcase_add_test(tc, tan_test15);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(tan_test16) {
  x = s21_tan(min_small);
  y = tan(min_small);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_tan_test16() {
  Suite *s = suite_create("tan_test16");
  TCase *tc = tcase_create("tan_test16");
  tcase_add_test(tc, tan_test16);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(tan_test17) {
  x = s21_tan(long_double);
  y = tan(long_double);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_tan_test17() {
  Suite *s = suite_create("tan_test17");
  TCase *tc = tcase_create("tan_test17");
  tcase_add_test(tc, tan_test17);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(tan_test18) {
  x = s21_tan(min_long_double);
  y = tan(min_long_double);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_tan_test18() {
  Suite *s = suite_create("tan_test18");
  TCase *tc = tcase_create("tan_test18");
  tcase_add_test(tc, tan_test18);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(asin_test1) {
  x = s21_asin(zero);
  y = asin(zero);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_asin_test1() {
  Suite *s = suite_create("asin_test1");
  TCase *tc = tcase_create("asin_test1");
  tcase_add_test(tc, asin_test1);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(asin_test2) {
  x = s21_asin(min_zero);
  y = asin(min_zero);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_asin_test2() {
  Suite *s = suite_create("asin_test2");
  TCase *tc = tcase_create("asin_test2");
  tcase_add_test(tc, asin_test2);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(asin_test3) {
  x = s21_asin(small_num);
  y = asin(small_num);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_asin_test3() {
  Suite *s = suite_create("asin_test3");
  TCase *tc = tcase_create("asin_test3");
  tcase_add_test(tc, asin_test3);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(asin_test4) {
  x = s21_asin(min_small_num);
  y = asin(min_small_num);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_asin_test4() {
  Suite *s = suite_create("asin_test4");
  TCase *tc = tcase_create("asin_test4");
  tcase_add_test(tc, asin_test4);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(asin_test5) {
  x = s21_asin(num);
  y = asin(num);
  snprintf(str1, sizeof(str1), "%16.6lf", x);
  snprintf(str2, sizeof(str1), "%16.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_asin_test5() {
  Suite *s = suite_create("asin_test5");
  TCase *tc = tcase_create("asin_test5");
  tcase_add_test(tc, asin_test5);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(asin_test6) {
  x = s21_asin(min_num);
  y = asin(min_num);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_asin_test6() {
  Suite *s = suite_create("asin_test6");
  TCase *tc = tcase_create("asin_test6");
  tcase_add_test(tc, asin_test6);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(asin_test7) {
  x = s21_asin(big_num);
  y = asin(big_num);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_asin_test7() {
  Suite *s = suite_create("asin_test7");
  TCase *tc = tcase_create("asin_test7");
  tcase_add_test(tc, asin_test7);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(asin_test8) {
  x = s21_asin(min_big_num);
  y = asin(min_big_num);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_asin_test8() {
  Suite *s = suite_create("asin_test8");
  TCase *tc = tcase_create("asin_test8");
  tcase_add_test(tc, asin_test8);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(asin_test9) {
  x = s21_asin(zf);
  y = asin(zf);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_asin_test9() {
  Suite *s = suite_create("asin_test9");
  TCase *tc = tcase_create("asin_test9");
  tcase_add_test(tc, asin_test9);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(asin_test10) {
  x = s21_asin(mzf);
  y = asin(mzf);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_asin_test10() {
  Suite *s = suite_create("asin_test10");
  TCase *tc = tcase_create("asin_test10");
  tcase_add_test(tc, asin_test10);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(asin_test11) {
  x = s21_asin(tf);
  y = asin(tf);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_asin_test11() {
  Suite *s = suite_create("asin_test11");
  TCase *tc = tcase_create("asin_test11");
  tcase_add_test(tc, asin_test11);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(asin_test12) {
  x = s21_asin(mtf);
  y = asin(mtf);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_asin_test12() {
  Suite *s = suite_create("asin_test12");
  TCase *tc = tcase_create("asin_test12");
  tcase_add_test(tc, asin_test12);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(asin_test13) {
  x = s21_asin(big_float);
  y = asin(big_float);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_asin_test13() {
  Suite *s = suite_create("asin_test13");
  TCase *tc = tcase_create("asin_test13");
  tcase_add_test(tc, asin_test13);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(asin_test14) {
  x = s21_asin(min_big_float);
  y = asin(min_big_float);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_asin_test14() {
  Suite *s = suite_create("asin_test14");
  TCase *tc = tcase_create("asin_test14");
  tcase_add_test(tc, asin_test14);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(asin_test15) {
  x = s21_asin(small);
  y = asin(small);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_asin_test15() {
  Suite *s = suite_create("asin_test15");
  TCase *tc = tcase_create("asin_test15");
  tcase_add_test(tc, asin_test15);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(asin_test16) {
  x = s21_asin(min_small);
  y = asin(min_small);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_asin_test16() {
  Suite *s = suite_create("asin_test16");
  TCase *tc = tcase_create("asin_test16");
  tcase_add_test(tc, asin_test16);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(asin_test17) {
  x = s21_asin(long_double);
  y = asin(long_double);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_asin_test17() {
  Suite *s = suite_create("asin_test17");
  TCase *tc = tcase_create("asin_test17");
  tcase_add_test(tc, asin_test17);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(asin_test18) {
  x = s21_asin(min_long_double);
  y = asin(min_long_double);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_asin_test18() {
  Suite *s = suite_create("asin_test18");
  TCase *tc = tcase_create("asin_test18");
  tcase_add_test(tc, asin_test18);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(atan_test1) {
  x = s21_atan(zero);
  y = atan(zero);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_atan_test1() {
  Suite *s = suite_create("atan_test1");
  TCase *tc = tcase_create("atan_test1");
  tcase_add_test(tc, atan_test1);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(atan_test2) {
  x = s21_atan(min_zero);
  y = atan(min_zero);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_atan_test2() {
  Suite *s = suite_create("atan_test2");
  TCase *tc = tcase_create("atan_test2");
  tcase_add_test(tc, atan_test2);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(atan_test3) {
  x = s21_atan(small_num);
  y = atan(small_num);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_atan_test3() {
  Suite *s = suite_create("atan_test3");
  TCase *tc = tcase_create("atan_test3");
  tcase_add_test(tc, atan_test3);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(atan_test4) {
  x = s21_atan(min_small_num);
  y = atan(min_small_num);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_atan_test4() {
  Suite *s = suite_create("atan_test4");
  TCase *tc = tcase_create("atan_test4");
  tcase_add_test(tc, atan_test4);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(atan_test5) {
  x = s21_atan(num);
  y = atan(num);
  snprintf(str1, sizeof(str1), "%16.6lf", x);
  snprintf(str2, sizeof(str1), "%16.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_atan_test5() {
  Suite *s = suite_create("atan_test5");
  TCase *tc = tcase_create("atan_test5");
  tcase_add_test(tc, atan_test5);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(atan_test6) {
  x = s21_atan(min_num);
  y = atan(min_num);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_atan_test6() {
  Suite *s = suite_create("atan_test6");
  TCase *tc = tcase_create("atan_test6");
  tcase_add_test(tc, atan_test6);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(atan_test7) {
  x = s21_atan(big_num);
  y = atan(big_num);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_atan_test7() {
  Suite *s = suite_create("atan_test7");
  TCase *tc = tcase_create("atan_test7");
  tcase_add_test(tc, atan_test7);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(atan_test8) {
  x = s21_atan(min_big_num);
  y = atan(min_big_num);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_atan_test8() {
  Suite *s = suite_create("atan_test8");
  TCase *tc = tcase_create("atan_test8");
  tcase_add_test(tc, atan_test8);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(atan_test9) {
  x = s21_atan(zf);
  y = atan(zf);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_atan_test9() {
  Suite *s = suite_create("atan_test9");
  TCase *tc = tcase_create("atan_test9");
  tcase_add_test(tc, atan_test9);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(atan_test10) {
  x = s21_atan(mzf);
  y = atan(mzf);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_atan_test10() {
  Suite *s = suite_create("atan_test10");
  TCase *tc = tcase_create("atan_test10");
  tcase_add_test(tc, atan_test10);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(atan_test11) {
  x = s21_atan(tf);
  y = atan(tf);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_atan_test11() {
  Suite *s = suite_create("atan_test11");
  TCase *tc = tcase_create("atan_test11");
  tcase_add_test(tc, atan_test11);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(atan_test12) {
  x = s21_atan(mtf);
  y = atan(mtf);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_atan_test12() {
  Suite *s = suite_create("atan_test12");
  TCase *tc = tcase_create("atan_test12");
  tcase_add_test(tc, atan_test12);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(atan_test13) {
  x = s21_atan(big_float);
  y = atan(big_float);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_atan_test13() {
  Suite *s = suite_create("atan_test13");
  TCase *tc = tcase_create("atan_test13");
  tcase_add_test(tc, atan_test13);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(atan_test14) {
  x = s21_atan(min_big_float);
  y = atan(min_big_float);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_atan_test14() {
  Suite *s = suite_create("atan_test14");
  TCase *tc = tcase_create("atan_test14");
  tcase_add_test(tc, atan_test14);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(atan_test15) {
  x = s21_atan(small);
  y = atan(small);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_atan_test15() {
  Suite *s = suite_create("atan_test15");
  TCase *tc = tcase_create("atan_test15");
  tcase_add_test(tc, atan_test15);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(atan_test16) {
  x = s21_atan(min_small);
  y = atan(min_small);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_atan_test16() {
  Suite *s = suite_create("atan_test16");
  TCase *tc = tcase_create("atan_test16");
  tcase_add_test(tc, atan_test16);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(atan_test17) {
  x = s21_atan(long_double);
  y = atan(long_double);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_atan_test17() {
  Suite *s = suite_create("atan_test17");
  TCase *tc = tcase_create("atan_test17");
  tcase_add_test(tc, atan_test17);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(atan_test18) {
  x = s21_atan(min_long_double);
  y = atan(min_long_double);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_atan_test18() {
  Suite *s = suite_create("atan_test18");
  TCase *tc = tcase_create("atan_test18");
  tcase_add_test(tc, atan_test18);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(acos_test1) {
  x = s21_acos(zero);
  y = acos(zero);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_acos_test1() {
  Suite *s = suite_create("acos_test1");
  TCase *tc = tcase_create("acos_test1");
  tcase_add_test(tc, acos_test1);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(acos_test2) {
  x = s21_acos(min_zero);
  y = acos(min_zero);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_acos_test2() {
  Suite *s = suite_create("acos_test2");
  TCase *tc = tcase_create("acos_test2");
  tcase_add_test(tc, acos_test2);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(acos_test3) {
  x = s21_acos(small_num);
  y = acos(small_num);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_acos_test3() {
  Suite *s = suite_create("acos_test3");
  TCase *tc = tcase_create("acos_test3");
  tcase_add_test(tc, acos_test3);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(acos_test4) {
  x = s21_acos(min_small_num);
  y = acos(min_small_num);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_acos_test4() {
  Suite *s = suite_create("acos_test4");
  TCase *tc = tcase_create("acos_test4");
  tcase_add_test(tc, acos_test4);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(acos_test5) {
  x = s21_acos(num);
  y = acos(num);
  snprintf(str1, sizeof(str1), "%16.6lf", x);
  snprintf(str2, sizeof(str1), "%16.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_acos_test5() {
  Suite *s = suite_create("acos_test5");
  TCase *tc = tcase_create("acos_test5");
  tcase_add_test(tc, acos_test5);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(acos_test6) {
  x = s21_acos(min_num);
  y = acos(min_num);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_acos_test6() {
  Suite *s = suite_create("acos_test6");
  TCase *tc = tcase_create("acos_test6");
  tcase_add_test(tc, acos_test6);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(acos_test7) {
  x = s21_acos(big_num);
  y = acos(big_num);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_acos_test7() {
  Suite *s = suite_create("acos_test7");
  TCase *tc = tcase_create("acos_test7");
  tcase_add_test(tc, acos_test7);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(acos_test8) {
  x = s21_acos(min_big_num);
  y = acos(min_big_num);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_acos_test8() {
  Suite *s = suite_create("acos_test8");
  TCase *tc = tcase_create("acos_test8");
  tcase_add_test(tc, acos_test8);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(acos_test9) {
  x = s21_acos(zf);
  y = acos(zf);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_acos_test9() {
  Suite *s = suite_create("acos_test9");
  TCase *tc = tcase_create("acos_test9");
  tcase_add_test(tc, acos_test9);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(acos_test10) {
  x = s21_acos(mzf);
  y = acos(mzf);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_acos_test10() {
  Suite *s = suite_create("acos_test10");
  TCase *tc = tcase_create("acos_test10");
  tcase_add_test(tc, acos_test10);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(acos_test11) {
  x = s21_acos(tf);
  y = acos(tf);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_acos_test11() {
  Suite *s = suite_create("acos_test11");
  TCase *tc = tcase_create("acos_test11");
  tcase_add_test(tc, acos_test11);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(acos_test12) {
  x = s21_acos(mtf);
  y = acos(mtf);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_acos_test12() {
  Suite *s = suite_create("acos_test12");
  TCase *tc = tcase_create("acos_test12");
  tcase_add_test(tc, acos_test12);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(acos_test13) {
  x = s21_acos(big_float);
  y = acos(big_float);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_acos_test13() {
  Suite *s = suite_create("acos_test13");
  TCase *tc = tcase_create("acos_test13");
  tcase_add_test(tc, acos_test13);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(acos_test14) {
  x = s21_acos(min_big_float);
  y = acos(min_big_float);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_acos_test14() {
  Suite *s = suite_create("acos_test14");
  TCase *tc = tcase_create("acos_test14");
  tcase_add_test(tc, acos_test14);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(acos_test15) {
  x = s21_acos(small);
  y = acos(small);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_acos_test15() {
  Suite *s = suite_create("acos_test15");
  TCase *tc = tcase_create("acos_test15");
  tcase_add_test(tc, acos_test15);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(acos_test16) {
  x = s21_acos(min_small);
  y = acos(min_small);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_acos_test16() {
  Suite *s = suite_create("acos_test16");
  TCase *tc = tcase_create("acos_test16");
  tcase_add_test(tc, acos_test16);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(acos_test17) {
  x = s21_acos(long_double);
  y = acos(long_double);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_acos_test17() {
  Suite *s = suite_create("acos_test17");
  TCase *tc = tcase_create("acos_test17");
  tcase_add_test(tc, acos_test17);
  suite_add_tcase(s, tc);
  return s;
}

START_TEST(acos_test18) {
  x = s21_acos(min_long_double);
  y = acos(min_long_double);
  snprintf(str1, sizeof(str1), "%.6lf", x);
  snprintf(str2, sizeof(str1), "%.6lf", y);
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *test_suite_acos_test18() {
  Suite *s = suite_create("acos_test18");
  TCase *tc = tcase_create("acos_test18");
  tcase_add_test(tc, acos_test18);
  suite_add_tcase(s, tc);
  return s;
}


int main(void) {
  Suite *test_suites[] = {
      test_suite_abs_test1(), test_suite_abs_test2(), test_suite_abs_test3(),
      test_suite_abs_test4(), test_suite_abs_test5(), test_suite_abs_test6(),
      test_suite_abs_test7(), test_suite_abs_test8(), test_suite_abs_test9(),
      test_suite_abs_test10(), test_suite_abs_test11(), test_suite_abs_test12(),
      test_suite_abs_test13(),
      ///////////////////////////////
      test_suite_fabs_test1(), test_suite_fabs_test2(), test_suite_fabs_test3(),
      test_suite_fabs_test4(), test_suite_fabs_test5(), test_suite_fabs_test6(),
      test_suite_fabs_test7(), test_suite_fabs_test8(), test_suite_fabs_test9(),
      test_suite_fabs_test10(), test_suite_fabs_test11(),
      test_suite_fabs_test12(), test_suite_fabs_test13(),
      test_suite_fabs_test14(), test_suite_fabs_test15(),
      test_suite_fabs_test16(), test_suite_fabs_test17(),
      test_suite_fabs_test18(), test_suite_fabs_test19(),
      test_suite_fabs_test20(), test_suite_fabs_test21(),
      test_suite_fabs_test22(),
      ///////////////////////////////
      test_suite_floor_test1(), test_suite_floor_test2(),
      test_suite_floor_test3(), test_suite_floor_test4(),
      test_suite_floor_test5(), test_suite_floor_test6(),
      test_suite_floor_test7(), test_suite_floor_test8(),
      test_suite_floor_test9(), test_suite_floor_test10(),
      test_suite_floor_test11(), test_suite_floor_test12(),
      test_suite_floor_test13(), test_suite_floor_test14(),
      test_suite_floor_test15(), test_suite_floor_test16(),
      test_suite_floor_test17(), test_suite_floor_test18(),
      test_suite_floor_test19(), test_suite_floor_test20(),
      test_suite_floor_test21(),
      ///////////////////////////////
      test_suite_ceil_test1(), test_suite_ceil_test2(), test_suite_ceil_test3(),
      test_suite_ceil_test4(), test_suite_ceil_test5(), test_suite_ceil_test6(),
      test_suite_ceil_test7(), test_suite_ceil_test8(), test_suite_ceil_test9(),
      test_suite_ceil_test10(), test_suite_ceil_test11(),
      test_suite_ceil_test12(), test_suite_ceil_test13(),
      test_suite_ceil_test14(), test_suite_ceil_test15(),
      test_suite_ceil_test16(), test_suite_ceil_test17(),
      test_suite_ceil_test18(), test_suite_ceil_test19(),
      test_suite_ceil_test20(), test_suite_ceil_test21(),
      test_suite_ceil_test22(),
      ///////////////////////////////
      test_suite_exp_test1(), test_suite_exp_test2(), test_suite_exp_test3(),
      test_suite_exp_test4(), test_suite_exp_test5(), test_suite_exp_test6(),
      test_suite_exp_test7(), test_suite_exp_test8(), test_suite_exp_test9(),
      test_suite_exp_test10(), test_suite_exp_test11(), test_suite_exp_test12(),
      test_suite_exp_test13(), test_suite_exp_test14(), test_suite_exp_test15(),
      test_suite_exp_test16(),
      ///////////////////////////////
      test_suite_pow_test1(), test_suite_pow_test2(), test_suite_pow_test3(),
      test_suite_pow_test4(), test_suite_pow_test5(), test_suite_pow_test6(),
      test_suite_pow_test7(), test_suite_pow_test8(), test_suite_pow_test9(),
      test_suite_pow_test10(), test_suite_pow_test11(), test_suite_pow_test12(),
      test_suite_pow_test13(), test_suite_pow_test14(), test_suite_pow_test15(),
      test_suite_pow_test16(), test_suite_pow_test17(), test_suite_pow_test18(),
      test_suite_pow_test19(),
      ///////////////////////////////
      test_suite_sqrt_test1(), test_suite_sqrt_test2(), test_suite_sqrt_test3(),
      test_suite_sqrt_test4(), test_suite_sqrt_test5(), test_suite_sqrt_test6(),
      test_suite_sqrt_test7(), test_suite_sqrt_test8(), test_suite_sqrt_test9(),
      test_suite_sqrt_test10(), test_suite_sqrt_test11(),
      test_suite_sqrt_test12(), test_suite_sqrt_test13(),
      test_suite_sqrt_test14(), test_suite_sqrt_test15(),
      test_suite_sqrt_test16(), test_suite_sqrt_test17(),
      test_suite_sqrt_test18(),
      ///////////////////////////////
      test_suite_fmod_test1(), test_suite_fmod_test2(), test_suite_fmod_test3(),
      test_suite_fmod_test4(), test_suite_fmod_test5(), test_suite_fmod_test6(),
      test_suite_fmod_test7(), test_suite_fmod_test8(), test_suite_fmod_test9(),
      test_suite_fmod_test10(), test_suite_fmod_test11(),
      test_suite_fmod_test12(), test_suite_fmod_test13(),
      test_suite_fmod_test14(), test_suite_fmod_test15(),
      test_suite_fmod_test16(), test_suite_fmod_test17(),
      test_suite_fmod_test18(), test_suite_fmod_test19(),
      test_suite_fmod_test20(), test_suite_fmod_test21(),
      test_suite_fmod_test22(), test_suite_fmod_test23(),
      test_suite_fmod_test24(), test_suite_fmod_test25(),
      test_suite_fmod_test26(), test_suite_fmod_test27(),
      test_suite_fmod_test28(), test_suite_fmod_test29(),
      test_suite_fmod_test30(), test_suite_fmod_test31(),
      test_suite_fmod_test32(), test_suite_fmod_test33(),
      test_suite_fmod_test34(), test_suite_fmod_test35(),
      test_suite_fmod_test36(), test_suite_fmod_test37(),
      test_suite_fmod_test38(), test_suite_fmod_test39(),
      test_suite_fmod_test40(), test_suite_fmod_test41(),
      test_suite_fmod_test42(), test_suite_fmod_test43(),
      test_suite_fmod_test44(),
      ///////////////////////////////
      test_suite_log_test1(), test_suite_log_test2(), test_suite_log_test3(),
      test_suite_log_test4(), test_suite_log_test5(), test_suite_log_test6(),
      test_suite_log_test7(), test_suite_log_test8(), test_suite_log_test9(),
      test_suite_log_test10(), test_suite_log_test11(), test_suite_log_test12(),
      test_suite_log_test13(), test_suite_log_test14(), test_suite_log_test15(),
      test_suite_log_test16(), test_suite_log_test17(), test_suite_log_test18(),
      ///////////////////////////////
      test_suite_sin_test1(), test_suite_sin_test2(), test_suite_sin_test3(),
      test_suite_sin_test4(), test_suite_sin_test5(), test_suite_sin_test6(),
      test_suite_sin_test7(), test_suite_sin_test8(), test_suite_sin_test9(),
      test_suite_sin_test10(), test_suite_sin_test11(), test_suite_sin_test12(),
      test_suite_sin_test13(), test_suite_sin_test14(), test_suite_sin_test15(),
      test_suite_sin_test16(), test_suite_sin_test17(), test_suite_sin_test18(),
      ///////////////////////////////
      test_suite_cos_test1(), test_suite_cos_test2(), test_suite_cos_test3(),
      test_suite_cos_test4(), test_suite_cos_test5(), test_suite_cos_test6(),
      test_suite_cos_test7(), test_suite_cos_test8(), test_suite_cos_test9(),
      test_suite_cos_test10(), test_suite_cos_test11(), test_suite_cos_test12(),
      test_suite_cos_test13(), test_suite_cos_test14(), test_suite_cos_test15(),
      test_suite_cos_test16(), test_suite_cos_test17(), test_suite_cos_test18(),
      ///////////////////////////////
      test_suite_tan_test1(), test_suite_tan_test2(), test_suite_tan_test3(),
      test_suite_tan_test4(), test_suite_tan_test5(), test_suite_tan_test6(),
      test_suite_tan_test7(), test_suite_tan_test8(), test_suite_tan_test9(),
      test_suite_tan_test10(), test_suite_tan_test11(), test_suite_tan_test12(),
      test_suite_tan_test13(), test_suite_tan_test14(), test_suite_tan_test15(),
      test_suite_tan_test16(), test_suite_tan_test17(), test_suite_tan_test18(),
      ///////////////////////////////
      test_suite_asin_test1(), test_suite_asin_test2(), test_suite_asin_test3(),
      test_suite_asin_test4(), test_suite_asin_test5(), test_suite_asin_test6(),
      test_suite_asin_test7(), test_suite_asin_test8(), test_suite_asin_test9(),
      test_suite_asin_test10(), test_suite_asin_test11(),
      test_suite_asin_test12(), test_suite_asin_test13(),
      test_suite_asin_test14(), test_suite_asin_test15(),
      test_suite_asin_test16(), test_suite_asin_test17(),
      test_suite_asin_test18(),
      ///////////////////////////////
      test_suite_atan_test1(), test_suite_atan_test2(), test_suite_atan_test3(),
      test_suite_atan_test4(), test_suite_atan_test5(), test_suite_atan_test6(),
      test_suite_atan_test7(), test_suite_atan_test8(), test_suite_atan_test9(),
      test_suite_atan_test10(), test_suite_atan_test11(),
      test_suite_atan_test12(), test_suite_atan_test13(),
      test_suite_atan_test14(), test_suite_atan_test15(),
      test_suite_atan_test16(), test_suite_atan_test17(),
      test_suite_atan_test18(),
      /////////////////////////////
      test_suite_acos_test1(), test_suite_acos_test2(), test_suite_acos_test3(),
      test_suite_acos_test4(), test_suite_acos_test5(), test_suite_acos_test6(),
      test_suite_acos_test7(), test_suite_acos_test8(), test_suite_acos_test9(),
      test_suite_acos_test10(), test_suite_acos_test11(),
      test_suite_acos_test12(), test_suite_acos_test13(),
      test_suite_acos_test14(), test_suite_acos_test15(),
      test_suite_acos_test16(), test_suite_acos_test17(),
      test_suite_acos_test18(), NULL};
  int no_failed = 0;
  for (Suite **suite = test_suites; *suite != NULL; suite++) {
    SRunner *runner = srunner_create(*suite);
    srunner_run_all(runner, CK_NORMAL);
    no_failed += srunner_ntests_failed(runner);
    srunner_free(runner);
  }
  return no_failed;
}
