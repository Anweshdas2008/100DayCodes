// Write a program to find the product of odd digits of a number.

#include <stdio.h>
#include <stdlib.h>

int main() {
    long long num;
    long long temp;
    int rem;
    long long product = 1;
    int has_odd_digit = 0;

    printf("Enter a number: ");
    if (scanf("%lld", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    temp = llabs(num);

    if (temp == 0) {
        has_odd_digit = 0;
    } else {
        while (temp > 0) {
            rem = temp % 10;
            if (rem % 2 != 0) {
                product *= rem;
                has_odd_digit = 1;
            }
            
            temp /= 10;
        }
    }

    if (has_odd_digit) {
        printf("The product of the odd digits of %lld is: %lld\n", num, product);
    } else {
        printf("There are no odd digits in %lld. Product is: 0\n", num);
    }

    return 0;
}
