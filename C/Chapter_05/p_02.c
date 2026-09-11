#include<stdio.h>
float avg(int , int , int);

float avg(int a, int b, int c){
    return (a+b+c)/3;
}

int main(){
    int x;
    int y;
    int z;

    printf("Enter the first number: ");
    scanf("%d", &x);
    
    printf("Enter the second number: ");
    scanf("%d", &y);

    printf("Enter the third number: ");
    scanf("%d", &z);

    int p=avg(x, y, z);
    printf("%d is the average of input number.", p);

    return 0;
}