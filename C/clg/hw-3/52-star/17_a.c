#include<stdio.h>
int main(){
    int x;
    int y;
    
    //Hollow Pyramid Star pattern;
    printf("Enter the number: ");
    scanf("%d", &x);

    int i=x;
    int n=0;
    while(n<x){
        int j=x-n;
        int k=n;
        while(j>0){
            printf(" ");
            j--;
        }
        while(k>0){
            if(n==0 || n==1 || n==x-1 || k==n || k==1){
                printf("* ");
                k--;
            }
            else{
                printf("  ");
                k--;
            }
        }
        printf("\n");
        n++;
    }
    return 0;
}