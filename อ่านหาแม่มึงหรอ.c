#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char n[50];
    int id;
    float s;
} Employee;
void addEmployee(FILE *file) {
    Employee newEmployee;
    printf("Enter employee name: ");
    scanf("%s", newEmployee.n);
    printf("Enter employee ID: ");
    scanf("%d", &newEmployee.id);
    printf("Enter employee salary: ");
    scanf("%f", &newEmployee.s);
    fprintf(file, "%s %d %.2f\n", newEmployee.n, newEmployee.id, newEmployee.s);
}
void displayAllEmployees(FILE *file) {
    Employee currentEmployee;
    printf("All employees:\n");
    while (fscanf(file, "%s %d %f", currentEmployee.n, &currentEmployee.id, &currentEmployee.s) != EOF) {
        printf("Name: %s, ID: %d, Salary: %.2f\n", currentEmployee.n, currentEmployee.id, currentEmployee.s);
    }
}
void searchEmployee(FILE *file) {
    int searchID;
    printf("Enter employee ID to search: ");
    scanf("%d", &searchID);
    Employee currentEmployee;
    while (fscanf(file, "%s %d %f", currentEmployee.n, &currentEmployee.id, &currentEmployee.s) != EOF) {
        if (currentEmployee.id == searchID) {
            printf("Name: %s, ID: %d, Salary: %.2f\n", currentEmployee.n, currentEmployee.id, currentEmployee.s);
        }
    }
}
int main() {
    FILE *file = fopen("employees.txt", "a+");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    int choice;
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
    return 0;
}
