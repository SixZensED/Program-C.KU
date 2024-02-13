#include <stdio.h>

main() {
	int x1,x2,y = 3,*pt;
	x1 = 2 * (y+5);
	pt = &y;
	x2 = 2 * (*pt + 5);
	printf("x1 = %d,x2 = %d\n",x1,x2);
	getch();
}