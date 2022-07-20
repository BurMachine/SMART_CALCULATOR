#include <stdio.h>
#include "validation.h"
#include "stack.h"
#include "parser.h"
#include "calculating.h"

void print_stack(stack *A);

//int main() {
//
//    char input[300] = "1000*(5";
//    long double result = 0;
//    int b = validation(input);
//    printf ("%d\n%Lf",b, result);
//}

//int main() {
//    char input[300] = "10mod8";
//    long double result = 0;
//    int b = QT_processing(input, 0, &result);
//    printf ("%d\n%Lf",b, result);
//}

int main() {
    long double res_sum;
    long double res_over;
    long double res_mounth;
    bank(1000, 12, 0.05, 2, &res_sum, &res_mounth, &res_over, 0);
    printf("%Lf\n%Lf\n%Lf", res_sum, res_mounth, res_over);

}
