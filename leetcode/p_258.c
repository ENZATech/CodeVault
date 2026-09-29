#include<stdio.h>
int main(){
    int num;
    int y=0;
    int z=0;
    int a=0;
    int b=0;

    printf("Enter the number: ");
    scanf("%d", &num);

    while(num){
        while(num!=0){
            y=num%10;
            z=z+y;
            num=num/10;
        }
        int i=z;
        if(i>9){
            while(i!=0){
                a=i%10;
                b=b+a;
                i=i/10;
            }
        }
    }
    if (z>10){
        printf("%d", b);
    }
    else{
        
        printf("%d", z);
    }
    return 0;
}