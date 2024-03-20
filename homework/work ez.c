#include <stdio.h>
#include <stdlib.h>

#define LOAD_FILE "employees.txt"

typedef struct {
	char name[50];
	int id;
	float salary;
} employee;

void add(FILE *file) {
	employee add;
	printf("enter name : ");
	scanf("%s",add.name);
	printf("\nenter id : ");
	scanf("%d",&add.id);
	printf("\nenter salary : ");
	scanf("%f",&add.salary);
	fprintf(file,"%s %d %f",add.name,add.id,add.salary);
}

void show(FILE *file) {
	employee show;
	while (fscanf(file,"%s %d %f",show.name,&show.id,&show.salary) != EOF) {
		printf("name : %s,id : %d,salary : %.2f\n----------------------",show.name,show.id,show.salary);
	}
}

void search(FILE *file) {
	employee search;
	int search_id;
	printf("search id : ");
	scanf("%d",&search_id);
	while(fscanf(file,"%s %d %f",search.name,&search.id,&search.salary) != EOF) {
		if (search_id == search.id) {
			printf("name : %s,id : %d,salary : %.2f\n----------------------",search.name,search.id,search.salary);
		}
	}
}

main() {
	FILE *file = fopen(LOAD_FILE,"a+");
	
	if (file == NULL) {
		return 1;
	} else {
		int choose;
		printf("Menu\n1). Add Employee\n2). Show All Employee\n3). Search Employee With Id\nChoose : ");
		scanf("%d",&choose);
		
		do
		switch(choose) {
			case 1 : add(file); break;
			case 2 : show(file); break;
			case 3: search(file); break;
			default : printf("Please Select Any (1/2/3)");
		}
		while (choose < 1 || choose > 3);
	}
	return 0;
	getch();
}
