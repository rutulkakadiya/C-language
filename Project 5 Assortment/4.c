// Write a Program to print and find the sum of all elements of a given row & column from a 2D array.
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
// Enter row number: 0
// Elements of row 0: 2, 7, 1
// The sum of a row 0: 10

// Enter column number: 2
// Elements of column 2: 1, 4, 6
// The sum of column 2: 11

// Q.4 Write a Program to print and find the sum of all elements of a given row & column from a 2D array.
#include <stdio.h>
main()
{
    int row, col, i, j;

    printf("Enter Size of Array :");
    scanf("%d", &row);
    col = row;

    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("Enter Value of Array :");
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }

    int r, sum = 0, c, sumc = 0;

    printf("Enter Number of row :");
    scanf("%d", &r);

    for (int i = r; i < row; i++)
    {
        if (i == r + 1)
        {
            break;
        }
        for (int j = 0; j < row; j++)
        {
            sum += arr[i][j];
        }
    }
    printf("%d\n", sum);

    printf("Enter Number of col :");
    scanf("%d", &c);

    for (int i = 0; i < row; i++)
    {
        for (int j = c; j < row; j++)
        {
            if (j == c + 1)
            {
                break;
            }
            sumc += arr[i][j];
        }
    }
    printf("%d\n", sumc);
}