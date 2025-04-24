#include <stdio.h>

void fibonacci(int n);

int main() {
    int n;
    printf("Enter total terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci series terms are: ");
    fibonacci(n);
    
    return 0;
}

void fibonacci(int n) {
    int a = 0, b = 1, next, i;
    
    for (i = 0; i < n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
}
