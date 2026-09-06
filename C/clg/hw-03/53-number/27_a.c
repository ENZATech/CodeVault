#include<stdio.h>
int main(){
    int x;
    int y;
    int a;
    int b;

    //Number Pattern 27;
    printf("Enter the number: ");
    scanf("%d", &x);

    int n=0;
    while(n<x){
        int m=0;
        a=x-n;
        while(m<x-n){
            printf("%d", a);
            a=a-1;
            m++;
        }
        printf("\n");
        n++;
    }

    return 0;
}