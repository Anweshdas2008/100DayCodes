// Find the second largest element in an array.

#include <stdio.h>
#include <limits.h>

int main() {
    int arr[100], size, i;
    int first, second;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    if (size < 2) {
        printf("Invalid input. The array must have at least 2 elements.\n");
        return 0;
    }

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    first = second = INT_MIN;

    for (i = 0; i < size; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } 
        else if (arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    if (second == INT_MIN) {
        printf("There is no unique second largest element (all elements might be equal).\n");
    } else {
        printf("The largest element is: %d\n", first);
        printf("The second largest element is: %d\n", second);
    }

    return 0;
}
