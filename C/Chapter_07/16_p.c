#include<stdio.h>
int shift(int [], int );

int shift(int a[], int n){
    int value=a[0];
    int b;

    for(int i=0; i<n+1; i++){
        a[i]=a[i+1];
        printf("%d\t", a[i]);
        b=i;
    }
    a[b+1]=value;
    printf("%d\t", a[b+1]);
}
int main(){
    int x[100];
    int n=0;

    for(int i=0; i<100; i++){
        printf("Enter the number (0 to end): ");
        scanf("%d", &x[i]);

        if(x[i]==0){
            break;
        }
        n=i-1;
    }

    shift(x, n);        // Left Shift by 1;
}