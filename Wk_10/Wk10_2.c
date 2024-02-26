#include <stdio.h>
#include <stdlib.h>

main() {
	int num;
	FILE * fptr;
	if ((fptr = fopen("D:\\program.txt","r")) == NULL) {
		printf("Error! opening file");
		
		// Program exits if the file pointer returns NULL
		exit(1);
	}
	fscanf(fptr,"%d",&num);
	
	printf("Value of n = %d",num);
	fclose(fptr);
}