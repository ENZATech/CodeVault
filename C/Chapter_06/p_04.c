#include<stdio.h>
int ref(int*, int*);

int ref(int* a, int* b){
    *b=*a;
}

int main(){
    int x;
    int y;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Now y have an garbage value i.e. %d \n", y);
    ref(&x, &y);
    printf("Now after using the ref function value of y is: %d \n", y);

    return 0;
}