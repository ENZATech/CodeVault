#include<stdio.h>
int main(){
    int x;
    int y;
    int a;
    
    printf("Enter a number: ");
    scanf("%d", &x);

    int i=0;
    a=x;
    while(a!=0){
        y=a%10;
        a=a/10;
        i++;
    }
    printf("The number of digits in %d is %d", x, i);
}