#include<stdio.h>
int main(){
    int x;
    int y;

    //Number Pattern 22;
    printf("Enter the number: ");
    scanf("%d", &x);

    int n=0;
    int a=0;
    while(n<x){
        int p=x-n;
        a=a+1;
        while(p>0){
            printf("%d", a);
            p--;
        }

        printf("\n");
        n++;
    }
    return 0;
}