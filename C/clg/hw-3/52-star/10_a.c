#include<stdio.h>
int main(){
    int x;
    int y;
    
    // Mirrored Right angles triangle.
    printf("Enter the number: ");
    scanf("%d", &x);

    int i=x;
    int n=0;
    while(n<x){
        int j=x-n;
        int k=n+1;
        while(j>0){
            printf(" ");
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