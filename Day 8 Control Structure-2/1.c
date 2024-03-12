// Write a Program to find the minimum number from the given 3 numbers using nested if else. Also, draw a Flowchart in your book.
// For example,
// Input:
// Enter a value of the first number: 8
// Enter a value of the second number: 3
// Enter a value of the third number: 12

// Output:
// The minimum value is: 3

#include<stdio.h>

main(){
    int a,b,c;

    printf("Enter the value of a=");
    scanf("%d",&a);
    
    printf("Enter the value of b=");
    scanf("%d",&b);
    
    printf("Enter the value of c=");
    scanf("%d",&c);

    if(a<b){
       if(a<c){
            printf("a is small");
        }
        else{
            printf("c is small");
        }
    }
    else{
        if(b<c){
            printf("b is small");
        }
        else{
            printf("c is small");
        }
    }
}