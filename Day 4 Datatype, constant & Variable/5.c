// 5.Design a program that reads two integers using scanf() and calculates their average. give example input output
// Enter the first integer: 10
// Enter the second integer: 20
// Average of 10 and 20 is: 15

#include<stdio.h>

main(){
    
    float a,b,avg;

    printf("Enter the first digit:");
    scanf("%f",&a);
    
    printf("Enter the second digit:");
    scanf("%f",&b);

    avg=(a+b)/2;

    printf("The average=%f",avg);
}