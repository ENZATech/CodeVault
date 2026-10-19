#include<stdio.h>

// Array is a data structure which store a data in a continuous memory location. 

int main(){
    int a[5];
    int sum=0; 

    printf("Enter the marks of students: \n");
    
    for(int i=0; i<5; i++)
    {
        printf("Enter: ");
        scanf("%d", &a[i]);
    }
    for(int i=0; i<5; i++)
    {
        sum = sum + a[i];
        // THESE ADDRESS WILL BE IN CONTIGUOUS BLOCKS OF MEMORY.
    }

    printf("The sum is %d", sum);

    return 0;
}