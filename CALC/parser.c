#include "parser.h"
#include <stdio.h>

int parser(char *input, stack **INPUT, long double x_value) {
    int code = 0;
    int bracket_unar = 0;
    for (int i = 0; input[i] != '\n' && input[i] != '\0'; i++) {
        if ((input[i] >= 48 && input[i] <= 57) || input[i] == '.' || input[i] == ',') {
            long double num = get_number(input, &i);
            stack_push(INPUT, num, 0, NUMBER);
            printf("");
            i--;
            continue;
        } else if (input[i] == '*' || input[i] == '/' || input[i] == 'm') {
            if (input[i] == '*') stack_push(INPUT, 0, 2, MULT);
            else if (input[i] == '/') {stack_push(INPUT, 0, 2, DIV);}
            else if (input[i] == 'm') {stack_push(INPUT, 0, 2, MOD); i += 2;}
            continue;
        } else if ((input[i] == '+' || input[i] == '-') && (input[i - 1] == '(' || (input[i - 1] == ' ' && input[i - 2] == ' ') || i == 0)) {
            double num = 0;
            if (input[i] == '+') {
                i++;
                num = get_number(input, &i);
            } else {
                i++;
                num = get_number(input, &i) * (-1);
            }
            stack_push(INPUT, num, 0, NUMBER);
            i--;
            continue;
        } else if ((input[i] == '+' || input[i] == '-') && ((input[i - 1] >= 48 && input[i - 1] <= 57) || (input[i - 2] >= 48 && input[i - 2] <= 57)
        || input[i - 1] == ')' || input[i - 2] == ')')) {
            if (input[i] == '+') stack_push(INPUT, 0, 1, PLUS);
            else if (input[i] == '-') {stack_push(INPUT, 0, 1, SUB);}
            continue;
        } else if (input[i] == '(' && (input[i + 1] == '+' || input[i + 1] == '-')) {
            bracket_unar = 1;
            continue;
        } else if (input[i] == ')' && bracket_unar == 1) {
            bracket_unar = 0;
            continue;
        } else if (input[i] == '(' && (input[i + 1] != '+' || input[i + 1] != '-')) {
            stack_push(INPUT, 0, -1, LEFT_BR);
            continue;
        } else if (input[i] == ')' && bracket_unar == 0) {
            stack_push(INPUT, 0, -1, RIGHT_BR);
            continue;
        } else if (input[i] == '^') {
            stack_push(INPUT, 0, 3, POWER);
            continue;
        } else if (input[i] == 's' || input[i] == 'c' || input[i] == 't') {
            int a = get_trigonometry_or_sqrt(input, &i);
            if (a == 0) {stack_push(INPUT, 0, 4, SQRT);}
            else if (a == 1) {stack_push(INPUT, 0, 4, SIN);}
            else if (a == 2) {stack_push(INPUT, 0, 4, COS);}
            else if (a == 3) {stack_push(INPUT, 0, 4, TAN);}
            continue;
        } else if (input[i] == 'a') {
            i++;
            int a = get_trigonometry_or_sqrt(input, &i);
            if (a == 1) {stack_push(INPUT, 0, 4, ASIN);}
            else if (a == 2) {stack_push(INPUT, 0, 4, ACOS);}
            else if (a == 3) {stack_push(INPUT, 0, 4, ATAN);}
            continue;
        } else if (input[i] == 'l') {
            int a = get_log_ln(input, &i);
            if (!a) {stack_push(INPUT, 0, 4, LOG);}
            else if (a == 27) {stack_push(INPUT, 0, 4, LN);}
        } else if (input[i] == 'x') {
            stack_push(INPUT, x_value, 0, XXX);
            continue;
        }
    }
    return code;
}

double get_number(char *input, int *i) {
    char number[260];
    int j = 0;
    int k = *i;
    while ((input[k] >= 48 && input[k] <= 57) || input[k] == '.' || input[k] == ',') {
        if (input[k] == ',') {number[j] = '.'; k++; j++;}
        else {number[j] = input[k]; k++; j++;}
    }
    *i = k;
    long double num = 0;
    sscanf(number, "%Lf", &num);
    return num;
}

int get_trigonometry_or_sqrt(char *input, int *i) {
    int code = -1;
    int k = *i;
    if (input[k] == 's') {
        if (input[k + 1] == 'i') {code = 1; k += 2;}
        if (input[k + 1] == 'q') {code = 0; k += 3;}
    } else if (input[k] == 'c'){
        code = 2;
        k += 2;
    } else if (input[k] == 't') {
        code = 3;
        k += 2;
    }
    *i = k;
    return code;
}

int get_log_ln(char *input, int *i) {
    int code = -1;
    int k = *i;
    if (input[k] == 'l' && input[k + 1] == 'o') {
        code = 0;
        k += 2;
    } else if (input[k] == 'l' && input[k + 1] == 'n') {
        code = 27;
        k += 1;
    }
    *i = k;
    return code;
}
