#include<stdio.h>

// Maximum and minimum via arrays.

int req(int [], int);

int req(int a[], int n)
{

    for(int i=0; i<n+1; i++)
    {
        int m=0;
        for(int j=0; j<n+1; j++){
            if(a[i]>a[j])
            {
                m++;
            }
            if(m==n)
            {
                printf("The maximum number in this array is: %d \n", a[i]);
            }
        }
        m=0;
        for(int k=0; k<n+1; k++)
        {
            if(a[i]<a[k])
            {
                m++;
            }
            if(m==n)
            {
                printf("The minimum number in this array is: %d \n", a[i]);
            }
        }
    }
}

int main()
{
    int x[100];
    int y;

    int n;
    for(int i=0; i<100; i++){
        printf("Enter the numbers (0 to end): ");
        scanf("%d", &x[i]);

        if(x[i]==0){
            break;
        }
        n=i;
    }

    req(x, n);

    return 0;
}