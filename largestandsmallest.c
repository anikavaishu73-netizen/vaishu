#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], small[50], large[50];
    int i=0,j=0;

    fgets(str,200,stdin);

    while(1) {
        if(str[i]==' ' || str[i]=='\0' || str[i]=='\n') {
            word[j]='\0';
            if(strlen(word)) {
                if(!strlen(small) || strlen(word)<strlen(small))
                    strcpy(small,word);
                if(strlen(word)>strlen(large))
                    strcpy(large,word);
            }
            j=0;
            if(str[i]=='\0') break;
        }
        else word[j++]=str[i];
        i++;
    }

    printf("Smallest: %s\nLargest: %s", small, large);
    return 0;
}
