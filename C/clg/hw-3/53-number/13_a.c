#include<stdio.h>
int main(){
    int x;
    int y;
    int a=1;
    int b=0;

    printf("Enter the number: ");
    scanf("%d", &x);

    int i=x;
    int n=0;
    while(n<x){
        int m=x;
        b=a;
        while(m>0){
            b=b+1;
            printf("%d ", a);
            a=b;
            m--;
        }
        printf("\n");
        n++;
    }
    return 0;
}