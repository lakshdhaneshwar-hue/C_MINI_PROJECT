#include <stdio.h>

// 1. Factorial: n! = n * (n-1)!
long factorial(int n)
{
  if (n <= 1)
    return 1;                  // Base case
  return n * factorial(n - 1); // Recursive call
}

// 2. Fibonacci: F(n) = F(n-1) + F(n-2)
int fibonacci(int n)
{
  if (n == 0)
    return 0; // Base case 1
  if (n == 1)
    return 1; // Base case 2
  return fibonacci(n - 1) + fibonacci(n - 2);
}

// 3. Power: x^n = x * x^(n-1)
double power(double base, int exp)
{
  if (exp == 0)
    return 1; // Base case
  if (exp < 0)
    return 1 / power(base, -exp); // Handling negative exponents
  return base * power(base, exp - 1);
}

// 4. Sum of Digits: 123 -> 1+2+3 = 6
int sumDigits(int n)
{
  if (n == 0)
    return 0; // Base case
  return (n % 10) + sumDigits(n / 10);
}

int main()
{
  int num = 5;
  printf("--- RECURSIVE MATH TOOLBOX ---\n");
  printf("Factorial of %d: %ld\n", num, factorial(num));
  printf("Fibonacci at position %d: %d\n", num, fibonacci(num));
  printf("2 raised to power %d: %.2f\n", num, power(2, num));
  printf("Sum of digits in 1234: %d\n", sumDigits(1234));

  return 0;
}