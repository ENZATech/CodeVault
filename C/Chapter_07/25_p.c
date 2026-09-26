#include<stdio.h>
int rev(int [], int );
int rev(int a[], int n){
    int p; 
    int q;
    for(int i=0; i<n; i++){

        printf("%d", n-i);
    }
}
int main(){
    int x[100];
    int n=0;

    printf("Enter the numbers in the array: \n");
    for(int i=0; i<100; i++){
        scanf("%d", &x[i]);
        if(x[i]==0){
            i--; 
            break;
        }
        n=i+1;
    }
    
    rev(x, n);
}