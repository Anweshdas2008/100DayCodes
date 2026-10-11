// Write a program to find the LCM of two numbers.

#include <stdio.h>
int find_gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % temp;
        a = temp;
    }
    return a;
}

int find_lcm(int a, int b) {
    return (a / find_gcd(a, b)) * b;
}

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    int lcm = find_lcm(num1, num2);
    printf("The LCM of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}


