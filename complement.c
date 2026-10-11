// Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>

int main() {
    long long binary, temp;
    long long reversed = 0;
    int total_digits = 0;

    printf("Enter a binary number: ");
    if (scanf("%lld", &binary) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (binary == 0) {
        printf("1's complement: 1\n");
        return 0;
    }

    temp = binary;
    while (temp > 0) {
        int rem = temp % 10;
        
        if (rem != 0 && rem != 1) {
            printf("Error: Not a valid binary number.\n");
            return 1;
        }
        
        reversed = (reversed * 10) + rem;
        temp /= 10;
        total_digits++;
    }

    printf("1's complement: ");
    while (total_digits > 0) {
        int rem = reversed % 10;
        
        if (rem == 0) {
            printf("1");
        } else {
            printf("0");
        }
        
        reversed /= 10;
        total_digits--;
    }
    printf("\n");

    return 0;
}
