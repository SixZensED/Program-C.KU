#include <stdio.h>

main() {
	int score[4],i,sum = 0;
	float avg;
	for (i=0;i <4; i++) {
		printf("Enter scorer %d : ",i);
		scanf("%d",&score[i]);
		sum = sum + score[i];
	}
	avg = (float)sum/4;
	printf("The Average = %.2f\n",avg);
	getch();
}
