#include<stdio.h>
int main(){
    int m;
    int n;

    printf("Enter the starting integer m: ");
    scanf("%d", &m);

    int i=m;

    printf("Enter the end integer n: ");
    scanf("%d", &n);

    while(i>=m && i<=n){
        if(i%2==0){
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