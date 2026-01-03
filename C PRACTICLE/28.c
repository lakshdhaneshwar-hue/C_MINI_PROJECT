/*
28. Write a C program to find the largest number
among three numbers using function.
*/

#include <stdio.h>

int largest(int a, int b, int c)
{
    if (a > b && a > c)
        return a;
    else if (b > c)
        return b;
    else
        return c;
}

int main()
{
    int x, y, z;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    printf("Largest number = %d", largest(x, y, z));

    return 0;
}
