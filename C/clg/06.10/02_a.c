// Swap numbers using pointers;
#include<stdio.H>

int swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x;
    int y;
    
    printf("-- Swapping numbers using pointers --\n");
    printf("Enter value of x: ");
    scanf("%d", &x);

    printf("Enter value of y: ");
    scanf("%d", &y);

    swap(&x, &y);
    
    printf("The values has been reversed. \n");
    printf("The Value of x is: %d\n", x);
    printf("The value of y is: %d\n", y);

    return 0;
}