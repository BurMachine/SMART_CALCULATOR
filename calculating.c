#include "calculating.h"
#include "parser.h"
#include "stack.h"
#include "stdlib.h"
#include <stdio.h>

int QT_processing (char *input, long double value, long double *result) {
    int code = ERROR;
    if (!validation(input)) {
        code = SUCCESS;
        stack *one = NULL, *one_rev = NULL, *two = NULL, *three = NULL, *rpn_s = NULL, *rpn_n = NULL;
        parser(input, &one, value);
        reverse_stack(&one, &one_rev);
        RPN(&one_rev, &rpn_n, &rpn_s);
        reverse_stack(&rpn_n, &two);
        calculator(&two, &three);
        *result = three->value;
        stack_pop(&three);
    }
    return code;
}

void RPN(stack **first, stack **polish_num, stack **polish_support) {
    int err = 0;
    while(1) {
        if (*first) {
            if ((*first)->type == RIGHT_BR) {
                stack_pop(first);
                while ((*polish_support)->type != LEFT_BR) {
                    stack_push(polish_num, (*polish_support)->value, (*polish_support)->priority, (*polish_support)->type);
                    stack_pop(polish_support);
                }
                stack_pop(polish_support);
            } else {
                if ((*first)->type == NUMBER || (*first)->type == XXX) {
                    stack_push(polish_num, (*first)->value, (*first)->priority, (*first)->type);
                    stack_pop(first);
                } else {
                    if (*polish_support) {
                        if ((*first)->priority != -1 && (*first)->priority <= (*polish_support)->priority) {
                            stack_push(polish_num, (*polish_support)->value, (*polish_support)->priority, (*polish_support)->type);
                            stack_pop(polish_support);
                        }
                    }
                    stack_push(polish_support, (*first)->value, (*first)->priority, (*first)->type);
                    stack_pop(first);
                }
            }
        }
        if (!*first || err) break;
        if (!(*first)->next) err++;
    }
    err = 0;
    if (*polish_support) {
        while (1) {
            stack_push(polish_num, (*polish_support)->value, (*polish_support)->priority, (*polish_support)->type);
            stack_pop(polish_support);
            if (err || !*polish_support) break;
            if (!(*polish_support)->next) err++;
        }
    }
}


void calculator(stack ** result, stack **calculated) {
    int check_num = 0;
    int code = 0;
    while (1) {
        if ((*result)->type == PLUS) {
            stack_pop(result);
            stack_push(calculated, (*calculated)->next->value + (*calculated)->value, 0, NUMBER);
            stack_double_pop(calculated);
        } else if ((*result)->type == SUB) {
            stack_pop(result);
            stack_push(calculated, (*calculated)->next->value - (*calculated)->value, 0, NUMBER);
            stack_double_pop(calculated);
        } else if ((*result)->type == MULT) {
            stack_pop(result);
            stack_push(calculated, (*calculated)->next->value * (*calculated)->value, 0, NUMBER);
            stack_double_pop(calculated);
        } else if ((*result)->type == DIV) {
            stack_pop(result);
            stack_push(calculated, (*calculated)->next->value / (*calculated)->value, 0, NUMBER);
            stack_double_pop(calculated);
        } else if ((*result)->type == MOD) {
            stack_pop(result);
//            printf("калькулятор%Lf\n", (*calculated)->value);
//            printf("калькулятор%Lf\n", (*calculated)->next->value);
            stack_push(calculated, fmodl((*calculated)->next->value, (*calculated)->value), 0, NUMBER);
//            printf("калькулятор%Lf\n", (*calculated)->value);
            stack_double_pop(calculated);
        } else if ((*result)->type == POWER) {
            stack_pop(result);
            stack_push(calculated, pow((*calculated)->next->value, (*calculated)->value), 0, NUMBER);
            stack_double_pop(calculated);
        } else if ((*result)->type == SIN) {
            stack_pop(result);
            stack_push(calculated, sin((*calculated)->value), 0, NUMBER);
            stack_next_pop(calculated);
        } else if ((*result)->type == COS) {
            stack_pop(result);
            stack_push(calculated, cos((*calculated)->value), 0, NUMBER);
            stack_next_pop(calculated);
        } else if ((*result)->type == TAN) {
            stack_pop(result);
            stack_push(calculated, tan((*calculated)->value), 0, NUMBER);
            stack_next_pop(calculated);
        } else if ((*result)->type == ACOS) {
            stack_pop(result);
            stack_push(calculated, acos((*calculated)->value), 0, NUMBER);
            stack_next_pop(calculated);
        } else if ((*result)->type == ASIN) {
            stack_pop(result);
            stack_push(calculated, asin((*calculated)->value), 0, NUMBER);
            stack_next_pop(calculated);
        } else if ((*result)->type == ATAN) {
            stack_pop(result);
            stack_push(calculated, atan((*calculated)->value), 0, NUMBER);
            stack_next_pop(calculated);
        } else if ((*result)->type == SQRT) {
            stack_pop(result);
            stack_push(calculated, sqrt((*calculated)->value), 0, NUMBER);
            stack_next_pop(calculated);
        } else if ((*result)->type == LN) {
            stack_pop(result);
            stack_push(calculated, log((*calculated)->value), 0, NUMBER);
            stack_next_pop(calculated);
        } else if ((*result)->type == LOG) {
            stack_pop(result);
            stack_push(calculated, log10((*calculated)->value), 0, NUMBER);
            stack_next_pop(calculated);
        }


        if (*result) {
            if ((*result)->type == NUMBER || (*result)->type == XXX) {
                check_num++;
                stack_push(calculated, (*result)->value, (*result)->priority, (*result)->type);
                stack_pop(result);
            }
        }
        if (!*result || code) break;
        if (!(*result)->next) code = 1;
    }
}



long double bank(long double sum, int time,long double percent, size_t type, long double *sum_res, long double *mounth_pay, long double *overpay, int N) {
    long double payment_mounth = 0;
    long double overpayment = 0;
    long double summary_payment = 0;
    char input[500];
    if (type == 1) {

        if (!check_for_bank(sum, time, percent, type)) {
            percent = percent / 12;
            sprintf(input, "%Lf*(%Lf+%Lf/((1+%Lf)^%Lf - 1))", sum, (long double) percent, (long double) percent,
                    (long double) percent, (long double) time);
            QT_processing(input, 0, &payment_mounth);
            *mounth_pay = payment_mounth;
            summary_payment = payment_mounth * (long double)time;
            *sum_res = summary_payment;
            overpayment = summary_payment - sum;
            *overpay = overpayment;
        }
    } else if (type == 2) {
        percent = percent / 12;
        long double OD = sum/(long double)time;
        long double OZ = sum - (OD *(long double)N);
        sprintf(input, "%Lf+(%Lf-%Lf*%Lf)*%Lf/12",OD, sum, OZ, (long double)N, percent);
        QT_processing(input, 0, &payment_mounth);
        *mounth_pay = payment_mounth;
        summary_payment = payment_mounth * (long double)time;
        *sum_res = summary_payment;
        overpayment = summary_payment - sum;
        *overpay = overpayment;
    }
}

int check_for_bank(long double sum, int time,long double percent, size_t type) {
    int code = 1;
    if (sum > 0 && time > 0 && percent >= 0) {
        code = 0;
    }
    return code;
}