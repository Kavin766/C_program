#include <stdio.h>

int main() {
    char source[100], substring[100];
    int start, length, i;
    printf("Enter the source string: ");
    fgets(source, sizeof(source), stdin);
    for (i = 0; source[i] != '\0'; i++) {
        if (source[i] == '\n') {
            source[i] = '\0';
            break;
        }
    }
    printf("Enter starting index (0-based): ");
    scanf("%d", &start);
    printf("Enter length of substring: ");
    scanf("%d", &length);
    for (i = 0; i < length; i++) {
        substring[i] = source[start + i];
    }
    substring[i] = '\0';
      printf("Extracted Substring: %s\n", substring);
    return 0; 
}
