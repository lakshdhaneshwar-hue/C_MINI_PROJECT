/*
32. Write a C program that performs addition, subtraction,
multiplication, and division of two numbers using a function
with call by reference.
*/

#include <stdio.h>

void calculate(int *a, int *b, int *add, int *sub, int *mul, float *div)
{
    *add = *a + *b;
    *sub = *a - *b;
    *mul = (*a) * (*b);
    *div = (float)(*a) / (*b);
}

int main()
{
    int x, y, add, sub, mul;
    float div;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    calculate(&x, &y, &add, &sub, &mul, &div);

    printf("Addition = %d\n", add);
    printf("Subtraction = %d\n", sub);
    printf("Multiplication = %d\n", mul);
    printf("Division = %.2f\n", div);

    return 0;
}
