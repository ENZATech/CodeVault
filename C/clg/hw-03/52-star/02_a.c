#include<stdio.h>
int main(){
    int x;
    int y;
    int z;


    // Hollow Sqaure star pattern.
    printf("Enter the value of n: ");
    scanf("%d", &x);

    int i=x;
    int n=0;
    while(n<x){
        int j=0;
        if(n==0){
            while(j<x){
                printf("*");
                j++;
            }       
        }
        j=0;
        int m=n;
        while(m<i){
            if(j==0 || j==x){
                printf("*");
            }
            else{
                printf(" ");
            }
            m++;
        }

        if(n==(x-1)){
            j=0;
            while(j<x){
                printf("*");
                j++;
            } 
        }
        n++;

    }

    return 0;
}