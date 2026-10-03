//Stone-Paper-Scissor;
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int x;
    int y;
    char z;

    printf("\n--- Welcome ---\n\n");
    printf("Enter stone, paper or scissors: ");
    scanf("%c", &x);
    printf("%c \n", x);

    srand(time(0));
    y = (rand() % 3) + 1;

    printf("%d", y);
/*
    if(y==1){
        z='stone';
    }
    else if(y==2){
        z='paper';
    }
    else if(y==3){
        z='scissors';
    }

    if(x==z){
        printf("You won.!");
    }
*/
    return 0;
}