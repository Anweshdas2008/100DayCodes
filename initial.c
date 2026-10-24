// Print the initials of a name.

#include <stdio.h>
#include <ctype.h>

int main() {
    char name[100];
    int i = 0;

    printf("Enter a full name: ");
    if (fgets(name, sizeof(name), stdin) == NULL) {
        return 1; 
    }

    printf("Initials: ");

    if (name[0] != '\0' && !isspace((unsigned char)name[0])) {
        printf("%c.", toupper((unsigned char)name[0]));
    }

    while (name[i] != '\0') {
        if (isspace((unsigned char)name[i])) {
            if (name[i + 1] != '\0' && !isspace((unsigned char)name[i + 1])) {
                printf("%c.", toupper((unsigned char)name[i + 1]));
            }
        }
        i++;
    }

    printf("\n");
    return 0;
}
