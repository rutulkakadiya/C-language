// Write a Program to find the transpose matrix of a given 2D array.
// For example,
// Input:
// Enter the array's row & column size: 3

// Enter array's elements:
// a[0][0] = 2
// a[0][1] = 4
// a[0][2] = 1
// a[1][0] = 3
// a[1][1] = 5
// a[1][2] = 4
// a[2][0] = 8
// a[2][1] = 2
// a[2][2] = 6

// Output:
// The transpose matrix of an array:
// 2 3 8
// 4 5 2
// 1 4 6

// Q.3 Write a Program to find the transpose matrix of a given 2D array.


#include<stdio.h>
main()
{
   int i,row,col,j;

    printf("\n enter the row:");
    scanf("%d",&row);
    col=row;

    int a[row][col];

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("enter the number:");
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
    printf("\n transpose metrix is....\n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d",a[j][i]);
        }
        printf("\n");
    }
}