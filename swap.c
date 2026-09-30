// Write a program to swap two numbers using a third variable.

#include <stdio.h>

int main() {
    int first, second, temp;

    printf("Enter first number: ");
    scanf("%d", &first);
    printf("Enter second number: ");
    scanf("%d", &second);

    printf("\nBefore swapping:\n");
    printf("First number = %d\n", first);
    printf("Second number = %d\n", second);

    temp = first;
    first = second;
    second = temp;

    printf("\nAfter swapping:\n");
    printf("First number = %d\n", first);
    printf("Second number = %d\n", second);

    return 0;
}
