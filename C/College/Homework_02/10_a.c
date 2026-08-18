#include<stdio.h>
int main (){
    int x;
    int y=0;
    int n=1;

    printf("Enter the numbers you want to sum. \n");

    while(x>=0){
        printf("Enter %d number: ", n);
        scanf("%d", &x);
        if(x>=0){
            y=y+x;
            n++;
        }
        else{
            break;
        }
    }
    printf("The Total sum of the input is: %d", y);

    return 0;
}