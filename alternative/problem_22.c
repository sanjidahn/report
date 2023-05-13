#include <stdio.h>

int largest(int x[], int n);

int main() {
    int arr[] = {3, 5, 2, 7, 1, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Largest element: %d\n", largest(arr, n));

    return 0;
}

int largest(int x[], int n) {
    if (n == 1) {
        return x[0];
    }

    int max = largest(x, n - 1);
    return x[n - 1] > max ? x[n - 1] : max;
}
