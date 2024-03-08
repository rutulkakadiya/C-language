// Write a Program to find the maximum number from the given 2 numbers using if else.
// For example,
// Input:
// Enter a value of the first number: 8
// Enter a value of the second number: 3

// Output:
// The minimum value is: 8


#include<stdio.h>

main(){
    int a,b;

    printf("Enter the first number=");
    scanf("%d",&a);
    
    printf("Enter the second number=");
    scanf("%d",&b);

    if(a > b){
        printf("A is big %d",a);
    }
    else{
        printf("B is big%d",b);
    }

    
}