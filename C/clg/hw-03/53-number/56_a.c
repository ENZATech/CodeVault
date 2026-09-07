#include<stdio.h>
int main(){
    int x;
    int y;
    int z;

    // Number Pattern 56;
    printf("Enter the number: ");
    scanf("%d", &x);

    int i=2*x-1;
    int n=0;
    while(n<i){
        int a=0;
        int p=0;
        int q=i-n;
        if(n<x && n%2==0){
            while(p<n+1){
                a=a+1;
                printf("%d", a);
                p++;
            }
            printf("\n");
        }
        else if(n>=x-1 && n%2==0){
            while(q>0){
                a=a+1;
                printf("%d", a);
                q--;
            }
            printf("\n");
        }
        n++;
    }
    return 0;
}