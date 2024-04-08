// **Question 2:**
// Define a TSRN function called `multiplyNumbers()` that takes two integers as parameters and calculates their multiplication. Print the result inside the function. Call this function from the `main()` function and display the multiplication of the two numbers.

#include<stdio.h>

multiplyNumbers(int a, int b){
    int c;

    c=a*b;

    printf("The multiplication=%d",c);
}

main(){
    int x,y;

    printf("Enter the value of x=");
    scanf("%d",&x);

    printf("Enter the value of y=");
    scanf("%d",&y);

    multiplyNumbers(x,y);
}