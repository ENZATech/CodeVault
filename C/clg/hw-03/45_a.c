// Decimal number system to binary number system conversion.
#include<stdio.h>
int main(){
    int x;
    int d=1;

    printf("Enter the Decimal number: ");
    scanf("%d", &x);

    int t=x;
    while(t>=2){
        t=t/2;
        d=d*2;
    }
    t=x;
    printf("Binary number: ");
    while(d>0){
        printf("%d", t/d);
        t=t%d;
        d=d/2;
    }

    return 0;
}