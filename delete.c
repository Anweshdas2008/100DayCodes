// Delete an element from an array.

#include <stdio.h>

int main() {
    int arr[100];
    int size, i, position;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the index (0 to %d) of the element to delete: ", size - 1);
    scanf("%d", &position);

    if (position < 0 || position >= size) {
        printf("Deletion not possible. Invalid index!\n");
    } else {
        for (i = position; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }

        size--;

        printf("Resultant array after deletion:\n");
        for (i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
