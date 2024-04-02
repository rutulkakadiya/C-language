// Write a Program to find the largest element from a given 2D array.
// For example,
// Input:
// Enter the array's row size: 3
// Enter the array's column size: 3

// Enter array's elements:
// a[0][0] = 2
// a[0][1] = 7
// a[0][2] = 1
// a[1][0] = 3
// a[1][1] = 5
// a[1][2] = 4
// a[2][0] = 8
// a[2][1] = 9
// a[2][2] = 6

// Output:
// The largest element is: 9
// Q.2 Write a Program to find the largest element from a given 2D array.

#include<stdio.h>
main()
{
    int i,row,col,j,max=0;

    printf("\n Enter the row:");
    scanf("%d",&row);
    col=row;

    int a[row][col];

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("Enter the number:");
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }


    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
           if(max < a[i][j])
           {
            max=a[i][j];
           }
        }
    }

    printf("\nBigest value is:%d",max);
    

}