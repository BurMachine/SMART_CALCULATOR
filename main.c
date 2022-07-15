#include <stdio.h>
#include "validation.h"

int main() {
    char a[255] = "mod(1)*mod(1)";
    int b = validation(a);
    printf("%d", b);
}
