#include<stdio.h>
int main(){
    int x;

    // What will be the following line produce?
    // printf("%d, %d, %d", x, ++x, x++);

    printf("Enter a number: ");
    scanf("%d", &x);

    printf("%d, %d, %d \n", --x, ++x, x++);
    printf("%d, %d, %d \n", x, ++x, x++);
    printf("%d, %d, %d \n", x++, --x, --x);
    printf("%d, %d, %d \n", x, x--, x++);

    return 0;
}