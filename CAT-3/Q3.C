#include <stdio.h>
int main() {
    FILE *fp1, *fp2;
    char file1[100], file2[100];
    char ch1, ch2;
    int areSame = 1;
    printf("Enter first file name: ");
    scanf("%s", file1);
    printf("Enter second file name: ");
    scanf("%s", file2);
    // Open files
    fp1 = fopen(file1, "r");
    fp2 = fopen(file2, "r");

    if (fp1 == NULL || fp2 == NULL) {
        printf("Error opening files!\n");
        return 1;
    }
    // Compare character by character
    while (1) {
        ch1 = fgetc(fp1);
        ch2 = fgetc(fp2);
        if (ch1 != ch2) {
            areSame = 0;
            break;
        }
    }
    fclose(fp1);
    fclose(fp2);
    if (areSame)
        printf("Files are identical.\n");
    else
        printf("Files are different.\n");
    return 0;
}
