#include<stdio.h>
int main(){
    long long x;
    int y;
    int z=0;
    int a=1;
    int c=0;
    
    printf("Enter the binary number: ");
    scanf("%lld", &x);

    long long i=x;
    int n=1;

    long long b=i;
    while(b!=0){
        c=b%10;
        b=b/10;
        if(c!=0 && c!=1){
            break;
        }
    }
    if(c!=0 && c!=1){
        printf("Invalid Input.");
    }
    else{
        while(i!=0){
            y=i%10;
            i=i/10;
            int m=n;
            while(m!=n-1){
                z=z+(y*a);
                m--;
                a=a*2;
            }
            n++;
        }
    printf("The Decimal form of given input is: ");
    printf("%d", z);
    }
    return 0;
}