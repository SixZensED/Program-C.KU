#include <stdio.h>

void user(char *name,int *age) {
	int year = 2024 - (*age);
	printf("Name : %s\nGroup : ",name);
	if (year >= 0 && year <= 2) {
		printf("(Baby)\n");
	} else if (year >= 12 && year <= 19) {
		printf("(Teen)\n");
	} else if (year >= 20 && year <= 39) {
		printf("(Young)");
	} else if (year >= 40 && year <= 59) {
		printf("(Middle-age)");
	} else if (year >= 60) {
		printf("(Old)");
	}
}

int main() {
	char name[50];
	int age;
	printf("Enter name : ");
	scanf("%s",name);
	printf("Enter age : ");
	scanf("%d",&age);
	user(name,&age);
	
	return 0;
}
