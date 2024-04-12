// Using UDF swap between 3 numbers using pointer.

#include<stdio.h>

void swap(int *n1, int *n2, int *n3){
    int t;

    t=*n1;
    *n1=*n2;
    *n2=*n3;
    *n3=t;

    printf("Swap=%d %d %d",*n1,*n2,*n3);
}

void main(){
    int a,b,c;

    printf("Enter the value of a=");
    scanf("%d",&a);
    
    printf("Enter the value of b=");
    scanf("%d",&b);
    
    printf("Enter the value of c=");
    scanf("%d",&c);

    swap(&a,&b,&c);

}