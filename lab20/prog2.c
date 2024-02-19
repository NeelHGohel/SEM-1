//Create a structure book with book title, author, publication, and price. Read data of 3 books and display.
#include<stdio.h>
struct Book
{
	char book_title[30],author[30],publication[30];
	int price;
};
void main()
{
	int b,i;
	struct Book b1[3];
	for(i=0;i<3;i++)
	{
		printf("Enter book name");
		scanf("%s",b1[i].book_title);
		printf("Enter author name");
		scanf("%s",b1[i].author);
		printf("Enter publication");
		scanf("%s",b1[i].publication);
		printf("Enter book price");
		scanf("%d",&b1[i].price);
	}
	for(i=0;i<3;i++)
	{
		printf("\nbook name=%s",b1[i].book_title);
		printf("\nauthor name=%s",b1[i].author);
		printf("\npublication name=%s",b1[i].publication);
		printf("\nprice=%d",b1[i].price);
	}
}
