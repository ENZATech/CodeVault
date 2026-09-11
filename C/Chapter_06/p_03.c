#include<stdio.h>

int tenx(int);

int tenx(int a){
    return 10*(a);
}

int main(){
    int x;
    
    printf("Enter a number: ");
    scanf("%d", &x);

    printf("The value of input number is 10 times i.e., %d", tenx(x));
    return 0;
}