#include <stdio.h>

int main() {
    int base, exp, result = 1;
    
    do {
        printf("Enter non-zero values for base and exponent:\n");
        scanf("%d %d", &base, &exp);
    } while (base == 0 && exp == 0);
    
    while (exp != 0) {
        result *= base;
        --exp;
    }
    
    printf("Result: %d\n", result);
    return 0;
}
