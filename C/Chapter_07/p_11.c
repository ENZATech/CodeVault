#include<stdio.h>

// Find weather the input number is even or odd.

int even(int [], int);

int even(int a[], int n){
    for(int i=0; i<n+1; i++)
    {
        if(a[i]%2==0){
            printf("%d \n", a[i]);
        }
        else{
            continue;
        }
    }
}

int main()
{
    int x[100];
    int y;

    int n;
    for(int i=0; i<100; i++)
    {
        printf("Enter the number (0 to stop): ");
        scanf("%d", &x[i]);

        if(x[i]==0){
            break;
        }
        n=i;
    }

    even(x, n);

    return 0;
}