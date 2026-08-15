#include<stdio.h>
    int main(){
        int x;
        int y;
        float z=0;

        printf("Enter the number: ");
        scanf("%d", &x);

        for(float n=1; n<=x; n++){
            z=z+(1/n);
        }
        printf("The value of first %d is: %f", x, z);

    return 0;
    }