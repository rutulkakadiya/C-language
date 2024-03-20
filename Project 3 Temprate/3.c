// Write a Program to find the sum of the first and the last digit of a number.
// For example,
// Input:
// Enter any number: 384

// Output: 
// The sum of the first and the last digit: 7

// Write a Program to find the sum of the first and the last digit of a number.
// For example,
// Input:
// Enter any number: 384

// Output: 
// The sum of the first and the last digit: 7

#include <stdio.h>

main() {
    int num, f, l, sum;

    printf("Enter the Number=");
    scanf("%d", &num);

    f = num;
    while (f >= 10){
        f /= 10;
    }

    l = num % 10;

    sum = f + l;

    printf("The sum first and last number is %d\n", sum);

    printf("The sum of first and lat digit of");
}