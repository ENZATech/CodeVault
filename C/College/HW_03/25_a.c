#include<stdio.h>
int main(){
    int x;
    int y;
    int z;

    printf("Enter the numbers to find their LCM. \n");
    printf("Enter First number: ");
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
    printf("The LCM of given two numbers is: %d", x*y/z);

    return 0;
}