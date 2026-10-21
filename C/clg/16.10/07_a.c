// Sum of all elements of an array using recursion;

#include<Stdio.h>

int sum(int a[], int n){
    if(n<0){
        return 0;
    }

    return (a[n] + sum(a, n-1));
}

int main(){
    int x[10];
    int n=0;

    printf("Enter the numbers: \n");
    for(int i=0; i<10; i++){
        printf("Enter (0 to end):");
        scanf("%d", &x[i]);
        if(x[i] == 0){
            i--;
            break;
        }
        n=i;
    }

    printf("The sum of all elements of the array is: ");
    printf("%d", sum(x, n));

    return 0;
}