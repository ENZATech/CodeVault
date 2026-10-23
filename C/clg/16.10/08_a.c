// maximum and minimum numbers in an array using recursion.

#include<stdio.H>

int max(int a[], int n){
    int temp = a[0];
    for(int i=0; i<=n; i++){
        if(temp < a[i]){
            temp = a[i];
        }
    }

    return temp;
}

int min(int a[], int n){
    int temp = a[0];
    for(int i=0; i<=n; i++){
        if(temp > a[i]){
            temp = a[i];
        }
    }

    return temp;
}

int main(){
    int x[10];
    int n=0;
    
    printf("Enter the numbers: \n");
    for(int i=0; i<10; i++){
        printf("Enter (0 t0 end): ");
        scanf("%d", &x[i]);

        if(x[i] == 0){
            i--;
            break;
        }
        n=i;
    }

    printf("The maximum number in the array is: %d \n", max(x, n));
    printf("The minimum number in the array is: %d \n", min(x, n));

    return 0;
}