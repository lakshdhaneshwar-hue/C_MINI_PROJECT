/*Write a C program to declare variables of type int, float, char, and double. Initialize them with values and print their values and sizes using sizeof operator.*/
#include <stdio.h>

int main()
{
  int a, b;

  printf("Enter two integers: ");
  scanf("%d %d", &a, &b);

  printf("\nAddition = %d", a + b);
  printf("\nSubtraction = %d", a - b);
  printf("\nMultiplication = %d", a * b);

  if (b != 0)
  {
    printf("\nDivision = %d", a / b);
    printf("\nModulus = %d", a % b);
  }
  else
  {
    printf("\nDivision and Modulus not possible (b = 0)");
  }

  return 0;
}
