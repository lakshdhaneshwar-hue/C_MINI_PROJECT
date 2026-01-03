/*
7. Write a C program that accepts two account balances
and prints True or False for comparison using logical
operators.
*/

#include <stdio.h>

int main()
{
    float a, b;

    printf("Enter two balances: ");
    scanf("%f %f", &a, &b);

    printf("Equal: %d\n", a == b);
    printf("First greater: %d\n", a > b);
    printf("Second greater: %d\n", a < b);

    return 0;
}
