#include <stdio.h>

int main() {
    char str[100], res[100];
    int j=0;

    fgets(str,100,stdin);
    for(int i=0; str[i]; i++)
        if(str[i]!=' ')
            res[j++]=str[i];

    res[j]='\0';
    printf("%s",res);
    return 0;
}
