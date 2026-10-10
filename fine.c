/* Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled. */

#include <stdio.h>

int main() {
    int days;
    int fine = 0;

    printf("Enter the number of days the book is late: ");
    if (scanf("%d", &days) != 1 || days < 0) {
        printf("Invalid input. Days late cannot be negative.\n");
        return 1;
    }

    if (days > 30) {
        printf("Membership Cancelled.\n");
    } else {
        if (days <= 5) {
            fine = days * 2;
        } else if (days <= 10) {
            fine = (5 * 2) + ((days - 5) * 4);
        } else {
            fine = (5 * 2) + (5 * 4) + ((days - 10) * 6);
        }
        
        printf("Total Library Fine: ₹%d\n", fine);
    }

    return 0;
}
