#include<stdio.h>
int main(){
    int x;
    int y;
    int r;

    printf("Check if any number is a pelindrome number.");
    printf("Enter the number: ");
    scanf("%d", &x);

    int a=x;
    while(a!=0){
        y=a%10;
        r=r*10+y;
        a=a/10;
    }
    if (r == x){
        printf("true");
    }
    else{
        printf("false");
    }

}