#include <stdio.h>

void main() {
	char *c,ch[5];
	int x, *i,j[5];
	float *f,g[5];
	c = ch;
	i = j;
	f = g;
	for (x = 0; x < 5;x++) {
		printf("%p %p %p\n",c+x,i+x,f+x);
		getch();
	}
}