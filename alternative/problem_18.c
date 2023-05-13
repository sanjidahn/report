#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, p, q, i, j, k, sum = 0;
    int **a, **b, **result;

    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d%d", &m, &n);

    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d%d", &p, &q);

    if (n != p) {
        printf("Error: The number of columns of the first matrix should be equal to the number of rows of the second matrix.");
        return 0;
    }

    // Allocate memory for the matrices
    a = (int **)malloc(m * sizeof(int *));
    for (i = 0; i < m; i++) {
        a[i] = (int *)malloc(n * sizeof(int));
    }

    b = (int **)malloc(p * sizeof(int *));
    for (i = 0; i < p; i++) {
        b[i] = (int *)malloc(q * sizeof(int));
    }

    result = (int **)malloc(m * sizeof(int *));
    for (i = 0; i < m; i++) {
        result[i] = (int *)malloc(q * sizeof(int));
    }

    // Read the values of the first matrix
    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Read the values of the second matrix
    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Perform matrix multiplication
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < p; k++) {
                sum += a[i][k] * b[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }

    // Print the result
    printf("Result:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    // Free the allocated memory
    for (i = 0; i < m; i++) {
        free(a[i]);
    }
    free(a);

    for (i = 0; i < p; i++) {
        free(b[i]);
    }
    free(b);

    for (i = 0; i < m; i++) {
        free(result[i]);
    }
    free(result);

    return 0;
}
