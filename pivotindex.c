// Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.

#include <stdio.h>

int findPivotIndex(int arr[], int size) {
    int totalSum = 0;
    int leftSum = 0;

    for (int i = 0; i < size; i++) {
        totalSum += arr[i];
    }

    for (int i = 0; i < size; i++) {
        if (leftSum == (totalSum - leftSum - arr[i])) {
            return i;
        }
        leftSum += arr[i];
    }

    return -1;
}

int main() {
    int size;

    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &size) != 1 || size <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[size];

    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int pivotIndex = findPivotIndex(arr, size);
    printf("Pivot Index: %d\n", pivotIndex);

    return 0;
}

