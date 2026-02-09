#include <stdio.h>

int main() {
    char str[100], oldc, newc;
    fgets(str,100,stdin);
    scanf(" %c %c",&oldc,&newc);

    for(int i=0;str[i];i++)
        if(str[i]==oldc)
            str[i]=newc;

    printf("%s",str);
    return 0;
}
