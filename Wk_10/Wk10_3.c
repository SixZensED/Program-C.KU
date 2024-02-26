#include <stdio.h>
#include <stdlib.h>

struct threeNum {
	int n1,n2,n3;
};

main() {
	int n;
	struct threeNum num;
	FILE *fptr;
	
	if((fptr = fopen("D:\\program.bin","wb")) == NULL) {
		printf("Error! opening file");
		
		// Program exits if the file pointer retunrs NULL.
		exit(1);
	}
	
	for(n = 1;n< 5;n++) {
		num.n1 = n;
		num.n2 = 5*n;
		num.n3 = 5*n + 1;
		fwrite(&num,sizeof(struct threeNum),1,fptr);
	}
	fclose(fptr);
}