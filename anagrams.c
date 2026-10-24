// Check if two strings are anagrams of each other.

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int len1 = 0, len2 = 0;
    int frequency[256] = {0};
    int isAnagram = 1;

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    while (str1[len1] != '\0') {
        len1++;
    }

    while (str2[len2] != '\0') {
        len2++;
    }

    if (len1 != len2) {
        isAnagram = 0;
    } else {
        for (int i = 0; i < len1; i++) {
            frequency[(unsigned char)str1[i]]++;
            frequency[(unsigned char)str2[i]]--;
        }

        for (int i = 0; i < 256; i++) {
            if (frequency[i] != 0) {
                isAnagram = 0;
                break;
            }
        }
    }

    if (isAnagram) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are NOT anagrams.\n");
    }

    return 0;
}
