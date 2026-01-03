/*
9. Write a C program that takes initial bank balance
and applies interest, bonus, charges using compound
assignment operators.
*/

#include <stdio.h>

int main()
{
    float balance;

    printf("Enter initial balance: ");
    scanf("%f", &balance);

    balance += 500;
    balance -= 200;
    balance *= 1.05;

    printf("Updated balance = %.2f", balance);
    return 0;
}
