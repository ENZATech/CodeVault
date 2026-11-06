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
        int a=0;
        while(m>0){
            a=a+1;
            printf("%d", a);
            m--;
        }
        printf("\n");
        n++;
    }
    return 0;
}