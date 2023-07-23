#include <stdio.h>
struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    float salary;
    struct Date joiningDate;
};

void printEmployeeDetails(struct Employee emp) {
    printf("\nEmployee Details:\n");
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Salary: %.2f\n", emp.salary);
    printf("Joining Date: %02d/%02d/%04d\n", emp.joiningDate.day, emp.joiningDate.month, emp.joiningDate.year);
}

int main() {

    struct Employee emp1 = {"AKASH", 1001, 50000.0, {15, 7, 2023}};
    printf("Data for emp1:\n");
    printf("Name: %s\n", emp1.name);
    printf("ID: %d\n", emp1.id);
    printf("Salary: %.2f\n", emp1.salary);
    printf("Joining Date: %02d/%02d/%04d\n", emp1.joiningDate.day, emp1.joiningDate.month, emp1.joiningDate.year);

    printf("\nEnter details for Employee 1:\n");
    printf("Name: ");
    scanf("%s", emp1.name);
    printf("ID: ");
    scanf("%d", &emp1.id);
    printf("Salary: ");
    scanf("%f", &emp1.salary);
    printf("Joining Date (dd mm yyyy): ");
    scanf("%d %d %d", &emp1.joiningDate.day, &emp1.joiningDate.month, &emp1.joiningDate.year);

    printEmployeeDetails(emp1);

    struct Employee employeeList[3];
    printf("\nEnter details for three employees:\n");
    for (int i = 0; i < 3; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employeeList[i].name);
        printf("ID: ");
        scanf("%d", &employeeList[i].id);
        printf("Salary: ");
        scanf("%f", &employeeList[i].salary);
        printf("Joining Date (dd mm yyyy): ");
        scanf("%d %d %d", &employeeList[i].joiningDate.day, &employeeList[i].joiningDate.month, &employeeList[i].joiningDate.year);
    }

    printf("\nEmployee Details:\n");
    for (int i = 0; i < 3; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: %s\n", employeeList[i].name);
        printf("ID: %d\n", employeeList[i].id);
        printf("Salary: %.2f\n", employeeList[i].salary);
        printf("Joining Date: %02d/%02d/%04d\n", employeeList[i].joiningDate.day, employeeList[i].joiningDate.month, employeeList[i].joiningDate.year);
    }

    return 0;
}
