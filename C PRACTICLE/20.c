/*
20. A company wants to count how many employees out of
10 are 30 years or older. Write a C program to input
ages and print the count.
*/

#include <stdio.h>

int main()
{
    int age, count = 0, i;

    for (i = 1; i <= 10; i++)
    {
        printf("Enter age of employee %d: ", i);
        scanf("%d", &age);

        if (age >= 30)
            count++;
    }

    printf("Number of employees aged 30 or above = %d", count);

    return 0;
}
