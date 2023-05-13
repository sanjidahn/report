#include <stdio.h>

int main() {
    // Step 1: Read the input
    int withdrawal_amount;
    printf("Enter the amount to be withdrawn: ");
    scanf("%d", &withdrawal_amount);

    // Step 2: Initialize the number of notes of each denomination to zero
    int num_100_notes = 0;
    int num_50_notes = 0;
    int num_10_notes = 0;
    int num_5_notes = 0;
    int num_1_notes = 0;

    // Step 3-5: Find the number of notes of each denomination
    while (withdrawal_amount > 0) {
        if (withdrawal_amount >= 100) {
            withdrawal_amount -= 100;
            num_100_notes++;
        }
        else if (withdrawal_amount >= 50) {
            withdrawal_amount -= 50;
            num_50_notes++;
        }
        else if (withdrawal_amount >= 10) {
            withdrawal_amount -= 10;
            num_10_notes++;
        }
        else if (withdrawal_amount >= 5) {
            withdrawal_amount -= 5;
            num_5_notes++;
        }
        else {
            withdrawal_amount -= 1;
            num_1_notes++;
        }
    }

    // Step 6: Output the number of notes of each denomination
    printf("Number of 100 notes: %d\n", num_100_notes);
    printf("Number of 50 notes: %d\n", num_50_notes);
    printf("Number of 10 notes: %d\n", num_10_notes);
    printf("Number of 5 notes: %d\n", num_5_notes);
    printf("Number of 1 notes: %d\n", num_1_notes);

    return 0;
}
