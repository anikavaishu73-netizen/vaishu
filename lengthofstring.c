#include <stdio.h>

int main() {
    char str[100];
    int len = 0;

    fgets(str, 100, stdin);
    while (str[len] != '\0' && str[len] != '\n')
        len++;

    printf("Length = %d", len);
    return 0;
}
