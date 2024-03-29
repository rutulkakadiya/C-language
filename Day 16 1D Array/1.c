// Write a program in [programming language of choice] that initializes a 1D array and takes user input to populate its elements.

#include<stdio.h>
main(){

    int arr[5];

    for(int i=0; i < 5; i++){

        printf("Enter the value of arry : ");
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<5; i++){
        printf("%d\n",arr[i]);    
    
    }
}