// C program to insert an element in an array;
#include<stdio.h>
int main(){
    int n=7;
    int x[] = {2, 4, 6, 8, 10, 12, 14};
    int y;
    int z;

    printf("Current array is: ");
    for(int i=0; i<n; i++){
        printf("%d", x[i]);
        printf(", ");
    }

    printf("\nEnter the element to insert in the array: ");
    scanf("%d", &y);

    printf("Enter the position of this element: ");
    scanf("%d", &z);

    for(int i=0; i<n; i++){
        if(i > z){
            x[i+1] = x[i]; 
            x[z] = y;
        }
    }
    printf("%d", n);

    printf("New Array is: ");
    for(int i=0; i<n; i++){
        printf("%d", x[i]);
        printf(", ");
    }
    return 0;
}

// Giving Incorrect outputs;
// It should be solved using recursion.!