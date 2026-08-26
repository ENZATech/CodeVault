#include <stdio.h> 
int main() {
    int x;

    printf("Enter number : ");
    scanf("%d", &x);

    printf("Prime numbers between 1 and %d are :\n", x);

    int n = 2;
    while (n <= x) {
        int prime = 1;

        int i = 2;
        while (i <= n / 2) {
            if (n % i == 0) {
                prime = 0;
                i++;
                break;
            }
            i++;
        }
        if (prime) {
            printf("%d\n", n);
        }
        n++;
    }
}
/*
#include <stdio.h>

int main() {
    int x;

    printf("Enter the number to find prime numbers between 1 and n: ");
    scanf("%d", &x);

    int i = 2; // Prime numbers start at 2

    while (i <= x) {
        int isPrime = 1; // Assume i is prime until proven otherwise
        int n = 2;

        // Check potential factors up to sqrt(i)
        while (n * n <= i) {
            if (i % n == 0) {
                isPrime = 0; // Found a factor, not prime
                break;       // Exit inner loop early
            }
            n++;
        }

        // Print i ONLY after all divisors have been checked
        if (isPrime == 1) {
            printf("%d\n", i);
        }

        i++;
    }

    return 0;
}
    */ 