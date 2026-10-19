// Search in a sorted array using binary search.

#include <stdio.h>

int main() {
    int n, search, first, last, middle;
    int flag = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter %d integers (in sorted ascending order):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the value to find: ");
    scanf("%d", &search);

    first = 0;
    last = n - 1;

    while (first <= last) {
        middle = first + (last - first) / 2; 

        if (array[middle] == search) {
            printf("Element %d found at index %d (Position %d).\n", search, middle, middle + 1);
            flag = 1;
            break;
        } 
        else if (array[middle] < search) {
            first = middle + 1;
        } 
        else {
            last = middle - 1;
        }
    }

    if (flag == 0) {
        printf("Element %d is not present in the array.\n", search);
    }

    return 0;
}
