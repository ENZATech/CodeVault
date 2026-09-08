#include<stdio.h>
int main(){
    int x;
    int d=1;

    // Decimal number system to Octal number system.
    printf("Enter the number: ");
    scanf("%d", &x);

    int t=x;
    while(t/d>=8){
        t=t/8;
        d=d*8;
    }
    t=x;
    while(d>0){
        printf("%d", t/d);
        t=t%d;
        d=d/8;
    }
    return 0;
}