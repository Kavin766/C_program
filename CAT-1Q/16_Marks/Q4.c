#include <stdio.h>
 int main() {
    float salary[15], temp;
    int i, j;
    for (i = 0; i < 15; i++) {
        printf("Enter salary for employee %d: ", i+1);
        scanf("%f", &salary[i]);
    }
    for (i = 0; i < 14; i++) {
        for (j = i + 1; j < 15; j++) {
            if (salary[i] > salary[j]) {
                temp = salary[i];
                salary[i] = salary[j];
                salary[j] = temp;
            }
        }
    }
    printf("Salaries in Ascending Order:\n");
    for (i = 0; i < 15; i++)
        printf("%.2f\n", salary[i]);
    printf("Highest salary: %.2f\n", salary[14]);
    printf("Lowest salary: %.2f\n", salary[0]);
    return 0;
 }