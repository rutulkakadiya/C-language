// Implement a C program to simulate a simple calculator that performs addition, subtraction, multiplication, and division based on user input.

#include<stdio.h>
int sum(int x,int y);
int sub(int r,int c);
int mul(int s,int w);
int div(int e,int z);
void main()
{
    char opt;
    int a,b;
     printf("enter youer choice=");
     scanf("%c",&opt);
    printf("enter tha value of a=");
    scanf("%d",&a);
    printf("enter tha value of b=");
    scanf("%d",&b);

    switch(opt)
    {
        case'+':
        printf("tha addition of two number=%d",sum(a,b));
        break;

        case'-':
        printf("tha subcription of two number=%d",sub(a,b));
        break;

        case'*':
        printf("tha muitiplication of two number=%d",mul(a,b));
        break;

        case'/':
        printf("tha divition of two number=%d",div(a,b));
        break;
    }
}
    int sum(int x,int y)
    {
        return x+y;
    }

    int sub(int r,int c)
    {
        return r-c;
    }

    int mul(int s,int w)
    {
        return s*w;
    }

    int div(int e,int z)
    {
        return e/z;
}