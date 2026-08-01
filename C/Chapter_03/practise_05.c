#include <stdio.h>

int main() {
    int x;
    char y;
    
    printf("Enter a character: ");
    scanf("%d" || "%c", &x, &y);

    if(x >= '0' && x <= '9'){
        if (x >= '0' && x <= '9') {
        printf("You have typed a numerical character: %d\n", x);
        }
    }
    else if(x >= 'a' && x <= 'z' || x >= 'A' && x <= 'Z'){
        if (x >= 'a' && x <= 'z') {
        printf("You have typed a lower case alphabetic character: %c\n", x);
        }

        else if (x >= 'A' && x <= 'Z') {
            printf("You have typed an UPPER CASE alphabetic character: %c\n", x);
        }
    }
    else {
        printf("Invalid / Special character\n");
    }

    return 0;
}

// #include<stdio.h>
// int main(){
//     char x;
//     
//     printf("Enter a character: ");
//     scanf(" %c", &x);
//     
// 
//     if(x >= 'a' && x <= 'z'){
//         printf("You have typed a lower case alphabetic character. i.e., %d \n", x);
//     }
//     else if(x >= 'A' && x <= 'Z'){
//         printf("You have typed an UPPER CASE aplhabetic character. i.e., %d \n", x);
//     }
//     else if(x >= 0 && x <= 9){
//         printf("You have typed a numerical character. i.e., %c \n", x);
//     }
//     else{
//         printf("Invalid / special character\n");
//     }
// 
//     return 0;
// }

