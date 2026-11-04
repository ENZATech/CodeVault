#include <stdio.h>

int main() {
    int arr_size; 
    int value;
    int pos;

    printf("Enter number of elements in the array: ");
    scanf("%d", &arr_size);

    if (arr_size < 0) {
        printf("Array size cannot be negative.\n");
        return 1;
    }

    int arr[arr_size + 1];

    printf("Enter %d elements: ", arr_size);
    int i;
    for (i = 0; i < arr_size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &value);

    printf("Enter the position to insert (1 to %d): ", arr_size + 1); 
    scanf("%d", &pos);

    if (pos < 1 || pos > arr_size + 1) {
        printf("Invalid position! Please enter a position between 1 and %d\n", arr_size + 1);
        return 1;
    }

    for (i = arr_size; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = value;
    arr_size++;

    printf("Array after insertion:\n");
    for (i = 0; i < arr_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}