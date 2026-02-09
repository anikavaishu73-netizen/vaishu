#include <stdio.h>
#include <ctype.h>

int main() {
    char s[50];
    gets(s);

    if(!(isalpha(s[0]) || s[0] == '_')) {
        printf("Invalid Identifier");
        return 0;
    }

    for(int i = 1; s[i]; i++) {
        if(!(isalnum(s[i]) || s[i] == '_')) {
            printf("Invalid Identifier");
            return 0;
        }
    }

    printf("Valid Identifier");
    return 0;
}
