#include<stdio.h>
    int main(){
        int x;
        int f = 1;

        printf("Enter a number: ");
        scanf("%d", &x);

        for(int n = x; n>=1; n--){
            f = f * n;
        }
        printf("The factorial of %d is: %d", x, f);

        return 0;
    }