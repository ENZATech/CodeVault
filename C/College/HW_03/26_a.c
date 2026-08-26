#include<stdio.h>
int main(){
    int x;
    int y;
    int z;

    printf("Enter the number to check weather prime or not: ");
    scanf("%d", &x);

    int n=2;
    while(n<x-1){
        if(x%n==0){
            printf("The given number is NOT a prime.");
            break;
        }
        else{
            n++;
            continue;
        }

    }
    if(x%n!=0){
        printf("The given number is a prime number");
    }
    
    return 0;
}