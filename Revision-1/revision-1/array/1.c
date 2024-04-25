// 1. Write a C program to find the sum of elements in an integer array.

#include<stdio.h>
main()
{
    int sum=0,n;

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
        sum+=a[i];
    }

    printf("\n the sum is=%d",sum);
    
    
}