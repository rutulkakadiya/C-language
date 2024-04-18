// Write a C program to reverse an array.

#include <stdio.h>

main()
{

    int a;

    printf("Enter the size of array=");
    scanf("%d", &a);

    int arr[a], small = 0;

    for (int i = 0; i < a; i++)
    {
        printf("Enter the value of array=");
        scanf("%d", &arr[i]);
    }

    for (int i = a-1; i >= 0; i--)
    {
        printf("Reverse array=%d\n",arr[i]);
    }
}
