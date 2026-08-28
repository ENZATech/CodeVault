#include<stdio.h>
int main(){
    int j=1;

    while(j<=20){
        int k=20;
        
        while(k>=j){
            printf(" ");
            k--;
        }
        int i=1;
        while(i<=j){
            printf("*");
            printf(" ");
            i++;
        }
    j++;
    printf("\n");
    }

    return 0;
}