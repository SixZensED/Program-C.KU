#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    int employeeID;
    float salary;
} Employee;

void addEmployee(FILE *file) {
    Employee newEmployee;
    printf("Enter employee name: ");
    scanf("%s", newEmployee.name);
    printf("Enter employee ID: ");
    scanf("%d", &newEmployee.employeeID);
    printf("Enter employee salary: ");
    scanf("%f", &newEmployee.salary);

    fprintf(file, "%s %d %.2f\n", newEmployee.name, newEmployee.employeeID, newEmployee.salary);
}

void displayAllEmployees(FILE *file) {
    Employee currentEmployee;
    rewind(file);
    printf("All employees:\n");
    while (fscanf(file, "%s %d %f", currentEmployee.name, &currentEmployee.employeeID, &currentEmployee.salary) != EOF) {
        printf("Name: %s, ID: %d, Salary: %.2f\n", currentEmployee.name, currentEmployee.employeeID, currentEmployee.salary);
    }
    printf("\n");
}

void searchEmployee(FILE *file) {
    int searchID;
    printf("Enter employee ID to search: ");
    scanf("%d", &searchID);
    Employee currentEmployee;
    rewind(file); 
    int found = 0;
    while (fscanf(file, "%s %d %f", currentEmployee.name, &currentEmployee.employeeID, &currentEmployee.salary) != EOF) {
        if (currentEmployee.employeeID == searchID) {
            printf("Employee found:\n");
            printf("Name: %s, ID: %d, Salary: %.2f\n", currentEmployee.name, currentEmployee.employeeID, currentEmployee.salary);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Employee with ID %d not found.\n", searchID);
    }
    printf("\n");
}

int main() {
    FILE *file = fopen("employees.txt", "a+");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int choice;
    do {
        printf("Menu:\n");
        printf("1. Add an employee\n");
        printf("2. Display all employees\n");
        printf("3. Search for an employee by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addEmployee(file);
                break;
            case 2:
                displayAllEmployees(file);
                break;
            case 3:
                searchEmployee(file);
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please enter again.\n");
        }
    } while(choice < 1 || choice > 4);

    fclose(file); 

    return 0;
}
