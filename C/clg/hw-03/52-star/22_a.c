#include<stdio.h>
int main(){
    int x;
    int y;
    
    //Diamond Star pattern;
    printf("Enter the number: ");
    scanf("%d", &x);

    int i=2*x-1;
    int n=0;
    while(n<i){
        int j;
        int k;
        if(n<x){
            j=x-n-1;
            k=n+1;
        }
        else if(n>=x){
            j=n-x+1;
            k=i-n;
        }
        while(j>0){
            printf(" ");
            j--;
        }
        while(k>0){
            printf("* ");
            k--;
        }
        printf("\n");
        n++;
    }
    return 0;
}