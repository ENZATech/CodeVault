#include<stdio.h>
    int main(){
        int x; 
        int y;
        int z;

        printf("Enter the number: ");
        scanf("%d", &x);

        printf("The reversed number is: ");
        while(x!=0){
            y=x%10;
            x=x/10;

            printf("%d", y);
        }
    return 0;
    }