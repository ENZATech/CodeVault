#include <stdio.h> 
int main() {
    int x;

    printf("Enter number : ");
    scanf("%d", &x);

    printf("Prime numbers between 1 and %d are :\n", x);

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
            printf("%d\n", n);
        }
        n++;
    }
}