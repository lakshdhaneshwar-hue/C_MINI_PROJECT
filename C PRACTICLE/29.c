/*
29. Write a C program using function that reads marks
from the user, computes the total and average, and
outputs the grade based on the average.
*/

#include <stdio.h>

void calculate(int m1, int m2, int m3)
{
    int total;
    float avg;

    total = m1 + m2 + m3;
    avg = total / 3.0;

    printf("Total = %d\n", total);
    printf("Average = %.2f\n", avg);

    if (avg >= 90)
        printf("Grade A");
    else if (avg >= 80)
        printf("Grade B");
    else if (avg >= 70)
        printf("Grade C");
    else if (avg >= 60)
        printf("Grade D");
    else
        printf("Grade F");
}

int main()
{
    int m1, m2, m3;

    printf("Enter marks of three subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    calculate(m1, m2, m3);

    return 0;
}
