#include <stdio.h>
union Employee {
    int id;
    float salary;
    char name[50];
};
int main() {
    union Employee emp[60];
    int i, n;
    printf("Enter number of Employees: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("\nEnter details of employee %d\n", i + 1);
        printf("Enter Emp ID: ");
        scanf("%d", &emp[i].id);
        printf("Stored Emp ID: %d\n", emp[i].id);
        printf("Enter Emp salary: ");
        scanf("%f", &emp[i].salary);
        printf("Stored salary: %.2f\n", emp[i].salary);
        printf("Enter Emp Name: ");
        scanf("%s", emp[i].name);
        printf("Stored Name: %s\n", emp[i].name);
    }
    return 0;
}