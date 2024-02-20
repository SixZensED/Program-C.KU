#include <stdio.h>
#include <string.h>

main() {
	struct book { 
	char bookname[30];
	char author[30];
	float price;
	};
	struct book book1,*ebook;
	ebook = &book1;
	printf("Enter book name : ");
	gets(ebook->bookname);
	printf("Enter book author : ");
	gets(ebook->author);
	printf("Enter book price : ");
	scanf("%f",&(*ebook).price);
	printf("The price of %s (%s) is %.2f",(*ebook).bookname,(*ebook).author,ebook->price);
	getch();
}