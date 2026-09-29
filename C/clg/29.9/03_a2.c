#include <stdio.h>

int sum(int a, int b) {
    return b + a; // Return the updated total
}

int main() {
    int x;
    int y = 0;

    printf("Enter the numbers you wanna sum.\n\n");

    // A do-while loop ensures the prompt runs before checking x != 0
    do {
        printf("Enter the number (0 to exit): ");
        scanf("%d", &x);
        
        y = sum(x, y); // Update y with the returned result

    } while (x != 0);

    printf("The sum of all numbers is: %d\n", y);

    return 0;
}

// Asked from Gemini.