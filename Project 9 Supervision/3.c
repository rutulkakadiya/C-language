// Q3. Write a program that uses an enum to represent the days of the week (Monday, Tuesday, Wednesday, etc.). Print index value of all weekdays.

#include <stdio.h>

enum Days
{
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

int main()
{
    printf("Index values of weekdays:\n");
    printf("Monday: %d\n", Monday);
    printf("Tuesday: %d\n", Tuesday);
    printf("Wednesday: %d\n", Wednesday);
    printf("Thursday: %d\n", Thursday);
    printf("Friday: %d\n", Friday);
    printf("Satursday: %d\n", Saturday);
    printf("Sunday: %d\n", Sunday);
}