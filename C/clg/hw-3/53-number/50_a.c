#include<stdio.h>
int main(){
    int x;
    int y;
    int z;

    //Number pattern 43;
    printf("Enter the number: ");
    scanf("%d", &x);

    int n=0;
    int a=1;
    int b=0;
    while(n<x){
        int m=n+1;
        while(m>0){
            a=a+b;
            b=b+1;
            printf("%d ", a);
            m--;
        }
        printf("\n");
        n++;
    }
    return 0;
}