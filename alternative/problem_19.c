#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j, sum = 0;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int **matrix = (int **)malloc(n * sizeof(int *)); // Dynamically allocate memory for matrix
    for (i = 0; i < n; i++) {
        matrix[i] = (int *)malloc(n * sizeof(int));
    }

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            if (i == j) { // Calculate sum of diagonal elements
                sum += matrix[i][j];
            }
        }
    }

    printf("The matrix is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("The sum of diagonal elements is: %d\n", sum);

    // Free the dynamically allocated memory
    for (i = 0; i < n; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
