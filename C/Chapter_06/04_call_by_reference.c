#include<stdio.h>
int sum(int* , int*);

int sum(int* a, int* b){
    *a=6;
    return (*a + *b);
}

int main(){
    int x;
    int y;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);
    
    printf("The sum of x and y is: %d \n", sum(&x, &y));
    printf("The value of x has been changed to: %d \n", x);
}