// Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>

int main() {
    int num1, num2, originalNum1, originalNum2, temp;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    originalNum1 = num1;
    originalNum2 = num2;

    while (num2 != 0) {
        temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }

    printf("HCF (GCD) of %d and %d is: %d\n", originalNum1, originalNum2, num1);

    return 0;
}
