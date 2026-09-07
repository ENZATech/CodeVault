#include<stdio.h>
int main(){
    int x;
    int y;

    //Number pattern 43;
    printf("Enter the number: ");
    scanf("%d", &x);

    int n=0;
    while(n<x){
        int m=2*n+1;
        int a=0;
        int b=0;
        while(m>0){
            if(m>=n+1){
                a=a+1;
                printf("%d", a);
                m--;
            }
            else if(m<n+1){
                a=a-1;
                printf("%d", a);
                m--;
            }
        }
        printf("\n");
        n++;
    }
    return 0;
}