#include<stdio.h>
int main(){
    int x;
    int y;
    int a;

    //Number Pattern 28;
    printf("Enter the number: ");
    scanf("%d", &x);

    int n=0;
    while(n<x){
        int m=x-n;
        a=n+1;
        while(m>0){
            printf("%d", a);
            a=a+1;
            m--;
        }
        printf("\n");
        n++;
    }
    return 0;
}