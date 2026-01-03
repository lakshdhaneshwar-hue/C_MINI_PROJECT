/*4. Problem Statement: Bank Interest Update System*/
#include <stdio.h>

int main()
{
  float balance;
  float interest, maintenance, bonus;

  /* Input initial balance */
  printf("Enter initial account balance: ");
  scanf("%f", &balance);

  /* Add interest */
  interest = 500; // interest amount
  balance += interest;
  printf("\nAfter adding interest (+= %.2f): %.2f", interest, balance);

  /* Deduct maintenance charge */
  maintenance = 200; // annual maintenance charge
  balance -= maintenance;
  printf("\nAfter deducting maintenance (-= %.2f): %.2f", maintenance, balance);

  /* Multiply by bonus factor */
  bonus = 1.10; // 10% bonus factor
  balance *= bonus;
  printf("\nAfter applying bonus (*= %.2f): %.2f", bonus, balance);

  /* Divide balance between two linked accounts */
  balance /= 2;
  printf("\nAfter dividing equally (/= 2): %.2f", balance);

  return 0;
}
