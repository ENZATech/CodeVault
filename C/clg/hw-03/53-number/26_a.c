#include<stdio.h>
int main(){
    int x;
    int y;
    int a=0;
    int b=0;

    //Number Pattern 26;
    printf("Enter the number: ");
    scanf("%d", &x);

    int n=0;
    while(n<x){
        int m=0;
        a=b+1;
        while(m<n+1){
            printf("%d", a);
            a=a-1;
            m++;
        }
        printf("\n");
        n++;
        b=n;
    }
}