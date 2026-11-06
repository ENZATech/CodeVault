#include<stdio.h>
int main(){
    int x;
    int a=0;
    int b=0;

    //Number pattern 43;
    printf("Enter the number: ");
    scanf("%d", &x);

    int n=0;
    while(n<x){
        int m=n+1;
        int p=x;
        a=b+1;
        while(m>0){
            printf("%d ", a);
            if(m==n+1){
                b=a;
            }
            p=p-1;
            a=a+p;
            m--;
        }
        printf("\n");
        n++;
    }
    return 0;
}