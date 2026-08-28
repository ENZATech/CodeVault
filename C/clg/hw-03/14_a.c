#include<stdio.h>
int main(){
    int x;
    int y;
    int z=0;
    
    printf("Enter the number: ");
    scanf("%d", &x);

    int i=x;
    while(i!=0){
        y=i%10;
        i=i/10;
        z=z+y;
    }
    printf("The sum of all the digits of %d is: %d", x, z);

    return 0;
}