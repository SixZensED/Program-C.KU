#include <stdio.h>
int chknumber(float grade);
main() {
	float gpa[5],min = 100, max = 0;
	int i = 0;
	for (i=0; i <= 5;i++) {
		printf("Enter grade of student %d : ",i+1);
		scanf("%f",&gpa[i]);
		if (chknumber(gpa[i])) {
			if (max < gpa[i]) {
				max = gpa[i];
			}
		}
	}
	printf("The maximum of grade : %.2f\n",max);
}
int chknumber(float grade) {
	int ret = 1;
	if (grade < 0) {
		printf("this number is too short \n");
		ret = 0;
	} else if (grade > 4) {
		printf("this number is too long \n");
		ret = 0;
	}
	return(ret);
}