#include<stdio.h>
int main(){
    int x;
    int y=0;
    int z=1;
    int a;
    int f;

    printf("Enter the value of n to find Nth term of Fibonacci sequence: ");
    scanf("%d", &x);

    for(int n=1; n<=x; n++){
        a=y+z;
        f = a;
        y=z;
        z=a;
    }
    printf("%d", y);

    return 0;
}