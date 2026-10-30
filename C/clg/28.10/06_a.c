// To find total number of even and odd numbers in an array;
#include<stdio.h>

void count(int a[], int n){
    int p = 0; 
    int q = 0;
    for(int i=0; i<n; i++){
        if(a[i] % 2 == 0){
            p++;
        }
        else if(a[i] % 2 != 0){
            q++;
        }
    }
    printf("The number of even numbers in the array is: %d \n", p);
    printf("The number of odd numbers in the array is: %d \n", q);
}

int main(){
    int x[8];

    printf("Enter numbers in ths array: \n");
    for(int i=0; i<8; i++){
        printf("Enter: ");
        scanf("%d", &x[i]);
    }

    count(x, 8);

    return 0;
}