#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int n;
    gets(s);
    scanf("%d",&n);

    int len = strlen(s);
    n %= len;

    for(int i=n; i<len; i++) printf("%c", s[i]);
    for(int i=0; i<n; i++) printf("%c", s[i]);

    return 0;
}
