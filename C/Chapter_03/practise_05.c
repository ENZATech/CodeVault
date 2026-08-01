#include<stdio.h>
int main(){
    char x;

    printf("Enter an alphabetic character: ");
    if(scanf(" %c", &x) != 1){
        return 1;
    }

    if(x >= 'a' && x <= 'z'){
        printf("You have typed a lower case character.\n");
    }
    else if(x >= 'A' && x <= 'Z'){
        printf("You have typed an UPPER CASE character.\n");
    }
    else{
        printf("I have told you to type an alphabetic character...!!!\n");
    }

    return 0;
}