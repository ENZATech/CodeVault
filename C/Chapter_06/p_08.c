#include<stdio.h>
int prime(int);

int prime(int a){
    int n = 2;
    if(a<=0){
        return 0;
    }
    while(n<a/2){
        if(a%n==0){
            return 0;
            break;
        }
        else{
            n++;
            continue;
        }
        
    }
    if(n==(a/2)){
        return 1;
    }
}

int main(){
    int x;
    
    printf("Enter the number: ");
    scanf("%d", &x);

    printf("%d", prime(x));

    return 0;
}