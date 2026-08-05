#include<stdio.h>
    int main(){
        char x;

        printf("Enter an alphabet: ");
        scanf("%c", &x);

        if(x>='a' && x<='z'){
            printf("%c is an Lower Case Alphabet.", x);
        }
        else if(x>='A' && x<='Z'){
            printf("%c is an Upper Case Alphabet.", x);
        }
        else{
            printf("Invalid / special character.!!");
        }
        
        return 0;
    }