/*3. Problem Statement: Login Authentication System*/
#include <stdio.h>
#include <string.h>

int main()
{
  char username[20], password[20];

  /* Predefined credentials */
  char correctUser[] = "admin";
  char correctPass[] = "1234";

  /* Input from user */
  printf("Enter username: ");
  scanf("%s", username);

  printf("Enter password: ");
  scanf("%s", password);

  /* Logical check */
  if (strcmp(username, correctUser) == 0 && strcmp(password, correctPass) == 0)
  {
    printf("\nLogin Successful.");
  }
  else
  {
    printf("\nInvalid Login.");
  }

  return 0;
}
