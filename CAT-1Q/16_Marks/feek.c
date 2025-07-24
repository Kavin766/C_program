#include <stdio.h>
#include <stdlib.h>
struct Student {
    int rollNo;
    char name[50];
    float marks;
};
int main() {
    FILE *fp;
    struct Student s;
    int recordNum;
    // Open file in read+write binary mode
    fp = fopen("students.dat", "rb+");
    if (fp == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }
    printf("Enter record number to edit (starting from 0): ");
    scanf("%d", &recordNum);
    // Move the file pointer to the record position
    fseek(fp, recordNum * sizeof(struct Student), SEEK_SET);
    // Get new data from user
    printf("Enter new details:\n");
    printf("Roll Number: ");
    scanf("%d", &s.rollNo);
    printf("Name: ");
    scanf(" %[^\n]", s.name);
    printf("Marks: ");
    scanf("%f", &s.marks);
    // Overwrite the record
    fwrite(&s, sizeof(struct Student), 1, fp);
    printf("Record updated successfully.\n");
    fclose(fp);
    return 0;
}
