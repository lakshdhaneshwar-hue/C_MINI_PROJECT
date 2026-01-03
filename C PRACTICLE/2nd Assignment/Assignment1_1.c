/*Write a C program to declare variables of type int, float, char, and double. Initialize them with values and print their values and sizes using sizeof operator.*/
#include <stdio.h>

int main()
{
  int i = 10;
  float f = 25.5;
  char c = 'A';
  double d = 123.456;

  printf("Integer value = %d\n", i);
  printf("Size of int = %lu bytes\n\n", sizeof(i));

  printf("Float value = %.2f\n", f);
  printf("Size of float = %lu bytes\n\n", sizeof(f));

  printf("Character value = %c\n", c);
  printf("Size of char = %lu bytes\n\n", sizeof(c));

  printf("Double value = %.3lf\n", d);
  printf("Size of double = %lu bytes\n", sizeof(d));

  return 0;
}
