#include <stdio.h>

int main() {
    float basic, hra, da, gross;

    // Input basic salary
    printf("Enter the basic salary of the employee: ");
    scanf("%f", &basic);

    // Calculate HRA and DA based on salary ranges
    if (basic <= 10000) {
        hra = 0.20 * basic;
        da = 0.80 * basic;
    } else if (basic <= 20000) {
        hra = 0.25 * basic;
        da = 0.90 * basic;
    } else {
        hra = 0.30 * basic;
        da = 0.95 * basic;
    }

    // Gross salary = Basic + HRA + DA
    gross = basic + hra + da;

    // Output
    printf("Gross Salary = %.2f\n", gross);

    return 0;
}
