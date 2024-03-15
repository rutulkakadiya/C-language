// Write a Program to print odd numbers from N to 1 using a while loop.
// For example,
// Input:
// Enter any number: 15

// Output:
// 15 13 11 9 7 5 3 1

#include<stdio.h>

main(){
    int a;


    printf("Enter value=");
    scanf("%d",&a);

    while(a>=1){
        if(a % 2 != 0){
            printf("%d\n",a);
        }
        a--;
    }
}