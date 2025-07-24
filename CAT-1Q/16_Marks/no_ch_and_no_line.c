#include <stdio.h>
int main() {
    FILE *fp;
    char filename[100];
    char ch;
    int characters = 0, lines = 0;
    printf("Enter the filename: ");
    scanf("%s", filename);
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF) {
        characters++;
        if (ch == '\n') {
            lines++;
        }
    }
    fclose(fp);
    printf("\nTotal Characters: %d\n", characters);
    printf("Total Lines: %d\n", lines);
    return 0;
}
