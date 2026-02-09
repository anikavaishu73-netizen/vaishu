//if a is string a find the longest substring which has no repeationg char , output should be : cba12
#include <stdio.h>
#include <string.h>

void longestUniqueSubstring(char *s) {
    int lastIndex[256];
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    int start = 0, maxLen = 0, startIndex = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (lastIndex[(unsigned char)s[i]] >= start) {
            start = lastIndex[(unsigned char)s[i]] + 1;
        }

        lastIndex[(unsigned char)s[i]] = i;

        if (i - start + 1 > maxLen) {
            maxLen = i - start + 1;
            startIndex = start;
        }
    }

    // print result
    for (int i = startIndex; i < startIndex + maxLen; i++)
        printf("%c", s[i]);
}

int main() {
    char s[] = "abcba12";
    longestUniqueSubstring(s);
    return 0;
}
