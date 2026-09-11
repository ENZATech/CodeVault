#include<stdio.h>
int nat(int);

int nat(int a){
    if(a==1){
        return 1;
    }
    return nat(a-1)+a;
}

int main(){
    int x;
    
    // Write the sum of First n natural numbers using function.
    printf("Enter a number: ");
    scanf("%d", &x);

    printf("%d is the sum of first n natural number.", nat(x));

    return 0;
}