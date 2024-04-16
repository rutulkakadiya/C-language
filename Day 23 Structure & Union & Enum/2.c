// Write a Program to create an Employee Record System with an Array of objects for a given N number of employees using structure. Consider the below-mentioned attributes in the Employee structure:
// - emp_id
// - emp_name
// - emp_age
// - emp_role
// - emp_city
// - emp_experience
// - emp_company_name


#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    char name[100];
    int age;
    char role[100];
    char city[100];
    int experience;
    char company[100];
} s1[100];

main()

{
    int n;

    printf("Enter number of employee=");
    scanf("%d",&n);

    for (int i = 0; i < n; i++){

        printf("Enter id=");
        scanf("%d",&s1[i].id);

        printf("Enter employee name=");
        scanf("%s",&s1[i].name);

        printf("Enter age=");
        scanf("%d",&s1[i].age);

        printf("Enter role=");
        scanf("%s",&s1[i].role);
        
        printf("Enter city name=");
        scanf("%s",&s1[i].city);
        
        printf("Enter Experience=");
        scanf("%d",&s1[i].experience);

        printf("Enter Company name=");
        scanf("%s",&s1[i].company);
    }

    for (int i = 0; i < n; i++){

        printf("Id=%d \n, Employee name=%s\n, Age=%d\n, Role=%s\n, City name=%s\n, Experience=%d\n, Company name=%s\n",s1[i].id, s1[i].name, s1[i].age, s1[i].role, s1[i].city, s1[i].experience, s1[i].company);

    }
}