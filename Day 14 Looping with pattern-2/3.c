// Write a Program to print the below pattern using nested for loop.
//         5
//       4 4
//     3 3 3
//   2 2 2 2
// 1 1 1 1 1


#include<stdio.h>

main(){
    for(int i=5; i>=1; i--){
        for(int s=i-1; s>=1; s--){
            printf("_",s);
        }
        for(int j=i; j<=5; j++){
            printf("%d",i);
        }
        printf("\n");
    }
}