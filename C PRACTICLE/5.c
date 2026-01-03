/*
5. Write a C program to demonstrate the difference
between ++x (pre-increment) and x++ (post-increment).
*/

#include <stdio.h>

int main()
{
    int x = 5;

    printf("Pre-increment: %d\n", ++x);
    printf("Post-increment: %d\n", x++);

    return 0;
}
