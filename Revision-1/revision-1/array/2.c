// 2. Create a program to find the largest element in an array of integers.

#include<stdio.h>
main()
{
    int n;

    printf("\n enter size of array:");
    scanf("%d",&n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("\n no:");
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[0]<a[i])
        {
            a[0]=a[i];
        }
        
    }

    printf("\n the sum is=%d",a[0]);
    
    
}