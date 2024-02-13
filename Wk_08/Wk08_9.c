#include <stdio.h>

main() {
	char w[] = "Im struggle in C";
	char *p,int i;
	p = w;
	printf("x = %c\n",*(p + 2));
	*(p+2) = 'B';
	printf("x = %c\n",*(w + 2));
	for (i = 0;*(p+i) != '\0';i++) {
		printf("%c",*(p+i));
	}
	getch();
}