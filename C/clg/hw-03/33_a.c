#include<stdio.h>
int main(){
    int x;
    int y;
    int z;

    // Program to find Perfect numbers between 1 to n;
    printf("Enter the  number: ");
    scanf("%d", &x);

    int p=1;
    while(p<x){        
        int n=1;
        int i=p;
        while(i>0){
            i=i-n;
            n++;
        }
        if(i<0){
            // printf("This is not a perfect number bro.!");
        }
        else if(i==0){
            printf("%d \n", p);
        }
        else
            printf("If you are seeing this, then unforntunately its an error.!");

        p++;

    }

    return 0;
}