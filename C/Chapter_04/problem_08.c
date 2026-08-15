#include<stdio.h>
    int main(){
        int x;
        int y = 0;
        int z = 1;
        int f;

        printf("Enter the number: ");
        scanf("%d", &x);
        
        for(int n = 1; n<=x; n++){
            printf("%d \n", y);
            f=y+z;
            y=z;
            z=f;

        }
    }