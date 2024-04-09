// Write a Program to find the sum of all 1D Array elements by passing an array as an argument using UDF.
// For example,
// Input:
// Enter array size: 5
// Enter array elements:
// a[0] = 6
// a[1] = 4
// a[2] = 1
// a[3] = 5
// a[4] = 2

// Output:
// The sum of an Array: 18

#include<stdio.h>
#include<string.h>

int sum(int o)
{
    int array[o], b=0;

    for(int i=0 ; i < o; i++)
    {
        printf("array[%d]= ",i);
        scanf("%d",&array[i]);
        b += array[i];
    }


    return b;
}

main()
{
    int a;
    printf("Enter the size of array :");
    scanf("%d",&a);

    

    printf("sum=%d",sum(a));
}