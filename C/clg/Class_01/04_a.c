#include<stdio.h>
int main(){
    int i=1;
    int j=1;

    while(j<=5){
        int count = 1;
        while(count<=j){
            printf("%d", i);
            printf(" ");
            count++;
            i++;
        }
        j++;
        printf("\n");
    }

    return 0;
}