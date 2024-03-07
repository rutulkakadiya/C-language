// Design a program that reads the original price and discount percentage from the user and calculates the discount amount.
// Input:
// Enter the original price: 600
// Enter the discount percentage: 5
// Output:
// Discount amount: 30.00

#include<stdio.h>

main(){
    int price, dis, ammount;

    printf("Enter the original price=");
    scanf("%d",&price);

    printf("Enter the discount percentage=");
    scanf("%d",&dis);

    ammount= price/dis;

    printf("Discount ammount=%d",ammount);
    
}