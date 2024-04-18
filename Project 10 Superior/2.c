// Write a C program to find the largest element in an array.

#include <stdio.h>

main()
{

    int a;

    printf("Enter the size of array=");
    scanf("%d", &a);

    int arr[a], max = 0;

    for (int i = 0; i < a; i++)
    {
        printf("Enter the value of array=");
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < a; i++)
    {
        if (arr[0] <= arr[i])
        {
            max = arr[i];
        }
    }
    printf("%d", max);
}
