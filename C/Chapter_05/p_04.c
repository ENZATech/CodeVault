#include<stdio.h>
int force(int);

int force(int a){
    return 9.8*a;
}

int main(){
    int x;
    
    printf("Enter the mass of object: ");
    scanf("%d", &x);

    printf("%d is the force exerted by earth on the object", force(x));
    
    return 0;
}