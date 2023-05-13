#include <stdio.h>

int binaryToDecimal(unsigned long long int);

int main() {
    unsigned long long int binaryNumber;
    printf("Enter a binary number: ");
    scanf("%llu", &binaryNumber);
    printf("Decimal equivalent: %d\n", binaryToDecimal(binaryNumber));
    return 0;
}

int binaryToDecimal(unsigned long long int binaryNumber) {
    int decimalNumber = 0, remainder = 0, i = 0;
    while (binaryNumber != 0) {
        remainder = binaryNumber % 10;
        binaryNumber /= 10;
        decimalNumber += remainder * (1 << i);
        ++i;
    }
    return decimalNumber;
}
