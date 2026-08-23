#include<stdio.h>
int factorial(int);

    // Factorial(5) = 1 x 2 x 3 x 4 x 5
    // Factorial(5) = 1 x 2 x 3 x 4 
    // Factorial(5) = 1 x 2 x 3 
    // Factorial(5) = 1 x 2 
    // Factorial(n) = 1 x 2 x ... (n-1) x n
    // Factorial(n-1) = 1 x 2 x ... x (n-1)

int factorial(int n){
    if(n==1 || n==0){
        return 1;
    }
    // Factorial(n) = Factorial(n-1) x n
    return factorial(n-1) * n;
}

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("The factorial of of %d is %d", a, factorial(a));
    return 0;
 }