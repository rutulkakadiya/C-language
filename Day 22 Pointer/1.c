// Write a Program to find MAXIMUM between 2 numbers in TSRN.

#include<stdio.h>

max(int *n1, int *n2){
    if(*n1 < *n2){
        printf("Maximum =%d",*n2);
    }
    else{
        printf("Maximum =%d",*n1);
    }
}

main(){
    int a,b;

    printf("Enter the value of a=");
    scanf("%d",&a);
    
    printf("Enter the value of b=");
    scanf("%d",&b);

    max(&a,&b);
}