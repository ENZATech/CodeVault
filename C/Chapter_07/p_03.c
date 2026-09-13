#include <stdio.h>

int rev(int [], int);

int rev(int a[], int n){
    for(int i=0; i<n; i++){
        int t=a[i];
        a[i]=a[n-1-i*2];
        a[n-1-i]=t;
        printf("%d", a[n-1-i]);
    }
}

int main(){
    int arr[]={1, 2, 3, 4, 5};

    rev(arr, 5);
/*
    for(int i=0; i<5; i++){
        rev(arr, 5);
        //printf("%d", arr[i]);
    }
*/

    return 0;
}