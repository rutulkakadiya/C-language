// Using UDF find if cube of a number using pointer.

#include<stdio.h>

void cube(int *a){

    int i;
    i=*a;

    printf("cube=%d",i*i*i);

}

void main(){

    int a;

    printf("Enter the value of a=");
    scanf("%d",&a);

    cube(&a);

}