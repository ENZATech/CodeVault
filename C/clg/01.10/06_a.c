#include<stdio.h>
// 5, 4, 8, 1, 7, 9
int incr(int [], int);
int incr(int a[], int n){
    for(int k=n-1; k>=0; k--){  //k=5
        for(int i=0; i<n; i++){
            int m=0;
            // int x=n;
            int j;
            for(j=0; j<n; j++){
                int q=a[j];
                if(a[i]<a[j]){
                    m++;
                }
            }
            if(m==k){
                printf(" %d ", a[i]);
                break;
            }
            //x--;
        }
    }
    printf("\n");
}

int main(){
    // 3 dimentional array and writing its element in increasing order.

    int arr[50] = {5, 4, 8, 1, 7, 9};

    printf("The order in increasing order: ");
    incr(arr, 6);

/*
    int n=6;
    for(int i=0; i<n, i++){
        incr(arr, 6);
        
        n--;
    }
*/
    return 0;
}