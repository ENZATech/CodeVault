#include<stdio.h>
int main(){
    int x;
    int y;
    int z;
    int b=0;
    int c=0;
    
    // Strong number or not!

    printf("Enter the number: ");
    scanf("%d", &x);

    int i=x;
    while(i!=0){
        y=i%10;
        i=i/10;

        int a=1;
        z=y;
        while(z!=0){
            a=a*z;
            z--;
            printf("%d \n", a);
            printf("%d \n", z);
            // printf("%d \n", a);
        }
        b=b+a;
        c=b;
        printf("%d \n", b);
    }
    printf("%d \n", c);
    if(b==x){
        printf("This is a Strong number.!");
    }
    else{
        printf("This is not a Strong number.");
    }

    return 0;
}