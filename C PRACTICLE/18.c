/*
18. A shopkeeper wants to calculate the total bill
of 5 items. Write a C program that asks the price
of each item and prints the total bill.
*/

#include <stdio.h>

int main()
{
    float price, total = 0;
    int i;

    for (i = 1; i <= 5; i++)
    {
        printf("Enter price of item %d: ", i);
        scanf("%f", &price);
        total += price;
    }

    printf("Total Bill = %.2f", total);

    return 0;
}
