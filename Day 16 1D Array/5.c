// Write a program in [programming language of choice] that accepts user input to populate a 1D array and then finds all the even numbers within the array, computing their product.


#include<stdio.h>

main()
{
    int arr[5];
    int even[5];
    int pro=1;

    for (int i = 0; i <5; i++)
    {
        printf("Enter Value of array :");
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i <5; i++)
    {
        if(arr[i]%2==0)
        {
            even[i]=arr[i];
            printf("%d\n",even[i]);
            pro *=even[i];
        }

        
        
    }
    printf("%d",pro);
    

}