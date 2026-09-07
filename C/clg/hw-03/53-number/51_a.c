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
        while(m>0){
            if(n%2==0){
                a=a+1;
                printf("%d ", a);
                b=a+n+2;
                m--;
            }
            else if(n%2!=0){
                printf("%d ", b);
                b=b-1;
                a=b+n+1;
                m--;
            }
        }
        printf("\n");
        n++;
    }
    return 0;
}