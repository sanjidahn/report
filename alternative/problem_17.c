#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    float *heights, tallest = 0, shortest = 1000000;

    // Input the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Allocate memory dynamically for the heights
    heights = (float *) malloc(n * sizeof(float));

    // Input the heights and find the tallest and shortest
    for (int i = 0; i < n; i++) {
        printf("Enter the height of student %d: ", i+1);
        scanf("%f", &heights[i]);

        if (heights[i] > tallest) {
            tallest = heights[i];
        }

        if (heights[i] < shortest) {
            shortest = heights[i];
        }
    }

    // Calculate and print the height difference
    float diff = tallest - shortest;
    printf("Height difference between the tallest and shortest student: %.2f cm\n", diff);

    // Free the allocated memory
    free(heights);

    return 0;
}
