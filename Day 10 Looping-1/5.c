// Write a Program to print leap years between two given numbers using a while loop.
// For example,
// Input:
// Enter the first number: 2020
// Enter the second number: 2040

// Output:
// 2020, 2024, 2028, 2032, 2034, 2040

#include<stdio.h>
main(){
    int fyear,syear;

    printf("Enter the first year=");
    scanf("%d",&fyear);

    printf("Enter the second year=");
    scanf("%d",&syear);

    while (fyear <= syear){
        if(fyear%4 ==0){
            printf("%d\n",fyear);
        }
        fyear++;
    }

    
}