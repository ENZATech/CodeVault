#include<stdio.h>
    int main(){
        float x;
        float y;
        int z;

        printf("Enter electricity units: ");
        scanf("%f", &x);

        if(x>0 && x<=50){
            y = 0.5*x;
            printf("Your electricity bill is: %f", y);
        }
        else if(x>50 && x<=150){
            y = 0.75*x;
            printf("Your electricity bill is: %f", y);
        }
        else if(x>150){
            y = 1.5*x + (0.2*(1.5*x));
            printf("Your electricity bill is: %f", y);
        }
        else{
            printf("Invalid Input.");
        }
        
        return 0;
    }