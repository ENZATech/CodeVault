#include<stdio.h>
int main(){
    int x;
    int y;
    int z;

    printf("Enter the number: ");
    scanf("%d", &x);

    int i=x;
    int n=0;
    while(n<x){
        int m=x;
        while(m>0){
            int a=x;
            a=a-n;
            int b=1;
            b=b+n;
            if(m==a || m==b){
                printf("1");
            }
            else{
                printf("0");
            }
            m--;
        }
        printf("\n");
        n++;
    }
    return 0;
}