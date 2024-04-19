// Use file file handling method and perform read , write and append.

#include <stdio.h>

main()
{

    FILE *p;
    char data[100];
    
    p = fopen("demo.txt", "r");

    if (p == NULL)
    {
        printf("can`t open file");
    }
    else
    {
        printf("File open=");
    
    while (fgets(data, 50, p) != NULL)
    {
        printf("%s", data);
    }
    }

}