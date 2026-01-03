/*
31. Write a C program to find the maximum of two numbers
using a function that accepts pointer arguments.
*/

#include <stdio.h>

void findMax(int *a, int *b)
{
    if (*a > *b)
        printf("Maximum number is: %d", *a);
    else
        printf("Maximum number is: %d", *b);
}

int main()
{
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    findMax(&x, &y);

    return 0;
}
