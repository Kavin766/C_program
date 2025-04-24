#include <stdio.h>

int fibonacci(int);

int main() {
    int n, i;
    printf("Enter total terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci series terms are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    
    return 0;
}

int fibonacci(int n) {
    if (n == 0 || n == 1)
        return n;
    else
        return (fibonacci(n - 1) + fibonacci(n - 2));
}