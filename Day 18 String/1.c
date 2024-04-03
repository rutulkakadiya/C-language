// Write a Program to convert the given string in uppercase without using any string function.
// For example,
// Input:
// Enter any string: hello world

// Output:
// Uppercase string: HELLO WORLD

#include<stdio.h>

main(){

    char val[]="hello world";

    for(int i=0; val[i] != NULL; i++)
    {
        if(val[i]>='a' && val[i]<='z')
        {
            val[i] -= 32;
        }
        printf("%c",val[i]);
    }

}