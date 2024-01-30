#include <stdio.h>
#include <string.h>

main() {
	char string1[100],string2[100],string3[100];
	char ans[1000];
	int choice;
	
	printf("\nentered first string : ");
	scanf("%s",string1);
	printf("\nentered two string : ");
	scanf("%s",string2);
	printf("\nentered three string : ");
	scanf("%s",string3);
	
	printf("\nSelect choice\n");
	printf("\nMenu 1 : String Concat\n");
	printf("\nMenu 2 : String Compare\n");
	printf("\nMenu 3 : String Length\n");
	
	printf("enter choice (1/2/3) : ");
	scanf("%d",&choice);
	
	int anslength = strlen(string1) + strlen(string2) + strlen(string3);
	switch(choice) {
		case 1:
			strcpy(ans,string1);
			strcat(ans,string2);
			strcat(ans,string3);
			printf("answer string concat : %s\n",ans);
			break;
		case 2:
			if (strcmp(strupr(string1),strupr(string2)) == 0 && strcmp(strupr(string2),strupr(string3)) == 0) {
				printf("all three string is same");
			} else {
				printf("all three string isn't same");
			}
			break;
		case 3:
		printf("answer length three string is : %d\n",anslength);
		break;
		default : printf("not have this choice!");		
	}
}
