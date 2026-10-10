// Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

int main() {
    int num;
    
    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (num == 0) {
        printf("Binary representation: 0\n");
        return 0;
    }

    printf("Binary representation: ");

    int total_bits = sizeof(int) * 8;
    
    int leading_zero = 1; 

    for (int i = total_bits - 1; i >= 0; i--) {
        int bit = (num >> i) & 1;

        if (bit == 1) {
            leading_zero = 0;
        }

        if (!leading_zero) {
            printf("%d", bit);
        }
    }
    
    printf("\n");
    return 0;
}
