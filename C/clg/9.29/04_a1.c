// Multipication of inputs of as many as you can.
#include<stdio.h>
int mult(int a, int *b){
    *b = *b * a;
}
int main(){
    int x;
    int y=1;

    printf("Enter the number you wanna multiply. \n");

    while(x!=1){
        printf("Enter the number (1 to exit): ");
        scanf("%d", &x);
        mult(x, &y);
    }

    printf("The product of input numbers is: %d", y);

    return 0;
}