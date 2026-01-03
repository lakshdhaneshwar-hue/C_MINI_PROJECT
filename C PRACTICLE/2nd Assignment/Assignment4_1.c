/*Write a C program that uses a user-defined function to swap two numbers using call by reference. The function should take the addresses of the variables as parameters and modify their values.*/
#include <stdio.h>

/* User-defined function to swap two numbers */
void swap(int *a, int *b)
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

int main()
{
  int x, y;

  printf("Enter two numbers:\n");
  scanf("%d %d", &x, &y);

  printf("\nBefore swapping:");
  printf("\nx = %d, y = %d", x, y);

  /* Function call (call by reference) */
  swap(&x, &y);

  printf("\nAfter swapping:");
  printf("\nx = %d, y = %d", x, y);

  return 0;
}
