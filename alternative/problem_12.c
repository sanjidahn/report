#include <stdio.h>

int main() {
    char str[100];
    int i, len, is_palindrome = 1;
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    // find the length of the string
    for (len = 0; str[len] != '\0'; len++);
    
    // compare the characters from both ends
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            is_palindrome = 0;
            break;
        }
    }
    
    if (is_palindrome) {
        printf("%s is a palindrome\n", str);
    } else {
        printf("%s is not a palindrome\n", str);
    }
    
    return 0;
}
