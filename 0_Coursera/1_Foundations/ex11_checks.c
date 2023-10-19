#include <stdio.h>

int main() {
    char myString[] = "programming";
    int characterCount[26] = {0}; // Initialize array to store counts for lowercase English letters

    // Count occurrences of each character
    for (int i = 0; myString[i] != '\0'; i++) {
        char c = myString[i];
        if (c >= 'a' && c <= 'z') {
            characterCount[c - 'a']++;
        }
    }

    // Print character counts
    for (int i = 0; i < 26; i++) {
        if (characterCount[i] > 0) {
            printf("Character %c appears %d times.\n", 'a' + i, characterCount[i]);
        }
    }

    return 0;
}
