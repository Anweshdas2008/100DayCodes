// Print all sub-strings of a string.

#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    while (str[length] != '\0') {
        length++;
    }

    printf("\nAll possible substrings:\n");

    for (int start = 0; start < length; start++) {  
        for (int end = start; end < length; end++) {
            for (int k = start; k <= end; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
