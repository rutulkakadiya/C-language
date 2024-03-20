// Write a Program to count the total number of digits in a number.
// For example,
// Input:
// Enter any number: 752

// Output: 
// Total number of digits: 3

#include <stdio.h>

main() {
    int num, c = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    int temp = num;
    while (temp != 0) {
        temp /= 10;
        c++;
    }

    printf("The total number in %d is %d.\n", num, c);

}