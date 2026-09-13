#include<stdio.h>
long long power(int, int);
long long power(int a, int b){
    int p=1;
    while(b>0){
        p=p*a;
        b--;
    }
    return p;
}

int main(){
    int x;
    int y;
    
    printf("Enter the base: ");
    scanf("%d", &x);

    printf("Enter the power: ");
    scanf("%d", &y);

    printf("The value of %d power %d is: %lld", x, y, power(x, y));

    return 0;
}