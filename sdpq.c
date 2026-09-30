// Write a program to input two numbers and display their sum, difference, product and quotient.

#include <stdio.h>

int main() {
    float num1, num2;
    float sum, diff, prod, quot;

    printf("Enter first number: ");
    scanf("%f", &num1);
    
    printf("Enter second number: ");
    scanf("%f", &num2);

    sum  = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;
    quot = num1 / num2;

    printf("\nResults:\n");
    printf("Sum        = %.2f\n", sum);
    printf("Difference = %.2f\n", diff);
    printf("Product    = %.2f\n", prod);
    printf("Quotient   = %.2f\n", quot);

    return 0;
}
