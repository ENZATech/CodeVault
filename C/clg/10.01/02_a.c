#include<stdio.h>
void swap(int, int);
void swap(int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main(){
    int x;
    int y;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    swap(x, y);
    printf("The value of x is: %d \n", x);  //Since it is call by value it won't swap the values.
    printf("The value of y is: %d \n", y);  //Since it is call by value it won't swap the values.

    return 0;
}