#include<stdio.h>
int main(){
    int x;
    int y;
    int z;
    int a=0;
    
    // Strong number or not!

    printf("Enter the number: ");
    scanf("%d", &x);

    int i=x;
    while(i!=0){
        y=i%10;
        i=i/10;

        z=y;
        while(z!=0){
            a=a+z*(z-1);
            z--;
        }
    }
    if(a==x){
        printf("This is a Strong number.!");
    }
    else
    printf("This is not a Strong number.");

    return 0;
}