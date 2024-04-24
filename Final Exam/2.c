// 2. Write a C program to find the sum of elements in an array using a function.

#include <stdio.h>

int fun1(int arr[], int s)
{
    int sum = 0;
    for (int i = 0; i < s; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int a;
    printf("Enter the size: ");
    scanf("%d", &a);

    int sum[a];

    for (int i = 0; i < a; i++)
    {
        printf("Enter value of a:\n", a);
        scanf("%d", &sum[i]);
    }

    int r = fun1(sum, a);
    printf("Sum= %d\n", r);

    return 0;
}
