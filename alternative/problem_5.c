#include <stdio.h>

int main() {
    char c;
    printf("Enter a letter: ");
    scanf("%c", &c);
    printf("Previous letter with ASCII: %c %d, Next letter with ASCII: %c %d\n", c-1, c-1, c+1, c+1);
    return 0;
}
