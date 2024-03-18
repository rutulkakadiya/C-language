// Write a Program to print 1 to 10 using a do-while loop.
// For example,
// Output:
// 1 2 3 4 5 6 7 8 9 10

#include<stdio.h>

main(){
    int i=1;

    do{
        printf("%d\n",i);
        i++;
    }while(i<=10);
}