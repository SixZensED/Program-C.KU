#include <stdio.h>

main() {
	int a[5] = {10,20,30,40,50};
	int *pt;
	pt = a;
	printf("%d\n",a[0]);
	printf("%d\n",*pt);
	printf("%d\n",*(pt +1));
	printf("%d\n",*(a+2));
	printf("%d\n",pt[3]);
	getch();
}