#include <stdio.h>

// Function to find the maximum element
int findMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Function to find the minimum element
int findMin(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int x;

    printf("Enter the number of elements: ");
    scanf("%d", &x);

    int arr[x];

    printf("Enter %d elements:\n", x);
    for (int i = 0; i < x; i++) {
        scanf("%d", &arr[i]);
    }

    int max = findMax(arr, x);
    int min = findMin(arr, x);

    printf("Maximum number is: %d\n", max);
    printf("Minimum number is: %d\n", min);

    return 0;
}