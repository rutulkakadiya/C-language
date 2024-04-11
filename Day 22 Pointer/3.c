// Write a Program to swap two variables using Pointers.
// For example,
// Input:
// Enter the value of x: 5
// Enter the value of y: 3

// Output:
// Before swapping:
// x: 5
// y: 3

// After swapping:
// x: 3
// y: 5

#include <stdio.h>

swap(int *n1, int *n2)
{

    int *t;

    t = *n1;
    *n1 = *n2;
    *n2 = t;

    printf("%d %d",*n1 ,*n2);
}

main()
{
    int a, b;

    printf("Enter the value of a=");
    scanf("%d", &a);

    printf("Enter the value of b=");
    scanf("%d", &b);

    swap(&a, &b);
}