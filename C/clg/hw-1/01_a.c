#include<stdio.h>
    int main(){
        int x;
        int y;
        int z;

        printf("Enter first num: ");
        scanf("%d", &x);

        printf("Enter second num: ");
        scanf("%d", &y);

        printf("Enter third num: ");
        scanf("%d", &z);

        if(x>='0' && x<='9' && y>='0' && y<='9' && z>='0' && z<='9'){
            if(x>y && x>z){
                printf("%d is the greatest num", x);
            }
            else if(y>z && y>x){
                printf("%d is the greatest num", y);
            }
            else if(z>y && z>x){
                printf("%d is the greatest num", z);
            }
            else{
                printf("Two or more numbers are same.!!");
            }
        }
        else{
            printf("Invalid character");
        }
    }