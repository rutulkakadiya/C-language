// Write a Program to print even numbers from 1 to N using a do-while loop.
// For example,
// Input:
// Enter any number: 9

// Output:
// 2 4 6 8

#include<stdio.h>

main(){
    int i=1,n;

    printf("Enter number=");
    scanf("%d",&n);
    do{
        if(i%2 ==0){
            printf("%d\n",i);
            
        }
        i++;
    }while(i<=n);
}