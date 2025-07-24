#include <stdio.h>

void prime(int x);  // Corrected function prototype

int main() {
    int num;

    printf("Enter the integer: ");
    scanf("%d", &num);  // Corrected scanf syntax

    printf("The prime factors of %d are: ", num);
    prime(num);  // Call the prime function

    return 0;
}

// Function to print prime factors recursively
void prime(int x) {
    int a;
    for (a = 2; a <= x; a++) {
        if (x % a == 0) {
            printf("%d ", a);  // Corrected printf
            prime(x / a);  // Recursive call
            break;  // Break after finding the first factor
        }
    }
}