#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100], rev[100];
    printf("Enter product name: ");
    scanf("%s", str);
    
    // Convert to lowercase
    for(int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
    
    strcpy(rev, str);
    strrev(rev);
    
    if (strcmp(str, rev) == 0)
        printf("Palindrome");
    else
        printf("Not a Palindrome");
    
    return 0;
}
