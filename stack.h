//
// Created by Gryffindor Dodie on 7/16/22.
//

#ifndef SMART_CALCULATOR_STACK_H
#define SMART_CALCULATOR_STACK_H

typedef enum {
    x = 0,
    NUMBER = 1,
    PLUS = 2,
    SUB = 3,
    MULT = 4,
    DIV = 5,
    MOD = 6,
    POWER = 7,
    SIN = 8,
    COS = 9,
    TAN = 10,
    ACOS = 11,
    ASIN = 12,
    ATAN = 13,
    SQRT = 14,
    ln = 15,
    log = 16,
    LEFT_BR = 17,
    RIGHT_BR = 18
} value_type;

typedef struct stack_struct {
    long double value;
    int priority;
    value_type type;
    struct stack_struct *next;
}stack;

void stack_push(stack **first, long double value, int priority, value_type type);
void stack_pop(stack **last);
stack stack_pick(stack *current);


void print_stack(stack *A);

#endif //SMART_CALCULATOR_STACK_H
