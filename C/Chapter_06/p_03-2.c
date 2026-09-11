#include<stdio.h>
int tenx(int*);

int tenx(int* a){
    *a = *a * 10;
}

int main(){
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    printf("Now the value of input number is: %d \n", x);
    tenx(&x);
    printf("The value of input number is changed to 10 times i.e., %d \n", x);

    return 0;
}