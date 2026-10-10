// Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main() {
    char operator;
    int num1, num2;

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    switch (operator) {
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
            
        case '-':
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
            
        case '*':
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
            
        case '/':
            if (num2 != 0) {
                printf("%d / %d = %.2f\n", num1, num2, (float)num1 / num2);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
            
        case '%':
            if (num2 != 0) {
                printf("%d %% %d = %d\n", num1, num2, num1 % num2);
            } else {
                printf("Error! Modulo by zero is not allowed.\n");
            }
            break;
            
        default:
            printf("Error! '%c' is an invalid operator.\n", operator);
            break;
    }

    return 0;
}

