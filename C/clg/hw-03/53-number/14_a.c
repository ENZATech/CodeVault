#include<stdio.h>
int main(){
    int x;
    int y;
    int z;
    int a;

    printf("ENter the number: ");
    scanf("%d", &x);

    int i=x;
    int n=0;
    while(n<x){
        int m=x;
        a=x;
        int p=n;
        while(m>0){
            while(p>0){
                printf("%d", a);
                a=a-1;
                p--;
                m--;
            }
            printf("%d", a);
            m--;
        }
        printf("\n");
        n++;
    }

    return 0;
}