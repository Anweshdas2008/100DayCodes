// Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, si, ci;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter annual interest rate (in %%): ");
    scanf("%f", &rate);

    printf("Enter time period (in years): ");
    scanf("%f", &time);

    si = (principal * rate * time) / 100;

    ci = principal * pow((1 + rate / 100), time) - principal;

    printf("\nSimple Interest = %.2f\n", si);
    printf("Compound Interest = %.2f\n", ci);

    return 0;
}
