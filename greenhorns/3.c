// Write C Program to find the third angle of a right triangle if two other angles are given.
// For example,
// Input:
// First angle: 65
// Second angle: 45 

// Output: 
// Third angle: 70

#include<stdio.h>

main(){
    int first,second,third,a=180;

    printf("Enter the first angle=");
    scanf("%d",&first);
    
    printf("Enter the second angle=");
    scanf("%d",&second);

    third= a-(first+second);

    printf("The third angle=%d",third);
}