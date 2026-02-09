#include <stdio.h>

int main() {
    char str[100];
    fgets(str,100,stdin);

    for(int i=0;str[i];i++)
        for(int j=i;str[j] && str[j]!='\n';j++) {
            for(int k=i;k<=j;k++)
                printf("%c",str[k]);
            printf("\n");
        }

    return 0;
}
