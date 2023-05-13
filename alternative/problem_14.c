#include <stdio.h>

void delVowel(char* str) {
    char* ptr = str;
    while (*ptr != '\0') {
        if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u' ||
            *ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U') {
            char* temp = ptr;
            while (*temp != '\0') {
                *temp = *(temp + 1);
                temp++;
            }
        } else {
            ptr++;
        }
    }
}

int main() {
    char str[51];
    printf("Enter a sentence (maximum 50 characters): ");
    fgets(str, 51, stdin);
    printf("Original string: %s", str);
    delVowel(str);
    printf("String without vowels: %s", str);
    return 0;
}
