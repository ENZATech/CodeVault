#include<stdio.h>
int main(){
    int x;
    int y;
    int a;
    int b;

    //Number Pattern 28;
    printf("Enter the number: ");
    scanf("%d", &x);

    int n=0;
    while(n<x){
        int m=0;
        a=x;
        while(m<n+1){
            printf("%d", a);
            a=a-1;
            m++;
        }
        printf("\n");
        n++;
    }
    return 0;
}