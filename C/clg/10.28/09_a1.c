#include<stdio.h>

void print(int [], int );
void add(int [], int , int , int* );

void add(int a[], int b, int c, int* n){
    
    if(c == *n){
        a[c] = b;
        return;
    }

    int displaced = a[c];
    a[c] = b;
    add(a, displaced, c+1, *n);

}

void print(int a[], int n){
    
    printf("New Array is: ");
    for(int i=0; i<n; i++){
        printf("%d", a[i]);
        printf(", ");
    }
}


int main(){
    int x[7];
    int n = 7;
    int y;
    int z;

    printf("Enter the array: \n");
    for(int i=0; i<n; i++){
        printf("Enter: ");
        scanf("%d", &x[i]);
    }

    printf("Enter the number you wanna insert: ");
    scanf("%d", &y);

    printf("Enter the position of this element: ");
    scanf("%d", &z);

    int *ptr = n++;
    add(x, y, z, *ptr);

    print(x, n);

    return 0;
}