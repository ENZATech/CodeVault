#include<stdio.h>
int main(){
    int x;
    int y;
    int z;

    int a=0;

    // Pascal Triangle;
    printf("Enter the number of rows to print: ");
    scanf("%d", &x);

    int n=x;
    while(n>0){
        printf(" ");
        int m=0;
        while(m<n){
            printf("%d ", a);
            a++;
            m++;
        }
        printf("\n");
        n--;

    }
    return 0;
}