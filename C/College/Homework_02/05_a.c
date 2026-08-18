#include<stdio.h>
int main(){
    int x;
    int y = 2;
    int i=1;

    printf("Enter the number to where you have to find prime numbers: ");
    scanf("%d", &x);

    y>=2; y<=(x-1);

    while(i<=x){
        if(i%y!=0){

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