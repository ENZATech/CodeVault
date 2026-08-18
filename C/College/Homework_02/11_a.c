#include<stdio.h>
int main(){
    int x;
    int y;
    int sum=0;

    printf("Enter the number to find the sum of squares of its digits: ");
    scanf("%d", &x);
    int i=x;

    while(x!=0){
        y=x%10;
        sum=sum + y*y;
        x=x/10;

    }
    printf("The sum of squares of digits of %d is: %d", i, sum);

    return 0;
}