#include<stdio.h>

void swap(int*, int*);

void swap(int* a, int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int x=5;
    int y=10;

    swap(&x, &y);
    printf("The value of each variable has been swappped, x = %d & y = %d", x, y);

    return 0;
}