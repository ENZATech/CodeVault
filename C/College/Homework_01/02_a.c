#include<stdio.h>
    int main(){
        int x;
        int y;
        int z;

        printf("Enter the number: ");
        scanf("%d", &x);

        if(x<0){
            printf("%d is a negative integer.", x);
        }
        else if(x>0){
            printf("%d is a positive integer.", x);
        }
        else if(x==0){
            printf("%d is a zero.", x);
        }
        else{
            printf("Invalid character.!!");
        }

    }