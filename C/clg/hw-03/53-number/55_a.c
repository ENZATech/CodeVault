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
        if(n<x){
            while(p<n+1){
                a=a+1;
                printf("%d", a);
                p++;
            }
        }
        else if(n>=x){
            while(q>0){
                a=a+1;
                printf("%d", a);
                q--;
            }
        }
        printf("\n");
        n++;
    }
    return 0;
}


