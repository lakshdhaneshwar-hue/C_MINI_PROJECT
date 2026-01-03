/*
10. Write a C program to accept an integer and check
whether it is even or odd using if-else.
*/

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("Even number");
    else
        printf("Odd number");

    return 0;
}
