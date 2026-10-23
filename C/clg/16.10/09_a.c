// To search an element in an array;

#include<stdio.h>

int search(int a[], int b, int n){
    for(int i=0; i<n; i++){
        if(a[i] == b){
            return (i+1);
        }
    }
}

int main(){
    int x[10];
    int y;
    int n=0;
    int index;

    printf("Enter the numbers: \n");
    for(int i=0; i<10; i++){
        printf("Enter (0 to end): ");
        scanf("%d", &x[i]);

        if(x[i]==0){
            i--;
            break;
        }
        n=i;
    }

    printf("Enter the element whose index you have find: ");
    scanf("%d", &y);

    index = search(x, y, n);

    printf("The index of element is: %d", index);

    return 0;
}