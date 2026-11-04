#include<stdio.h>

void print(int [], int );
void add(int [], int , int , int);

void add(int a[], int b, int c, int n){
    if(c >= n){
        a[c] = b;
        return;
    }
    // printf("%d", n);

    a[n] = a[n-1];
    add(a, b, c, n-1);
    
    //print(a, n);
}
void print(int a[], int n){

    printf("New Array is: ");
    for(int i=0; i<n; i++){
        printf("%d", a[i]);
        printf(", ");
    }
    printf("\n");
}

int main(){
    int n = 7;
    int x[n];
    int y;
    int z;

    printf("Enter the array: \n");
    for(int i = 0; i<n; i++){
        printf("Enter: ");
        scanf("%d", &x[i]);
    }

    printf("Enter the element you wanna add: ");
    scanf("%d", &y);

    printf("Enter the postion of that element: ");
    scanf("%d", &z); 

    add(x, y, z-1, n+1);
    n++;
    
    print(x, n);

    return 0;
}