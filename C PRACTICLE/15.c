/*
15. Write a C program to calculate the electricity bill
of a customer using variables, operators, and
conditional statements.
*/

#include <stdio.h>

int main()
{
    int units;
    float bill;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units <= 100)
        bill = units * 1.5;
    else if (units <= 200)
        bill = 100 * 1.5 + (units - 100) * 2.5;
    else
        bill = 100 * 1.5 + 100 * 2.5 + (units - 200) * 3.5;

    printf("Total Bill = %.2f", bill);

    return 0;
}
