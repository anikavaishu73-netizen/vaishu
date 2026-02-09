#include <stdio.h>

int main() {
    char str[100];
    int i, len=0, flag=1;

    fgets(str,100,stdin);
    while(str[len] && str[len]!='\n') len++;

    for(i=0;i<len/2;i++)
        if(str[i]!=str[len-i-1]) {
            flag=0; break;
        }

    if(flag) printf("Palindrome");
    else printf("Not Palindrome");
    return 0;
}
