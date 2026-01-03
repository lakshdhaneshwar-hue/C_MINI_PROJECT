/*
8. Write a C program that compares username and
password using logical operators.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char user[10], pass[10];

    printf("Enter username: ");
    scanf("%s", user);

    printf("Enter password: ");
    scanf("%s", pass);

    if (strcmp(user, "admin") == 0 && strcmp(pass, "1234") == 0)
        printf("Login Successful");
    else
        printf("Invalid Login");

    return 0;
}
