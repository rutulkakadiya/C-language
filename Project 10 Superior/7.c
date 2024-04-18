// Write a C program to find the second largest element in an array.

#include <stdio.h>
int main()
{
    int n = 0, i = 0, lar1 = 0, lar2 = 0, temp = 0;

    printf("Enter the size of the array\n");
    scanf("%d", &n);

    int a[n];
    printf("Enter the elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("The array elements are : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }

    printf("\n");

    lar1 = a[0];
    lar2 = a[1];

    if (lar1 < lar2)
    {
        temp = lar1;
        lar1 = lar2;
        lar2 = temp;
    }

    for (int i = 2; i < n; i++)
    {
        if (a[i] > lar1)
        {
            lar2 = lar1;
            lar1 = a[i];
        }
        else if (a[i] > lar2 && a[i] != lar1)
        {
            lar2 = a[i];
        }
    }

    printf("THE SECOND LARGEST = %d\n", lar2);
}