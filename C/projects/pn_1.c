#include <stdio.h>

int main() {
    long long x;
    long long x_1;
    // Initialize x_2 to any non-zero value so the outer loop starts
    long long x_2 = -1; 
    long long i = 1;
    int y;

    printf("Enter your number: ");
    // Use %lld to properly read a long long
    scanf("%lld", &x);

    while (x_2 != 0) {
        x_1 = x * i;
        x_2 = x_1;

        while (x_2 != 0) {
            y = x_2 % 10;
            if (y == 0 || y == 1) {
                x_2 = x_2 / 10;
            } else {
                i++;
                break; // Fails the 0/1 check, break to try the next multiple
            }
        }
    }

    printf("The required number is: %lld\n", x_1);
    printf("The multiplier used was: %lld\n", i);

    return 0;
}