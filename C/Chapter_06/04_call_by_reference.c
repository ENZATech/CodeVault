#include<stdio.h>

int sum(int* ,int*);

int sum(int*a, int*b){
    *a=6;
    return (*a + *b);
}
int main(){
    int x;
    int y;

    x=1;
    y=8;
    printf("The sum of x and y is: %d \n", sum(&x , &y));
    printf("The value of x is: %d", x);
    return 0;
}