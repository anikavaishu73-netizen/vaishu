#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int count=0, valid=1;

    fgets(str,200,stdin);

    for(int i=0;str[i];i++) {
        if(str[i]==' '||str[i]=='\n') {
            if(valid) count++;
            valid=1;
        }
        else if(!isalpha(str[i]))
            valid=0;
    }

    printf("%d",count);
    return 0;
}
