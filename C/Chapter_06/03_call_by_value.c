#include<stdio.h>
int sum(int, int);
int sum(int a, int b){
    return a+b;
}

int main(){
    printf("The sum of 13 and 17 is %d", sum(13, 17));
    return 0;
}