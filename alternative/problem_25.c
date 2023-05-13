#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char filename[50];
    char ch;
    int num_chars = 0, num_words = 0;

    printf("Enter the name of the file to create: ");
    scanf("%s", filename);

    fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Error opening file %s\n", filename);
        exit(1);
    }

    printf("Enter some text to write to the file:\n");
    while ((ch = getchar()) != '\n') {
        fputc(ch, fp);
        num_chars++;
        if (ch == ' ') {
            num_words++;
        }
    }
    fclose(fp);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file %s\n", filename);
        exit(1);
    }

    while ((ch = fgetc(fp)) != EOF) {
        num_chars++;
        if (ch == ' ') {
            num_words++;
        }
    }
    fclose(fp);

    printf("Number of characters in file: %d\n", num_chars);
    printf("Number of words in file: %d\n", num_words + 1);

    return 0;
}
