// 4.Calculate the area of a circle given the radius (constant value for pi)
// Enter the radius of the circle: 5
// Area of the circle: 78.54
// PI 3.14159

#include <stdio.h>

main(){

    float radious,area;

    const float pi=3.14159;

    printf("The radious=");
    scanf("%f",&radious);

    area=pi*radious*radious;

    printf("the area of a circle=%f",area);
}