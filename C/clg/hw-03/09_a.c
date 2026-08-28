#include<stdio.h>
int main(){
    int x;
    int y=1;
    
    printf("Enter the number to print its table chart: ");
    scanf("%d", &x);

    int i=1;
    while(i<=10){
        y=x*i;
        printf("%d X %d = %d \n", x, i, y);
        i++;
    }
}