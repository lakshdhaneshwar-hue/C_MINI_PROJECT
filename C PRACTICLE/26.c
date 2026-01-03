/*
26. Write a C program to find factorial of a number
using function.
*/

#include <stdio.h>

long int factorial(int n)
{
    int i;
    long int fact = 1;

    for (i = 1; i <= n; i++)
        fact = fact * i;

    return fact;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial = %ld", factorial(num));

    return 0;
}
