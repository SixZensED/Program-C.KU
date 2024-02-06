#include <stdio.h>
float Calbonus(float salary,int level) {
	float result;
	result = salary * (level * 0.05);
	return result;
}
main() {
	float sall,bonus;
	int level;
	printf("enter salary : ");
	scanf("%f",&sall);
	printf("enter salary level :");
	scanf("%d",&level);
	bonus = Calbonus(sall,level);
	printf("The bonus is %.2f",bonus);
}