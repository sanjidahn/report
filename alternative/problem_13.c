#include <stdio.h>

void xstrcat(char *str1, char *str2);

int main() {
    char str1[50], str2[50];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    xstrcat(str1, str2);

    printf("The concatenated string is: %s\n", str1);

    return 0;
}

void xstrcat(char *str1, char *str2) {
    while (*str1) {
        str1++;
    }

    while (*str2) {
        *str1 = *str2;
        str1++;
        str2++;
    }

    *str1 = '\0';
}
