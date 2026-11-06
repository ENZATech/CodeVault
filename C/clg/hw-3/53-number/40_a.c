#include<stdio.h>
int main(){
    int x;
    int y;

    //Number Pattern 28;
    printf("Enter the number: ");
    scanf("%d", &x);

    int n=0;
    while(n<x){
        int a=1;
        int b=1;
        int m=n+1;
        while(m>0){
            if(n%2!=0){
                a=2*b;
                printf("%d", a);
                b=b+1;
                m--;
            }
            else if(n%2==0){
                printf("%d", a);
                a=2*b+1;
                b=b+1;
                m--;
            }
        }
        printf("\n");
        n++;
    }
    return 0;
}