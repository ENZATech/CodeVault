#include<stdio.h>
int main(){
    int x;
    int y;

    // Number pattern 22;
    printf("Enter the number: ");
    scanf("%d", &x);

    int n=0;
    int a=x;
    while(n<x){
        int p=n+1;
        while(p>0){
            printf("%d", a);
            p--;
        }
        a=a-1;
        printf("\n");
        n++;
    }
}