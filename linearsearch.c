// Search for an element in an array using linear search.

#include <stdio.h>

int main() {
    int array[100], search, c, n;
    int found = 0;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d integer(s):\n", n);
    for (c = 0; c < n; c++) {
        scanf("%d", &array[c]);
    }

    printf("Enter a number to search: ");
    scanf("%d", &search);

    for (c = 0; c < n; c++) {
        if (array[c] == search) {
            printf("%d is present at index %d (position %d).\n", search, c, c + 1);
            found = 1; 
            break;
        }
    }

    if (!found) {
        printf("%d is not present in the array.\n", search);
    }

    return 0;
}
