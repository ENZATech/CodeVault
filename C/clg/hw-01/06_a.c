#include<stdio.h>
    int main(){
        char x;

        printf("Enter a character: ");
        scanf("%c", &x);

        if(x>='a' && x<='z' || x>='A' && x<='Z'){
            printf("%c is an alphabetic character.", x);
        }
        else if(x>='0' && x<='9'){
            printf("This is a numerical character.", x);
        }
        else{
            printf("This is an Special Character.!!");
        }
    }