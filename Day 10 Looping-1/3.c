// Write a Program to print 1 to N using a while loop.
// For example,
// Input:
// Enter any number: 7

// Output:
// 1 2 3 4 5 6 7

#include <stdio.h>

main(){
    int i=1,a;

    printf("Enter value=");
    scanf("%d",&a);

    while(i<=a){
        printf("%d\n",i);
        i++;
    }
}