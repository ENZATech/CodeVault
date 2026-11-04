#include<stdio.h>
int main(){
    int x[10];
    int y;
    int arr;

    printf("Enter the Elements: \n");

    for(int i=0; i<10; i++){
        printf("Enter: ");
        scanf(" %c", &x[i]);
    }

    printf("Enter the character you wanna find: ");
    scanf(" %c", &arr);

    for(int i=0; i<10; i++){
        if(arr == x[i]){
            printf("The index of %c is: %d", arr, i);
        }
    }

    return 0;
}