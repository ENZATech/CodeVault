#include<stdio.h>

int neg(int [], int );
int neg(int a[], int n){
    for(int i=0; i<n; i++){
        if(a[i] < 0){
            printf("%d \n", a[i]);
        }
    }
}
int main(){
    int x[5];

    printf("Enter the numbers in this array: \n");
    for(int i=0; i<5; i++){
        printf("Enter: ");
        scanf("%d", &x[i]);
    }

    printf("The negative numbers in the array are: \n");
    neg(x, 5);

    return 0;
}