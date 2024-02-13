#include <stdio.h>

main() {
	char x,y = 'A';
	char *ptx,*pty;
	pty = &y;
	*pty = y +1;
	printf("*pty = %c,y = %c\n",*pty,y);
	x = *pty +1;
	printf("x = %c\n",x);
	ptx = &x;
	printf("*pty = %c, *ptx = %c\n",*pty,*ptx);
	getch();
}