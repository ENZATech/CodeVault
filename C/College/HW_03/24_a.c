#include<stdio.h>
int main(){
    int x;
    int y;
    int z;

    printf("Enter the number to find their HCF. \n");
    printf("Enter first number: ");
    scanf("%d", &x);

    printf("Enter Second number: ");
    scanf("%d", &y);

    int n=1;
    while(n<=x-1 || n<=y-1){
        if(x%n==0 && y%n==0){
            z=n;
        }
        n++;
    }
    printf("HCF of these two given numbers is: %d", z);

    return 0;
}