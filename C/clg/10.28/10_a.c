#include<stdio.h>

void del(int *, int , int );
void del(int *a, int b, int n){
    if(n<=b){
        return;
    }

    a[b] = a[b+1];
    del(a, b+1, n);
}

int main(){
    int n = 7;
    int x[n];
    int y;
    int z;

    printf("Enter the numbers in array: ");
    for(int i=0; i<n; i++){
        printf("Enter: ");
        scanf("%d", &x[i]);
    }

    printf("Enter the position of element you wanna delete: ");
    scanf("%d", &y);

    int *ptr = x;

    del(ptr, y-1, n);
    n--;
    
    for(int i=0; i<n; i++){
        printf("%d", x[i]);
        printf(", ");
    }

    return 0;
}