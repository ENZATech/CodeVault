#include<stdio.h>
int main(){
    int x;
    int a=0;
    int b=1;

    //Number pattern 43;
    printf("Enter the number: ");
    scanf("%d", &x);

    int n=0;
    while(n<x){
        int m=n+1;
        while(m>0){
            if(n%2==0){
                a=a+1;
                printf("%d", a);
                m--;
                b=a+1;
            }
            else if(n%2!=0){
                printf("%d", b);
                b=b-1;
                m--;
                a=b;
            }
            
        }
        printf("\n");
        n++;
    }
    return 0;
}