#include<stdio.h>
int main(){
    int x;
    int y;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    if(x>y){
        int n=0;
        while(x>y){
            y++;
            n++;
        }
        x=x-n;
    }
    else if(x<y){
        int n=0;
        while(x<y){
            x++;
            n++;
        }
        y=y-n;
    }

    printf("The swapped value of given values is: \n");
    printf("x = %d \n", x);
    printf("y = %d \n", y);

    return 0;
}