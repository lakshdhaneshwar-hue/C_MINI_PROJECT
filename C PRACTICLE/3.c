/*
3. Write a C program to declare variables of type
int, float, char, and double. Initialize them and
print their values and sizes using sizeof operator.
*/

#include <stdio.h>

int main()
{
    int a = 10;
    float b = 5.5;
    char c = 'A';
    double d = 12.34;

    printf("int: %d, size: %lu\n", a, sizeof(a));
    printf("float: %.2f, size: %lu\n", b, sizeof(b));
    printf("char: %c, size: %lu\n", c, sizeof(c));
    printf("double: %.2lf, size: %lu\n", d, sizeof(d));

    return 0;
}
