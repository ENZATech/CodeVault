#include<stdio.h>
    int main(){
        int x;
        int y = 0;
        int z = 1;
        int a;
        int f;

        printf("Enter the number: ");
        scanf("%d", &x);
        
        for(int n = 1; n<x; n++){
            printf("%d \n", y);
            a=y+z;
            y=z;
            z=a;
            f = a;

        }
        printf("The value of %dth term of Fibonacci sequence is: ", x);
        printf("%d", y);
    }