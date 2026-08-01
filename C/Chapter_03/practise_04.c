#include<stdio.h>
    int main()
    {
        int x;

        printf("Enter year: ");
        scanf("%d", &x);

        if((x % 100) != 0 || (x % 400) == 0){  
            if((x % 4) == 0){
                printf("This year is a leap year!");

            }
            else{
                printf("This is not a Leap year.");
            }
        }
        else{
            printf("This is not a leap year.");
        }
            
    }