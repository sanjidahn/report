#include <stdio.h>
#include <stdlib.h>

void insert(int *arr, int *size) {
    int element, position, i;

    printf("Enter the element you want to insert: ");
    scanf("%d", &element);

    printf("At which position? ");
    scanf("%d", &position);

    if (position <= 0 || position > *size + 1) {
        printf("Invalid position.\n");
        return;
    }

    *size += 1;
    arr = (int *)realloc(arr, (*size) * sizeof(int));

    for (i = *size - 1; i >= position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position - 1] = element;

    printf("After insertion, the elements are: ");
    for (i = 0; i < *size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void delete(int *arr, int *size) {
    int element, i, j;

    printf("Enter the element you want to delete: ");
    scanf("%d", &element);

    for (i = 0; i < *size; i++) {
        if (arr[i] == element) {
            for (j = i; j < *size - 1; j++) {
                arr[j] = arr[j + 1];
            }
            *size -= 1;
            arr = (int *)realloc(arr, (*size) * sizeof(int));
            printf("After deletion, the elements are: ");
            for (j = 0; j < *size; j++) {
                printf("%d ", arr[j]);
            }
            printf("\n");
            return;
        }
    }

    printf("Element not found.\n");
}

int main() {
    int *arr, size, i, choice;

    printf("How many elements? ");
    scanf("%d", &size);

    arr = (int *)malloc(size * sizeof(int));

    printf("Enter the elements: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    while (1) {
        printf("Which operation do you want to perform now? (1. Insertion or 2. Deletion)\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            insert(arr, &size);
            break;
        case 2:
            delete(arr, &size);
            break;
        default:
            printf("Sorry! Invalid choice.\n");
            break;
        }
    }

    free(arr);
    return 0;
}
