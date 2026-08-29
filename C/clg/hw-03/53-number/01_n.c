#include<stdio.h>
int main(){
    int x;
    int y;
    int z;

    // Number Pattern 01
    printf("Enter the value of n: ");
    scanf("%d", &x);

    int i=x;
    int n=0;
    while(n<i){
        
        int m=x;
        while(m>0){
            printf("1");
            m--;
        }
        printf(" \n");
        n++;
    }
}