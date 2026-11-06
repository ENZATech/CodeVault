#include<stdio.h>
int main(){
    int x;
    int y;
    int b=0;
    //Number Pattern 24;
    printf("Enter the number: ");
    scanf("%d", &x);

    int n=0;
    while(n<x){
        int m=n+1;
        int a=1;
        while(m>0){
            printf("%d ", a);
            a=a+1;
            m--;
        }
        printf("\n");
        n++;
    }

}