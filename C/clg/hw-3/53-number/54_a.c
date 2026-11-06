#include<stdio.h>
int main(){
    int x;
    int y;
    int z=0;
    int a=0;
    int b=0;

    //Number Pattern 54;
    printf("Enter the number: ");
    scanf("%d", &x);

    int i=x;
    int n=0;
    int m=1;
    while(i!=0){
        i=i/10;
        m=m*10;
        n++;
    }
    i=x;
    while(n>0){
        y=i%m;
        m=m/10;
        printf("%d \n", y);
        n--;
    }
    return 0;
}