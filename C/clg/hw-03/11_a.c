#include<stdio.h>
int main(){
    int x;
    int y;
    int z;
    int rev=0;
    int p;
    int q;

    printf("Enter the number: ");
    scanf("%d", &x);

    p=x%10;

    int a=x;
    while(a!=0){
        z=a%10;
        a=a/10;
        rev=rev*10;
        rev = rev + z;

    }
    q=rev%10;

    printf("The first and last digit of %d is: %d, %d respectively. \n", x, q, p);

    return 0;
}