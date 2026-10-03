#include<stdio.h>

void swap(int *, int *);
void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int x;
    int y;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    swap(&x, &y);

    printf("Now, the value of x is: %d \n", x);    //Here call by reference is used, swap will work fine.
    printf("Now, the value of y is: %d \n", y);    //Here call by reference is used, swap will work fine.

    return 0;
}