// Write a Program to check whether a number is even or odd using the ternary operator.
// For example,
// Input:
// Enter any number: 12

// Output: 
// This number is Even.

#include<stdio.h>

main(){
    int number;

    printf("Enter the number=");
    scanf("%d",&number);

    (number/2)? printf("This is even number"): printf("This is odd number");
}