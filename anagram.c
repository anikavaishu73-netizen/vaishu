#include <stdio.h>

int main() {
    char s1[100], s2[100];
    int f1[256]={0}, f2[256]={0};

    fgets(s1,100,stdin);
    fgets(s2,100,stdin);

    for(int i=0;s1[i];i++) f1[s1[i]]++;
    for(int i=0;s2[i];i++) f2[s2[i]]++;

    for(int i=0;i<256;i++)
        if(f1[i]!=f2[i]) {
            printf("Not Anagram");
            return 0;
        }

    printf("Anagram");
    return 0;
}
