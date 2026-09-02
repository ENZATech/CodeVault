#include<stdio.h>
int main(){
    long long x;
    int y;
    int z;

    int c;
    // Program to find all strong numbers bwteen 1 to n;
    printf("Enter the value of n: ");
    scanf("%lld", &x);

    long long n=1;
    while(n<x){
        long long i=n;
        long long b=0;
        while(i!=0){
            y=i%10;
            i=i/10;

            long long a=1;
            z=y;
            while(z!=0){
                a=a*z;
                z--;
                // printf("%d \n", a);
                // printf("%d \n", z);
            }
            b=b+a;
            c=b;
            // printf("%d \n", b);
        }
        if(b==n){
            printf("%lld is a Strong number.! \n", n);
        }
        else{
            n++;
            continue;
        }

        n++;
    }
    // printf("%d \n", c);

    return 0;
}