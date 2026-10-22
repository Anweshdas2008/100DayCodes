// Check if a string is a palindrome.

#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
    int is_palindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[length] != '\0') {
        length++;
    }

    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome) {
        printf("\"%s\" is a palindrome.\n", str);
    } else {
        printf("\"%s\" is NOT a palindrome.\n", str);
    }

    return 0;
}
