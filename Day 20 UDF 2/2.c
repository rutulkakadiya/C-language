// Write a Program to find the length of the String by passing a string as an argument using UDF.For example,
// Input:
// Enter any string: development

// Output:
// Length is: 11

#include <stdio.h>
#include <string.h>

int find(char *str)
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }

    return length;
}

int main()
{
    char input[100];

    printf("Enter any string: ");
    scanf("%s", input);

    int length = find(input);
    printf("Length is: %d\n", length);

    return 0;
}