// Find the digit that occurs the most times in an integer number.

#include <stdio.h>
#include <stdlib.h>

int main() {
    long long number, temp;
    int digit_counts[10] = {0};
    int most_frequent_digit = 0;
    int max_count = 0;

    printf("Enter an integer number: ");
    if (scanf("%lld", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    temp = llabs(number);

    if (temp == 0) {
        digit_counts[0] = 1;
    }

    while (temp > 0) {
        int digit = temp % 10;
        digit_counts[digit]++;
        temp = temp / 10;
    }

    for (int i = 0; i < 10; i++) {
        if (digit_counts[i] > max_count) {
            max_count = digit_counts[i];
            most_frequent_digit = i;
        }
    }

    printf("\nThe digit that occurs the most is: %d\n", most_frequent_digit);
    printf("It appeared %d time(s).\n", max_count);

    return 0;
}
