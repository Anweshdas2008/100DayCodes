// Write a program to display the month name and number of days using switch-case for a given month number.

#include <stdio.h>

int main() {
    int month;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    switch(month) {
        case 1:
            printf("Month: January\nNumber of days: 31 days\n");
            break;
        case 2:
            printf("Month: February\nNumber of days: 28 or 29 days (Leap Year)\n");
            break;
        case 3:
            printf("Month: March\nNumber of days: 31 days\n");
            break;
        case 4:
            printf("Month: April\nNumber of days: 30 days\n");
            break;
        case 5:
            printf("Month: May\nNumber of days: 31 days\n");
            break;
        case 6:
            printf("Month: June\nNumber of days: 30 days\n");
            break;
        case 7:
            printf("Month: July\nNumber of days: 31 days\n");
            break;
        case 8:
            printf("Month: August\nNumber of days: 31 days\n");
            break;
        case 9:
            printf("Month: September\nNumber of days: 30 days\n");
            break;
        case 10:
            printf("Month: October\nNumber of days: 31 days\n");
            break;
        case 11:
            printf("Month: November\nNumber of days: 30 days\n");
            break;
        case 12:
            printf("Month: December\nNumber of days: 31 days\n");
            break;
        default:
            printf("Invalid input! Please enter a month number between 1 and 12.\n");
    }

    return 0;
}
