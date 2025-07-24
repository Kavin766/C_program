#include <stdio.h>
#include <string.h>

struct employee {
    int code;
    char name[50];
    int join_year;
} emp[107];

int main() {
    int num;

    printf("Enter the number of employees: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        printf("Enter details for employee %d\n", i+1);

        printf("Employee code: ");
        scanf("%d", &emp[i].code);

        printf("Employee name: ");
        scanf("%s", emp[i].name);

        printf("Year of joining: ");
        scanf("%d", &emp[i].join_year);
    }

    int current_year;
    printf("Enter Current year: ");
    scanf("%d", &current_year);

    for (int i = 0; i < num; i++) {
        int tenure = current_year - emp[i].join_year;
        if (tenure > 3) {
            printf("Employee with tenure of 3 or more years:\n");
            printf("%s\n", emp[i].name);
        } else {
            printf("Employee working below these years:\n");
            printf("%s\n", emp[i].name);
        }
    }

    // Conduct of Experiment (15)
    // Observation & Results (15)

    return 0;
}