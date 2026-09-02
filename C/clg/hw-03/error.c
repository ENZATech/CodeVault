#include <stdio.h>

int main() {
    int x;
    int y;
    int a=0;
    // Write C code here
    printf("Enter the value of n: ");
    scanf("%d", &x);

    int i=x;
    int n=0;
    while(i!=0){
        y=i%10;
        i=i/10;
        n++;
    }
    i=x;
    while(i!=0){
        y=i%10;
        i=i/10;
        int z=1;
        int m=n;
        while(m>0){
            z=z*y;
            m--;
        }
        a=a+z;
        printf("%d \n", a);
    }
    if(a==x){
        printf("This is Armstrong.");
    }
    else{
        printf("This is not.");
    }
    return 0;
}