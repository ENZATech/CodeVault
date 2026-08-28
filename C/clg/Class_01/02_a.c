#include<stdio.h>
int main(){
    int j=1;

    while(j<=5){
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