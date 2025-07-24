#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50
typedef struct {
    char name[MAX];
    int age;
    float grade;
} Student;
Student *students = NULL; // dynamic array
int count = 0;            // current student count
// Add student
void addStudent() {
    Student temp;
    printf("Enter name: ");
    scanf(" %[^\n]", temp.name);
    printf("Enter age: ");
    scanf("%d", &temp.age);
    printf("Enter grade: ");
    scanf("%f", &temp.grade);
    // Resize memory
    Student *newList = realloc(students, (count + 1) * sizeof(Student));
    if (newList == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    students = newList;
    students[count] = temp;
    count++;

    printf("Student added successfully.\n");
}

// Display students
void displayStudents() {
    if (count == 0) {
        printf("No students to display.\n");
        return;
    }

    printf("\n--- Student List ---\n");
    for (int i = 0; i < count; i++) {
        printf("%d. %s | Age: %d | Grade: %.2f\n", i + 1, students[i].name, students[i].age, students[i].grade);
    }
}

// Remove student by index
void removeStudent() {
    int index;
    printf("Enter student number to remove (1 to %d): ", count);
    scanf("%d", &index);
    index--;

    if (index < 0 || index >= count) {
        printf("Invalid index!\n");
        return;
    }

    for (int i = index; i < count - 1; i++) {
        students[i] = students[i + 1];
    }

    // Resize memory
    Student *newList = realloc(students, (count - 1) * sizeof(Student));
    if (newList == NULL && count > 1) {
        printf("Memory resize failed, but student removed.\n");
    } else {
        students = newList;
    }

    count--;
    printf("Student removed successfully.\n");
}

int main() {
    int choice;

    do {
        printf("\n--- Student Management Menu ---\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Remove Student\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: removeStudent(); break;
            case 0:
                printf("Exiting program. Freeing memory...\n");
                free(students);
                break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 0);

    return 0;
}
