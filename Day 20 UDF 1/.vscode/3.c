// **Question 3:**
// Write a TSRN function named `divideNumbers()` that takes two integers as input and calculates their division. Print the result inside the function. Handle the case when the divisor is zero. Call this function from the `main()` function and display the quotient.

#include <stdio.h>

divideNumbers(int a, int b)
{
    int c;
    if (a % b == 0)
    {
        printf("The divider is zero");
    }
    else{
        printf("The divider is not zero");
    }
}

main()
{
    int x, y;

    printf("Enter the value of x=");
    scanf("%d", &x);

    printf("Enter the value of y=");
    scanf("%d", &y);

    divideNumbers(x, y);
}