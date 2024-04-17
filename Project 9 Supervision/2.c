// Write a Program to create a Car Inventory System with an Array of objects for a given N number of cars using structure. Consider the following attributes in the Car structure:
// - car_id
// - car_company
// - car_model
// - car_year
// - car_color
// - car_price
// - car_mileage

#include <stdio.h>

struct car
{
    int id;
    char company[100];
    char model[100];
    int year;
    char color[100];
    int price;
    int milage;
} b[];

main()
{

    int a;

    printf("Enter the size =");
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {

        printf("Enter id=");
        scanf("%d", &b[i].id);

        printf("Enter the company=");
        scanf("%s", &b[i].company);

        printf("Enter the model=");
        scanf("%s", &b[i].model);

        printf("Enter the year=");
        scanf("%d", &b[i].year);

        printf("Enter the color=");
        scanf("%s", &b[i].color);

        printf("Enter the price=");
        scanf("%d", &b[i].price);
        
        printf("Enter the milage=");
        scanf("%d", &b[i].milage);
    }

    for(int i=1; i<a; i++){
        printf("Id=%d \n, Company=%s \n, Model=%s \n, Year=%d \n, Color=%s \n, Price=%d \n, Milage=%d",b[i].id,b[i].company,b[i].model,b[i].year,b[i].color,b[i].price,b[i].milage);
    }
}