#include<stdio.h>
int main(){
    int x;
    int y;
    int z;
    int n=0;
    int m=1;
    int a=1;
    int b=0;
    int c=0;

    printf("Enter the number: ");
    scanf("%d", &x);

    int i=x;
    while(i!=0){
        y=i%10;
        i=i/10;
        if(n==0){
            z=y;
        }
        else{
            b=b+(y*a);
            a=a*10;
        }
        n++;
    }
    while(n>2){
        m=m*10;
        // printf("%d \n", m);
        n--;
    }
    c=b%m;
    printf("%d%d%d", z, c, y);

    return 0;
}