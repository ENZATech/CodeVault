
#include <stdio.h>

// Function prototype: takes the array and its size
void reverse(int arr[], int n);

void reverse(int arr[], int n) {
    int temp;
    // Swap elements from the outside in: index i with index (n - 1 - i)
    for (int i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
}

int main() {
    int arr[5];

    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Pass the array and size to reverse it in-place
    reverse(arr, 5);

    printf("Reversed array:\n");
    for (int j = 0; j < 5; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    return 0;
}