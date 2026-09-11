#include<stdio.h>
int main(){
    int x=1;
     
    for( ; ; )
    {
        printf("%d \n", x);
        if(x==11){
            break;
        }
        else 
        x++;
    }
    return 0;
}