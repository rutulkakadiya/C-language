// Write a Program to find square of each element from the given array.
// For example,
// Input:
// Enter array size: 5

// Enter array elements:
// a[0] = 7
// a[1] = 4
// a[2] = 9
// a[3] = 5
// a[4] = 2


// Output:
// The squares are: 49, 16, 81, 25, 4

#include<stdio.h>

main()
{
    int arr[5];
    int sq;

    for (int i = 0; i <5; i++)
    {
        printf("Enter Value of array :");
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i <5; i++)
    {
        
        sq=arr[i]*arr[i];
        printf("\n a[%d]=%d",i,sq);
        
    }
    
    

}