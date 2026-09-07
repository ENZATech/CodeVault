#include<stdio.h>
int main(){
    int x;
    int y;
    
    //Hollow Inverted Mirrored Right angled triangle;
    printf("Enter the number: ");
    scanf("%d", &x);

    int i=x;
    int n=0;
    while(n<x){
        int j=x-n;
        int k=n;
        while(k>0){
            printf(" ");
            k--;
        }
        while(j>0){
            if(n==0 || n==x-1 || j==x-n || j==1){
                printf("*");
            }
            else{
                printf(" ");
            }
            j--;
        }
        printf("\n");
        n++;
    }
    return 0;
}