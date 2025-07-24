#include <stdio.h>
int main() {
    int salaries[15];
    int i, j, temp, choice;
    printf("Enter salaries of 15 employees:\n");
    for (i = 0; i < 15; i++) {
        printf("Salary of Employee %d: ", i + 1);
        scanf("%d", &salaries[i]);
    }
    printf("\nChoose sorting order:\n");
    printf("1. Ascending Order\n");
    printf("2. Descending Order\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    for (i = 0; i < 15 - 1; i++) {
        for (j = 0; j < 15 - i - 1; j++) {
            if ((choice == 1 && salaries[j] > salaries[j + 1]) ||(choice == 2 && salaries[j] < salaries[j + 1])) {
                // Swap
                temp = salaries[j];
                salaries[j] = salaries[j + 1];
                salaries[j + 1] = temp;
            }
        }
    }
    printf("\nSorted Salaries:\n");
    for (i = 0; i < 15; i++) {
        printf("Employee %2d Salary: %d\n", i + 1, salaries[i]);
    }
    if (choice == 1) {
        printf("\nHighest Paid Employee Salary: %d", salaries[14]);
        printf("\nLowest Paid Employee Salary: %d\n", salaries[0]);
    } else {
        printf("\nHighest Paid Employee Salary: %d", salaries[0]);
        printf("\nLowest Paid Employee Salary: %d\n", salaries[14]);
    }
    return 0;
}