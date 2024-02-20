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
	strcpy(ebook->bookname,"C Programming");
	strcpy(ebook->author,"Jame Calkin");
	(*ebook).price = 1500.50;
	printf("The price of %s (%s) is %.2f",(*ebook).bookname,(*ebook).author,ebook->price);
	getch();
}