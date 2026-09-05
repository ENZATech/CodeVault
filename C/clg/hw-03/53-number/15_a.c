#include<stdio.h>
int main(){
    int x;
    int y;
    int a;
    int b;
    // Number pattern 15;
    printf("ENter the number: ");
    scanf("%d", &x);

    int i=x;
    int n=0;
    while(n<x){
        int m=x;
        int p=x-n;
        while(m>0){
            a=0;
            while(p>1){
                a=a+1;
                printf("%d", a);
                p--;
                m--;
                b=a;
            }
            printf("%d", x);
            m--;
        }
        printf("\n");
        n++;
    }
    return 0;
}