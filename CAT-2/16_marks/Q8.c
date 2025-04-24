#include <stdio.h>
#include <ctype.h>

// Function to encrypt the password
void encrypt(char *password, int shift) {
    int i = 0;
    printf("Encrypted Password: ");
    while (password[i] != '\0') {
        char ch = password[i];
        if (isalpha(ch)) {
            char base = islower(ch) ? 'a' : 'A';
            ch = (ch - base + shift) % 26 + base;
        }
        printf("%c", ch);
        i++;
    }
    printf("\n");
}

// Function to decrypt the password
void decrypt(char *password, int shift) {
    int i = 0;
    printf("Decrypted Password: ");
    while (password[i] != '\0') {
        char ch = password[i];
        if (isalpha(ch)) {
            char base = islower(ch) ? 'a' : 'A';
            ch = (ch - base - shift + 26) % 26 + base;
        }
        printf("%c", ch);
        i++;
    }
    printf("\n");
}

// Main function to test the encryption and decryption
int main() {
    char password[100];
    int shift;

    printf("Enter password: ");
    scanf("%s", password);

    printf("Enter shift: ");
    scanf("%d", &shift);

    encrypt(password, shift);
    decrypt(password, shift);

    return 0;
}
