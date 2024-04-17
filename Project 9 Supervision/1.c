// Write a Program to create a Book Record System with an Array of objects for a given N number of books using structure. Consider the following attributes in the Book structure:
// - book_id
// - book_title
// - book_author
// - book_genre
// - book_publisher
// - book_publication_year
// - book_price

#include <stdio.h>

struct book
{
    int id;
    char title[100];
    char author[100];
    char genre[100];
    char publisher[100];
    int publication_year;
    int price;
} b[];

main()
{

    int a;

    printf("Enter the size =");
    scanf("%d", &a);

    for (int i = 1; i < a; i++)
    {

        printf("Enter id=");
        scanf("%d", &b[i].id);

        printf("Enter the title=");
        scanf("%s", &b[i].title);

        printf("Enter the author=");
        scanf("%s", &b[i].author);

        printf("Enter the genre=");
        scanf("%s", &b[i].genre);

        printf("Enter the publisher=");
        scanf("%s", &b[i].publisher);

        printf("Enter the publication_year=");
        scanf("%d", &b[i].publication_year);
    }

    for(int i=1; i<a; i++){
        printf("Id=%d \n, Title=%s \n, Author=%s \n, Genre=%s \n, Publisher=%s \n, Publication year%d \n",b[i].id,b[i].title,b[i].author,b[i].genre,b[i].publisher,b[i].publication_year);
    }
}