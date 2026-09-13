#include <stdio.h>

void incr(int a[], int n) {
    // Outer loop: target rank 'k' from smallest (n-1 elements greater) to largest (0 elements greater)
    for (int k = n - 1; k >= 0; k--) {
        for (int i = 0; i < n; i++) {
            int m = 0;
            // Count how many elements are strictly greater than a[i]
            for (int j = 0; j < n; j++) {
                if (a[i] < a[j]) {
                    m++;
                }
            }
            // If exactly 'k' elements are greater, a[i] is the correct number to print next
            if (m == k) {
                printf("%d ", a[i]);
                break; 
            }
        }
    }
    printf("\n");
}

int main() {
    int arr[50] = {5, 4, 8, 1, 7, 9};

    printf("The elements in increasing order: ");
    incr(arr, 6);

    return 0;
}