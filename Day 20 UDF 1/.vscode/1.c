// **Question 1 : **Write a C program to define a TSRN function named `addNumbers()` that takes two integers as input and calculates their sum.Print the result inside the function.Call this function from the `main()` function and display the sum of two numbers.

#include<stdio.h>
addNumber(int a,int b){
    int c;
    c=a+b;

    printf("The sum=%d",c);
}

main(){

    int x,y;

    printf("Enter the value of x=");
    scanf("%d",&x);
    
    printf("Enter the value of y=");
    scanf("%d",&y);

    addNumber(x,y);
}