// Write a Program to create Student Record System for 3 students using structure. Consider the below-mentioned attributes in the Student structure:
// - stu_id
// - stu_name
// - stu_age
// - stu_course
// - stu_city
// - stu_standard
// - stu_school

#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    char name[100];
    int age;
    char course[100];
    char city[100];
    int standard;
    char school[100];
} s1[100];

main()

{
    int n;

    printf("Enter number of student=");
    scanf("%d",&n);

    for (int i = 0; i < n; i++){

        printf("Enter id=");
        scanf("%d",&s1[i].id);

        printf("Enter student name=");
        scanf("%s",&s1[i].name);

        printf("Enter age=");
        scanf("%d",&s1[i].age);

        printf("Enter course name=");
        scanf("%s",&s1[i].course);
        
        printf("Enter city name=");
        scanf("%s",&s1[i].city);
        
        printf("Enter standard=");
        scanf("%d",&s1[i].standard);

        printf("Enter school name=");
        scanf("%s",&s1[i].school);
    }

    for (int i = 0; i < n; i++){

        printf("Id=%d \n, Student name=%s\n, Age=%d\n, Course name=%s\n, City name=%s\n, Standard=%d\n, School name=%s\n",s1[i].id, s1[i].name, s1[i].age, s1[i].course, s1[i].city, s1[i].standard, s1[i].school);

    }
}