/*
16. Write a program where the user inputs a color
(Red, Yellow, Green) as a number (1, 2, 3) and use
switch case to display traffic signal.
*/

#include <stdio.h>

int main()
{
    int choice;

    printf("Enter color (1-Red, 2-Yellow, 3-Green): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Stop");
        break;
    case 2:
        printf("Ready");
        break;
    case 3:
        printf("Go");
        break;
    default:
        printf("Invalid choice");
    }

    return 0;
}
