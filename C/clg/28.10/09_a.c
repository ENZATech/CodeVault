// C program to insert an element in an array;
#include<stdio.h>

int print(int [], int );
void add(int [], int , int , int);

void add(int a[], int b, int c, int n){
    
    if(c == n){
        a[c] = b;
        return;
    }

    int displaced = a[c];
    a[c] = b;
    add(a, displaced, c+1, n);

    print(a, n);
}

int print(int a[], int n){

    printf("New Array is: ");
    for(int i=0; i<n; i++){
        printf("%d", a[i]);
        printf(", ");
    }
    return 0;
}

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

    add(x, y, z, n+1);

    /*
    printf("%d", n);

    printf("New Array is: ");
    for(int i=0; i<n; i++){
        printf("%d", x[i]);
        printf(", ");
    }
    */

    return 0;
}

// Giving Incorrect outputs;
// It should be solved using recursion.!