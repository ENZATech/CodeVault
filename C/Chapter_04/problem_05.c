#include<stdio.h>
    int main(){
        int x = 0;
        int n;
        int sum;

        // Write a program to sum first 10 natural number using do-while loop.

        do{
            x = x + n;
            n++;

        }while(n<=10);
        printf("The sum of first 10 natural numbers is %d", x);

        return 0;
    }