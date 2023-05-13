#include <stdio.h>

void prime_factors(int n) {
    int i, j;
    printf("Prime factors of %d are: ", n);
    for (i = 2; i <= n; i++) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    prime_factors(n);
    return 0;
}
