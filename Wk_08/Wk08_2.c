#include <stdio.h>
main() {
	int *ptr,count,val;
	count = 100;
	ptr = &count;
	val = *ptr;
	printf("%d\n",count);
	printf("%p\n",ptr);
	printf("%d\n",val);
	printf("%d\n",*ptr);
	getch();
}