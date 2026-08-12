#include<stdio.h>
    void main(){

        int n = 12;

        for (int i=n; i; i--){
            printf("%d \n", i);
        }

        //or

        for (int i=12; i<15; i++){
            printf("The value of i is: %d \n", i);
        }

    }