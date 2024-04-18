// Write a C program to count the number of even and odd elements in an array.

#include <stdio.h>

main()
{

    int a, even = 0, evencnt = 0, odd = 0, oddcnt = 0;

    printf("Enter the size of array=");
    scanf("%d", &a);

    int arr[a], small = 0;

    for (int i = 0; i < a; i++)
    {
        printf("Enter the value of array=");
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < a; i++)
    {
        if (arr[i] % 2 == 0)
        {

            evencnt++;
        }
        else
        {
            oddcnt++;
        }
    }
    printf("Even=%d\n", evencnt);
    printf("Odd=%d\n", oddcnt);
}