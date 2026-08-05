#include<stdio.h>
    int main(){
        int x;
        int y;
        int z;

        printf("Enter First angle: ");
        scanf("%d", &x);

        printf("Enter Second angle: ");
        scanf("%d", &y);

        printf("Enter Third angle: ");
        scanf("%d", &z);

        if(x>0 && y>0 && z>0){
            if((x+y+z)==180){
                printf("These angles will make an triangle.");
            }
            else if((x+y+z)!=180){
                printf("These angles will not make a triangle.");
            }
            else{
                printf("Invalid Input.");
            }
        }
        else{
            printf("Invalid input.");
        }
    }