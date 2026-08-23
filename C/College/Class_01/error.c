#include<stdio.h>
int main(){
    int j=1;

    int i=1;
    while(j<=5){
        while(i<=j){
            printf("%d", i);
            i++;
        }
    j++;
    printf("\n");
    }

    return 0;
}