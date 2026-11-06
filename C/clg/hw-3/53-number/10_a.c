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
            int a=1;
            a=a+n;
            printf("%d", a);
            m--;
        }
        printf("\n");
        n++;
    }
    return 0;
}