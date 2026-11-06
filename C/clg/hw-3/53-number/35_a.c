#include<stdio.h>
int main(){
    int x;
    int y;

    //Number Pattern 28;
    printf("Enter the number: ");
    scanf("%d", &x);

    int n=0;
    while(n<x){
        int m=n+1;
        int a=0;
        while(m>0){
            a=a+1;
            if(a%2!=0){
                printf("1");
                m--;
            }
            else if(a%2==0){
                printf("0");
                m--;
            }
        }
        printf("\n");
        n++;
    }
    return 0;
}