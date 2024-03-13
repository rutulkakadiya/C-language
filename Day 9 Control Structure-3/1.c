// Write a Program to find the minimum number from the given 3 numbers using the ternary operator.
// For example,
// Input:
// Enter a value of the first number: 8
// Enter a value of the second number: 3
// Enter a value of the third number: 12

// Output:
// The minimum value is: 3

#include<stdio.h>

main(){
    int a,b,c;

    printf("Enter the value of a=");
    scanf("%d",&a);
    
    printf("Enter the value of b=");
    scanf("%d",&b);
    
    printf("Enter the value of c=");
    scanf("%d",&c);

    (a<b) ? (a<c) ? printf("A is small") : printf("C is small") : (b<c) ? printf("B is small") : printf("C is small"); 
}