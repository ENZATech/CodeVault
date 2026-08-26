#include<stdio.h>
int main(){
    int x;
    int y;
    int z=0;

    int p=1;
    int n=1;

    // Octal to Decimal Number system.
    printf("Enter the Octal number: ");
    scanf("%d", &x);

    int i=x;
    while(i!=0){
        y=i%10;
        i=i/10;
        z=z+(y*p);
        p=p*8;
        // printf("%d \n", z);
        // printf("%d \n", p);
        // printf("%d \n", n);
    }
    printf("The Decimal form of given input is: ");
    printf("%d", z);

    return 0;
}