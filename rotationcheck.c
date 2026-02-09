#include <stdio.h>
#include <string.h>

int main() {
    char s[100], t[100], temp[200];

    fgets(s,100,stdin);
    fgets(t,100,stdin);

    s[strcspn(s,"\n")]='\0';
    t[strcspn(t,"\n")]='\0';

    strcpy(temp,s);
    strcat(temp,s);

    if(strstr(temp,t))
        printf("Rotation");
    else
        printf("Not Rotation");

    return 0;
}
