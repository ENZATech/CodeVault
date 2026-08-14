#include <stdio.h>

int main() {
    int n;           // The target limit entered by the user
    int count = 1;   // Our counter, starting at the first natural number (1)
    int sum = 0;     // The "bucket" that holds our running total, starting at 0

    // 1. Ask the user for the limit
    printf("Enter the number of first natural numbers to sum: ");
    scanf("%d", &n);

    // 2. The while loop condition
    // "As long as our counter is less than or equal to the user's limit, keep going!"
    while (count <= n) {
        sum = sum + count;  // Add the current number into the sum bucket
        count++;            // Increase the counter by 1 to move to the next number
    }

    // 3. Print the final result outside the loop
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}