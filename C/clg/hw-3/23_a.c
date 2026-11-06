#include<stdio.h>
int main(){
    int x;
    int y=1;
    int z;

    printf("Enter the number: ");
    scanf("%d", &x);

    int i=x;
    while(i>=1){
        y=y*i;
        i--; 
    }
    printf("The factorial of %d is %d", x, y);

    return 0;
}