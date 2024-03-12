// Write a Program to find the maximum number from the given 4 numbers using nested if else. Also, draw a Flowchart in your book.
// For example,
// Input:
// Enter a value of the first number: 8
// Enter a value of the second number: 3
// Enter a value of the third number: 12
// Enter a value of the fourth number: 7

// Output:
// The maximum value is: 12

#include<stdio.h>

main(){
    int a,b,c,d;

    printf("Enter the value of a=");
    scanf("%d",&a);
    
    printf("Enter the value of b=");
    scanf("%d",&b);
    
    printf("Enter the value of c=");
    scanf("%d",&c);

    printf("Enter the value of d=");
    scanf("%d",&d);

    if(a>b){
        if(a>c){
            if(a>d){
                printf("a is big");
            }
            else{
                printf("d is big");
            }
        }
    }
    else if (b>c){
        if(b>d){
            printf("b id big");
        }
        else{
            printf("d is big");
        }
    }
    else if (c>d){
        printf("c is big");
    }
    else{
        printf("d is big");
    }
    
}