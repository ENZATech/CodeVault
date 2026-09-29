#include<stdio.h>
int sum(int a, int *b){
    *b = *b + a;

    //return b;
}

int main(){
    int x;
    int y=0;

    printf("Enter the numbers you wanna sum. \n\n");

    while(x!=0){
        printf("Enter the number (0 to exit): ");
        scanf("%d", &x);
        sum(x, &y);

    }

    printf("The sum of all numbers is: %d", y);

    return 0;
}