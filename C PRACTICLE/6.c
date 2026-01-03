/*
6. Write a C program that takes employee name and
basic salary, then calculates HRA, DA, Gross Salary,
Income Tax, and Net Salary.
*/

#include <stdio.h>

int main()
{
    float basic, hra, da, gross, tax, net;
    char name[20];

    printf("Enter name: ");
    scanf("%s", name);

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    hra = 0.20 * basic;
    da = 0.10 * basic;
    gross = basic + hra + da;
    tax = 0.05 * gross;
    net = gross - tax;

    printf("Net Salary = %.2f", net);
    return 0;
}
