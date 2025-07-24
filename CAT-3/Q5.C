#include <stdio.h>

int main() {
    FILE *srcFile, *destFile;
    char source[100], dest[100];
    char ch;
    // Get file names from user
    printf("Enter source file name: ");
    scanf("%s", source);
    printf("Enter destination file name: ");
    scanf("%s", dest);
    // Open source file in read mode
    srcFile = fopen(source, "r");
    if (srcFile == NULL) {
        printf("Error: Cannot open source file.\n");
        return 1;
    }
    // Open destination file in write mode
    destFile = fopen(dest, "w");
    if (destFile == NULL) {
        printf("Error: Cannot create destination file.\n");
        fclose(srcFile);
        return 1;
    }
    // Copy content character by character
    while ((ch = fgetc(srcFile)) != EOF) {
        fputc(ch, destFile);
    }
    printf("File copied successfully.\n");
    // Close files
    fclose(srcFile);
    fclose(destFile);
    return 0;
}
