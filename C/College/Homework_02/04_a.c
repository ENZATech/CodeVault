#include<stdio.h>
int main(){
    int x;
    int y;
    int i=1;

    printf("Enter the number to where you have to print odd numbers: ");
    scanf("%d", &x);

    while(i<=x){
        if(i%2!=0){
            printf("%d \n", i);
            i++;
        }
        else{
            i++;
            continue;
        }
    }

    return 0;
}