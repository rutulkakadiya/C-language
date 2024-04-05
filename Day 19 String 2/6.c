// **Question 7:**
// Write a C program to take two strings as input from the user and compare if they are equal. If they are equal, print "Strings are equal," else print "No, they are not equal."

#include<stdio.h>
#include<string.h>

main(){
    char first[100], second[100];

    printf("Enter name=");

    gets(first);
    puts(first);
    
    printf("Enter name=");

    gets(second);
    puts(second);

    printf("%d",strcmp(first,second));
}