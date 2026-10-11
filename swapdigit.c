// Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum;
    int firstDigit, lastDigit;
    int digitsCount = 0;
    int swappedNum = 0;

    printf("Enter any number: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    originalNum = num;

    int isNegative = 0;
    if (num < 0) {
        isNegative = 1;
        num = -num;
    }

    if (num < 10) {
        printf("Swapped number: %d\n", originalNum);
        return 0;
    }

    lastDigit = num % 10;

    digitsCount = (int)log10(num);

    firstDigit = (int)(num / pow(10, digitsCount));
    
    swappedNum = lastDigit * (int)pow(10, digitsCount); 
    swappedNum += num % (int)pow(10, digitsCount);     
    swappedNum -= lastDigit;                           
    swappedNum += firstDigit;                          

    if (isNegative) {
        swappedNum = -swappedNum;
    }

    printf("Original number: %d\n", originalNum);
    printf("Swapped number : %d\n", swappedNum);

    return 0;
}
