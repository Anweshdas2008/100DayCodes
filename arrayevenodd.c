// Count even and odd numbers in an array.

#include <stdio.h>

int main() {
    int size;

    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &size) != 1 || size <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[size];
    int evenCount = 0;
    int oddCount = 0;

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("\nTotal Even numbers: %d\n", evenCount);
    printf("Total Odd numbers: %d\n", oddCount);

    return 0;
}
