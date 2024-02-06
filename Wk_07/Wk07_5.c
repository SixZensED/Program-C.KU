#include <stdio.h>
#include <ctype.h>
int i;
void ChangeSize(void) {
	char str[100];
	printf("enter string : ");
	scanf("%s",str);
	for (i = 0;str[i] != '\0';i++) {
		str[i] = toupper(str[i]);
	}
	printf("The result : %s\n",str);
	getch();
}
void ChangeNumberToText(void) {
	char str2[100],ch1 = 'x';
	printf("enter string : ");
	scanf("%s",str2);
	for(i = 0;str2[i] != '\0';i++) {
		if (isdigit(str2[i])) {
			str2[i] = ch1;
		}
	}
	printf("result : = %s\n",str2);
	getch();
}

int chkChoice(char chk){
	int result = 0;
	switch(tolower(chk)) {
		case 'a' : case 'b' : result = -1; break;
	}
	return result;
}
void printmenu() {
	for (i=0;i <=41;i++) {
		printf("*");
		printf("\n");
		printf("*\ta. Convert Size of Character \t *\n");
		printf("*\tb. Change number to text \t *\n");
		for(i = 0;i<=41;i++) {
			printf("*");
			printf("\n");
		}
	}
}
main() {
	char choice;
	do {
		printmenu();
		printf("Enter your choice : ");
		choice = getchar();
		switch(tolower(choice)) {
			case 'a' : ChangeSize();
			break;
			case 'b' : ChangeNumberToText();
			break;
		}
	} while(chkChoice(choice) == 1);
}