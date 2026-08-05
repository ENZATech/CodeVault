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

        if((x+y+z)==180 && x>0 && y>0 && z>0){
            if(x==y && y==z && x==z){
                printf("This is an Equilateral Triangle.");
            }
            else if((x==y) || (y==z) || (x==z)){
                printf("This is an Isosceles Trianlge.");
            }
            else{
                printf("This is a Scalene Triangle");
            }
        }
        else{
            printf("These angles will not make a Trianlgle.");
        }
    }