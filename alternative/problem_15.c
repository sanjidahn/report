#include <stdio.h>
#include <stdlib.h>

void sort(int *arr, int n, int order);
int binarySearch(int *arr, int n, int x);

int main() {
    int n, order, x, *arr;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    arr = (int*) malloc(n * sizeof(int));

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Get the sort order from the user
    do {
        printf("Enter the sort order (0 for increasing, 1 for decreasing): ");
        scanf("%d", &order);
    } while (order != 0 && order != 1);

    // Sort the array
    sort(arr, n, order);

    // Print the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Get the number to search from the user
    printf("Enter the number to search: ");
    scanf("%d", &x);

    // Search for the number in the array using binary search
    int index = binarySearch(arr, n, x);
    if (index != -1) {
        printf("The number %d was found at index %d\n", x, index);
    } else {
        printf("The number %d was not found in the array\n", x);
    }

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}

void sort(int *arr, int n, int order) {
    // Sort the array using bubble sort algorithm
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if ((order == 0 && arr[j] > arr[j+1]) || (order == 1 && arr[j] < arr[j+1])) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int binarySearch(int *arr, int n, int x) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == x) {
            return mid;
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}
