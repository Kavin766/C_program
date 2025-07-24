#include <stdio.h>
#include <string.h>
int main() {
    char sonece[30];  // corrected variable name (optional: change to "source" or "input")
    int len, pos, start, i;
    printf("Enter string: ");
    gets(sonece);  // Note: unsafe, better to use fgets in real applications
    printf("Enter position to retrieve substring: ");
    scanf("%d", &pos);
    printf("Enter length of substring to retrieve: ");
    scanf("%d", &len);
    start = pos - 1;   
    printf("The Substring is: ");
    if (len == 0) {
        for (i = start; i < strlen(sonece); i++) {
            printf("%c", sonece[i]);
        }
    } else {
        for (i = start; i < start + len && i < strlen(sonece); i++) {
            printf("%c", sonece[i]);
        }
    }
    return 0;
}