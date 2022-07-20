#include <check.h>
#include <limits.h>

#include "stack.h"
#include "validation.h"
#include "parser.h"
#include "calculating.h"

START_TEST(smartcalc_tests) {
char input[100] = "cos(0)";
long double a;
QT_processing(input, 0, &a);
ck_assert_int_eq((int)a, SUCCESS);
}

int main() {
    Suite *s1 = suite_create("Core");
    TCase *s21_test = tcase_create("Test");
    SRunner *sr = srunner_create(s1);
    suite_add_tcase(s1, s21_test);

    tcase_add_test(s21_test, smartcalc_tests);

    srunner_run_all(sr, CK_VERBOSE);
    int errors = srunner_ntests_failed(sr);
    srunner_free(sr);

    return errors == 0 ? 0 : 1;
}
