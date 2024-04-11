// Write a Program to find MINIMUM between 2 numbers in TSRN.

#include<stdio.h>

min(int *n1, int *n2){
    if(*n1 < *n2){
        printf("Minimum =%d",*n1);
    }
    else{
        printf("Minimum =%d",*n2);
    }
}

main(){
    int a,b;

    printf("Enter the value of a=");
    scanf("%d",&a);
    
    printf("Enter the value of b=");
    scanf("%d",&b);

    min(&a,&b);
}