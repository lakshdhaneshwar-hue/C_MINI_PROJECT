/*
21. A fitness app stores walking distance (in km)
for 30 days. Write a C program to input daily distance
and find total kilometres walked in the month.
*/

#include <stdio.h>

int main()
{
    int i;
    float distance, total = 0;

    for (i = 1; i <= 30; i++)
    {
        printf("Enter distance for day %d (km): ", i);
        scanf("%f", &distance);
        total += distance;
    }

    printf("Total distance walked in a month = %.2f km", total);

    return 0;
}
