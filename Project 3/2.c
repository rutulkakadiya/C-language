// * * * * *
//   * * * *
//     * * *
//       * *
//         *

#include<stdio.h>

main(){
    for(int i=1; i<=5; i++){
        for(int k=2; k<=i; k++){
            printf(" ",k);
        }
        for(int j=i; j<=5; j++){
            printf(" *");
        }
        printf("\n");
    }
}