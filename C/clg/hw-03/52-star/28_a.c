#include<stdio.h>
int main(){
    int x;
    int y;

    // X star Pattern;
    printf("Enter the number: ");
    scanf("%d", &x);

    int i=2*x-1;
    int n=0;
    while(n<i){
        int j;
        int k;
        int l;
        if(n<x){
            j=n+1;
            k=i-2*n-1;
        }
        else if(n>=x){
            j=i-n;
            k=2*n-x-3;
        }
        while(j>0){
            printf(" ");
            j--;
            if(j==0){
                printf("*");
            }
        }
        while(k>0){
            printf(" ");
            k--;
            if(k==1){
                printf("*");
            }
        }
        printf("\n");
        n++;
    }
    return 0;
}