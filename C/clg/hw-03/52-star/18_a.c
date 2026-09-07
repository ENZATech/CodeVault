#include<stdio.h>
int main(){
    int x;
    int y;
    
    //Inverted Pyramid star pattern;
    printf("Enter the number: ");
    scanf("%d", &x);

    int i=x;
    int n=0;
    while(n<x){
        int j=n;
        int k=x-n;
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