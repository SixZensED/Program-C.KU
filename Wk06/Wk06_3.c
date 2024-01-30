#include <stdio.h>

main() {
	float gpa[10],min = 100,max = 0;
	int i = 0;
	for (i= 0; i<= 9;i++) {
		printf("Enter grade of student %d : ",i+1);
		scanf("%f",&gpa[i]);
		if (min > gpa[i]) {
			min = gpa[i];
		}
		if (max < gpa[i]) {
			max = gpa[i];
		}
	}
			printf("The minimum of grade : %f",min);
		printf("The maximum of grade : %f",max);
getch();
}
