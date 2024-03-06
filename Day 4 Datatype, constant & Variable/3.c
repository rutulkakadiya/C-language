// 3. Write a program that takes two integers as input from the user using scanf() and calculates their product. give example input output
// Enter the first integer: 5
// Enter the second integer: 6
// Product of 5 and 6 is: 30

#include<stdio.h>

main(){
    int a,b;

    printf("Enter the first digit:");
    scanf("%d",&a);
    
    printf("Enter the second digit:");
    scanf("%d",&b);

    printf("The product:%d",a*b);   
}