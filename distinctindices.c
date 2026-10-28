// Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, target;

    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n < 2) {
        printf("-1 -1\n");
        return 0;
    }

    int *nums = (int *)malloc(n * sizeof(int));
    if (nums == NULL) {
        printf("-1 -1\n");
        return 1;
    }

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) {
            printf("-1 -1\n");
            free(nums);
            return 0;
        }
    }

    printf("Enter the target: ");
    if (scanf("%d", &target) != 1) {
        printf("-1 -1\n");
        free(nums);
        return 0;
    }

    int found = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                found = 1;
                break;
            }
        }
        if (found) {
            break;
        }
    }

    if (!found) {
        printf("-1 -1\n");
    }

    free(nums);
    return 0;
}
