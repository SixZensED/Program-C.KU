#include <stdio.h>
#include <ctype.h>

main() {
	int i,num,count1 = 0,count2 = 0;
	char name[20];
	printf("Enter your name : ");
	gets(name);
	for (num = 0;name[num] != '\0';num++) {
		switch (tolower(name[num])) {
			case 'a': case 'e' : case 'i' : case 'o' : case 'u' :
				count1++;
				break;
		}
	}
	printf("\n The number of vowel : %d\n",count1);
	for(i = num; i>= 0; i--) {
		printf("%c",name[i]);
	}
	getch();
}
