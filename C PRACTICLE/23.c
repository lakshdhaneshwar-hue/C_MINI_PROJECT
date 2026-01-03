/*
23. Write a C program to print the following patterns
using asterisk (*):
(a) Rectangle with 7 columns and 4 rows
(b) Square with 4 columns and 4 rows
(c) Right-angle triangle with 5 rows
(d) Reverse right-angle triangle with 5 rows
(e) Central triangle with 5 rows
*/

#include <stdio.h>

int main()
{
    int i, j;

    // (a) Rectangle
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 7; j++)
            printf("* ");
        printf("\n");
    }

    printf("\n");

    // (b) Square
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4; j++)
            printf("* ");
        printf("\n");
    }

    printf("\n");

    // (c) Right-angle triangle
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }

    printf("\n");

    // (d) Reverse right-angle triangle
    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }

    printf("\n");

    // (e) Central triangle
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5 - i; j++)
            printf("  ");
        for (j = 1; j <= (2 * i - 1); j++)
            printf("* ");
        printf("\n");
    }

    return 0;
}
