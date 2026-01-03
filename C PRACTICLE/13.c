/*
13. Write a C program that accepts marks of a student
and displays the grade according to the marks using
conditional logic.
*/

#include <stdio.h>

int main()
{
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks >= 90)
        printf("Grade A");
    else if (marks >= 75)
        printf("Grade B");
    else if (marks >= 50)
        printf("Grade C");
    else
        printf("Grade F");

    return 0;
}
