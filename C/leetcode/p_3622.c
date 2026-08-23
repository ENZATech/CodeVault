#include<stdio.h>
int main(){
    int n;
    int y;
    int sum=0;
    int pro=1;
    int z=0;

    printf("Enter the number: ");
    scanf("%d", &n);

    int i=n;
    while(i!=0){
        y=i%10;
        i=i/10;
        sum = sum+y;
        pro=pro*y;
    }
    z=sum+pro;
    if(n%z==0){
        printf("True.");
    }
    else{
        printf("False.");
    }
    return 0;
}
