#include<stdio.h>
int main(){
    int x;
    int y=1;
    int a=0;
    int b=0;

    //Number pattern 43;
    printf("Enter the number: ");
    scanf("%d", &x);

    int n=0;
    int m=0;
    while(n<x){
        m=m+y;
        y=2*y;
        while(m>0){
            a=a+1;
            if(a>9){
                a=1;
            }
            printf("%d ", a);
            m--;
        }
        printf("\n");
        n++;
    }
    return 0;
}