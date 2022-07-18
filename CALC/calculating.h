#ifndef SMART_CALCULATOR_CALCULATING_H
#define SMART_CALCULATOR_CALCULATING_H

#include "stack.h"
#include "math.h"

void RPN(stack **first, stack **polish_num, stack **polish_support);
void calculator(stack ** result, stack **calculated);
int QT_processing (char *input, long double value, long double *result);

#endif  // SMART_CALCULATOR_CALCULATING_H