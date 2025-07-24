#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    float mark1, mark2, mark3;
};
int main() {
    struct Student s[3];
    int i;
    for (i = 0; i < 3; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Name: ");
        getchar();
        fgets(s[i].name, sizeof(s[i].name), stdin);
        size_t len = strlen(s[i].name);
        if (len > 0 && s[i].name[len - 1] == '\n') {
            s[i].name[len - 1] = '\0';
        }

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Mark 1, Mark 2, Mark 3: ");
        scanf("%f %f %f", &s[i].mark1, &s[i].mark2, &s[i].mark3);
    }

    printf("\nStudent Details:\n");
    for (i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].roll);
        printf("Marks: %.2f, %.2f, %.2f\n", s[i].mark1, s[i].mark2, s[i].mark3);
    }

    return 0;
}