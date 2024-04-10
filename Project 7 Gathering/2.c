// *Question 2:*Write a C program to calculate the area of a rectangle using a user-defined function. Implement
//  a function called calculateArea() that takes the length and width of the rectangle as inputs and returns the 
//  calculated area. Display the area in the main function.


#include<stdio.h>

calculateArea(int height, int width){
    
    int sum=0;

    sum= height * width;

    return sum;
}

main(){
    float height, width;

    printf("Enter the height=");
    scanf("%f",&height);

    
    printf("Enter the width=");
    scanf("%f",&width);

    int ans=calculateArea(height, width);

    printf("The area=%d",ans);
}