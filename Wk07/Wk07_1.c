#include <stdio.h>
void citizen(float,float,int);

main() {
	float people,rate;
	int year;
	printf("Number of people : ");
	scanf("%f",&people);
	printf("Increase rate : ");
	scanf("%d",&rate);
	printf("Number of year :");
	scanf("%d",&year);
	citizen(people,rate,year);
	getch();
}

void citizen(float p,float r,int y) {
	int i; float temp;
	for (i = 0; i<y;i++) {
		temp = (r/100)*p;
		p += temp;
		printf("Year %d -> %.2f\n",i+1,p);
	}
}