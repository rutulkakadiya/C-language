#include <stdio.h>

void main()
{
    int unit;
    float amt, amtount, charge;


    printf("Enter total units : ");
    scanf("%d", &unit);


    if(unit <= 50)
    {
        amt = unit * 0.50;
    }
    else if(unit <= 150)
    {
        amt = 25 + ((unit-50) * 0.75);
    }
    else if(unit <= 250)
    {
        amt = 100 + ((unit-150) * 1.20);
    }
    else
    {
        amt = 220 + ((unit-250) * 1.50);
    }
     
   printf("\namt=%f",amt);

    charge = amt * 0.20;
    amtount  = amt + charge;

    printf("\nElectricity Bill = Rs. %.2f", amtount);

   
}