#include<stdio.h>
    int main(){
        int num;
        int x; 
        int y;
        int z=0;
        
        printf("Enter the number: ");
        scanf("%d", &num);

        x=num;
        while(x!=0){
            y=x%10;
            x=x/10;
            z=z+y;
        }
        printf("The sum of digits of the number %d is: %d", num, z);

        return 0;
    }