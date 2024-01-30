#include <stdio.h>
#include <ctype.h>

main() {
	char input[1000];
	int list[26] = {0};
	
	printf("enter your character :");
	gets(input);
	
	for (int i = 0; input[i] != '\0';i++) {
		char getchar = input[i];
		getchar = tolower(getchar);
		list[getchar - 'a']++;
	}
	for (int i = 0;i < 26;i++) {
		if (list[i] > 0) {
			printf("%c %d\n",'a' + i,list[i]);
		}
	}
}
