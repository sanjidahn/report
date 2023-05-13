#include <stdio.h>

int main() {
    int amount, count_100, count_50, count_10, count_5, count_1;
    printf("Enter the amount to withdraw: ");
    scanf("%d", &amount);
    count_100 = amount / 100;
    amount %= 100;
    count_50 = amount / 50;
    amount %= 50;
    count_10 = amount / 10;
    amount %= 10;
    count_5 = amount / 5;
    amount %= 5;
    count_1 = amount;
    printf("Number of 100 notes: %d\n", count_100);
    printf("Number of 50 notes: %d\n", count_50);
    printf("Number of 10 notes: %d\n", count_10);
    printf("Number of 5 notes: %d\n", count_5);
    printf("Number of 1 notes: %d\n", count_1);
    return 0;
}
