#include <stdio.h> 
int main() {
    int x;
    int sum=0;

    printf("Enter number : ");
    scanf("%d", &x);

    int n = 2;
    while (n <= x) {
        int prime = 1;

        int i = 2;
        while (i <= n / 2) {
            if (n % i == 0) {
                prime = 0;
                i++;
                break;
            }
            i++;
        }
        if (prime) {
            sum=sum+n;
        }
        n++;
    }
    printf("The total sum of prime numbers between 1 to %d is: %d", x, sum);

    return 0;
}