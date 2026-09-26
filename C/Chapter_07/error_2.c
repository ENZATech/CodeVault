// Second largest Number in an array.
#include<stdio.h>
int sec_max(int [], int);
int sec_max(int a[], int n){
    int max=0;
    int m;

    for(int i=0; i<n; i++){
        if(a[i]>max){
            m=max;
            max=a[i];
            // m=i;
        }
    }
    max=0;
    for(int i=0; i<n; i++){
        if(a[i]>max && max!=m){
            max=a[i];
        }
    }

    printf("%d", max);
}


int main(){
    int x[100];
    int n;

    printf("ENter the arrays (0 to exit): \n");
    for(int i=0; i<100; i++){
        scanf("%d", &x[i]);
        if(x[i]==0){
            i--; 
            break;
        }
        n=i+2;
    }

    sec_max(x, n);
}