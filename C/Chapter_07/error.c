// Second largest value in an array;
#include<stdio.h>
int sec_max(int [], int);
int sec_max(int a[], int n){
    int max=0;
    int m;
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
    }
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
    printf("Second largest number is: %d", max);

}

int main(){
    int x[100];
    int n;

    printf("Enter the numbers(0 to exit): ");
    for(int i=0; i<100; i++){
        scanf("%d", &x[i]);
        if(x[i]==0){
            i--;
            break;
        }
        n=i+2;
    }

    sec_max(x, n);

    return 0;
}