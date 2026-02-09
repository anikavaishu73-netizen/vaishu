#include <stdio.h>

int main() {
    char str[200];
    int freq[256]={0};

    fgets(str,200,stdin);
    for(int i=0; str[i]; i++)
        freq[(unsigned char)str[i]]++;

    for(int i=0;i<256;i++)
        if(freq[i]>0 && i!='\n')
            printf("%c = %d\n", i, freq[i]);

    return 0;
}
