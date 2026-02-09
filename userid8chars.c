#include<stdio.h>
#include<string.h>
int main(){
    char userid[20];
    char password[20];

    printf("Enter User ID: ");
    scanf("%s",userid);

    printf("Enter Password: ");
    scanf("%s",password);

    if (strcmp(userid,"admin123") == 0 && strlen(password) == 8){
        printf("Login successful.\n");
    } else {
        printf("Invalid user ID or Password.\n");
    }
    return 0;
}