#include<stdio.h>
    void main(){
        int x;
        int n;

        printf("Enter an integer: ");
        scanf("%d", &x);

        for(n=10; n>=1; n--){
            printf("%d X %d = %d \n", x, n, x*n);
        }
    }