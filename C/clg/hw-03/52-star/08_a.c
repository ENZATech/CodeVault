#include<stdio.h>
int main(){
    int x;
    int y;
    
    //Right angled triangle;
    printf("Enter the number: ");
    scanf("%d", &x);

    int i=x;
    int n=0;
    while(n<x){
        int j=n+1;
        while(j>0){
            printf("*");
            j--;
        }
        printf("\n");
        n++;
    }
    return 0;
}