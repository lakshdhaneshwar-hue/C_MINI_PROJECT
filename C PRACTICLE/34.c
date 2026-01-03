//34. Write a C program to read 5 integers into an array and print them
#include <stdio.h>

int main() {
    int a[5], i;

    printf("Enter 5 integers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    printf("The elements of the array are:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}