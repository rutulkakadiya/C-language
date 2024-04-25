// 11. Implement a function to print a right-angled triangle pattern.

#include<stdio.h>
main()
{
    int i,j,k;

    for ( i = 0; i <= 5; i++)
    {
        for(k = i; k <= 5; k++)
        {
            printf(" ");
        }
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}