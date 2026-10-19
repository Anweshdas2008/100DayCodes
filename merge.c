// Merge two arrays.

#include <stdio.h>

int main() {
    int arr1[100], arr2[100], merged[200];
    int size1, size2, mergedSize;
    int i, j;

    printf("Enter the number of elements for the first array: ");
    scanf("%d", &size1);
    printf("Enter %d elements: ", size1);
    for (i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements for the second array: ");
    scanf("%d", &size2);
    printf("Enter %d elements: ", size2);
    for (i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    mergedSize = size1 + size2;

    for (i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }

    for (j = 0; j < size2; j++) {
        merged[i] = arr2[j];
        i++;
    }

    printf("\nThe merged array is: ");
    for (i = 0; i < mergedSize; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
