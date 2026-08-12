#include<stdio.h>
    int main(){
        int x;
        int y;
        int z;

        printf("Type you Physics marks: ");
        scanf("%d", &x);

        printf("Type your Chemistry marks: ");
        scanf("%d", &y);

        printf("Type you Maths marks: ");
        scanf("%d", &z);

        if (x>=0 && y>=0 && z>=0 && x<=100 && y<=100 && z<=100){
            if (x+y+z>=120 && x>=33 && y>=33 && z>=33){
                printf("You are pass");

            }
            else{
                printf("You are fail, Better luck next time.");
            }
        }
        else{
            printf("Invalid marks, Try again");
        }
    }