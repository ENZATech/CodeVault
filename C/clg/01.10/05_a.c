//5th method;
#include<stdio.h>

int swap_1(int, int);
int swap_1(int a, int b){
    if(a>b){
        while(a>b){
            b++;
        }
    }
    return b;
}
int main(){
    int x;
    int y;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    y=swap_1(x, y);
    x=swap_2(x, y);

    printf("The value of x and y has been swapped: \n");
    printf("x = %d \n", x);
    printf("y = %d \n", y);

    return 0;
}
//Nope, it's not working.
//The core ideology is wrong.