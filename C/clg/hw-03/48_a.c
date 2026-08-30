#include<stdio.h>
int main(){
    char x;
    int y;
    int z;

    // HexaDecimal to Binary Number system...
    printf("Enter the Hexadecimal number: ");
    scanf("%d", &x);

    while(x!=0){
        y=x%10;
        x=x/10;
        printf("%d", y);
    }
    return 0;
}