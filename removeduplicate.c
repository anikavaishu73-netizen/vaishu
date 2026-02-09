#include <stdio.h>

int main() {
    char str[100];
    int seen[256]={0};

    fgets(str,100,stdin);
    for(int i=0;str[i];i++)
        if(!seen[str[i]]) {
            printf("%c",str[i]);
            seen[str[i]]=1;
        }

    return 0;
}
