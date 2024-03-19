#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char name[50];
	int id;
	float salary;
} employee;

void add(FILE *file) {
	employee add_emp;
	printf("enter name : ");
	scanf("%s",add_emp.name);
	printf("enter id : ");
	scanf("%d",&add_emp.id);
	printf("enter salary : ");
	scanf("%f",&add_emp.salary);
	fprintf(file,"%s %d %f",add_emp.name,add_emp.id,add_emp.salary);
}

void show(FILE *file) {
	employee show_emp;
	while (fscanf(file,"%s %d %f",show_emp.name,&show_emp.id,&show_emp.salary) != EOF) {
		printf("name : %s id : %d salary : %f\n",show_emp.name,show_emp.id,show_emp.salary);
	}
}

void search(FILE *file) {
	employee search_emp;
	int search_id;
	printf("search id : ");
	scanf("%d",&search_id);
	while (fscanf(file,"%s %d %f",search_emp.name,&search_emp.id,&search_emp.salary) != EOF) {
		if (search_emp.id == search_id) {
			printf("name : %s id : %d salary : %f\n",search_emp.name,search_emp.id,search_emp.salary);
		}
	}
}

int main() {
	FILE * file = fopen("employee_test.txt","a+");
	
	if (file == NULL) {
		return 0;
	} else {
		int choose;
		printf("Menu \n1). Add Employee\n2). Show All Employee\n3). Search Employee With id\n Choose :");
		scanf("%d",&choose);
		switch(choose) {
			case 1 : add(file);
			break;
			case 2 : show(file);
			break;
			case 3 : search(file);
			break;
			default : printf("Please Select (1/2/3)");
		}
	}
	return 0;
}
