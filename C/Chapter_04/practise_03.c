#include<stdio.h>
    void main(){
        int x;
        int n;

        printf("Enter the number of first natural numbers: ");
        scanf("%d", &x);

        for(n=1; n<=x; n++){
            printf("Sum of first %d natural numbers is: %d", x, x*(x+1)/2);
        }
    }