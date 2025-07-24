#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char names[100][100];
    int num, choice, i, n;
    FILE *fp;
    printf("Enter the number of names: ");
    scanf("%d", &num);
    printf("Enter %d names:\n", num);
    for (i = 0; i < num; i++) {
        scanf("%s", names[i]);
    }
    // Writing names to file
    fp = fopen("names.txt", "w");
    if (fp == NULL) {
        printf("Error in opening file.\n");
        return 1;
    }
    for (i = 0; i < num; i++) {
        fprintf(fp, "%s\n", names[i]);
    }
    fclose(fp);
    printf("Names stored successfully!\n");
    printf("\nMenu:\n");
    printf("1. Display the nth name\n");
    printf("2. Display all names starting with 'S' or 's'\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter the position (1 to %d): ", num);
        scanf("%d", &n);
        if (n >= 1 && n <= num) {
            printf("The name at position %d is: %s\n", n, names[n - 1]);
        } else {
            printf("Invalid position!\n");
        }
    } else if (choice == 2) {
        printf("Names starting with 'S' or 's':\n");
        for (i = 0; i < num; i++) {
            if (names[i][0] == 'S' || names[i][0] == 's') {
                printf("%s\n", names[i]);
            }
        }
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}