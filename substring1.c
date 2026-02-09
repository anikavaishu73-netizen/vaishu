#include <stdio.h>

int main() {
    char s[50];
    gets(s);

    for(int i=0; s[i]; i++)
        for(int j=i; s[j]; j++) {
            for(int k=i; k<=j; k++)
                printf("%c", s[k]);
            printf("\n");
        }
    return 0;
}
