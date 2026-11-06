#include<stdio.h>
int main(){
    int x;
    int y;
    
    // Hollow Right angled triangle;
    printf("Enter the number: ");
    scanf("%d", &x);

    int i=x;
    int n=0;
    while(n<x){
        int j=n+1;
        int k;
        while(j>0){
            if(n==0 || n==1 || n==x-1 || j==n+1 || j==1){
                printf("*");
                j--;
            }
            else{
                printf(" ");
                j--;
            }
        }
        printf("\n");
        n++;
    }
    return 0;
}