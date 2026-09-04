#include<stdio.h>
int main(){
    int x;
    int y;
    int z;

    printf("Enter the number: ");
    scanf("%d", &x);

    int i=x;
    int n=0;
    while(n<x){
        int m=x;
        while(m>0){
            if(n==0 || n==(x-1)){
                if(m==1 || m==x){
                    printf("0");
                }
                else 
                    printf("1");
            }
            else{
                if(m==1 || m==x){
                    printf("1");
                }
                else
                    printf("0");
            }
            m--;
        }
        printf("\n");
        n++;
    }

    return 0;
}