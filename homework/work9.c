#include <stdio.h>

struct Student {
	char name[50];
	float mid_score;
	float fin_score;
	int id;
};

void check(struct Student *student) {
	float total = student->mid_score + student->fin_score;
	
	if (total >= 60 ) {
		printf("Student %s ID : %d pass\n",student->name,student->id);
	} else {
		printf("Student %s ID : %d unpass\n",student->name,student->id);
	}
}

int main() {
	int list_student;
	
	printf("Enter List Student : ");
	scanf("%d",&list_student);
	
	struct Student student[list_student];
	
	for (int i = 0; i < list_student;i++) {
		printf("Enter information Student is : %d\n",i+1);
		printf("ID : ");
		scanf("%d",&student[i].id);
		printf("Name : ");
		scanf("%s",&student[i].name);
		printf("Mid Score : ");
		scanf("%f",&student[i].mid_score);
		printf("Fin Score : ");
		scanf("%f",&student[i].fin_score);
	}
	
	printf("\n result score\n");
	for (int i =0;i < list_student;i++) {
		check(&student[i]);
	}
	return 0;
}
