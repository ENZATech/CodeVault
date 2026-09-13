#include<stdio.h>
int nat(int);
int nat(int a){
    int p=0;
    while(a>0){
        p=p+a;
        a--;
    }
    return p;
}

int main(){
    int x;
    
    printf("Enter the number: ");
    scanf("%d", &x);

    printf("The sum of natural numbers from 1 to %d is: %d", x,  nat(x));

    return 0;
}