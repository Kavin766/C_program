#include <stdio.h>

struct student {
    int roll;
    char name[20];
    float cgpa;
    float fees;
};

int main() {
    // Declare an array of 3 students
    struct student s[3];

    // Input data for each student
    for (int i = 0; i < 2; i++) {
        printf("\nEnter details for student %d:\n", i );
        printf("Roll No: ");
        scanf("%d", &s[i].roll);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("CGPA: ");
        scanf("%f", &s[i].cgpa);
        printf("Fees: ");
        scanf("%f", &s[i].fees);
    }

    // Display student information
    printf("\nStudent Details:\n");
    for (int i = 0; i < 2; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll No: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("CGPA: %.2f\n", s[i].cgpa);
        printf("Fees: %.2f\n", s[i].fees);
    }

    return 0;
}
