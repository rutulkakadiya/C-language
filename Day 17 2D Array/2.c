// Q.2 Write a Program to find the sum of diagonal elements from a given 2D array.
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
// The sum of diagonal elements of an Array: 13


#include <stdio.h>

main() {

    int arr[3][3]; 
    int sum = 0;


    for(int i = 0; i <=2; i++) 
    {
        for( int j = 0; j <=2; j++) 
        {
            printf("Enter Value [%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);

            if (i==j)
            {
                sum += arr[i][j]; 

            }
            
        }
            printf("\n");

    }
    printf("Sum of diagonal elements = %d\n", sum);


}