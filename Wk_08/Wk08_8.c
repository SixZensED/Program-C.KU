#include <stdio.h>

void main() {
	int number[3];
	int *pt,i;
	number[0] = 100;
	number[1] = 200;
	number[2] = 300;
	pt = number;
	for(i = 0;i <3;i++) {
		printf("number[%d] = %d\n",i,*(pt+i));
	}
}