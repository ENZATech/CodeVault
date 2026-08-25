#include<stdio.h>
int main(){
    int n;

    printf("Enter the number to where you want to print: ");
    scanf("%d", &n);

    int i = 0;
    while(i<=n){
        printf("%d \n", i);
        i++;
    }
    return 0;
}