//**Question 2:**
//Write a C program to take a string input from the user and convert it to lowercase.

#include<stdio.h>
#include<string.h>

main(){
	char n[100];
	
	printf("Enter name=");
	
	gets(n);
	puts(strlwr(n));
}
