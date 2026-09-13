#include<stdio.h>
int main(){
    int marks[5];

    printf("Enter the marks of students: ");
    
    for(int i; i<5; i++){
        scanf("%d", marks[i]);
    }
    for(int i; i<5; i++){
        printf("The address of marks %d is %d \n", i, &marks[i]);

        // THESE ADDRESS WILL BE IN CONTIGUOUS BLOCKS OF MEMORY.
    }

    return 0;
}