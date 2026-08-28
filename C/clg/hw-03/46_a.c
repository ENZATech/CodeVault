#include<stdio.h>
int main(){
    int x;
    int y;
    int z=0;
    int n=1;

    //Decimal Number system to Octal Number system.
    printf("Enter the decimal form: ");
    scanf("%d", &x);

    int i=x;
    while(i!=0){
        y=i%8;
        z= z + (y*n);
        n=n*10;
        i=i/8;
    }
    printf("The given input in Octal number system is: ");
    printf("%d", z);
    
    return 0;
}