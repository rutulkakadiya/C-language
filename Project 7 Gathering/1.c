// *Question 1:*  Write a C program that calculates the sum of squares of all even numbers from 1 to a given
//positive integer n. Implement a user-defined function called calculateSumOfSquares that takes an integer n
//as input from user  and returns the sum of squares of all even numbers from 1 to n. Display the calculated sum 
//in the main function use TSRS.

#include <stdio.h>

calculateSumOfSquares(int a){

    int sum=0;

    for(int i=1; i<=a; i++){
        if(i % 2 == 0){
            sum += (i*i);
        }
    }

    return sum;
}

main(){

    int n;

    printf("Enter the number=");
    scanf("%d",&n);

    int ans = calculateSumOfSquares(n);

    printf("The sum is=%d",ans);
}