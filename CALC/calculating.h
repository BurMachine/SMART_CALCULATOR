#ifndef SMART_CALCULATOR_CALCULATING_H
#define SMART_CALCULATOR_CALCULATING_H

#include "stack.h"
#include "math.h"
#include <stdio.h>

void RPN(stack **first, stack **polish_num, stack **polish_support);
void calculator(stack ** result, stack **calculated);
int QT_processing (char *input, long double value, long double *result);

long double bank_(long double sum, int time,long double percent, size_t type, long double *sum_res, long double *mounth_pay, long double *overpay, int N);
int check_for_bank(long double sum, int time,long double percent, size_t type);

#endif  // SMART_CALCULATOR_CALCULATING_H
