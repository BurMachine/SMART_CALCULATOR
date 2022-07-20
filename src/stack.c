//
// Created by Gryffindor Dodie on 7/16/22.
//

#include "stack.h"
#include <stdlib.h>
#include <stdio.h>

void stack_push(stack **first, long double value, int priority, value_type type) {
    stack *tmp = malloc(sizeof(stack));
    tmp->value = value;
    tmp->priority = priority;
    tmp->type = type;
    tmp->next = *first;
    *first = tmp;
}

void stack_pop(stack **last) {
    stack *tmp = NULL;
    tmp = (*last)->next;
    free(*last);
    *last = tmp;
}

void stack_double_pop(stack **top) {
    stack *tmp = NULL;
    tmp = (*top)->next->next->next;
    free((*top)->next->next);
    free((*top)->next);
    (*top)->next = tmp;
}

void reverse_stack(stack **src, stack **dest) {
    int err = 0;
    while (1) {
        stack_push(dest, (*src)->value, (*src)->priority, (*src)->type);
        stack_pop(src);
        if (err) break;
        if (!(*src)->next) err = 1;
    }
}

void stack_next_pop(stack **top) {
    stack *tmp = NULL;
    tmp = (*top)->next->next;
    free((*top)->next);
    (*top)->next = tmp;
}

// void print_stack(stack *A) {
//     stack *dno = A;
//     while (dno != NULL) {
//         printf("%Lf\n", dno->value);
//         printf("%d\n", dno->priority);
//         printf("%d\n------------------------------------------
//         --------------------------------------\n", dno->type);
//         if (dno == NULL) break;
//         dno = dno->next;
//         }
// }
