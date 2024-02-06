#include <stdio.h>

int electric(int);

main() {
	int no,watt,value;
	printf("Enter customer number : ");
	scanf("%d",&no);
	printf("Watt used : ");
	scanf("%d",&watt);
	value = electric(watt);
	printf("Electric value = %d",value);
}

int electric(int w) {
	int total,fee = 0;
	total = w;
	if (total >= 300) {
		fee += (300*9);
	} else {
		fee += (total-300)*8;
	}
	if (total >= 1000) {
		fee += (400*6);
		fee += (total-1000)*5;
	} else {
		fee += (total-600)*6;
	}
	return(fee);
}