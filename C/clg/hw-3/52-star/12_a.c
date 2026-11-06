#include<stdio.h>
int main(){
    int x;
    int y;
    
    //Inverted Right angled Triangle.
    printf("Enter the number: ");
    scanf("%d", &x);

    int i=x;
    int n=0;
    while(n<x){
        int j=x-n;
        int k;
        while(j>0){
            printf("*");
            j--;
        }
        printf("\n");
        n++;
    }
    return 0;
}