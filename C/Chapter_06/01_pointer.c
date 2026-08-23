#include<stdio.h>
int main(){
    int x;
    int* j = &x; // j is a pointer pointing to i. (J is a integer pointer.)
    char y;
    char* k = &y;

    printf("Enter the character here to see its address: ");
    scanf("%c", &y);

    printf("Enter the number here to see it address: ");
    scanf("%d", &x);
    
    
    printf("The address of char is: %p \n", &y);
    printf("The value of address x is: %c \n", *(&y));
    printf("The address of char is: %p \n", k);
    printf("The value of address x is: %c \n", *(k));

    printf("The address of num is: %p \n", &x);
    printf("The value of address x is: %d \n", *(&x));
    printf("The address of char is: %p \n", j);
    printf("The value of address x is: %d \n", *(j));

    return 0;
}