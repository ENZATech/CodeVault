#include<stdio.h>
    //Function Prototype.
    int sum(int, int);

    //Function definition.
    int sum(int x, int y){
        //printf("The sum is %d", x+y);

        return x+y;
    }

    int main(){
        int x=21;
        int y=32;

        // int c = a+b;
        // printf("The sum is %d", c);
        int c = sum(x,y); //Function call
        printf("%d \n", c);

        int a1 = 456;
        int b1 = 1234;

        int c1 = sum(a1, b1); //Function call
        printf("%d", c1);

        return 0;
    }