#include <stdio.h>
#include <ctype.h>

int main() {
    char s[100];
    int upper=0, lower=0, digit=0, special=0;

    gets(s);

    for(int i = 0; s[i]; i++) {
        if(isupper(s[i])) upper++;
        else if(islower(s[i])) lower++;
        else if(isdigit(s[i])) digit++;
        else special++;
    }

    printf("Uppercase = %d\nLowercase = %d\nDigits = %d\nSpecial = %d",
            upper, lower, digit, special);
    return 0;
}
