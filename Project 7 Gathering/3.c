// *Question 3:*Write a C program to find the factorial of a given positive integer using a user-defined function.
//  The program should prompt the user to enter a positive integer and then calculate its factorial using a function
//   called calculateFactorial(). Display the calculated factorial in the main function.

#include<stdio.h>



calculateFactorial(int a){

    int fact=1;

    for(int i=a; i>=1; i--){
        printf("%d\n",i);
        fact *=i;
    }

    return fact;
}

main(){

    int n;

    printf("Enter the number=");
    scanf("%d",&n);

    int ans = calculateFactorial(n);

    printf("The sum is=%d",ans);
}
