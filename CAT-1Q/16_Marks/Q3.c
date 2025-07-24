#include <stdio.h>
#include <math.h>  // For sqrt, pow, sin, cos, tan

int main() {
    int choice;
    double num1, num2, result;

    printf("Scientific Calculator\n");
    printf("=====================\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Square Root (√)\n");
    printf("6. Power (x^y)\n");
    printf("7. Sine (sin)\n");
    printf("8. Cosine (cos)\n");
    printf("9. Tangent (tan)\n");
    printf("Enter your choice (1-9): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            if (num2 != 0)
                result = num1 / num2;
            else {
                printf("Error: Division by zero!\n");
                return 1;
            }
            printf("Result: %.2lf\n", result);
            break;

        case 5:
            printf("Enter a number: ");
            scanf("%lf", &num1);
            if (num1 >= 0)
                result = sqrt(num1);
            else {
                printf("Error: Negative number for square root!\n");
                return 1;
            }
            printf("Result: %.2lf\n", result);
            break;

        case 6:
            printf("Enter base and exponent: ");
            scanf("%lf %lf", &num1, &num2);
            result = pow(num1, num2);
            printf("Result: %.2lf\n", result);
            break;

        case 7:
            printf("Enter angle in degrees: ");
            scanf("%lf", &num1);
            result = sin(num1 * M_PI / 180); // Convert to radians
            printf("Result: %.4lf\n", result);
            break;

        case 8:
            printf("Enter angle in degrees: ");
            scanf("%lf", &num1);
            result = cos(num1 * M_PI / 180);
            printf("Result: %.4lf\n", result);
            break;

        case 9:
            printf("Enter angle in degrees: ");
            scanf("%lf", &num1);
            result = tan(num1 * M_PI / 180);
            printf("Result: %.4lf\n", result);
            break;

        default:
            printf("Invalid choice. Please enter 1-9.\n");
    }

    return 0;
}