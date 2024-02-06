#include <stdio.h>

void student(int math,int sci,int english,int *groupA,int *groupB,int *groupC) {
	int total = math + sci + english;
	
	if (total >= 70 && total <= 100) {
		printf("Student Group A\n");
		(*groupA)++;
	} else if (total >= 50 && total <= 69) {
		printf("Student Group B\n");
		(*groupB)++;
	} else if (total <= 49) {
		printf("Student Group C\n");
		(*groupC)++;
	}
}

int main() {
	int list_student,groupA = 0,groupB = 0,groupC = 0;
	printf("enter number student : ");
	scanf("%d",&list_student);
	
	for (int i = 1; i <= list_student;i++) {
		int math,sci,english;
		printf("\nstudent : %d\n",i);
		
		printf("enter math score : ");
		scanf("%d",&math);
		
		printf("\nenter sci score : ");
		scanf("%d",&sci);
		
		printf("\nenter englisgh : ");
		scanf("%d",&english);
		
		student(math,sci,english,&groupA,&groupB,&groupC);
	}
	
	printf("\nstudent group list\n");
	printf("group A list : %d\n",groupA);
	printf("group B list : %d\n",groupB);
	printf("group C list : %d\n",groupC);
	return 0;
}
