#include<stdio.h>
int main(){
    int x;
    int y;
    int a=0;

    //Number pattern 43;
    printf("Enter the number: ");
    scanf("%d", &x);

    int n=0;
    while(n<x){
        int m=n+1;
        if(n<=x/2){
            a=a+1;
        }
        else if(n>x/2){
            a=a-1;
        }
        while(m>0){
            printf("%d", a);
            m--;
        }
        printf("\n");
        n++;
    }
    return 0;
}