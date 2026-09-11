#include<stdio.h>
int sum(int*, int* );

int sum(int* a, int* b){
    return *a + *b;
}

float avg(int* , int* );

float avg(int* a, int* b){
    return (*a + *b)/2.0;
}

int main(){
    int x;
    int y;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of second number: ");
    scanf("%d", &y);

    printf("The sum of these two numbers is %d \n", sum(&x, &y));
    printf("The average of these two numbers is %0.2f \n", avg(&x, &y));

    return 0;
}