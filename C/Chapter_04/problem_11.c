#include<stdio.h>
    int main(){
        int x;
        int y=1;
        int n=0;
        int z;

        printf("Enter the number: ");
        scanf("%d", &x);
        
        while(x<=n){
            n++;
            z=n/y;
            y=y*10;
        }
        printf("The number of digits in %d is: %d", x, z);

        return 0;
    }