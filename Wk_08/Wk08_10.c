#include <stdio.h>

main() {
	char msg[100],*pt;
	int letter = 0,word = 1;
	printf("Enter message : ");
	gets(msg);
	pt = msg;
	while (*pt) {
		if (*pt == "") {
			word++;
		} else {
			letter++;
		}
		pt++;
	}
	printf("\nLetter = %d\n",letter);
	printf("Word =  %d\n",word);
	getch();
}