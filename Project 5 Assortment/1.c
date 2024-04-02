// Write a Program to find all the negative elements from a given 1D array.
// For example,
// Input:
// Enter the array's size: 5

// Enter array's elements:
// a[0] = 2
// a[1] = -4
// a[2] = 1
// a[3] = -3
// a[4] = -5

// Output:
// Negative elements from an Array: -4, -3, -5

#include<stdio.h>

main(){
    int row;

    printf("Enter the size of array=");
    scanf("%d",&row);

    int arr[row];

    for(int i=0; i<row; i++){
        printf("Enter the value of array=");
        scanf("%d",&arr[i]);
    }

    
    for(int i=0; i<row; i++){
        if(arr[i]<0){
            printf("Negative element from an array=%d",arr[i]);
        }
        printf("\n");
    }
}