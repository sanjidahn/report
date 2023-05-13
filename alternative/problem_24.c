#include <stdio.h>

union distance {
    int feet;
    float inches;
};

int main() {
    union distance d1, d2, result;
    
    // Read distance 1
    printf("Enter distance 1 in feet and inches: ");
    scanf("%d%f", &d1.feet, &d1.inches);
    
    // Read distance 2
    printf("Enter distance 2 in feet and inches: ");
    scanf("%d%f", &d2.feet, &d2.inches);
    
    // Add the distances
    result.feet = d1.feet + d2.feet;
    result.inches = d1.inches + d2.inches;
    
    // Convert extra inches to feet
    while (result.inches >= 12) {
        result.feet++;
        result.inches -= 12;
    }
    
    // Display the result
    printf("The sum of distances is %d feet %.1f inches.\n", result.feet, result.inches);
    
    return 0;
}
