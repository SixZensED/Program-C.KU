#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id;
    char name[50];
    float salary;
    int age;
    char gender;
};

int main() {
    FILE *file = fopen("D:\\employee.dat", "w");  // Use "w" for writing in text mode
    if (file == NULL) {
        printf("Error! File not found!");
        return 1;
    }

    int numEmployees;
    printf("Enter number of employees: "); 
    scanf("%d", &numEmployees);

    for (int i = 0; i < numEmployees; ++i) {
        struct Employee emp;

        printf("\nEmployee %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &emp.id);

        printf("Name: ");
        scanf("%s", emp.name);

        printf("Salary: ");
        scanf("%f", &emp.salary);

        printf("Age: ");
        scanf("%d", &emp.age);

        printf("Gender (M/F): ");
        scanf(" %c", &emp.gender);

        fprintf(file, "%d %s %.2f %d %c\n", emp.id, emp.name, emp.salary, emp.age, emp.gender);
    }

    fclose(file);

    file = fopen("D:\\employee.dat", "r");  // Use "r" for reading in text mode
    if (file == NULL) {
        printf("Can't open file");
        return 1;
    }

    printf("\nInformation for all employees:\n");
    struct Employee empRead;
    while (fscanf(file, "%d %s %f %d %c", &empRead.id, empRead.name, &empRead.salary, &empRead.age, &empRead.gender) == 5) {
        printf("ID: %d, Name: %s, Salary: %.2f, Age: %d, Gender: %c\n",
               empRead.id, empRead.name, empRead.salary, empRead.age, empRead.gender);
    }

    fclose(file);
    return 0;
}
