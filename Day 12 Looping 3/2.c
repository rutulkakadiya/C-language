// Write a Program to print the factorial of number N using for loop.
// For example,
// Input:
// Enter any number: 5

// Output:
// The factorial is: 120

#include<stdio.h>
main(){
    int n,fact=1;
    
    printf("Enter the number=");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        fact*=i;
    }
    printf("%d",fact);
}