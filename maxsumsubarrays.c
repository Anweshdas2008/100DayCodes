// Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

#include <stdio.h>
#include <stdlib.h>

long long maxSubarraySum(int arr[], int n, int k) {
    if (n < k) {
        printf("Invalid input: Array size is smaller than k.\n");
        return -1; 
    }

    long long current_sum = 0;
    
    for (int i = 0; i < k; i++) {
        current_sum += arr[i];
    }

    long long max_sum = current_sum;

    for (int i = k; i < n; i++) {
        current_sum += arr[i] - arr[i - k];    
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    return max_sum;
}

int main() {
    int n, k;

    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the subarray size (k): ");
    scanf("%d", &k);

    long long result = maxSubarraySum(arr, n, k);
    if (result != -1) {
        printf("The maximum sum of a subarray of size %d is: %lld\n", k, result);
    }

    free(arr);

    return 0;
}
