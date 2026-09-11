#include<stdio.h>

int ret(int*);

int ret(int* y){
    printf("The value of pointer y is %d \n", y);
    printf("The value at pointer y is %d", *y);
    return 5;
}

int main(){
    int x;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    int* y=&x;

    printf("The address of x is %u \n", &x);
    ret(y);
    return 0;
}