//**Question 1:**
//Write a C program to take a string input from the user and convert it to uppercase.
#include<stdio.h>
#include<string.h>

main(){
	char n[100];
	
	printf("Enter name=");
	gets(n);
	puts(strupr(n));
	
}
