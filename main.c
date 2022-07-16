#include <stdio.h>
#include "validation.h"
#include "stack.h"
#include "parser.h"

void print_stack(stack *A);

//int main() {
//    stack *A = NULL;
//    stack_push(&A, 123.123, 1, 3);
//    stack_push(&A, 0.0, 0, 0);
//    stack_push(&A, 1.0, 0, 0);
//    stack_push(&A, 2.0, 0, 0);
//    print_stack(A);
//
//}

int main() {
    stack *A = NULL;
    char a[256] = "atan(1)+ sqrt(1 + 1)";
    parser(a, &A);
    print_stack(A);
}




