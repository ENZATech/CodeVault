#include<stdio.h>
    int main() {

        /*
       Program: 03_Input.c
       Dated: 2024-06-10
       author: Aayush Pd
       */
        
        int a;
        scanf("%d", &a);                        // Input from user
        printf("the value of a is %d ", a);     // Output to user

             // Note: &a is the address of variable a, which is required for scanf to store the input value in the variable a.
             // The %d format specifier is used to read an integer value from the user and store it in the variable a.
             // %d = format specifier for integer input
             // %f = format specifier for float input
             // %c = format specifier for character input
             
             int x;
             x = 6;

             float y= 1.76;

             char z;
             z = 'a';

             printf("the value of x is %d \n", x);
             printf("the value of y is %f \n", y);
             printf("the value of z is %c \n", z);

             
             printf("the value of x is %d \n", x);
             printf("the value of y is %f \n", y);
             printf("the value of z is %c \n", z);

    return 0;
    }