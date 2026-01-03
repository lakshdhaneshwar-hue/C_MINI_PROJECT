/*
33. Write a C program to calculate the factorial of a number
using a function that returns the result through call by reference.
*/

#include <stdio.h>

void factorial(int n, long int *fact)
{
    int i;
    *fact = 1;

    for (i = 1; i <= n; i++)
    {
        *fact = (*fact) * i;
    }
}

int main()
{
    int num;
    long int fact;

    printf("Enter a number: ");
    scanf("%d", &num);

    factorial(num, &fact);

    printf("Factorial of %d is %ld", num, fact);

    return 0;
}
