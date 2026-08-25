#include<stdio.h>
int main(){
    int x;
    int i = 1;
    int sum = 0;

    printf("Enter the number: ");
    scanf("%d", &x);

    while(i<=x){
        if(i%2!=0){
        sum = sum+i;
        i++;
        }
        else{
            i++;
            continue;
        }
    }
    printf("The sum from 1 to %d is %d.", x, sum);

    return 0;
}