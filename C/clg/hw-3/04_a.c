#include<stdio.h>
int main(){
    int x =100;
    
    printf("All the even numbers from 1 to 100 are: ");
    int i=0;
    while(i<=x){
        if(i%2==0){
            printf("%d \n", i);
            i++;
        }
        else
        i++;
        continue;
    }
    return 0;
}