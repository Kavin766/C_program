#include <stdio.h>
#include <string.h>
#define MAX 100
#define FILE_NAME "students.txt"// Function to write student names to file
void saveNamesToFile() {
    FILE *fp;
    int n;
    char name[MAX];
    fp = fopen(FILE_NAME, "w");
    printf("How many student names? ");
    scanf("%d", &n);
    getchar();  // clear newline from buffer
    for (int i = 0; i < n; i++) {
        printf("Enter name %d: ", i + 1);
        fgets(name, MAX, stdin);
        name[strcspn(name, "\n")] = '\0'; // remove newline
        fprintf(fp, "%s\n", name);
    }
    fclose(fp);
    printf("Names saved to '%s'.\n", FILE_NAME);
}
// a) Get student name at position n
void getNameAtPosition() {
    FILE *fp;
    int lineNo = 1, target;
    char name[MAX];
    printf("Enter the position number: ");
    scanf("%d", &target);
    fp = fopen(FILE_NAME, "r");
    while (fgets(name, MAX, fp) != NULL) {
        if (lineNo == target) {
            name[strcspn(name, "\n")] = '\0'; // remove newline
            printf("Student at position %d: %s\n", target, name);
            fclose(fp);
            return;
        }
        lineNo++;
    }
    printf("No student found at position %d.\n", target);
    fclose(fp);
}
// b) Display names that start with 'C' or 'c'
void namesStartingWithC() {
    FILE *fp;
    char name[MAX];
    int found = 0;
    fp = fopen(FILE_NAME, "r");
    printf("Students whose names start with 'C':\n");
    while (fgets(name, MAX, fp) != NULL) {
        if (name[0] == 'C' || name[0] == 'c') {
            name[strcspn(name, "\n")] = '\0'; // remove newline
            printf("%s\n", name);
            found = 1;
        }
    }
    if (!found)
        printf("No names starting with 'C'.\n");
    fclose(fp);
}
int main() {
    int choice;
    do {
        printf("\n--- Student Name Manager ---\n");
        printf("1. Save student names to file\n");
        printf("2. Get name at specific position\n");
        printf("3. Show names starting with 'C'\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // flush newline
        switch (choice) {
            case 1: saveNamesToFile(); break;
            case 2: getNameAtPosition(); break;
            case 3: namesStartingWithC(); break;
            case 0: printf("Exiting program.\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 0);
    return 0;
}
