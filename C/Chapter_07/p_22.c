// Duplicate any repeating number by zero;
#include<stdio.h>
int dup(int [], int );
int dup(int a[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i]==a[j] && i!=j){
                a[j]=0;
                break;
            }

        }
    }
    for(int i=0; i<n; i++){
        printf("%d", a[i]);
    }
}

int main(){
    int x[100];
    int n;

    printf("Enter the numbers (0 to exit): \n");
    for(int i=0; i<100; i++){
        printf("Enter: ");
        scanf("%d", &x[i]);
        if(x[i]==0){
            i--;
            break;
        }
        n=i+1;
    }

    dup(x, n);

    return 0; 
}