#include<stdio.h>
int main(){
    int x;
    int y;
    int z;

    int n;

    // Square Star pattern.
    printf("Enter the number: ");
    scanf("%d", &x);

    int i=0;
    while(i<x){
        int j=0;
        while(j<x){
            printf("*");
            j++;

        }
        printf("\n");
        i++;
        /*
        while(j<i){
            printf("*");
            j++;
        }
        */
    }

    return 0;
}