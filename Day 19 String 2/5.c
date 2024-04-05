// **Question 5:**
// Write a C program to take two strings as input from the user and concatenate them. Display the concatenated string.

#include<stdio.h>
#include<string.h>

main(){

    char first[100], second[100], full[100];

    printf("Enter name=");

    gets(first);
    puts(first);
    
    printf("Enter name=");

    gets(second);
    puts(second);

    strcpy(full, strcat(first,second));

    puts(full);
}