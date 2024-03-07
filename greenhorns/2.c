// Calculate Body Mass Index (BMI) with Custom Units:
// Design a program that reads the weight (in kilograms) and height (in meters) of a person from the user and calculates their BMI. 
// Enter weight in kilograms: 65
// Enter height in meters: 1.75
// Body Mass Index (BMI): 21.22
// BMI using the formula: BMI = weight / (height * height).

#include<stdio.h>

main(){
    float weight,height,BMI;

    printf("Enter the weight=");
    scanf("%f",&weight);
    
    printf("Enter the height in meter=");
    scanf("%f",&height);

    BMI= weight/(height*height);

    printf("The Body Mass Index (BMI)=%f",BMI);
}