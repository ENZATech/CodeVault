#include<stdio.h>
int main(){
    int x;
    int a=0;

    // Number pattern 20;
    printf("Enter the number: ");
    scanf("%d", &x);

    int i=x;
    int n=0;
    while(n<x){
        int m=x;
        int p=x-n;
        int q=n+1;
        while(m>0){
            a=a+1;
            while(p>1){
                printf(" ");
                m--;
                p--;
            }
            while(q>0){
                printf("%d", a);
                q--;
                m--;
            }
            m--;
        }
        printf("\n");
        n++;
    }
    return 0;
}