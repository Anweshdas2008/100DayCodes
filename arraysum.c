// Find the sum of array elements.

#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("Sum of all elements in the array = %d\n", sum);

    return 0;
}
