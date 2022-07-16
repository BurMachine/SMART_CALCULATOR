#ifndef SMART_CALCULATOR_PARSER_H
#define SMART_CALCULATOR_PARSER_H

#include "stack.h"
#include "validation.h"

int parser(char *input, stack **INPUT);

double get_number(char *input, int *i);
int get_trigonometry_or_sqrt(char *input, int *i);
#endif //SMART_CALCULATOR_PARSER_H