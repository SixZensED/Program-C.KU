#include <stdio.h>

main() {
	float temp[7],sum = 0, avg = 0;
	int i = 0;
	for (i = 0; i<= 6;i++) {
		printf("Enter temperature of day %d : ",i+1);
		scanf("%d",&temp[i]);
		sum = sum + temp[i];	
	}
	avg = sum/7;
	printf("The average of temperature : %f",avg);
	getch();
}
