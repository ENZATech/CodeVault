#include<stdio.h>
int merge(int [], int [], int , int);
int merge(int a[], int b[], int n, int m){
    int arr[n+m];

    for(int i=0; i<n; i++){
        arr[i]=a[i];
    }
    for(int j=0; j<m+1; j++){
        arr[j+n]=b[j];
    }
    for(int i=0; i<n+m+1; i++){
        printf("%d   ", arr[i]);
    }
}

int main(){
    int x[6]={2, 4, 6, 8, 10, 12};
    int y[5]={3, 5, 7, 9, 11};

    merge(x, y, 6, 5);  // Array merge using function.

    return 0;
}