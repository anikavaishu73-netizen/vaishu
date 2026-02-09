#include <stdio.h>

int main() {
    char s1[100], s2[100];
    int i=0;

    fgets(s1,100,stdin);
    fgets(s2,100,stdin);

    while(s1[i] && s2[i] && s1[i]==s2[i]) i++;

    if(s1[i]>s2[i]) printf("String 1 is greater");
    else if(s1[i]<s2[i]) printf("String 2 is greater");
    else printf("Strings are equal");

    return 0;
}
