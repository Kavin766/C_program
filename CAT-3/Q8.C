#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int roll;
    char name[50];
} Student;

typedef struct {
    int roll;
    char action;  // 'A' = Add, 'R' = Remove
    char name[50]; // name needed only for Add
} Transaction;

int main() {
    FILE *master = fopen("master.txt", "r");
    FILE *trans = fopen("trans.txt", "r");
    FILE *updated = fopen("updated.txt", "w");

    if (master == NULL || trans == NULL || updated == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    Student s;
    Transaction t;

    int readMaster = fscanf(master, "%d %s", &s.roll, s.name);
    int readTrans = fscanf(trans, "%d %c %s", &t.roll, &t.action, t.name);

    while (readMaster != EOF || readTrans != EOF) {
        if (readMaster != EOF && (readTrans == EOF || s.roll < t.roll)) {
            // Write student as is (not affected by transaction)
            fprintf(updated, "%d %s\n", s.roll, s.name);
            readMaster = fscanf(master, "%d %s", &s.roll, s.name);
        } else if (readTrans != EOF && (readMaster == EOF || t.roll < s.roll)) {
            // Transaction only (Add new student)
            if (t.action == 'A')
                fprintf(updated, "%d %s\n", t.roll, t.name);
            readTrans = fscanf(trans, "%d %c %s", &t.roll, &t.action, t.name);
        } else if (readMaster != EOF && readTrans != EOF && s.roll == t.roll) {
            // Matching roll numbers
            if (t.action == 'A') {
                // Duplicate Add, write only once
                fprintf(updated, "%d %s\n", s.roll, s.name);
            }
            // If Remove, skip writing this student
            readMaster = fscanf(master, "%d %s", &s.roll, s.name);
            readTrans = fscanf(trans, "%d %c %s", &t.roll, &t.action, t.name);
        }
    }

    fclose(master);
    fclose(trans);
    fclose(updated);

    printf("Updated student list saved to 'updated.txt'.\n");

    return 0;
}
