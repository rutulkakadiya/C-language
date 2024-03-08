// Write a Program to find if a given number is neutral or not using a ladder if else.

#include<stdio.h>

main(){
    int a;

    
    printf("Enter the first number=");
    scanf("%d",&a);

    if(a>0){
        printf("Positive number");
    }
    else if(a<0){
        printf("Negative number");
    }
    else{
        printf("Natural number");
    }
}