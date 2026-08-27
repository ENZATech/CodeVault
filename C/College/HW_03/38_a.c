#include<stdio.h>
int main(){
    int x;
    int y;
    int z=0;
    int a=1;
    int b;
    int n=1;

    // Two's Complement.

    printf("Enter the binary: ");
    scanf("%d", &x);

    int i=x;
    while(i!=0){
        y=i%10;
        i=i/10;
        if(n%2==0);{
            if(y==1){
                b=0;
            }
            else if(y==0){
                b=1;
            }
            y=b;
        }
        n++;

        // printf("%d \n", n);

        z=z+(y*a);
        a=a*10;
    }
    printf("%d", z);

    return 0;
}