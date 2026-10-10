// Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>

int main() {
    int n;
    unsigned long long product = 1;

    printf("Enter the value of n: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (n < 2) {
        printf("There are no even numbers between 1 and %d.\n", n);
        return 0;
    }

    for (int i = 2; i <= n; i += 2) {
        product *= i;
    }

    printf("The product of even numbers from 1 to %d is: %llu\n", n, product);

    return 0;
}
