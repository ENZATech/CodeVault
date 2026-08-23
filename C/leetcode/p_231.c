#include<stdio.h>
int main(){
    int x;

    printf("Enter the number: ");
    scanf("%d", &x);
    
    if(x==0){
        printf("False");
    }
    while(x!=1){
        int i=x;
        if(i%2==0){
            x=x/2;
            continue;
        }
        else{
            printf("False.");
            break;
        }
    }
    if(x==1){
    printf("True.");
    }
    return 0;
}