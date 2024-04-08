// **Question 5:**
// Create a TSRN function called `calculateSquare()` that takes an integer as input and calculates its square. Print the result inside the function. Call this function from the `main()` function and display the square of a number.

#include<stdio.h>

calculateSquare(int a){
    int b;
    
    b=a*a;

    printf("The square=%d",b);
}

main(){
    
    int x;

    printf("Enter the value of x=");
    scanf("%d",&x);

    calculateSquare(x);
}
