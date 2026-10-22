// Count characters in a string without using built-in length functions.

#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    
    if (fgets(str, sizeof(str), stdin) != NULL) {
        
        while (str[count] != '\0') {
            count++;
        }
        
        if (count > 0 && str[count - 1] == '\n') {
            str[count - 1] = '\0';
            count--;
        }

        printf("The string is: \"%s\"\n", str);
        printf("Number of characters: %d\n", count);
    }

    return 0;
}
