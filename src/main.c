#include "stack.h"
#include "validation.h"
#include "parser.h"
#include "calculating.h"
#include <stdio.h>

int main() {
    char input[100] = "10*3";
    long double a;
    QT_processing(input, 0, &a);
    printf("%Lf", a);
}

