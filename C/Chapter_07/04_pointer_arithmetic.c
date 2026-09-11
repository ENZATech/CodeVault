#include<stdio.h>
int main(){


    // POINTER ARITHMETIC USING INTEGER POINTER.
    int a=5;
    int *ptr=&a;

    printf("The address of a is %u \n", &a);
    printf("The address of a is %u \n", ptr);
    ptr++;
    printf("The value of ptr++ is now: %d \n", ptr);
    printf("\n");

    //POINTER ARITHMETIC USING CHARACTER POINTER.
    char x='A';
    char* ptr_2 = &x;

    printf("The address of a is %u \n", &x);
    printf("The address of x is %u \n", ptr_2);
    ptr_2++;
    printf("The value of ptr_1++ is %d \n", ptr_2);
    printf("\n");

    // POINTER ARITHMETIC USING FLOAT POINTER.
    float p = 2.567;
    float *ptr_3 = &p;

    printf("The address of p is %u \n", &p);
    printf("The address of p is %u \n", ptr_3);
    ptr_3++;
    printf("the value of ptr_3++ is %d", ptr_3);
    
    return 0;
}