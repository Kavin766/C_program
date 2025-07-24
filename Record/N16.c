#include <stdio.h>

// Recursive function to find factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("The negative number has no factorial.\n");
    } else {
        printf("Factorial is %d\n", factorial(num));
    }

    return 0;
}