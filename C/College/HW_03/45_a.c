#include<stdio.h>
int main(){
    int x;
    int y;
    long long z=0;
    int sum=0;
    int n;

    // Decimal number system to Binary Number system.
    printf("ENter the decimal form: ");
    scanf("%d", &x);

    if (x == 0) {
        printf("The Binary form of given input is: 0\n");
        return 0;
    }
    
    int i=x;
    while(i!=0){
        int p=1;
        n=1;
        while(p*2<=i){
                n=n*10;
                // printf("%d \n", n);
                // printf("%d \n", i);
                // break;
                p=p*2;
        }
        z = z + n; 
        i = i - p;
    }
    printf("%lld \n", z);

    return 0;
}