#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello";
    char str2[100] = "World";
    char str3[100];

    // 1. strcpy() - Copy string
    strcpy(str3, str1);
    printf("strcpy: %s\n", str3);

    // 2. strcat() - Concatenate strings
    strcat(str1, str2);
    printf("strcat: %s\n", str1);

    // 3. strlen() - String length
    printf("strlen: %lu\n", strlen(str1));

    // 4. strcmp() - Compare two strings
    int cmp = strcmp(str1, str2);
    printf("strcmp: %d\n", cmp);

    // 5. strchr() - Find a character in a string
    char *ch = strchr(str1, 'o');
    if (ch)
        printf("strchr: Character found at position %ld\n", ch - str1);
    else
        printf("strchr: Character not found\n");

    // 6. strstr() - Find a substring in a string
    char *substr = strstr(str1, "loWo");
    if (substr)
        printf("strstr: Substring found at position %ld\n", substr - str1);
    else
        printf("strstr: Substring not found\n");

    // 7. strrev() (not in standard library, but can be implemented)
    char str4[] = "CProgramming";
    int i, len = strlen(str4);
    for (i = 0; i < len /2 ; i++) {
        char temp = str4[i];
        str4[i] = str4[len - i - 1];
        str4[len - i - 1] = temp;
    }
    printf("strrev: %s\n", str4);

    return 0;
}
