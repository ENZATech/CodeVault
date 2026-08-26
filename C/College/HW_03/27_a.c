#include<stdio.h>
int main(){
    int x;
    int y;
    int z;

    printf("Enter the number to find prime numbers in between 1 to n: ");
    scanf("%d", &x);
    printf("2\n");

    int i=1;

    while(i<x){
        int n=2;
        while(n<i){
            if(i%n!=0){
                n++;
            }
            else{
                n++;
                continue;
            }
        }
        printf("%d \n", i);
        i++;
    }

    return 0;
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
    */ #?