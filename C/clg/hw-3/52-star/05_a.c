#include<stdio.h>
int main(){
    int x;
    int y;
    
    // Hollow Rhombus Star pattern;
    printf("Enter a number: ");
    scanf("%d", &x);

    int i=x;
    int n=0;
    while(n<x){
        int j=x-n;
        int k=x;
        while(j>0){
            printf(" ");
            j--;
        }
        while(k>0){
            if(n==0 || n==x-1 || k==x || k==1){
                printf("*");
                k--;
            }
            else{
                printf(" ");
                k--;
            }
        }
        printf("\n");
        n++;
    }
}