#include<stdio.h>
int main(){
    int x;
    int y;
    int rev=0;

    printf("Enter the number: ");
    scanf("%d", &x);

    int i=x;
    while(i!=0){
        y=i%10;
        i=i/10;
        rev=rev*10;
        rev=rev+y;
    }
    printf("The reverse fo digits of %d is: %d", x, rev);

    return 0;
}