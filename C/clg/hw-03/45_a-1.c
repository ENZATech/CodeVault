#include<stdio.h>
int main(){
    int x;
    int d=1;

    printf("enter the number: ");
    scanf("%d", &x);

    int t=x;
    while(t>=2){
        t=t/2;
        d=d*2;
    }
    t=x;
    while("d>0"){
        printf("%d", t/d);
        t=t%d;
        d=d/2;
    }

    return 0;
}