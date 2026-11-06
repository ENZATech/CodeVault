#include<stdio.h>
int main(){
    long long x;
    long long d=1;
    int r;

    // Decimal Number system to Mine own number system;
    printf("Enter the number: ");
    scanf("%lld", &x);

    long long t=x;
    while(t/d>=64){
        d=d*64;
    }
    t=x;
    while(d>0){
        if(t/d<10){
            r=t/d+'0';
        }
        else if(t/d>9 && t/d<36){
            r=t/d-10+'A';
        }
        else if(t/d>=36){
            r=t/d-36+'a';
        }
        else if(t/d==62){
            r='+';
        }
        else if(t/d==63){
            r='_';
        }
        printf("%c", r);
        t=t%d;
        d=d/64;
    }
    return 0;
}