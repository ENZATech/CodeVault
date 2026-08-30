#include<stdio.h>
int main(){
    int x;
    int y;
    int z=0;

    // Decimal Number system to Hexadecimal Number System...
    printf("Enter the Decical Number: ");
    scanf("%d", &x);

    int n=1;
    int m=0;
    int i=x;
    while(i!=0){
        y=i%16;
        z= z + (y*n);
        n=n*10;
        i=i/16;
        if(y<=9){
            printf("%d", y);
        }
        else if(y==10){
            printf("A");
        }
        else if(y==11){
            printf("B");
        }
        else if(y==12){
            printf("C");
        }
        else if(y==13){
            printf("D");
        }
        else if(y==14){
            printf("E");
        }
        else if(y==15){
            printf("F");

        }
        
    }

    // printf("The Hexadecimal value of given decimal number is: \n");
    // printf("%d", z);
    return 0;
}