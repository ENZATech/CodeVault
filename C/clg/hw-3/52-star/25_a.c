#include<stdio.h>
int main(){
    int x;
    int y;
    
    // Right Arrow Star Pattern;
    printf("Enter the number: ");
    scanf("%d", &x);

    int i=2*x-1;
    int n=0;
    while(n<i){
        int j;
        int k;
        if(n<x){
            j=n;
            k=x-n;
        }
        else if(n>x-1){
            j=i-n-1;
            k=n-x+2;
        }
        while(j>0){
            printf("  ");
            j--;
        }
        while(k>0){
            printf("*");
            k--;
        }
        printf("\n");
        n++;
    }
    return 0;
}