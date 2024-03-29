// Develop a program in [programming language of choice] that creates a 1D array based on user input and computes the sum of all its elements.

#include<stdio.h>

main()
{
    int arr[5];
    int sum=0;

    for (int i = 0; i <5; i++)
    {
        printf("Enter Value of array :");
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i <5; i++)
    {
        sum += arr[i];
        printf("%d\n",sum);
    }

}