#include<stdio.h>
int fib(int);
int fib(int n){
    int arr[100];
    int p=0;
    arr[0]=p;
    int q=1;
    arr[1]=q;
    int r;
    for(int i=2; i<n; i++){
        r=p+q;
        arr[i]=r;
        p=q;
        q=r;
    }
    for(int i=0; i<n; i++){
        printf("%d\t", arr[i]);
    }
}
int main(){
    int n;
    int y;

    printf("Enter the number: ");
    scanf("%d", &n);

    fib(n);     // Fibonacci series using function and array.

    return 0;
}