// **Question 2:**
// Create a C program that defines a TNRN function called `printNumbers()` to print integers from 1 to 10. Call this function from the `main()` function

#include<stdio.h>

printNumbers(){
    for(int i=1; i<=10; i++){
        printf("%d\n",i);
    }
}

main(){
    printNumbers();
}