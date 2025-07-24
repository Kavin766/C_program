#include <stdio.h>
int main() {
    FILE *fptr1, *fptr2;
    char ch;
    fptr1 = fopen("student.txt", "w");
    if (fptr1 == NULL) {
        printf("Error creating student.txt\n");
        return 1;
    }
    fprintf(fptr1, "Name: kavin\nDepartment: AIML\n");
    fclose(fptr1);
    fptr1 = fopen("student.txt", "r");
    if (fptr1 == NULL) {
        printf("Error opening student.txt\n");
        return 1;
    }
    fptr2 = fopen("display.txt", "w");
    if (fptr2 == NULL) {
        printf("Error creating display.txt\n");
        fclose(fptr1);
        return 1;
    }
    while ((ch = fgetc(fptr1)) != EOF) {
        fputc(ch, fptr2);
    }
    printf("Contents copied successfully to display.txt\n");
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}