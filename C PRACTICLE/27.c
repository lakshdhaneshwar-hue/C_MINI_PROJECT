/*
27. Write a C program to find square of a number
using function.
*/

#include <stdio.h>

int square(int n)
{
    return n * n;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Square = %d", square(num));

    return 0;
}
