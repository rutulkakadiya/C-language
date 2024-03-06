// Write a program that reads an integer representing the number of hours worked by an employee using scanf() and calculates their weekly pay based on a fixed hourly rate. 

// fixed hourly rate is $15 per hour.
// Enter the number of hours worked this week: 40
// Weekly pay: $600.00

#include <stdio.h>

int main(){

    int hour, rate=15, total;

    printf("Enter the number of hours worked by an employee:");
    scanf("%d",&hour);

    total=hour*rate;

    printf("Salary:%d",total);

}