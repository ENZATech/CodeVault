#include <stdio.h> 
int main() {
    int x;
    int y;

    printf("Enter number : ");
    scanf("%d", &x);
    
    printf("Enter m: ");
    scanf("%d", &y);


    printf("Prime numbers between 1 and %d are :\n", x);

    int n = x;
    while (n <= y) {
        int prime = x;
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