#include<stdio.h>

int fib(int, int, int);
int fib(int a, int b, int n){
    if(n==0){
        return 0;
    }
    printf("%d", a);
    a=b;
    fib(b, b+a, n-1);
}

int main(){
    int x = 0;
    int y = 1;
    int n;

    printf("Enter: ");
    scanf("%d", &n);

    fib(x, y, n);

    return 0;
}