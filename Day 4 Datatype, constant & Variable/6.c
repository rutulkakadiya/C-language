// 6.Create a program that reads two floating-point numbers using scanf() and swaps their values . code in c give example input output

// Enter the first integer: 10
// Enter the second integer: 20
// After swapping:
// First integer: 20
// Second integer: 10

#include <stdio.h>

main(){
    
    int a,b,c;
    
    printf("Enter the first digit=");
    scanf("%d",&a);

    printf("Enter the second digit=");
    scanf("%d",&b);

    printf("First digit=%d\n",a);

    printf("Second digit=%d\n",b);

    c=a;
    a=b;
    b=c;

    printf("New first digit=%d\n",a);

    printf("New second digit=%d\n",b);

}