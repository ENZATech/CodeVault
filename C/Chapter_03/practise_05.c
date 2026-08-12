#include<stdio.h>
int main(){
    char x;
    
    printf("Enter a character: ");
    scanf("%c", &x);
    

    if(x >= 'a' && x <= 'z'){
        printf("You have typed a lower case alphabetic character. i.e., %c \n", x);
    }
    else if(x >= 'A' && x <= 'Z'){
        printf("You have typed an UPPER CASE aplhabetic character. i.e., %c \n", x);
    }
    else if(x >= '0' && x <= '9'){
        printf("You have typed a numerical character. i.e., %c \n", x);
    }
    else{
        printf("Invalid / special character\n");
    }

    return 0;
}
