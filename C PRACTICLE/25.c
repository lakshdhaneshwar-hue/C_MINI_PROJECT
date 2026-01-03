/*
25. Write a C program that prints the weekly lecture
schedule for six days (Monday to Saturday) using
switch case.
*/

#include <stdio.h>

int main()
{
    int day;

    printf("Enter day number (1-Mon to 6-Sat): ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Monday: Mathematics");
        break;
    case 2:
        printf("Tuesday: Physics");
        break;
    case 3:
        printf("Wednesday: Programming");
        break;
    case 4:
        printf("Thursday: Electronics");
        break;
    case 5:
        printf("Friday: Workshop");
        break;
    case 6:
        printf("Saturday: Revision");
        break;
    default:
        printf("Invalid day");
    }

    return 0;
}
