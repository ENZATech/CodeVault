#include<stdio.h>
int main(){
    int x;
    int y;
    
    //Half Diamond star pattern;
    printf("Enter the number: ");
    scanf("%d", &x);

    int i=2*x-1;
    int n=0;
    while(n<i){
        int j=n+1;
        while(j>0 && j<x+1){
            printf("*");
            j--;
        }

        if(n>=x){
            int k=i-n;
            while(k>0){
                printf("*");
                k--;
            }
        }
        
        printf("\n");
        n++;
    }
    return 0;
}