#include<stdio.h>
int main(){

    for(int i=0; i<=30; i++){
        for (int j=0; j<=18; j++){
            for (int k=0; k<=45; k++){
                if(3*i+5*j+2*k==90 && i+2*j+3*k==90){
                    printf("%d \n", i);
                    printf("%d \n", 2*j);
                    printf("%d \n", 3*k);
                }
            }
        }
    }

    return 0;
}