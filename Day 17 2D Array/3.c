// Q.3 Write a Program to print and find the sum of all boundary elements from a given 5x5 2D array.
// For example,
// Input:
// Enter array's elements:
// a[0][0] = 2
// a[0][1] = 4
// a[0][2] = 1
// a[0][3] = 6
// a[0][4] = 3
// a[1][0] = 9
// a[1][1] = 5
// a[1][2] = 4
// a[1][3] = 6
// a[1][4] = 7
// a[2][0] = 8
// a[2][1] = 2
// a[2][2] = 6
// a[2][3] = 3
// a[2][4] = 5
// a[3][0] = 3
// a[3][1] = 4
// a[3][2] = 8
// a[3][3] = 5
// a[3][4] = 1
// a[4][0] = 2
// a[4][1] = 3
// a[4][2] = 9
// a[4][3] = 5
// a[4][4] = 7

// Output:
// 2 4 1 6 3
// 9       7
// 8       5
// 3       1
// 2 3 9 5 7

// The sum of boundary elements of an Array: 75




#include <stdio.h>
main()
{
    int arr[5][5];
    int sum=0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++){
            printf("Enter Value of [%d][%d]:", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++){
            if (i == 0 || i == 5-1 || j == 0 || j == 5-1){
                printf("%d ", arr[i][j]);
                sum += arr[i][j];
            }else{
                printf("  ");

            }
        }
        printf("\n");
    }
    printf("\nSum of boundary elements = %d\n", sum);
}