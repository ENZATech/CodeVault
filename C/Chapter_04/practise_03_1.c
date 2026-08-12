#include <stdio.h>

int main() {
    int x;
    int y = 0; // Use y as the bucket to hold your sum, starting at 0
    int n = 1;

    printf("Enter the number of first natural numbers: ");
    scanf("%d", &x);

    // As long as our target (x) is greater than or equal to our counter (n)
    while(x >= n) {
        y = y + n;  // Add the current number to our total sum
        n++;        // Increase the counter by 1
    }

    // Print the final result OUTSIDE the curly braces
    printf("Sum of first %d natural numbers: %d \n", x, y);

    return 0; // Always a good habit to return 0 in main!
}