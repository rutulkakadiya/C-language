// Implement a program in [programming language of choice] that allows the user to input values into a 1D array and calculates the average of these elements.

#include<stdio.h>
main(){
    int arr[5];

    int sum=0,avarage;

    for(int i=0; i < 5; i++){
        printf("Enter value of Arry : ");
        scanf("%d",&arr[i]);
    }

    for(int i=0; i < 5; i++){
        sum += arr[i];
    }

    avarage = sum / 5; 

    printf("Avarage = %d\n",avarage);

}