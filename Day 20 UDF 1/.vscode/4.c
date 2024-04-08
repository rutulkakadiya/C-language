// **Question 4:**
// Define a TSRN function `calculateCube()` that takes an integer as input and calculates its cube. Print the result inside the function. Call this function from the `main()` function and display the cube of a number.

#include<stdio.h>

calculateCube(int a){
    int b;
    
    b=a*a*a;

    printf("The cube=%d",b);
}

main(){
    
    int x;

    printf("Enter the value of x=");
    scanf("%d",&x);

    calculateCube(x);
}