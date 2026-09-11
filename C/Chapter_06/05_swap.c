#include<stdio.h>

int swap(int*, int*);

int swap(int* a, int* b){
    int t=*a;
    *a=*b;
    *b=t;
}

int main(){
    int x;
    int y;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    swap(&x, &y);
    printf("The value of each variable has been swappped, x = %d & y = %d", x, y);

    return 0;
}