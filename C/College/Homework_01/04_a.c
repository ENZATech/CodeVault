#include<stdio.h>
    int main(){
        char x;

        printf("Enter the character: ");
        scanf("%c", &x);

        if(x>='a' && x<='z'){
            printf("This is an alphabetic character.");
        }
        else{
            printf("Invalid character.!!");
        }
    }