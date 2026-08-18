#include <stdio.h>

int main() {
    int x = 1;
    int y = 0;
    int n;
    int sum = 0;

    printf("Enter the number of first natural numbers: ");
    scanf("%d", &n);

    // As long as our target (x) is greater than or equal to our counter (n)
    while(x <= n) {
        sum = sum + x;  // Add the current number to our total sum
        x++;          // Increase the counter by 1
    }

    // Print the final result OUTSIDE the curly braces
    printf("Sum of first %d natural numbers: %d \n", n, sum);

    return 0; // Always a good habit to return 0 in main!
}