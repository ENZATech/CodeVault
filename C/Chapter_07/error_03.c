// 1 = 3 Lemon
// 2 = 5 Toffee
// 7 = 2 baloon

#include<stdio.h>
int main(){
    int money;
    printf("Enter Money: ");
    scanf("%d", &money);

    int x=3; 
    int y=5;
    int z=2;
    int b;

    b=money/10;

    if(money%10==0){
        x*=b;
        y*=b;
        z*=b;
        printf("You will get %d Lemon, %d Toffee, %d Balloons, \n", x, y, z);
        printf("Total items: %d", x + y + z);
    }
    else{
        printf("It is not possible to get any combination of this condition.");
    }

    return 0;
}