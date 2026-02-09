#include <stdio.h>

int main() {
    char str[100];
    int freq[256]={0};

    fgets(str,100,stdin);
    for(int i=0;str[i];i++)
        freq[str[i]]++;

    for(int i=0;str[i];i++)
        if(freq[str[i]]==1) {
            printf("%c",str[i]);
            return 0;
        }

    printf("None");
    return 0;
}
