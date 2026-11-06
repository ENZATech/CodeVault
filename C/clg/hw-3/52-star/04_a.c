#include<stdio.h>
int main(){
    int x;
    int y;
    int z;

    // Rhombus Star pattern;
    printf("Enter a number: ");
    scanf("%d", &x);

    int n=0;
    int i=x;
    while(n<x){
        int k=x-n;
        int j=x;
        while(k>0){
            printf(" ");
            k--;
        }
        while(j>0){
            printf("*");
            j--;
        }
        printf("\n");
        n++;
    }
    return 0;
}