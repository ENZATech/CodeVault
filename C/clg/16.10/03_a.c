// Finding largest number in an array;

#include<stdio.h>

int largest(int [], int);
int largest(int a[], int n){
    int max=a[0];

    for(int i=0; i<n; i++)
    {
        if(max<a[i]){
            max=a[i];
        }
    }

    return max;
}
int main(){
    int x[20];
    int n=0;
    int max;

    printf("Enter the numbers to find largest number: \n");

    for(int i=0; i<20; i++){
        printf("Enter (0 to end): ");
        scanf("%d", &x[i]);
        if(x[i]==0){
            break;
        }
        n++;
    }

    max = largest(x, n);
    printf("The largest number is: %d", max);

    return 0;
}