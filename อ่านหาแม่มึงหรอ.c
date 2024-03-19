#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_EMPLOYEES 100
#define FILENAME "employees.txt"

struct Employee {
    char name[50];
    int id;
    float salary;
};

void add(struct Employee employees[], int *num_employees) {
    if (*num_employees < MAX_EMPLOYEES) {
        struct Employee newEmployee;

        printf("Enter employee name: ");
        scanf(" %[^\n]", newEmployee.name);

        printf("Enter employee ID: ");
        scanf("%d", &newEmployee.id);

        printf("Enter employee salary: ");
        scanf("%f", &newEmployee.salary);

        employees[*num_employees] = newEmployee;
        (*num_employees)++;

        printf("Employee added successfully.\n");
    } else {
        printf("Cannot add more employees. Maximum limit reached.\n");
    }
}

void view(struct Employee employees[], int num_employees) {
    if (num_employees == 0) {
        printf("No employees to display.\n");
    } else {
        printf("List of employees:\n");
        for (int i = 0; i < num_employees; i++) {
            printf("Employee %d:\n", i + 1);
            printf("Name: %s\n", employees[i].name);
            printf("ID: %d\n", employees[i].id);
            printf("Salary: %.2f\n", employees[i].salary);
            printf("\n");
        }
    }
}

void search(struct Employee employees[], int num_employees) {
    int search_id;
    printf("Enter employee ID to search: ");
    scanf("%d", &search_id);

    int found = 0;
    for (int i = 0; i < num_employees; i++) {
        if (employees[i].id == search_id) {
            printf("Employee found:\n");
            printf("Name: %s\n", employees[i].name);
            printf("ID: %d\n", employees[i].id);
            printf("Salary: %.2f\n", employees[i].salary);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Employee with ID %d not found.\n", search_id);
    }
}

void save(struct Employee employees[], int num_employees) {
    FILE *file = fopen(FILENAME, "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }

    for (int i = 0; i < num_employees; i++) {
        fprintf(file, "%s,%d,%.2f\n", employees[i].name, employees[i].id, employees[i].salary);
    }

    fclose(file);
}

void load(struct Employee employees[], int *num_employees) {
    FILE *file = fopen(FILENAME, "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return;
    }

    while (!feof(file) && *num_employees < MAX_EMPLOYEES) {
        fscanf(file, " %[^,],%d,%f\n", employees[*num_employees].name, &employees[*num_employees].id, &employees[*num_employees].salary);
        (*num_employees)++;
    }

    fclose(file);
}

int main() {
    struct Employee employees[MAX_EMPLOYEES];
    int num_employees = 0;
    int choice;

    load(employees, &num_employees);

    do {
        printf("\nEmployee Management System\n");
        printf("1. Add Employee\n");
        printf("2. View All Employees\n");
        printf("3. Search Employee by ID\n");
        printf("4. Save Employees to File\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add(employees, &num_employees);break;
            case 2:
                view(employees, num_employees);break;
            case 3:
                search(employees, num_employees);break;
            case 4:
                save(employees, num_employees);
                printf("Employees saved to file successfully.\n");break;
            case 5:
                printf("Exiting program.\n");break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 5.\n");
        }
    } while (choice != 5);

    return 0;
}
