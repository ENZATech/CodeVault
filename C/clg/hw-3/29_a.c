#include<stdio.h>
int main(){
    int x;
    int y;
    int z;
     
    // Prime Factors of all numbers.
    printf("Enter the number to find its all factors: ");
    scanf("%d", &x);

    int i=x;
    printf("The factors of given input: ");
    while(i!=1){
        int n=2;
        while(i>=n){
            if(i%n==0){
                i=i/n;
                printf("%d, ", n);
            }
            else{
                n++;
                continue;
            }
        }
        n++;
    }

    return 0;
}