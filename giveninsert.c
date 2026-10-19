// Insert an element in an array at a given position.

#include <stdio.h>

int main() {
    int array[100];
    int size, i, element, position;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);
    printf("Enter the position (1 to %d) where you want to insert it: ", size + 1);
    scanf("%d", &position);

    if (position < 1 || position > size + 1) {
        printf("Invalid position! Please enter a position between 1 and %d.\n", size + 1);
    } else {
        for (i = size; i >= position; i--) {
            array[i] = array[i - 1];
        }

        array[position - 1] = element;

        size++;

        printf("Resultant array is:\n");
        for (i = 0; i < size; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
    }

    return 0;
}
