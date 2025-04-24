#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    char department[30];
    float basic_salary;
    float allowances;
    float deductions;
    float net_salary; // Will be calculated
};

int main() {
    int n, i;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];

    // Input employee details
    for (i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d\n", i + 1);

        printf("ID: ");
        scanf("%d", &emp[i].id);

        printf("Name: ");
        scanf(" %s", &emp[i].name); // Reads string with spaces

        printf("Department: ");
        scanf(" %[^\n]", emp[i].department);

        printf("Basic Salary: ");
        scanf("%f", &emp[i].basic_salary);

        printf("Allowances: ");
        scanf("%f", &emp[i].allowances);

        printf("Deductions: ");
        scanf("%f", &emp[i].deductions);

        // Calculate net salary
        emp[i].net_salary = emp[i].basic_salary + emp[i].allowances - emp[i].deductions;
    }

    // Display payroll
    printf("\n\n--- Payroll Details ---\n");
    printf("ID\tName\t\tDepartment\tBasic\tAllowances\tDeductions\tNet Salary\n");
    for (i = 0; i < n; i++) {
        i+1;
        printf("%d\t%-15s%-15s%.2f\t%.2f\t\t%.2f\t\t%.2f\n",
               emp[i].id, emp[i].name, emp[i].department,
               emp[i].basic_salary, emp[i].allowances,
               emp[i].deductions, emp[i].net_salary);
    }

    return 0;
}