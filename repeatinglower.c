// Find the first repeating lowercase alphabet in a string.

#include <stdio.h>

int main() {
    char str[1000];
    
    int freq[26] = {0};
    
    char result = '\0';
    int i = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            int index = str[i] - 'a';
            
            if (freq[index] > 0) {
                result = str[i];
                break;
            }
            
            freq[index]++;
        }
        i++;
    }

    if (result != '\0') {
        printf("The first repeating lowercase alphabet is: '%c'\n", result);
    } else {
        printf("No repeating lowercase alphabets found.\n");
    }

    return 0;
}
