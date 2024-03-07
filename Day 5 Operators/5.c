// 5. **Simple Interest Calculation**:
//     Write a program that reads principal amount, rate of interest, and time period from the user and calculates the simple interest.
//     - Input: Principal = 1000, Rate = 5, Time = 2
//     - Output: 100

#include<stdio.h>

main(){
    int principal=1000, rate=5, time=2,interest=principal*rate*time/100;

    printf("The simple interest=%d",interest);
}