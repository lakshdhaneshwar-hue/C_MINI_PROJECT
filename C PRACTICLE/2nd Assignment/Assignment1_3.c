/*3) Write a C program to demonstrate the difference between ++x (pre-increment) and x++ (post-increment) in an arithmetic expression.*/
#include <stdio.h>

int main()
{
  int x = 5, y;

  y = ++x;
  printf("After pre-increment (++x):\n");
  printf("x = %d, y = %d\n\n", x, y);

  x = 5; // reset value
  y = x++;
  printf("After post-increment (x++):\n");
  printf("x = %d, y = %d\n", x, y);

  return 0;
}
