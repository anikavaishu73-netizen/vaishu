#include <stdio.h>

int main() {
    char s[100];
    gets(s);

    printf("Characters at even positions:\n");
    for(int i = 0; s[i]; i++)
        if(i % 2 == 0)
            printf("%c ", s[i]);

    return 0;
}
