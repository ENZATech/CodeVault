#include<stdio.h>
int main(){
    int x;
    int y;
    int z=0;
    int a=1;

    printf("Enter the binary: ");
    scanf("%d", &x);

    int i=x;
    while(i!=0){
        y=i%10;
        i=i/10;
        if(y==1){
            y=0;
            z=z+(y*a);
            a=a*10;
        }
        else if(y==0){
            y=1;
            z=z+(y*a);
            a=a*10;
        }
    }
    printf("%d", z);
    
    return 0;
}