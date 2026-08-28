#include<stdio.h>
int main(){
    int x;
    int y;

    printf("Enter the interval in which you have to find prime numbers. \n");
    printf("Enter n: ");
    scanf("%d", &x);

    printf("Enter m: ");
    scanf("%d", &y);

    int n=x;
    while(n <= y){
        int prime = x;
        int i=2;

        while(i<=n/2){
            if(n%i==0){
                prime=0;
                i++;
                break;
            }
            i++;
        }

        if(prime){
        printf("%d \n", n);
        }
        n++;
    }
}