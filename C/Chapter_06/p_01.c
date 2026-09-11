#include<stdio.h>
int main(){
    int x;
    int* y;

    printf("Enter the value of x: ");  
    scanf("%d", &x);

    y=&x;
    printf("The address of x is: %p \n", y);
    printf("The address of x is: %p \n", &x);
    printf("The address of x is: %d \n", *y);

    return 0;
}