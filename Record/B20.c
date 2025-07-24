#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    int rollno;
    char name[50];
};

int main() {
    FILE *mf, *tf, *uf;
    struct student st[200];  // Increased size for additions
    int n = 0, i, j;

    // Open Master File
    mf = fopen("master.txt", "r");
    if (mf == NULL) {
        printf("Error opening master file\n");
        return 1;
    }

    // Read data from master file
    while (fscanf(mf, "%d %s", &st[n].rollno, st[n].name) != EOF) {
        n++;
    }
    fclose(mf);

    // Open Transaction File
    tf = fopen("transaction.txt", "r");
    if (tf == NULL) {
        printf("Error opening transaction file\n");
        return 1;
    }

    int roll;
    char action;
    char name[50];

    while (fscanf(tf, "%d %c", &roll, &action) != EOF) {
        if (action == 'A') {
            fscanf(tf, "%s", name);
            // Add new student
            st[n].rollno = roll;
            strcpy(st[n].name, name);
            n++;
        } else if (action == 'D') {
            // Delete student
            for (i = 0; i < n; i++) {
                if (st[i].rollno == roll) {
                    // Shift left
                    for (j = i; j < n - 1; j++) {
                        st[j] = st[j + 1];
                    }
                    n--;
                    break;
                }
            }
        }
    }
    fclose(tf);

    // Sort students by roll number (ascending)
    struct student temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (st[i].rollno > st[j].rollno) {
                temp = st[i];
                st[i] = st[j];
                st[j] = temp;
            }
        }
    }
    // Write updated list to file
    uf = fopen("updated_list.txt", "w");
    if (uf == NULL) {
        printf("Error creating updated list file\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        fprintf(uf, "%d %s\n", st[i].rollno, st[i].name);
    }
    fclose(uf);

    printf("Updated list created successfully.\n");
    return 0;
}