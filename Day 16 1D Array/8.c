// **Reverse an array.**
//    - Implement a function to reverse the elements of an array.

#include<stdio.h>

main()
{
    int arr[5];
    int max;
    

    for (int i = 0; i <5; i++)
    {
        printf("Enter Value of array :");
        scanf("%d",&arr[i]);
    }

   int rev[5], j = 0;  
    for(int i = 5-1; i >= 0; i--)  
    {  
        rev[j] = arr[i];  
        j++;  
    }  
    printf("The Reversed array: ");  
    for(int i = 0; i < 5; i++)  
    {  
        printf("%d ", rev[i]);  
    }  
}