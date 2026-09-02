#include<stdio.h>
int main(){
    int x;
    int y;

    // Program to print Armstrong numbers between 1 to n;
    printf("Enter the number: ");
    scanf("%d", &x);

    int p=1;
    while(p<x){
        int i=p;
        int n=0;
        while(i!=0){
            y=i%10;
            i=i/10;
            n++;
        }
        int a=0;
        i=p;
        while(i!=0){
            y=i%10;
            i=i/10;
            int z=1;
            int m=n;
            while(m>0){
                z=z*y;
                m--;
                // printf("%d \n", z);
            }
            a=a+z;
            // printf("%d \n", a);
        }
        if(a==p){
            printf("%d \n", a);
        }
        else{
            // printf("This is an error.");
        }
        p++;
    }
}