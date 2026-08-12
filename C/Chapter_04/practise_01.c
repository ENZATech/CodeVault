#include<stdio.h>
    void main(){
        int x;
        int n;

        printf("Enter the number: ");
        scanf("%d", &x);

        for(n=1; n<=10; n++){
            printf("%d X %d = %d \n", x, n, x*n);
        }


    }