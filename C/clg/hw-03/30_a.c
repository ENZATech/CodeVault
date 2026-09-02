#include<stdio.h>
int main(){
    int x;
    int y;
    int z;

    int a=0;
    // Program for finding weather a number is Armstrong or not.
    printf("Enter the number: ");
    scanf("%d", &x);

    int i=x;
    int n=0;
    while(i!=0){
        y=i%10;
        i=i/10;
        n++;
    }
    i=x;
    while(i!=0){
        y=i%10;
        i=i/10;
        int z=1;
        while(n>0){
            z=z*y;
            n--;
        }
        a=a+z;
    }
    if(a==x){
        printf("This is an Armstrong.");
    }
    else{
        printf("This is NOT an Armstrong.");
    }
    
    return 0;
}