#include<stdio.h>
int main(){
    int x;
    int* y;
    int** z;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    y=&x;
    z=&y;

    printf("After using pointer to pointer the value of x is %d", **z);

    return 0;
}