// Write a program to take a string input. Change it to sentence case.

#include <stdio.h>
#include <ctype.h>

void convertToTitleCase(char *str) {
    int i = 0;
    int newWord = 1;

    while (str[i] != '\0') {
        if (isspace(str[i])) {
            newWord = 1;
        } 
        else if (newWord && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            newWord = 0;
        } 
        else if (isalpha(str[i])) {
            str[i] = tolower(str[i]);
        }
        i++;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    convertToTitleCase(str);

    printf("Output: %s", str);

    return 0;
}
