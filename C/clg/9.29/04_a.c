#include<stdio.h>

int mult(int , int );
int mult(int a, int b){
    return a*b;
}

int main(){
    int x;
    int y;

    printf("Enter the numbers you wanna multiply: \n");
    printf("First number: ");
    scanf("%d", &x);

    printf("Second number: ");
    scanf("%d", &y);

    printf("The product of given input is: %d", mult(x, y));

    return 0;
}