#include<stdio.h>
    int main(){
        int x;
        int y;
        int z = 1;

        printf("Base: ");
        scanf("%d", &x);

        printf("Exponent: ");
        scanf("%d", &y);

        for(int n=1; n<=y; n++){
            z=z*x;
            //x=z;
        }
        printf("The value of %d^%d is: %d", x, y, z);

        return 0;
    }