#include<stdio.h>
int main(){
    long long x;
    long long d=1;
    int r;

    // Decimal Number system to mine own number system;
    printf("Enter the number: ");
    scanf("%lld", &x);

    long long t=x;
    while(t/d>=32){
        //t=t/32;
        d=d*32;
    }
    t=x;
    while(d>0){
        if(t/d>9){
            r=t/d-10+'A';
        }
        else{
            r=t/d+'0';
        }
        printf("%llc", r);
        t=t%d;
        d=d/32;
    }
    return 0;
}