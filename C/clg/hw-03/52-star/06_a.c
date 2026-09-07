#include<stdio.h>
int main(){
    int x;
    int y;

    // Mirrored Rhombus star pattern;
    printf("enter the number: ");
    scanf("%d", &x);

    int i=x;
    int n=0;
    while(n<x){
        int j=n;
        int k=x;
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
}