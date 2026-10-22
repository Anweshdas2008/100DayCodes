// Reverse a string.

#include <stdio.h>

int main() {
    char str[100];
    int len = 0;
    int left, right;
    char temp;

    printf("Enter a string: ");
    scanf("%[^\n]", str); 

    while (str[len] != '\0') {
        len++;
    }

    left = 0;
    right = len - 1;

    while (left < right) {
        temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
