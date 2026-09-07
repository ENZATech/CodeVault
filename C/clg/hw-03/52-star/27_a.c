#include<stdio.h>
int main(){
    int x;
    int y;

    //Plus Star pattern;
    printf("Enter the number: ");
    scanf("%d", &x);

    int i=2*x-1;
    int n=0;
    while(n<i){
        int k=i;
        int j=x;
        if(n<x-1){
            while(j>0){
                printf("  ");
                j--;
                if(j==1){
                    printf("+");
                }
            }
        }
        else if(n==x-1){
            while(k>0){
                printf("+ ");
                k--;
            }
        }
        else if(n>x-1){
            while(j>0){
                printf("  ");
                j--;
                if(j==1){
                    printf("+");
                }
            }
        }
        printf("\n");
        n++;
    }
    return 0;
}