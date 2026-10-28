// Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

#include <stdio.h>
#include <string.h>

#define MAX_LEN 100005

int lengthOfLongestSubstring(char *s) {
    int last_seen[256];
    
    for (int i = 0; i < 256; i++) {
        last_seen[i] = -1;
    }
    
    int max_len = 0;
    int start = 0;
    
    for (int end = 0; s[end] != '\0'; end++) {
        unsigned char current_char = (unsigned char)s[end];
        
        if (last_seen[current_char] >= start) {
            start = last_seen[current_char] + 1;
        }
        
        last_seen[current_char] = end;
        
        int current_len = end - start + 1;
        
        if (current_len > max_len) {
            max_len = current_len;
        }
    }
    
    return max_len;
}

int main() {
    char s[MAX_LEN];
    
    printf("Enter a string: ");
    if (fgets(s, sizeof(s), stdin) != NULL) {
        size_t len = strlen(s);
        if (len > 0 && s[len - 1] == '\n') {
            s[len - 1] = '\0';
        }
        
        int result = lengthOfLongestSubstring(s);
        printf("Length of the longest substring without repeating characters: %d\n", result);
    }
    
    return 0;
}
