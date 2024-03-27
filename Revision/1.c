// Check for Prime Number using Simple Method
// What is a prime number ?


// A prime number is a whole number greater than 1 whose only factors are 1 and itself. 
// The number 546 is not a Prime Number

#include<stdio.h>

main(){

    int no,flag=0;

    printf("Enter the number=");
    scanf("%d",&no);

    for(int i=2; i<no; i++){
        if(no%i==0){
             flag=1; 
        break;
        }
       
    }

    if(flag==0){
        printf("Prime number");
    }
    else{
        printf("Not prime number");
    }

}