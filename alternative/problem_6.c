#include <stdio.h>

int main() {
    int num, prev = 41;
    char choice;
    do {
        printf("Enter an integer: ");
        scanf("%d", &num);
        if (num > prev)
            printf("It is greater than %d.\n", prev);
        else if (num < prev)
            printf("It is less than %d.\n", prev);
        else
            printf("It is equal to %d.\n", prev);
        printf("Do you want to continue (y/n)? ");
        scanf(" %c", &choice);
        prev = num;
    } while (choice == 'y' || choice == 'Y');
    return 0;
}
