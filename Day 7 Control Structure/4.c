// Write a program to find if person is eligible to vote.

#include<stdio.h>

main(){
    int a;
    
    printf("Enter your age=");
    scanf("%d",&a);

    if(a>=18){
        printf("You can Vote");
    }
    else{
        printf("You can not Vote");
    }
}