#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_NAME "students.dat"

typedef struct {  nbm
    int id;
    char name[50];
    float grade;
} Student;

void insertStudent() {
    Student s;
    FILE *fp = fopen(FILE_NAME, "ab");
    printf("Enter ID, Name, Grade: ");
    scanf("%d", &s.id);
    getchar();  // Clear newline
    fgets(s.name, sizeof(s.name), stdin);
    //fgets(destination, size_limit, source_stream);
    s.name[strcspn(s.name, "\n")] = 0;
    scanf("%f", &s.grade); 
    fwrite(&s, sizeof(s), 1, fp);
    fclose(fp);
}

void displayStudents() {
    FILE *fp = fopen(FILE_NAME, "rb");
    Student s;
    while (fread(&s, sizeof(s), 1, fp)) {
        if (s.id != -1)
            printf("ID: %d, Name: %s, Grade: %.2f\n", s.id, s.name, s.grade);
    }
    fclose(fp);
}

void updateGrade(int id, float newGrade) {
    FILE *fp = fopen(FILE_NAME, "rb+");
    Student s;
    while (fread(&s, sizeof(s), 1, fp)) {
        if (s.id == id) {
            s.grade = newGrade;
            fseek(fp, -sizeof(s), SEEK_CUR);
            fwrite(&s, sizeof(s), 1, fp);
            break;
        }
    }
    fclose(fp);
}

void deleteStudent(int id) {
    FILE *fp = fopen(FILE_NAME, "rb+");
    Student s;
    while (fread(&s, sizeof(Student), 1, fp)) {
        if (s.id == id) {
            s.id = -1;
            fseek(fp, -sizeof(Student), SEEK_CUR);
            fwrite(&s, sizeof(Student), 1, fp);
            break;
        }
    }
    fclose(fp);
}

void searchByID(int id) {
    FILE *fp = fopen(FILE_NAME, "rb");
    Student s;
    while (fread(&s, sizeof(Student), 1, fp)) {
        if (s.id == id) {
            printf("ID: %d, Name: %s, Grade: %.2f\n", s.id, s.name, s.grade);
            break;
        }
    }
    fclose(fp);
}

int main() {
    int ch, id;
    float grade;

    do {
        printf("\n1.Insert 2.Display 3.Update 4.Delete 5.Search 0.Exit\nChoice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1: insertStudent(); break;
            case 2: displayStudents(); break;
            case 3:
                printf("ID to update: "); scanf("%d", &id);
                printf("New Grade: "); scanf("%f", &grade);
                updateGrade(id, grade); break;
            case 4:
                printf("ID to delete: "); scanf("%d", &id);
                deleteStudent(id); break;
            case 5:
                printf("ID to search: "); scanf("%d", &id);
                searchByID(id); break;
        }
    } while (ch != 0);

    return 0;
}
