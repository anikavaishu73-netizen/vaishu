#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    gets(s);

    char *at = strchr(s,'@');
    char *dot = strrchr(s,'.');

    if(at && dot && at < dot)
        printf("Valid");
    else
        printf("Invalid");
    return 0;
}

