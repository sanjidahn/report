#include <stdio.h>
#include <stdlib.h>

int main() {
    int r, c;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int **matrix = (int **)malloc(r * sizeof(int *));
    for (int i = 0; i < r; i++) {
        matrix[i] = (int *)malloc(c * sizeof(int));
    }

    printf("Enter the elements of the matrix: ");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Average of the elements in each column:\n");
    for (int j = 0; j < c; j++) {
        double sum = 0.0;
        for (int i = 0; i < r; i++) {
            sum += matrix[i][j];
        }
        printf("%.2lf ", sum / r);
    }
    printf("\n");

    for (int i = 0; i < r; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
