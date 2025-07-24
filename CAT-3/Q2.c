#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FILE_NAME "students.txt"
typedef struct {
    int id;
    char name[50];
    float grade;
} Student;    
Student s;
// a) File creation and writing
void createAndWrite() {
    FILE *fp = fopen(FILE_NAME, "w");  // create and write
    int n;
    printf("How many students? ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("\nEnter ID: ");
        scanf("%d", &s.id);
        printf("Enter Name: ");
        getchar();  // clear newline character from buffer
        fgets(s.name, sizeof(s.name), stdin);
        s.name[strcspn(s.name, "\n")] = 0;
        printf("Enter Grade: ");
        scanf("%f", &s.grade);
        fprintf(fp, "%d %s %.2f\n", s.id, s.name, s.grade);
    }
    fclose(fp);
    printf("Records written to file.\n");
}
// b) Reading and displaying records
void readAndDisplay() {
    FILE *fp = fopen(FILE_NAME, "r");

    printf("\nStudent Records:\n");
    while (fscanf(fp, "%d %s %f", &s.id, s.name, &s.grade) != EOF) {
        printf("ID: %d, Name: %s, Grade: %.2f\n", s.id, s.name, s.grade);
    }
    fclose(fp);
}
// c) Appending new records
void appendRecords() {
    FILE *fp = fopen(FILE_NAME, "a");
    int n;
    printf("How many students to append? ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("\nEnter ID: ");
        scanf("%d", &s.id);
        getchar();
        printf("Enter Name: ");
        fgets(s.name, sizeof(s.name), stdin);
        s.name[strcspn(s.name, "\n")] = 0;
        printf("Enter Grade: ");
        scanf("%f", &s.grade);
        fprintf(fp, "%d %s %.2f\n", s.id, s.name, s.grade);
    }
    fclose(fp);
    printf("New records appended.\n");
}
int main() {
    int choice;
    do {
        printf("\n1. Create & Write\n2. Read & Display\n3. Append\n0. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: createAndWrite(); break;
            case 2: readAndDisplay(); break;
            case 3: appendRecords(); break;
            case 0: printf("Exiting program.\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 0);
    return 0;
}