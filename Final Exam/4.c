// 4. Write a C program to find cube of each elements of an 1D array using Pointer.

#include <stdio.h>

main()
{
    int a;

    printf("Enter the size=");
    scanf("%d", &a);

    int arr[a];

    for(int i=0; i<a; i++){
        printf("Enter the value of a=");
        scanf("%d",&arr[i]);
        
        int* p = &arr[i];
        *p = (*p) * (*p) * (*p);
    }

    for (int i = 0; i < a; i++) {
        printf("Cubes=%d \n", arr[i]);
    }


}
