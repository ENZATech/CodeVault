#include<stdio.h>
int main(){
    int x;
    int y;
    int a=0;
    int b=0;

    printf("Enter the number: ");
    scanf("%d", &x);

    int i=x;
    int n=0;
    while(n<x){
        int m=x;
        a=b;
        while(m>0){
            a=a+1;
            printf("%d", a);
            m--;
        }
        b=b+1;
        printf("\n");
        n++;
    }
    return 0;
}