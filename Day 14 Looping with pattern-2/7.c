// Write a Program to print the below pattern using nested for loop.
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

//  Write a Program to print the below pattern using nested for loop.
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5


#include<stdio.h>
main()
{
   int i,j,k;

   for(i=5;i>=1;i--)
   {

      for(j=1;j<=i;j++)
      {
         printf("%d",j);
      }
            for(k=i;k<=4;k++)
      {
         printf(" ",k);
      }
      printf("\n");
   }
   
   for(i=2;i<=5;i++)
   {
      for(j=1;j<=i;j++)
      {
         printf("%d",j);
      }
            for(k=i;k<=4;k++)
      {
         printf(" ",k);
      }
      printf("\n");
   }
   
}