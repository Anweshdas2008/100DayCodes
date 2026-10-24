// Reverse each word in a sentence without changing the word order.

#include <stdio.h>

int main() {
    char str[200];
    int i = 0, word_start = 0, word_end = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]s", str);

    while (1) {
        if (str[i] == ' ' || str[i] == '\0') {
            word_end = i - 1;

            while (word_start < word_end) {
                char temp = str[word_start];
                str[word_start] = str[word_end];
                str[word_end] = temp;
                
                word_start++;
                word_end--;
            }

            word_start = i + 1;
        }

        if (str[i] == '\0') {
            break;
        }

        i++;
    }

    printf("Modified sentence: %s\n", str);

    return 0;
}
