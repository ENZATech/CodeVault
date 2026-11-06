#include<stdio.h>
    int main(){
        int x;

        printf("Enter day number: ");
        scanf("%d", &x);

        if(x >= 1 && x <= 7){
            if(x==1){
                printf("The day is Monday.");
            }
            else if(x==2){
                printf("The day is Tuesday.");
            }
            else if(x==3){
                printf("The day is Wednesday.");
            }
            else if(x==4){
                printf("The day is Thursday.");
            }
            else if(x==5){
                printf("The day is Friday.");
            }
            else if(x==6){
                printf("The day is Saturday.");
            }
            else if(x==7){
                printf("The day is Sunday.");
            }
        }
        else{
            printf("Enter a number between 1 to 7");
        }
    }