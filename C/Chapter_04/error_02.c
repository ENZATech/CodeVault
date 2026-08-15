#include <stdio.h>

int main() {
    int n;
    int a = 0;       // First term
    int b = 1;       // Second term
    int next_term;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; i++) {
        printf("%d ", a);      // 1. Print the current term
        next_term = a + b;     // 2. Calculate the next term
        a = b;                 // 3. Shift 'b' to 'a'
        b = next_term;         // 4. Shift 'next_term' to 'b'
    }

    printf("\n");
    return 0;
}