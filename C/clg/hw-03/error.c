#include <stdio.h>

int main() {
    int x;
    int y;

    printf("Enter the Decimal Number: ");
    scanf("%d", &x);

    int n = 1;

    // Special case for 0
    if (x == 0) {
        printf("0");
        return 0;
    }

    // Step 1: Find the highest place value of 16 that fits into x
    while (x / n >= 16) {
        n = n * 16;
    }

    // Step 2: Extract and print digits from left to right
    while (n != 0) {
        y = x / n;    // Extracts the leftmost digit
        x = x % n;    // Keeps the remaining part of the number
        n = n / 16;   // Moves to the next place value down

        if (y <= 9) {
            printf("%d", y);
        }
        else if (y == 10) {
            printf("A");
        }
        else if (y == 11) {
            printf("B");
        }
        else if (y == 12) {
            printf("C");
        }
        else if (y == 13) {
            printf("D");
        }
        else if (y == 14) {
            printf("E");
        }
        else if (y == 15) {
            printf("F");
        }
    }

    printf("\n");
    return 0;
}