#include <stdio.h>
#include <string.h>

struct student {
	char name[30];
	float grade;
};

void printstudent(struct student stud[]);
main() {
	struct student st[3];
	int i;
	for (i=0;i<3;i++) {
		printf("Enter student's name : ");
		scanf("%s",st[i].name);
		printf("Enter grade : ");
		scanf("%f",&st[i].grade);
	}
	printstudent(st);
	getch();
}

void printstudent(struct student stud[]) {
	int n;
	for (n = 0; n<3;n++) {
		printf(" %s have frade is %.2f",stud[n].name,stud[n].grade);
	}
}