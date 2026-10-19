// Finding power of a number using recursion;
#include<stdio.h>

int power(int, int );
int power(int a, int b){
    if(b==0){
        return 1;
    }

    b--;
    return power(a, b) * a;
}

int main(){
    int x;
    int y;

    printf("Enter the base: ");
    scanf("%d", &x);

    printf("Enter the power: ");
    scanf("%d", &y);

    printf("Your result: %d", power(x, y));

    return 0;
    
}