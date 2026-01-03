/*
24. Write a C program that displays a menu asking the user
to print a multiplication table or exit.
(a) Using while loop
(b) Using do-while loop
*/

#include <stdio.h>

int main()
{
    int choice, num, i;

    do
    {
        printf("\n1. Print Table\n0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter number: ");
            scanf("%d", &num);

            i = 1;
            while (i <= 10)
            {
                printf("%d x %d = %d\n", num, i, num * i);
                i++;
            }
        }

    } while (choice != 0);

    return 0;
}
