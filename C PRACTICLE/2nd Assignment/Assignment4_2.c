/*Write a C program to find the maximum of two numbers using a function that accepts pointer arguments*/
#include <stdio.h>

/* User-defined function that accepts pointer arguments */
int findMax(int *a, int *b)
{
  if (*a > *b)
    return *a;
  else
    return *b;
}

int main()
{
  int x, y, max;

  printf("Enter two numbers:\n");
  scanf("%d %d", &x, &y);

  /* Function call with addresses */
  max = findMax(&x, &y);

  printf("Maximum number = %d", max);

  return 0;
}
