// Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int n;

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

    printf("Enter %d integers:\n", n);
    int max_val = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }

    bool *visited = (bool *)calloc(max_val + 1, sizeof(bool));
    if (visited == NULL) {
        printf("Memory allocation failed.\n");
        free(arr);
        return 1;
    }

    int repeated_element = -1;
    bool found = false;

    for (int i = 0; i < n; i++) {
        int current = arr[i];

        if (visited[current]) {
            repeated_element = current;
            found = true;
            break;
        }
        
        visited[current] = true;
    }

    if (found) {
        printf("The repeated element is: %d\n", repeated_element);
    } else {
        printf("No repeated element found.\n");
    }

    free(arr);
    free(visited);

    return 0;
}
