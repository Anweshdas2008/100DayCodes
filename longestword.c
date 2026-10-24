// Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>

int main() {
    char sentence[100];
    char current_word[100];
    char longest_word[100] = "";
    
    int i, word_len = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    sentence[strcspn(sentence, "\n")] = '\0';

    for (i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == ' ') {
            if (word_len > 0) {
                current_word[word_len] = '\0';
                
                if (strlen(current_word) > strlen(longest_word)) {
                    strcpy(longest_word, current_word);
                }
                word_len = 0;
            }
        } else {
            current_word[word_len] = sentence[i];
            word_len++;
        }
    }

    if (word_len > 0) {
        current_word[word_len] = '\0';
        if (strlen(current_word) > strlen(longest_word)) {
            strcpy(longest_word, current_word);
        }
    }

    printf("The longest word is: %s\n", longest_word);

    return 0;
}
