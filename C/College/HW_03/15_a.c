#include<stdio.h>
int main(){
    int x;
    int y;
    int z=1;

    printf("Enter the number: ");
    scanf("%d", &x);

    int i=x;
    while(i!=0){
        y=i%10;
        i=i/10;
        z=z*y;
    }
    printf("The product of digits of %d is %d", x, z);

    return 0;
}