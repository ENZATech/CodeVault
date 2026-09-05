#include<stdio.h>
int main(){
    int x;
    int y;

    //Number Pattern 21;
    printf("Enter the number: ");
    scanf("%d", &x);

    int n=0;
    int a=x;
    while(n<x){
        int p=x-n;
        while(p>0){
            printf("%d", a);
            p--;
        }
        a=a-1;
        printf("\n");
        n++;
    }
    return 0;
}