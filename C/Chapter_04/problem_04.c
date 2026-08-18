#include<stdio.h>
    int main(){
        int x = 0;
        int y;
        int n;


        // Write a program to sum first 10 natural numbers using for loop.
        
        for(int n=1; n<=10; n++){
            x = x + n;
        }
        printf("The sum of first 10 natural numbers is: %d", x);

        return 0;
    }