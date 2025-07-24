#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, len, found = 1;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    len = strlen(str);
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            found = 0;
            break;
        }
    }
    if (found)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
} 