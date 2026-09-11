#include<stdio.h>
int sum(int* , int*);

int sum(int* a , int* b){
    *a=6;
    return *a + *b;
}

int main(){
    int x;
    int y;

    printf("ENter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);

    printf("Sum of x and y is: %d \n", sum(&x, &y));
    printf("Bcz the value of x has been changed to %d", x);

    return 0;
}