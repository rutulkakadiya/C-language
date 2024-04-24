// 5. Develop a C program that uses structures to represent a book (with attributes like title, author, and price). List N number of books' details using Array of objects.


#include <stdio.h>

struct book
{

    char title[100];
    char author[100];
    int price;
} s1[100];

main()

{
    int n;

    printf("Enter the number of book=");
    scanf("%d",&n);

    for (int i = 0; i < n; i++){


        printf("Enter title=");
        scanf("%s",&s1[i].title);


        printf("Enter author name=");
        scanf("%s",&s1[i].author);

        printf("Enter price=");
        scanf("%d",&s1[i].price);


    }

    for (int i = 0; i < n; i++){

        printf("Title=%s\n, Author name=%s\n, Price=%d\n",s1[i].title, s1[i].author, s1[i].price);

    }
}