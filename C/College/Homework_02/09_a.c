#include<stdio.h>
int main(){
    int x;
    int y;
    int i;

    printf("Enter a number: ");
    scanf("%d", &x);

    printf("The reversed of the given number %d is:", x);

    while(x!=0){
        y=x%10;
        x=x/10;

        printf("%d", y);
    }

    return 0;
}