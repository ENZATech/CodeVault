#include<stdio.h>
    void main(){
        int x;
        int y = 0;
        int n = 1;

        printf("Enter the number of first natural numbers: ");
        scanf("%d", &x);

        /*
        for(n=1; n<=x; n++){
            printf("Sum of first %d natural numbers is: %d", x, x*(x+1)/2);
        }
        */

        while(x>=n){
            y = y + n;
            n++;
        }
        printf("Sum of first %d natural numbers: %d \n",x , y);


    }