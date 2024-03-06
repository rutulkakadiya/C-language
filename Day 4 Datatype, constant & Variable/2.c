// 2.Write a C program that reads a floating-point number representing the radius of a circle using scanf() and calculates its circumference.
// C = 2πr
// Enter the radius of the circle: 5.5
// Circumference of the circle: 34.56
// C=2×3.14159×5.5≈34.56.

#include<stdio.h>

main(){
        
    float radious, pie=3.14,c;

    printf("Enter the value of radious=");
    scanf("%f",&radious);

    c=2*pie*radious;

    printf("The radious of circle=%f",c);
}