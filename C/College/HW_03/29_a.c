#include<stdio.h>
int main(){
    int x;
    int y;
    int z;
    
    printf("Enter the number to find its prime factorisation: ");
    scanf("%d", &x);

    int i=x;
//    while(i!=1){
        int n;
        n=2;
        while(n<i){

            if(i%n==0){
                i=i/n;
                printf("%d \n", n);
            }
            else{
                n++;
                continue;
            }
        n++;
        }

//    }

    return 0;
}#?