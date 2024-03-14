// Write a Program to input electricity unit charges and calculate the total electricity bill according to the given condition:
// For the first 50 units Rs. 0.50/unit
// For the next 100 units Rs. 0.75/unit
// For the next 100 units Rs. 1.20/unit
// For units above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill.
// For example,
// Input:
// Enter electricity units: 435

// Output: 
// Electricity Bill = Rs. 597.00

#include<stdio.h>

main(){
    float unit,rs1,rs2,rs3,rs4;
     

    printf("Enter the unit=");
    scanf("%f",&unit);

    rs1= unit*0.50;
    rs2= unit*0.75;
    rs3= unit*1.20;
    rs4= unit*1.50;

    if(unit <= 50){
        printf("The bill=%f",rs1*0.20);
    }
    else if(unit > 50 && unit <=150) {
        printf("The bill=%f",rs2*0.20);
    }
    else if(unit > 150 && unit <= 250){
        printf("The bill=%f",rs3,0.20);
    }
    else{
        printf("The bill=%f",rs4*0.20);
    }

    
}