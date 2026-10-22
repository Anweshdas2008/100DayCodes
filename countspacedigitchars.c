// Count spaces, digits, and special characters in a string.

#include <stdio.h>

int main() {
    char str[200];
    int spaces = 0;
    int digits = 0;
    int alphabets = 0;
    int special_chars = 0;
    int i = 0;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 1;
    }

    while (str[i] != '\0') {
        if (str[i] == '\n') {
            i++;
            continue;
        }

        if (str[i] == ' ') {
            spaces++;
        } 
        else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } 
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            alphabets++;
        } 
        else {
            special_chars++;
        }
        i++;
    }

    printf("\n--- Results ---\n");
    printf("Spaces:             %d\n", spaces);
    printf("Digits:             %d\n", digits);
    printf("Special Characters: %d\n", special_chars);

    return 0;
}
