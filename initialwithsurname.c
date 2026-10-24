// Print initials of a name with the surname displayed in full.

#include <stdio.h>

int main() {
    char name[100];
    int len = 0;
    int last_space_index = -1;

    printf("Enter full name: ");
    scanf("%[^\n]", name); 

    while (name[len] != '\0') {
        if (name[len] == ' ') {
            last_space_index = len;
        }
        len++;
    }

    if (last_space_index == -1) {
        printf("%s\n", name);
        return 0;
    }

    if (name[0] != ' ') {
        printf("%c.", name[0]);
    }

    for (int i = 1; i < last_space_index; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ') {
            printf("%c. ", name[i + 1]);
        }
    }

    for (int i = last_space_index + 1; i < len; i++) {
        printf("%c", name[i]);
    }
    
    printf("\n");

    return 0;
}
