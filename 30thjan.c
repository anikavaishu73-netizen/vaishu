// program to count the frequency of each character in string
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};   // Frequency array for ASCII characters
    int i;

    // Input string
    printf("Enter a string: ");
    gets(str);

    // Count frequency of each character
    for (i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;
    }

    // Display frequency of characters
    printf("\nFrequency of each character:\n");
    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("Character '%c' occurs %d times\n", i, freq[i]);
        }
    }

    return 0;
}








































