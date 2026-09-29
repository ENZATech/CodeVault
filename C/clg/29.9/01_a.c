#include<stdio.h>
int sum(int , int );
int sum(int a, int b){
    return a+b;
}

int main(){
    int x;
    int y;
    int z;
    
    printf("Enter first number: ");
    scanf("%d", &x);

    printf("Enter second number: ");
    scanf("%d", &y);

    z=sum(x , y);
    printf("%d", z);

    return 0;
}