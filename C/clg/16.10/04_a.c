#include <stdio.h>

// Helper function to copy an array
void copyArray(int src[], int dest[], int n) {
    for (int i = 0; i < n; i++) {
        dest[i] = src[i];
    }
}

// Helper function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/*
 * Sorts the array in-place using the minimum number of swaps.
 * mode = 1 for Increasing (Ascending) order
 * mode = 0 for Decreasing (Descending) order
 * Returns the total number of swaps performed.
 */
int sortWithMinSwaps(int arr[], int n, int mode) {
    int swaps = 0;

    for (int i = 0; i < n - 1; i++) {
        int target_idx = i;

        // Find the index of the minimum (mode == 1) or maximum (mode == 0) element
        for (int j = i + 1; j < n; j++) {
            if (mode == 1 && arr[j] < arr[target_idx]) {
                target_idx = j; // Smaller element found for Increasing order
            } else if (mode == 0 && arr[j] > arr[target_idx]) {
                target_idx = j; // Larger element found for Decreasing order
            }
        }

        // Only swap if the target element is not already in the correct position
        if (target_idx != i) {
            int temp = arr[i];
            arr[i] = arr[target_idx];
            arr[target_idx] = temp;
            swaps++;
        }
    }

    return swaps;
}

int main() {
    int original[] = {4, 3, 1, 2};
    int n = sizeof(original) / sizeof(original[0]);

    int incArr[n], decArr[n];
    copyArray(original, incArr, n);
    copyArray(original, decArr, n);

    printf("Original Array:   ");
    printArray(original, n);
    printf("----------------------------------------\n");

    // 1. Sort in Increasing Order
    int incSwaps = sortWithMinSwaps(incArr, n, 1);
    printf("Increasing Order: ");
    printArray(incArr, n);
    printf("Swaps required (Increasing): %d\n\n", incSwaps);

    // 2. Sort in Decreasing Order
    int decSwaps = sortWithMinSwaps(decArr, n, 0);
    printf("Decreasing Order: ");
    printArray(decArr, n);
    printf("Swaps required (Decreasing): %d\n", decSwaps);
    printf("----------------------------------------\n");

    // Compare which direction took fewer swaps
    if (incSwaps < decSwaps) {
        printf("Best Choice: Increasing order takes fewer swaps (%d).\n", incSwaps);
    } else if (decSwaps < incSwaps) {
        printf("Best Choice: Decreasing order takes fewer swaps (%d).\n", decSwaps);
    } else {
        printf("Both orders require the same minimum number of swaps (%d).\n", incSwaps);
    }

    return 0;
}