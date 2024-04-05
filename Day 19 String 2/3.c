//**Question 3:**
//Write a C program to take a string input from the user and find its length.

#include<stdio.h>
#include<string.h>

main(){
	char n[100];
	
	printf("Enter name=");
	
	gets(n);
	printf("%d",strlen(n));
}
