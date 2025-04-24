#include <stdio.h>

int factorial(int n) {
    if (n <= 1) return;
    return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Factorial = %d\n", factorial(num));
    return 0;
}