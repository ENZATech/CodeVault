#include<stdio.h>
int main(){
    int x;
    int y;

    //Number Pattern 28;
    printf("Enter the number: ");
    scanf("%d", &x);

    int n=0;
    while(n<x){
        int a=0;
        int m=2*n+1;
        while(m>0){
            a=a+1;
            printf("%d", a);
            m--;
        }
        printf("\n");
        n++;
    }
    return 0;
}