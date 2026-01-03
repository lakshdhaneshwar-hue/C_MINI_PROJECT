/*
22. A teacher records the attendance of a student
for 30 days. Input '1' for present and '0' for absent.
Count the total present days.
*/

#include <stdio.h>

int main()
{
    int i, present, count = 0;

    for (i = 1; i <= 30; i++)
    {
        printf("Enter attendance for day %d (1/0): ", i);
        scanf("%d", &present);

        if (present == 1)
            count++;
    }

    printf("Total present days = %d", count);

    return 0;
}
