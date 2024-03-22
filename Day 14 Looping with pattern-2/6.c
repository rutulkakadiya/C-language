// Write a Program to print the below pattern using nested for loop.
//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *


#include<stdio.h>

main(){
    for(int i=1; i<=5; i++){
        for(int s=4; s>=i; s--){
            printf(" ",s);
        }
        for(int j=1; j<=i*2-1; j++){
            printf("*");
        }
        printf("\n");
    }
}
