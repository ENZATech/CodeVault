#include<stdio.h>
int main(){
    int n;

    printf("Enter the number from where you have to print till 1: ");
    scanf("%d", &n);

    int i = n;
    while(i>=1){
        printf("%d \n", i);
        i--;
    }

    return 0;
}