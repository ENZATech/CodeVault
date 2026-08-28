#include<stdio.h>
int main(){
    int x;
    int y;
    int i;
    int z=1;

    // Find Power of a number using While loop.
    printf("Enter the base: ");
    scanf("%d", &x);

    printf("Enter the exponent: ");
    scanf("%d", &y);

    i=y;
    while(i>=1){
        z=z*x;
        i--;
    }
    printf("The value of given input is: %d", z);

    return 0;
}