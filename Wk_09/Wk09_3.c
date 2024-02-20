#include <stdio.h>
#include <string.h>

struct book {
	char bookname[30];
	char author[30];
	float price;
};

struct book inputbox();

main() {
	struct book book1;
	book1 = inputbox();
	printf("the price of %s (%s) is %.2f",book1.bookname,book1.author,book1.price);
	getch();
}

struct book inputbox() {
	struct book ebook;
	printf("Enter book name : ");
	gets(ebook.bookname);
	printf("Enter book author : ");
	gets(ebook.author);
	printf("Enter book price : ");
	scanf("%f",&ebook.price);
	return(ebook);
}