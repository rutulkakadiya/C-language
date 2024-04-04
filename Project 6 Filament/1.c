// Write a Program to convert the given string in lowercase without using any string function.
// For example,
// Input:
// Enter any string: HELLO WORLD

// Output:
// Lowercase string: hello world

#include<stdio.h>

main(){
    char val[]="HELLO WORLD";

    for(int i=0; val[i] != NULL; i++){
        if(val[i]>='A' && val[i]<='Z'){
            val[i] +=32;
        }
        printf("%c",val[i]);
    }
}