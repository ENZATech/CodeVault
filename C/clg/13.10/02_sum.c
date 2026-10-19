// Sm of first n natural number using recursion;
#include<stdio.h>

int sum(int );
int sum(int a){
    if(a==0){
        return 0;
    }
    
    return a + sum(a-1);
}

int main(){
    int x;
    int y;

    printf("Enter the number: ");
    scanf("%d", &x);

    printf("Sum of first %d num is: %d", x, sum(x));

    return 0;
}