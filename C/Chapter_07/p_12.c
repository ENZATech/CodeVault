#include<stdio.h>

// Input an array and the reverse it using function and print that array.
int rev(int[], int);
int rev(int a[], int n)
{
    int m=n;
    int arr[m];
    for(int i=0; i<n+1; i++){
        arr[m-i]=a[i];

    }
    for(int i=0; i<m+1; i++){
        printf("%d \n", arr[i]);
    }
}

int main()
{
    int x[100];
    int y;

    int n;
    for(int i=0; i<100; i++){
        printf("Enter the number(0 to exit): ");
        scanf("%d", &x[i]);

        if(x[i]==0){
            break;
        }
        n=i;
    }

    rev(x, n);

    return 0;
}