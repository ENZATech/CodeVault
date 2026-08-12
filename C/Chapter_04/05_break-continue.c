#include<stdio.h>
    void main(){
        int i;
        int x;

        for (i = 0; i<=15; i++){

            if(i==5)
                break; // Exits the loop now.!

            printf("The value of i is: %d \n", i);
        }

        for (i = 15; i<=30; i++){

            if(i==20){
                continue; // Skip this iteration now.!
            }
            printf("Value of i is: %d \n", i);
        }
        printf("for loop is done.!");
    }